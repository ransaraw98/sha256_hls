#include <systemc>
#include <vector>
#include <iostream>
#include "hls_stream.h"
#include "ap_int.h"
#include "ap_fixed.h"
using namespace std;
using namespace sc_dt;
class AESL_RUNTIME_BC {
  public:
    AESL_RUNTIME_BC(const char* name) {
      file_token.open( name);
      if (!file_token.good()) {
        cout << "Failed to open tv file " << name << endl;
        exit (1);
      }
      file_token >> mName;//[[[runtime]]]
    }
    ~AESL_RUNTIME_BC() {
      file_token.close();
    }
    int read_size () {
      int size = 0;
      file_token >> mName;//[[transaction]]
      file_token >> mName;//transaction number
      file_token >> mName;//pop_size
      size = atoi(mName.c_str());
      file_token >> mName;//[[/transaction]]
      return size;
    }
  public:
    fstream file_token;
    string mName;
};
unsigned int ap_apatb_istateREG_V_cap_bc;
static AESL_RUNTIME_BC __xlx_istateREG_V_size_Reader("../tv/stream_size/stream_size_in_istateREG_V.dat");
unsigned int ap_apatb_idata_V_cap_bc;
static AESL_RUNTIME_BC __xlx_idata_V_size_Reader("../tv/stream_size/stream_size_in_idata_V.dat");
unsigned int ap_apatb_ohash_V_cap_bc;
static AESL_RUNTIME_BC __xlx_ohash_V_size_Reader("../tv/stream_size/stream_size_out_ohash_V.dat");
extern "C" void sha256(int*, char*, char*);
extern "C" void apatb_sha256_hw(volatile void * __xlx_apatb_param_istateREG, volatile void * __xlx_apatb_param_idata, volatile void * __xlx_apatb_param_ohash) {
  // collect __xlx_istateREG_tmp_vec
  unsigned __xlx_istateREG_V_tmp_Count = 0;
  unsigned __xlx_istateREG_V_read_Size = __xlx_istateREG_V_size_Reader.read_size();
  vector<int> __xlx_istateREG_tmp_vec;
  while (!((hls::stream<int>*)__xlx_apatb_param_istateREG)->empty() && __xlx_istateREG_V_tmp_Count < __xlx_istateREG_V_read_Size) {
    __xlx_istateREG_tmp_vec.push_back(((hls::stream<int>*)__xlx_apatb_param_istateREG)->read());
    __xlx_istateREG_V_tmp_Count++;
  }
  ap_apatb_istateREG_V_cap_bc = __xlx_istateREG_tmp_vec.size();
  // store input buffer
  int* __xlx_istateREG_input_buffer= new int[__xlx_istateREG_tmp_vec.size()];
  for (int i = 0; i < __xlx_istateREG_tmp_vec.size(); ++i) {
    __xlx_istateREG_input_buffer[i] = __xlx_istateREG_tmp_vec[i];
  }
  // collect __xlx_idata_tmp_vec
  unsigned __xlx_idata_V_tmp_Count = 0;
  unsigned __xlx_idata_V_read_Size = __xlx_idata_V_size_Reader.read_size();
  vector<char> __xlx_idata_tmp_vec;
  while (!((hls::stream<char>*)__xlx_apatb_param_idata)->empty() && __xlx_idata_V_tmp_Count < __xlx_idata_V_read_Size) {
    __xlx_idata_tmp_vec.push_back(((hls::stream<char>*)__xlx_apatb_param_idata)->read());
    __xlx_idata_V_tmp_Count++;
  }
  ap_apatb_idata_V_cap_bc = __xlx_idata_tmp_vec.size();
  // store input buffer
  char* __xlx_idata_input_buffer= new char[__xlx_idata_tmp_vec.size()];
  for (int i = 0; i < __xlx_idata_tmp_vec.size(); ++i) {
    __xlx_idata_input_buffer[i] = __xlx_idata_tmp_vec[i];
  }
  //Create input buffer for ohash
  ap_apatb_ohash_V_cap_bc = __xlx_ohash_V_size_Reader.read_size();
  char* __xlx_ohash_input_buffer= new char[ap_apatb_ohash_V_cap_bc];
  // DUT call
  sha256(__xlx_istateREG_input_buffer, __xlx_idata_input_buffer, __xlx_ohash_input_buffer);
  for (unsigned i = 0; i <ap_apatb_ohash_V_cap_bc; ++i)
    ((hls::stream<char>*)__xlx_apatb_param_ohash)->write(__xlx_ohash_input_buffer[i]);
}
