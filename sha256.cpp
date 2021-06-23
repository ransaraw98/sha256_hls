/*********************************************************************
* Filename:   sha256.c
              This implementation uses little endian byte order.
*********************************************************************/

/*************************** HEADER FILES ***************************/
#include <stdlib.h>
#include <memory.h>
#include "sha256.h"

/*********************** FUNCTION DEFINITIONS ***********************/

void sha256(WORD stateREG[], const BYTE data[],BYTE hash[32])
{
	/*WORD stateREG[8];
	BYTE data[64];
	//BYTE hash[32];
	copy1:for(int iter = 7; iter >=0; iter--)
		stateREG[iter] = FstateREG[iter];

	copy2:for(int iter = 0; iter <64; iter++)
			data[iter] = Fdata[iter];
*/

	WORD a, b, c, d, e, f, g, h, i, j, t1, t2, m[64];

	convert_to_words:for (i = 0, j = 0; i < 16; ++i, j += 4)
		// this can be removed if needed
		m[i] = (data[j] << 24) | (data[j + 1] << 16) | (data[j + 2] << 8) | (data[j + 3]); // data has 64 bytes, convert them to WORDS and store in m
	create_schedule:for ( ; i < 64; ++i)
		m[i] = SIG1(m[i - 2]) + m[i - 7] + SIG0(m[i - 15]) + m[i - 16]; // create the rest of the schedule

//initialization , is it possible to do these in parallel?
	a = stateREG[0];
	b = stateREG[1];
	c = stateREG[2];
	d = stateREG[3];
	e = stateREG[4];
	f = stateREG[5];
	g = stateREG[6];
	h = stateREG[7];

//compression
	compression:for (i = 0; i < 64; ++i) {
		t1 = h + EP1(e) + CH(e,f,g) + k[i] + m[i];
		t2 = EP0(a) + MAJ(a,b,c);
		h = g;
		g = f;
		f = e;
		e = d + t1;
		d = c;
		c = b;
		b = a;
		a = t1 + t2;
	}

//final addition

	stateREG[0] += a;
	stateREG[1] += b;
	stateREG[2] += c;
	stateREG[3] += d;
	stateREG[4] += e;
	stateREG[5] += f;
	stateREG[6] += g;
	stateREG[7] += h;

	WORD r;

	//this shouldn't be synthesized
	// Since this implementation uses little endian byte ordering and SHA uses big endian,
	// reverse all the bytes when copying the final state to the output hash.
	convert_endianess:for (r = 0; r < 4; ++r) {  //parallelized
		hash[r]      = (stateREG[0] >> (24 - r * 8)) & 0x000000ff;
		hash[r + 4]  = (stateREG[1] >> (24 - r * 8)) & 0x000000ff;
		hash[r + 8]  = (stateREG[2] >> (24 - r * 8)) & 0x000000ff;
		hash[r + 12] = (stateREG[3] >> (24 - r * 8)) & 0x000000ff;
		hash[r + 16] = (stateREG[4] >> (24 - r * 8)) & 0x000000ff;
		hash[r + 20] = (stateREG[5] >> (24 - r * 8)) & 0x000000ff;
		hash[r + 24] = (stateREG[6] >> (24 - r * 8)) & 0x000000ff;
		hash[r + 28] = (stateREG[7] >> (24 - r * 8)) & 0x000000ff;
	}

}
