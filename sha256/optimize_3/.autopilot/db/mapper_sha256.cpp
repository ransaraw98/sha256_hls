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
extern "C" void sha256(volatile void *, volatile void *, char*);
extern "C" void apatb_sha256_hw(volatile void * __xlx_apatb_param_stateREG, volatile void * __xlx_apatb_param_data, volatile void * __xlx_apatb_param_hash) {
  // Collect __xlx_hash__tmp_vec
  vector<sc_bv<8> >__xlx_hash__tmp_vec;
  for (int j = 0, e = 32; j != e; ++j) {
    __xlx_hash__tmp_vec.push_back(((char*)__xlx_apatb_param_hash)[j]);
  }
  int __xlx_size_param_hash = 32;
  int __xlx_offset_param_hash = 0;
  int __xlx_offset_byte_param_hash = 0*1;
  char* __xlx_hash__input_buffer= new char[__xlx_hash__tmp_vec.size()];
  for (int i = 0; i < __xlx_hash__tmp_vec.size(); ++i) {
    __xlx_hash__input_buffer[i] = __xlx_hash__tmp_vec[i].range(7, 0).to_uint64();
  }
  // DUT call
  sha256(__xlx_apatb_param_stateREG, __xlx_apatb_param_data, __xlx_hash__input_buffer);
// print __xlx_apatb_param_hash
  sc_bv<8>*__xlx_hash_output_buffer = new sc_bv<8>[__xlx_size_param_hash];
  for (int i = 0; i < __xlx_size_param_hash; ++i) {
    __xlx_hash_output_buffer[i] = __xlx_hash__input_buffer[i+__xlx_offset_param_hash];
  }
  for (int i = 0; i < __xlx_size_param_hash; ++i) {
    ((char*)__xlx_apatb_param_hash)[i] = __xlx_hash_output_buffer[i].to_uint64();
  }
}
