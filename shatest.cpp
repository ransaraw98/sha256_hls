/*********************************************************************
* Filename:   shatest.c
/*************************** HEADER FILES ***************************/
#include <stdio.h>
#include <memory.h>
#include <string.h>
#include "sha256.h"
#include <hls_stream.h>

/*********************** FUNCTION DEFINITIONS ***********************/

int main()
{
	/*BYTE text1[] = {"abc"};
	BYTE text2[] = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
	BYTE text3[] = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
	BYTE hash1[SHA256_BLOCK_SIZE] = {0xba,0x78,0x16,0xbf,0x8f,0x01,0xcf,0xea,0x41,0x41,0x40,0xde,0x5d,0xae,0x22,0x23,
	                                 0xb0,0x03,0x61,0xa3,0x96,0x17,0x7a,0x9c,0xb4,0x10,0xff,0x61,0xf2,0x00,0x15,0xad};
	BYTE hash2[SHA256_BLOCK_SIZE] = {0x24,0x8d,0x6a,0x61,0xd2,0x06,0x38,0xb8,0xe5,0xc0,0x26,0x93,0x0c,0x3e,0x60,0x39,
	                                 0xa3,0x3c,0xe4,0x59,0x64,0xff,0x21,0x67,0xf6,0xec,0xed,0xd4,0x19,0xdb,0x06,0xc1};
	BYTE hash3[SHA256_BLOCK_SIZE] = {0xcd,0xc7,0x6e,0x5c,0x99,0x14,0xfb,0x92,0x81,0xa1,0xc7,0xe2,0x84,0xd7,0x3e,0x67,
	                                 0xf1,0x80,0x9a,0x48,0xa4,0x97,0x20,0x0e,0x04,0x6d,0x39,0xcc,0xc7,0x11,0x2c,0xd0};
*/
	//BYTE toutHash[SHA256_BLOCK_SIZE];
	 BYTE tinData[64] ={0x61,0x62,0x63,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
						0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
						0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
						0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
						0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18};

	WORD tinStateREG[8]={0x6a09e667,
						0xbb67ae85,
						0x3c6ef372,
						0xa54ff53a,
						0x510e527f,
						0x9b05688c,
						0x1f83d9ab,
						0x5be0cd19
					};

	hls::stream<BYTE> inDataFIFO;
	hls::stream<WORD> inStateREGFIFO;
	hls::stream<BYTE> outHashFIFO;

for(int n=0;n<64;n++){
	//unsigned char temp = tinData[n];
	inDataFIFO.write(tinData[n]);
	//printf("%d ; %02X\n",n,temp);

}
for(int n=0;n<8;n++){

	inStateREGFIFO.write(tinStateREG[n]);

}


	/*BYTE hash[SHA256_BLOCK_SIZE]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	BYTE data[SHA256_BLOCK_SIZE*2] = { 0x63,0x61,0x62,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18};

	WORD stateREG[8];

	//Initialization of the state registers
	stateREG[0] = 0x6a09e667;
	stateREG[1] = 0xbb67ae85;
	stateREG[2] = 0x3c6ef372;
	stateREG[3] = 0xa54ff53a;
	stateREG[4] = 0x510e527f;
	stateREG[5] = 0x9b05688c;
	stateREG[6] = 0x1f83d9ab;
	stateREG[7] = 0x5be0cd19; */




	sha256(inStateREGFIFO, inDataFIFO ,outHashFIFO);

	while(!outHashFIFO.empty()){
		printf("%02X",outHashFIFO.read());

	}
	printf("\n");
	return(0);
}
