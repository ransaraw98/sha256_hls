# 1 "sha256.cpp"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 395 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\etc/autopilot_ssdm_op.h" 1
# 158 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
extern "C" {






    void _ssdm_op_IfRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));


    void _ssdm_StreamRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_ReadReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_Read(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_WriteReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_Write(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_NbReadReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_NbWriteReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));




    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_Wait(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_Return(...) __attribute__ ((nothrow)) __attribute__((overloadable));


    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow)) __attribute__((overloadable));


    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow)) __attribute__((overloadable));




    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_RegionBegin(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_Unroll(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_InlineAll(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_Inline(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecStream(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecStable(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecStableContent(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecBindPort(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecPipoDepth(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecExpr(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecDependence(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_DataPack(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void __xilinx_ip_top(...) __attribute__ ((nothrow)) __attribute__((overloadable));


}
# 2 "<built-in>" 2
# 1 "sha256.cpp" 2






# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\stdlib.h" 1 3
# 36 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\stdlib.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cstdlib" 1 3
# 40 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cstdlib" 3

# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/c++config.h" 1 3
# 196 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/c++config.h" 3
namespace std
{
  typedef long unsigned int size_t;
  typedef long int ptrdiff_t;


  typedef decltype(nullptr) nullptr_t;

}
# 218 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/c++config.h" 3
namespace std
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
namespace __gnu_cxx
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
# 495 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/c++config.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/os_defines.h" 1 3
# 496 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/c++config.h" 2 3


# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/cpu_defines.h" 1 3
# 499 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/c++config.h" 2 3
# 42 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cstdlib" 2 3
# 75 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cstdlib" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 1 3








# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\crtdefs.h" 1 3
# 10 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\crtdefs.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 1 3
# 12 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include/_mingw_mac.h" 1 3
# 13 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include/_mingw_secapi.h" 1 3
# 44 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include/_mingw_secapi.h" 3
extern "C++" {
template <bool __test, typename __dsttype>
  struct __if_array;
template <typename __dsttype>
  struct __if_array <true, __dsttype> {
    typedef __dsttype __type;
};
}
# 14 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 2 3
# 275 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 3
# 1 "C:\\Xilinx\\Vitis_HLS\\2020.2\\win64\\tools\\clang-3.9-csynth\\lib\\clang\\7.0.0\\include\\vadefs.h" 1 3
# 26 "C:\\Xilinx\\Vitis_HLS\\2020.2\\win64\\tools\\clang-3.9-csynth\\lib\\clang\\7.0.0\\include\\vadefs.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\vadefs.h" 1 3








# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 1 3
# 565 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include/sdks/_mingw_directx.h" 1 3
# 566 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include/sdks/_mingw_ddk.h" 1 3
# 567 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 2 3
# 10 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\vadefs.h" 2 3




#pragma pack(push,_CRT_PACKING)



extern "C" {





  typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 99 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\vadefs.h" 3
}



#pragma pack(pop)
# 27 "C:\\Xilinx\\Vitis_HLS\\2020.2\\win64\\tools\\clang-3.9-csynth\\lib\\clang\\7.0.0\\include\\vadefs.h" 2 3
# 276 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 2 3
# 534 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 3
extern "C" {
# 548 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 3
const char *__mingw_get_crt_info (void);


}
# 11 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\crtdefs.h" 2 3




#pragma pack(push,_CRT_PACKING)
# 35 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\crtdefs.h" 3
__extension__ typedef unsigned long size_t;
# 45 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\crtdefs.h" 3
__extension__ typedef long ssize_t;






typedef size_t rsize_t;
# 62 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\crtdefs.h" 3
__extension__ typedef long intptr_t;
# 75 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\crtdefs.h" 3
__extension__ typedef unsigned long uintptr_t;
# 88 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\crtdefs.h" 3
__extension__ typedef long ptrdiff_t;
# 106 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\crtdefs.h" 3
typedef unsigned short wint_t;
typedef unsigned short wctype_t;





typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long __time64_t;
# 138 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\crtdefs.h" 3
typedef __time64_t time_t;
# 422 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\crtdefs.h" 3
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;



typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;




typedef struct threadlocaleinfostruct {
  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6];
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct lconv *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  struct __lc_time_data *lc_time_curr;
} threadlocinfo;







#pragma pack(pop)
# 10 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 2 3
# 1 "C:\\Xilinx\\Vitis_HLS\\2020.2\\win64\\tools\\clang-3.9-csynth\\lib\\clang\\7.0.0\\include\\limits.h" 1 3
# 37 "C:\\Xilinx\\Vitis_HLS\\2020.2\\win64\\tools\\clang-3.9-csynth\\lib\\clang\\7.0.0\\include\\limits.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\limits.h" 1 3
# 38 "C:\\Xilinx\\Vitis_HLS\\2020.2\\win64\\tools\\clang-3.9-csynth\\lib\\clang\\7.0.0\\include\\limits.h" 2 3
# 11 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 2 3





#pragma pack(push,_CRT_PACKING)


extern "C" {
# 40 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 3
  typedef int (__attribute__((__cdecl__)) *_onexit_t)(void);
# 50 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 3
  typedef struct _div_t {
    int quot;
    int rem;
  } div_t;

  typedef struct _ldiv_t {
    long quot;
    long rem;
  } ldiv_t;





#pragma pack(4)
 typedef struct {
    unsigned char ld[10];
  } _LDOUBLE;
#pragma pack()



 typedef struct {
    double x;
  } _CRT_DOUBLE;

  typedef struct {
    float f;
  } _CRT_FLOAT;




  typedef struct {
    long double x;
  } _LONGDOUBLE;



#pragma pack(4)
 typedef struct {
    unsigned char ld12[12];
  } _LDBL12;
#pragma pack()
# 105 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 3
 extern int * __imp___mb_cur_max;
# 131 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 3
  typedef void (__attribute__((__cdecl__)) *_purecall_handler)(void);

  __attribute__ ((__dllimport__)) _purecall_handler __attribute__((__cdecl__)) _set_purecall_handler(_purecall_handler _Handler);
  __attribute__ ((__dllimport__)) _purecall_handler __attribute__((__cdecl__)) _get_purecall_handler(void);

  typedef void (__attribute__((__cdecl__)) *_invalid_parameter_handler)(const wchar_t *,const wchar_t *,const wchar_t *,unsigned int,uintptr_t);
  __attribute__ ((__dllimport__)) _invalid_parameter_handler __attribute__((__cdecl__)) _set_invalid_parameter_handler(_invalid_parameter_handler _Handler);
  __attribute__ ((__dllimport__)) _invalid_parameter_handler __attribute__((__cdecl__)) _get_invalid_parameter_handler(void);



  __attribute__ ((__dllimport__)) extern int *__attribute__((__cdecl__)) _errno(void);

  errno_t __attribute__((__cdecl__)) _set_errno(int _Value);
  errno_t __attribute__((__cdecl__)) _get_errno(int *_Value);

  __attribute__ ((__dllimport__)) unsigned long *__attribute__((__cdecl__)) __doserrno(void);

  errno_t __attribute__((__cdecl__)) _set_doserrno(unsigned long _Value);
  errno_t __attribute__((__cdecl__)) _get_doserrno(unsigned long *_Value);




  extern __attribute__ ((__dllimport__)) char *_sys_errlist[1];
  extern __attribute__ ((__dllimport__)) int _sys_nerr;
# 171 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 3
  extern int * __imp___argc;







  extern char *** __imp___argv;







  extern wchar_t *** __imp___wargv;
# 199 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 3
  extern char *** __imp__environ;
# 208 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 3
  extern wchar_t *** __imp__wenviron;
# 217 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 3
  extern char ** __imp__pgmptr;
# 226 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 3
  extern wchar_t ** __imp__wpgmptr;



  errno_t __attribute__((__cdecl__)) _get_pgmptr(char **_Value);
  errno_t __attribute__((__cdecl__)) _get_wpgmptr(wchar_t **_Value);




  extern int * __imp__fmode;



  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _set_fmode(int _Mode);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _get_fmode(int *_PMode);





  extern unsigned int * __imp__osplatform;
# 256 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 3
  extern unsigned int * __imp__osver;
# 265 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 3
  extern unsigned int * __imp__winver;
# 274 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 3
  extern unsigned int * __imp__winmajor;
# 283 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 3
  extern unsigned int * __imp__winminor;




  errno_t __attribute__((__cdecl__)) _get_osplatform(unsigned int *_Value);
  errno_t __attribute__((__cdecl__)) _get_osver(unsigned int *_Value);
  errno_t __attribute__((__cdecl__)) _get_winver(unsigned int *_Value);
  errno_t __attribute__((__cdecl__)) _get_winmajor(unsigned int *_Value);
  errno_t __attribute__((__cdecl__)) _get_winminor(unsigned int *_Value);




  extern "C++" {
    template <typename _CountofType,size_t _SizeOfArray> char (*__countof_helper( _CountofType (&_Array)[_SizeOfArray]))[_SizeOfArray];

  }





  void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) exit(int _Code) __attribute__ ((__noreturn__));
  void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _exit(int _Code) __attribute__ ((__noreturn__));



  void __attribute__((__cdecl__)) _Exit(int) __attribute__ ((__noreturn__));
# 320 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 3
  void __attribute__((__cdecl__)) __attribute__((noreturn)) abort(void);




  __attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) _set_abort_behavior(unsigned int _Flags,unsigned int _Mask);



  int __attribute__((__cdecl__)) abs(int _X);
  long __attribute__((__cdecl__)) labs(long _X);


  __extension__ long __attribute__((__cdecl__)) _abs64(long);

  extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) long __attribute__((__cdecl__)) _abs64(long x) {
    return __builtin_llabs(x);
  }


  int __attribute__((__cdecl__)) atexit(void (__attribute__((__cdecl__)) *)(void));


  double __attribute__((__cdecl__)) atof(const char *_String);
  double __attribute__((__cdecl__)) _atof_l(const char *_String,_locale_t _Locale);

  int __attribute__((__cdecl__)) atoi(const char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atoi_l(const char *_Str,_locale_t _Locale);
  long __attribute__((__cdecl__)) atol(const char *_Str);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _atol_l(const char *_Str,_locale_t _Locale);


  void *__attribute__((__cdecl__)) bsearch(const void *_Key,const void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__attribute__((__cdecl__)) *_PtFuncCompare)(const void *,const void *));
  void __attribute__((__cdecl__)) qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__attribute__((__cdecl__)) *_PtFuncCompare)(const void *,const void *));

  unsigned short __attribute__((__cdecl__)) _byteswap_ushort(unsigned short _Short);
  unsigned long __attribute__((__cdecl__)) _byteswap_ulong (unsigned long _Long);
  __extension__ unsigned long __attribute__((__cdecl__)) _byteswap_uint64(unsigned long _Int64);
  div_t __attribute__((__cdecl__)) div(int _Numerator,int _Denominator);
  char *__attribute__((__cdecl__)) getenv(const char *_VarName) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _itoa(int _Value,char *_Dest,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _i64toa(long _Val,char *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _ui64toa(unsigned long _Val,char *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _atoi64(const char *_String);
  __extension__ __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _atoi64_l(const char *_String,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _strtoi64(const char *_String,char **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _strtoi64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long __attribute__((__cdecl__)) _strtoui64(const char *_String,char **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long __attribute__((__cdecl__)) _strtoui64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  ldiv_t __attribute__((__cdecl__)) ldiv(long _Numerator,long _Denominator);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _ltoa(long _Value,char *_Dest,int _Radix) ;
  int __attribute__((__cdecl__)) mblen(const char *_Ch,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _mblen_l(const char *_Ch,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _mbstrlen(const char *_Str);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _mbstrlen_l(const char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _mbstrnlen(const char *_Str,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _mbstrnlen_l(const char *_Str,size_t _MaxCount,_locale_t _Locale);
  int __attribute__((__cdecl__)) mbtowc(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _mbtowc_l(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale);
  size_t __attribute__((__cdecl__)) mbstowcs(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _mbstowcs_l(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale);
  int __attribute__((__cdecl__)) mkstemp(char *template_name);
  int __attribute__((__cdecl__)) rand(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _set_error_mode(int _Mode);
  void __attribute__((__cdecl__)) srand(unsigned int _Seed);
# 395 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 3
inline __attribute__((__cdecl__))
double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtod(const char * __restrict__ _Str,char ** __restrict__ _EndPtr)
{
  double __attribute__((__cdecl__)) __mingw_strtod (const char * __restrict__, char ** __restrict__);
  return __mingw_strtod( _Str, _EndPtr);
}

inline __attribute__((__cdecl__))
float __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtof(const char * __restrict__ _Str,char ** __restrict__ _EndPtr)
{
  float __attribute__((__cdecl__)) __mingw_strtof (const char * __restrict__, char ** __restrict__);
  return __mingw_strtof( _Str, _EndPtr);
}






  long double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtold(const char * __restrict__ , char ** __restrict__ );


  extern double __attribute__((__cdecl__)) __attribute__ ((__nothrow__))
  __strtod (const char * __restrict__ , char ** __restrict__);






  float __attribute__((__cdecl__)) __mingw_strtof (const char * __restrict__, char ** __restrict__);
  double __attribute__((__cdecl__)) __mingw_strtod (const char * __restrict__, char ** __restrict__);
  long double __attribute__((__cdecl__)) __mingw_strtold(const char * __restrict__, char ** __restrict__);

  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _strtod_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,_locale_t _Locale);
  long __attribute__((__cdecl__)) strtol(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _strtol_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long __attribute__((__cdecl__)) strtoul(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long __attribute__((__cdecl__)) _strtoul_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);


  int __attribute__((__cdecl__)) system(const char *_Command);

  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _ultoa(unsigned long _Value,char *_Dest,int _Radix) ;
  int __attribute__((__cdecl__)) wctomb(char *_MbCh,wchar_t _WCh) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wctomb_l(char *_MbCh,wchar_t _WCh,_locale_t _Locale) ;
  size_t __attribute__((__cdecl__)) wcstombs(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _wcstombs_l(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale) ;



  void *__attribute__((__cdecl__)) calloc(size_t _NumOfElements,size_t _SizeOfElements);
  void __attribute__((__cdecl__)) free(void *_Memory);
  void *__attribute__((__cdecl__)) malloc(size_t _Size);
  void *__attribute__((__cdecl__)) realloc(void *_Memory,size_t _NewSize);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _recalloc(void *_Memory,size_t _Count,size_t _Size);






  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _aligned_free(void *_Memory);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_malloc(size_t _Size,size_t _Alignment);



  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_offset_malloc(size_t _Size,size_t _Alignment,size_t _Offset);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_realloc(void *_Memory,size_t _Size,size_t _Alignment);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_offset_realloc(void *_Memory,size_t _Size,size_t _Alignment,size_t _Offset);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_offset_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment,size_t _Offset);





  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _itow(int _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _ltow(long _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _ultow(unsigned long _Value,wchar_t *_Dest,int _Radix) ;

  double __attribute__((__cdecl__)) __mingw_wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr);
  float __attribute__((__cdecl__)) __mingw_wcstof(const wchar_t * __restrict__ nptr, wchar_t ** __restrict__ endptr);
  long double __attribute__((__cdecl__)) __mingw_wcstold(const wchar_t * __restrict__, wchar_t ** __restrict__);


  inline __attribute__((__cdecl__))
  double __attribute__((__cdecl__)) wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr){
    return __mingw_wcstod(_Str,_EndPtr);
  }
  inline __attribute__((__cdecl__))
  float __attribute__((__cdecl__)) wcstof(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr){
    return __mingw_wcstof(_Str,_EndPtr);
  }






  long double __attribute__((__cdecl__)) wcstold(const wchar_t * __restrict__, wchar_t ** __restrict__);

  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _wcstod_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,_locale_t _Locale);
  long __attribute__((__cdecl__)) wcstol(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _wcstol_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long __attribute__((__cdecl__)) wcstoul(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long __attribute__((__cdecl__)) _wcstoul_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wgetenv(const wchar_t *_VarName) ;


  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wsystem(const wchar_t *_Command);

  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _wtof(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _wtof_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wtoi(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wtoi_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _wtol(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _wtol_l(const wchar_t *_Str,_locale_t _Locale);

  __extension__ __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _i64tow(long _Val,wchar_t *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _ui64tow(unsigned long _Val,wchar_t *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _wtoi64(const wchar_t *_Str);
  __extension__ __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _wtoi64_l(const wchar_t *_Str,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _wcstoi64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _wcstoi64_l(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long __attribute__((__cdecl__)) _wcstoui64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long __attribute__((__cdecl__)) _wcstoui64_l(const wchar_t *_Str ,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);


  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putenv(const char *_EnvString);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wputenv(const wchar_t *_EnvString);



  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _fullpath(char *_FullPath,const char *_Path,size_t _SizeInBytes);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _gcvt(double _Val,int _NumOfDigits,char *_DstBuf) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atodbl(_CRT_DOUBLE *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atoldbl(_LDOUBLE *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atoflt(_CRT_FLOAT *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atodbl_l(_CRT_DOUBLE *_Result,char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atoldbl_l(_LDOUBLE *_Result,char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale);
# 554 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 3
unsigned long __attribute__((__cdecl__)) _lrotl(unsigned long,int);
unsigned long __attribute__((__cdecl__)) _lrotr(unsigned long,int);





  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _makepath(char *_Path,const char *_Drive,const char *_Dir,const char *_Filename,const char *_Ext);
  _onexit_t __attribute__((__cdecl__)) _onexit(_onexit_t _Func);



  void __attribute__((__cdecl__)) perror(const char *_ErrMsg);





  __extension__ unsigned long __attribute__((__cdecl__)) _rotl64(unsigned long _Val,int _Shift);
  __extension__ unsigned long __attribute__((__cdecl__)) _rotr64(unsigned long Value,int Shift);






  unsigned int __attribute__((__cdecl__)) _rotr(unsigned int _Val,int _Shift);
  unsigned int __attribute__((__cdecl__)) _rotl(unsigned int _Val,int _Shift);


  __extension__ unsigned long __attribute__((__cdecl__)) _rotr64(unsigned long _Val,int _Shift);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _searchenv(const char *_Filename,const char *_EnvVar,char *_ResultPath) ;
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _splitpath(const char *_FullPath,char *_Drive,char *_Dir,char *_Filename,char *_Ext) ;
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _swab(char *_Buf1,char *_Buf2,int _SizeInBytes);



  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wfullpath(wchar_t *_FullPath,const wchar_t *_Path,size_t _SizeInWords);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wmakepath(wchar_t *_ResultPath,const wchar_t *_Drive,const wchar_t *_Dir,const wchar_t *_Filename,const wchar_t *_Ext);


  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wperror(const wchar_t *_ErrMsg);

  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wsearchenv(const wchar_t *_Filename,const wchar_t *_EnvVar,wchar_t *_ResultPath) ;
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wsplitpath(const wchar_t *_FullPath,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,wchar_t *_Ext) ;


  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _beep(unsigned _Frequency,unsigned _Duration) __attribute__ ((__deprecated__));

  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _seterrormode(int _Mode) __attribute__ ((__deprecated__));
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _sleep(unsigned long _Duration) __attribute__ ((__deprecated__));
# 625 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 3
  char *__attribute__((__cdecl__)) ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) ;
  char *__attribute__((__cdecl__)) fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) ;
  char *__attribute__((__cdecl__)) gcvt(double _Val,int _NumOfDigits,char *_DstBuf) ;
  char *__attribute__((__cdecl__)) itoa(int _Val,char *_DstBuf,int _Radix) ;
  char *__attribute__((__cdecl__)) ltoa(long _Val,char *_DstBuf,int _Radix) ;
  int __attribute__((__cdecl__)) putenv(const char *_EnvString) ;



  void __attribute__((__cdecl__)) swab(char *_Buf1,char *_Buf2,int _SizeInBytes) ;


  char *__attribute__((__cdecl__)) ultoa(unsigned long _Val,char *_Dstbuf,int _Radix) ;
  _onexit_t __attribute__((__cdecl__)) onexit(_onexit_t _Func);





  typedef struct { __extension__ long long quot, rem; } lldiv_t;

  __extension__ lldiv_t __attribute__((__cdecl__)) lldiv(long long, long long);

  __extension__ long long __attribute__((__cdecl__)) llabs(long long);




  __extension__ long long __attribute__((__cdecl__)) strtoll(const char * __restrict__, char ** __restrict, int);
  __extension__ unsigned long long __attribute__((__cdecl__)) strtoull(const char * __restrict__, char ** __restrict__, int);


  __extension__ long long __attribute__((__cdecl__)) atoll (const char *);


  __extension__ long long __attribute__((__cdecl__)) wtoll (const wchar_t *);
  __extension__ char *__attribute__((__cdecl__)) lltoa (long long, char *, int);
  __extension__ char *__attribute__((__cdecl__)) ulltoa (unsigned long long , char *, int);
  __extension__ wchar_t *__attribute__((__cdecl__)) lltow (long long, wchar_t *, int);
  __extension__ wchar_t *__attribute__((__cdecl__)) ulltow (unsigned long long, wchar_t *, int);
# 680 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 3
}


#pragma pack(pop)


# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\sec_api/stdlib_s.h" 1 3








# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\stdlib.h" 1 3
# 30 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\stdlib.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 1 3
# 31 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\stdlib.h" 2 3
# 10 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\sec_api/stdlib_s.h" 2 3




extern "C" {


  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _dupenv_s(char **_PBuffer,size_t *_PBufferSizeInBytes,const char *_VarName);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _itoa_s(int _Value,char *_DstBuf,size_t _Size,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _i64toa_s(long _Val,char *_DstBuf,size_t _Size,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ui64toa_s(unsigned long _Val,char *_DstBuf,size_t _Size,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ltoa_s(long _Val,char *_DstBuf,size_t _Size,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) mbstowcs_s(size_t *_PtNumOfCharConverted,wchar_t *_DstBuf,size_t _SizeInWords,const char *_SrcBuf,size_t _MaxCount);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _mbstowcs_s_l(size_t *_PtNumOfCharConverted,wchar_t *_DstBuf,size_t _SizeInWords,const char *_SrcBuf,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ultoa_s(unsigned long _Val,char *_DstBuf,size_t _Size,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcstombs_s(size_t *_PtNumOfCharConverted,char *_Dst,size_t _DstSizeInBytes,const wchar_t *_Src,size_t _MaxCountInBytes);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcstombs_s_l(size_t *_PtNumOfCharConverted,char *_Dst,size_t _DstSizeInBytes,const wchar_t *_Src,size_t _MaxCountInBytes,_locale_t _Locale);



  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _itow_s (int _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ltow_s (long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ultow_s (unsigned long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wgetenv_s(size_t *_ReturnSize,wchar_t *_DstBuf,size_t _DstSizeInWords,const wchar_t *_VarName);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wdupenv_s(wchar_t **_Buffer,size_t *_BufferSizeInWords,const wchar_t *_VarName);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _i64tow_s(long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ui64tow_s(unsigned long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);



  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ecvt_s(char *_DstBuf,size_t _Size,double _Val,int _NumOfDights,int *_PtDec,int *_PtSign);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _fcvt_s(char *_DstBuf,size_t _Size,double _Val,int _NumOfDec,int *_PtDec,int *_PtSign);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _gcvt_s(char *_DstBuf,size_t _Size,double _Val,int _NumOfDigits);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _makepath_s(char *_PathResult,size_t _Size,const char *_Drive,const char *_Dir,const char *_Filename,const char *_Ext);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _putenv_s(const char *_Name,const char *_Value);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _searchenv_s(const char *_Filename,const char *_EnvVar,char *_ResultPath,size_t _SizeInBytes);

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _splitpath_s(const char *_FullPath,char *_Drive,size_t _DriveSize,char *_Dir,size_t _DirSize,char *_Filename,size_t _FilenameSize,char *_Ext,size_t _ExtSize);
  extern "C++" { template <size_t __drive_size, size_t __dir_size, size_t __name_size, size_t __ext_size> inline errno_t __attribute__((__cdecl__)) _splitpath_s(const char *_Dest, char (&__drive)[__drive_size], char (&__dir)[__dir_size], char (&__name)[__name_size], char (&__ext)[__ext_size]) { return _splitpath_s(_Dest, __drive, __drive_size, __dir, __dir_size, __name, __name_size, __ext, __ext_size); } }



  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wmakepath_s(wchar_t *_PathResult,size_t _SizeInWords,const wchar_t *_Drive,const wchar_t *_Dir,const wchar_t *_Filename,const wchar_t *_Ext);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wputenv_s(const wchar_t *_Name,const wchar_t *_Value);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wsearchenv_s(const wchar_t *_Filename,const wchar_t *_EnvVar,wchar_t *_ResultPath,size_t _SizeInWords);

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wsplitpath_s(const wchar_t *_FullPath,wchar_t *_Drive,size_t _DriveSizeInWords,wchar_t *_Dir,size_t _DirSizeInWords,wchar_t *_Filename,size_t _FilenameSizeInWords,wchar_t *_Ext,size_t _ExtSizeInWords);
  extern "C++" { template <size_t __drive_size, size_t __dir_size, size_t __name_size, size_t __ext_size> inline errno_t __attribute__((__cdecl__)) _wsplitpath_s(const wchar_t *_Dest, wchar_t (&__drive)[__drive_size], wchar_t (&__dir)[__dir_size], wchar_t (&__name)[__name_size], wchar_t (&__ext)[__ext_size]) { return _wsplitpath_s(_Dest, __drive, __drive_size, __dir, __dir_size, __name, __name_size, __ext, __ext_size); } }





  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) qsort_s(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__attribute__((__cdecl__)) *_PtFuncCompare)(void *,const void *,const void *),void *_Context);





}
# 686 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\malloc.h" 1 3
# 11 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\malloc.h" 3
#pragma pack(push,_CRT_PACKING)


extern "C" {
# 46 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\malloc.h" 3
  typedef struct _heapinfo {
    int *_pentry;
    size_t _size;
    int _useflag;
  } _HEAPINFO;


  extern unsigned int _amblksiz;
# 103 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\malloc.h" 3
void * __mingw_aligned_malloc (size_t _Size, size_t _Alignment);
void __mingw_aligned_free (void *_Memory);
void * __mingw_aligned_offset_realloc (void *_Memory, size_t _Size, size_t _Alignment, size_t _Offset);
void * __mingw_aligned_realloc (void *_Memory, size_t _Size, size_t _Offset);



  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _resetstkoflw (void);
  __attribute__ ((__dllimport__)) unsigned long __attribute__((__cdecl__)) _set_malloc_crt_max_wait(unsigned long _NewValue);

  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _expand(void *_Memory,size_t _NewSize);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _msize(void *_Memory);






  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _get_sbh_threshold(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _set_sbh_threshold(size_t _NewValue);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _set_amblksiz(size_t _Value);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _get_amblksiz(size_t *_Value);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _heapadd(void *_Memory,size_t _Size);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _heapchk(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _heapmin(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _heapset(unsigned int _Fill);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _heapwalk(_HEAPINFO *_EntryInfo);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _heapused(size_t *_Used,size_t *_Commit);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _get_heap_handle(void);
# 144 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\malloc.h" 3
  static __inline void *_MarkAllocaS(void *_Ptr,unsigned int _Marker) {
    if(_Ptr) {
      *((unsigned int*)_Ptr) = _Marker;
      _Ptr = (char*)_Ptr + 16;
    }
    return _Ptr;
  }
# 163 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\malloc.h" 3
  static __inline void __attribute__((__cdecl__)) _freea(void *_Memory) {
    unsigned int _Marker;
    if(_Memory) {
      _Memory = (char*)_Memory - 16;
      _Marker = *(unsigned int *)_Memory;
      if(_Marker==0xDDDD) {
 free(_Memory);
      }





    }
  }
# 206 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\malloc.h" 3
}


#pragma pack(pop)
# 687 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdlib.h" 2 3
# 76 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cstdlib" 2 3
# 118 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cstdlib" 3
extern "C++"
{
namespace std
{


  using ::div_t;
  using ::ldiv_t;

  using ::abort;
  using ::abs;
  using ::atexit;





  using ::atof;
  using ::atoi;
  using ::atol;
  using ::bsearch;
  using ::calloc;
  using ::div;
  using ::exit;
  using ::free;
  using ::getenv;
  using ::labs;
  using ::ldiv;
  using ::malloc;

  using ::mblen;
  using ::mbstowcs;
  using ::mbtowc;

  using ::qsort;





  using ::rand;
  using ::realloc;
  using ::srand;
  using ::strtod;
  using ::strtol;
  using ::strtoul;
  using ::system;

  using ::wcstombs;
  using ::wctomb;



  inline long
  abs(long __i) { return __builtin_labs(__i); }

  inline ldiv_t
  div(long __i, long __j) { return ldiv(__i, __j); }



  inline long long
  abs(long long __x) { return __builtin_llabs (__x); }



  inline __int128
  abs(__int128 __x) { return __x >= 0 ? __x : -__x; }
# 202 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cstdlib" 3
}
# 215 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cstdlib" 3
namespace __gnu_cxx
{



  using ::lldiv_t;





  using ::_Exit;



  using ::llabs;

  inline lldiv_t
  div(long long __n, long long __d)
  { lldiv_t __q; __q.quot = __n / __d; __q.rem = __n % __d; return __q; }

  using ::lldiv;
# 247 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cstdlib" 3
  using ::atoll;
  using ::strtoll;
  using ::strtoull;

  using ::strtof;
  using ::strtold;


}

namespace std
{

  using ::__gnu_cxx::lldiv_t;

  using ::__gnu_cxx::_Exit;

  using ::__gnu_cxx::llabs;
  using ::__gnu_cxx::div;
  using ::__gnu_cxx::lldiv;

  using ::__gnu_cxx::atoll;
  using ::__gnu_cxx::strtof;
  using ::__gnu_cxx::strtoll;
  using ::__gnu_cxx::strtoull;
  using ::__gnu_cxx::strtold;
}



}
# 37 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\stdlib.h" 2 3

using std::abort;
using std::atexit;
using std::exit;
# 51 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\stdlib.h" 3
using std::div_t;
using std::ldiv_t;

using std::abs;
using std::atof;
using std::atoi;
using std::atol;
using std::bsearch;
using std::calloc;
using std::div;
using std::free;
using std::getenv;
using std::labs;
using std::ldiv;
using std::malloc;

using std::mblen;
using std::mbstowcs;
using std::mbtowc;

using std::qsort;
using std::rand;
using std::realloc;
using std::srand;
using std::strtod;
using std::strtol;
using std::strtoul;
using std::system;

using std::wcstombs;
using std::wctomb;
# 8 "sha256.cpp" 2
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\memory.h" 1 3
# 12 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\memory.h" 3
extern "C" {
# 23 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\memory.h" 3
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _memccpy(void *_Dst,const void *_Src,int _Val,size_t _MaxCount);
                void *__attribute__((__cdecl__)) memchr(const void *_Buf ,int _Val,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _memicmp(const void *_Buf1,const void *_Buf2,size_t _Size);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _memicmp_l(const void *_Buf1,const void *_Buf2,size_t _Size,_locale_t _Locale);
  int __attribute__((__cdecl__)) memcmp(const void *_Buf1,const void *_Buf2,size_t _Size);
  void * __attribute__((__cdecl__)) memcpy(void * __restrict__ _Dst,const void * __restrict__ _Src,size_t _Size) ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) memcpy_s (void *_dest,size_t _numberOfElements,const void *_src,size_t _count);
  void * __attribute__((__cdecl__)) mempcpy (void *_Dst, const void *_Src, size_t _Size);
  void * __attribute__((__cdecl__)) memset(void *_Dst,int _Val,size_t _Size);


  void * __attribute__((__cdecl__)) memccpy(void *_Dst,const void *_Src,int _Val,size_t _Size) ;
  int __attribute__((__cdecl__)) memicmp(const void *_Buf1,const void *_Buf2,size_t _Size) ;




}
# 9 "sha256.cpp" 2
# 1 "./sha256.h" 1








# 1 "C:\\Xilinx\\Vitis_HLS\\2020.2\\win64\\tools\\clang-3.9-csynth\\lib\\clang\\7.0.0\\include\\stddef.h" 1 3
# 51 "C:\\Xilinx\\Vitis_HLS\\2020.2\\win64\\tools\\clang-3.9-csynth\\lib\\clang\\7.0.0\\include\\stddef.h" 3
typedef long int ptrdiff_t;
# 62 "C:\\Xilinx\\Vitis_HLS\\2020.2\\win64\\tools\\clang-3.9-csynth\\lib\\clang\\7.0.0\\include\\stddef.h" 3
typedef long unsigned int size_t;
# 118 "C:\\Xilinx\\Vitis_HLS\\2020.2\\win64\\tools\\clang-3.9-csynth\\lib\\clang\\7.0.0\\include\\stddef.h" 3
# 1 "C:\\Xilinx\\Vitis_HLS\\2020.2\\win64\\tools\\clang-3.9-csynth\\lib\\clang\\7.0.0\\include/__stddef_max_align_t.h" 1 3
# 35 "C:\\Xilinx\\Vitis_HLS\\2020.2\\win64\\tools\\clang-3.9-csynth\\lib\\clang\\7.0.0\\include/__stddef_max_align_t.h" 3
typedef struct {
  long long __clang_max_align_nonce1
      __attribute__((__aligned__(__alignof__(long long))));
  long double __clang_max_align_nonce2
      __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
# 119 "C:\\Xilinx\\Vitis_HLS\\2020.2\\win64\\tools\\clang-3.9-csynth\\lib\\clang\\7.0.0\\include\\stddef.h" 2 3
# 10 "./sha256.h" 2
# 1 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_stream.h" 1
# 61 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_stream.h"
# 1 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot/hls_stream_39.h" 1
# 67 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot/hls_stream_39.h"
# 1 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot/etc/autopilot_enum.h" 1
# 59 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot/etc/autopilot_enum.h"
enum SsdmDataTypes {
    _ssdm_sc_int = 0,
    _ssdm_c_int = _ssdm_sc_int,
    _ssdm_sc_uint = 1,
    _ssdm_c_uint = _ssdm_sc_uint,
    _ssdm_sc_bigint = 2,
    _ssdm_sc_biguint = 3,
};



enum SsdmPortTypes {
    _ssdm_sc_in = 0,
    _ssdm_sc_out = 1,
    _ssdm_sc_inout = 2,
    _ssdm_sc_in_clk,

    _ssdm_fifo_in,
    _ssdm_sc_fifo_in = _ssdm_fifo_in,
    _ssdm_tlm_fifo_in = _ssdm_fifo_in,
    _ssdm_fifo_out,
    _ssdm_sc_fifo_out = _ssdm_fifo_out,
    _ssdm_tlm_fifo_out = _ssdm_fifo_out,
    _ssdm_fifo_inout,
    _ssdm_sc_fifo_inout = _ssdm_fifo_inout,
    _ssdm_tlm_fifo_inout = _ssdm_fifo_inout,
    _ssdm_sc_bus,
    _ssdm_hls_bus_port = _ssdm_sc_bus,
    _ssdm_AXI4M_bus_port = _ssdm_sc_bus,
    _ssdm_port_end,
};



enum SsdmProcessTypes {
    _ssdm_method = 0,
    _ssdm_sc_method = _ssdm_method,
    _ssdm_thread = 1,
    _ssdm_sc_thread = _ssdm_thread,
    _ssdm_cthread = 2,
    _ssdm_sc_cthread = _ssdm_cthread,
    _ssdm_process_end,
};



enum SsdmSensitiveTypes {
    _ssdm_sensitive = 0,
    _ssdm_sensitive_pos,
    _ssdm_sensitive_neg,
    _ssdm_sensitive_reset0,
    _ssdm_sensitive_reset1,
    _ssdm_sensitive_end,
};



enum SsdmChannelTypes {
    _ssdm_sc_sig,
    _ssdm_fifo,
    _ssdm_sc_fifo = _ssdm_fifo,
    _ssdm_mem_fifo,
    _ssdm_sc_mem_fifo = _ssdm_mem_fifo,
};


enum SsdmRegionTypes {
    _ssdm_region_reset,
    _ssdm_region_protocol,
    _ssdm_region_pipeline,
    _ssdm_region_parallel,
};
# 68 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot/hls_stream_39.h" 2





namespace hls {
# 95 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot/hls_stream_39.h"
template<typename __STREAM_T__, int DEPTH=0>
class stream;

template<typename __STREAM_T__>
class stream<__STREAM_T__, 0>
{
  public:

    inline __attribute__((always_inline)) stream() {
      __fpga_set_stream_depth(&this->V, 0);
    }

    inline __attribute__((always_inline)) stream(const char* name) {
      (void)(name);
      __fpga_set_stream_depth(&this->V, 0);
    }


  private:
    inline __attribute__((always_inline)) stream(const stream< __STREAM_T__ >& chn):V(chn.V) {
    }

    inline __attribute__((always_inline)) stream& operator= (const stream< __STREAM_T__ >& chn) {
        V = chn.V;
        return *this;
    }

  public:

    inline __attribute__((always_inline)) void operator >> (__STREAM_T__& rdata) {
        read(rdata);
    }

    inline __attribute__((always_inline)) void operator << (const __STREAM_T__& wdata) {
        write(wdata);
    }


  public:

    inline __attribute__((always_inline)) bool empty() const {
        return !__fpga_fifo_not_empty(&V);
    }

    inline __attribute__((always_inline)) bool full() const {
        return !__fpga_fifo_not_full(&V);
    }


    inline __attribute__((always_inline)) void read(__STREAM_T__& dout) {
        __fpga_fifo_pop(&V, &dout);
    }


    inline __attribute__((noinline)) bool read_dep(__STREAM_T__& dout, volatile bool flag) {
        __fpga_fifo_pop(&V, &dout);
        return flag;
    }

    inline __attribute__((always_inline)) __STREAM_T__ read() {
        __STREAM_T__ tmp;
        read(tmp);
        return tmp;
    }


    inline __attribute__((always_inline)) bool read_nb(__STREAM_T__& dout) {
        __STREAM_T__ tmp;

        if (__fpga_fifo_nb_pop(&V, &tmp)) {
            dout = tmp;
            return true;
        } else {
            return false;
        }
    }


    inline __attribute__((always_inline)) void write(const __STREAM_T__& din) {
        __fpga_fifo_push(&V, &din);
    }


    inline __attribute__((noinline)) bool write_dep(const __STREAM_T__& din, volatile bool flag) {
        __fpga_fifo_push(&V, &din);
        return flag;
    }


    inline __attribute__((always_inline)) bool write_nb(const __STREAM_T__& din) {
        return __fpga_fifo_nb_push(&V, &din);
    }

  public:
    __STREAM_T__ V __attribute__((no_ctor));
};

template<typename __STREAM_T__, int DEPTH>
class stream : public stream<__STREAM_T__, 0> {
  public:
    inline __attribute__((always_inline)) stream() {
      __fpga_set_stream_depth(&this->V, DEPTH);
    }

    inline __attribute__((always_inline)) stream(const char* name) {
      (void)(name);
      __fpga_set_stream_depth(&this->V, DEPTH);
    }
};
}
# 62 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_stream.h" 2
# 11 "./sha256.h" 2
# 1 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h" 1




# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\array" 1 3
# 33 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\array" 3





# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\utility" 1 3
# 59 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\utility" 3
# 69 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\utility" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_relops.h" 1 3
# 67 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_relops.h" 3
namespace std
{
  namespace rel_ops
  {
# 85 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_relops.h" 3
    template <class _Tp>
      inline bool
      operator!=(const _Tp& __x, const _Tp& __y)
      { return !(__x == __y); }
# 98 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_relops.h" 3
    template <class _Tp>
      inline bool
      operator>(const _Tp& __x, const _Tp& __y)
      { return __y < __x; }
# 111 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_relops.h" 3
    template <class _Tp>
      inline bool
      operator<=(const _Tp& __x, const _Tp& __y)
      { return !(__y < __x); }
# 124 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_relops.h" 3
    template <class _Tp>
      inline bool
      operator>=(const _Tp& __x, const _Tp& __y)
      { return !(__x < __y); }


  }

}
# 70 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\utility" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_pair.h" 1 3
# 59 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_pair.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/move.h" 1 3
# 34 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/move.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/concept_check.h" 1 3
# 34 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/concept_check.h" 3
# 35 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/move.h" 2 3

namespace std
{







  template<typename _Tp>
    inline _Tp*
    __addressof(_Tp& __r) noexcept
    {
      return reinterpret_cast<_Tp*>
 (&const_cast<char&>(reinterpret_cast<const volatile char&>(__r)));
    }


}



# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\type_traits" 1 3
# 33 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\type_traits" 3
# 42 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\type_traits" 3
namespace std
{
  typedef unsigned short uint_least16_t;
  typedef unsigned int uint_least32_t;
}





namespace std
{
# 68 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\type_traits" 3
  template<typename _Tp, _Tp __v>
    struct integral_constant
    {
      static constexpr _Tp value = __v;
      typedef _Tp value_type;
      typedef integral_constant<_Tp, __v> type;
      constexpr operator value_type() const { return value; }




      constexpr value_type operator()() const { return value; }

    };

  template<typename _Tp, _Tp __v>
    constexpr _Tp integral_constant<_Tp, __v>::value;


  typedef integral_constant<bool, true> true_type;


  typedef integral_constant<bool, false> false_type;

  template<bool __v>
    using __bool_constant = integral_constant<bool, __v>;
# 103 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\type_traits" 3
  template<bool, typename, typename>
    struct conditional;

  template<typename...>
    struct __or_;

  template<>
    struct __or_<>
    : public false_type
    { };

  template<typename _B1>
    struct __or_<_B1>
    : public _B1
    { };

  template<typename _B1, typename _B2>
    struct __or_<_B1, _B2>
    : public conditional<_B1::value, _B1, _B2>::type
    { };

  template<typename _B1, typename _B2, typename _B3, typename... _Bn>
    struct __or_<_B1, _B2, _B3, _Bn...>
    : public conditional<_B1::value, _B1, __or_<_B2, _B3, _Bn...>>::type
    { };

  template<typename...>
    struct __and_;

  template<>
    struct __and_<>
    : public true_type
    { };

  template<typename _B1>
    struct __and_<_B1>
    : public _B1
    { };

  template<typename _B1, typename _B2>
    struct __and_<_B1, _B2>
    : public conditional<_B1::value, _B2, _B1>::type
    { };

  template<typename _B1, typename _B2, typename _B3, typename... _Bn>
    struct __and_<_B1, _B2, _B3, _Bn...>
    : public conditional<_B1::value, __and_<_B2, _B3, _Bn...>, _B1>::type
    { };

  template<typename _Pp>
    struct __not_
    : public integral_constant<bool, !_Pp::value>
    { };
# 182 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\type_traits" 3
  template<typename _Tp>
    struct __success_type
    { typedef _Tp type; };

  struct __failure_type
  { };



  template<typename>
    struct remove_cv;

  template<typename>
    struct __is_void_helper
    : public false_type { };

  template<>
    struct __is_void_helper<void>
    : public true_type { };


  template<typename _Tp>
    struct is_void
    : public __is_void_helper<typename remove_cv<_Tp>::type>::type
    { };

  template<typename>
    struct __is_integral_helper
    : public false_type { };

  template<>
    struct __is_integral_helper<bool>
    : public true_type { };

  template<>
    struct __is_integral_helper<char>
    : public true_type { };

  template<>
    struct __is_integral_helper<signed char>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned char>
    : public true_type { };


  template<>
    struct __is_integral_helper<wchar_t>
    : public true_type { };


  template<>
    struct __is_integral_helper<char16_t>
    : public true_type { };

  template<>
    struct __is_integral_helper<char32_t>
    : public true_type { };

  template<>
    struct __is_integral_helper<short>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned short>
    : public true_type { };

  template<>
    struct __is_integral_helper<int>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned int>
    : public true_type { };

  template<>
    struct __is_integral_helper<long>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned long>
    : public true_type { };

  template<>
    struct __is_integral_helper<long long>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned long long>
    : public true_type { };




  template<>
    struct __is_integral_helper<__int128>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned __int128>
    : public true_type { };
# 314 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\type_traits" 3
  template<typename _Tp>
    struct is_integral
    : public __is_integral_helper<typename remove_cv<_Tp>::type>::type
    { };

  template<typename>
    struct __is_floating_point_helper
    : public false_type { };

  template<>
    struct __is_floating_point_helper<float>
    : public true_type { };

  template<>
    struct __is_floating_point_helper<double>
    : public true_type { };

  template<>
    struct __is_floating_point_helper<long double>
    : public true_type { };


  template<>
    struct __is_floating_point_helper<__float128>
    : public true_type { };



  template<typename _Tp>
    struct is_floating_point
    : public __is_floating_point_helper<typename remove_cv<_Tp>::type>::type
    { };


  template<typename>
    struct is_array
    : public false_type { };

  template<typename _Tp, std::size_t _Size>
    struct is_array<_Tp[_Size]>
    : public true_type { };

  template<typename _Tp>
    struct is_array<_Tp[]>
    : public true_type { };

  template<typename>
    struct __is_pointer_helper
    : public false_type { };

  template<typename _Tp>
    struct __is_pointer_helper<_Tp*>
    : public true_type { };


  template<typename _Tp>
    struct is_pointer
    : public __is_pointer_helper<typename remove_cv<_Tp>::type>::type
    { };


  template<typename>
    struct is_lvalue_reference
    : public false_type { };

  template<typename _Tp>
    struct is_lvalue_reference<_Tp&>
    : public true_type { };


  template<typename>
    struct is_rvalue_reference
    : public false_type { };

  template<typename _Tp>
    struct is_rvalue_reference<_Tp&&>
    : public true_type { };

  template<typename>
    struct is_function;

  template<typename>
    struct __is_member_object_pointer_helper
    : public false_type { };

  template<typename _Tp, typename _Cp>
    struct __is_member_object_pointer_helper<_Tp _Cp::*>
    : public integral_constant<bool, !is_function<_Tp>::value> { };


  template<typename _Tp>
    struct is_member_object_pointer
    : public __is_member_object_pointer_helper<
    typename remove_cv<_Tp>::type>::type
    { };

  template<typename>
    struct __is_member_function_pointer_helper
    : public false_type { };

  template<typename _Tp, typename _Cp>
    struct __is_member_function_pointer_helper<_Tp _Cp::*>
    : public integral_constant<bool, is_function<_Tp>::value> { };


  template<typename _Tp>
    struct is_member_function_pointer
    : public __is_member_function_pointer_helper<
    typename remove_cv<_Tp>::type>::type
    { };


  template<typename _Tp>
    struct is_enum
    : public integral_constant<bool, __is_enum(_Tp)>
    { };


  template<typename _Tp>
    struct is_union
    : public integral_constant<bool, __is_union(_Tp)>
    { };


  template<typename _Tp>
    struct is_class
    : public integral_constant<bool, __is_class(_Tp)>
    { };


  template<typename>
    struct is_function
    : public false_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...)>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) &&>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......)>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) &&>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const &&>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const &&>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) volatile>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) volatile &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) volatile &&>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) volatile>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) volatile &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) volatile &&>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const volatile>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const volatile &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const volatile &&>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const volatile>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const volatile &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const volatile &&>
    : public true_type { };



  template<typename>
    struct __is_null_pointer_helper
    : public false_type { };

  template<>
    struct __is_null_pointer_helper<std::nullptr_t>
    : public true_type { };


  template<typename _Tp>
    struct is_null_pointer
    : public __is_null_pointer_helper<typename remove_cv<_Tp>::type>::type
    { };


  template<typename _Tp>
    struct __is_nullptr_t
    : public is_null_pointer<_Tp>
    { };




  template<typename _Tp>
    struct is_reference
    : public __or_<is_lvalue_reference<_Tp>,
                   is_rvalue_reference<_Tp>>::type
    { };


  template<typename _Tp>
    struct is_arithmetic
    : public __or_<is_integral<_Tp>, is_floating_point<_Tp>>::type
    { };


  template<typename _Tp>
    struct is_fundamental
    : public __or_<is_arithmetic<_Tp>, is_void<_Tp>,
     is_null_pointer<_Tp>>::type
    { };


  template<typename _Tp>
    struct is_object
    : public __not_<__or_<is_function<_Tp>, is_reference<_Tp>,
                          is_void<_Tp>>>::type
    { };

  template<typename>
    struct is_member_pointer;


  template<typename _Tp>
    struct is_scalar
    : public __or_<is_arithmetic<_Tp>, is_enum<_Tp>, is_pointer<_Tp>,
                   is_member_pointer<_Tp>, is_null_pointer<_Tp>>::type
    { };


  template<typename _Tp>
    struct is_compound
    : public integral_constant<bool, !is_fundamental<_Tp>::value> { };

  template<typename _Tp>
    struct __is_member_pointer_helper
    : public false_type { };

  template<typename _Tp, typename _Cp>
    struct __is_member_pointer_helper<_Tp _Cp::*>
    : public true_type { };


  template<typename _Tp>
    struct is_member_pointer
    : public __is_member_pointer_helper<typename remove_cv<_Tp>::type>::type
    { };



  template<typename _Tp>
    struct __is_referenceable
    : public __or_<is_object<_Tp>, is_reference<_Tp>>::type
    { };

  template<typename _Res, typename... _Args>
    struct __is_referenceable<_Res(_Args...)>
    : public true_type
    { };

  template<typename _Res, typename... _Args>
    struct __is_referenceable<_Res(_Args......)>
    : public true_type
    { };




  template<typename>
    struct is_const
    : public false_type { };

  template<typename _Tp>
    struct is_const<_Tp const>
    : public true_type { };


  template<typename>
    struct is_volatile
    : public false_type { };

  template<typename _Tp>
    struct is_volatile<_Tp volatile>
    : public true_type { };


  template<typename _Tp>
    struct is_trivial
    : public integral_constant<bool, __is_trivial(_Tp)>
    { };


  template<typename _Tp>
    struct is_trivially_copyable
    : public integral_constant<bool, __is_trivially_copyable(_Tp)>
    { };


  template<typename _Tp>
    struct is_standard_layout
    : public integral_constant<bool, __is_standard_layout(_Tp)>
    { };



  template<typename _Tp>
    struct is_pod
    : public integral_constant<bool, __is_pod(_Tp)>
    { };


  template<typename _Tp>
    struct is_literal_type
    : public integral_constant<bool, __is_literal_type(_Tp)>
    { };


  template<typename _Tp>
    struct is_empty
    : public integral_constant<bool, __is_empty(_Tp)>
    { };


  template<typename _Tp>
    struct is_polymorphic
    : public integral_constant<bool, __is_polymorphic(_Tp)>
    { };




  template<typename _Tp>
    struct is_final
    : public integral_constant<bool, __is_final(_Tp)>
    { };



  template<typename _Tp>
    struct is_abstract
    : public integral_constant<bool, __is_abstract(_Tp)>
    { };

  template<typename _Tp,
    bool = is_arithmetic<_Tp>::value>
    struct __is_signed_helper
    : public false_type { };

  template<typename _Tp>
    struct __is_signed_helper<_Tp, true>
    : public integral_constant<bool, _Tp(-1) < _Tp(0)>
    { };


  template<typename _Tp>
    struct is_signed
    : public __is_signed_helper<_Tp>::type
    { };


  template<typename _Tp>
    struct is_unsigned
    : public __and_<is_arithmetic<_Tp>, __not_<is_signed<_Tp>>>
    { };




  template<typename>
    struct add_rvalue_reference;





  template<typename _Tp>
    typename add_rvalue_reference<_Tp>::type declval() noexcept;

  template<typename, unsigned = 0>
    struct extent;

  template<typename>
    struct remove_all_extents;

  template<typename _Tp>
    struct __is_array_known_bounds
    : public integral_constant<bool, (extent<_Tp>::value > 0)>
    { };

  template<typename _Tp>
    struct __is_array_unknown_bounds
    : public __and_<is_array<_Tp>, __not_<extent<_Tp>>>
    { };






  struct __do_is_destructible_impl
  {
    template<typename _Tp, typename = decltype(declval<_Tp&>().~_Tp())>
      static true_type __test(int);

    template<typename>
      static false_type __test(...);
  };

  template<typename _Tp>
    struct __is_destructible_impl
    : public __do_is_destructible_impl
    {
      typedef decltype(__test<_Tp>(0)) type;
    };

  template<typename _Tp,
           bool = __or_<is_void<_Tp>,
                        __is_array_unknown_bounds<_Tp>,
                        is_function<_Tp>>::value,
           bool = __or_<is_reference<_Tp>, is_scalar<_Tp>>::value>
    struct __is_destructible_safe;

  template<typename _Tp>
    struct __is_destructible_safe<_Tp, false, false>
    : public __is_destructible_impl<typename
               remove_all_extents<_Tp>::type>::type
    { };

  template<typename _Tp>
    struct __is_destructible_safe<_Tp, true, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_destructible_safe<_Tp, false, true>
    : public true_type { };


  template<typename _Tp>
    struct is_destructible
    : public __is_destructible_safe<_Tp>::type
    { };





  struct __do_is_nt_destructible_impl
  {
    template<typename _Tp>
      static integral_constant<bool, noexcept(declval<_Tp&>().~_Tp())>
        __test(int);

    template<typename>
      static false_type __test(...);
  };

  template<typename _Tp>
    struct __is_nt_destructible_impl
    : public __do_is_nt_destructible_impl
    {
      typedef decltype(__test<_Tp>(0)) type;
    };

  template<typename _Tp,
           bool = __or_<is_void<_Tp>,
                        __is_array_unknown_bounds<_Tp>,
                        is_function<_Tp>>::value,
           bool = __or_<is_reference<_Tp>, is_scalar<_Tp>>::value>
    struct __is_nt_destructible_safe;

  template<typename _Tp>
    struct __is_nt_destructible_safe<_Tp, false, false>
    : public __is_nt_destructible_impl<typename
               remove_all_extents<_Tp>::type>::type
    { };

  template<typename _Tp>
    struct __is_nt_destructible_safe<_Tp, true, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_nt_destructible_safe<_Tp, false, true>
    : public true_type { };


  template<typename _Tp>
    struct is_nothrow_destructible
    : public __is_nt_destructible_safe<_Tp>::type
    { };

  struct __do_is_default_constructible_impl
  {
    template<typename _Tp, typename = decltype(_Tp())>
      static true_type __test(int);

    template<typename>
      static false_type __test(...);
  };

  template<typename _Tp>
    struct __is_default_constructible_impl
    : public __do_is_default_constructible_impl
    {
      typedef decltype(__test<_Tp>(0)) type;
    };

  template<typename _Tp>
    struct __is_default_constructible_atom
    : public __and_<__not_<is_void<_Tp>>,
                    __is_default_constructible_impl<_Tp>>
    { };

  template<typename _Tp, bool = is_array<_Tp>::value>
    struct __is_default_constructible_safe;






  template<typename _Tp>
    struct __is_default_constructible_safe<_Tp, true>
    : public __and_<__is_array_known_bounds<_Tp>,
      __is_default_constructible_atom<typename
                      remove_all_extents<_Tp>::type>>
    { };

  template<typename _Tp>
    struct __is_default_constructible_safe<_Tp, false>
    : public __is_default_constructible_atom<_Tp>::type
    { };


  template<typename _Tp>
    struct is_default_constructible
    : public __is_default_constructible_safe<_Tp>::type
    { };
# 926 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\type_traits" 3
  struct __do_is_static_castable_impl
  {
    template<typename _From, typename _To, typename
             = decltype(static_cast<_To>(declval<_From>()))>
      static true_type __test(int);

    template<typename, typename>
      static false_type __test(...);
  };

  template<typename _From, typename _To>
    struct __is_static_castable_impl
    : public __do_is_static_castable_impl
    {
      typedef decltype(__test<_From, _To>(0)) type;
    };

  template<typename _From, typename _To>
    struct __is_static_castable_safe
    : public __is_static_castable_impl<_From, _To>::type
    { };


  template<typename _From, typename _To>
    struct __is_static_castable
    : public integral_constant<bool, (__is_static_castable_safe<
          _From, _To>::value)>
    { };






  struct __do_is_direct_constructible_impl
  {
    template<typename _Tp, typename _Arg, typename
      = decltype(::new _Tp(declval<_Arg>()))>
      static true_type __test(int);

    template<typename, typename>
      static false_type __test(...);
  };

  template<typename _Tp, typename _Arg>
    struct __is_direct_constructible_impl
    : public __do_is_direct_constructible_impl
    {
      typedef decltype(__test<_Tp, _Arg>(0)) type;
    };

  template<typename _Tp, typename _Arg>
    struct __is_direct_constructible_new_safe
    : public __and_<is_destructible<_Tp>,
                    __is_direct_constructible_impl<_Tp, _Arg>>
    { };

  template<typename, typename>
    struct is_same;

  template<typename, typename>
    struct is_base_of;

  template<typename>
    struct remove_reference;

  template<typename _From, typename _To, bool
           = __not_<__or_<is_void<_From>,
                          is_function<_From>>>::value>
    struct __is_base_to_derived_ref;



  template<typename _From, typename _To>
    struct __is_base_to_derived_ref<_From, _To, true>
    {
      typedef typename remove_cv<typename remove_reference<_From
        >::type>::type __src_t;
      typedef typename remove_cv<typename remove_reference<_To
        >::type>::type __dst_t;
      typedef __and_<__not_<is_same<__src_t, __dst_t>>,
       is_base_of<__src_t, __dst_t>> type;
      static constexpr bool value = type::value;
    };

  template<typename _From, typename _To>
    struct __is_base_to_derived_ref<_From, _To, false>
    : public false_type
    { };

  template<typename _From, typename _To, bool
           = __and_<is_lvalue_reference<_From>,
                    is_rvalue_reference<_To>>::value>
    struct __is_lvalue_to_rvalue_ref;



  template<typename _From, typename _To>
    struct __is_lvalue_to_rvalue_ref<_From, _To, true>
    {
      typedef typename remove_cv<typename remove_reference<
        _From>::type>::type __src_t;
      typedef typename remove_cv<typename remove_reference<
        _To>::type>::type __dst_t;
      typedef __and_<__not_<is_function<__src_t>>,
        __or_<is_same<__src_t, __dst_t>,
      is_base_of<__dst_t, __src_t>>> type;
      static constexpr bool value = type::value;
    };

  template<typename _From, typename _To>
    struct __is_lvalue_to_rvalue_ref<_From, _To, false>
    : public false_type
    { };







  template<typename _Tp, typename _Arg>
    struct __is_direct_constructible_ref_cast
    : public __and_<__is_static_castable<_Arg, _Tp>,
                    __not_<__or_<__is_base_to_derived_ref<_Arg, _Tp>,
                                 __is_lvalue_to_rvalue_ref<_Arg, _Tp>
                   >>>
    { };

  template<typename _Tp, typename _Arg>
    struct __is_direct_constructible_new
    : public conditional<is_reference<_Tp>::value,
    __is_direct_constructible_ref_cast<_Tp, _Arg>,
    __is_direct_constructible_new_safe<_Tp, _Arg>
    >::type
    { };

  template<typename _Tp, typename _Arg>
    struct __is_direct_constructible
    : public __is_direct_constructible_new<_Tp, _Arg>::type
    { };






  struct __do_is_nary_constructible_impl
  {
    template<typename _Tp, typename... _Args, typename
             = decltype(_Tp(declval<_Args>()...))>
      static true_type __test(int);

    template<typename, typename...>
      static false_type __test(...);
  };

  template<typename _Tp, typename... _Args>
    struct __is_nary_constructible_impl
    : public __do_is_nary_constructible_impl
    {
      typedef decltype(__test<_Tp, _Args...>(0)) type;
    };

  template<typename _Tp, typename... _Args>
    struct __is_nary_constructible
    : public __is_nary_constructible_impl<_Tp, _Args...>::type
    {
      static_assert(sizeof...(_Args) > 1,
                    "Only useful for > 1 arguments");
    };

  template<typename _Tp, typename... _Args>
    struct __is_constructible_impl
    : public __is_nary_constructible<_Tp, _Args...>
    { };

  template<typename _Tp, typename _Arg>
    struct __is_constructible_impl<_Tp, _Arg>
    : public __is_direct_constructible<_Tp, _Arg>
    { };

  template<typename _Tp>
    struct __is_constructible_impl<_Tp>
    : public is_default_constructible<_Tp>
    { };


  template<typename _Tp, typename... _Args>
    struct is_constructible
    : public __is_constructible_impl<_Tp, _Args...>::type
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_copy_constructible_impl;

  template<typename _Tp>
    struct __is_copy_constructible_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_copy_constructible_impl<_Tp, true>
    : public is_constructible<_Tp, const _Tp&>
    { };


  template<typename _Tp>
    struct is_copy_constructible
    : public __is_copy_constructible_impl<_Tp>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_move_constructible_impl;

  template<typename _Tp>
    struct __is_move_constructible_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_move_constructible_impl<_Tp, true>
    : public is_constructible<_Tp, _Tp&&>
    { };


  template<typename _Tp>
    struct is_move_constructible
    : public __is_move_constructible_impl<_Tp>
    { };

  template<typename _Tp>
    struct __is_nt_default_constructible_atom
    : public integral_constant<bool, noexcept(_Tp())>
    { };

  template<typename _Tp, bool = is_array<_Tp>::value>
    struct __is_nt_default_constructible_impl;

  template<typename _Tp>
    struct __is_nt_default_constructible_impl<_Tp, true>
    : public __and_<__is_array_known_bounds<_Tp>,
      __is_nt_default_constructible_atom<typename
                      remove_all_extents<_Tp>::type>>
    { };

  template<typename _Tp>
    struct __is_nt_default_constructible_impl<_Tp, false>
    : public __is_nt_default_constructible_atom<_Tp>
    { };


  template<typename _Tp>
    struct is_nothrow_default_constructible
    : public __and_<is_default_constructible<_Tp>,
                    __is_nt_default_constructible_impl<_Tp>>
    { };

  template<typename _Tp, typename... _Args>
    struct __is_nt_constructible_impl
    : public integral_constant<bool, noexcept(_Tp(declval<_Args>()...))>
    { };

  template<typename _Tp, typename _Arg>
    struct __is_nt_constructible_impl<_Tp, _Arg>
    : public integral_constant<bool,
                               noexcept(static_cast<_Tp>(declval<_Arg>()))>
    { };

  template<typename _Tp>
    struct __is_nt_constructible_impl<_Tp>
    : public is_nothrow_default_constructible<_Tp>
    { };


  template<typename _Tp, typename... _Args>
    struct is_nothrow_constructible
    : public __and_<is_constructible<_Tp, _Args...>,
      __is_nt_constructible_impl<_Tp, _Args...>>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_nothrow_copy_constructible_impl;

  template<typename _Tp>
    struct __is_nothrow_copy_constructible_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_nothrow_copy_constructible_impl<_Tp, true>
    : public is_nothrow_constructible<_Tp, const _Tp&>
    { };


  template<typename _Tp>
    struct is_nothrow_copy_constructible
    : public __is_nothrow_copy_constructible_impl<_Tp>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_nothrow_move_constructible_impl;

  template<typename _Tp>
    struct __is_nothrow_move_constructible_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_nothrow_move_constructible_impl<_Tp, true>
    : public is_nothrow_constructible<_Tp, _Tp&&>
    { };


  template<typename _Tp>
    struct is_nothrow_move_constructible
    : public __is_nothrow_move_constructible_impl<_Tp>
    { };

  template<typename _Tp, typename _Up>
    class __is_assignable_helper
    {
      template<typename _Tp1, typename _Up1,
        typename = decltype(declval<_Tp1>() = declval<_Up1>())>
 static true_type
 __test(int);

      template<typename, typename>
 static false_type
 __test(...);

    public:
      typedef decltype(__test<_Tp, _Up>(0)) type;
    };


  template<typename _Tp, typename _Up>
    struct is_assignable
      : public __is_assignable_helper<_Tp, _Up>::type
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_copy_assignable_impl;

  template<typename _Tp>
    struct __is_copy_assignable_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_copy_assignable_impl<_Tp, true>
    : public is_assignable<_Tp&, const _Tp&>
    { };


  template<typename _Tp>
    struct is_copy_assignable
    : public __is_copy_assignable_impl<_Tp>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_move_assignable_impl;

  template<typename _Tp>
    struct __is_move_assignable_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_move_assignable_impl<_Tp, true>
    : public is_assignable<_Tp&, _Tp&&>
    { };


  template<typename _Tp>
    struct is_move_assignable
    : public __is_move_assignable_impl<_Tp>
    { };

  template<typename _Tp, typename _Up>
    struct __is_nt_assignable_impl
    : public integral_constant<bool, noexcept(declval<_Tp>() = declval<_Up>())>
    { };


  template<typename _Tp, typename _Up>
    struct is_nothrow_assignable
    : public __and_<is_assignable<_Tp, _Up>,
      __is_nt_assignable_impl<_Tp, _Up>>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_nt_copy_assignable_impl;

  template<typename _Tp>
    struct __is_nt_copy_assignable_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_nt_copy_assignable_impl<_Tp, true>
    : public is_nothrow_assignable<_Tp&, const _Tp&>
    { };


  template<typename _Tp>
    struct is_nothrow_copy_assignable
    : public __is_nt_copy_assignable_impl<_Tp>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_nt_move_assignable_impl;

  template<typename _Tp>
    struct __is_nt_move_assignable_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_nt_move_assignable_impl<_Tp, true>
    : public is_nothrow_assignable<_Tp&, _Tp&&>
    { };


  template<typename _Tp>
    struct is_nothrow_move_assignable
    : public __is_nt_move_assignable_impl<_Tp>
    { };


  template<typename _Tp, typename... _Args>
    struct is_trivially_constructible
    : public __and_<is_constructible<_Tp, _Args...>, integral_constant<bool,
   __is_trivially_constructible(_Tp, _Args...)>>
    { };


  template<typename _Tp>
    struct is_trivially_default_constructible
    : public is_trivially_constructible<_Tp>::type
    { };

  struct __do_is_implicitly_default_constructible_impl
  {
    template <typename _Tp>
    static void __helper(const _Tp&);

    template <typename _Tp>
    static true_type __test(const _Tp&,
                            decltype(__helper<const _Tp&>({}))* = 0);

    static false_type __test(...);
  };

  template<typename _Tp>
    struct __is_implicitly_default_constructible_impl
      : public __do_is_implicitly_default_constructible_impl
  {
    typedef decltype(__test(declval<_Tp>())) type;
  };

  template<typename _Tp>
    struct __is_implicitly_default_constructible_safe
      : public __is_implicitly_default_constructible_impl<_Tp>::type
  { };

  template <typename _Tp>
    struct __is_implicitly_default_constructible
      : public __and_<is_default_constructible<_Tp>,
                      __is_implicitly_default_constructible_safe<_Tp>>
  { };


  template<typename _Tp>
    struct is_trivially_copy_constructible
    : public __and_<is_copy_constructible<_Tp>,
      integral_constant<bool,
   __is_trivially_constructible(_Tp, const _Tp&)>>
    { };


  template<typename _Tp>
    struct is_trivially_move_constructible
    : public __and_<is_move_constructible<_Tp>,
      integral_constant<bool,
   __is_trivially_constructible(_Tp, _Tp&&)>>
    { };


  template<typename _Tp, typename _Up>
    struct is_trivially_assignable
    : public __and_<is_assignable<_Tp, _Up>,
      integral_constant<bool,
   __is_trivially_assignable(_Tp, _Up)>>
    { };


  template<typename _Tp>
    struct is_trivially_copy_assignable
    : public __and_<is_copy_assignable<_Tp>,
      integral_constant<bool,
   __is_trivially_assignable(_Tp&, const _Tp&)>>
    { };


  template<typename _Tp>
    struct is_trivially_move_assignable
    : public __and_<is_move_assignable<_Tp>,
      integral_constant<bool,
   __is_trivially_assignable(_Tp&, _Tp&&)>>
    { };


  template<typename _Tp>
    struct is_trivially_destructible
    : public __and_<is_destructible<_Tp>, integral_constant<bool,
         __has_trivial_destructor(_Tp)>>
    { };


  template<typename _Tp>
    struct has_trivial_default_constructor
    : public integral_constant<bool, __has_trivial_constructor(_Tp)>
    { } __attribute__ ((__deprecated__));


  template<typename _Tp>
    struct has_trivial_copy_constructor
    : public integral_constant<bool, __has_trivial_copy(_Tp)>
    { } __attribute__ ((__deprecated__));


  template<typename _Tp>
    struct has_trivial_copy_assign
    : public integral_constant<bool, __has_trivial_assign(_Tp)>
    { } __attribute__ ((__deprecated__));


  template<typename _Tp>
    struct has_virtual_destructor
    : public integral_constant<bool, __has_virtual_destructor(_Tp)>
    { };





  template<typename _Tp>
    struct alignment_of
    : public integral_constant<std::size_t, __alignof__(_Tp)> { };


  template<typename>
    struct rank
    : public integral_constant<std::size_t, 0> { };

  template<typename _Tp, std::size_t _Size>
    struct rank<_Tp[_Size]>
    : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };

  template<typename _Tp>
    struct rank<_Tp[]>
    : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };


  template<typename, unsigned _Uint>
    struct extent
    : public integral_constant<std::size_t, 0> { };

  template<typename _Tp, unsigned _Uint, std::size_t _Size>
    struct extent<_Tp[_Size], _Uint>
    : public integral_constant<std::size_t,
          _Uint == 0 ? _Size : extent<_Tp,
          _Uint - 1>::value>
    { };

  template<typename _Tp, unsigned _Uint>
    struct extent<_Tp[], _Uint>
    : public integral_constant<std::size_t,
          _Uint == 0 ? 0 : extent<_Tp,
             _Uint - 1>::value>
    { };





  template<typename, typename>
    struct is_same
    : public false_type { };

  template<typename _Tp>
    struct is_same<_Tp, _Tp>
    : public true_type { };


  template<typename _Base, typename _Derived>
    struct is_base_of
    : public integral_constant<bool, __is_base_of(_Base, _Derived)>
    { };

  template<typename _From, typename _To,
           bool = __or_<is_void<_From>, is_function<_To>,
                        is_array<_To>>::value>
    struct __is_convertible_helper
    { typedef typename is_void<_To>::type type; };

  template<typename _From, typename _To>
    class __is_convertible_helper<_From, _To, false>
    {
       template<typename _To1>
 static void __test_aux(_To1);

      template<typename _From1, typename _To1,
        typename = decltype(__test_aux<_To1>(std::declval<_From1>()))>
 static true_type
 __test(int);

      template<typename, typename>
 static false_type
 __test(...);

    public:
      typedef decltype(__test<_From, _To>(0)) type;
    };



  template<typename _From, typename _To>
    struct is_convertible
    : public __is_convertible_helper<_From, _To>::type
    { };





  template<typename _Tp>
    struct remove_const
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_const<_Tp const>
    { typedef _Tp type; };


  template<typename _Tp>
    struct remove_volatile
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_volatile<_Tp volatile>
    { typedef _Tp type; };


  template<typename _Tp>
    struct remove_cv
    {
      typedef typename
      remove_const<typename remove_volatile<_Tp>::type>::type type;
    };


  template<typename _Tp>
    struct add_const
    { typedef _Tp const type; };


  template<typename _Tp>
    struct add_volatile
    { typedef _Tp volatile type; };


  template<typename _Tp>
    struct add_cv
    {
      typedef typename
      add_const<typename add_volatile<_Tp>::type>::type type;
    };






  template<typename _Tp>
    using remove_const_t = typename remove_const<_Tp>::type;


  template<typename _Tp>
    using remove_volatile_t = typename remove_volatile<_Tp>::type;


  template<typename _Tp>
    using remove_cv_t = typename remove_cv<_Tp>::type;


  template<typename _Tp>
    using add_const_t = typename add_const<_Tp>::type;


  template<typename _Tp>
    using add_volatile_t = typename add_volatile<_Tp>::type;


  template<typename _Tp>
    using add_cv_t = typename add_cv<_Tp>::type;





  template<typename _Tp>
    struct remove_reference
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_reference<_Tp&>
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_reference<_Tp&&>
    { typedef _Tp type; };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __add_lvalue_reference_helper
    { typedef _Tp type; };

  template<typename _Tp>
    struct __add_lvalue_reference_helper<_Tp, true>
    { typedef _Tp& type; };


  template<typename _Tp>
    struct add_lvalue_reference
    : public __add_lvalue_reference_helper<_Tp>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __add_rvalue_reference_helper
    { typedef _Tp type; };

  template<typename _Tp>
    struct __add_rvalue_reference_helper<_Tp, true>
    { typedef _Tp&& type; };


  template<typename _Tp>
    struct add_rvalue_reference
    : public __add_rvalue_reference_helper<_Tp>
    { };



  template<typename _Tp>
    using remove_reference_t = typename remove_reference<_Tp>::type;


  template<typename _Tp>
    using add_lvalue_reference_t = typename add_lvalue_reference<_Tp>::type;


  template<typename _Tp>
    using add_rvalue_reference_t = typename add_rvalue_reference<_Tp>::type;





  template<typename _Unqualified, bool _IsConst, bool _IsVol>
    struct __cv_selector;

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, false, false>
    { typedef _Unqualified __type; };

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, false, true>
    { typedef volatile _Unqualified __type; };

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, true, false>
    { typedef const _Unqualified __type; };

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, true, true>
    { typedef const volatile _Unqualified __type; };

  template<typename _Qualified, typename _Unqualified,
    bool _IsConst = is_const<_Qualified>::value,
    bool _IsVol = is_volatile<_Qualified>::value>
    class __match_cv_qualifiers
    {
      typedef __cv_selector<_Unqualified, _IsConst, _IsVol> __match;

    public:
      typedef typename __match::__type __type;
    };


  template<typename _Tp>
    struct __make_unsigned
    { typedef _Tp __type; };

  template<>
    struct __make_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __make_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __make_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __make_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __make_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __make_unsigned<long long>
    { typedef unsigned long long __type; };
# 1753 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\type_traits" 3
  template<>
    struct __make_unsigned<__int128>
    { typedef unsigned __int128 __type; };
# 1774 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\type_traits" 3
  template<typename _Tp,
    bool _IsInt = is_integral<_Tp>::value,
    bool _IsEnum = is_enum<_Tp>::value>
    class __make_unsigned_selector;

  template<typename _Tp>
    class __make_unsigned_selector<_Tp, true, false>
    {
      typedef __make_unsigned<typename remove_cv<_Tp>::type> __unsignedt;
      typedef typename __unsignedt::__type __unsigned_type;
      typedef __match_cv_qualifiers<_Tp, __unsigned_type> __cv_unsigned;

    public:
      typedef typename __cv_unsigned::__type __type;
    };

  template<typename _Tp>
    class __make_unsigned_selector<_Tp, false, true>
    {

      typedef unsigned char __smallest;
      static const bool __b0 = sizeof(_Tp) <= sizeof(__smallest);
      static const bool __b1 = sizeof(_Tp) <= sizeof(unsigned short);
      static const bool __b2 = sizeof(_Tp) <= sizeof(unsigned int);
      static const bool __b3 = sizeof(_Tp) <= sizeof(unsigned long);
      typedef conditional<__b3, unsigned long, unsigned long long> __cond3;
      typedef typename __cond3::type __cond3_type;
      typedef conditional<__b2, unsigned int, __cond3_type> __cond2;
      typedef typename __cond2::type __cond2_type;
      typedef conditional<__b1, unsigned short, __cond2_type> __cond1;
      typedef typename __cond1::type __cond1_type;

      typedef typename conditional<__b0, __smallest, __cond1_type>::type
 __unsigned_type;
      typedef __match_cv_qualifiers<_Tp, __unsigned_type> __cv_unsigned;

    public:
      typedef typename __cv_unsigned::__type __type;
    };





  template<typename _Tp>
    struct make_unsigned
    { typedef typename __make_unsigned_selector<_Tp>::__type type; };


  template<>
    struct make_unsigned<bool>;



  template<typename _Tp>
    struct __make_signed
    { typedef _Tp __type; };

  template<>
    struct __make_signed<char>
    { typedef signed char __type; };

  template<>
    struct __make_signed<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __make_signed<unsigned short>
    { typedef signed short __type; };

  template<>
    struct __make_signed<unsigned int>
    { typedef signed int __type; };

  template<>
    struct __make_signed<unsigned long>
    { typedef signed long __type; };

  template<>
    struct __make_signed<unsigned long long>
    { typedef signed long long __type; };


  template<>
    struct __make_signed<wchar_t> : __make_signed<unsigned short>
    { };



  template<>
    struct __make_signed<char16_t> : __make_signed<uint_least16_t>
    { };
  template<>
    struct __make_signed<char32_t> : __make_signed<uint_least32_t>
    { };



  template<>
    struct __make_signed<unsigned __int128>
    { typedef __int128 __type; };
# 1893 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\type_traits" 3
  template<typename _Tp,
    bool _IsInt = is_integral<_Tp>::value,
    bool _IsEnum = is_enum<_Tp>::value>
    class __make_signed_selector;

  template<typename _Tp>
    class __make_signed_selector<_Tp, true, false>
    {
      typedef __make_signed<typename remove_cv<_Tp>::type> __signedt;
      typedef typename __signedt::__type __signed_type;
      typedef __match_cv_qualifiers<_Tp, __signed_type> __cv_signed;

    public:
      typedef typename __cv_signed::__type __type;
    };

  template<typename _Tp>
    class __make_signed_selector<_Tp, false, true>
    {
      typedef typename __make_unsigned_selector<_Tp>::__type __unsigned_type;

    public:
      typedef typename __make_signed_selector<__unsigned_type>::__type __type;
    };





  template<typename _Tp>
    struct make_signed
    { typedef typename __make_signed_selector<_Tp>::__type type; };


  template<>
    struct make_signed<bool>;



  template<typename _Tp>
    using make_signed_t = typename make_signed<_Tp>::type;


  template<typename _Tp>
    using make_unsigned_t = typename make_unsigned<_Tp>::type;





  template<typename _Tp>
    struct remove_extent
    { typedef _Tp type; };

  template<typename _Tp, std::size_t _Size>
    struct remove_extent<_Tp[_Size]>
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_extent<_Tp[]>
    { typedef _Tp type; };


  template<typename _Tp>
    struct remove_all_extents
    { typedef _Tp type; };

  template<typename _Tp, std::size_t _Size>
    struct remove_all_extents<_Tp[_Size]>
    { typedef typename remove_all_extents<_Tp>::type type; };

  template<typename _Tp>
    struct remove_all_extents<_Tp[]>
    { typedef typename remove_all_extents<_Tp>::type type; };



  template<typename _Tp>
    using remove_extent_t = typename remove_extent<_Tp>::type;


  template<typename _Tp>
    using remove_all_extents_t = typename remove_all_extents<_Tp>::type;




  template<typename _Tp, typename>
    struct __remove_pointer_helper
    { typedef _Tp type; };

  template<typename _Tp, typename _Up>
    struct __remove_pointer_helper<_Tp, _Up*>
    { typedef _Up type; };


  template<typename _Tp>
    struct remove_pointer
    : public __remove_pointer_helper<_Tp, typename remove_cv<_Tp>::type>
    { };


  template<typename _Tp, bool = __or_<__is_referenceable<_Tp>,
          is_void<_Tp>>::value>
    struct __add_pointer_helper
    { typedef _Tp type; };

  template<typename _Tp>
    struct __add_pointer_helper<_Tp, true>
    { typedef typename remove_reference<_Tp>::type* type; };

  template<typename _Tp>
    struct add_pointer
    : public __add_pointer_helper<_Tp>
    { };



  template<typename _Tp>
    using remove_pointer_t = typename remove_pointer<_Tp>::type;


  template<typename _Tp>
    using add_pointer_t = typename add_pointer<_Tp>::type;


  template<std::size_t _Len>
    struct __aligned_storage_msa
    {
      union __type
      {
 unsigned char __data[_Len];
 struct __attribute__((__aligned__)) { } __align;
      };
    };
# 2039 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\type_traits" 3
  template<std::size_t _Len, std::size_t _Align =
    __alignof__(typename __aligned_storage_msa<_Len>::__type)>
    struct aligned_storage
    {
      union type
      {
 unsigned char __data[_Len];
 struct __attribute__((__aligned__((_Align)))) { } __align;
      };
    };

  template <typename... _Types>
    struct __strictest_alignment
    {
      static const size_t _S_alignment = 0;
      static const size_t _S_size = 0;
    };

  template <typename _Tp, typename... _Types>
    struct __strictest_alignment<_Tp, _Types...>
    {
      static const size_t _S_alignment =
        alignof(_Tp) > __strictest_alignment<_Types...>::_S_alignment
 ? alignof(_Tp) : __strictest_alignment<_Types...>::_S_alignment;
      static const size_t _S_size =
        sizeof(_Tp) > __strictest_alignment<_Types...>::_S_size
 ? sizeof(_Tp) : __strictest_alignment<_Types...>::_S_size;
    };
# 2078 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\type_traits" 3
  template <size_t _Len, typename... _Types>
    struct aligned_union
    {
    private:
      static_assert(sizeof...(_Types) != 0, "At least one type is required");

      using __strictest = __strictest_alignment<_Types...>;
      static const size_t _S_len = _Len > __strictest::_S_size
 ? _Len : __strictest::_S_size;
    public:

      static const size_t alignment_value = __strictest::_S_alignment;

      typedef typename aligned_storage<_S_len, alignment_value>::type type;
    };

  template <size_t _Len, typename... _Types>
    const size_t aligned_union<_Len, _Types...>::alignment_value;



  template<typename _Up,
    bool _IsArray = is_array<_Up>::value,
    bool _IsFunction = is_function<_Up>::value>
    struct __decay_selector;


  template<typename _Up>
    struct __decay_selector<_Up, false, false>
    { typedef typename remove_cv<_Up>::type __type; };

  template<typename _Up>
    struct __decay_selector<_Up, true, false>
    { typedef typename remove_extent<_Up>::type* __type; };

  template<typename _Up>
    struct __decay_selector<_Up, false, true>
    { typedef typename add_pointer<_Up>::type __type; };


  template<typename _Tp>
    class decay
    {
      typedef typename remove_reference<_Tp>::type __remove_type;

    public:
      typedef typename __decay_selector<__remove_type>::__type type;
    };

  template<typename _Tp>
    class reference_wrapper;


  template<typename _Tp>
    struct __strip_reference_wrapper
    {
      typedef _Tp __type;
    };

  template<typename _Tp>
    struct __strip_reference_wrapper<reference_wrapper<_Tp> >
    {
      typedef _Tp& __type;
    };

  template<typename _Tp>
    struct __decay_and_strip
    {
      typedef typename __strip_reference_wrapper<
 typename decay<_Tp>::type>::__type __type;
    };




  template<bool, typename _Tp = void>
    struct enable_if
    { };


  template<typename _Tp>
    struct enable_if<true, _Tp>
    { typedef _Tp type; };

  template<typename... _Cond>
    using _Require = typename enable_if<__and_<_Cond...>::value>::type;



  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct conditional
    { typedef _Iftrue type; };


  template<typename _Iftrue, typename _Iffalse>
    struct conditional<false, _Iftrue, _Iffalse>
    { typedef _Iffalse type; };


  template<typename... _Tp>
    struct common_type;



  struct __do_common_type_impl
  {
    template<typename _Tp, typename _Up>
      static __success_type<typename decay<decltype
       (true ? std::declval<_Tp>()
        : std::declval<_Up>())>::type> _S_test(int);

    template<typename, typename>
      static __failure_type _S_test(...);
  };

  template<typename _Tp, typename _Up>
    struct __common_type_impl
    : private __do_common_type_impl
    {
      typedef decltype(_S_test<_Tp, _Up>(0)) type;
    };

  struct __do_member_type_wrapper
  {
    template<typename _Tp>
      static __success_type<typename _Tp::type> _S_test(int);

    template<typename>
      static __failure_type _S_test(...);
  };

  template<typename _Tp>
    struct __member_type_wrapper
    : private __do_member_type_wrapper
    {
      typedef decltype(_S_test<_Tp>(0)) type;
    };

  template<typename _CTp, typename... _Args>
    struct __expanded_common_type_wrapper
    {
      typedef common_type<typename _CTp::type, _Args...> type;
    };

  template<typename... _Args>
    struct __expanded_common_type_wrapper<__failure_type, _Args...>
    { typedef __failure_type type; };

  template<typename _Tp>
    struct common_type<_Tp>
    { typedef typename decay<_Tp>::type type; };

  template<typename _Tp, typename _Up>
    struct common_type<_Tp, _Up>
    : public __common_type_impl<_Tp, _Up>::type
    { };

  template<typename _Tp, typename _Up, typename... _Vp>
    struct common_type<_Tp, _Up, _Vp...>
    : public __expanded_common_type_wrapper<typename __member_type_wrapper<
               common_type<_Tp, _Up>>::type, _Vp...>::type
    { };


  template<typename _Tp>
    struct underlying_type
    {
      typedef __underlying_type(_Tp) type;
    };

  template<typename _Tp>
    struct __declval_protector
    {
      static const bool __stop = false;
      static typename add_rvalue_reference<_Tp>::type __delegate();
    };

  template<typename _Tp>
    inline typename add_rvalue_reference<_Tp>::type
    declval() noexcept
    {
      static_assert(__declval_protector<_Tp>::__stop,
      "declval() must not be used!");
      return __declval_protector<_Tp>::__delegate();
    }


  template<typename _Signature>
    class result_of;





  struct __invoke_memfun_ref { };
  struct __invoke_memfun_deref { };
  struct __invoke_memobj_ref { };
  struct __invoke_memobj_deref { };
  struct __invoke_other { };


  template<typename _Tp, typename _Tag>
    struct __result_of_success : __success_type<_Tp>
    { using __invoke_type = _Tag; };


  struct __result_of_memfun_ref_impl
  {
    template<typename _Fp, typename _Tp1, typename... _Args>
      static __result_of_success<decltype(
      (std::declval<_Tp1>().*std::declval<_Fp>())(std::declval<_Args>()...)
      ), __invoke_memfun_ref> _S_test(int);

    template<typename...>
      static __failure_type _S_test(...);
  };

  template<typename _MemPtr, typename _Arg, typename... _Args>
    struct __result_of_memfun_ref
    : private __result_of_memfun_ref_impl
    {
      typedef decltype(_S_test<_MemPtr, _Arg, _Args...>(0)) type;
    };


  struct __result_of_memfun_deref_impl
  {
    template<typename _Fp, typename _Tp1, typename... _Args>
      static __result_of_success<decltype(
      ((*std::declval<_Tp1>()).*std::declval<_Fp>())(std::declval<_Args>()...)
      ), __invoke_memfun_deref> _S_test(int);

    template<typename...>
      static __failure_type _S_test(...);
  };

  template<typename _MemPtr, typename _Arg, typename... _Args>
    struct __result_of_memfun_deref
    : private __result_of_memfun_deref_impl
    {
      typedef decltype(_S_test<_MemPtr, _Arg, _Args...>(0)) type;
    };


  struct __result_of_memobj_ref_impl
  {
    template<typename _Fp, typename _Tp1>
      static __result_of_success<decltype(
      std::declval<_Tp1>().*std::declval<_Fp>()
      ), __invoke_memobj_ref> _S_test(int);

    template<typename, typename>
      static __failure_type _S_test(...);
  };

  template<typename _MemPtr, typename _Arg>
    struct __result_of_memobj_ref
    : private __result_of_memobj_ref_impl
    {
      typedef decltype(_S_test<_MemPtr, _Arg>(0)) type;
    };


  struct __result_of_memobj_deref_impl
  {
    template<typename _Fp, typename _Tp1>
      static __result_of_success<decltype(
      (*std::declval<_Tp1>()).*std::declval<_Fp>()
      ), __invoke_memobj_deref> _S_test(int);

    template<typename, typename>
      static __failure_type _S_test(...);
  };

  template<typename _MemPtr, typename _Arg>
    struct __result_of_memobj_deref
    : private __result_of_memobj_deref_impl
    {
      typedef decltype(_S_test<_MemPtr, _Arg>(0)) type;
    };

  template<typename _MemPtr, typename _Arg>
    struct __result_of_memobj;

  template<typename _Res, typename _Class, typename _Arg>
    struct __result_of_memobj<_Res _Class::*, _Arg>
    {
      typedef typename remove_cv<typename remove_reference<
        _Arg>::type>::type _Argval;
      typedef _Res _Class::* _MemPtr;
      typedef typename conditional<__or_<is_same<_Argval, _Class>,
        is_base_of<_Class, _Argval>>::value,
        __result_of_memobj_ref<_MemPtr, _Arg>,
        __result_of_memobj_deref<_MemPtr, _Arg>
      >::type::type type;
    };

  template<typename _MemPtr, typename _Arg, typename... _Args>
    struct __result_of_memfun;

  template<typename _Res, typename _Class, typename _Arg, typename... _Args>
    struct __result_of_memfun<_Res _Class::*, _Arg, _Args...>
    {
      typedef typename remove_cv<typename remove_reference<
        _Arg>::type>::type _Argval;
      typedef _Res _Class::* _MemPtr;
      typedef typename conditional<__or_<is_same<_Argval, _Class>,
        is_base_of<_Class, _Argval>>::value,
        __result_of_memfun_ref<_MemPtr, _Arg, _Args...>,
        __result_of_memfun_deref<_MemPtr, _Arg, _Args...>
      >::type::type type;
    };





  template<typename _Res, typename _Class, typename _Arg>
    struct __result_of_memobj<_Res _Class::*, reference_wrapper<_Arg>>
    : __result_of_memobj_ref<_Res _Class::*, _Arg&>
    { };

  template<typename _Res, typename _Class, typename _Arg>
    struct __result_of_memobj<_Res _Class::*, reference_wrapper<_Arg>&>
    : __result_of_memobj_ref<_Res _Class::*, _Arg&>
    { };

  template<typename _Res, typename _Class, typename _Arg>
    struct __result_of_memobj<_Res _Class::*, const reference_wrapper<_Arg>&>
    : __result_of_memobj_ref<_Res _Class::*, _Arg&>
    { };

  template<typename _Res, typename _Class, typename _Arg>
    struct __result_of_memobj<_Res _Class::*, reference_wrapper<_Arg>&&>
    : __result_of_memobj_ref<_Res _Class::*, _Arg&>
    { };

  template<typename _Res, typename _Class, typename _Arg>
    struct __result_of_memobj<_Res _Class::*, const reference_wrapper<_Arg>&&>
    : __result_of_memobj_ref<_Res _Class::*, _Arg&>
    { };

  template<typename _Res, typename _Class, typename _Arg, typename... _Args>
    struct __result_of_memfun<_Res _Class::*, reference_wrapper<_Arg>, _Args...>
    : __result_of_memfun_ref<_Res _Class::*, _Arg&, _Args...>
    { };

  template<typename _Res, typename _Class, typename _Arg, typename... _Args>
    struct __result_of_memfun<_Res _Class::*, reference_wrapper<_Arg>&,
         _Args...>
    : __result_of_memfun_ref<_Res _Class::*, _Arg&, _Args...>
    { };

  template<typename _Res, typename _Class, typename _Arg, typename... _Args>
    struct __result_of_memfun<_Res _Class::*, const reference_wrapper<_Arg>&,
         _Args...>
    : __result_of_memfun_ref<_Res _Class::*, _Arg&, _Args...>
    { };

  template<typename _Res, typename _Class, typename _Arg, typename... _Args>
    struct __result_of_memfun<_Res _Class::*, reference_wrapper<_Arg>&&,
         _Args...>
    : __result_of_memfun_ref<_Res _Class::*, _Arg&, _Args...>
    { };

  template<typename _Res, typename _Class, typename _Arg, typename... _Args>
    struct __result_of_memfun<_Res _Class::*, const reference_wrapper<_Arg>&&,
         _Args...>
    : __result_of_memfun_ref<_Res _Class::*, _Arg&, _Args...>
    { };

  template<bool, bool, typename _Functor, typename... _ArgTypes>
    struct __result_of_impl
    {
      typedef __failure_type type;
    };

  template<typename _MemPtr, typename _Arg>
    struct __result_of_impl<true, false, _MemPtr, _Arg>
    : public __result_of_memobj<typename decay<_MemPtr>::type, _Arg>
    { };

  template<typename _MemPtr, typename _Arg, typename... _Args>
    struct __result_of_impl<false, true, _MemPtr, _Arg, _Args...>
    : public __result_of_memfun<typename decay<_MemPtr>::type, _Arg, _Args...>
    { };


  struct __result_of_other_impl
  {
    template<typename _Fn, typename... _Args>
      static __result_of_success<decltype(
      std::declval<_Fn>()(std::declval<_Args>()...)
      ), __invoke_other> _S_test(int);

    template<typename...>
      static __failure_type _S_test(...);
  };

  template<typename _Functor, typename... _ArgTypes>
    struct __result_of_impl<false, false, _Functor, _ArgTypes...>
    : private __result_of_other_impl
    {
      typedef decltype(_S_test<_Functor, _ArgTypes...>(0)) type;
    };

  template<typename _Functor, typename... _ArgTypes>
    struct result_of<_Functor(_ArgTypes...)>
    : public __result_of_impl<
        is_member_object_pointer<
          typename remove_reference<_Functor>::type
        >::value,
        is_member_function_pointer<
          typename remove_reference<_Functor>::type
        >::value,
     _Functor, _ArgTypes...
      >::type
    { };



  template<size_t _Len, size_t _Align =
     __alignof__(typename __aligned_storage_msa<_Len>::__type)>
    using aligned_storage_t = typename aligned_storage<_Len, _Align>::type;

  template <size_t _Len, typename... _Types>
    using aligned_union_t = typename aligned_union<_Len, _Types...>::type;


  template<typename _Tp>
    using decay_t = typename decay<_Tp>::type;


  template<bool _Cond, typename _Tp = void>
    using enable_if_t = typename enable_if<_Cond, _Tp>::type;


  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    using conditional_t = typename conditional<_Cond, _Iftrue, _Iffalse>::type;


  template<typename... _Tp>
    using common_type_t = typename common_type<_Tp...>::type;


  template<typename _Tp>
    using underlying_type_t = typename underlying_type<_Tp>::type;


  template<typename _Tp>
    using result_of_t = typename result_of<_Tp>::type;


  template<typename...> using __void_t = void;




  template<typename...> using void_t = void;



  template<typename _Default, typename _AlwaysVoid,
    template<typename...> class _Op, typename... _Args>
    struct __detector
    {
      using value_t = false_type;
      using type = _Default;
    };


  template<typename _Default, template<typename...> class _Op,
     typename... _Args>
    struct __detector<_Default, __void_t<_Op<_Args...>>, _Op, _Args...>
    {
      using value_t = true_type;
      using type = _Op<_Args...>;
    };


  template<typename _Default, template<typename...> class _Op,
    typename... _Args>
    using __detected_or = __detector<_Default, void, _Op, _Args...>;


  template<typename _Default, template<typename...> class _Op,
    typename... _Args>
    using __detected_or_t
      = typename __detected_or<_Default, _Op, _Args...>::type;


  template<template<typename...> class _Default,
    template<typename...> class _Op, typename... _Args>
    using __detected_or_t_ =
      __detected_or_t<_Default<_Args...>, _Op, _Args...>;
# 2590 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\type_traits" 3
  template <typename _Tp>
    struct __is_swappable;

  template <typename _Tp>
    struct __is_nothrow_swappable;

  template<typename _Tp>
    inline
    typename enable_if<__and_<is_move_constructible<_Tp>,
         is_move_assignable<_Tp>>::value>::type
    swap(_Tp&, _Tp&)
    noexcept(__and_<is_nothrow_move_constructible<_Tp>,
             is_nothrow_move_assignable<_Tp>>::value);

  template<typename _Tp, size_t _Nm>
    inline
    typename enable_if<__is_swappable<_Tp>::value>::type
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
    noexcept(__is_nothrow_swappable<_Tp>::value);

  namespace __swappable_details {
    using std::swap;

    struct __do_is_swappable_impl
    {
      template<typename _Tp, typename
               = decltype(swap(std::declval<_Tp&>(), std::declval<_Tp&>()))>
        static true_type __test(int);

      template<typename>
        static false_type __test(...);
    };

    struct __do_is_nothrow_swappable_impl
    {
      template<typename _Tp>
        static __bool_constant<
          noexcept(swap(std::declval<_Tp&>(), std::declval<_Tp&>()))
        > __test(int);

      template<typename>
        static false_type __test(...);
    };

  }

  template<typename _Tp>
    struct __is_swappable_impl
    : public __swappable_details::__do_is_swappable_impl
    {
      typedef decltype(__test<_Tp>(0)) type;
    };

  template<typename _Tp>
    struct __is_nothrow_swappable_impl
    : public __swappable_details::__do_is_nothrow_swappable_impl
    {
      typedef decltype(__test<_Tp>(0)) type;
    };

  template<typename _Tp>
    struct __is_swappable
    : public __is_swappable_impl<_Tp>::type
    { };

  template<typename _Tp>
    struct __is_nothrow_swappable
    : public __is_nothrow_swappable_impl<_Tp>::type
    { };


}
# 58 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/move.h" 2 3

namespace std
{
# 74 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/move.h" 3
  template<typename _Tp>
    constexpr _Tp&&
    forward(typename std::remove_reference<_Tp>::type& __t) noexcept
    { return static_cast<_Tp&&>(__t); }







  template<typename _Tp>
    constexpr _Tp&&
    forward(typename std::remove_reference<_Tp>::type&& __t) noexcept
    {
      static_assert(!std::is_lvalue_reference<_Tp>::value, "template argument"
      " substituting _Tp is an lvalue reference type");
      return static_cast<_Tp&&>(__t);
    }






  template<typename _Tp>
    constexpr typename std::remove_reference<_Tp>::type&&
    move(_Tp&& __t) noexcept
    { return static_cast<typename std::remove_reference<_Tp>::type&&>(__t); }


  template<typename _Tp>
    struct __move_if_noexcept_cond
    : public __and_<__not_<is_nothrow_move_constructible<_Tp>>,
                    is_copy_constructible<_Tp>>::type { };
# 118 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/move.h" 3
  template<typename _Tp>
    constexpr typename
    conditional<__move_if_noexcept_cond<_Tp>::value, const _Tp&, _Tp&&>::type
    move_if_noexcept(_Tp& __x) noexcept
    { return std::move(__x); }
# 133 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/move.h" 3
  template<typename _Tp>
    inline _Tp*
    addressof(_Tp& __r) noexcept
    { return std::__addressof(__r); }


  template <typename _Tp, typename _Up = _Tp>
    inline _Tp
    __exchange(_Tp& __obj, _Up&& __new_val)
    {
      _Tp __old_val = std::move(__obj);
      __obj = std::forward<_Up>(__new_val);
      return __old_val;
    }



}
# 159 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/move.h" 3
namespace std
{
# 174 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/move.h" 3
  template<typename _Tp>
    inline

    typename enable_if<__and_<is_move_constructible<_Tp>,
         is_move_assignable<_Tp>>::value>::type
    swap(_Tp& __a, _Tp& __b)
    noexcept(__and_<is_nothrow_move_constructible<_Tp>,
             is_nothrow_move_assignable<_Tp>>::value)




    {



      _Tp __tmp = std::move(__a);
      __a = std::move(__b);
      __b = std::move(__tmp);
    }




  template<typename _Tp, size_t _Nm>
    inline

    typename enable_if<__is_swappable<_Tp>::value>::type
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
    noexcept(__is_nothrow_swappable<_Tp>::value)




    {
      for (size_t __n = 0; __n < _Nm; ++__n)
 swap(__a[__n], __b[__n]);
    }



}
# 60 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_pair.h" 2 3





namespace std
{
# 76 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_pair.h" 3
  struct piecewise_construct_t { explicit piecewise_construct_t() = default; };


  constexpr piecewise_construct_t piecewise_construct = piecewise_construct_t();


  template<typename...>
    class tuple;

  template<std::size_t...>
    struct _Index_tuple;






  template <typename _T1, typename _T2, typename _U1, typename _U2>
  constexpr bool _ConstructiblePair()
  {
    return __and_<__or_<is_same<typename decay<_T1>::type,
    typename decay<_U1>::type>,
   is_constructible<_T1, const _U1&>>,
    __or_<is_same<typename decay<_T2>::type,
    typename decay<_U2>::type>,
   is_constructible<_T2, const _U2&>>>::value;
  }

  template <typename _T1, typename _T2, typename _U1, typename _U2>
  constexpr bool _ImplicitlyConvertiblePair()
  {
    return __and_<__or_<is_same<typename decay<_T1>::type,
    typename decay<_U1>::type>,
   is_convertible<const _U1&, _T1>>,
    __or_<is_same<typename decay<_T2>::type,
    typename decay<_U2>::type>,
         is_convertible<const _U2&, _T2>>>::value;
  }

  template <typename _T1, typename _T2, typename _U1, typename _U2>
  constexpr bool _MoveConstructiblePair()
  {
    return __and_<__or_<is_same<typename decay<_T1>::type,
    typename decay<_U1>::type>,
   is_constructible<_T1, _U1&&>>,
    __or_<is_same<typename decay<_T2>::type,
    typename decay<_U2>::type>,
   is_constructible<_T2, _U2&&>>>::value;
  }

  template <typename _T1, typename _T2, typename _U1, typename _U2>
  constexpr bool _ImplicitlyMoveConvertiblePair()
  {
    return __and_<__or_<is_same<typename decay<_T1>::type,
    typename decay<_U1>::type>,
   is_convertible<_U1&&, _T1>>,
    __or_<is_same<typename decay<_T2>::type,
    typename decay<_U2>::type>,
         is_convertible<_U2&&, _T2>>>::value;
  }
# 146 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_pair.h" 3
  template<typename _T1, typename _T2>
    struct pair
    {
      typedef _T1 first_type;
      typedef _T2 second_type;

      _T1 first;
      _T2 second;






      template <typename _U1 = _T1,
                typename _U2 = _T2,
                typename enable_if<__and_<
                                     __is_implicitly_default_constructible<_U1>,
                                     __is_implicitly_default_constructible<_U2>>
                                   ::value, bool>::type = true>

      constexpr pair()
      : first(), second() { }


      template <typename _U1 = _T1,
                typename _U2 = _T2,
                typename enable_if<__and_<
                       is_default_constructible<_U1>,
                       is_default_constructible<_U2>,
                       __not_<
                         __and_<__is_implicitly_default_constructible<_U1>,
                                __is_implicitly_default_constructible<_U2>>>>
                                   ::value, bool>::type = false>
      explicit constexpr pair()
      : first(), second() { }







      template<typename _U1 = _T1, typename _U2=_T2, typename
                enable_if<_ConstructiblePair<_T1, _T2, _U1, _U2>()
                         && _ImplicitlyConvertiblePair<_T1, _T2, _U1, _U2>(),
                         bool>::type=true>
      constexpr pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }

       template<typename _U1 = _T1, typename _U2=_T2, typename
        enable_if<_ConstructiblePair<_T1, _T2, _U1, _U2>()
                         && !_ImplicitlyConvertiblePair<_T1, _T2, _U1, _U2>(),
                         bool>::type=false>
      explicit constexpr pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }
# 210 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_pair.h" 3
      template<typename _U1, typename _U2, typename
        enable_if<_ConstructiblePair<_T1, _T2, _U1, _U2>()
                         && _ImplicitlyConvertiblePair<_T1, _T2, _U1, _U2>(),
                         bool>::type=true>
        constexpr pair(const pair<_U1, _U2>& __p)
        : first(__p.first), second(__p.second) { }

      template<typename _U1, typename _U2, typename
               enable_if<_ConstructiblePair<_T1, _T2, _U1, _U2>()
                         && !_ImplicitlyConvertiblePair<_T1, _T2, _U1, _U2>(),
                         bool>::type=false>
 explicit constexpr pair(const pair<_U1, _U2>& __p)
 : first(__p.first), second(__p.second) { }

      constexpr pair(const pair&) = default;
      constexpr pair(pair&&) = default;


      template<typename _U1, typename
               enable_if<_ConstructiblePair<_T2, _T2, _T2, _T2>()
                         && _MoveConstructiblePair<_T1, _T2, _U1, _T2>()
                         && _ImplicitlyConvertiblePair<_T2, _T2, _T2, _T2>()
                         && _ImplicitlyMoveConvertiblePair<_T1, _T2,
         _U1, _T2>(),
                         bool>::type=true>
       constexpr pair(_U1&& __x, const _T2& __y)
       : first(std::forward<_U1>(__x)), second(__y) { }

      template<typename _U1, typename
               enable_if<_ConstructiblePair<_T2, _T2, _T2, _T2>()
                         && _MoveConstructiblePair<_T1, _T2, _U1, _T2>()
                         && (!_ImplicitlyConvertiblePair<_T2, _T2, _T2, _T2>()
                             || !_ImplicitlyMoveConvertiblePair<_T1, _T2,
                                                                _U1, _T2>()),
                         bool>::type=false>
       explicit constexpr pair(_U1&& __x, const _T2& __y)
       : first(std::forward<_U1>(__x)), second(__y) { }

      template<typename _U2, typename
               enable_if<_ConstructiblePair<_T1, _T1, _T1, _T1>()
                         && _MoveConstructiblePair<_T1, _T2, _T1, _U2>()
                         && _ImplicitlyConvertiblePair<_T1, _T1, _T1, _T1>()
                         && _ImplicitlyMoveConvertiblePair<_T1, _T2,
                                                           _T1, _U2>(),
                         bool>::type=true>
       constexpr pair(const _T1& __x, _U2&& __y)
       : first(__x), second(std::forward<_U2>(__y)) { }

      template<typename _U2, typename
               enable_if<_ConstructiblePair<_T1, _T1, _T1, _T1>()
                         && _MoveConstructiblePair<_T1, _T2, _T1, _U2>()
                         && (!_ImplicitlyConvertiblePair<_T1, _T1, _T1, _T1>()
                             || !_ImplicitlyMoveConvertiblePair<_T1, _T2,
                                                                _T1, _U2>()),
                         bool>::type=false>
       explicit pair(const _T1& __x, _U2&& __y)
       : first(__x), second(std::forward<_U2>(__y)) { }

      template<typename _U1, typename _U2, typename
        enable_if<_MoveConstructiblePair<_T1, _T2, _U1, _U2>()
                         && _ImplicitlyMoveConvertiblePair<_T1, _T2,
          _U1, _U2>(),
                         bool>::type=true>
 constexpr pair(_U1&& __x, _U2&& __y)
 : first(std::forward<_U1>(__x)), second(std::forward<_U2>(__y)) { }

      template<typename _U1, typename _U2, typename
        enable_if<_MoveConstructiblePair<_T1, _T2, _U1, _U2>()
                         && !_ImplicitlyMoveConvertiblePair<_T1, _T2,
           _U1, _U2>(),
                         bool>::type=false>
 explicit constexpr pair(_U1&& __x, _U2&& __y)
 : first(std::forward<_U1>(__x)), second(std::forward<_U2>(__y)) { }


      template<typename _U1, typename _U2, typename
        enable_if<_MoveConstructiblePair<_T1, _T2, _U1, _U2>()
                         && _ImplicitlyMoveConvertiblePair<_T1, _T2,
          _U1, _U2>(),
                         bool>::type=true>
 constexpr pair(pair<_U1, _U2>&& __p)
 : first(std::forward<_U1>(__p.first)),
   second(std::forward<_U2>(__p.second)) { }

      template<typename _U1, typename _U2, typename
        enable_if<_MoveConstructiblePair<_T1, _T2, _U1, _U2>()
                         && !_ImplicitlyMoveConvertiblePair<_T1, _T2,
          _U1, _U2>(),
                         bool>::type=false>
 explicit constexpr pair(pair<_U1, _U2>&& __p)
 : first(std::forward<_U1>(__p.first)),
   second(std::forward<_U2>(__p.second)) { }

      template<typename... _Args1, typename... _Args2>
        pair(piecewise_construct_t, tuple<_Args1...>, tuple<_Args2...>);

      pair&
      operator=(const pair& __p)
      {
 first = __p.first;
 second = __p.second;
 return *this;
      }

      pair&
      operator=(pair&& __p)
      noexcept(__and_<is_nothrow_move_assignable<_T1>,
               is_nothrow_move_assignable<_T2>>::value)
      {
 first = std::forward<first_type>(__p.first);
 second = std::forward<second_type>(__p.second);
 return *this;
      }

      template<typename _U1, typename _U2>
 pair&
 operator=(const pair<_U1, _U2>& __p)
 {
   first = __p.first;
   second = __p.second;
   return *this;
 }

      template<typename _U1, typename _U2>
 pair&
 operator=(pair<_U1, _U2>&& __p)
 {
   first = std::forward<_U1>(__p.first);
   second = std::forward<_U2>(__p.second);
   return *this;
 }

      void
      swap(pair& __p)
      noexcept(__is_nothrow_swappable<_T1>::value
               && __is_nothrow_swappable<_T2>::value)
      {
 using std::swap;
 swap(first, __p.first);
 swap(second, __p.second);
      }

    private:
      template<typename... _Args1, std::size_t... _Indexes1,
               typename... _Args2, std::size_t... _Indexes2>
        pair(tuple<_Args1...>&, tuple<_Args2...>&,
             _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);

    };


  template<typename _T1, typename _T2>
    inline constexpr bool
    operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first == __y.first && __x.second == __y.second; }


  template<typename _T1, typename _T2>
    inline constexpr bool
    operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first < __y.first
      || (!(__y.first < __x.first) && __x.second < __y.second); }


  template<typename _T1, typename _T2>
    inline constexpr bool
    operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x == __y); }


  template<typename _T1, typename _T2>
    inline constexpr bool
    operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __y < __x; }


  template<typename _T1, typename _T2>
    inline constexpr bool
    operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__y < __x); }


  template<typename _T1, typename _T2>
    inline constexpr bool
    operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x < __y); }





  template<typename _T1, typename _T2>
    inline void
    swap(pair<_T1, _T2>& __x, pair<_T1, _T2>& __y)
    noexcept(noexcept(__x.swap(__y)))
    { __x.swap(__y); }
# 422 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_pair.h" 3
  template<typename _T1, typename _T2>
    constexpr pair<typename __decay_and_strip<_T1>::__type,
                   typename __decay_and_strip<_T2>::__type>
    make_pair(_T1&& __x, _T2&& __y)
    {
      typedef typename __decay_and_strip<_T1>::__type __ds_type1;
      typedef typename __decay_and_strip<_T2>::__type __ds_type2;
      typedef pair<__ds_type1, __ds_type2> __pair_type;
      return __pair_type(std::forward<_T1>(__x), std::forward<_T2>(__y));
    }
# 442 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_pair.h" 3
}
# 71 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\utility" 2 3





# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\initializer_list" 1 3
# 34 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\initializer_list" 3





#pragma GCC visibility push(default)



namespace std
{

  template<class _E>
    class initializer_list
    {
    public:
      typedef _E value_type;
      typedef const _E& reference;
      typedef const _E& const_reference;
      typedef size_t size_type;
      typedef const _E* iterator;
      typedef const _E* const_iterator;

    private:
      iterator _M_array;
      size_type _M_len;


      constexpr initializer_list(const_iterator __a, size_type __l)
      : _M_array(__a), _M_len(__l) { }

    public:
      constexpr initializer_list() noexcept
      : _M_array(0), _M_len(0) { }


      constexpr size_type
      size() const noexcept { return _M_len; }


      constexpr const_iterator
      begin() const noexcept { return _M_array; }


      constexpr const_iterator
      end() const noexcept { return begin() + size(); }
    };






  template<class _Tp>
    constexpr const _Tp*
    begin(initializer_list<_Tp> __ils) noexcept
    { return __ils.begin(); }






  template<class _Tp>
    constexpr const _Tp*
    end(initializer_list<_Tp> __ils) noexcept
    { return __ils.end(); }
}

#pragma GCC visibility pop
# 77 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\utility" 2 3

namespace std
{



  template<typename _Tp>
    struct tuple_size;



  template<typename _Tp>
    struct tuple_size<const _Tp>
    : integral_constant<size_t, tuple_size<_Tp>::value> { };

  template<typename _Tp>
    struct tuple_size<volatile _Tp>
    : integral_constant<size_t, tuple_size<_Tp>::value> { };

  template<typename _Tp>
    struct tuple_size<const volatile _Tp>
    : integral_constant<size_t, tuple_size<_Tp>::value> { };


  template<std::size_t __i, typename _Tp>
    struct tuple_element;


  template<std::size_t __i, typename _Tp>
    using __tuple_element_t = typename tuple_element<__i, _Tp>::type;

  template<std::size_t __i, typename _Tp>
    struct tuple_element<__i, const _Tp>
    {
      typedef typename add_const<__tuple_element_t<__i, _Tp>>::type type;
    };

  template<std::size_t __i, typename _Tp>
    struct tuple_element<__i, volatile _Tp>
    {
      typedef typename add_volatile<__tuple_element_t<__i, _Tp>>::type type;
    };

  template<std::size_t __i, typename _Tp>
    struct tuple_element<__i, const volatile _Tp>
    {
      typedef typename add_cv<__tuple_element_t<__i, _Tp>>::type type;
    };




  template<std::size_t __i, typename _Tp>
    using tuple_element_t = typename tuple_element<__i, _Tp>::type;


  template<typename>
    struct __is_tuple_like_impl : false_type
    { };




  template<typename _T1, typename _T2>
    struct __is_tuple_like_impl<std::pair<_T1, _T2>> : true_type
    { };


  template<class _Tp1, class _Tp2>
    struct tuple_size<std::pair<_Tp1, _Tp2>>
    : public integral_constant<std::size_t, 2> { };


  template<class _Tp1, class _Tp2>
    struct tuple_element<0, std::pair<_Tp1, _Tp2>>
    { typedef _Tp1 type; };


  template<class _Tp1, class _Tp2>
    struct tuple_element<1, std::pair<_Tp1, _Tp2>>
    { typedef _Tp2 type; };

  template<std::size_t _Int>
    struct __pair_get;

  template<>
    struct __pair_get<0>
    {
      template<typename _Tp1, typename _Tp2>
        static constexpr _Tp1&
        __get(std::pair<_Tp1, _Tp2>& __pair) noexcept
        { return __pair.first; }

      template<typename _Tp1, typename _Tp2>
        static constexpr _Tp1&&
        __move_get(std::pair<_Tp1, _Tp2>&& __pair) noexcept
        { return std::forward<_Tp1>(__pair.first); }

      template<typename _Tp1, typename _Tp2>
        static constexpr const _Tp1&
        __const_get(const std::pair<_Tp1, _Tp2>& __pair) noexcept
        { return __pair.first; }
    };

  template<>
    struct __pair_get<1>
    {
      template<typename _Tp1, typename _Tp2>
        static constexpr _Tp2&
        __get(std::pair<_Tp1, _Tp2>& __pair) noexcept
        { return __pair.second; }

      template<typename _Tp1, typename _Tp2>
        static constexpr _Tp2&&
        __move_get(std::pair<_Tp1, _Tp2>&& __pair) noexcept
        { return std::forward<_Tp2>(__pair.second); }

      template<typename _Tp1, typename _Tp2>
        static constexpr const _Tp2&
        __const_get(const std::pair<_Tp1, _Tp2>& __pair) noexcept
        { return __pair.second; }
    };

  template<std::size_t _Int, class _Tp1, class _Tp2>
    constexpr typename tuple_element<_Int, std::pair<_Tp1, _Tp2>>::type&
    get(std::pair<_Tp1, _Tp2>& __in) noexcept
    { return __pair_get<_Int>::__get(__in); }

  template<std::size_t _Int, class _Tp1, class _Tp2>
    constexpr typename tuple_element<_Int, std::pair<_Tp1, _Tp2>>::type&&
    get(std::pair<_Tp1, _Tp2>&& __in) noexcept
    { return __pair_get<_Int>::__move_get(std::move(__in)); }

  template<std::size_t _Int, class _Tp1, class _Tp2>
    constexpr const typename tuple_element<_Int, std::pair<_Tp1, _Tp2>>::type&
    get(const std::pair<_Tp1, _Tp2>& __in) noexcept
    { return __pair_get<_Int>::__const_get(__in); }





  template <typename _Tp, typename _Up>
    constexpr _Tp&
    get(pair<_Tp, _Up>& __p) noexcept
    { return __p.first; }

  template <typename _Tp, typename _Up>
    constexpr const _Tp&
    get(const pair<_Tp, _Up>& __p) noexcept
    { return __p.first; }

  template <typename _Tp, typename _Up>
    constexpr _Tp&&
    get(pair<_Tp, _Up>&& __p) noexcept
    { return std::move(__p.first); }

  template <typename _Tp, typename _Up>
    constexpr _Tp&
    get(pair<_Up, _Tp>& __p) noexcept
    { return __p.second; }

  template <typename _Tp, typename _Up>
    constexpr const _Tp&
    get(const pair<_Up, _Tp>& __p) noexcept
    { return __p.second; }

  template <typename _Tp, typename _Up>
    constexpr _Tp&&
    get(pair<_Up, _Tp>&& __p) noexcept
    { return std::move(__p.second); }




  template <typename _Tp, typename _Up = _Tp>
    inline _Tp
    exchange(_Tp& __obj, _Up&& __new_val)
    { return std::__exchange(__obj, std::forward<_Up>(__new_val)); }




  template<size_t... _Indexes> struct _Index_tuple { };


  template<typename _Itup1, typename _Itup2> struct _Itup_cat;

  template<size_t... _Ind1, size_t... _Ind2>
    struct _Itup_cat<_Index_tuple<_Ind1...>, _Index_tuple<_Ind2...>>
    {
      using __type = _Index_tuple<_Ind1..., (_Ind2 + sizeof...(_Ind1))...>;
    };


  template<size_t _Num>
    struct _Build_index_tuple
    : _Itup_cat<typename _Build_index_tuple<_Num / 2>::__type,
  typename _Build_index_tuple<_Num - _Num / 2>::__type>
    { };

  template<>
    struct _Build_index_tuple<1>
    {
      typedef _Index_tuple<0> __type;
    };

  template<>
    struct _Build_index_tuple<0>
    {
      typedef _Index_tuple<> __type;
    };






  template<typename _Tp, _Tp... _Idx>
    struct integer_sequence
    {
      typedef _Tp value_type;
      static constexpr size_t size() { return sizeof...(_Idx); }
    };

  template<typename _Tp, _Tp _Num,
    typename _ISeq = typename _Build_index_tuple<_Num>::__type>
    struct _Make_integer_sequence;

  template<typename _Tp, _Tp _Num, size_t... _Idx>
    struct _Make_integer_sequence<_Tp, _Num, _Index_tuple<_Idx...>>
    {
      static_assert( _Num >= 0,
       "Cannot make integer sequence of negative length" );

      typedef integer_sequence<_Tp, static_cast<_Tp>(_Idx)...> __type;
    };


  template<typename _Tp, _Tp _Num>
    using make_integer_sequence
      = typename _Make_integer_sequence<_Tp, _Num>::__type;


  template<size_t... _Idx>
    using index_sequence = integer_sequence<size_t, _Idx...>;


  template<size_t _Num>
    using make_index_sequence = make_integer_sequence<size_t, _Num>;


  template<typename... _Types>
    using index_sequence_for = make_index_sequence<sizeof...(_Types)>;



}
# 39 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\array" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\stdexcept" 1 3
# 37 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\stdexcept" 3

# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\exception" 1 3
# 34 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\exception" 3

#pragma GCC visibility push(default)



# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/atomic_lockfree_defines.h" 1 3
# 34 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/atomic_lockfree_defines.h" 3
# 39 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\exception" 2 3

extern "C++" {

namespace std
{
# 60 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\exception" 3
  class exception
  {
  public:
    exception() noexcept { }
    virtual ~exception() noexcept;



    virtual const char*
    what() const noexcept;
  };



  class bad_exception : public exception
  {
  public:
    bad_exception() noexcept { }



    virtual ~bad_exception() noexcept;


    virtual const char*
    what() const noexcept;
  };


  typedef void (*terminate_handler) ();


  typedef void (*unexpected_handler) ();


  terminate_handler set_terminate(terminate_handler) noexcept;



  terminate_handler get_terminate() noexcept;




  void terminate() noexcept __attribute__ ((__noreturn__));


  unexpected_handler set_unexpected(unexpected_handler) noexcept;



  unexpected_handler get_unexpected() noexcept;




  void unexpected() __attribute__ ((__noreturn__));
# 129 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\exception" 3
  bool uncaught_exception() noexcept __attribute__ ((__pure__));




  int uncaught_exceptions() noexcept __attribute__ ((__pure__));



}

namespace __gnu_cxx
{
# 160 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\exception" 3
  void __verbose_terminate_handler();


}

}

#pragma GCC visibility pop
# 39 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\stdexcept" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\string" 1 3
# 37 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\string" 3


# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stringfwd.h" 1 3
# 38 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stringfwd.h" 3


# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/memoryfwd.h" 1 3
# 47 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/memoryfwd.h" 3



namespace std
{
# 63 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/memoryfwd.h" 3
  template<typename>
    class allocator;

  template<>
    class allocator<void>;


  template<typename, typename>
    struct uses_allocator;




}
# 41 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stringfwd.h" 2 3

namespace std
{
# 52 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stringfwd.h" 3
  template<class _CharT>
    struct char_traits;

  template<> struct char_traits<char>;


  template<> struct char_traits<wchar_t>;




  template<> struct char_traits<char16_t>;
  template<> struct char_traits<char32_t>;


namespace __cxx11 {

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    class basic_string;


  typedef basic_string<char> string;



  typedef basic_string<wchar_t> wstring;





  typedef basic_string<char16_t> u16string;


  typedef basic_string<char32_t> u32string;


}




}
# 40 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\string" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/char_traits.h" 1 3
# 38 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/char_traits.h" 3

# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 1 3
# 60 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/functexcept.h" 1 3
# 40 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/functexcept.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/exception_defines.h" 1 3
# 41 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/functexcept.h" 2 3

namespace std
{



  void
  __throw_bad_exception(void) __attribute__((__noreturn__));


  void
  __throw_bad_alloc(void) __attribute__((__noreturn__));


  void
  __throw_bad_cast(void) __attribute__((__noreturn__));

  void
  __throw_bad_typeid(void) __attribute__((__noreturn__));


  void
  __throw_logic_error(const char*) __attribute__((__noreturn__));

  void
  __throw_domain_error(const char*) __attribute__((__noreturn__));

  void
  __throw_invalid_argument(const char*) __attribute__((__noreturn__));

  void
  __throw_length_error(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range_fmt(const char*, ...) __attribute__((__noreturn__))
    __attribute__((__format__(__gnu_printf__, 1, 2)));

  void
  __throw_runtime_error(const char*) __attribute__((__noreturn__));

  void
  __throw_range_error(const char*) __attribute__((__noreturn__));

  void
  __throw_overflow_error(const char*) __attribute__((__noreturn__));

  void
  __throw_underflow_error(const char*) __attribute__((__noreturn__));


  void
  __throw_ios_failure(const char*) __attribute__((__noreturn__));

  void
  __throw_system_error(int) __attribute__((__noreturn__));

  void
  __throw_future_error(int) __attribute__((__noreturn__));


  void
  __throw_bad_function_call() __attribute__((__noreturn__));


}
# 61 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/cpp_type_traits.h" 1 3
# 36 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/cpp_type_traits.h" 3
# 67 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/cpp_type_traits.h" 3
extern "C++" {

namespace std
{


  struct __true_type { };
  struct __false_type { };

  template<bool>
    struct __truth_type
    { typedef __false_type __type; };

  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };



  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };


  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };





  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };



  template<>
    struct __is_integer<char16_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char32_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
# 261 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/cpp_type_traits.h" 3
template<> struct __is_integer<__int128> { enum { __value = 1 }; typedef __true_type __type; }; template<> struct __is_integer<unsigned __int128> { enum { __value = 1 }; typedef __true_type __type; };
# 278 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/cpp_type_traits.h" 3
  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };


  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };




  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };




  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };



  template<typename _Iterator>
    inline _Iterator
    __miter_base(_Iterator __it)
    { return __it; }


}
}
# 62 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/type_traits.h" 1 3
# 33 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/type_traits.h" 3




extern "C++" {

namespace __gnu_cxx
{



  template<bool, typename>
    struct __enable_if
    { };

  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };



  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };

  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };



  template<typename _Tp>
    struct __add_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };


  template<>
    struct __add_unsigned<bool>;

  template<>
    struct __add_unsigned<wchar_t>;



  template<typename _Tp>
    struct __remove_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };

  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };

  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };

  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };


  template<>
    struct __remove_unsigned<bool>;

  template<>
    struct __remove_unsigned<wchar_t>;



  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }

  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }


  inline bool
  __is_null_pointer(std::nullptr_t)
  { return true; }



  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };




  template<typename _Tp>
    struct __promote<_Tp, false>
    { };

  template<>
    struct __promote<long double>
    { typedef long double __type; };

  template<>
    struct __promote<double>
    { typedef double __type; };

  template<>
    struct __promote<float>
    { typedef float __type; };

  template<typename _Tp, typename _Up,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type>
    struct __promote_2
    {
      typedef __typeof__(_Tp2() + _Up2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type,
           typename _Vp2 = typename __promote<_Vp>::__type>
    struct __promote_3
    {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp, typename _Wp,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type,
           typename _Vp2 = typename __promote<_Vp>::__type,
           typename _Wp2 = typename __promote<_Wp>::__type>
    struct __promote_4
    {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2() + _Wp2()) __type;
    };


}
}
# 63 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/numeric_traits.h" 1 3
# 33 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/numeric_traits.h" 3




namespace __gnu_cxx
{
# 54 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_integer
    {

      static const _Value __min = (((_Value)(-1) < 0) ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value)(-1) < 0)) : (_Value)0);
      static const _Value __max = (((_Value)(-1) < 0) ? (((((_Value)1 << ((sizeof(_Value) * 8 - ((_Value)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(_Value)0);



      static const bool __is_signed = ((_Value)(-1) < 0);
      static const int __digits = (sizeof(_Value) * 8 - ((_Value)(-1) < 0));
    };

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__min;

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__max;

  template<typename _Value>
    const bool __numeric_traits_integer<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_integer<_Value>::__digits;
# 99 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_floating
    {

      static const int __max_digits10 = (2 + (std::__are_same<_Value, float>::__value ? 24 : std::__are_same<_Value, double>::__value ? 53 : 53) * 643L / 2136);


      static const bool __is_signed = true;
      static const int __digits10 = (std::__are_same<_Value, float>::__value ? 6 : std::__are_same<_Value, double>::__value ? 15 : 15);
      static const int __max_exponent10 = (std::__are_same<_Value, float>::__value ? 38 : std::__are_same<_Value, double>::__value ? 308 : 308);
    };

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_digits10;

  template<typename _Value>
    const bool __numeric_traits_floating<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__digits10;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_exponent10;

  template<typename _Value>
    struct __numeric_traits
    : public __conditional_type<std::__is_integer<_Value>::__value,
    __numeric_traits_integer<_Value>,
    __numeric_traits_floating<_Value> >::__type
    { };


}
# 64 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 2 3

# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator_base_types.h" 1 3
# 63 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator_base_types.h" 3







namespace std
{
# 89 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator_base_types.h" 3
  struct input_iterator_tag { };


  struct output_iterator_tag { };


  struct forward_iterator_tag : public input_iterator_tag { };



  struct bidirectional_iterator_tag : public forward_iterator_tag { };



  struct random_access_iterator_tag : public bidirectional_iterator_tag { };
# 116 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator_base_types.h" 3
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {

      typedef _Category iterator_category;

      typedef _Tp value_type;

      typedef _Distance difference_type;

      typedef _Pointer pointer;

      typedef _Reference reference;
    };
# 143 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator_base_types.h" 3
  template<typename _Iterator, typename = __void_t<>>
    struct __iterator_traits { };

  template<typename _Iterator>
    struct __iterator_traits<_Iterator,
        __void_t<typename _Iterator::iterator_category,
          typename _Iterator::value_type,
          typename _Iterator::difference_type,
          typename _Iterator::pointer,
          typename _Iterator::reference>>
    {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type value_type;
      typedef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iterator::reference reference;
    };

  template<typename _Iterator>
    struct iterator_traits
    : public __iterator_traits<_Iterator> { };
# 177 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator_base_types.h" 3
  template<typename _Tp>
    struct iterator_traits<_Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;
    };


  template<typename _Tp>
    struct iterator_traits<const _Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;
    };





  template<typename _Iter>
    inline typename iterator_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterator_category(); }
# 230 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator_base_types.h" 3
  template<typename _InIter>
    using _RequireInputIter = typename
      enable_if<is_convertible<typename
  iterator_traits<_InIter>::iterator_category,
          input_iterator_tag>::value>::type;



}
# 66 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator_base_funcs.h" 1 3
# 63 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator_base_funcs.h" 3


# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\debug/assertions.h" 1 3
# 66 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator_base_funcs.h" 2 3

namespace std
{


  template <typename> struct _List_iterator;
  template <typename> struct _List_const_iterator;




  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    __distance(_InputIterator __first, _InputIterator __last,
               input_iterator_tag)
    {



      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      while (__first != __last)
 {
   ++__first;
   ++__n;
 }
      return __n;
    }

  template<typename _RandomAccessIterator>
    inline typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag)
    {



      return __last - __first;
    }



  template<typename _Tp>
    ptrdiff_t
    __distance(std::_List_iterator<_Tp>,
        std::_List_iterator<_Tp>,
        input_iterator_tag);

  template<typename _Tp>
    ptrdiff_t
    __distance(std::_List_const_iterator<_Tp>,
        std::_List_const_iterator<_Tp>,
        input_iterator_tag);
# 133 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    distance(_InputIterator __first, _InputIterator __last)
    {

      return std::__distance(__first, __last,
        std::__iterator_category(__first));
    }

  template<typename _InputIterator, typename _Distance>
    inline void
    __advance(_InputIterator& __i, _Distance __n, input_iterator_tag)
    {


                                ;
      while (__n--)
 ++__i;
    }

  template<typename _BidirectionalIterator, typename _Distance>
    inline void
    __advance(_BidirectionalIterator& __i, _Distance __n,
       bidirectional_iterator_tag)
    {



      if (__n > 0)
        while (__n--)
   ++__i;
      else
        while (__n++)
   --__i;
    }

  template<typename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterator_tag)
    {



      __i += __n;
    }
# 192 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {

      typename iterator_traits<_InputIterator>::difference_type __d = __n;
      std::__advance(__i, __d, std::__iterator_category(__i));
    }



  template<typename _ForwardIterator>
    inline _ForwardIterator
    next(_ForwardIterator __x, typename
  iterator_traits<_ForwardIterator>::difference_type __n = 1)
    {



      std::advance(__x, __n);
      return __x;
    }

  template<typename _BidirectionalIterator>
    inline _BidirectionalIterator
    prev(_BidirectionalIterator __x, typename
  iterator_traits<_BidirectionalIterator>::difference_type __n = 1)
    {



      std::advance(__x, -__n);
      return __x;
    }




}
# 67 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator.h" 1 3
# 66 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/ptr_traits.h" 1 3
# 37 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/ptr_traits.h" 3
namespace std
{


  class __undefined;


  template<typename _Tp>
    struct __get_first_arg
    { using type = __undefined; };

  template<template<typename, typename...> class _Template, typename _Tp,
           typename... _Types>
    struct __get_first_arg<_Template<_Tp, _Types...>>
    { using type = _Tp; };

  template<typename _Tp>
    using __get_first_arg_t = typename __get_first_arg<_Tp>::type;


  template<typename _Tp, typename _Up>
    struct __replace_first_arg
    { using type = __undefined; };

  template<template<typename, typename...> class _Template, typename _Up,
           typename _Tp, typename... _Types>
    struct __replace_first_arg<_Template<_Tp, _Types...>, _Up>
    { using type = _Template<_Up, _Types...>; };

  template<typename _Tp, typename _Up>
    using __replace_first_arg_t = typename __replace_first_arg<_Tp, _Up>::type;

  template<typename _Tp>
    using __make_not_void
      = typename conditional<is_void<_Tp>::value, __undefined, _Tp>::type;





  template<typename _Ptr>
    struct pointer_traits
    {
    private:
      template<typename _Tp>
 using __element_type = typename _Tp::element_type;

      template<typename _Tp>
 using __difference_type = typename _Tp::difference_type;

      template<typename _Tp, typename _Up>
 using __rebind = typename _Tp::template rebind<_Up>;

    public:

      using pointer = _Ptr;


      using element_type
 = __detected_or_t_<__get_first_arg_t, __element_type, _Ptr>;


      using difference_type
 = __detected_or_t<ptrdiff_t, __difference_type, _Ptr>;


      template<typename _Up>
        using rebind
   = __detected_or_t_<__replace_first_arg_t, __rebind, _Ptr, _Up>;

      static _Ptr
      pointer_to(__make_not_void<element_type>& __e)
      { return _Ptr::pointer_to(__e); }

      static_assert(!is_same<element_type, __undefined>::value,
   "pointer type defines element_type or is like SomePointer<T, Args>");
      static_assert(!is_same<rebind<element_type>, __undefined>::value,
   "pointer type defines rebind<U> or is like SomePointer<T, Args>");
    };





  template<typename _Tp>
    struct pointer_traits<_Tp*>
    {

      typedef _Tp* pointer;

      typedef _Tp element_type;

      typedef ptrdiff_t difference_type;

      template<typename _Up>
        using rebind = _Up*;






      static pointer
      pointer_to(__make_not_void<element_type>& __r) noexcept
      { return std::addressof(__r); }
    };


  template<typename _Ptr, typename _Tp>
    using __ptr_rebind = typename pointer_traits<_Ptr>::template rebind<_Tp>;


}
# 67 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator.h" 2 3

namespace std
{
# 96 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator.h" 3
  template<typename _Iterator>
    class reverse_iterator
    : public iterator<typename iterator_traits<_Iterator>::iterator_category,
        typename iterator_traits<_Iterator>::value_type,
        typename iterator_traits<_Iterator>::difference_type,
        typename iterator_traits<_Iterator>::pointer,
                      typename iterator_traits<_Iterator>::reference>
    {
    protected:
      _Iterator current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::pointer pointer;
      typedef typename __traits_type::reference reference;







      reverse_iterator() : current() { }




      explicit
      reverse_iterator(iterator_type __x) : current(__x) { }




      reverse_iterator(const reverse_iterator& __x)
      : current(__x.current) { }





      template<typename _Iter>
        reverse_iterator(const reverse_iterator<_Iter>& __x)
 : current(__x.base()) { }




      iterator_type
      base() const
      { return current; }
# 160 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator.h" 3
      reference
      operator*() const
      {
 _Iterator __tmp = current;
 return *--__tmp;
      }






      pointer
      operator->() const
      { return &(operator*()); }






      reverse_iterator&
      operator++()
      {
 --current;
 return *this;
      }






      reverse_iterator
      operator++(int)
      {
 reverse_iterator __tmp = *this;
 --current;
 return __tmp;
      }






      reverse_iterator&
      operator--()
      {
 ++current;
 return *this;
      }






      reverse_iterator
      operator--(int)
      {
 reverse_iterator __tmp = *this;
 ++current;
 return __tmp;
      }






      reverse_iterator
      operator+(difference_type __n) const
      { return reverse_iterator(current - __n); }







      reverse_iterator&
      operator+=(difference_type __n)
      {
 current -= __n;
 return *this;
      }






      reverse_iterator
      operator-(difference_type __n) const
      { return reverse_iterator(current + __n); }







      reverse_iterator&
      operator-=(difference_type __n)
      {
 current += __n;
 return *this;
      }






      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }
    };
# 290 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator.h" 3
  template<typename _Iterator>
    inline bool
    operator==(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }

  template<typename _Iterator>
    inline bool
    operator<(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() < __x.base(); }

  template<typename _Iterator>
    inline bool
    operator!=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x == __y); }

  template<typename _Iterator>
    inline bool
    operator>(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y < __x; }

  template<typename _Iterator>
    inline bool
    operator<=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__y < __x); }

  template<typename _Iterator>
    inline bool
    operator>=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x < __y); }

  template<typename _Iterator>
    inline typename reverse_iterator<_Iterator>::difference_type
    operator-(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() - __x.base(); }

  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    operator+(typename reverse_iterator<_Iterator>::difference_type __n,
       const reverse_iterator<_Iterator>& __x)
    { return reverse_iterator<_Iterator>(__x.base() - __n); }



  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y.base() < __x.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x == __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y < __x; }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__y < __x); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x < __y); }

  template<typename _IteratorL, typename _IteratorR>


    inline auto
    operator-(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    -> decltype(__y.base() - __x.base())





    { return __y.base() - __x.base(); }




  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    __make_reverse_iterator(_Iterator __i)
    { return reverse_iterator<_Iterator>(__i); }







  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    make_reverse_iterator(_Iterator __i)
    { return reverse_iterator<_Iterator>(__i); }




  template<typename _Iterator>
    auto
    __niter_base(reverse_iterator<_Iterator> __it)
    -> decltype(__make_reverse_iterator(__niter_base(__it.base())))
    { return __make_reverse_iterator(__niter_base(__it.base())); }

  template<typename _Iterator>
    struct __is_move_iterator<reverse_iterator<_Iterator> >
      : __is_move_iterator<_Iterator>
    { };

  template<typename _Iterator>
    auto
    __miter_base(reverse_iterator<_Iterator> __it)
    -> decltype(__make_reverse_iterator(__miter_base(__it.base())))
    { return __make_reverse_iterator(__miter_base(__it.base())); }
# 441 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator.h" 3
  template<typename _Container>
    class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit
      back_insert_iterator(_Container& __x)
      : container(std::__addressof(__x)) { }
# 476 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator.h" 3
      back_insert_iterator&
      operator=(const typename _Container::value_type& __value)
      {
 container->push_back(__value);
 return *this;
      }

      back_insert_iterator&
      operator=(typename _Container::value_type&& __value)
      {
 container->push_back(std::move(__value));
 return *this;
      }



      back_insert_iterator&
      operator*()
      { return *this; }


      back_insert_iterator&
      operator++()
      { return *this; }


      back_insert_iterator
      operator++(int)
      { return *this; }
    };
# 518 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator.h" 3
  template<typename _Container>
    inline back_insert_iterator<_Container>
    back_inserter(_Container& __x)
    { return back_insert_iterator<_Container>(__x); }
# 533 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator.h" 3
  template<typename _Container>
    class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit front_insert_iterator(_Container& __x)
      : container(std::__addressof(__x)) { }
# 567 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator.h" 3
      front_insert_iterator&
      operator=(const typename _Container::value_type& __value)
      {
 container->push_front(__value);
 return *this;
      }

      front_insert_iterator&
      operator=(typename _Container::value_type&& __value)
      {
 container->push_front(std::move(__value));
 return *this;
      }



      front_insert_iterator&
      operator*()
      { return *this; }


      front_insert_iterator&
      operator++()
      { return *this; }


      front_insert_iterator
      operator++(int)
      { return *this; }
    };
# 609 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator.h" 3
  template<typename _Container>
    inline front_insert_iterator<_Container>
    front_inserter(_Container& __x)
    { return front_insert_iterator<_Container>(__x); }
# 628 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator.h" 3
  template<typename _Container>
    class insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
      typename _Container::iterator iter;

    public:

      typedef _Container container_type;





      insert_iterator(_Container& __x, typename _Container::iterator __i)
      : container(std::__addressof(__x)), iter(__i) {}
# 679 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator.h" 3
      insert_iterator&
      operator=(const typename _Container::value_type& __value)
      {
 iter = container->insert(iter, __value);
 ++iter;
 return *this;
      }

      insert_iterator&
      operator=(typename _Container::value_type&& __value)
      {
 iter = container->insert(iter, std::move(__value));
 ++iter;
 return *this;
      }



      insert_iterator&
      operator*()
      { return *this; }


      insert_iterator&
      operator++()
      { return *this; }


      insert_iterator&
      operator++(int)
      { return *this; }
    };
# 723 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator.h" 3
  template<typename _Container, typename _Iterator>
    inline insert_iterator<_Container>
    inserter(_Container& __x, _Iterator __i)
    {
      return insert_iterator<_Container>(__x,
      typename _Container::iterator(__i));
    }




}

namespace __gnu_cxx
{
# 747 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator.h" 3
  using std::iterator_traits;
  using std::iterator;
  template<typename _Iterator, typename _Container>
    class __normal_iterator
    {
    protected:
      _Iterator _M_current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::iterator_category iterator_category;
      typedef typename __traits_type::value_type value_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::reference reference;
      typedef typename __traits_type::pointer pointer;

      constexpr __normal_iterator() noexcept
      : _M_current(_Iterator()) { }

      explicit
      __normal_iterator(const _Iterator& __i) noexcept
      : _M_current(__i) { }


      template<typename _Iter>
        __normal_iterator(const __normal_iterator<_Iter,
     typename __enable_if<
              (std::__are_same<_Iter, typename _Container::pointer>::__value),
        _Container>::__type>& __i) noexcept
        : _M_current(__i.base()) { }


      reference
      operator*() const noexcept
      { return *_M_current; }

      pointer
      operator->() const noexcept
      { return _M_current; }

      __normal_iterator&
      operator++() noexcept
      {
 ++_M_current;
 return *this;
      }

      __normal_iterator
      operator++(int) noexcept
      { return __normal_iterator(_M_current++); }


      __normal_iterator&
      operator--() noexcept
      {
 --_M_current;
 return *this;
      }

      __normal_iterator
      operator--(int) noexcept
      { return __normal_iterator(_M_current--); }


      reference
      operator[](difference_type __n) const noexcept
      { return _M_current[__n]; }

      __normal_iterator&
      operator+=(difference_type __n) noexcept
      { _M_current += __n; return *this; }

      __normal_iterator
      operator+(difference_type __n) const noexcept
      { return __normal_iterator(_M_current + __n); }

      __normal_iterator&
      operator-=(difference_type __n) noexcept
      { _M_current -= __n; return *this; }

      __normal_iterator
      operator-(difference_type __n) const noexcept
      { return __normal_iterator(_M_current - __n); }

      const _Iterator&
      base() const noexcept
      { return _M_current; }
    };
# 847 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator.h" 3
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    noexcept
    { return __lhs.base() == __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    noexcept
    { return __lhs.base() == __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    noexcept
    { return __lhs.base() != __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    noexcept
    { return __lhs.base() != __rhs.base(); }


  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    noexcept
    { return __lhs.base() < __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    noexcept
    { return __lhs.base() < __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    noexcept
    { return __lhs.base() > __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    noexcept
    { return __lhs.base() > __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    noexcept
    { return __lhs.base() <= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    noexcept
    { return __lhs.base() <= __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    noexcept
    { return __lhs.base() >= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    noexcept
    { return __lhs.base() >= __rhs.base(); }





  template<typename _IteratorL, typename _IteratorR, typename _Container>


    inline auto
    operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs) noexcept
    -> decltype(__lhs.base() - __rhs.base())





    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline typename __normal_iterator<_Iterator, _Container>::difference_type
    operator-(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    noexcept
    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline __normal_iterator<_Iterator, _Container>
    operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
       __n, const __normal_iterator<_Iterator, _Container>& __i)
    noexcept
    { return __normal_iterator<_Iterator, _Container>(__i.base() + __n); }


}

namespace std
{


  template<typename _Iterator, typename _Container>
    _Iterator
    __niter_base(__gnu_cxx::__normal_iterator<_Iterator, _Container> __it)
    { return __it.base(); }


}



namespace std
{
# 999 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_iterator.h" 3
  template<typename _Iterator>
    class move_iterator
    {
    protected:
      _Iterator _M_current;

      typedef iterator_traits<_Iterator> __traits_type;
      typedef typename __traits_type::reference __base_ref;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::iterator_category iterator_category;
      typedef typename __traits_type::value_type value_type;
      typedef typename __traits_type::difference_type difference_type;

      typedef _Iterator pointer;


      typedef typename conditional<is_reference<__base_ref>::value,
    typename remove_reference<__base_ref>::type&&,
    __base_ref>::type reference;

      move_iterator()
      : _M_current() { }

      explicit
      move_iterator(iterator_type __i)
      : _M_current(__i) { }

      template<typename _Iter>
 move_iterator(const move_iterator<_Iter>& __i)
 : _M_current(__i.base()) { }

      iterator_type
      base() const
      { return _M_current; }

      reference
      operator*() const
      { return static_cast<reference>(*_M_current); }

      pointer
      operator->() const
      { return _M_current; }

      move_iterator&
      operator++()
      {
 ++_M_current;
 return *this;
      }

      move_iterator
      operator++(int)
      {
 move_iterator __tmp = *this;
 ++_M_current;
 return __tmp;
      }

      move_iterator&
      operator--()
      {
 --_M_current;
 return *this;
      }

      move_iterator
      operator--(int)
      {
 move_iterator __tmp = *this;
 --_M_current;
 return __tmp;
      }

      move_iterator
      operator+(difference_type __n) const
      { return move_iterator(_M_current + __n); }

      move_iterator&
      operator+=(difference_type __n)
      {
 _M_current += __n;
 return *this;
      }

      move_iterator
      operator-(difference_type __n) const
      { return move_iterator(_M_current - __n); }

      move_iterator&
      operator-=(difference_type __n)
      {
 _M_current -= __n;
 return *this;
      }

      reference
      operator[](difference_type __n) const
      { return std::move(_M_current[__n]); }
    };




  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const move_iterator<_IteratorL>& __x,
        const move_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }

  template<typename _Iterator>
    inline bool
    operator==(const move_iterator<_Iterator>& __x,
        const move_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const move_iterator<_IteratorL>& __x,
        const move_iterator<_IteratorR>& __y)
    { return !(__x == __y); }

  template<typename _Iterator>
    inline bool
    operator!=(const move_iterator<_Iterator>& __x,
        const move_iterator<_Iterator>& __y)
    { return !(__x == __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const move_iterator<_IteratorL>& __x,
       const move_iterator<_IteratorR>& __y)
    { return __x.base() < __y.base(); }

  template<typename _Iterator>
    inline bool
    operator<(const move_iterator<_Iterator>& __x,
       const move_iterator<_Iterator>& __y)
    { return __x.base() < __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const move_iterator<_IteratorL>& __x,
        const move_iterator<_IteratorR>& __y)
    { return !(__y < __x); }

  template<typename _Iterator>
    inline bool
    operator<=(const move_iterator<_Iterator>& __x,
        const move_iterator<_Iterator>& __y)
    { return !(__y < __x); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const move_iterator<_IteratorL>& __x,
       const move_iterator<_IteratorR>& __y)
    { return __y < __x; }

  template<typename _Iterator>
    inline bool
    operator>(const move_iterator<_Iterator>& __x,
       const move_iterator<_Iterator>& __y)
    { return __y < __x; }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const move_iterator<_IteratorL>& __x,
        const move_iterator<_IteratorR>& __y)
    { return !(__x < __y); }

  template<typename _Iterator>
    inline bool
    operator>=(const move_iterator<_Iterator>& __x,
        const move_iterator<_Iterator>& __y)
    { return !(__x < __y); }


  template<typename _IteratorL, typename _IteratorR>
    inline auto
    operator-(const move_iterator<_IteratorL>& __x,
       const move_iterator<_IteratorR>& __y)
    -> decltype(__x.base() - __y.base())
    { return __x.base() - __y.base(); }

  template<typename _Iterator>
    inline auto
    operator-(const move_iterator<_Iterator>& __x,
       const move_iterator<_Iterator>& __y)
    -> decltype(__x.base() - __y.base())
    { return __x.base() - __y.base(); }

  template<typename _Iterator>
    inline move_iterator<_Iterator>
    operator+(typename move_iterator<_Iterator>::difference_type __n,
       const move_iterator<_Iterator>& __x)
    { return __x + __n; }

  template<typename _Iterator>
    inline move_iterator<_Iterator>
    make_move_iterator(_Iterator __i)
    { return move_iterator<_Iterator>(__i); }

  template<typename _Iterator, typename _ReturnType
    = typename conditional<__move_if_noexcept_cond
      <typename iterator_traits<_Iterator>::value_type>::value,
                _Iterator, move_iterator<_Iterator>>::type>
    inline _ReturnType
    __make_move_if_noexcept_iterator(_Iterator __i)
    { return _ReturnType(__i); }



  template<typename _Tp, typename _ReturnType
    = typename conditional<__move_if_noexcept_cond<_Tp>::value,
      const _Tp*, move_iterator<_Tp*>>::type>
    inline _ReturnType
    __make_move_if_noexcept_iterator(_Tp* __i)
    { return _ReturnType(__i); }



  template<typename _Iterator>
    auto
    __niter_base(move_iterator<_Iterator> __it)
    -> decltype(make_move_iterator(__niter_base(__it.base())))
    { return make_move_iterator(__niter_base(__it.base())); }

  template<typename _Iterator>
    struct __is_move_iterator<move_iterator<_Iterator> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<typename _Iterator>
    auto
    __miter_base(move_iterator<_Iterator> __it)
    -> decltype(__miter_base(__it.base()))
    { return __miter_base(__it.base()); }


}
# 68 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 2 3

# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\debug/debug.h" 1 3
# 48 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\debug/debug.h" 3
namespace std
{
  namespace __debug { }
}




namespace __gnu_debug
{
  using namespace std::__debug;
}
# 70 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 2 3

# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/predefined_ops.h" 1 3
# 33 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/predefined_ops.h" 3
namespace __gnu_cxx
{
namespace __ops
{
  struct _Iter_less_iter
  {
    template<typename _Iterator1, typename _Iterator2>
      constexpr
      bool
      operator()(_Iterator1 __it1, _Iterator2 __it2) const
      { return *__it1 < *__it2; }
  };
  constexpr
  inline _Iter_less_iter
  __iter_less_iter()
  { return _Iter_less_iter(); }

  struct _Iter_less_val
  {
    template<typename _Iterator, typename _Value>
      bool
      operator()(_Iterator __it, _Value& __val) const
      { return *__it < __val; }
    };

  inline _Iter_less_val
  __iter_less_val()
  { return _Iter_less_val(); }

  inline _Iter_less_val
  __iter_comp_val(_Iter_less_iter)
  { return _Iter_less_val(); }

  struct _Val_less_iter
  {
    template<typename _Value, typename _Iterator>
      bool
      operator()(_Value& __val, _Iterator __it) const
      { return __val < *__it; }
    };

  inline _Val_less_iter
  __val_less_iter()
  { return _Val_less_iter(); }

  inline _Val_less_iter
  __val_comp_iter(_Iter_less_iter)
  { return _Val_less_iter(); }

  struct _Iter_equal_to_iter
  {
    template<typename _Iterator1, typename _Iterator2>
      bool
      operator()(_Iterator1 __it1, _Iterator2 __it2) const
      { return *__it1 == *__it2; }
    };

  inline _Iter_equal_to_iter
  __iter_equal_to_iter()
  { return _Iter_equal_to_iter(); }

  struct _Iter_equal_to_val
  {
    template<typename _Iterator, typename _Value>
      bool
      operator()(_Iterator __it, _Value& __val) const
      { return *__it == __val; }
    };

  inline _Iter_equal_to_val
  __iter_equal_to_val()
  { return _Iter_equal_to_val(); }

  inline _Iter_equal_to_val
  __iter_comp_val(_Iter_equal_to_iter)
  { return _Iter_equal_to_val(); }

  template<typename _Compare>
    struct _Iter_comp_iter
    {
      _Compare _M_comp;
      constexpr
      _Iter_comp_iter(_Compare __comp)
 : _M_comp(__comp)
      { }

      template<typename _Iterator1, typename _Iterator2>
        constexpr
        bool
        operator()(_Iterator1 __it1, _Iterator2 __it2)
        { return bool(_M_comp(*__it1, *__it2)); }
    };

  template<typename _Compare>
    constexpr
    inline _Iter_comp_iter<_Compare>
    __iter_comp_iter(_Compare __comp)
    { return _Iter_comp_iter<_Compare>(__comp); }

  template<typename _Compare>
    struct _Iter_comp_val
    {
      _Compare _M_comp;

      _Iter_comp_val(_Compare __comp)
 : _M_comp(__comp)
      { }

      template<typename _Iterator, typename _Value>
 bool
 operator()(_Iterator __it, _Value& __val)
 { return bool(_M_comp(*__it, __val)); }
    };

  template<typename _Compare>
   inline _Iter_comp_val<_Compare>
    __iter_comp_val(_Compare __comp)
    { return _Iter_comp_val<_Compare>(__comp); }

  template<typename _Compare>
    inline _Iter_comp_val<_Compare>
    __iter_comp_val(_Iter_comp_iter<_Compare> __comp)
    { return _Iter_comp_val<_Compare>(__comp._M_comp); }

  template<typename _Compare>
    struct _Val_comp_iter
    {
      _Compare _M_comp;

      _Val_comp_iter(_Compare __comp)
 : _M_comp(__comp)
      { }

      template<typename _Value, typename _Iterator>
 bool
 operator()(_Value& __val, _Iterator __it)
 { return bool(_M_comp(__val, *__it)); }
    };

  template<typename _Compare>
    inline _Val_comp_iter<_Compare>
    __val_comp_iter(_Compare __comp)
    { return _Val_comp_iter<_Compare>(__comp); }

  template<typename _Compare>
    inline _Val_comp_iter<_Compare>
    __val_comp_iter(_Iter_comp_iter<_Compare> __comp)
    { return _Val_comp_iter<_Compare>(__comp._M_comp); }

  template<typename _Value>
    struct _Iter_equals_val
    {
      _Value& _M_value;

      _Iter_equals_val(_Value& __value)
 : _M_value(__value)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return *__it == _M_value; }
    };

  template<typename _Value>
    inline _Iter_equals_val<_Value>
    __iter_equals_val(_Value& __val)
    { return _Iter_equals_val<_Value>(__val); }

  template<typename _Iterator1>
    struct _Iter_equals_iter
    {
      typename std::iterator_traits<_Iterator1>::reference _M_ref;

      _Iter_equals_iter(_Iterator1 __it1)
 : _M_ref(*__it1)
      { }

      template<typename _Iterator2>
 bool
 operator()(_Iterator2 __it2)
 { return *__it2 == _M_ref; }
    };

  template<typename _Iterator>
    inline _Iter_equals_iter<_Iterator>
    __iter_comp_iter(_Iter_equal_to_iter, _Iterator __it)
    { return _Iter_equals_iter<_Iterator>(__it); }

  template<typename _Predicate>
    struct _Iter_pred
    {
      _Predicate _M_pred;

      _Iter_pred(_Predicate __pred)
 : _M_pred(__pred)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return bool(_M_pred(*__it)); }
    };

  template<typename _Predicate>
    inline _Iter_pred<_Predicate>
    __pred_iter(_Predicate __pred)
    { return _Iter_pred<_Predicate>(__pred); }

  template<typename _Compare, typename _Value>
    struct _Iter_comp_to_val
    {
      _Compare _M_comp;
      _Value& _M_value;

      _Iter_comp_to_val(_Compare __comp, _Value& __value)
 : _M_comp(__comp), _M_value(__value)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return bool(_M_comp(*__it, _M_value)); }
    };

  template<typename _Compare, typename _Value>
    _Iter_comp_to_val<_Compare, _Value>
    __iter_comp_val(_Compare __comp, _Value &__val)
    { return _Iter_comp_to_val<_Compare, _Value>(__comp, __val); }

  template<typename _Compare, typename _Iterator1>
    struct _Iter_comp_to_iter
    {
      _Compare _M_comp;
      typename std::iterator_traits<_Iterator1>::reference _M_ref;

      _Iter_comp_to_iter(_Compare __comp, _Iterator1 __it1)
 : _M_comp(__comp), _M_ref(*__it1)
      { }

      template<typename _Iterator2>
 bool
 operator()(_Iterator2 __it2)
 { return bool(_M_comp(*__it2, _M_ref)); }
    };

  template<typename _Compare, typename _Iterator>
    inline _Iter_comp_to_iter<_Compare, _Iterator>
    __iter_comp_iter(_Iter_comp_iter<_Compare> __comp, _Iterator __it)
    { return _Iter_comp_to_iter<_Compare, _Iterator>(__comp._M_comp, __it); }

  template<typename _Predicate>
    struct _Iter_negate
    {
      _Predicate _M_pred;

      _Iter_negate(_Predicate __pred)
 : _M_pred(__pred)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return !bool(_M_pred(*__it)); }
    };

  template<typename _Predicate>
    inline _Iter_negate<_Predicate>
    __negate(_Iter_pred<_Predicate> __pred)
    { return _Iter_negate<_Predicate>(__pred._M_pred); }

}
}
# 72 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 2 3

namespace std
{
# 118 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline void
    iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    {
# 148 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
      swap(*__a, *__b);

    }
# 164 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator2
    swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
  _ForwardIterator2 __first2)
    {





                                                       ;

      for (; __first1 != __last1; ++__first1, (void)++__first2)
 std::iter_swap(__first1, __first2);
      return __first2;
    }
# 192 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _Tp>
    constexpr
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b)
    {



      if (__b < __a)
 return __b;
      return __a;
    }
# 216 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _Tp>
    constexpr
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b)
    {



      if (__a < __b)
 return __b;
      return __a;
    }
# 240 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    constexpr
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__b, __a))
 return __b;
      return __a;
    }
# 262 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    constexpr
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__a, __b))
 return __b;
      return __a;
    }



  template<typename _Iterator>
    inline _Iterator
    __niter_base(_Iterator __it)
    { return __it; }







  template<bool, bool, typename>
    struct __copy_move
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, (void)++__first)
     *__result = *__first;
   return __result;
 }
    };


  template<typename _Category>
    struct __copy_move<true, false, _Category>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, (void)++__first)
     *__result = std::move(*__first);
   return __result;
 }
    };


  template<>
    struct __copy_move<false, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = *__first;
       ++__first;
       ++__result;
     }
   return __result;
 }
    };


  template<>
    struct __copy_move<true, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = std::move(*__first);
       ++__first;
       ++__result;
     }
   return __result;
 }
    };


  template<bool _IsMove>
    struct __copy_move<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_m(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {

   using __assignable = conditional<_IsMove,
        is_move_assignable<_Tp>,
        is_copy_assignable<_Tp>>;

   static_assert( __assignable::type::value, "type is not assignable" );

   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result, __first, sizeof(_Tp) * _Num);
   return __result + _Num;
 }
    };

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a(_II __first, _II __last, _OI __result)
    {
      typedef typename iterator_traits<_II>::value_type _ValueTypeI;
      typedef typename iterator_traits<_OI>::value_type _ValueTypeO;
      typedef typename iterator_traits<_II>::iterator_category _Category;
      const bool __simple = (__is_trivial(_ValueTypeI)
                      && __is_pointer<_II>::__value
                      && __is_pointer<_OI>::__value
        && __are_same<_ValueTypeI, _ValueTypeO>::__value);

      return std::__copy_move<_IsMove, __simple,
                       _Category>::__copy_m(__first, __last, __result);
    }



  template<typename _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits>
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator;

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(_CharT*, _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(const _CharT*, const _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT, char_traits<_CharT> >,
     istreambuf_iterator<_CharT, char_traits<_CharT> >, _CharT*);

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a2(_II __first, _II __last, _OI __result)
    {
      return _OI(std::__copy_move_a<_IsMove>(std::__niter_base(__first),
          std::__niter_base(__last),
          std::__niter_base(__result)));
    }
# 444 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _II, typename _OI>
    inline _OI
    copy(_II __first, _II __last, _OI __result)
    {




                                                     ;

      return (std::__copy_move_a2<__is_move_iterator<_II>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
# 477 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _II, typename _OI>
    inline _OI
    move(_II __first, _II __last, _OI __result)
    {




                                                     ;

      return std::__copy_move_a2<true>(std::__miter_base(__first),
           std::__miter_base(__last), __result);
    }






  template<bool, bool, typename>
    struct __copy_move_backward
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = *--__last;
   return __result;
 }
    };


  template<typename _Category>
    struct __copy_move_backward<true, false, _Category>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = std::move(*--__last);
   return __result;
 }
    };


  template<>
    struct __copy_move_backward<false, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = *--__last;
   return __result;
 }
    };


  template<>
    struct __copy_move_backward<true, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = std::move(*--__last);
   return __result;
 }
    };


  template<bool _IsMove>
    struct __copy_move_backward<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_move_b(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {

   using __assignable = conditional<_IsMove,
        is_move_assignable<_Tp>,
        is_copy_assignable<_Tp>>;

   static_assert( __assignable::type::value, "type is not assignable" );

   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
   return __result - _Num;
 }
    };

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      typedef typename iterator_traits<_BI1>::value_type _ValueType1;
      typedef typename iterator_traits<_BI2>::value_type _ValueType2;
      typedef typename iterator_traits<_BI1>::iterator_category _Category;
      const bool __simple = (__is_trivial(_ValueType1)
                      && __is_pointer<_BI1>::__value
                      && __is_pointer<_BI2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__copy_move_backward<_IsMove, __simple,
                                _Category>::__copy_move_b(__first,
         __last,
         __result);
    }

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      return _BI2(std::__copy_move_backward_a<_IsMove>
    (std::__niter_base(__first), std::__niter_base(__last),
     std::__niter_base(__result)));
    }
# 620 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _BI1, typename _BI2>
    inline _BI2
    copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {






                                                     ;

      return (std::__copy_move_backward_a2<__is_move_iterator<_BI1>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
# 656 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _BI1, typename _BI2>
    inline _BI2
    move_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {






                                                     ;

      return std::__copy_move_backward_a2<true>(std::__miter_base(__first),
      std::__miter_base(__last),
      __result);
    }






  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
       const _Tp& __value)
    {
      for (; __first != __last; ++__first)
 *__first = __value;
    }

  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __first != __last; ++__first)
 *__first = __tmp;
    }


  template<typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type
    __fill_a(_Tp* __first, _Tp* __last, const _Tp& __c)
    {
      const _Tp __tmp = __c;
      if (const size_t __len = __last - __first)
 __builtin_memset(__first, static_cast<unsigned char>(__tmp), __len);
    }
# 722 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline void
    fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
    {



                                                     ;

      std::__fill_a(std::__niter_base(__first), std::__niter_base(__last),
      __value);
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      for (__decltype(__n + 0) __niter = __n;
    __niter > 0; --__niter, ++__first)
 *__first = __value;
      return __first;
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (__decltype(__n + 0) __niter = __n;
    __niter > 0; --__niter, ++__first)
 *__first = __tmp;
      return __first;
    }

  template<typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp*>::__type
    __fill_n_a(_Tp* __first, _Size __n, const _Tp& __c)
    {
      std::__fill_a(__first, __first + __n, __c);
      return __first + __n;
    }
# 782 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _OI, typename _Size, typename _Tp>
    inline _OI
    fill_n(_OI __first, _Size __n, const _Tp& __value)
    {



      return _OI(std::__fill_n_a(std::__niter_base(__first), __n, __value));
    }

  template<bool _BoolType>
    struct __equal
    {
      template<typename _II1, typename _II2>
        static bool
        equal(_II1 __first1, _II1 __last1, _II2 __first2)
        {
   for (; __first1 != __last1; ++__first1, (void)++__first2)
     if (!(*__first1 == *__first2))
       return false;
   return true;
 }
    };

  template<>
    struct __equal<true>
    {
      template<typename _Tp>
        static bool
        equal(const _Tp* __first1, const _Tp* __last1, const _Tp* __first2)
        {
   if (const size_t __len = (__last1 - __first1))
     return !__builtin_memcmp(__first1, __first2, sizeof(_Tp) * __len);
   return true;
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple = ((__is_integer<_ValueType1>::__value
         || __is_pointer<_ValueType1>::__value)
                      && __is_pointer<_II1>::__value
                      && __is_pointer<_II2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__equal<__simple>::equal(__first1, __last1, __first2);
    }

  template<typename, typename>
    struct __lc_rai
    {
      template<typename _II1, typename _II2>
        static _II1
        __newlast1(_II1, _II1 __last1, _II2, _II2)
        { return __last1; }

      template<typename _II>
        static bool
        __cnd2(_II __first, _II __last)
        { return __first != __last; }
    };

  template<>
    struct __lc_rai<random_access_iterator_tag, random_access_iterator_tag>
    {
      template<typename _RAI1, typename _RAI2>
        static _RAI1
        __newlast1(_RAI1 __first1, _RAI1 __last1,
     _RAI2 __first2, _RAI2 __last2)
        {
   const typename iterator_traits<_RAI1>::difference_type
     __diff1 = __last1 - __first1;
   const typename iterator_traits<_RAI2>::difference_type
     __diff2 = __last2 - __first2;
   return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
 }

      template<typename _RAI>
        static bool
        __cnd2(_RAI, _RAI)
        { return true; }
    };

  template<typename _II1, typename _II2, typename _Compare>
    bool
    __lexicographical_compare_impl(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2,
       _Compare __comp)
    {
      typedef typename iterator_traits<_II1>::iterator_category _Category1;
      typedef typename iterator_traits<_II2>::iterator_category _Category2;
      typedef std::__lc_rai<_Category1, _Category2> __rai_type;

      __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
      for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
    ++__first1, (void)++__first2)
 {
   if (__comp(__first1, __first2))
     return true;
   if (__comp(__first2, __first1))
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }

  template<bool _BoolType>
    struct __lexicographical_compare
    {
      template<typename _II1, typename _II2>
        static bool __lc(_II1, _II1, _II2, _II2);
    };

  template<bool _BoolType>
    template<typename _II1, typename _II2>
      bool
      __lexicographical_compare<_BoolType>::
      __lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
      {
 return std::__lexicographical_compare_impl(__first1, __last1,
         __first2, __last2,
     __gnu_cxx::__ops::__iter_less_iter());
      }

  template<>
    struct __lexicographical_compare<true>
    {
      template<typename _Tp, typename _Up>
        static bool
        __lc(const _Tp* __first1, const _Tp* __last1,
      const _Up* __first2, const _Up* __last2)
 {
   const size_t __len1 = __last1 - __first1;
   const size_t __len2 = __last2 - __first2;
   if (const size_t __len = std::min(__len1, __len2))
     if (int __result = __builtin_memcmp(__first1, __first2, __len))
       return __result < 0;
   return __len1 < __len2;
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __lexicographical_compare_aux(_II1 __first1, _II1 __last1,
      _II2 __first2, _II2 __last2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple =
 (__is_byte<_ValueType1>::__value && __is_byte<_ValueType2>::__value
  && !__gnu_cxx::__numeric_traits<_ValueType1>::__is_signed
  && !__gnu_cxx::__numeric_traits<_ValueType2>::__is_signed
  && __is_pointer<_II1>::__value
  && __is_pointer<_II2>::__value);

      return std::__lexicographical_compare<__simple>::__lc(__first1, __last1,
           __first2, __last2);
    }

  template<typename _ForwardIterator, typename _Tp, typename _Compare>
    _ForwardIterator
    __lower_bound(_ForwardIterator __first, _ForwardIterator __last,
    const _Tp& __val, _Compare __comp)
    {
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;

      _DistanceType __len = std::distance(__first, __last);

      while (__len > 0)
 {
   _DistanceType __half = __len >> 1;
   _ForwardIterator __middle = __first;
   std::advance(__middle, __half);
   if (__comp(__middle, __val))
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else
     __len = __half;
 }
      return __first;
    }
# 982 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline _ForwardIterator
    lower_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val)
    {




                                                                  ;

      return std::__lower_bound(__first, __last, __val,
    __gnu_cxx::__ops::__iter_less_val());
    }



  inline constexpr int
  __lg(int __n)
  { return sizeof(int) * 8 - 1 - __builtin_clz(__n); }

  inline constexpr unsigned
  __lg(unsigned __n)
  { return sizeof(int) * 8 - 1 - __builtin_clz(__n); }

  inline constexpr long
  __lg(long __n)
  { return sizeof(long) * 8 - 1 - __builtin_clzl(__n); }

  inline constexpr unsigned long
  __lg(unsigned long __n)
  { return sizeof(long) * 8 - 1 - __builtin_clzl(__n); }

  inline constexpr long long
  __lg(long long __n)
  { return sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }

  inline constexpr unsigned long long
  __lg(unsigned long long __n)
  { return sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }
# 1039 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2)
    {






                                                       ;

      return std::__equal_aux(std::__niter_base(__first1),
         std::__niter_base(__last1),
         std::__niter_base(__first2));
    }
# 1071 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _BinaryPredicate __binary_pred)
    {



                                                       ;

      for (; __first1 != __last1; ++__first1, (void)++__first2)
 if (!bool(__binary_pred(*__first1, *__first2)))
   return false;
      return true;
    }
# 1104 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
    {






                                                       ;
                                                       ;

      using _RATag = random_access_iterator_tag;
      using _Cat1 = typename iterator_traits<_II1>::iterator_category;
      using _Cat2 = typename iterator_traits<_II2>::iterator_category;
      using _RAIters = __and_<is_same<_Cat1, _RATag>, is_same<_Cat2, _RATag>>;
      if (_RAIters())
 {
   auto __d1 = std::distance(__first1, __last1);
   auto __d2 = std::distance(__first2, __last2);
   if (__d1 != __d2)
     return false;
   return std::equal(__first1, __last1, __first2);
 }

      for (; __first1 != __last1 && __first2 != __last2;
   ++__first1, (void)++__first2)
 if (!(*__first1 == *__first2))
   return false;
      return __first1 == __last1 && __first2 == __last2;
    }
# 1153 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _IIter2 __last2, _BinaryPredicate __binary_pred)
    {



                                                       ;
                                                       ;

      using _RATag = random_access_iterator_tag;
      using _Cat1 = typename iterator_traits<_IIter1>::iterator_category;
      using _Cat2 = typename iterator_traits<_IIter2>::iterator_category;
      using _RAIters = __and_<is_same<_Cat1, _RATag>, is_same<_Cat2, _RATag>>;
      if (_RAIters())
 {
   auto __d1 = std::distance(__first1, __last1);
   auto __d2 = std::distance(__first2, __last2);
   if (__d1 != __d2)
     return false;
   return std::equal(__first1, __last1, __first2,
           __binary_pred);
 }

      for (; __first1 != __last1 && __first2 != __last2;
   ++__first1, (void)++__first2)
 if (!bool(__binary_pred(*__first1, *__first2)))
   return false;
      return __first1 == __last1 && __first2 == __last2;
    }
# 1201 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2)
    {
# 1215 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
                                                       ;
                                                       ;

      return std::__lexicographical_compare_aux(std::__niter_base(__first1),
      std::__niter_base(__last1),
      std::__niter_base(__first2),
      std::__niter_base(__last2));
    }
# 1237 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _II1, typename _II2, typename _Compare>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2, _Compare __comp)
    {



                                                       ;
                                                       ;

      return std::__lexicographical_compare_impl
 (__first1, __last1, __first2, __last2,
  __gnu_cxx::__ops::__iter_comp_iter(__comp));
    }

  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    __mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
        _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {
      while (__first1 != __last1 && __binary_pred(__first1, __first2))
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
# 1280 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2>
    inline pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2)
    {






                                                       ;

      return std::__mismatch(__first1, __last1, __first2,
        __gnu_cxx::__ops::__iter_equal_to_iter());
    }
# 1313 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    inline pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {



                                                       ;

      return std::__mismatch(__first1, __last1, __first2,
 __gnu_cxx::__ops::__iter_comp_iter(__binary_pred));
    }



  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    __mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
        _InputIterator2 __first2, _InputIterator2 __last2,
        _BinaryPredicate __binary_pred)
    {
      while (__first1 != __last1 && __first2 != __last2
      && __binary_pred(__first1, __first2))
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
# 1360 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2>
    inline pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _InputIterator2 __last2)
    {






                                                       ;
                                                       ;

      return std::__mismatch(__first1, __last1, __first2, __last2,
        __gnu_cxx::__ops::__iter_equal_to_iter());
    }
# 1395 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    inline pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _InputIterator2 __last2,
      _BinaryPredicate __binary_pred)
    {



                                                       ;
                                                       ;

      return std::__mismatch(__first1, __last1, __first2, __last2,
        __gnu_cxx::__ops::__iter_comp_iter(__binary_pred));
    }



}
# 40 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/char_traits.h" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/postypes.h" 1 3
# 39 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/postypes.h" 3

# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cwchar" 1 3
# 40 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cwchar" 3




# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 1 3
# 10 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw_print_push.h" 1 3
# 11 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 2 3





#pragma pack(push,_CRT_PACKING)


extern "C" {
# 32 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 3
  struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
  };
  typedef struct _iobuf FILE;





  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) __iob_func(void);
# 71 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 3
  typedef unsigned long _fsize_t;




  struct _wfinddata32_t {
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    _fsize_t size;
    wchar_t name[260];
  };

  struct _wfinddata32i64_t {
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    __extension__ long size;
    wchar_t name[260];
  };

  struct _wfinddata64i32_t {
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    _fsize_t size;
    wchar_t name[260];
  };

  struct _wfinddata64_t {
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    __extension__ long size;
    wchar_t name[260];
  };
# 169 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 3
  extern unsigned short ** __imp__pctype;
# 183 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 3
  extern unsigned short ** __imp__wctype;
# 198 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 3
  extern unsigned short ** __imp__pwctype;
# 222 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 3
  int __attribute__((__cdecl__)) iswalpha(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswalpha_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswupper(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswupper_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswlower(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswlower_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswdigit(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswdigit_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswxdigit(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswxdigit_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswspace(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswspace_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswpunct(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswpunct_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswalnum(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswalnum_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswprint(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswprint_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswgraph(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswgraph_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswcntrl(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswcntrl_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswascii(wint_t _C);
  int __attribute__((__cdecl__)) isleadbyte(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isleadbyte_l(int _C,_locale_t _Locale);
  wint_t __attribute__((__cdecl__)) towupper(wint_t _C);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _towupper_l(wint_t _C,_locale_t _Locale);
  wint_t __attribute__((__cdecl__)) towlower(wint_t _C);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _towlower_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswctype(wint_t _C,wctype_t _Type);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswctype_l(wint_t _C,wctype_t _Type,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __iswcsymf(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswcsymf_l(wint_t _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __iswcsym(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswcsym_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) is_wctype(wint_t _C,wctype_t _Type);


  int __attribute__((__cdecl__)) iswblank(wint_t _C);







  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wgetcwd(wchar_t *_DstBuf,int _SizeInWords);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wgetdcwd(int _Drive,wchar_t *_DstBuf,int _SizeInWords);
  wchar_t *__attribute__((__cdecl__)) _wgetdcwd_nolock(int _Drive,wchar_t *_DstBuf,int _SizeInWords);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wchdir(const wchar_t *_Path);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wmkdir(const wchar_t *_Path);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wrmdir(const wchar_t *_Path);





  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _waccess(const wchar_t *_Filename,int _AccessMode);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wchmod(const wchar_t *_Filename,int _Mode);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcreat(const wchar_t *_Filename,int _PermissionMode) ;
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wfindfirst32(const wchar_t *_Filename,struct _wfinddata32_t *_FindData);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wfindnext32(intptr_t _FindHandle,struct _wfinddata32_t *_FindData);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wunlink(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wrename(const wchar_t *_OldFilename,const wchar_t *_NewFilename);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wmktemp(wchar_t *_TemplateName) ;
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wfindfirst32i64(const wchar_t *_Filename,struct _wfinddata32i64_t *_FindData);
  intptr_t __attribute__((__cdecl__)) _wfindfirst64i32(const wchar_t *_Filename,struct _wfinddata64i32_t *_FindData);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wfindfirst64(const wchar_t *_Filename,struct _wfinddata64_t *_FindData);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wfindnext32i64(intptr_t _FindHandle,struct _wfinddata32i64_t *_FindData);
  int __attribute__((__cdecl__)) _wfindnext64i32(intptr_t _FindHandle,struct _wfinddata64i32_t *_FindData);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wfindnext64(intptr_t _FindHandle,struct _wfinddata64_t *_FindData);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wsopen_s(int *_FileHandle,const wchar_t *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionFlag);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wopen(const wchar_t *_Filename,int _OpenFlag,...) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wsopen(const wchar_t *_Filename,int _OpenFlag,int _ShareFlag,...) ;




  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wsetlocale(int _Category,const wchar_t *_Locale);




  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wexecl(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wexecle(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wexeclp(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wexeclpe(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wexecv(const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wexecve(const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wexecvp(const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wexecvpe(const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);




  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnl(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnle(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnlp(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnlpe(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnv(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnve(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnvp(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnvpe(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
# 369 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 3
  typedef unsigned short _ino_t;

  typedef unsigned short ino_t;





  typedef unsigned int _dev_t;

  typedef unsigned int dev_t;




# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw_off_t.h" 1 3




  typedef long _off_t;

  typedef long off32_t;





  __extension__ typedef long long _off64_t;

  __extension__ typedef long long off64_t;
# 26 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw_off_t.h" 3
typedef off32_t off_t;
# 384 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw_stat64.h" 1 3
# 19 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw_stat64.h" 3
  struct _stat32 {
    _dev_t st_dev;
   _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    __time32_t st_atime;
    __time32_t st_mtime;
    __time32_t st_ctime;
  };


  struct stat {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    time_t st_atime;
    time_t st_mtime;
    time_t st_ctime;
  };


  struct _stat32i64 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    __extension__ long st_size;
    __time32_t st_atime;
    __time32_t st_mtime;
    __time32_t st_ctime;
  };

  struct _stat64i32 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    __time64_t st_atime;
    __time64_t st_mtime;
    __time64_t st_ctime;
  };

  struct _stat64 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    __extension__ long st_size;
    __time64_t st_atime;
    __time64_t st_mtime;
    __time64_t st_ctime;
  };
# 385 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 2 3




  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wstat32(const wchar_t *_Name,struct _stat32 *_Stat);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wstat32i64(const wchar_t *_Name,struct _stat32i64 *_Stat);
  int __attribute__((__cdecl__)) _wstat64i32(const wchar_t *_Name,struct _stat64i32 *_Stat);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wstat64(const wchar_t *_Name,struct _stat64 *_Stat);
# 403 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 3
  __attribute__ ((__dllimport__)) wchar_t *_cgetws(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _getwch(void);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _getwche(void);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _putwch(wchar_t _WCh);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _ungetwch(wint_t _WCh);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _cputws(const wchar_t *_String);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _cwprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _cwscanf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _cwscanf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vcwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _cwprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vcwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _cwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vcwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _cwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vcwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  wint_t __attribute__((__cdecl__)) _putwch_nolock(wchar_t _WCh);
  wint_t __attribute__((__cdecl__)) _getwch_nolock(void);
  wint_t __attribute__((__cdecl__)) _getwche_nolock(void);
  wint_t __attribute__((__cdecl__)) _ungetwch_nolock(wint_t _WCh);





                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vswscanf (const wchar_t * __restrict__ _Str,const wchar_t * __restrict__ Format,va_list argp);
                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_wscanf(const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vwscanf(const wchar_t * __restrict__ Format, va_list argp);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfwscanf (FILE * __restrict__ fp, const wchar_t * __restrict__ Format,va_list argp);


                                                      __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
                                                      __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_wprintf(const wchar_t * __restrict__ _Format,...);
                                                      __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
                                                      __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
                                                      __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);
                                                      __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...);
                                                      __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list);
# 474 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 3
static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                     __attribute__ ((__nonnull__ (2)))
int swscanf(const wchar_t *__source, const wchar_t *__format, ...)
{
  register int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vswscanf( __source, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                     __attribute__ ((__nonnull__ (1)))
int wscanf(const wchar_t *__format, ...)
{
  register int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vwscanf( __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                     __attribute__ ((__nonnull__ (2)))
int fwscanf(FILE *__stream, const wchar_t *__format, ...)
{
  register int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfwscanf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}


static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                     __attribute__ ((__nonnull__ (2)))
int vswscanf (const wchar_t *__source, const wchar_t *__format, __builtin_va_list __local_argv)
{
  return __mingw_vswscanf( __source, __format, __local_argv );
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                     __attribute__ ((__nonnull__ (1)))
int vwscanf(const wchar_t *__format, __builtin_va_list __local_argv)
{
  return __mingw_vwscanf( __format, __local_argv );
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                     __attribute__ ((__nonnull__ (2)))
int vfwscanf (FILE *__stream, const wchar_t *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfwscanf( __stream, __format, __local_argv );
}




static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (2)))
int fwprintf (FILE *__stream, const wchar_t *__format, ...)
{
  register int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfwprintf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (1)))
int wprintf (const wchar_t *__format, ...)
{
  register int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vwprintf( __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (2)))
int vfwprintf (FILE *__stream, const wchar_t *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfwprintf( __stream, __format, __local_argv );
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (1)))
int vwprintf (const wchar_t *__format, __builtin_va_list __local_argv)
{
  return __mingw_vwprintf( __format, __local_argv );
}


static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (3)))
int snwprintf (wchar_t *__stream, size_t __n, const wchar_t *__format, ...)
{
  register int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vsnwprintf( __stream, __n, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (3)))
int vsnwprintf (wchar_t *__stream, size_t __n, const wchar_t *__format, __builtin_va_list __local_argv)
{
  return __mingw_vsnwprintf( __stream, __n, __format, __local_argv );
}
# 633 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 3
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);


  wint_t __attribute__((__cdecl__)) fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fgetwchar(void);
  wint_t __attribute__((__cdecl__)) fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fputwchar(wchar_t _Ch);
  wint_t __attribute__((__cdecl__)) getwc(FILE *_File);
  wint_t __attribute__((__cdecl__)) getwchar(void);
  wint_t __attribute__((__cdecl__)) putwc(wchar_t _Ch,FILE *_File);
  wint_t __attribute__((__cdecl__)) putwchar(wchar_t _Ch);
  wint_t __attribute__((__cdecl__)) ungetwc(wint_t _Ch,FILE *_File);
  wchar_t *__attribute__((__cdecl__)) fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int __attribute__((__cdecl__)) fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _getws(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putws(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_l(wchar_t * __restrict__ ,size_t _SizeInWords,const wchar_t * __restrict__ _Format,_locale_t _Locale,... ) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) ;
# 686 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __swprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,...) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_l(wchar_t * __restrict__ _Dest,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __vswprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,va_list _Args) ;



# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\swprintf.inl" 1 3
# 10 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\swprintf.inl" 3
# 1 "C:\\Xilinx\\Vitis_HLS\\2020.2\\win64\\tools\\clang-3.9-csynth\\lib\\clang\\7.0.0\\include\\vadefs.h" 1 3
# 11 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\swprintf.inl" 2 3
# 21 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\swprintf.inl" 3
static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (3)))
int vswprintf (wchar_t *__stream, size_t __count, const wchar_t *__format, __builtin_va_list __local_argv)
{
  return vsnwprintf( __stream, __count, __format, __local_argv );
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (3)))
int swprintf (wchar_t *__stream, size_t __count, const wchar_t *__format, ...)
{
  register int __retval;
  __builtin_va_list __local_argv;

  __builtin_va_start( __local_argv, __format );
  __retval = vswprintf( __stream, __count, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}



extern "C++" {

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (2)))
int vswprintf (wchar_t *__stream, const wchar_t *__format, __builtin_va_list __local_argv)
{

  return __mingw_vswprintf( __stream, __format, __local_argv );



}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (2)))
int swprintf (wchar_t *__stream, const wchar_t *__format, ...)
{
  register int __retval;
  __builtin_va_list __local_argv;

  __builtin_va_start( __local_argv, __format );
  __retval = vswprintf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

}
# 719 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 2 3
# 728 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 3
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwscanf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swscanf_l(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf_l(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wscanf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) ;





  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wpopen(const wchar_t *_Command,const wchar_t *_Mode);



  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wremove(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wtmpnam(wchar_t *_Buffer);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fgetwc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fputwc_nolock(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _ungetwc_nolock(wint_t _Ch,FILE *_File);
# 842 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 3
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcsdup(const wchar_t *_Str);
  wchar_t *__attribute__((__cdecl__)) wcscat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
                wchar_t *__attribute__((__cdecl__)) wcschr(const wchar_t *_Str,wchar_t _Ch);
  int __attribute__((__cdecl__)) wcscmp(const wchar_t *_Str1,const wchar_t *_Str2);
  wchar_t *__attribute__((__cdecl__)) wcscpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
  size_t __attribute__((__cdecl__)) wcscspn(const wchar_t *_Str,const wchar_t *_Control);
  size_t __attribute__((__cdecl__)) wcslen(const wchar_t *_Str);
  size_t __attribute__((__cdecl__)) wcsnlen(const wchar_t *_Src,size_t _MaxCount);
  wchar_t *__attribute__((__cdecl__)) wcsncat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  int __attribute__((__cdecl__)) wcsncmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  wchar_t *__attribute__((__cdecl__)) wcsncpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  wchar_t *__attribute__((__cdecl__)) _wcsncpy_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count,_locale_t _Locale) ;
                wchar_t *__attribute__((__cdecl__)) wcspbrk(const wchar_t *_Str,const wchar_t *_Control);
                wchar_t *__attribute__((__cdecl__)) wcsrchr(const wchar_t *_Str,wchar_t _Ch);
  size_t __attribute__((__cdecl__)) wcsspn(const wchar_t *_Str,const wchar_t *_Control);
                wchar_t *__attribute__((__cdecl__)) wcsstr(const wchar_t *_Str,const wchar_t *_SubStr);
  wchar_t *__attribute__((__cdecl__)) wcstok(wchar_t * __restrict__ _Str,const wchar_t * __restrict__ _Delim) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcserror(int _ErrNum) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) __wcserror(const wchar_t *_Str) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsnicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcsrev(wchar_t *_Str);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcsset(wchar_t *_Str,wchar_t _Val) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcslwr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcslwr_l(wchar_t *_String,_locale_t _Locale) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcsupr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcsupr_l(wchar_t *_String,_locale_t _Locale) ;
  size_t __attribute__((__cdecl__)) wcsxfrm(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _wcsxfrm_l(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount,_locale_t _Locale);
  int __attribute__((__cdecl__)) wcscoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcscoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsncoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsncoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsnicoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsnicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);


  wchar_t *__attribute__((__cdecl__)) wcsdup(const wchar_t *_Str) ;

  int __attribute__((__cdecl__)) wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2) ;
  int __attribute__((__cdecl__)) wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount) ;
  wchar_t *__attribute__((__cdecl__)) wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  wchar_t *__attribute__((__cdecl__)) wcsrev(wchar_t *_Str) ;
  wchar_t *__attribute__((__cdecl__)) wcsset(wchar_t *_Str,wchar_t _Val) ;
  wchar_t *__attribute__((__cdecl__)) wcslwr(wchar_t *_Str) ;
  wchar_t *__attribute__((__cdecl__)) wcsupr(wchar_t *_Str) ;
  int __attribute__((__cdecl__)) wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2) ;





  struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
  };





  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wasctime(const struct tm *_Tm);
  wchar_t *__attribute__((__cdecl__)) _wctime32(const __time32_t *_Time) ;
  size_t __attribute__((__cdecl__)) wcsftime(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _wcsftime_l(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wstrdate(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wstrtime(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wctime64(const __time64_t *_Time) ;



  wchar_t *__attribute__((__cdecl__)) _wctime(const time_t *_Time) ;
# 936 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 3
  typedef int mbstate_t;
  typedef wchar_t _Wint_t;

  wint_t __attribute__((__cdecl__)) btowc(int);
  size_t __attribute__((__cdecl__)) mbrlen(const char * __restrict__ _Ch,size_t _SizeInBytes,mbstate_t * __restrict__ _State);
  size_t __attribute__((__cdecl__)) mbrtowc(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SizeInBytes,mbstate_t * __restrict__ _State);
  size_t __attribute__((__cdecl__)) mbsrtowcs(wchar_t * __restrict__ _Dest,const char ** __restrict__ _PSrc,size_t _Count,mbstate_t * __restrict__ _State) ;
  size_t __attribute__((__cdecl__)) wcrtomb(char * __restrict__ _Dest,wchar_t _Source,mbstate_t * __restrict__ _State) ;
  size_t __attribute__((__cdecl__)) wcsrtombs(char * __restrict__ _Dest,const wchar_t ** __restrict__ _PSource,size_t _Count,mbstate_t * __restrict__ _State) ;
  int __attribute__((__cdecl__)) wctob(wint_t _WCh);


  wchar_t *__attribute__((__cdecl__)) wmemset(wchar_t *s, wchar_t c, size_t n);
                wchar_t *__attribute__((__cdecl__)) wmemchr(const wchar_t *s, wchar_t c, size_t n);
  int __attribute__((__cdecl__)) wmemcmp(const wchar_t *s1, const wchar_t *s2,size_t n);
  wchar_t *__attribute__((__cdecl__)) wmemcpy(wchar_t * __restrict__ s1,const wchar_t * __restrict__ s2,size_t n) ;
  wchar_t * __attribute__((__cdecl__)) wmempcpy (wchar_t *_Dst, const wchar_t *_Src, size_t _Size);
  wchar_t *__attribute__((__cdecl__)) wmemmove(wchar_t *s1, const wchar_t *s2, size_t n) ;
  int __attribute__((__cdecl__)) fwide(FILE *stream,int mode);
  int __attribute__((__cdecl__)) mbsinit(const mbstate_t *ps);
  __extension__ long long __attribute__((__cdecl__)) wcstoll(const wchar_t * __restrict__ nptr,wchar_t ** __restrict__ endptr, int base);
  __extension__ unsigned long long __attribute__((__cdecl__)) wcstoull(const wchar_t * __restrict__ nptr,wchar_t ** __restrict__ endptr, int base);


  void *__attribute__((__cdecl__)) memmove(void *_Dst,const void *_Src,size_t _MaxCount);
  void *__attribute__((__cdecl__)) memcpy(void * __restrict__ _Dst,const void * __restrict__ _Src,size_t _MaxCount) ;
# 1011 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 3
int __attribute__((__cdecl__)) __mingw_str_wide_utf8 (const wchar_t * const wptr, char **mbptr, size_t * buflen);
# 1025 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 3
int __attribute__((__cdecl__)) __mingw_str_utf8_wide (const char *const mbptr, wchar_t ** wptr, size_t * buflen);
# 1034 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 3
void __attribute__((__cdecl__)) __mingw_str_free(void *ptr);




}


#pragma pack(pop)


# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\sec_api/wchar_s.h" 1 3








# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 1 3
# 10 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\sec_api/wchar_s.h" 2 3




extern "C" {




  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _waccess_s (const wchar_t *_Filename,int _AccessMode);
  errno_t __attribute__((__cdecl__)) _wmktemp_s (wchar_t *_TemplateName,size_t _SizeInWords);




  errno_t __attribute__((__cdecl__)) _cgetws_s (wchar_t *_Buffer,size_t _SizeInWords,size_t *_SizeRead);
  int __attribute__((__cdecl__)) _cwprintf_s (const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _cwscanf_s(const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _cwscanf_s_l(const wchar_t *_Format,_locale_t _Locale,...);
  int __attribute__((__cdecl__)) _vcwprintf_s (const wchar_t *_Format,va_list _ArgList);
  int __attribute__((__cdecl__)) _cwprintf_s_l (const wchar_t *_Format,_locale_t _Locale,...);
  int __attribute__((__cdecl__)) _vcwprintf_s_l (const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);




  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _getws_s(wchar_t *_Str,size_t _SizeInWords);
  int __attribute__((__cdecl__)) fwprintf_s(FILE *_File,const wchar_t *_Format,...);
  int __attribute__((__cdecl__)) wprintf_s(const wchar_t *_Format,...);
  int __attribute__((__cdecl__)) vfwprintf_s(FILE *_File,const wchar_t *_Format,va_list _ArgList);
  int __attribute__((__cdecl__)) vwprintf_s(const wchar_t *_Format,va_list _ArgList);

  int __attribute__((__cdecl__)) vswprintf_s(wchar_t *_Dst,size_t _SizeInWords,const wchar_t *_Format,va_list _ArgList);
  extern "C++" { template <size_t __size> inline int __attribute__((__cdecl__)) vswprintf_s(wchar_t (&_Dst)[__size], const wchar_t* _Format, va_list _ArgList) { return vswprintf_s(_Dst,__size,_Format,_ArgList); } }

  int __attribute__((__cdecl__)) swprintf_s(wchar_t *_Dst,size_t _SizeInWords,const wchar_t *_Format,...);
  extern "C++" { template <size_t __size> inline int __attribute__((__cdecl__)) swprintf_s(wchar_t (&_Dst)[__size], const wchar_t* _Format, ...) { va_list __vaargs; __builtin_va_start(__vaargs,_Format); int __retval = vswprintf_s(_Dst,__size,_Format,__vaargs); __builtin_va_end(__vaargs); return __retval; } }

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf_s(wchar_t *_DstBuf,size_t _DstSizeInWords,size_t _MaxCount,const wchar_t *_Format,va_list _ArgList);
  extern "C++" { template <size_t __size> inline int __attribute__((__cdecl__)) _vsnwprintf_s(wchar_t (&_DstBuf)[__size], size_t _MaxCount, const wchar_t* _Format, va_list _ArgList) { return _vsnwprintf_s(_DstBuf,__size,_MaxCount,_Format,_ArgList); } }

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf_s(wchar_t *_DstBuf,size_t _DstSizeInWords,size_t _MaxCount,const wchar_t *_Format,...);
  extern "C++" { template <size_t __size> inline int __attribute__((__cdecl__)) _snwprintf_s(wchar_t (&_DstBuf)[__size], size_t _MaxCount, const wchar_t* _Format, ...) { va_list __vaargs; __builtin_va_start(__vaargs,_Format); int __retval = _vsnwprintf_s(_DstBuf,__size,_MaxCount,_Format,__vaargs); __builtin_va_end(__vaargs); return __retval; } }

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_s_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_s_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_s_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_s_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwscanf_s_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swscanf_s_l(const wchar_t *_Src,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) swscanf_s(const wchar_t *_Src,const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf_s(const wchar_t *_Src,size_t _MaxCount,const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf_s_l(const wchar_t *_Src,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wscanf_s_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wfopen_s(FILE **_File,const wchar_t *_Filename,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wfreopen_s(FILE **_File,const wchar_t *_Filename,const wchar_t *_Mode,FILE *_OldFile);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wtmpnam_s(wchar_t *_DstBuf,size_t _SizeInWords);
# 111 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\sec_api/wchar_s.h" 3
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) wcstok_s(wchar_t *_Str,const wchar_t *_Delim,wchar_t **_Context);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcserror_s(wchar_t *_Buf,size_t _SizeInWords,int _ErrNum);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) __wcserror_s(wchar_t *_Buffer,size_t _SizeInWords,const wchar_t *_ErrMsg);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsnset_s(wchar_t *_Dst,size_t _DstSizeInWords,wchar_t _Val,size_t _MaxCount);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsset_s(wchar_t *_Str,size_t _SizeInWords,wchar_t _Val);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcslwr_s(wchar_t *_Str,size_t _SizeInWords);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcslwr_s_l(wchar_t *_Str,size_t _SizeInWords,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsupr_s(wchar_t *_Str,size_t _Size);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsupr_s_l(wchar_t *_Str,size_t _Size,_locale_t _Locale);

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcscat_s(wchar_t *_Dst, rsize_t _DstSize, const wchar_t *_Src);
  extern "C++" { template <size_t __size> inline errno_t __attribute__((__cdecl__)) wcscat_s(wchar_t (&_Dest)[__size], const wchar_t * _Source) { return wcscat_s(_Dest,__size,_Source); } }
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcscpy_s(wchar_t *_Dst, rsize_t _DstSize, const wchar_t *_Src);
  extern "C++" { template <size_t __size> inline errno_t __attribute__((__cdecl__)) wcscpy_s(wchar_t (&_Dest)[__size], const wchar_t * _Source) { return wcscpy_s(_Dest,__size,_Source); } }

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcsncat_s(wchar_t *_Dst,size_t _DstSizeInChars,const wchar_t *_Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsncat_s_l(wchar_t *_Dst,size_t _DstSizeInChars,const wchar_t *_Src,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcsncpy_s(wchar_t *_Dst,size_t _DstSizeInChars,const wchar_t *_Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsncpy_s_l(wchar_t *_Dst,size_t _DstSizeInChars,const wchar_t *_Src,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcstok_s_l(wchar_t *_Str,const wchar_t *_Delim,wchar_t **_Context,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsset_s_l(wchar_t *_Str,size_t _SizeInChars,unsigned int _Val,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsnset_s_l(wchar_t *_Str,size_t _SizeInChars,unsigned int _Val, size_t _Count,_locale_t _Locale);

  inline __attribute__((__always_inline__)) size_t __attribute__((__cdecl__)) wcsnlen_s(const wchar_t * _src, size_t _count) {
    return _src ? wcsnlen(_src, _count) : 0;
  }




  errno_t __attribute__((__cdecl__)) _wasctime_s (wchar_t *_Buf,size_t _SizeInWords,const struct tm *_Tm);
  errno_t __attribute__((__cdecl__)) _wctime32_s (wchar_t *_Buf,size_t _SizeInWords,const __time32_t *_Time);
  errno_t __attribute__((__cdecl__)) _wstrdate_s (wchar_t *_Buf,size_t _SizeInWords);
  errno_t __attribute__((__cdecl__)) _wstrtime_s (wchar_t *_Buf,size_t _SizeInWords);
  errno_t __attribute__((__cdecl__)) _wctime64_s (wchar_t *_Buf,size_t _SizeInWords,const __time64_t *_Time);



  errno_t __attribute__((__cdecl__)) _wctime_s(wchar_t *, size_t, const time_t *);

inline errno_t __attribute__((__cdecl__)) _wctime_s(wchar_t *_Buffer,size_t _SizeInWords,const time_t *_Time) { return _wctime64_s(_Buffer,_SizeInWords,_Time); }




  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) mbsrtowcs_s(size_t *_Retval,wchar_t *_Dst,size_t _SizeInWords,const char **_PSrc,size_t _N,mbstate_t *_State);
  extern "C++" { template <size_t __size> inline errno_t __attribute__((__cdecl__)) mbsrtowcs_s(size_t* _Retval, wchar_t (&_Dst)[__size], const char** _PSrc, size_t _N, mbstate_t _State) { return mbsrtowcs_s(_Retval, _Dst, __size, _PSrc, _N, _State); } }

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcrtomb_s(size_t *_Retval,char *_Dst,size_t _SizeInBytes,wchar_t _Ch,mbstate_t *_State);
  extern "C++" { template <size_t __size> inline errno_t __attribute__((__cdecl__)) wcrtomb_s(size_t* _Retval, char (&_Dst)[__size], wchar_t _Ch, mbstate_t _State) { return wcrtomb_s(_Retval, _Dst, __size, _Ch, _State); } }

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcsrtombs_s(size_t *_Retval,char *_Dst,size_t _SizeInBytes,const wchar_t **_Src,size_t _Size,mbstate_t *_State);
  extern "C++" { template <size_t __size> inline errno_t __attribute__((__cdecl__)) wcsrtombs_s(size_t _Retval, char (&_Dst)[__size], const wchar_t** _Src, size_t _Size, mbstate_t _State) { return wcsrtombs_s(_Retval, _Dst, __size, _Src, _Size, _State); } }

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wmemcpy_s (wchar_t *_dest,size_t _numberOfElements,const wchar_t *_src,size_t _count);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wmemmove_s(wchar_t *_dest,size_t _numberOfElements,const wchar_t *_src,size_t _count);


}
# 1045 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 2 3

# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw_print_pop.h" 1 3
# 1047 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\wchar.h" 2 3
# 45 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cwchar" 2 3
# 62 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cwchar" 3
namespace std
{
  using ::mbstate_t;
}
# 135 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cwchar" 3
namespace std
{


  using ::wint_t;

  using ::btowc;
  using ::fgetwc;
  using ::fgetws;
  using ::fputwc;
  using ::fputws;
  using ::fwide;
  using ::fwprintf;
  using ::fwscanf;
  using ::getwc;
  using ::getwchar;
  using ::mbrlen;
  using ::mbrtowc;
  using ::mbsinit;
  using ::mbsrtowcs;
  using ::putwc;
  using ::putwchar;

  using ::swprintf;

  using ::swscanf;
  using ::ungetwc;
  using ::vfwprintf;

  using ::vfwscanf;


  using ::vswprintf;


  using ::vswscanf;

  using ::vwprintf;

  using ::vwscanf;

  using ::wcrtomb;
  using ::wcscat;
  using ::wcscmp;
  using ::wcscoll;
  using ::wcscpy;
  using ::wcscspn;
  using ::wcsftime;
  using ::wcslen;
  using ::wcsncat;
  using ::wcsncmp;
  using ::wcsncpy;
  using ::wcsrtombs;
  using ::wcsspn;
  using ::wcstod;

  using ::wcstof;

  using ::wcstok;
  using ::wcstol;
  using ::wcstoul;
  using ::wcsxfrm;
  using ::wctob;
  using ::wmemcmp;
  using ::wmemcpy;
  using ::wmemmove;
  using ::wmemset;
  using ::wprintf;
  using ::wscanf;
  using ::wcschr;
  using ::wcspbrk;
  using ::wcsrchr;
  using ::wcsstr;
  using ::wmemchr;


  inline wchar_t*
  wcschr(wchar_t* __p, wchar_t __c)
  { return wcschr(const_cast<const wchar_t*>(__p), __c); }

  inline wchar_t*
  wcspbrk(wchar_t* __s1, const wchar_t* __s2)
  { return wcspbrk(const_cast<const wchar_t*>(__s1), __s2); }

  inline wchar_t*
  wcsrchr(wchar_t* __p, wchar_t __c)
  { return wcsrchr(const_cast<const wchar_t*>(__p), __c); }

  inline wchar_t*
  wcsstr(wchar_t* __s1, const wchar_t* __s2)
  { return wcsstr(const_cast<const wchar_t*>(__s1), __s2); }

  inline wchar_t*
  wmemchr(wchar_t* __p, wchar_t __c, size_t __n)
  { return wmemchr(const_cast<const wchar_t*>(__p), __c, __n); }



}







namespace __gnu_cxx
{





  using ::wcstold;
# 257 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cwchar" 3
  using ::wcstoll;
  using ::wcstoull;

}

namespace std
{
  using ::__gnu_cxx::wcstold;
  using ::__gnu_cxx::wcstoll;
  using ::__gnu_cxx::wcstoull;
}
# 277 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cwchar" 3
namespace std
{

  using std::wcstof;


  using std::vfwscanf;


  using std::vswscanf;


  using std::vwscanf;



  using std::wcstold;
  using std::wcstoll;
  using std::wcstoull;

}
# 41 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/postypes.h" 2 3
# 68 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/postypes.h" 3
namespace std
{
# 90 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/postypes.h" 3
  typedef long long streamoff;







  typedef ptrdiff_t streamsize;
# 111 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/postypes.h" 3
  template<typename _StateT>
    class fpos
    {
    private:
      streamoff _M_off;
      _StateT _M_state;

    public:




      fpos()
      : _M_off(0), _M_state() { }
# 133 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/postypes.h" 3
      fpos(streamoff __off)
      : _M_off(__off), _M_state() { }


      operator streamoff() const { return _M_off; }


      void
      state(_StateT __st)
      { _M_state = __st; }


      _StateT
      state() const
      { return _M_state; }





      fpos&
      operator+=(streamoff __off)
      {
 _M_off += __off;
 return *this;
      }





      fpos&
      operator-=(streamoff __off)
      {
 _M_off -= __off;
 return *this;
      }







      fpos
      operator+(streamoff __off) const
      {
 fpos __pos(*this);
 __pos += __off;
 return __pos;
      }







      fpos
      operator-(streamoff __off) const
      {
 fpos __pos(*this);
 __pos -= __off;
 return __pos;
      }






      streamoff
      operator-(const fpos& __other) const
      { return _M_off - __other._M_off; }
    };






  template<typename _StateT>
    inline bool
    operator==(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) == streamoff(__rhs); }

  template<typename _StateT>
    inline bool
    operator!=(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) != streamoff(__rhs); }





  typedef fpos<mbstate_t> streampos;

  typedef fpos<mbstate_t> wstreampos;



  typedef fpos<mbstate_t> u16streampos;

  typedef fpos<mbstate_t> u32streampos;



}
# 41 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/char_traits.h" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cwchar" 1 3
# 40 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cwchar" 3
# 42 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/char_traits.h" 2 3

namespace __gnu_cxx
{
# 57 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/char_traits.h" 3
  template<typename _CharT>
    struct _Char_types
    {
      typedef unsigned long int_type;
      typedef std::streampos pos_type;
      typedef std::streamoff off_type;
      typedef std::mbstate_t state_type;
    };
# 82 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/char_traits.h" 3
  template<typename _CharT>
    struct char_traits
    {
      typedef _CharT char_type;
      typedef typename _Char_types<_CharT>::int_type int_type;
      typedef typename _Char_types<_CharT>::pos_type pos_type;
      typedef typename _Char_types<_CharT>::off_type off_type;
      typedef typename _Char_types<_CharT>::state_type state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static constexpr bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static constexpr bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, std::size_t __n);

      static std::size_t
      length(const char_type* __s);

      static const char_type*
      find(const char_type* __s, std::size_t __n, const char_type& __a);

      static char_type*
      move(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      copy(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      assign(char_type* __s, std::size_t __n, char_type __a);

      static constexpr char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }

      static constexpr int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(__c); }

      static constexpr bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static constexpr int_type
      eof()
      { return static_cast<int_type>(-1); }

      static constexpr int_type
      not_eof(const int_type& __c)
      { return !eq_int_type(__c, eof()) ? __c : to_int_type(char_type()); }
    };

  template<typename _CharT>
    int
    char_traits<_CharT>::
    compare(const char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
 if (lt(__s1[__i], __s2[__i]))
   return -1;
 else if (lt(__s2[__i], __s1[__i]))
   return 1;
      return 0;
    }

  template<typename _CharT>
    std::size_t
    char_traits<_CharT>::
    length(const char_type* __p)
    {
      std::size_t __i = 0;
      while (!eq(__p[__i], char_type()))
        ++__i;
      return __i;
    }

  template<typename _CharT>
    const typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    find(const char_type* __s, std::size_t __n, const char_type& __a)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
        if (eq(__s[__i], __a))
          return __s + __i;
      return 0;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    move(char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      return static_cast<_CharT*>(__builtin_memmove(__s1, __s2,
          __n * sizeof(char_type)));
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    copy(char_type* __s1, const char_type* __s2, std::size_t __n)
    {

      std::copy(__s2, __s2 + __n, __s1);
      return __s1;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    assign(char_type* __s, std::size_t __n, char_type __a)
    {

      std::fill_n(__s, __n, __a);
      return __s;
    }


}

namespace std
{
# 226 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/char_traits.h" 3
  template<class _CharT>
    struct char_traits : public __gnu_cxx::char_traits<_CharT>
    { };



  template<>
    struct char_traits<char>
    {
      typedef char char_type;
      typedef int int_type;
      typedef streampos pos_type;
      typedef streamoff off_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2) noexcept
      { __c1 = __c2; }

      static constexpr bool
      eq(const char_type& __c1, const char_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr bool
      lt(const char_type& __c1, const char_type& __c2) noexcept
      {

 return (static_cast<unsigned char>(__c1)
  < static_cast<unsigned char>(__c2));
      }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return 0;
 return __builtin_memcmp(__s1, __s2, __n);
      }

      static size_t
      length(const char_type* __s)
      { return __builtin_strlen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      {
 if (__n == 0)
   return 0;
 return static_cast<const char_type*>(__builtin_memchr(__s, __a, __n));
      }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return static_cast<char_type*>(__builtin_memmove(__s1, __s2, __n));
      }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return static_cast<char_type*>(__builtin_memcpy(__s1, __s2, __n));
      }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      {
 if (__n == 0)
   return __s;
 return static_cast<char_type*>(__builtin_memset(__s, __a, __n));
      }

      static constexpr char_type
      to_char_type(const int_type& __c) noexcept
      { return static_cast<char_type>(__c); }



      static constexpr int_type
      to_int_type(const char_type& __c) noexcept
      { return static_cast<int_type>(static_cast<unsigned char>(__c)); }

      static constexpr bool
      eq_int_type(const int_type& __c1, const int_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr int_type
      eof() noexcept
      { return static_cast<int_type>(-1); }

      static constexpr int_type
      not_eof(const int_type& __c) noexcept
      { return (__c == eof()) ? 0 : __c; }
  };




  template<>
    struct char_traits<wchar_t>
    {
      typedef wchar_t char_type;
      typedef wint_t int_type;
      typedef streamoff off_type;
      typedef wstreampos pos_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2) noexcept
      { __c1 = __c2; }

      static constexpr bool
      eq(const char_type& __c1, const char_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr bool
      lt(const char_type& __c1, const char_type& __c2) noexcept
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return 0;
 return wmemcmp(__s1, __s2, __n);
      }

      static size_t
      length(const char_type* __s)
      { return wcslen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      {
 if (__n == 0)
   return 0;
 return wmemchr(__s, __a, __n);
      }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return wmemmove(__s1, __s2, __n);
      }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return wmemcpy(__s1, __s2, __n);
      }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      {
 if (__n == 0)
   return __s;
 return wmemset(__s, __a, __n);
      }

      static constexpr char_type
      to_char_type(const int_type& __c) noexcept
      { return char_type(__c); }

      static constexpr int_type
      to_int_type(const char_type& __c) noexcept
      { return int_type(__c); }

      static constexpr bool
      eq_int_type(const int_type& __c1, const int_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr int_type
      eof() noexcept
      { return static_cast<int_type>((wint_t)(0xFFFF)); }

      static constexpr int_type
      not_eof(const int_type& __c) noexcept
      { return eq_int_type(__c, eof()) ? 0 : __c; }
  };



}





# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cstdint" 1 3
# 33 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cstdint" 3








# 1 "C:\\Xilinx\\Vitis_HLS\\2020.2\\win64\\tools\\clang-3.9-csynth\\lib\\clang\\7.0.0\\include\\stdint.h" 1 3
# 63 "C:\\Xilinx\\Vitis_HLS\\2020.2\\win64\\tools\\clang-3.9-csynth\\lib\\clang\\7.0.0\\include\\stdint.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdint.h" 1 3
# 32 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdint.h" 3
# 1 "C:\\Xilinx\\Vitis_HLS\\2020.2\\win64\\tools\\clang-3.9-csynth\\lib\\clang\\7.0.0\\include\\stddef.h" 1 3
# 33 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdint.h" 2 3


typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned uint32_t;
__extension__ typedef long long int64_t;
__extension__ typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef unsigned char uint_least8_t;
typedef short int_least16_t;
typedef unsigned short uint_least16_t;
typedef int int_least32_t;
typedef unsigned uint_least32_t;
__extension__ typedef long long int_least64_t;
__extension__ typedef unsigned long long uint_least64_t;





typedef signed char int_fast8_t;
typedef unsigned char uint_fast8_t;
typedef short int_fast16_t;
typedef unsigned short uint_fast16_t;
typedef int int_fast32_t;
typedef unsigned int uint_fast32_t;
__extension__ typedef long long int_fast64_t;
__extension__ typedef unsigned long long uint_fast64_t;


__extension__ typedef long long intmax_t;
__extension__ typedef unsigned long long uintmax_t;
# 64 "C:\\Xilinx\\Vitis_HLS\\2020.2\\win64\\tools\\clang-3.9-csynth\\lib\\clang\\7.0.0\\include\\stdint.h" 2 3
# 42 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cstdint" 2 3




namespace std
{
  using ::int8_t;
  using ::int16_t;
  using ::int32_t;
  using ::int64_t;

  using ::int_fast8_t;
  using ::int_fast16_t;
  using ::int_fast32_t;
  using ::int_fast64_t;

  using ::int_least8_t;
  using ::int_least16_t;
  using ::int_least32_t;
  using ::int_least64_t;

  using ::intmax_t;
  using ::intptr_t;

  using ::uint8_t;
  using ::uint16_t;
  using ::uint32_t;
  using ::uint64_t;

  using ::uint_fast8_t;
  using ::uint_fast16_t;
  using ::uint_fast32_t;
  using ::uint_fast64_t;

  using ::uint_least8_t;
  using ::uint_least16_t;
  using ::uint_least32_t;
  using ::uint_least64_t;

  using ::uintmax_t;
  using ::uintptr_t;
}
# 421 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/char_traits.h" 2 3

namespace std
{


  template<>
    struct char_traits<char16_t>
    {
      typedef char16_t char_type;
      typedef uint_least16_t int_type;
      typedef streamoff off_type;
      typedef u16streampos pos_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2) noexcept
      { __c1 = __c2; }

      static constexpr bool
      eq(const char_type& __c1, const char_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr bool
      lt(const char_type& __c1, const char_type& __c2) noexcept
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   if (lt(__s1[__i], __s2[__i]))
     return -1;
   else if (lt(__s2[__i], __s1[__i]))
     return 1;
 return 0;
      }

      static size_t
      length(const char_type* __s)
      {
 size_t __i = 0;
 while (!eq(__s[__i], char_type()))
   ++__i;
 return __i;
      }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   if (eq(__s[__i], __a))
     return __s + __i;
 return 0;
      }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return (static_cast<char_type*>
  (__builtin_memmove(__s1, __s2, __n * sizeof(char_type))));
      }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return (static_cast<char_type*>
  (__builtin_memcpy(__s1, __s2, __n * sizeof(char_type))));
      }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   assign(__s[__i], __a);
 return __s;
      }

      static constexpr char_type
      to_char_type(const int_type& __c) noexcept
      { return char_type(__c); }

      static constexpr int_type
      to_int_type(const char_type& __c) noexcept
      { return int_type(__c); }

      static constexpr bool
      eq_int_type(const int_type& __c1, const int_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr int_type
      eof() noexcept
      { return static_cast<int_type>(-1); }

      static constexpr int_type
      not_eof(const int_type& __c) noexcept
      { return eq_int_type(__c, eof()) ? 0 : __c; }
    };

  template<>
    struct char_traits<char32_t>
    {
      typedef char32_t char_type;
      typedef uint_least32_t int_type;
      typedef streamoff off_type;
      typedef u32streampos pos_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2) noexcept
      { __c1 = __c2; }

      static constexpr bool
      eq(const char_type& __c1, const char_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr bool
      lt(const char_type& __c1, const char_type& __c2) noexcept
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   if (lt(__s1[__i], __s2[__i]))
     return -1;
   else if (lt(__s2[__i], __s1[__i]))
     return 1;
 return 0;
      }

      static size_t
      length(const char_type* __s)
      {
 size_t __i = 0;
 while (!eq(__s[__i], char_type()))
   ++__i;
 return __i;
      }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   if (eq(__s[__i], __a))
     return __s + __i;
 return 0;
      }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return (static_cast<char_type*>
  (__builtin_memmove(__s1, __s2, __n * sizeof(char_type))));
      }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return (static_cast<char_type*>
  (__builtin_memcpy(__s1, __s2, __n * sizeof(char_type))));
      }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   assign(__s[__i], __a);
 return __s;
      }

      static constexpr char_type
      to_char_type(const int_type& __c) noexcept
      { return char_type(__c); }

      static constexpr int_type
      to_int_type(const char_type& __c) noexcept
      { return int_type(__c); }

      static constexpr bool
      eq_int_type(const int_type& __c1, const int_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr int_type
      eof() noexcept
      { return static_cast<int_type>(-1); }

      static constexpr int_type
      not_eof(const int_type& __c) noexcept
      { return eq_int_type(__c, eof()) ? 0 : __c; }
    };


}
# 41 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\string" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/allocator.h" 1 3
# 46 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/allocator.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/c++allocator.h" 1 3
# 33 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/c++allocator.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/new_allocator.h" 1 3
# 33 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/new_allocator.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\new" 1 3
# 38 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\new" 3




#pragma GCC visibility push(default)

extern "C++" {

namespace std
{






  class bad_alloc : public exception
  {
  public:
    bad_alloc() throw() { }



    virtual ~bad_alloc() throw();


    virtual const char* what() const throw();
  };


  class bad_array_new_length : public bad_alloc
  {
  public:
    bad_array_new_length() throw() { };



    virtual ~bad_array_new_length() throw();


    virtual const char* what() const throw();
  };


  struct nothrow_t
  {

    explicit nothrow_t() = default;

  };

  extern const nothrow_t nothrow;



  typedef void (*new_handler)();



  new_handler set_new_handler(new_handler) throw();



  new_handler get_new_handler() noexcept;

}
# 116 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\new" 3
void* operator new(std::size_t)
  __attribute__((__externally_visible__));
void* operator new[](std::size_t)
  __attribute__((__externally_visible__));
void operator delete(void*) noexcept
  __attribute__((__externally_visible__));
void operator delete[](void*) noexcept
  __attribute__((__externally_visible__));






void* operator new(std::size_t, const std::nothrow_t&) noexcept
  __attribute__((__externally_visible__));
void* operator new[](std::size_t, const std::nothrow_t&) noexcept
  __attribute__((__externally_visible__));
void operator delete(void*, const std::nothrow_t&) noexcept
  __attribute__((__externally_visible__));
void operator delete[](void*, const std::nothrow_t&) noexcept
  __attribute__((__externally_visible__));
# 146 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\new" 3
inline void* operator new(std::size_t, void* __p) noexcept
{ return __p; }
inline void* operator new[](std::size_t, void* __p) noexcept
{ return __p; }


inline void operator delete (void*, void*) noexcept { }
inline void operator delete[](void*, void*) noexcept { }

}

#pragma GCC visibility pop
# 34 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/new_allocator.h" 2 3






namespace __gnu_cxx
{


  using std::size_t;
  using std::ptrdiff_t;
# 57 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/new_allocator.h" 3
  template<typename _Tp>
    class new_allocator
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef new_allocator<_Tp1> other; };




      typedef std::true_type propagate_on_container_move_assignment;


      new_allocator() noexcept { }

      new_allocator(const new_allocator&) noexcept { }

      template<typename _Tp1>
        new_allocator(const new_allocator<_Tp1>&) noexcept { }

      ~new_allocator() noexcept { }

      pointer
      address(reference __x) const noexcept
      { return std::__addressof(__x); }

      const_pointer
      address(const_reference __x) const noexcept
      { return std::__addressof(__x); }



      pointer
      allocate(size_type __n, const void* = 0)
      {
 if (__n > this->max_size())
   std::__throw_bad_alloc();

 return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));
      }


      void
      deallocate(pointer __p, size_type)
      { ::operator delete(__p); }

      size_type
      max_size() const noexcept
      { return size_t(-1) / sizeof(_Tp); }


      template<typename _Up, typename... _Args>
        void
        construct(_Up* __p, _Args&&... __args)
 { ::new((void *)__p) _Up(std::forward<_Args>(__args)...); }

      template<typename _Up>
        void
        destroy(_Up* __p) { __p->~_Up(); }
# 135 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/new_allocator.h" 3
    };

  template<typename _Tp>
    inline bool
    operator==(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator!=(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return false; }


}
# 34 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/c++allocator.h" 2 3


namespace std
{
# 47 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/c++allocator.h" 3
  template<typename _Tp>
    using __allocator_base = __gnu_cxx::new_allocator<_Tp>;
}
# 47 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/allocator.h" 2 3







namespace std
{
# 64 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/allocator.h" 3
  template<>
    class allocator<void>
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef void* pointer;
      typedef const void* const_pointer;
      typedef void value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };




      typedef true_type propagate_on_container_move_assignment;


      typedef true_type is_always_equal;

    };
# 96 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/allocator.h" 3
  template<typename _Tp>
    class allocator: public __allocator_base<_Tp>
    {
   public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };




      typedef true_type propagate_on_container_move_assignment;


      allocator() throw() { }

      allocator(const allocator& __a) throw()
      : __allocator_base<_Tp>(__a) { }

      template<typename _Tp1>
        allocator(const allocator<_Tp1>&) throw() { }

      ~allocator() throw() { }


    };

  template<typename _T1, typename _T2>
    inline bool
    operator==(const allocator<_T1>&, const allocator<_T2>&)
    noexcept
    { return true; }

  template<typename _Tp>
    inline bool
    operator==(const allocator<_Tp>&, const allocator<_Tp>&)
    noexcept
    { return true; }

  template<typename _T1, typename _T2>
    inline bool
    operator!=(const allocator<_T1>&, const allocator<_T2>&)
    noexcept
    { return false; }

  template<typename _Tp>
    inline bool
    operator!=(const allocator<_Tp>&, const allocator<_Tp>&)
    noexcept
    { return false; }






  extern template class allocator<char>;
  extern template class allocator<wchar_t>;






  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_swap
    { static void _S_do_it(_Alloc&, _Alloc&) noexcept { } };

  template<typename _Alloc>
    struct __alloc_swap<_Alloc, false>
    {
      static void
      _S_do_it(_Alloc& __one, _Alloc& __two) noexcept
      {

 if (__one != __two)
   swap(__one, __two);
      }
    };


  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_neq
    {
      static bool
      _S_do_it(const _Alloc&, const _Alloc&)
      { return false; }
    };

  template<typename _Alloc>
    struct __alloc_neq<_Alloc, false>
    {
      static bool
      _S_do_it(const _Alloc& __one, const _Alloc& __two)
      { return __one != __two; }
    };


  template<typename _Tp, bool
    = __or_<is_copy_constructible<typename _Tp::value_type>,
            is_nothrow_move_constructible<typename _Tp::value_type>>::value>
    struct __shrink_to_fit_aux
    { static bool _S_do_it(_Tp&) noexcept { return false; } };

  template<typename _Tp>
    struct __shrink_to_fit_aux<_Tp, true>
    {
      static bool
      _S_do_it(_Tp& __c) noexcept
      {
# 225 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/allocator.h" 3
 return false;

      }
    };



}
# 42 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\string" 2 3

# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/localefwd.h" 1 3
# 38 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/localefwd.h" 3


# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/c++locale.h" 1 3
# 40 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/c++locale.h" 3

# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\clocale" 1 3
# 40 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\clocale" 3


# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\locale.h" 1 3
# 12 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\locale.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 1 3
# 11 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw_print_push.h" 1 3
# 12 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 2 3

#pragma pack(push,_CRT_PACKING)


extern "C" {
# 84 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) __iob_func(void);
# 103 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  __extension__ typedef long fpos_t;
# 139 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
extern
  __attribute__((__format__ (gnu_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);
extern
  __attribute__((__format__ (gnu_scanf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_scanf(const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vscanf(const char * __restrict__ Format, va_list argp);
extern
  __attribute__((__format__ (gnu_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);

extern
  __attribute__((__format__ (gnu_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,
                               va_list _ArgList);
extern
  __attribute__((__format__ (gnu_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
extern
  __attribute__((__format__ (gnu_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_printf(const char * __restrict__ , ... ) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vprintf (const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_sprintf (char * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__((nonnull (1,2)))
  int __attribute__((__cdecl__)) __mingw_asprintf(char ** __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__((nonnull (1,2)))
  int __attribute__((__cdecl__)) __mingw_vasprintf(char ** __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
# 222 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
extern "C++" {


static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
int sscanf(const char *__source, const char *__format, ...)
{
  register int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vsscanf( __source, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_scanf, 1, 2))) __attribute__ ((__nonnull__ (1)))
int scanf(const char *__format, ...)
{
  register int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vscanf( __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
int fscanf(FILE *__stream, const char *__format, ...)
{
  register int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfscanf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}


static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
int vsscanf (const char *__source, const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vsscanf( __source, __format, __local_argv );
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_scanf, 1, 0))) __attribute__ ((__nonnull__ (1)))
int vscanf(const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vscanf( __format, __local_argv );
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
int vfscanf (FILE *__stream, const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfscanf( __stream, __format, __local_argv );
}




static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
int fprintf (FILE *__stream, const char *__format, ...)
{
  register int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfprintf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
int printf (const char *__format, ...)
{
  register int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vprintf( __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
int sprintf (char *__stream, const char *__format, ...)
{
  register int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vsprintf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
int vfprintf (FILE *__stream, const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfprintf( __stream, __format, __local_argv );
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
int vprintf (const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vprintf( __format, __local_argv );
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
int vsprintf (char *__stream, const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vsprintf( __stream, __format, __local_argv );
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
int snprintf (char *__stream, size_t __n, const char *__format, ...)
{
  register int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vsnprintf( __stream, __n, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
int vsnprintf (char *__stream, size_t __n, const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vsnprintf( __stream, __n, __format, __local_argv );
}
# 362 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
}
# 432 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _filbuf(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _flsbuf(int _Ch,FILE *_File);



  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _fsopen(const char *_Filename,const char *_Mode,int _ShFlag);

  void __attribute__((__cdecl__)) clearerr(FILE *_File);
  int __attribute__((__cdecl__)) fclose(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fcloseall(void);



  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _fdopen(int _FileHandle,const char *_Mode);

  int __attribute__((__cdecl__)) feof(FILE *_File);
  int __attribute__((__cdecl__)) ferror(FILE *_File);
  int __attribute__((__cdecl__)) fflush(FILE *_File);
  int __attribute__((__cdecl__)) fgetc(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fgetchar(void);
  int __attribute__((__cdecl__)) fgetpos(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  int __attribute__((__cdecl__)) fgetpos64(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  char *__attribute__((__cdecl__)) fgets(char * __restrict__ _Buf,int _MaxCount,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fileno(FILE *_File);



  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _tempnam(const char *_DirName,const char *_FilePrefix);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _flushall(void);
  FILE *__attribute__((__cdecl__)) fopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode) ;
  FILE *fopen64(const char * __restrict__ filename,const char * __restrict__ mode);
  int __attribute__((__cdecl__)) fputc(int _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fputchar(int _Ch);
  int __attribute__((__cdecl__)) fputs(const char * __restrict__ _Str,FILE * __restrict__ _File);
  size_t __attribute__((__cdecl__)) fread(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  FILE *__attribute__((__cdecl__)) freopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode,FILE * __restrict__ _File) ;
  int __attribute__((__cdecl__)) fsetpos(FILE *_File,const fpos_t *_Pos);
  int __attribute__((__cdecl__)) fsetpos64(FILE *_File,const fpos_t *_Pos);
  int __attribute__((__cdecl__)) fseek(FILE *_File,long _Offset,int _Origin);



  int fseeko64(FILE* stream, _off64_t offset, int whence);
  int fseeko(FILE* stream, _off_t offset, int whence);
# 484 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  long __attribute__((__cdecl__)) ftell(FILE *_File);

  _off_t ftello(FILE * stream);
  _off64_t ftello64(FILE * stream);
# 496 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  __extension__ int __attribute__((__cdecl__)) _fseeki64(FILE *_File,long _Offset,int _Origin);
  __extension__ long __attribute__((__cdecl__)) _ftelli64(FILE *_File);
  size_t __attribute__((__cdecl__)) fwrite(const void * __restrict__ _Str,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  int __attribute__((__cdecl__)) getc(FILE *_File);
  int __attribute__((__cdecl__)) getchar(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _getmaxstdio(void);
  char *__attribute__((__cdecl__)) gets(char *_Buffer) ;
  int __attribute__((__cdecl__)) _getw(FILE *_File);




  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _pclose(FILE *_File);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _popen(const char *_Command,const char *_Mode);




  int __attribute__((__cdecl__)) putc(int _Ch,FILE *_File);
  int __attribute__((__cdecl__)) putchar(int _Ch);
  int __attribute__((__cdecl__)) puts(const char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putw(int _Word,FILE *_File);


  int __attribute__((__cdecl__)) remove(const char *_Filename);
  int __attribute__((__cdecl__)) rename(const char *_OldFilename,const char *_NewFilename);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _unlink(const char *_Filename);

  int __attribute__((__cdecl__)) unlink(const char *_Filename) ;


  void __attribute__((__cdecl__)) rewind(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _rmtmp(void);
  void __attribute__((__cdecl__)) setbuf(FILE * __restrict__ _File,char * __restrict__ _Buffer) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _setmaxstdio(int _Max);
  __attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) _set_output_format(unsigned int _Format);
  __attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) _get_output_format(void);
  int __attribute__((__cdecl__)) setvbuf(FILE * __restrict__ _File,char * __restrict__ _Buf,int _Mode,size_t _Size);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scprintf(const char * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snscanf(const char * __restrict__ _Src,size_t _MaxCount,const char * __restrict__ _Format,...) ;
  FILE *__attribute__((__cdecl__)) tmpfile(void) ;
  char *__attribute__((__cdecl__)) tmpnam(char *_Buffer);
  int __attribute__((__cdecl__)) ungetc(int _Ch,FILE *_File);

  __attribute__((__format__ (ms_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,...) ;
  __attribute__((__format__ (ms_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,va_list _Args) ;
# 583 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscprintf(const char * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _set_printf_count_output(int _Value);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _get_printf_count_output(void);
# 900 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _lock_file(FILE *_File);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _unlock_file(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fclose_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fflush_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fread_nolock(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fseek_nolock(FILE *_File,long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _ftell_nolock(FILE *_File);
  __extension__ __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fseeki64_nolock(FILE *_File,long _Offset,int _Origin);
  __extension__ __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _ftelli64_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fwrite_nolock(const void * __restrict__ _DstBuf,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _ungetc_nolock(int _Ch,FILE *_File);





  char *__attribute__((__cdecl__)) tempnam(const char *_Directory,const char *_FilePrefix) ;
  int __attribute__((__cdecl__)) fcloseall(void) ;
  FILE *__attribute__((__cdecl__)) fdopen(int _FileHandle,const char *_Format) ;
  int __attribute__((__cdecl__)) fgetchar(void) ;
  int __attribute__((__cdecl__)) fileno(FILE *_File) ;
  int __attribute__((__cdecl__)) flushall(void) ;
  int __attribute__((__cdecl__)) fputchar(int _Ch) ;
  int __attribute__((__cdecl__)) getw(FILE *_File) ;
  int __attribute__((__cdecl__)) putw(int _Ch,FILE *_File) ;
  int __attribute__((__cdecl__)) rmtmp(void) ;
# 995 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnv(int _Mode,const char *_Filename,const char *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnve(int _Mode,const char *_Filename,const char *const *_ArgList,const char *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnvp(int _Mode,const char *_Filename,const char *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnvpe(int _Mode,const char *_Filename,const char *const *_ArgList,const char *const *_Env);



}


#pragma pack(pop)


# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\sec_api/stdio_s.h" 1 3








# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 1 3
# 10 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\sec_api/stdio_s.h" 2 3




extern "C" {




  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) clearerr_s(FILE *_File);
  int __attribute__((__cdecl__)) fprintf_s(FILE *_File,const char *_Format,...);
  size_t __attribute__((__cdecl__)) fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fscanf_s_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  int __attribute__((__cdecl__)) printf_s(const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scanf_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scanf_s_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_c(char *_DstBuf,size_t _MaxCount,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_c(char *_DstBuf,size_t _MaxCount,const char *_Format,va_list _ArgList);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fscanf_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sscanf_l(const char *_Src,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sscanf_s_l(const char *_Src,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) sscanf_s(const char *_Src,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snscanf_s(const char *_Src,size_t _MaxCount,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snscanf_l(const char *_Src,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snscanf_s_l(const char *_Src,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  int __attribute__((__cdecl__)) vfprintf_s(FILE *_File,const char *_Format,va_list _ArgList);
  int __attribute__((__cdecl__)) vprintf_s(const char *_Format,va_list _ArgList);

  int __attribute__((__cdecl__)) vsnprintf_s(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,va_list _ArgList);
  extern "C++" { template <size_t __size> inline int __attribute__((__cdecl__)) vsnprintf_s(char (&_DstBuf)[__size], size_t _MaxCount, const char* _Format, va_list _ArgList) { return vsnprintf_s(_DstBuf,__size,_MaxCount,_Format,_ArgList); } }

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_s(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,va_list _ArgList);
  extern "C++" { template <size_t __size> inline int __attribute__((__cdecl__)) _vsnprintf_s(char (&_DstBuf)[__size], size_t _MaxCount, const char* _Format, va_list _ArgList) { return _vsnprintf_s(_DstBuf,__size,_MaxCount,_Format,_ArgList); } }

  int __attribute__((__cdecl__)) vsprintf_s(char *_DstBuf,size_t _Size,const char *_Format,va_list _ArgList);
  extern "C++" { template <size_t __size> inline int __attribute__((__cdecl__)) vsprintf_s(char (&_DstBuf)[__size], const char* _Format, va_list _ArgList) { return vsprintf_s(_DstBuf,__size,_Format,_ArgList); } }

  int __attribute__((__cdecl__)) sprintf_s(char *_DstBuf,size_t _DstSize,const char *_Format,...);
  extern "C++" { template <size_t __size> inline int __attribute__((__cdecl__)) sprintf_s(char (&_DstBuf)[__size], const char* _Format, ...) { va_list __vaargs; __builtin_va_start(__vaargs,_Format); int __retval = vsprintf_s(_DstBuf,__size,_Format,__vaargs); __builtin_va_end(__vaargs); return __retval; } }

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_s(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,...);
  extern "C++" { template <size_t __size> inline int __attribute__((__cdecl__)) _snprintf_s(char (&_DstBuf)[__size], size_t _MaxCount, const char* _Format, ...) { va_list __vaargs; __builtin_va_start(__vaargs,_Format); int __retval = _vsnprintf_s(_DstBuf,__size,_MaxCount,_Format,__vaargs); __builtin_va_end(__vaargs); return __retval; } }

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fprintf_p(FILE *_File,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _printf_p(const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sprintf_p(char *_Dst,size_t _MaxCount,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfprintf_p(FILE *_File,const char *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vprintf_p(const char *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsprintf_p(char *_Dst,size_t _MaxCount,const char *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scprintf_p(const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscprintf_p(const char *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _printf_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _printf_p_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vprintf_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vprintf_p_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fprintf_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fprintf_p_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfprintf_l(FILE *_File,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfprintf_p_l(FILE *_File,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sprintf_l(char *_DstBuf,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sprintf_p_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsprintf_l(char *_DstBuf,const char *_Format,_locale_t,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsprintf_p_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scprintf_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scprintf_p_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscprintf_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscprintf_p_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _printf_s_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vprintf_s_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fprintf_s_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfprintf_s_l(FILE *_File,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sprintf_s_l(char *_DstBuf,size_t _DstSize,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsprintf_s_l(char *_DstBuf,size_t _DstSize,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_c_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_c_l(char *_DstBuf,size_t _MaxCount,const char *,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) fopen_s(FILE **_File,const char *_Filename,const char *_Mode);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) freopen_s(FILE** _File, const char *_Filename, const char *_Mode, FILE *_Stream);

  __attribute__ ((__dllimport__)) char* __attribute__((__cdecl__)) gets_s(char*,rsize_t);
  extern "C++" { template <size_t __size> inline char* __attribute__((__cdecl__)) get_s(char (&_DstBuf)[__size]) { return get_s(_DstBuf,__size); } }

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) tmpnam_s(char*,rsize_t);
  extern "C++" { template <size_t __size> inline errno_t __attribute__((__cdecl__)) tmpnam_s(char (&_DstBuf)[__size]) { return tmpnam_s(_DstBuf,__size); } }
# 178 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\sec_api/stdio_s.h" 3
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fread_nolock_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File);


}
# 1008 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 2 3

# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw_print_pop.h" 1 3
# 1010 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 2 3
# 13 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\locale.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {
# 45 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\locale.h" 3
  struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
  };
# 79 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\locale.h" 3
  int __attribute__((__cdecl__)) _configthreadlocale(int _Flag);
  char *__attribute__((__cdecl__)) setlocale(int _Category,const char *_Locale);
  __attribute__ ((__dllimport__)) struct lconv *__attribute__((__cdecl__)) localeconv(void);
  _locale_t __attribute__((__cdecl__)) _get_current_locale(void);
  _locale_t __attribute__((__cdecl__)) _create_locale(int _Category,const char *_Locale);
  void __attribute__((__cdecl__)) _free_locale(_locale_t _Locale);
  _locale_t __attribute__((__cdecl__)) __get_current_locale(void);
  _locale_t __attribute__((__cdecl__)) __create_locale(int _Category,const char *_Locale);
  void __attribute__((__cdecl__)) __free_locale(_locale_t _Locale);







}


#pragma pack(pop)
# 43 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\clocale" 2 3








namespace std
{
  using ::lconv;
  using ::setlocale;
  using ::localeconv;
}
# 42 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/c++locale.h" 2 3



namespace std
{


  typedef int* __c_locale;





  inline int
  __convert_from_v(const __c_locale&, char* __out,
     const int __size __attribute__((__unused__)),
     const char* __fmt, ...)
  {
    char* __old = std::setlocale(4, 0);
    char* __sav = 0;
    if (__builtin_strcmp(__old, "C"))
      {
 const size_t __len = __builtin_strlen(__old) + 1;
 __sav = new char[__len];
 __builtin_memcpy(__sav, __old, __len);
 std::setlocale(4, "C");
      }

    __builtin_va_list __args;
    __builtin_va_start(__args, __fmt);


    const int __ret = __mingw_vsnprintf(__out, __size, __fmt, __args);




    __builtin_va_end(__args);

    if (__sav)
      {
 std::setlocale(4, __sav);
 delete [] __sav;
      }
    return __ret;
  }


}
# 41 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/localefwd.h" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\iosfwd" 1 3
# 37 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\iosfwd" 3





namespace std
{
# 74 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\iosfwd" 3
  class ios_base;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ios;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_streambuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_istream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_iostream;


namespace __cxx11 {

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
     typename _Alloc = allocator<_CharT> >
    class basic_stringbuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_istringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_ostringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_stringstream;

}

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_filebuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ifstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ofstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_fstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class ostreambuf_iterator;



  typedef basic_ios<char> ios;


  typedef basic_streambuf<char> streambuf;


  typedef basic_istream<char> istream;


  typedef basic_ostream<char> ostream;


  typedef basic_iostream<char> iostream;


  typedef basic_stringbuf<char> stringbuf;


  typedef basic_istringstream<char> istringstream;


  typedef basic_ostringstream<char> ostringstream;


  typedef basic_stringstream<char> stringstream;


  typedef basic_filebuf<char> filebuf;


  typedef basic_ifstream<char> ifstream;


  typedef basic_ofstream<char> ofstream;


  typedef basic_fstream<char> fstream;



  typedef basic_ios<wchar_t> wios;


  typedef basic_streambuf<wchar_t> wstreambuf;


  typedef basic_istream<wchar_t> wistream;


  typedef basic_ostream<wchar_t> wostream;


  typedef basic_iostream<wchar_t> wiostream;


  typedef basic_stringbuf<wchar_t> wstringbuf;


  typedef basic_istringstream<wchar_t> wistringstream;


  typedef basic_ostringstream<wchar_t> wostringstream;


  typedef basic_stringstream<wchar_t> wstringstream;


  typedef basic_filebuf<wchar_t> wfilebuf;


  typedef basic_ifstream<wchar_t> wifstream;


  typedef basic_ofstream<wchar_t> wofstream;


  typedef basic_fstream<wchar_t> wfstream;




}
# 42 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/localefwd.h" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cctype" 1 3
# 40 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cctype" 3


# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\ctype.h" 1 3
# 12 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\ctype.h" 3
extern "C" {
# 72 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\ctype.h" 3
  extern const unsigned char __newclmap[];
  extern const unsigned char __newcumap[];
  extern pthreadlocinfo __ptlocinfo;
  extern pthreadmbcinfo __ptmbcinfo;
  extern int __globallocalestatus;
  extern int __locale_changed;
  extern struct threadlocaleinfostruct __initiallocinfo;
  extern _locale_tstruct __initiallocalestructinfo;
  pthreadlocinfo __attribute__((__cdecl__)) __updatetlocinfo(void);
  pthreadmbcinfo __attribute__((__cdecl__)) __updatetmbcinfo(void);
# 100 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\ctype.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isctype(int _C,int _Type);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isctype_l(int _C,int _Type,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isalpha(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isalpha_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isupper(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isupper_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) islower(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _islower_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isdigit(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isdigit_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isxdigit(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isxdigit_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isspace(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isspace_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) ispunct(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _ispunct_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isalnum(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isalnum_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isprint(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isprint_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isgraph(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isgraph_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) iscntrl(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iscntrl_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) toupper(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) tolower(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _tolower(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _tolower_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _toupper(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _toupper_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __isascii(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __toascii(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __iscsymf(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __iscsym(int _C);


int __attribute__((__cdecl__)) isblank(int _C);
# 276 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\ctype.h" 3
}
# 43 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cctype" 2 3
# 62 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cctype" 3
namespace std
{
  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;
}







namespace std
{
  using ::isblank;
}
# 43 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/localefwd.h" 2 3

namespace std
{
# 55 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/localefwd.h" 3
  class locale;

  template<typename _Facet>
    bool
    has_facet(const locale&) throw();

  template<typename _Facet>
    const _Facet&
    use_facet(const locale&);


  template<typename _CharT>
    bool
    isspace(_CharT, const locale&);

  template<typename _CharT>
    bool
    isprint(_CharT, const locale&);

  template<typename _CharT>
    bool
    iscntrl(_CharT, const locale&);

  template<typename _CharT>
    bool
    isupper(_CharT, const locale&);

  template<typename _CharT>
    bool
    islower(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalpha(_CharT, const locale&);

  template<typename _CharT>
    bool
    isdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    ispunct(_CharT, const locale&);

  template<typename _CharT>
    bool
    isxdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalnum(_CharT, const locale&);

  template<typename _CharT>
    bool
    isgraph(_CharT, const locale&);


  template<typename _CharT>
    bool
    isblank(_CharT, const locale&);


  template<typename _CharT>
    _CharT
    toupper(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    tolower(_CharT, const locale&);


  class ctype_base;
  template<typename _CharT>
    class ctype;
  template<> class ctype<char>;

  template<> class ctype<wchar_t>;

  template<typename _CharT>
    class ctype_byname;


  class codecvt_base;
  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt;
  template<> class codecvt<char, char, mbstate_t>;

  template<> class codecvt<wchar_t, char, mbstate_t>;

  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt_byname;



  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class num_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class num_put;

namespace __cxx11 {
  template<typename _CharT> class numpunct;
  template<typename _CharT> class numpunct_byname;
}

namespace __cxx11 {

  template<typename _CharT>
    class collate;
  template<typename _CharT>
    class collate_byname;
}


  class time_base;
namespace __cxx11 {
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get_byname;
}
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put_byname;


  class money_base;
namespace __cxx11 {
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class money_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class money_put;
}
namespace __cxx11 {
  template<typename _CharT, bool _Intl = false>
    class moneypunct;
  template<typename _CharT, bool _Intl = false>
    class moneypunct_byname;
}


  class messages_base;
namespace __cxx11 {
  template<typename _CharT>
    class messages;
  template<typename _CharT>
    class messages_byname;
}


}
# 44 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\string" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/ostream_insert.h" 1 3
# 34 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/ostream_insert.h" 3


# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/cxxabi_forced.h" 1 3
# 35 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/cxxabi_forced.h" 3

#pragma GCC visibility push(default)


namespace __cxxabiv1
{







  class __forced_unwind
  {
    virtual ~__forced_unwind() throw();


    virtual void __pure_dummy() = 0;
  };
}


#pragma GCC visibility pop
# 37 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/ostream_insert.h" 2 3

namespace std
{


  template<typename _CharT, typename _Traits>
    inline void
    __ostream_write(basic_ostream<_CharT, _Traits>& __out,
      const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const streamsize __put = __out.rdbuf()->sputn(__s, __n);
      if (__put != __n)
 __out.setstate(__ios_base::badbit);
    }

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_fill(basic_ostream<_CharT, _Traits>& __out, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const _CharT __c = __out.fill();
      for (; __n > 0; --__n)
 {
   const typename _Traits::int_type __put = __out.rdbuf()->sputc(__c);
   if (_Traits::eq_int_type(__put, _Traits::eof()))
     {
       __out.setstate(__ios_base::badbit);
       break;
     }
 }
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    __ostream_insert(basic_ostream<_CharT, _Traits>& __out,
       const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      typename __ostream_type::sentry __cerb(__out);
      if (__cerb)
 {
   if (true)
     {
       const streamsize __w = __out.width();
       if (__w > __n)
  {
    const bool __left = ((__out.flags()
     & __ios_base::adjustfield)
           == __ios_base::left);
    if (!__left)
      __ostream_fill(__out, __w - __n);
    if (__out.good())
      __ostream_write(__out, __s, __n);
    if (__left && __out.good())
      __ostream_fill(__out, __w - __n);
  }
       else
  __ostream_write(__out, __s, __n);
       __out.width(0);
     }
   if (false)
     {
       __out._M_setstate(__ios_base::badbit);
                              ;
     }
   if (false)
     { __out._M_setstate(__ios_base::badbit); }
 }
      return __out;
    }




  extern template ostream& __ostream_insert(ostream&, const char*, streamsize);


  extern template wostream& __ostream_insert(wostream&, const wchar_t*,
          streamsize);




}
# 45 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\string" 2 3



# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_function.h" 1 3
# 63 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_function.h" 3
namespace std
{
# 104 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    struct unary_function
    {

      typedef _Arg argument_type;


      typedef _Result result_type;
    };




  template<typename _Arg1, typename _Arg2, typename _Result>
    struct binary_function
    {

      typedef _Arg1 first_argument_type;


      typedef _Arg2 second_argument_type;


      typedef _Result result_type;
    };
# 144 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_function.h" 3
  struct __is_transparent;

  template<typename _Tp = void>
    struct plus;

  template<typename _Tp = void>
    struct minus;

  template<typename _Tp = void>
    struct multiplies;

  template<typename _Tp = void>
    struct divides;

  template<typename _Tp = void>
    struct modulus;

  template<typename _Tp = void>
    struct negate;



  template<typename _Tp>
    struct plus : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x + __y; }
    };


  template<typename _Tp>
    struct minus : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x - __y; }
    };


  template<typename _Tp>
    struct multiplies : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x * __y; }
    };


  template<typename _Tp>
    struct divides : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x / __y; }
    };


  template<typename _Tp>
    struct modulus : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x % __y; }
    };


  template<typename _Tp>
    struct negate : public unary_function<_Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x) const
      { return -__x; }
    };





  template<>
    struct plus<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) + std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) + std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) + std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct minus<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) - std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) - std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) - std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct multiplies<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) * std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) * std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) * std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct divides<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) / std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) / std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) / std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct modulus<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) % std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) % std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) % std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct negate<void>
    {
      template <typename _Tp>
 constexpr
 auto
 operator()(_Tp&& __t) const
 noexcept(noexcept(-std::forward<_Tp>(__t)))
 -> decltype(-std::forward<_Tp>(__t))
 { return -std::forward<_Tp>(__t); }

      typedef __is_transparent is_transparent;
    };
# 330 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_function.h" 3
  template<typename _Tp = void>
    struct equal_to;

  template<typename _Tp = void>
    struct not_equal_to;

  template<typename _Tp = void>
    struct greater;

  template<typename _Tp = void>
    struct less;

  template<typename _Tp = void>
    struct greater_equal;

  template<typename _Tp = void>
    struct less_equal;



  template<typename _Tp>
    struct equal_to : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x == __y; }
    };


  template<typename _Tp>
    struct not_equal_to : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x != __y; }
    };


  template<typename _Tp>
    struct greater : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x > __y; }
    };


  template<typename _Tp>
    struct less : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x < __y; }
    };


  template<typename _Tp>
    struct greater_equal : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x >= __y; }
    };


  template<typename _Tp>
    struct less_equal : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x <= __y; }
    };



  template<>
    struct equal_to<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) == std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) == std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) == std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct not_equal_to<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) != std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) != std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) != std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct greater<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) > std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) > std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) > std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct less<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) < std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) < std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) < std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct greater_equal<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) >= std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) >= std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) >= std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct less_equal<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) <= std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) <= std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) <= std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };
# 512 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_function.h" 3
  template<typename _Tp = void>
    struct logical_and;

  template<typename _Tp = void>
    struct logical_or;

  template<typename _Tp = void>
    struct logical_not;



  template<typename _Tp>
    struct logical_and : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x && __y; }
    };


  template<typename _Tp>
    struct logical_or : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x || __y; }
    };


  template<typename _Tp>
    struct logical_not : public unary_function<_Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x) const
      { return !__x; }
    };



  template<>
    struct logical_and<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) && std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) && std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) && std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct logical_or<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) || std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) || std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) || std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct logical_not<void>
    {
      template <typename _Tp>
 constexpr
 auto
 operator()(_Tp&& __t) const
 noexcept(noexcept(!std::forward<_Tp>(__t)))
 -> decltype(!std::forward<_Tp>(__t))
 { return !std::forward<_Tp>(__t); }

      typedef __is_transparent is_transparent;
    };




  template<typename _Tp = void>
    struct bit_and;

  template<typename _Tp = void>
    struct bit_or;

  template<typename _Tp = void>
    struct bit_xor;

  template<typename _Tp = void>
    struct bit_not;




  template<typename _Tp>
    struct bit_and : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x & __y; }
    };

  template<typename _Tp>
    struct bit_or : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x | __y; }
    };

  template<typename _Tp>
    struct bit_xor : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x ^ __y; }
    };

  template<typename _Tp>
    struct bit_not : public unary_function<_Tp, _Tp>
    {
    constexpr
      _Tp
      operator()(const _Tp& __x) const
      { return ~__x; }
    };


  template <>
    struct bit_and<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) & std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) & std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) & std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  template <>
    struct bit_or<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) | std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) | std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) | std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  template <>
    struct bit_xor<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) ^ std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) ^ std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) ^ std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  template <>
    struct bit_not<void>
    {
      template <typename _Tp>
 constexpr
 auto
 operator()(_Tp&& __t) const
 noexcept(noexcept(~std::forward<_Tp>(__t)))
 -> decltype(~std::forward<_Tp>(__t))
 { return ~std::forward<_Tp>(__t); }

      typedef __is_transparent is_transparent;
    };
# 740 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_function.h" 3
  template<typename _Predicate>
    class unary_negate
    : public unary_function<typename _Predicate::argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      constexpr
      explicit
      unary_negate(const _Predicate& __x) : _M_pred(__x) { }

      constexpr
      bool
      operator()(const typename _Predicate::argument_type& __x) const
      { return !_M_pred(__x); }
    };


  template<typename _Predicate>
    constexpr
    inline unary_negate<_Predicate>
    not1(const _Predicate& __pred)
    { return unary_negate<_Predicate>(__pred); }


  template<typename _Predicate>
    class binary_negate
    : public binary_function<typename _Predicate::first_argument_type,
        typename _Predicate::second_argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      constexpr
      explicit
      binary_negate(const _Predicate& __x) : _M_pred(__x) { }

      constexpr
      bool
      operator()(const typename _Predicate::first_argument_type& __x,
   const typename _Predicate::second_argument_type& __y) const
      { return !_M_pred(__x, __y); }
    };


  template<typename _Predicate>
    constexpr
    inline binary_negate<_Predicate>
    not2(const _Predicate& __pred)
    { return binary_negate<_Predicate>(__pred); }
# 817 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    class pointer_to_unary_function : public unary_function<_Arg, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg);

    public:
      pointer_to_unary_function() { }

      explicit
      pointer_to_unary_function(_Result (*__x)(_Arg))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg __x) const
      { return _M_ptr(__x); }
    };


  template<typename _Arg, typename _Result>
    inline pointer_to_unary_function<_Arg, _Result>
    ptr_fun(_Result (*__x)(_Arg))
    { return pointer_to_unary_function<_Arg, _Result>(__x); }


  template<typename _Arg1, typename _Arg2, typename _Result>
    class pointer_to_binary_function
    : public binary_function<_Arg1, _Arg2, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg1, _Arg2);

    public:
      pointer_to_binary_function() { }

      explicit
      pointer_to_binary_function(_Result (*__x)(_Arg1, _Arg2))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg1 __x, _Arg2 __y) const
      { return _M_ptr(__x, __y); }
    };


  template<typename _Arg1, typename _Arg2, typename _Result>
    inline pointer_to_binary_function<_Arg1, _Arg2, _Result>
    ptr_fun(_Result (*__x)(_Arg1, _Arg2))
    { return pointer_to_binary_function<_Arg1, _Arg2, _Result>(__x); }


  template<typename _Tp>
    struct _Identity
    : public unary_function<_Tp,_Tp>
    {
      _Tp&
      operator()(_Tp& __x) const
      { return __x; }

      const _Tp&
      operator()(const _Tp& __x) const
      { return __x; }
    };

  template<typename _Pair>
    struct _Select1st
    : public unary_function<_Pair, typename _Pair::first_type>
    {
      typename _Pair::first_type&
      operator()(_Pair& __x) const
      { return __x.first; }

      const typename _Pair::first_type&
      operator()(const _Pair& __x) const
      { return __x.first; }


      template<typename _Pair2>
        typename _Pair2::first_type&
        operator()(_Pair2& __x) const
        { return __x.first; }

      template<typename _Pair2>
        const typename _Pair2::first_type&
        operator()(const _Pair2& __x) const
        { return __x.first; }

    };

  template<typename _Pair>
    struct _Select2nd
    : public unary_function<_Pair, typename _Pair::second_type>
    {
      typename _Pair::second_type&
      operator()(_Pair& __x) const
      { return __x.second; }

      const typename _Pair::second_type&
      operator()(const _Pair& __x) const
      { return __x.second; }
    };
# 937 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_function.h" 3
  template<typename _Ret, typename _Tp>
    class mem_fun_t : public unary_function<_Tp*, _Ret>
    {
    public:
      explicit
      mem_fun_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
    };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_t : public unary_function<const _Tp*, _Ret>
    {
    public:
      explicit
      const_mem_fun_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp>
    class mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      mem_fun_ref_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
  };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      const_mem_fun_ref_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_t : public binary_function<_Tp*, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_t : public binary_function<const _Tp*, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp>
    inline mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)())
    { return mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)())
    { return mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }




}



# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\backward/binders.h" 1 3
# 60 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\backward/binders.h" 3
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

namespace std
{
# 107 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\backward/binders.h" 3
  template<typename _Operation>
    class binder1st
    : public unary_function<typename _Operation::second_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::first_argument_type value;

    public:
      binder1st(const _Operation& __x,
  const typename _Operation::first_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }



      typename _Operation::result_type
      operator()(typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }
    } __attribute__ ((__deprecated__));


  template<typename _Operation, typename _Tp>
    inline binder1st<_Operation>
    bind1st(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::first_argument_type _Arg1_type;
      return binder1st<_Operation>(__fn, _Arg1_type(__x));
    }


  template<typename _Operation>
    class binder2nd
    : public unary_function<typename _Operation::first_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::second_argument_type value;

    public:
      binder2nd(const _Operation& __x,
  const typename _Operation::second_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }



      typename _Operation::result_type
      operator()(typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }
    } __attribute__ ((__deprecated__));


  template<typename _Operation, typename _Tp>
    inline binder2nd<_Operation>
    bind2nd(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::second_argument_type _Arg2_type;
      return binder2nd<_Operation>(__fn, _Arg2_type(__x));
    }



}

#pragma GCC diagnostic pop
# 1128 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/stl_function.h" 2 3
# 49 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\string" 2 3


# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/range_access.h" 1 3
# 34 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/range_access.h" 3



namespace std
{







  template<typename _Container>
    inline auto
    begin(_Container& __cont) -> decltype(__cont.begin())
    { return __cont.begin(); }






  template<typename _Container>
    inline auto
    begin(const _Container& __cont) -> decltype(__cont.begin())
    { return __cont.begin(); }






  template<typename _Container>
    inline auto
    end(_Container& __cont) -> decltype(__cont.end())
    { return __cont.end(); }






  template<typename _Container>
    inline auto
    end(const _Container& __cont) -> decltype(__cont.end())
    { return __cont.end(); }





  template<typename _Tp, size_t _Nm>
    inline constexpr _Tp*
    begin(_Tp (&__arr)[_Nm])
    { return __arr; }






  template<typename _Tp, size_t _Nm>
    inline constexpr _Tp*
    end(_Tp (&__arr)[_Nm])
    { return __arr + _Nm; }



  template<typename _Tp> class valarray;

  template<typename _Tp> _Tp* begin(valarray<_Tp>&);
  template<typename _Tp> const _Tp* begin(const valarray<_Tp>&);
  template<typename _Tp> _Tp* end(valarray<_Tp>&);
  template<typename _Tp> const _Tp* end(const valarray<_Tp>&);






  template<typename _Container>
    inline constexpr auto
    cbegin(const _Container& __cont) noexcept(noexcept(std::begin(__cont)))
      -> decltype(std::begin(__cont))
    { return std::begin(__cont); }






  template<typename _Container>
    inline constexpr auto
    cend(const _Container& __cont) noexcept(noexcept(std::end(__cont)))
      -> decltype(std::end(__cont))
    { return std::end(__cont); }






  template<typename _Container>
    inline auto
    rbegin(_Container& __cont) -> decltype(__cont.rbegin())
    { return __cont.rbegin(); }






  template<typename _Container>
    inline auto
    rbegin(const _Container& __cont) -> decltype(__cont.rbegin())
    { return __cont.rbegin(); }






  template<typename _Container>
    inline auto
    rend(_Container& __cont) -> decltype(__cont.rend())
    { return __cont.rend(); }






  template<typename _Container>
    inline auto
    rend(const _Container& __cont) -> decltype(__cont.rend())
    { return __cont.rend(); }






  template<typename _Tp, size_t _Nm>
    inline reverse_iterator<_Tp*>
    rbegin(_Tp (&__arr)[_Nm])
    { return reverse_iterator<_Tp*>(__arr + _Nm); }






  template<typename _Tp, size_t _Nm>
    inline reverse_iterator<_Tp*>
    rend(_Tp (&__arr)[_Nm])
    { return reverse_iterator<_Tp*>(__arr); }






  template<typename _Tp>
    inline reverse_iterator<const _Tp*>
    rbegin(initializer_list<_Tp> __il)
    { return reverse_iterator<const _Tp*>(__il.end()); }






  template<typename _Tp>
    inline reverse_iterator<const _Tp*>
    rend(initializer_list<_Tp> __il)
    { return reverse_iterator<const _Tp*>(__il.begin()); }






  template<typename _Container>
    inline auto
    crbegin(const _Container& __cont) -> decltype(std::rbegin(__cont))
    { return std::rbegin(__cont); }






  template<typename _Container>
    inline auto
    crend(const _Container& __cont) -> decltype(std::rend(__cont))
    { return std::rend(__cont); }
# 320 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/range_access.h" 3
}
# 52 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\string" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 1 3
# 38 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3

# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/atomicity.h" 1 3
# 33 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/atomicity.h" 3


# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/gthr.h" 1 3
# 30 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/gthr.h" 3
#pragma GCC visibility push(default)
# 148 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/gthr.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/gthr-default.h" 1 3
# 69 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/gthr-default.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\errno.h" 1 3
# 12 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\errno.h" 3
extern "C" {
# 199 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\errno.h" 3
}
# 70 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/gthr-default.h" 2 3

# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 1 3
# 72 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/gthr-default.h" 2 3
# 339 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/gthr-default.h" 3
extern "C" {


typedef unsigned long __gthread_key_t;

typedef struct {
  int done;
  long started;
} __gthread_once_t;

typedef struct {
  long counter;
  void *sema;
} __gthread_mutex_t;

typedef struct {
  long counter;
  long depth;
  unsigned long owner;
  void *sema;
} __gthread_recursive_mutex_t;
# 373 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/gthr-default.h" 3
extern int _CRT_MT;
extern int __mingwthr_key_dtor (unsigned long, void (*) (void *));
# 400 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/gthr-default.h" 3
static inline int
__gthread_active_p (void)
{

  return _CRT_MT;



}







extern int __gthr_win32_once (__gthread_once_t *, void (*) (void));
extern int __gthr_win32_key_create (__gthread_key_t *, void (*) (void*));
extern int __gthr_win32_key_delete (__gthread_key_t);
extern void * __gthr_win32_getspecific (__gthread_key_t);
extern int __gthr_win32_setspecific (__gthread_key_t, const void *);
extern void __gthr_win32_mutex_init_function (__gthread_mutex_t *);
extern int __gthr_win32_mutex_lock (__gthread_mutex_t *);
extern int __gthr_win32_mutex_trylock (__gthread_mutex_t *);
extern int __gthr_win32_mutex_unlock (__gthread_mutex_t *);
extern void
  __gthr_win32_recursive_mutex_init_function (__gthread_recursive_mutex_t *);
extern int __gthr_win32_recursive_mutex_lock (__gthread_recursive_mutex_t *);
extern int
  __gthr_win32_recursive_mutex_trylock (__gthread_recursive_mutex_t *);
extern int __gthr_win32_recursive_mutex_unlock (__gthread_recursive_mutex_t *);
extern void __gthr_win32_mutex_destroy (__gthread_mutex_t *);
extern int
  __gthr_win32_recursive_mutex_destroy (__gthread_recursive_mutex_t *);

static inline int
__gthread_once (__gthread_once_t *__once, void (*__func) (void))
{
  if (__gthread_active_p ())
    return __gthr_win32_once (__once, __func);
  else
    return -1;
}

static inline int
__gthread_key_create (__gthread_key_t *__key, void (*__dtor) (void *))
{
  return __gthr_win32_key_create (__key, __dtor);
}

static inline int
__gthread_key_delete (__gthread_key_t __key)
{
  return __gthr_win32_key_delete (__key);
}

static inline void *
__gthread_getspecific (__gthread_key_t __key)
{
  return __gthr_win32_getspecific (__key);
}

static inline int
__gthread_setspecific (__gthread_key_t __key, const void *__ptr)
{
  return __gthr_win32_setspecific (__key, __ptr);
}

static inline void
__gthread_mutex_init_function (__gthread_mutex_t *__mutex)
{
  __gthr_win32_mutex_init_function (__mutex);
}

static inline void
__gthread_mutex_destroy (__gthread_mutex_t *__mutex)
{
  __gthr_win32_mutex_destroy (__mutex);
}

static inline int
__gthread_mutex_lock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_lock (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_trylock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_trylock (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_unlock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_unlock (__mutex);
  else
    return 0;
}

static inline void
__gthread_recursive_mutex_init_function (__gthread_recursive_mutex_t *__mutex)
{
   __gthr_win32_recursive_mutex_init_function (__mutex);
}

static inline int
__gthread_recursive_mutex_lock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_lock (__mutex);
  else
    return 0;
}

static inline int
__gthread_recursive_mutex_trylock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_trylock (__mutex);
  else
    return 0;
}

static inline int
__gthread_recursive_mutex_unlock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_unlock (__mutex);
  else
    return 0;
}

static inline int
__gthread_recursive_mutex_destroy (__gthread_recursive_mutex_t *__mutex)
{
  return __gthr_win32_recursive_mutex_destroy (__mutex);
}
# 781 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/gthr-default.h" 3
}
# 149 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/gthr.h" 2 3


#pragma GCC visibility pop
# 36 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/atomicity.h" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/atomic_word.h" 1 3
# 32 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\x86_64-w64-mingw32\\bits/atomic_word.h" 3
typedef int _Atomic_word;
# 37 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/atomicity.h" 2 3

namespace __gnu_cxx
{







  static inline _Atomic_word
  __exchange_and_add(volatile _Atomic_word* __mem, int __val)
  { return __atomic_fetch_add(__mem, __val, 4); }

  static inline void
  __atomic_add(volatile _Atomic_word* __mem, int __val)
  { __atomic_fetch_add(__mem, __val, 4); }
# 64 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/atomicity.h" 3
  static inline _Atomic_word
  __exchange_and_add_single(_Atomic_word* __mem, int __val)
  {
    _Atomic_word __result = *__mem;
    *__mem += __val;
    return __result;
  }

  static inline void
  __atomic_add_single(_Atomic_word* __mem, int __val)
  { *__mem += __val; }

  static inline _Atomic_word
  __attribute__ ((__unused__))
  __exchange_and_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      return __exchange_and_add(__mem, __val);
    else
      return __exchange_and_add_single(__mem, __val);



  }

  static inline void
  __attribute__ ((__unused__))
  __atomic_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      __atomic_add(__mem, __val);
    else
      __atomic_add_single(__mem, __val);



  }


}
# 40 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/alloc_traits.h" 1 3
# 33 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/alloc_traits.h" 3



# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/alloc_traits.h" 1 3
# 41 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/alloc_traits.h" 3
namespace std
{


  struct __allocator_traits_base
  {
    template<typename _Alloc, typename _Up>
      using __rebind = typename _Alloc::template rebind<_Up>::other;

  protected:
    template<typename _Tp>
      using __pointer = typename _Tp::pointer;
    template<typename _Tp>
      using __c_pointer = typename _Tp::const_pointer;
    template<typename _Tp>
      using __v_pointer = typename _Tp::void_pointer;
    template<typename _Tp>
      using __cv_pointer = typename _Tp::const_void_pointer;
    template<typename _Tp>
      using __diff_type = typename _Tp::difference_type;
    template<typename _Tp>
      using __size_type = typename _Tp::size_type;
    template<typename _Tp>
      using __pocca = typename _Tp::propagate_on_container_copy_assignment;
    template<typename _Tp>
      using __pocma = typename _Tp::propagate_on_container_move_assignment;
    template<typename _Tp>
      using __pocs = typename _Tp::propagate_on_container_swap;
    template<typename _Tp>
      using __equal = typename _Tp::is_always_equal;
  };

  template<typename _Alloc, typename _Up>
    using __alloc_rebind = __detected_or_t_<__replace_first_arg_t,
         __allocator_traits_base::__rebind,
         _Alloc, _Up>;





  template<typename _Alloc>
    struct allocator_traits : __allocator_traits_base
    {

      typedef _Alloc allocator_type;

      typedef typename _Alloc::value_type value_type;






      using pointer = __detected_or_t<value_type*, __pointer, _Alloc>;







      using const_pointer
 = __detected_or_t<__ptr_rebind<pointer, const value_type>,
     __c_pointer, _Alloc>;







      using void_pointer
 = __detected_or_t<__ptr_rebind<pointer, void>, __v_pointer, _Alloc>;







      using const_void_pointer
 = __detected_or_t<__ptr_rebind<pointer, const void>, __cv_pointer,
     _Alloc>;







      using difference_type
 = __detected_or_t<typename pointer_traits<pointer>::difference_type,
     __diff_type, _Alloc>;







      using size_type
 = __detected_or_t<typename make_unsigned<difference_type>::type,
     __size_type, _Alloc>;







      using propagate_on_container_copy_assignment
 = __detected_or_t<false_type, __pocca, _Alloc>;







      using propagate_on_container_move_assignment
 = __detected_or_t<false_type, __pocma, _Alloc>;







      using propagate_on_container_swap
 = __detected_or_t<false_type, __pocs, _Alloc>;







      using is_always_equal
 = __detected_or_t<typename is_empty<_Alloc>::type, __equal, _Alloc>;

      template<typename _Tp>
 using rebind_alloc = __alloc_rebind<_Alloc, _Tp>;
      template<typename _Tp>
 using rebind_traits = allocator_traits<rebind_alloc<_Tp>>;

      static_assert(!is_same<rebind_alloc<value_type>, __undefined>::value,
   "allocator defines rebind or is like Alloc<T, Args>");

    private:
      template<typename _Alloc2>
 static auto
 _S_allocate(_Alloc2& __a, size_type __n, const_void_pointer __hint, int)
 -> decltype(__a.allocate(__n, __hint))
 { return __a.allocate(__n, __hint); }

      template<typename _Alloc2>
 static pointer
 _S_allocate(_Alloc2& __a, size_type __n, const_void_pointer, ...)
 { return __a.allocate(__n); }

      template<typename _Tp, typename... _Args>
 struct __construct_helper
 {
   template<typename _Alloc2,
     typename = decltype(std::declval<_Alloc2*>()->construct(
    std::declval<_Tp*>(), std::declval<_Args>()...))>
     static true_type __test(int);

   template<typename>
     static false_type __test(...);

   using type = decltype(__test<_Alloc>(0));
 };

      template<typename _Tp, typename... _Args>
 using __has_construct
   = typename __construct_helper<_Tp, _Args...>::type;

      template<typename _Tp, typename... _Args>
 static _Require<__has_construct<_Tp, _Args...>>
 _S_construct(_Alloc& __a, _Tp* __p, _Args&&... __args)
 { __a.construct(__p, std::forward<_Args>(__args)...); }

      template<typename _Tp, typename... _Args>
 static
 _Require<__and_<__not_<__has_construct<_Tp, _Args...>>,
          is_constructible<_Tp, _Args...>>>
 _S_construct(_Alloc&, _Tp* __p, _Args&&... __args)
 { ::new((void*)__p) _Tp(std::forward<_Args>(__args)...); }

      template<typename _Alloc2, typename _Tp>
 static auto
 _S_destroy(_Alloc2& __a, _Tp* __p, int)
 -> decltype(__a.destroy(__p))
 { __a.destroy(__p); }

      template<typename _Alloc2, typename _Tp>
 static void
 _S_destroy(_Alloc2&, _Tp* __p, ...)
 { __p->~_Tp(); }

      template<typename _Alloc2>
 static auto
 _S_max_size(_Alloc2& __a, int)
 -> decltype(__a.max_size())
 { return __a.max_size(); }

      template<typename _Alloc2>
 static size_type
 _S_max_size(_Alloc2&, ...)
 {


   return __gnu_cxx::__numeric_traits<size_type>::__max
     / sizeof(value_type);
 }

      template<typename _Alloc2>
 static auto
 _S_select(_Alloc2& __a, int)
 -> decltype(__a.select_on_container_copy_construction())
 { return __a.select_on_container_copy_construction(); }

      template<typename _Alloc2>
 static _Alloc2
 _S_select(_Alloc2& __a, ...)
 { return __a; }

    public:
# 279 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/alloc_traits.h" 3
      static pointer
      allocate(_Alloc& __a, size_type __n)
      { return __a.allocate(__n); }
# 294 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/alloc_traits.h" 3
      static pointer
      allocate(_Alloc& __a, size_type __n, const_void_pointer __hint)
      { return _S_allocate(__a, __n, __hint, 0); }
# 306 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/alloc_traits.h" 3
      static void
      deallocate(_Alloc& __a, pointer __p, size_type __n)
      { __a.deallocate(__p, __n); }
# 321 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/alloc_traits.h" 3
      template<typename _Tp, typename... _Args>
 static auto construct(_Alloc& __a, _Tp* __p, _Args&&... __args)
 -> decltype(_S_construct(__a, __p, std::forward<_Args>(__args)...))
 { _S_construct(__a, __p, std::forward<_Args>(__args)...); }
# 334 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/alloc_traits.h" 3
      template<typename _Tp>
 static void destroy(_Alloc& __a, _Tp* __p)
 { _S_destroy(__a, __p, 0); }
# 346 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/alloc_traits.h" 3
      static size_type max_size(const _Alloc& __a) noexcept
      { return _S_max_size(__a, 0); }
# 357 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/alloc_traits.h" 3
      static _Alloc
      select_on_container_copy_construction(const _Alloc& __rhs)
      { return _S_select(__rhs, 0); }
    };


  template<typename _Tp>
    struct allocator_traits<allocator<_Tp>>
    {

      using allocator_type = allocator<_Tp>;

      using value_type = _Tp;


      using pointer = _Tp*;


      using const_pointer = const _Tp*;


      using void_pointer = void*;


      using const_void_pointer = const void*;


      using difference_type = std::ptrdiff_t;


      using size_type = std::size_t;


      using propagate_on_container_copy_assignment = false_type;


      using propagate_on_container_move_assignment = true_type;


      using propagate_on_container_swap = false_type;


      using is_always_equal = true_type;

      template<typename _Up>
 using rebind_alloc = allocator<_Up>;

      template<typename _Up>
 using rebind_traits = allocator_traits<allocator<_Up>>;
# 414 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/alloc_traits.h" 3
      static pointer
      allocate(allocator_type& __a, size_type __n)
      { return __a.allocate(__n); }
# 428 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/alloc_traits.h" 3
      static pointer
      allocate(allocator_type& __a, size_type __n, const_void_pointer __hint)
      { return __a.allocate(__n, __hint); }
# 440 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/alloc_traits.h" 3
      static void
      deallocate(allocator_type& __a, pointer __p, size_type __n)
      { __a.deallocate(__p, __n); }
# 452 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/alloc_traits.h" 3
      template<typename _Up, typename... _Args>
 static void
 construct(allocator_type& __a, _Up* __p, _Args&&... __args)
 { __a.construct(__p, std::forward<_Args>(__args)...); }
# 464 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/alloc_traits.h" 3
      template<typename _Up>
 static void
 destroy(allocator_type& __a, _Up* __p)
 { __a.destroy(__p); }






      static size_type
      max_size(const allocator_type& __a) noexcept
      { return __a.max_size(); }






      static allocator_type
      select_on_container_copy_construction(const allocator_type& __rhs)
      { return __rhs; }
    };


  template<typename _Alloc>
    inline void
    __do_alloc_on_copy(_Alloc& __one, const _Alloc& __two, true_type)
    { __one = __two; }

  template<typename _Alloc>
    inline void
    __do_alloc_on_copy(_Alloc&, const _Alloc&, false_type)
    { }

  template<typename _Alloc>
    inline void __alloc_on_copy(_Alloc& __one, const _Alloc& __two)
    {
      typedef allocator_traits<_Alloc> __traits;
      typedef typename __traits::propagate_on_container_copy_assignment __pocca;
      __do_alloc_on_copy(__one, __two, __pocca());
    }

  template<typename _Alloc>
    inline _Alloc __alloc_on_copy(const _Alloc& __a)
    {
      typedef allocator_traits<_Alloc> __traits;
      return __traits::select_on_container_copy_construction(__a);
    }

  template<typename _Alloc>
    inline void __do_alloc_on_move(_Alloc& __one, _Alloc& __two, true_type)
    { __one = std::move(__two); }

  template<typename _Alloc>
    inline void __do_alloc_on_move(_Alloc&, _Alloc&, false_type)
    { }

  template<typename _Alloc>
    inline void __alloc_on_move(_Alloc& __one, _Alloc& __two)
    {
      typedef allocator_traits<_Alloc> __traits;
      typedef typename __traits::propagate_on_container_move_assignment __pocma;
      __do_alloc_on_move(__one, __two, __pocma());
    }

  template<typename _Alloc>
    inline void __do_alloc_on_swap(_Alloc& __one, _Alloc& __two, true_type)
    {
      using std::swap;
      swap(__one, __two);
    }

  template<typename _Alloc>
    inline void __do_alloc_on_swap(_Alloc&, _Alloc&, false_type)
    { }

  template<typename _Alloc>
    inline void __alloc_on_swap(_Alloc& __one, _Alloc& __two)
    {
      typedef allocator_traits<_Alloc> __traits;
      typedef typename __traits::propagate_on_container_swap __pocs;
      __do_alloc_on_swap(__one, __two, __pocs());
    }

  template<typename _Alloc>
    class __is_copy_insertable_impl
    {
      typedef allocator_traits<_Alloc> _Traits;

      template<typename _Up, typename
        = decltype(_Traits::construct(std::declval<_Alloc&>(),
          std::declval<_Up*>(),
          std::declval<const _Up&>()))>
 static true_type
 _M_select(int);

      template<typename _Up>
 static false_type
 _M_select(...);

    public:
      typedef decltype(_M_select<typename _Alloc::value_type>(0)) type;
    };


  template<typename _Alloc>
    struct __is_copy_insertable
    : __is_copy_insertable_impl<_Alloc>::type
    { };


  template<typename _Tp>
    struct __is_copy_insertable<allocator<_Tp>>
    : is_copy_constructible<_Tp>
    { };


}
# 37 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/alloc_traits.h" 2 3




namespace __gnu_cxx
{






template<typename _Alloc>
  struct __alloc_traits

  : std::allocator_traits<_Alloc>

  {
    typedef _Alloc allocator_type;

    typedef std::allocator_traits<_Alloc> _Base_type;
    typedef typename _Base_type::value_type value_type;
    typedef typename _Base_type::pointer pointer;
    typedef typename _Base_type::const_pointer const_pointer;
    typedef typename _Base_type::size_type size_type;
    typedef typename _Base_type::difference_type difference_type;

    typedef value_type& reference;
    typedef const value_type& const_reference;
    using _Base_type::allocate;
    using _Base_type::deallocate;
    using _Base_type::construct;
    using _Base_type::destroy;
    using _Base_type::max_size;

  private:
    template<typename _Ptr>
      using __is_custom_pointer
 = std::__and_<std::is_same<pointer, _Ptr>,
        std::__not_<std::is_pointer<_Ptr>>>;

  public:

    template<typename _Ptr, typename... _Args>
      static typename std::enable_if<__is_custom_pointer<_Ptr>::value>::type
      construct(_Alloc& __a, _Ptr __p, _Args&&... __args)
      {
 _Base_type::construct(__a, std::addressof(*__p),
         std::forward<_Args>(__args)...);
      }


    template<typename _Ptr>
      static typename std::enable_if<__is_custom_pointer<_Ptr>::value>::type
      destroy(_Alloc& __a, _Ptr __p)
      { _Base_type::destroy(__a, std::addressof(*__p)); }

    static _Alloc _S_select_on_copy(const _Alloc& __a)
    { return _Base_type::select_on_container_copy_construction(__a); }

    static void _S_on_swap(_Alloc& __a, _Alloc& __b)
    { std::__alloc_on_swap(__a, __b); }

    static constexpr bool _S_propagate_on_copy_assign()
    { return _Base_type::propagate_on_container_copy_assignment::value; }

    static constexpr bool _S_propagate_on_move_assign()
    { return _Base_type::propagate_on_container_move_assignment::value; }

    static constexpr bool _S_propagate_on_swap()
    { return _Base_type::propagate_on_container_swap::value; }

    static constexpr bool _S_always_equal()
    { return _Base_type::is_always_equal::value; }

    static constexpr bool _S_nothrow_move()
    { return _S_propagate_on_move_assign() || _S_always_equal(); }

    template<typename _Tp>
      struct rebind
      { typedef typename _Base_type::template rebind_alloc<_Tp> other; };
# 158 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/alloc_traits.h" 3
  };


}
# 41 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 2 3






namespace std
{



namespace __cxx11 {
# 71 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    class basic_string
    {
      typedef typename __gnu_cxx::__alloc_traits<_Alloc>::template
 rebind<_CharT>::other _Char_alloc_type;
      typedef __gnu_cxx::__alloc_traits<_Char_alloc_type> _Alloc_traits;


    public:
      typedef _Traits traits_type;
      typedef typename _Traits::char_type value_type;
      typedef _Char_alloc_type allocator_type;
      typedef typename _Alloc_traits::size_type size_type;
      typedef typename _Alloc_traits::difference_type difference_type;
      typedef typename _Alloc_traits::reference reference;
      typedef typename _Alloc_traits::const_reference const_reference;
      typedef typename _Alloc_traits::pointer pointer;
      typedef typename _Alloc_traits::const_pointer const_pointer;
      typedef __gnu_cxx::__normal_iterator<pointer, basic_string> iterator;
      typedef __gnu_cxx::__normal_iterator<const_pointer, basic_string>
       const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;


      static const size_type npos = static_cast<size_type>(-1);

    private:




      typedef const_iterator __const_iterator;



      struct _Alloc_hider : allocator_type
      {
 _Alloc_hider(pointer __dat, const _Alloc& __a = _Alloc())
 : allocator_type(__a), _M_p(__dat) { }

 pointer _M_p;
      };

      _Alloc_hider _M_dataplus;
      size_type _M_string_length;

      enum { _S_local_capacity = 15 / sizeof(_CharT) };

      union
      {
 _CharT _M_local_buf[_S_local_capacity + 1];
 size_type _M_allocated_capacity;
      };

      void
      _M_data(pointer __p)
      { _M_dataplus._M_p = __p; }

      void
      _M_length(size_type __length)
      { _M_string_length = __length; }

      pointer
      _M_data() const
      { return _M_dataplus._M_p; }

      pointer
      _M_local_data()
      {

 return std::pointer_traits<pointer>::pointer_to(*_M_local_buf);



      }

      const_pointer
      _M_local_data() const
      {

 return std::pointer_traits<const_pointer>::pointer_to(*_M_local_buf);



      }

      void
      _M_capacity(size_type __capacity)
      { _M_allocated_capacity = __capacity; }

      void
      _M_set_length(size_type __n)
      {
 _M_length(__n);
 traits_type::assign(_M_data()[__n], _CharT());
      }

      bool
      _M_is_local() const
      { return _M_data() == _M_local_data(); }


      pointer
      _M_create(size_type&, size_type);

      void
      _M_dispose()
      {
 if (!_M_is_local())
   _M_destroy(_M_allocated_capacity);
      }

      void
      _M_destroy(size_type __size) throw()
      { _Alloc_traits::deallocate(_M_get_allocator(), _M_data(), __size + 1); }



      template<typename _InIterator>
        void
        _M_construct_aux(_InIterator __beg, _InIterator __end,
    std::__false_type)
 {
          typedef typename iterator_traits<_InIterator>::iterator_category _Tag;
          _M_construct(__beg, __end, _Tag());
 }



      template<typename _Integer>
        void
        _M_construct_aux(_Integer __beg, _Integer __end, std::__true_type)
 { _M_construct_aux_2(static_cast<size_type>(__beg), __end); }

      void
      _M_construct_aux_2(size_type __req, _CharT __c)
      { _M_construct(__req, __c); }

      template<typename _InIterator>
        void
        _M_construct(_InIterator __beg, _InIterator __end)
 {
   typedef typename std::__is_integer<_InIterator>::__type _Integral;
   _M_construct_aux(__beg, __end, _Integral());
        }


      template<typename _InIterator>
        void
        _M_construct(_InIterator __beg, _InIterator __end,
       std::input_iterator_tag);



      template<typename _FwdIterator>
        void
        _M_construct(_FwdIterator __beg, _FwdIterator __end,
       std::forward_iterator_tag);

      void
      _M_construct(size_type __req, _CharT __c);

      allocator_type&
      _M_get_allocator()
      { return _M_dataplus; }

      const allocator_type&
      _M_get_allocator() const
      { return _M_dataplus; }

    private:
# 258 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      _M_check(size_type __pos, const char* __s) const
      {
 if (__pos > this->size())
   __throw_out_of_range_fmt(("%s: __pos (which is %zu) > " "this->size() (which is %zu)"),

       __s, __pos, this->size());
 return __pos;
      }

      void
      _M_check_length(size_type __n1, size_type __n2, const char* __s) const
      {
 if (this->max_size() - (this->size() - __n1) < __n2)
   __throw_length_error((__s));
      }



      size_type
      _M_limit(size_type __pos, size_type __off) const noexcept
      {
 const bool __testoff = __off < this->size() - __pos;
 return __testoff ? __off : this->size() - __pos;
      }


      bool
      _M_disjunct(const _CharT* __s) const noexcept
      {
 return (less<const _CharT*>()(__s, _M_data())
  || less<const _CharT*>()(_M_data() + this->size(), __s));
      }



      static void
      _S_copy(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::copy(__d, __s, __n);
      }

      static void
      _S_move(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::move(__d, __s, __n);
      }

      static void
      _S_assign(_CharT* __d, size_type __n, _CharT __c)
      {
 if (__n == 1)
   traits_type::assign(*__d, __c);
 else
   traits_type::assign(__d, __n, __c);
      }



      template<class _Iterator>
        static void
        _S_copy_chars(_CharT* __p, _Iterator __k1, _Iterator __k2)
        {
   for (; __k1 != __k2; ++__k1, (void)++__p)
     traits_type::assign(*__p, *__k1);
 }

      static void
      _S_copy_chars(_CharT* __p, iterator __k1, iterator __k2) noexcept
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, const_iterator __k1, const_iterator __k2)
      noexcept
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, _CharT* __k1, _CharT* __k2) noexcept
      { _S_copy(__p, __k1, __k2 - __k1); }

      static void
      _S_copy_chars(_CharT* __p, const _CharT* __k1, const _CharT* __k2)
      noexcept
      { _S_copy(__p, __k1, __k2 - __k1); }

      static int
      _S_compare(size_type __n1, size_type __n2) noexcept
      {
 const difference_type __d = difference_type(__n1 - __n2);

 if (__d > __gnu_cxx::__numeric_traits<int>::__max)
   return __gnu_cxx::__numeric_traits<int>::__max;
 else if (__d < __gnu_cxx::__numeric_traits<int>::__min)
   return __gnu_cxx::__numeric_traits<int>::__min;
 else
   return int(__d);
      }

      void
      _M_assign(const basic_string& __rcs);

      void
      _M_mutate(size_type __pos, size_type __len1, const _CharT* __s,
  size_type __len2);

      void
      _M_erase(size_type __pos, size_type __n);

    public:







      basic_string()
      noexcept(is_nothrow_default_constructible<_Alloc>::value)
      : _M_dataplus(_M_local_data())
      { _M_set_length(0); }




      explicit
      basic_string(const _Alloc& __a) noexcept
      : _M_dataplus(_M_local_data(), __a)
      { _M_set_length(0); }





      basic_string(const basic_string& __str)
      : _M_dataplus(_M_local_data(),
      _Alloc_traits::_S_select_on_copy(__str._M_get_allocator()))
      { _M_construct(__str._M_data(), __str._M_data() + __str.length()); }
# 410 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string(const basic_string& __str, size_type __pos,
     size_type __n = npos)
      : _M_dataplus(_M_local_data())
      {
 const _CharT* __start = __str._M_data()
   + __str._M_check(__pos, "basic_string::basic_string");
 _M_construct(__start, __start + __str._M_limit(__pos, __n));
      }
# 426 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string(const basic_string& __str, size_type __pos,
     size_type __n, const _Alloc& __a)
      : _M_dataplus(_M_local_data(), __a)
      {
 const _CharT* __start
   = __str._M_data() + __str._M_check(__pos, "string::string");
 _M_construct(__start, __start + __str._M_limit(__pos, __n));
      }
# 444 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string(const _CharT* __s, size_type __n,
     const _Alloc& __a = _Alloc())
      : _M_dataplus(_M_local_data(), __a)
      { _M_construct(__s, __s + __n); }






      basic_string(const _CharT* __s, const _Alloc& __a = _Alloc())
      : _M_dataplus(_M_local_data(), __a)
      { _M_construct(__s, __s ? __s + traits_type::length(__s) : __s+npos); }







      basic_string(size_type __n, _CharT __c, const _Alloc& __a = _Alloc())
      : _M_dataplus(_M_local_data(), __a)
      { _M_construct(__n, __c); }
# 476 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string(basic_string&& __str) noexcept
      : _M_dataplus(_M_local_data(), std::move(__str._M_get_allocator()))
      {
 if (__str._M_is_local())
   {
     traits_type::copy(_M_local_buf, __str._M_local_buf,
         _S_local_capacity + 1);
   }
 else
   {
     _M_data(__str._M_data());
     _M_capacity(__str._M_allocated_capacity);
   }




 _M_length(__str.length());
 __str._M_data(__str._M_local_data());
 __str._M_set_length(0);
      }






      basic_string(initializer_list<_CharT> __l, const _Alloc& __a = _Alloc())
      : _M_dataplus(_M_local_data(), __a)
      { _M_construct(__l.begin(), __l.end()); }

      basic_string(const basic_string& __str, const _Alloc& __a)
      : _M_dataplus(_M_local_data(), __a)
      { _M_construct(__str.begin(), __str.end()); }

      basic_string(basic_string&& __str, const _Alloc& __a)
      noexcept(_Alloc_traits::_S_always_equal())
      : _M_dataplus(_M_local_data(), __a)
      {
 if (__str._M_is_local())
   {
     traits_type::copy(_M_local_buf, __str._M_local_buf,
         _S_local_capacity + 1);
     _M_length(__str.length());
     __str._M_set_length(0);
   }
 else if (_Alloc_traits::_S_always_equal()
     || __str.get_allocator() == __a)
   {
     _M_data(__str._M_data());
     _M_length(__str.length());
     _M_capacity(__str._M_allocated_capacity);
     __str._M_data(__str._M_local_buf);
     __str._M_set_length(0);
   }
 else
   _M_construct(__str.begin(), __str.end());
      }
# 544 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      template<typename _InputIterator,
        typename = std::_RequireInputIter<_InputIterator>>



        basic_string(_InputIterator __beg, _InputIterator __end,
       const _Alloc& __a = _Alloc())
 : _M_dataplus(_M_local_data(), __a)
 { _M_construct(__beg, __end); }




      ~basic_string()
      { _M_dispose(); }





      basic_string&
      operator=(const basic_string& __str)
      {

 if (_Alloc_traits::_S_propagate_on_copy_assign())
   {
     if (!_Alloc_traits::_S_always_equal() && !_M_is_local()
  && _M_get_allocator() != __str._M_get_allocator())
       {

  _M_destroy(_M_allocated_capacity);
  _M_data(_M_local_data());
  _M_set_length(0);
       }
     std::__alloc_on_copy(_M_get_allocator(), __str._M_get_allocator());
   }

 return this->assign(__str);
      }





      basic_string&
      operator=(const _CharT* __s)
      { return this->assign(__s); }
# 599 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      operator=(_CharT __c)
      {
 this->assign(1, __c);
 return *this;
      }
# 617 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      operator=(basic_string&& __str)
      noexcept(_Alloc_traits::_S_nothrow_move())
      {
 if (!_M_is_local() && _Alloc_traits::_S_propagate_on_move_assign()
     && !_Alloc_traits::_S_always_equal()
     && _M_get_allocator() != __str._M_get_allocator())
   {

     _M_destroy(_M_allocated_capacity);
     _M_data(_M_local_data());
     _M_set_length(0);
   }

 std::__alloc_on_move(_M_get_allocator(), __str._M_get_allocator());

 if (!__str._M_is_local()
     && (_Alloc_traits::_S_propagate_on_move_assign()
       || _Alloc_traits::_S_always_equal()))
   {
     pointer __data = nullptr;
     size_type __capacity;
     if (!_M_is_local())
       {
  if (_Alloc_traits::_S_always_equal())
    {
      __data = _M_data();
      __capacity = _M_allocated_capacity;
    }
  else
    _M_destroy(_M_allocated_capacity);
       }

     _M_data(__str._M_data());
     _M_length(__str.length());
     _M_capacity(__str._M_allocated_capacity);
     if (__data)
       {
  __str._M_data(__data);
  __str._M_capacity(__capacity);
       }
     else
       __str._M_data(__str._M_local_buf);
   }
 else
     assign(__str);
 __str.clear();
 return *this;
      }





      basic_string&
      operator=(initializer_list<_CharT> __l)
      {
 this->assign(__l.begin(), __l.size());
 return *this;
      }







      iterator
      begin() noexcept
      { return iterator(_M_data()); }





      const_iterator
      begin() const noexcept
      { return const_iterator(_M_data()); }





      iterator
      end() noexcept
      { return iterator(_M_data() + this->size()); }





      const_iterator
      end() const noexcept
      { return const_iterator(_M_data() + this->size()); }






      reverse_iterator
      rbegin() noexcept
      { return reverse_iterator(this->end()); }






      const_reverse_iterator
      rbegin() const noexcept
      { return const_reverse_iterator(this->end()); }






      reverse_iterator
      rend() noexcept
      { return reverse_iterator(this->begin()); }






      const_reverse_iterator
      rend() const noexcept
      { return const_reverse_iterator(this->begin()); }






      const_iterator
      cbegin() const noexcept
      { return const_iterator(this->_M_data()); }





      const_iterator
      cend() const noexcept
      { return const_iterator(this->_M_data() + this->size()); }






      const_reverse_iterator
      crbegin() const noexcept
      { return const_reverse_iterator(this->end()); }






      const_reverse_iterator
      crend() const noexcept
      { return const_reverse_iterator(this->begin()); }


    public:



      size_type
      size() const noexcept
      { return _M_string_length; }



      size_type
      length() const noexcept
      { return _M_string_length; }


      size_type
      max_size() const noexcept
      { return (_Alloc_traits::max_size(_M_get_allocator()) - 1) / 2; }
# 813 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      void
      resize(size_type __n, _CharT __c);
# 826 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      void
      resize(size_type __n)
      { this->resize(__n, _CharT()); }



      void
      shrink_to_fit() noexcept
      {
# 844 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      }






      size_type
      capacity() const noexcept
      {
 return _M_is_local() ? size_type(_S_local_capacity)
                      : _M_allocated_capacity;
      }
# 875 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      void
      reserve(size_type __res_arg = 0);




      void
      clear() noexcept
      { _M_set_length(0); }





      bool
      empty() const noexcept
      { return this->size() == 0; }
# 904 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      const_reference
      operator[] (size_type __pos) const noexcept
      {
                                  ;
 return _M_data()[__pos];
      }
# 921 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      reference
      operator[](size_type __pos)
      {


                                  ;

                                                                   ;
 return _M_data()[__pos];
      }
# 942 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      const_reference
      at(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range_fmt(("basic_string::at: __n " "(which is %zu) >= this->size() " "(which is %zu)"),


       __n, this->size());
 return _M_data()[__n];
      }
# 963 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      reference
      at(size_type __n)
      {
 if (__n >= size())
   __throw_out_of_range_fmt(("basic_string::at: __n " "(which is %zu) >= this->size() " "(which is %zu)"),


       __n, this->size());
 return _M_data()[__n];
      }






      reference
      front() noexcept
      {
                           ;
 return operator[](0);
      }





      const_reference
      front() const noexcept
      {
                           ;
 return operator[](0);
      }





      reference
      back() noexcept
      {
                           ;
 return operator[](this->size() - 1);
      }





      const_reference
      back() const noexcept
      {
                           ;
 return operator[](this->size() - 1);
      }
# 1026 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      operator+=(const basic_string& __str)
      { return this->append(__str); }






      basic_string&
      operator+=(const _CharT* __s)
      { return this->append(__s); }






      basic_string&
      operator+=(_CharT __c)
      {
 this->push_back(__c);
 return *this;
      }







      basic_string&
      operator+=(initializer_list<_CharT> __l)
      { return this->append(__l.begin(), __l.size()); }







      basic_string&
      append(const basic_string& __str)
      { return _M_append(__str._M_data(), __str.size()); }
# 1084 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      append(const basic_string& __str, size_type __pos, size_type __n)
      { return _M_append(__str._M_data()
    + __str._M_check(__pos, "basic_string::append"),
    __str._M_limit(__pos, __n)); }







      basic_string&
      append(const _CharT* __s, size_type __n)
      {
                                        ;
 _M_check_length(size_type(0), __n, "basic_string::append");
 return _M_append(__s, __n);
      }






      basic_string&
      append(const _CharT* __s)
      {
                               ;
 const size_type __n = traits_type::length(__s);
 _M_check_length(size_type(0), __n, "basic_string::append");
 return _M_append(__s, __n);
      }
# 1126 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      append(size_type __n, _CharT __c)
      { return _M_replace_aux(this->size(), size_type(0), __n, __c); }







      basic_string&
      append(initializer_list<_CharT> __l)
      { return this->append(__l.begin(), __l.size()); }
# 1150 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      template<class _InputIterator,
        typename = std::_RequireInputIter<_InputIterator>>



        basic_string&
        append(_InputIterator __first, _InputIterator __last)
        { return this->replace(end(), end(), __first, __last); }





      void
      push_back(_CharT __c)
      {
 const size_type __size = this->size();
 if (__size + 1 > this->capacity())
   this->_M_mutate(__size, size_type(0), 0, size_type(1));
 traits_type::assign(this->_M_data()[__size], __c);
 this->_M_set_length(__size + 1);
      }






      basic_string&
      assign(const basic_string& __str)
      {
 this->_M_assign(__str);
 return *this;
      }
# 1194 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      assign(basic_string&& __str)
      noexcept(_Alloc_traits::_S_nothrow_move())
      {


 return *this = std::move(__str);
      }
# 1217 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      assign(const basic_string& __str, size_type __pos, size_type __n)
      { return _M_replace(size_type(0), this->size(), __str._M_data()
     + __str._M_check(__pos, "basic_string::assign"),
     __str._M_limit(__pos, __n)); }
# 1233 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s, size_type __n)
      {
                                        ;
 return _M_replace(size_type(0), this->size(), __s, __n);
      }
# 1249 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s)
      {
                               ;
 return _M_replace(size_type(0), this->size(), __s,
     traits_type::length(__s));
      }
# 1266 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      assign(size_type __n, _CharT __c)
      { return _M_replace_aux(size_type(0), this->size(), __n, __c); }
# 1279 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      template<class _InputIterator,
        typename = std::_RequireInputIter<_InputIterator>>



        basic_string&
        assign(_InputIterator __first, _InputIterator __last)
        { return this->replace(begin(), end(), __first, __last); }







      basic_string&
      assign(initializer_list<_CharT> __l)
      { return this->assign(__l.begin(), __l.size()); }
# 1315 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      iterator
      insert(const_iterator __p, size_type __n, _CharT __c)
      {
                                                         ;
 const size_type __pos = __p - begin();
 this->replace(__p, __p, __n, __c);
 return iterator(this->_M_data() + __pos);
      }
# 1357 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      template<class _InputIterator,
        typename = std::_RequireInputIter<_InputIterator>>
 iterator
        insert(const_iterator __p, _InputIterator __beg, _InputIterator __end)
        {
                                                           ;
   const size_type __pos = __p - begin();
   this->replace(__p, __p, __beg, __end);
   return iterator(this->_M_data() + __pos);
 }
# 1393 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      void
      insert(iterator __p, initializer_list<_CharT> __l)
      {
                                                         ;
 this->insert(__p - begin(), __l.begin(), __l.size());
      }
# 1413 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str)
      { return this->replace(__pos1, size_type(0),
        __str._M_data(), __str.size()); }
# 1436 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str,
      size_type __pos2, size_type __n)
      { return this->replace(__pos1, size_type(0), __str._M_data()
        + __str._M_check(__pos2, "basic_string::insert"),
        __str._M_limit(__pos2, __n)); }
# 1459 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s, size_type __n)
      { return this->replace(__pos, size_type(0), __s, __n); }
# 1478 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s)
      {
                               ;
 return this->replace(__pos, size_type(0), __s,
        traits_type::length(__s));
      }
# 1502 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, size_type __n, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::insert"),
         size_type(0), __n, __c); }
# 1520 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      iterator
      insert(__const_iterator __p, _CharT __c)
      {
                                                         ;
 const size_type __pos = __p - begin();
 _M_replace_aux(__pos, size_type(0), size_type(1), __c);
 return iterator(_M_data() + __pos);
      }
# 1544 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      erase(size_type __pos = 0, size_type __n = npos)
      {
 this->_M_erase(_M_check(__pos, "basic_string::erase"),
         _M_limit(__pos, __n));
 return *this;
      }
# 1560 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      iterator
      erase(__const_iterator __position)
      {

                           ;
 const size_type __pos = __position - begin();
 this->_M_erase(__pos, size_type(1));
 return iterator(_M_data() + __pos);
      }
# 1579 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      iterator
      erase(__const_iterator __first, __const_iterator __last)
      {

                        ;
        const size_type __pos = __first - begin();
 this->_M_erase(__pos, __last - __first);
 return iterator(this->_M_data() + __pos);
      }







      void
      pop_back() noexcept
      {
                           ;
 _M_erase(size() - 1, 1);
      }
# 1620 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n, const basic_string& __str)
      { return this->replace(__pos, __n, __str._M_data(), __str.size()); }
# 1642 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2)
      { return this->replace(__pos1, __n1, __str._M_data()
        + __str._M_check(__pos2, "basic_string::replace"),
        __str._M_limit(__pos2, __n2)); }
# 1667 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2)
      {
                                         ;
 return _M_replace(_M_check(__pos, "basic_string::replace"),
     _M_limit(__pos, __n1), __s, __n2);
      }
# 1692 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s)
      {
                               ;
 return this->replace(__pos, __n1, __s, traits_type::length(__s));
      }
# 1716 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, size_type __n2, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::replace"),
         _M_limit(__pos, __n1), __n2, __c); }
# 1734 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       const basic_string& __str)
      { return this->replace(__i1, __i2, __str._M_data(), __str.size()); }
# 1754 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       const _CharT* __s, size_type __n)
      {

                      ;
 return this->replace(__i1 - begin(), __i2 - __i1, __s, __n);
      }
# 1776 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2, const _CharT* __s)
      {
                               ;
 return this->replace(__i1, __i2, __s, traits_type::length(__s));
      }
# 1797 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2, size_type __n,
       _CharT __c)
      {

                      ;
 return _M_replace_aux(__i1 - begin(), __i2 - __i1, __n, __c);
      }
# 1822 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      template<class _InputIterator,
        typename = std::_RequireInputIter<_InputIterator>>
        basic_string&
        replace(const_iterator __i1, const_iterator __i2,
  _InputIterator __k1, _InputIterator __k2)
        {

                        ;
                                             ;
   return this->_M_replace_dispatch(__i1, __i2, __k1, __k2,
        std::__false_type());
 }
# 1854 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       _CharT* __k1, _CharT* __k2)
      {

                      ;
                                           ;
 return this->replace(__i1 - begin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       const _CharT* __k1, const _CharT* __k2)
      {

                      ;
                                           ;
 return this->replace(__i1 - begin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       iterator __k1, iterator __k2)
      {

                      ;
                                           ;
 return this->replace(__i1 - begin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }

      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       const_iterator __k1, const_iterator __k2)
      {

                      ;
                                           ;
 return this->replace(__i1 - begin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }
# 1913 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string& replace(const_iterator __i1, const_iterator __i2,
       initializer_list<_CharT> __l)
      { return this->replace(__i1, __i2, __l.begin(), __l.end()); }


    private:
      template<class _Integer>
 basic_string&
 _M_replace_dispatch(const_iterator __i1, const_iterator __i2,
       _Integer __n, _Integer __val, __true_type)
        { return _M_replace_aux(__i1 - begin(), __i2 - __i1, __n, __val); }

      template<class _InputIterator>
 basic_string&
 _M_replace_dispatch(const_iterator __i1, const_iterator __i2,
       _InputIterator __k1, _InputIterator __k2,
       __false_type);

      basic_string&
      _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
       _CharT __c);

      basic_string&
      _M_replace(size_type __pos, size_type __len1, const _CharT* __s,
   const size_type __len2);

      basic_string&
      _M_append(const _CharT* __s, size_type __n);

    public:
# 1956 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      copy(_CharT* __s, size_type __n, size_type __pos = 0) const;
# 1966 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      void
      swap(basic_string& __s) noexcept;
# 1976 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      const _CharT*
      c_str() const noexcept
      { return _M_data(); }







      const _CharT*
      data() const noexcept
      { return _M_data(); }




      allocator_type
      get_allocator() const noexcept
      { return _M_get_allocator(); }
# 2009 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos, size_type __n) const;
# 2022 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      find(const basic_string& __str, size_type __pos = 0) const
 noexcept
      { return this->find(__str.data(), __pos, __str.size()); }
# 2037 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find(__s, __pos, traits_type::length(__s));
      }
# 2054 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      find(_CharT __c, size_type __pos = 0) const noexcept;
# 2067 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      rfind(const basic_string& __str, size_type __pos = npos) const
 noexcept
      { return this->rfind(__str.data(), __pos, __str.size()); }
# 2084 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos, size_type __n) const;
# 2097 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->rfind(__s, __pos, traits_type::length(__s));
      }
# 2114 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      rfind(_CharT __c, size_type __pos = npos) const noexcept;
# 2128 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      find_first_of(const basic_string& __str, size_type __pos = 0) const
 noexcept
      { return this->find_first_of(__str.data(), __pos, __str.size()); }
# 2145 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 2158 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find_first_of(__s, __pos, traits_type::length(__s));
      }
# 2177 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      find_first_of(_CharT __c, size_type __pos = 0) const noexcept
      { return this->find(__c, __pos); }
# 2192 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      find_last_of(const basic_string& __str, size_type __pos = npos) const
 noexcept
      { return this->find_last_of(__str.data(), __pos, __str.size()); }
# 2209 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 2222 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->find_last_of(__s, __pos, traits_type::length(__s));
      }
# 2241 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      find_last_of(_CharT __c, size_type __pos = npos) const noexcept
      { return this->rfind(__c, __pos); }
# 2255 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      find_first_not_of(const basic_string& __str, size_type __pos = 0) const
 noexcept
      { return this->find_first_not_of(__str.data(), __pos, __str.size()); }
# 2272 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos,
   size_type __n) const;
# 2286 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find_first_not_of(__s, __pos, traits_type::length(__s));
      }
# 2303 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      find_first_not_of(_CharT __c, size_type __pos = 0) const
 noexcept;
# 2318 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      find_last_not_of(const basic_string& __str, size_type __pos = npos) const
 noexcept
      { return this->find_last_not_of(__str.data(), __pos, __str.size()); }
# 2335 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos,
         size_type __n) const;
# 2349 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->find_last_not_of(__s, __pos, traits_type::length(__s));
      }
# 2366 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      size_type
      find_last_not_of(_CharT __c, size_type __pos = npos) const
 noexcept;
# 2382 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      basic_string
      substr(size_type __pos = 0, size_type __n = npos) const
      { return basic_string(*this,
       _M_check(__pos, "basic_string::substr"), __n); }
# 2401 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      int
      compare(const basic_string& __str) const
      {
 const size_type __size = this->size();
 const size_type __osize = __str.size();
 const size_type __len = std::min(__size, __osize);

 int __r = traits_type::compare(_M_data(), __str.data(), __len);
 if (!__r)
   __r = _S_compare(__size, __osize);
 return __r;
      }
# 2433 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n, const basic_string& __str) const;
# 2459 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      int
      compare(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2) const;
# 2477 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      int
      compare(const _CharT* __s) const;
# 2501 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s) const;
# 2528 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2) const;
  };
}
# 4927 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs, _CharT __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str(__lhs);
      __str.append(__size_type(1), __rhs);
      return __str;
    }


  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return std::move(__lhs.append(__rhs)); }

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       basic_string<_CharT, _Traits, _Alloc>&& __rhs)
    { return std::move(__rhs.insert(0, __lhs)); }

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
       basic_string<_CharT, _Traits, _Alloc>&& __rhs)
    {
      const auto __size = __lhs.size() + __rhs.size();
      const bool __cond = (__size > __lhs.capacity()
      && __size <= __rhs.capacity());
      return __cond ? std::move(__rhs.insert(0, __lhs))
             : std::move(__lhs.append(__rhs));
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const _CharT* __lhs,
       basic_string<_CharT, _Traits, _Alloc>&& __rhs)
    { return std::move(__rhs.insert(0, __lhs)); }

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(_CharT __lhs,
       basic_string<_CharT, _Traits, _Alloc>&& __rhs)
    { return std::move(__rhs.insert(0, 1, __lhs)); }

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
       const _CharT* __rhs)
    { return std::move(__lhs.append(__rhs)); }

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
       _CharT __rhs)
    { return std::move(__lhs.append(1, __rhs)); }
# 5048 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    noexcept
    { return __lhs.compare(__rhs) == 0; }

  template<typename _CharT>
    inline
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, bool>::__type
    operator==(const basic_string<_CharT>& __lhs,
        const basic_string<_CharT>& __rhs) noexcept
    { return (__lhs.size() == __rhs.size()
       && !std::char_traits<_CharT>::compare(__lhs.data(), __rhs.data(),
          __lhs.size())); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) == 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) == 0; }
# 5095 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    noexcept
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return !(__lhs == __rhs); }
# 5133 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    noexcept
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) > 0; }
# 5171 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    noexcept
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) < 0; }
# 5209 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    noexcept
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) >= 0; }
# 5247 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    noexcept
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const _CharT* __lhs,
      const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) <= 0; }
# 5285 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline void
    swap(basic_string<_CharT, _Traits, _Alloc>& __lhs,
  basic_string<_CharT, _Traits, _Alloc>& __rhs)
    noexcept(noexcept(__lhs.swap(__rhs)))
    { __lhs.swap(__rhs); }
# 5305 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __is,
        basic_string<_CharT, _Traits, _Alloc>& __str);

  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __is, basic_string<char>& __str);
# 5323 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __os,
        const basic_string<_CharT, _Traits, _Alloc>& __str)
    {


      return __ostream_insert(__os, __str.data(), __str.size());
    }
# 5346 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim);
# 5363 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str)
    { return std::getline(__is, __str, __is.widen('\n')); }



  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>&& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim)
    { return std::getline(__is, __str, __delim); }


  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>&& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str)
    { return std::getline(__is, __str); }


  template<>
    basic_istream<char>&
    getline(basic_istream<char>& __in, basic_string<char>& __str,
     char __delim);


  template<>
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>& __in, basic_string<wchar_t>& __str,
     wchar_t __delim);



}




# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/string_conversions.h" 1 3
# 33 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/string_conversions.h" 3








# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cstdlib" 1 3
# 40 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cstdlib" 3
# 42 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/string_conversions.h" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cwchar" 1 3
# 40 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cwchar" 3
# 43 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/string_conversions.h" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cstdio" 1 3
# 40 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cstdio" 3
# 96 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cstdio" 3
namespace std
{
  using ::FILE;
  using ::fpos_t;

  using ::clearerr;
  using ::fclose;
  using ::feof;
  using ::ferror;
  using ::fflush;
  using ::fgetc;
  using ::fgetpos;
  using ::fgets;
  using ::fopen;
  using ::fprintf;
  using ::fputc;
  using ::fputs;
  using ::fread;
  using ::freopen;
  using ::fscanf;
  using ::fseek;
  using ::fsetpos;
  using ::ftell;
  using ::fwrite;
  using ::getc;
  using ::getchar;




  using ::perror;
  using ::printf;
  using ::putc;
  using ::putchar;
  using ::puts;
  using ::remove;
  using ::rename;
  using ::rewind;
  using ::scanf;
  using ::setbuf;
  using ::setvbuf;
  using ::sprintf;
  using ::sscanf;
  using ::tmpfile;

  using ::tmpnam;

  using ::ungetc;
  using ::vfprintf;
  using ::vprintf;
  using ::vsprintf;
}
# 157 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cstdio" 3
namespace __gnu_cxx
{
# 175 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cstdio" 3
  using ::snprintf;
  using ::vfscanf;
  using ::vscanf;
  using ::vsnprintf;
  using ::vsscanf;

}

namespace std
{
  using ::__gnu_cxx::snprintf;
  using ::__gnu_cxx::vfscanf;
  using ::__gnu_cxx::vscanf;
  using ::__gnu_cxx::vsnprintf;
  using ::__gnu_cxx::vsscanf;
}
# 44 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/string_conversions.h" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cerrno" 1 3
# 40 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cerrno" 3
# 45 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\ext/string_conversions.h" 2 3

namespace __gnu_cxx
{



  template<typename _TRet, typename _Ret = _TRet, typename _CharT,
    typename... _Base>
    _Ret
    __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
    const char* __name, const _CharT* __str, std::size_t* __idx,
    _Base... __base)
    {
      _Ret __ret;

      _CharT* __endptr;

      struct _Save_errno {
 _Save_errno() : _M_errno((*_errno())) { (*_errno()) = 0; }
 ~_Save_errno() { if ((*_errno()) == 0) (*_errno()) = _M_errno; }
 int _M_errno;
      } const __save_errno;

      const _TRet __tmp = __convf(__str, &__endptr, __base...);

      if (__endptr == __str)
 std::__throw_invalid_argument(__name);
      else if ((*_errno()) == 34
        || (std::__are_same<_Ret, int>::__value
     && (__tmp < __numeric_traits<int>::__min
         || __tmp > __numeric_traits<int>::__max)))
 std::__throw_out_of_range(__name);
      else
 __ret = __tmp;

      if (__idx)
 *__idx = __endptr - __str;

      return __ret;
    }


  template<typename _String, typename _CharT = typename _String::value_type>
    _String
    __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     __builtin_va_list), std::size_t __n,
   const _CharT* __fmt, ...)
    {


      _CharT* __s = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
         * __n));

      __builtin_va_list __args;
      __builtin_va_start(__args, __fmt);

      const int __len = __convf(__s, __n, __fmt, __args);

      __builtin_va_end(__args);

      return _String(__s, __s + __len);
    }


}
# 5403 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 2 3

namespace std
{

namespace __cxx11 {



  inline int
  stoi(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa<long, int>(&std::strtol, "stoi", __str.c_str(),
     __idx, __base); }

  inline long
  stol(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::strtol, "stol", __str.c_str(),
        __idx, __base); }

  inline unsigned long
  stoul(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::strtoul, "stoul", __str.c_str(),
        __idx, __base); }

  inline long long
  stoll(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::strtoll, "stoll", __str.c_str(),
        __idx, __base); }

  inline unsigned long long
  stoull(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::strtoull, "stoull", __str.c_str(),
        __idx, __base); }


  inline float
  stof(const string& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::strtof, "stof", __str.c_str(), __idx); }

  inline double
  stod(const string& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::strtod, "stod", __str.c_str(), __idx); }

  inline long double
  stold(const string& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::strtold, "stold", __str.c_str(), __idx); }






  inline string
  to_string(int __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf, 4 * sizeof(int),
        "%d", __val); }

  inline string
  to_string(unsigned __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf,
        4 * sizeof(unsigned),
        "%u", __val); }

  inline string
  to_string(long __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf, 4 * sizeof(long),
        "%ld", __val); }

  inline string
  to_string(unsigned long __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf,
        4 * sizeof(unsigned long),
        "%lu", __val); }

  inline string
  to_string(long long __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf,
        4 * sizeof(long long),
        "%lld", __val); }

  inline string
  to_string(unsigned long long __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf,
        4 * sizeof(unsigned long long),
        "%llu", __val); }

  inline string
  to_string(float __val)
  {
    const int __n =
      __gnu_cxx::__numeric_traits<float>::__max_exponent10 + 20;
    return __gnu_cxx::__to_xstring<string>(&std::vsnprintf, __n,
        "%f", __val);
  }

  inline string
  to_string(double __val)
  {
    const int __n =
      __gnu_cxx::__numeric_traits<double>::__max_exponent10 + 20;
    return __gnu_cxx::__to_xstring<string>(&std::vsnprintf, __n,
        "%f", __val);
  }

  inline string
  to_string(long double __val)
  {
    const int __n =
      __gnu_cxx::__numeric_traits<long double>::__max_exponent10 + 20;
    return __gnu_cxx::__to_xstring<string>(&std::vsnprintf, __n,
        "%Lf", __val);
  }



  inline int
  stoi(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa<long, int>(&std::wcstol, "stoi", __str.c_str(),
     __idx, __base); }

  inline long
  stol(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::wcstol, "stol", __str.c_str(),
        __idx, __base); }

  inline unsigned long
  stoul(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::wcstoul, "stoul", __str.c_str(),
        __idx, __base); }

  inline long long
  stoll(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::wcstoll, "stoll", __str.c_str(),
        __idx, __base); }

  inline unsigned long long
  stoull(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::wcstoull, "stoull", __str.c_str(),
        __idx, __base); }


  inline float
  stof(const wstring& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::wcstof, "stof", __str.c_str(), __idx); }

  inline double
  stod(const wstring& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::wcstod, "stod", __str.c_str(), __idx); }

  inline long double
  stold(const wstring& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::wcstold, "stold", __str.c_str(), __idx); }



  inline wstring
  to_wstring(int __val)
  { return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf, 4 * sizeof(int),
         L"%d", __val); }

  inline wstring
  to_wstring(unsigned __val)
  { return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf,
         4 * sizeof(unsigned),
         L"%u", __val); }

  inline wstring
  to_wstring(long __val)
  { return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf, 4 * sizeof(long),
         L"%ld", __val); }

  inline wstring
  to_wstring(unsigned long __val)
  { return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf,
         4 * sizeof(unsigned long),
         L"%lu", __val); }

  inline wstring
  to_wstring(long long __val)
  { return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf,
         4 * sizeof(long long),
         L"%lld", __val); }

  inline wstring
  to_wstring(unsigned long long __val)
  { return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf,
         4 * sizeof(unsigned long long),
         L"%llu", __val); }

  inline wstring
  to_wstring(float __val)
  {
    const int __n =
      __gnu_cxx::__numeric_traits<float>::__max_exponent10 + 20;
    return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf, __n,
         L"%f", __val);
  }

  inline wstring
  to_wstring(double __val)
  {
    const int __n =
      __gnu_cxx::__numeric_traits<double>::__max_exponent10 + 20;
    return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf, __n,
         L"%f", __val);
  }

  inline wstring
  to_wstring(long double __val)
  {
    const int __n =
      __gnu_cxx::__numeric_traits<long double>::__max_exponent10 + 20;
    return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf, __n,
         L"%Lf", __val);
  }



}

}






# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/functional_hash.h" 1 3
# 34 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/functional_hash.h" 3

# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/hash_bytes.h" 1 3
# 34 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/hash_bytes.h" 3



namespace std
{







  size_t
  _Hash_bytes(const void* __ptr, size_t __len, size_t __seed);





  size_t
  _Fnv_hash_bytes(const void* __ptr, size_t __len, size_t __seed);


}
# 36 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/functional_hash.h" 2 3

namespace std
{
# 49 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/functional_hash.h" 3
  template<typename _Result, typename _Arg>
    struct __hash_base
    {
      typedef _Result result_type;
      typedef _Arg argument_type;
    };


  template<typename _Tp>
    struct hash;


  template<typename _Tp, bool = is_enum<_Tp>::value>
    struct __hash_enum
    {
    private:

      __hash_enum(__hash_enum&&);
      ~__hash_enum();
    };


  template<typename _Tp>
    struct __hash_enum<_Tp, true> : public __hash_base<size_t, _Tp>
    {
      size_t
      operator()(_Tp __val) const noexcept
      {
       using __type = typename underlying_type<_Tp>::type;
       return hash<__type>{}(static_cast<__type>(__val));
      }
    };



  template<typename _Tp>
    struct hash : __hash_enum<_Tp>
    { };


  template<typename _Tp>
    struct hash<_Tp*> : public __hash_base<size_t, _Tp*>
    {
      size_t
      operator()(_Tp* __p) const noexcept
      { return reinterpret_cast<size_t>(__p); }
    };
# 108 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/functional_hash.h" 3
  template<> struct hash<bool> : public __hash_base<size_t, bool> { size_t operator()(bool __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<char> : public __hash_base<size_t, char> { size_t operator()(char __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<signed char> : public __hash_base<size_t, signed char> { size_t operator()(signed char __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<unsigned char> : public __hash_base<size_t, unsigned char> { size_t operator()(unsigned char __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<wchar_t> : public __hash_base<size_t, wchar_t> { size_t operator()(wchar_t __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<char16_t> : public __hash_base<size_t, char16_t> { size_t operator()(char16_t __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<char32_t> : public __hash_base<size_t, char32_t> { size_t operator()(char32_t __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<short> : public __hash_base<size_t, short> { size_t operator()(short __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<int> : public __hash_base<size_t, int> { size_t operator()(int __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<long> : public __hash_base<size_t, long> { size_t operator()(long __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<long long> : public __hash_base<size_t, long long> { size_t operator()(long long __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<unsigned short> : public __hash_base<size_t, unsigned short> { size_t operator()(unsigned short __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<unsigned int> : public __hash_base<size_t, unsigned int> { size_t operator()(unsigned int __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<unsigned long> : public __hash_base<size_t, unsigned long> { size_t operator()(unsigned long __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<unsigned long long> : public __hash_base<size_t, unsigned long long> { size_t operator()(unsigned long long __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<__int128> : public __hash_base<size_t, __int128> { size_t operator()(__int128 __val) const noexcept { return static_cast<size_t>(__val); } };
  template<> struct hash<__int128 unsigned> : public __hash_base<size_t, __int128 unsigned> { size_t operator()(__int128 unsigned __val) const noexcept { return static_cast<size_t>(__val); } };
# 171 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/functional_hash.h" 3
  struct _Hash_impl
  {
    static size_t
    hash(const void* __ptr, size_t __clength,
  size_t __seed = static_cast<size_t>(0xc70f6907UL))
    { return _Hash_bytes(__ptr, __clength, __seed); }

    template<typename _Tp>
      static size_t
      hash(const _Tp& __val)
      { return hash(&__val, sizeof(__val)); }

    template<typename _Tp>
      static size_t
      __hash_combine(const _Tp& __val, size_t __hash)
      { return hash(&__val, sizeof(__val), __hash); }
  };

  struct _Fnv_hash_impl
  {
    static size_t
    hash(const void* __ptr, size_t __clength,
  size_t __seed = static_cast<size_t>(2166136261UL))
    { return _Fnv_hash_bytes(__ptr, __clength, __seed); }

    template<typename _Tp>
      static size_t
      hash(const _Tp& __val)
      { return hash(&__val, sizeof(__val)); }

    template<typename _Tp>
      static size_t
      __hash_combine(const _Tp& __val, size_t __hash)
      { return hash(&__val, sizeof(__val), __hash); }
  };


  template<>
    struct hash<float> : public __hash_base<size_t, float>
    {
      size_t
      operator()(float __val) const noexcept
      {

 return __val != 0.0f ? std::_Hash_impl::hash(__val) : 0;
      }
    };


  template<>
    struct hash<double> : public __hash_base<size_t, double>
    {
      size_t
      operator()(double __val) const noexcept
      {

 return __val != 0.0 ? std::_Hash_impl::hash(__val) : 0;
      }
    };


  template<>
    struct hash<long double>
    : public __hash_base<size_t, long double>
    {
      __attribute__ ((__pure__)) size_t
      operator()(long double __val) const noexcept;
    };







  template<typename _Hash>
    struct __is_fast_hash : public std::true_type
    { };

  template<>
    struct __is_fast_hash<hash<long double>> : public std::false_type
    { };


}
# 5629 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.h" 2 3

namespace std
{






  template<>
    struct hash<string>
    : public __hash_base<size_t, string>
    {
      size_t
      operator()(const string& __s) const noexcept
      { return std::_Hash_impl::hash(__s.data(), __s.length()); }
    };

  template<>
    struct __is_fast_hash<hash<string>> : std::false_type
    { };



  template<>
    struct hash<wstring>
    : public __hash_base<size_t, wstring>
    {
      size_t
      operator()(const wstring& __s) const noexcept
      { return std::_Hash_impl::hash(__s.data(),
                                     __s.length() * sizeof(wchar_t)); }
    };

  template<>
    struct __is_fast_hash<hash<wstring>> : std::false_type
    { };





  template<>
    struct hash<u16string>
    : public __hash_base<size_t, u16string>
    {
      size_t
      operator()(const u16string& __s) const noexcept
      { return std::_Hash_impl::hash(__s.data(),
                                     __s.length() * sizeof(char16_t)); }
    };

  template<>
    struct __is_fast_hash<hash<u16string>> : std::false_type
    { };


  template<>
    struct hash<u32string>
    : public __hash_base<size_t, u32string>
    {
      size_t
      operator()(const u32string& __s) const noexcept
      { return std::_Hash_impl::hash(__s.data(),
                                     __s.length() * sizeof(char32_t)); }
    };

  template<>
    struct __is_fast_hash<hash<u32string>> : std::false_type
    { };






  inline namespace literals
  {
  inline namespace string_literals
  {

    __attribute ((__abi_tag__ ("cxx11")))
    inline basic_string<char>
    operator""s(const char* __str, size_t __len)
    { return basic_string<char>{__str, __len}; }


    __attribute ((__abi_tag__ ("cxx11")))
    inline basic_string<wchar_t>
    operator""s(const wchar_t* __str, size_t __len)
    { return basic_string<wchar_t>{__str, __len}; }



    __attribute ((__abi_tag__ ("cxx11")))
    inline basic_string<char16_t>
    operator""s(const char16_t* __str, size_t __len)
    { return basic_string<char16_t>{__str, __len}; }

    __attribute ((__abi_tag__ ("cxx11")))
    inline basic_string<char32_t>
    operator""s(const char32_t* __str, size_t __len)
    { return basic_string<char32_t>{__str, __len}; }


  }
  }




}
# 53 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\string" 2 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.tcc" 1 3
# 43 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.tcc" 3



namespace std
{




  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::npos;

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    swap(basic_string& __s) noexcept
    {
      if (this == &__s)
 return;

      _Alloc_traits::_S_on_swap(_M_get_allocator(), __s._M_get_allocator());

      if (_M_is_local())
 if (__s._M_is_local())
   {
     if (length() && __s.length())
       {
  _CharT __tmp_data[_S_local_capacity + 1];
  traits_type::copy(__tmp_data, __s._M_local_buf,
      _S_local_capacity + 1);
  traits_type::copy(__s._M_local_buf, _M_local_buf,
      _S_local_capacity + 1);
  traits_type::copy(_M_local_buf, __tmp_data,
      _S_local_capacity + 1);
       }
     else if (__s.length())
       {
  traits_type::copy(_M_local_buf, __s._M_local_buf,
      _S_local_capacity + 1);
  _M_length(__s.length());
  __s._M_set_length(0);
  return;
       }
     else if (length())
       {
  traits_type::copy(__s._M_local_buf, _M_local_buf,
      _S_local_capacity + 1);
  __s._M_length(length());
  _M_set_length(0);
  return;
       }
   }
 else
   {
     const size_type __tmp_capacity = __s._M_allocated_capacity;
     traits_type::copy(__s._M_local_buf, _M_local_buf,
         _S_local_capacity + 1);
     _M_data(__s._M_data());
     __s._M_data(__s._M_local_buf);
     _M_capacity(__tmp_capacity);
   }
      else
 {
   const size_type __tmp_capacity = _M_allocated_capacity;
   if (__s._M_is_local())
     {
       traits_type::copy(_M_local_buf, __s._M_local_buf,
    _S_local_capacity + 1);
       __s._M_data(_M_data());
       _M_data(_M_local_buf);
     }
   else
     {
       pointer __tmp_ptr = _M_data();
       _M_data(__s._M_data());
       __s._M_data(__tmp_ptr);
       _M_capacity(__s._M_allocated_capacity);
     }
   __s._M_capacity(__tmp_capacity);
 }

      const size_type __tmp_length = length();
      _M_length(__s.length());
      __s._M_length(__tmp_length);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::pointer
    basic_string<_CharT, _Traits, _Alloc>::
    _M_create(size_type& __capacity, size_type __old_capacity)
    {


      if (__capacity > max_size())
 std::__throw_length_error(("basic_string::_M_create"));




      if (__capacity > __old_capacity && __capacity < 2 * __old_capacity)
 {
   __capacity = 2 * __old_capacity;

   if (__capacity > max_size())
     __capacity = max_size();
 }



      return _Alloc_traits::allocate(_M_get_allocator(), __capacity + 1);
    }





  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InIterator>
      void
      basic_string<_CharT, _Traits, _Alloc>::
      _M_construct(_InIterator __beg, _InIterator __end,
     std::input_iterator_tag)
      {
 size_type __len = 0;
 size_type __capacity = size_type(_S_local_capacity);

 while (__beg != __end && __len < __capacity)
   {
     _M_data()[__len++] = *__beg;
     ++__beg;
   }

 if (true)
   {
     while (__beg != __end)
       {
  if (__len == __capacity)
    {

      __capacity = __len + 1;
      pointer __another = _M_create(__capacity, __len);
      this->_S_copy(__another, _M_data(), __len);
      _M_dispose();
      _M_data(__another);
      _M_capacity(__capacity);
    }
  _M_data()[__len++] = *__beg;
  ++__beg;
       }
   }
 if (false)
   {
     _M_dispose();
                            ;
   }

 _M_set_length(__len);
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InIterator>
      void
      basic_string<_CharT, _Traits, _Alloc>::
      _M_construct(_InIterator __beg, _InIterator __end,
     std::forward_iterator_tag)
      {

 if (__gnu_cxx::__is_null_pointer(__beg) && __beg != __end)
   std::__throw_logic_error(("basic_string::" "_M_construct null not valid"));


 size_type __dnew = static_cast<size_type>(std::distance(__beg, __end));

 if (__dnew > size_type(_S_local_capacity))
   {
     _M_data(_M_create(__dnew, size_type(0)));
     _M_capacity(__dnew);
   }


 if (true)
   { this->_S_copy_chars(_M_data(), __beg, __end); }
 if (false)
   {
     _M_dispose();
                            ;
   }

 _M_set_length(__dnew);
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_construct(size_type __n, _CharT __c)
    {
      if (__n > size_type(_S_local_capacity))
 {
   _M_data(_M_create(__n, size_type(0)));
   _M_capacity(__n);
 }

      if (__n)
 this->_S_assign(_M_data(), __n, __c);

      _M_set_length(__n);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_assign(const basic_string& __str)
    {
      if (this != &__str)
 {
   const size_type __rsize = __str.length();
   const size_type __capacity = capacity();

   if (__rsize > __capacity)
     {
       size_type __new_capacity = __rsize;
       pointer __tmp = _M_create(__new_capacity, __capacity);
       _M_dispose();
       _M_data(__tmp);
       _M_capacity(__new_capacity);
     }

   if (__rsize)
     this->_S_copy(_M_data(), __str._M_data(), __rsize);

   _M_set_length(__rsize);
 }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    reserve(size_type __res)
    {

      if (__res < length())
 __res = length();

      const size_type __capacity = capacity();
      if (__res != __capacity)
 {
   if (__res > __capacity
       || __res > size_type(_S_local_capacity))
     {
       pointer __tmp = _M_create(__res, __capacity);
       this->_S_copy(__tmp, _M_data(), length() + 1);
       _M_dispose();
       _M_data(__tmp);
       _M_capacity(__res);
     }
   else if (!_M_is_local())
     {
       this->_S_copy(_M_local_data(), _M_data(), length() + 1);
       _M_destroy(__capacity);
       _M_data(_M_local_data());
     }
 }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_mutate(size_type __pos, size_type __len1, const _CharT* __s,
       size_type __len2)
    {
      const size_type __how_much = length() - __pos - __len1;

      size_type __new_capacity = length() + __len2 - __len1;
      pointer __r = _M_create(__new_capacity, capacity());

      if (__pos)
 this->_S_copy(__r, _M_data(), __pos);
      if (__s && __len2)
 this->_S_copy(__r + __pos, __s, __len2);
      if (__how_much)
 this->_S_copy(__r + __pos + __len2,
        _M_data() + __pos + __len1, __how_much);

      _M_dispose();
      _M_data(__r);
      _M_capacity(__new_capacity);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_erase(size_type __pos, size_type __n)
    {
      const size_type __how_much = length() - __pos - __n;

      if (__how_much && __n)
 this->_S_move(_M_data() + __pos, _M_data() + __pos + __n, __how_much);

      _M_set_length(length() - __n);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    resize(size_type __n, _CharT __c)
    {
      const size_type __size = this->size();
      if (__size < __n)
 this->append(__n - __size, __c);
      else if (__n < __size)
 this->_M_erase(__n, __size - __n);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_append(const _CharT* __s, size_type __n)
    {
      const size_type __len = __n + this->size();

      if (__len <= this->capacity())
 {
   if (__n)
     this->_S_copy(this->_M_data() + this->size(), __s, __n);
 }
      else
 this->_M_mutate(this->size(), size_type(0), __s, __n);

      this->_M_set_length(__len);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
      basic_string<_CharT, _Traits, _Alloc>&
      basic_string<_CharT, _Traits, _Alloc>::
      _M_replace_dispatch(const_iterator __i1, const_iterator __i2,
     _InputIterator __k1, _InputIterator __k2,
     std::__false_type)
      {
 const basic_string __s(__k1, __k2);
 const size_type __n1 = __i2 - __i1;
 return _M_replace(__i1 - begin(), __n1, __s._M_data(),
     __s.size());
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
     _CharT __c)
    {
      _M_check_length(__n1, __n2, "basic_string::_M_replace_aux");

      const size_type __old_size = this->size();
      const size_type __new_size = __old_size + __n2 - __n1;

      if (__new_size <= this->capacity())
 {
   pointer __p = this->_M_data() + __pos1;

   const size_type __how_much = __old_size - __pos1 - __n1;
   if (__how_much && __n1 != __n2)
     this->_S_move(__p + __n2, __p + __n1, __how_much);
 }
      else
 this->_M_mutate(__pos1, __n1, 0, __n2);

      if (__n2)
 this->_S_assign(this->_M_data() + __pos1, __n2, __c);

      this->_M_set_length(__new_size);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace(size_type __pos, size_type __len1, const _CharT* __s,
        const size_type __len2)
    {
      _M_check_length(__len1, __len2, "basic_string::_M_replace");

      const size_type __old_size = this->size();
      const size_type __new_size = __old_size + __len2 - __len1;

      if (__new_size <= this->capacity())
 {
   pointer __p = this->_M_data() + __pos;

   const size_type __how_much = __old_size - __pos - __len1;
   if (_M_disjunct(__s))
     {
       if (__how_much && __len1 != __len2)
  this->_S_move(__p + __len2, __p + __len1, __how_much);
       if (__len2)
  this->_S_copy(__p, __s, __len2);
     }
   else
     {

       if (__len2 && __len2 <= __len1)
  this->_S_move(__p, __s, __len2);
       if (__how_much && __len1 != __len2)
  this->_S_move(__p + __len2, __p + __len1, __how_much);
       if (__len2 > __len1)
  {
    if (__s + __len2 <= __p + __len1)
      this->_S_move(__p, __s, __len2);
    else if (__s >= __p + __len1)
      this->_S_copy(__p, __s + __len2 - __len1, __len2);
    else
      {
        const size_type __nleft = (__p + __len1) - __s;
        this->_S_move(__p, __s, __nleft);
        this->_S_copy(__p + __nleft, __p + __len2,
        __len2 - __nleft);
      }
  }
     }
 }
      else
 this->_M_mutate(__pos, __len1, __s, __len2);

      this->_M_set_length(__new_size);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    copy(_CharT* __s, size_type __n, size_type __pos) const
    {
      _M_check(__pos, "basic_string::copy");
      __n = _M_limit(__pos, __n);
                                             ;
      if (__n)
 _S_copy(__s, _M_data() + __pos, __n);

      return __n;
    }
# 1145 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\bits/basic_string.tcc" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
                                      ;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      const __size_type __len = _Traits::length(__lhs);
      __string_type __str;
      __str.reserve(__len + __rhs.size());
      __str.append(__lhs, __len);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str;
      const __size_type __len = __rhs.size();
      __str.reserve(__len + 1);
      __str.append(__size_type(1), __lhs);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      const size_type __size = this->size();
      const _CharT* __data = _M_data();

      if (__n == 0)
 return __pos <= __size ? __pos : npos;

      if (__n <= __size)
 {
   for (; __pos <= __size - __n; ++__pos)
     if (traits_type::eq(__data[__pos], __s[0])
  && traits_type::compare(__data + __pos + 1,
     __s + 1, __n - 1) == 0)
       return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(_CharT __c, size_type __pos) const noexcept
    {
      size_type __ret = npos;
      const size_type __size = this->size();
      if (__pos < __size)
 {
   const _CharT* __data = _M_data();
   const size_type __n = __size - __pos;
   const _CharT* __p = traits_type::find(__data + __pos, __n, __c);
   if (__p)
     __ret = __p - __data;
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      const size_type __size = this->size();
      if (__n <= __size)
 {
   __pos = std::min(size_type(__size - __n), __pos);
   const _CharT* __data = _M_data();
   do
     {
       if (traits_type::compare(__data + __pos, __s, __n) == 0)
  return __pos;
     }
   while (__pos-- > 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(_CharT __c, size_type __pos) const noexcept
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   for (++__size; __size-- > 0; )
     if (traits_type::eq(_M_data()[__size], __c))
       return __size;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      for (; __n && __pos < this->size(); ++__pos)
 {
   const _CharT* __p = traits_type::find(__s, __n, _M_data()[__pos]);
   if (__p)
     return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      size_type __size = this->size();
      if (__size && __n)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size-- != 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::find(__s, __n, _M_data()[__pos]))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(_CharT __c, size_type __pos) const noexcept
    {
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::eq(_M_data()[__pos], __c))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(_CharT __c, size_type __pos) const noexcept
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::eq(_M_data()[__size], __c))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n, const basic_string& __str) const
    {
      _M_check(__pos, "basic_string::compare");
      __n = _M_limit(__pos, __n);
      const size_type __osize = __str.size();
      const size_type __len = std::min(__n, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __str.data(), __len);
      if (!__r)
 __r = _S_compare(__n, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos1, size_type __n1, const basic_string& __str,
     size_type __pos2, size_type __n2) const
    {
      _M_check(__pos1, "basic_string::compare");
      __str._M_check(__pos2, "basic_string::compare");
      __n1 = _M_limit(__pos1, __n1);
      __n2 = __str._M_limit(__pos2, __n2);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos1,
         __str.data() + __pos2, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(const _CharT* __s) const
    {
                                    ;
      const size_type __size = this->size();
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__size, __osize);
      int __r = traits_type::compare(_M_data(), __s, __len);
      if (!__r)
 __r = _S_compare(__size, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s) const
    {
                                    ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__n1, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s,
     size_type __n2) const
    {
                                              ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in,
        basic_string<_CharT, _Traits, _Alloc>& __str)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;
      typedef ctype<_CharT> __ctype_type;
      typedef typename __ctype_type::ctype_base __ctype_base;

      __size_type __extracted = 0;
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   if (true)
     {

       __str.erase();
       _CharT __buf[128];
       __size_type __len = 0;
       const streamsize __w = __in.width();
       const __size_type __n = __w > 0 ? static_cast<__size_type>(__w)
                                : __str.max_size();
       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(__ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    if (__len == sizeof(__buf) / sizeof(_CharT))
      {
        __str.append(__buf, sizeof(__buf) / sizeof(_CharT));
        __len = 0;
      }
    __buf[__len++] = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }
       __str.append(__buf, __len);

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       __in.width(0);
     }
   if (false)
     {
       __in._M_setstate(__ios_base::badbit);
                              ;
     }
   if (false)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }

      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __in,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;

      __size_type __extracted = 0;
      const __size_type __n = __str.max_size();
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, true);
      if (__cerb)
 {
   if (true)
     {
       __str.erase();
       const __int_type __idelim = _Traits::to_int_type(__delim);
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !_Traits::eq_int_type(__c, __idelim))
  {
    __str += _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       else if (_Traits::eq_int_type(__c, __idelim))
  {
    ++__extracted;
    __in.rdbuf()->sbumpc();
  }
       else
  __err |= __ios_base::failbit;
     }
   if (false)
     {
       __in._M_setstate(__ios_base::badbit);
                              ;
     }
   if (false)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }
      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }




  extern template class basic_string<char>;
  extern template
    basic_istream<char>&
    operator>>(basic_istream<char>&, string&);
  extern template
    basic_ostream<char>&
    operator<<(basic_ostream<char>&, const string&);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&, char);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&);


  extern template class basic_string<wchar_t>;
  extern template
    basic_istream<wchar_t>&
    operator>>(basic_istream<wchar_t>&, wstring&);
  extern template
    basic_ostream<wchar_t>&
    operator<<(basic_ostream<wchar_t>&, const wstring&);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&, wchar_t);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&);




}
# 54 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\string" 2 3
# 40 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\stdexcept" 2 3

namespace std
{





  struct __cow_string
  {
    union {
      const char* _M_p;
      char _M_bytes[sizeof(const char*)];
    };

    __cow_string();
    __cow_string(const std::string&);
    __cow_string(const char*, size_t);
    __cow_string(const __cow_string&) noexcept;
    __cow_string& operator=(const __cow_string&) noexcept;
    ~__cow_string();

    __cow_string(__cow_string&&) noexcept;
    __cow_string& operator=(__cow_string&&) noexcept;

  };

  typedef basic_string<char> __sso_string;
# 113 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\stdexcept" 3
  class logic_error : public exception
  {
    __cow_string _M_msg;

  public:

    explicit
    logic_error(const string& __arg) ;


    explicit
    logic_error(const char*) ;



    logic_error(const logic_error&) noexcept;
    logic_error& operator=(const logic_error&) noexcept;


    virtual ~logic_error() noexcept;



    virtual const char*
    what() const noexcept;





  };



  class domain_error : public logic_error
  {
  public:
    explicit domain_error(const string& __arg) ;

    explicit domain_error(const char*) ;

    virtual ~domain_error() noexcept;
  };


  class invalid_argument : public logic_error
  {
  public:
    explicit invalid_argument(const string& __arg) ;

    explicit invalid_argument(const char*) ;

    virtual ~invalid_argument() noexcept;
  };



  class length_error : public logic_error
  {
  public:
    explicit length_error(const string& __arg) ;

    explicit length_error(const char*) ;

    virtual ~length_error() noexcept;
  };



  class out_of_range : public logic_error
  {
  public:
    explicit out_of_range(const string& __arg) ;

    explicit out_of_range(const char*) ;

    virtual ~out_of_range() noexcept;
  };






  class runtime_error : public exception
  {
    __cow_string _M_msg;

  public:

    explicit
    runtime_error(const string& __arg) ;


    explicit
    runtime_error(const char*) ;



    runtime_error(const runtime_error&) noexcept;
    runtime_error& operator=(const runtime_error&) noexcept;


    virtual ~runtime_error() noexcept;



    virtual const char*
    what() const noexcept;





  };


  class range_error : public runtime_error
  {
  public:
    explicit range_error(const string& __arg) ;

    explicit range_error(const char*) ;

    virtual ~range_error() noexcept;
  };


  class overflow_error : public runtime_error
  {
  public:
    explicit overflow_error(const string& __arg) ;

    explicit overflow_error(const char*) ;

    virtual ~overflow_error() noexcept;
  };


  class underflow_error : public runtime_error
  {
  public:
    explicit underflow_error(const string& __arg) ;

    explicit underflow_error(const char*) ;

    virtual ~underflow_error() noexcept;
  };




}
# 40 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\array" 2 3



namespace std
{


  template<typename _Tp, std::size_t _Nm>
    struct __array_traits
    {
      typedef _Tp _Type[_Nm];

      static constexpr _Tp&
      _S_ref(const _Type& __t, std::size_t __n) noexcept
      { return const_cast<_Tp&>(__t[__n]); }

      static constexpr _Tp*
      _S_ptr(const _Type& __t) noexcept
      { return const_cast<_Tp*>(__t); }
    };

 template<typename _Tp>
   struct __array_traits<_Tp, 0>
   {
     struct _Type { };

     static constexpr _Tp&
     _S_ref(const _Type&, std::size_t) noexcept
     { return *static_cast<_Tp*>(nullptr); }

     static constexpr _Tp*
     _S_ptr(const _Type&) noexcept
     { return nullptr; }
   };
# 89 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\array" 3
  template<typename _Tp, std::size_t _Nm>
    struct array
    {
      typedef _Tp value_type;
      typedef value_type* pointer;
      typedef const value_type* const_pointer;
      typedef value_type& reference;
      typedef const value_type& const_reference;
      typedef value_type* iterator;
      typedef const value_type* const_iterator;
      typedef std::size_t size_type;
      typedef std::ptrdiff_t difference_type;
      typedef std::reverse_iterator<iterator> reverse_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;


      typedef std::__array_traits<_Tp, _Nm> _AT_Type;
      typename _AT_Type::_Type _M_elems;




      void
      fill(const value_type& __u)
      { std::fill_n(begin(), size(), __u); }

      void
      swap(array& __other)
      noexcept(__is_nothrow_swappable<_Tp>::value)
      { std::swap_ranges(begin(), end(), __other.begin()); }


      iterator
      begin() noexcept
      { return iterator(data()); }

      const_iterator
      begin() const noexcept
      { return const_iterator(data()); }

      iterator
      end() noexcept
      { return iterator(data() + _Nm); }

      const_iterator
      end() const noexcept
      { return const_iterator(data() + _Nm); }

      reverse_iterator
      rbegin() noexcept
      { return reverse_iterator(end()); }

      const_reverse_iterator
      rbegin() const noexcept
      { return const_reverse_iterator(end()); }

      reverse_iterator
      rend() noexcept
      { return reverse_iterator(begin()); }

      const_reverse_iterator
      rend() const noexcept
      { return const_reverse_iterator(begin()); }

      const_iterator
      cbegin() const noexcept
      { return const_iterator(data()); }

      const_iterator
      cend() const noexcept
      { return const_iterator(data() + _Nm); }

      const_reverse_iterator
      crbegin() const noexcept
      { return const_reverse_iterator(end()); }

      const_reverse_iterator
      crend() const noexcept
      { return const_reverse_iterator(begin()); }


      constexpr size_type
      size() const noexcept { return _Nm; }

      constexpr size_type
      max_size() const noexcept { return _Nm; }

      constexpr bool
      empty() const noexcept { return size() == 0; }


      reference
      operator[](size_type __n) noexcept
      { return _AT_Type::_S_ref(_M_elems, __n); }

      constexpr const_reference
      operator[](size_type __n) const noexcept
      { return _AT_Type::_S_ref(_M_elems, __n); }

      reference
      at(size_type __n)
      {
 if (__n >= _Nm)
   std::__throw_out_of_range_fmt(("array::at: __n (which is %zu) " ">= _Nm (which is %zu)"),

     __n, _Nm);
 return _AT_Type::_S_ref(_M_elems, __n);
      }

      constexpr const_reference
      at(size_type __n) const
      {


 return __n < _Nm ? _AT_Type::_S_ref(_M_elems, __n)
   : (std::__throw_out_of_range_fmt(("array::at: __n (which is %zu) " ">= _Nm (which is %zu)"),

        __n, _Nm),
      _AT_Type::_S_ref(_M_elems, 0));
      }

      reference
      front() noexcept
      { return *begin(); }

      constexpr const_reference
      front() const noexcept
      { return _AT_Type::_S_ref(_M_elems, 0); }

      reference
      back() noexcept
      { return _Nm ? *(end() - 1) : *end(); }

      constexpr const_reference
      back() const noexcept
      {
 return _Nm ? _AT_Type::_S_ref(_M_elems, _Nm - 1)
             : _AT_Type::_S_ref(_M_elems, 0);
      }

      pointer
      data() noexcept
      { return _AT_Type::_S_ptr(_M_elems); }

      const_pointer
      data() const noexcept
      { return _AT_Type::_S_ptr(_M_elems); }
    };


  template<typename _Tp, std::size_t _Nm>
    inline bool
    operator==(const array<_Tp, _Nm>& __one, const array<_Tp, _Nm>& __two)
    { return std::equal(__one.begin(), __one.end(), __two.begin()); }

  template<typename _Tp, std::size_t _Nm>
    inline bool
    operator!=(const array<_Tp, _Nm>& __one, const array<_Tp, _Nm>& __two)
    { return !(__one == __two); }

  template<typename _Tp, std::size_t _Nm>
    inline bool
    operator<(const array<_Tp, _Nm>& __a, const array<_Tp, _Nm>& __b)
    {
      return std::lexicographical_compare(__a.begin(), __a.end(),
       __b.begin(), __b.end());
    }

  template<typename _Tp, std::size_t _Nm>
    inline bool
    operator>(const array<_Tp, _Nm>& __one, const array<_Tp, _Nm>& __two)
    { return __two < __one; }

  template<typename _Tp, std::size_t _Nm>
    inline bool
    operator<=(const array<_Tp, _Nm>& __one, const array<_Tp, _Nm>& __two)
    { return !(__one > __two); }

  template<typename _Tp, std::size_t _Nm>
    inline bool
    operator>=(const array<_Tp, _Nm>& __one, const array<_Tp, _Nm>& __two)
    { return !(__one < __two); }


  template<typename _Tp, std::size_t _Nm>
    inline void
    swap(array<_Tp, _Nm>& __one, array<_Tp, _Nm>& __two)
    noexcept(noexcept(__one.swap(__two)))
    { __one.swap(__two); }

  template<std::size_t _Int, typename _Tp, std::size_t _Nm>
    constexpr _Tp&
    get(array<_Tp, _Nm>& __arr) noexcept
    {
      static_assert(_Int < _Nm, "index is out of bounds");
      return std::__array_traits<_Tp, _Nm>::
 _S_ref(__arr._M_elems, _Int);
    }

  template<std::size_t _Int, typename _Tp, std::size_t _Nm>
    constexpr _Tp&&
    get(array<_Tp, _Nm>&& __arr) noexcept
    {
      static_assert(_Int < _Nm, "index is out of bounds");
      return std::move(std::get<_Int>(__arr));
    }

  template<std::size_t _Int, typename _Tp, std::size_t _Nm>
    constexpr const _Tp&
    get(const array<_Tp, _Nm>& __arr) noexcept
    {
      static_assert(_Int < _Nm, "index is out of bounds");
      return std::__array_traits<_Tp, _Nm>::
 _S_ref(__arr._M_elems, _Int);
    }


}

namespace std
{





  template<typename _Tp>
    class tuple_size;


  template<typename _Tp, std::size_t _Nm>
    struct tuple_size<std::array<_Tp, _Nm>>
    : public integral_constant<std::size_t, _Nm> { };


  template<std::size_t _Int, typename _Tp>
    class tuple_element;


  template<std::size_t _Int, typename _Tp, std::size_t _Nm>
    struct tuple_element<_Int, std::array<_Tp, _Nm>>
    {
      static_assert(_Int < _Nm, "index is out of bounds");
      typedef _Tp type;
    };

  template<typename _Tp, std::size_t _Nm>
    struct __is_tuple_like_impl<std::array<_Tp, _Nm>> : true_type
    { };


}
# 6 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h" 2
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cassert" 1 3
# 42 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cassert" 3


# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\assert.h" 1 3
# 17 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\assert.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\stdlib.h" 1 3
# 18 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\assert.h" 2 3



extern "C" {
# 45 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\x86_64-w64-mingw32\\include\\assert.h" 3
extern void __attribute__((__cdecl__))
_wassert(const wchar_t *_Message,const wchar_t *_File,unsigned _Line);
extern void __attribute__((__cdecl__))
_assert (const char *_Message, const char *_File, unsigned _Line);


}
# 45 "C:/Xilinx/Vitis_HLS/2020.2/tps/mingw/6.2.0/win64.o/nt\\lib\\gcc\\x86_64-w64-mingw32\\6.2.0\\include\\c++\\cassert" 2 3
# 7 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h" 2


namespace hls {
# 21 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
namespace details {


constexpr size_t gp2(size_t N) {
  if (N == 0)
    return 0;
  if (N % 2 != 0)
    return 1;
  return 2 * gp2(N / 2);
}

}


template <typename T, size_t N>
class alignas(details::gp2(sizeof(T) * N)) vector {
  static_assert(N > 0, "vector must have at least one element");

  using data_t = std::array<T, N>;
  data_t data;

protected:


  inline __attribute__((always_inline)) void pragma() const {
#pragma HLS AGGREGATE variable=this
 }

public:

  vector() = default;

  vector(const vector &other) = default;

  vector(vector &&other) = default;

  vector &operator=(const vector &other) = default;

  vector &operator=(vector &&other) = default;

  ~vector() = default;





  vector(const T &val) {
    pragma();
    VITIS_LOOP_69_1: for (T &elem : data) {
#pragma HLS UNROLL
 elem = val;
    }
  }


  vector(const std::array<T, N> &data) : data{data} {
    pragma();
  }


  vector(std::initializer_list<T> l) {
    pragma();
    (void) ((!!(l.size() == N && "Initializer list must be the same size as the vector")) || (_assert("l.size() == N && \"Initializer list must be the same size as the vector\"","C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h",84),0));

    VITIS_LOOP_85_1: for (size_t i = 0; i < N; ++i) {
      data[i] = l.begin()[i];
    }
  }


  T &operator[](size_t idx) {
    pragma();
    return data[idx];
  }
  const T &operator[](size_t idx) const {
    pragma();
    return data[idx];
  }

  using iterator = typename data_t::iterator;
# 112 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
  vector &operator ++() { pragma(); VITIS_LOOP_112_1: for (size_t i = 0; i < N; ++i) {
# 112 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 112 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 ++ data[i]; } return *this; }
  vector &operator --() { pragma(); VITIS_LOOP_113_1: for (size_t i = 0; i < N; ++i) {
# 113 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 113 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 -- data[i]; } return *this; }
# 123 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
  vector operator ++(int) { pragma(); vector orig = *this; ++ *this; return orig; }
  vector operator --(int) { pragma(); vector orig = *this; -- *this; return orig; }
# 137 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
  vector &operator +=(const vector &rhs) { pragma(); rhs.pragma(); VITIS_LOOP_137_1: for (size_t i = 0; i < N; ++i) {
# 137 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 137 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 data[i] += rhs[i]; } return *this; }
  vector &operator -=(const vector &rhs) { pragma(); rhs.pragma(); VITIS_LOOP_138_1: for (size_t i = 0; i < N; ++i) {
# 138 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 138 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 data[i] -= rhs[i]; } return *this; }
  vector &operator *=(const vector &rhs) { pragma(); rhs.pragma(); VITIS_LOOP_139_1: for (size_t i = 0; i < N; ++i) {
# 139 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 139 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 data[i] *= rhs[i]; } return *this; }
  vector &operator /=(const vector &rhs) { pragma(); rhs.pragma(); VITIS_LOOP_140_1: for (size_t i = 0; i < N; ++i) {
# 140 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 140 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 data[i] /= rhs[i]; } return *this; }
  vector &operator %=(const vector &rhs) { pragma(); rhs.pragma(); VITIS_LOOP_141_1: for (size_t i = 0; i < N; ++i) {
# 141 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 141 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 data[i] %= rhs[i]; } return *this; }
  vector &operator &=(const vector &rhs) { pragma(); rhs.pragma(); VITIS_LOOP_142_1: for (size_t i = 0; i < N; ++i) {
# 142 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 142 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 data[i] &= rhs[i]; } return *this; }
  vector &operator |=(const vector &rhs) { pragma(); rhs.pragma(); VITIS_LOOP_143_1: for (size_t i = 0; i < N; ++i) {
# 143 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 143 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 data[i] |= rhs[i]; } return *this; }
  vector &operator ^=(const vector &rhs) { pragma(); rhs.pragma(); VITIS_LOOP_144_1: for (size_t i = 0; i < N; ++i) {
# 144 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 144 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 data[i] ^= rhs[i]; } return *this; }
  vector &operator <<=(const vector &rhs) { pragma(); rhs.pragma(); VITIS_LOOP_145_1: for (size_t i = 0; i < N; ++i) {
# 145 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 145 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 data[i] <<= rhs[i]; } return *this; }
  vector &operator >>=(const vector &rhs) { pragma(); rhs.pragma(); VITIS_LOOP_146_1: for (size_t i = 0; i < N; ++i) {
# 146 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 146 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 data[i] >>= rhs[i]; } return *this; }
# 159 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
  T reduce_add() const { pragma(); T res = data[0]; VITIS_LOOP_159_1: for (size_t i = 1; i < N; ++i) {
# 159 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 159 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 res += data[i]; } return res; }
  T reduce_mult() const { pragma(); T res = data[0]; VITIS_LOOP_160_1: for (size_t i = 1; i < N; ++i) {
# 160 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 160 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 res *= data[i]; } return res; }
  T reduce_and() const { pragma(); T res = data[0]; VITIS_LOOP_161_1: for (size_t i = 1; i < N; ++i) {
# 161 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 161 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 res &= data[i]; } return res; }
  T reduce_or() const { pragma(); T res = data[0]; VITIS_LOOP_162_1: for (size_t i = 1; i < N; ++i) {
# 162 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 162 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 res |= data[i]; } return res; }
  T reduce_xor() const { pragma(); T res = data[0]; VITIS_LOOP_163_1: for (size_t i = 1; i < N; ++i) {
# 163 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 163 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 res ^= data[i]; } return res; }
# 190 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
  friend bool operator <(const vector &lhs, const vector &rhs) { lhs.pragma(); rhs.pragma(); VITIS_LOOP_190_1: for (size_t i = 0; i < N; ++i) {
# 190 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 190 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 if (lhs[i] == rhs[i]) continue; return lhs[i] < rhs[i]; } return T{} < T{}; }
  friend bool operator <=(const vector &lhs, const vector &rhs) { lhs.pragma(); rhs.pragma(); VITIS_LOOP_191_1: for (size_t i = 0; i < N; ++i) {
# 191 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 191 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 if (lhs[i] == rhs[i]) continue; return lhs[i] <= rhs[i]; } return T{} <= T{}; }
  friend bool operator ==(const vector &lhs, const vector &rhs) { lhs.pragma(); rhs.pragma(); VITIS_LOOP_192_1: for (size_t i = 0; i < N; ++i) {
# 192 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 192 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 if (lhs[i] == rhs[i]) continue; return lhs[i] == rhs[i]; } return T{} == T{}; }
  friend bool operator !=(const vector &lhs, const vector &rhs) { lhs.pragma(); rhs.pragma(); VITIS_LOOP_193_1: for (size_t i = 0; i < N; ++i) {
# 193 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 193 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 if (lhs[i] == rhs[i]) continue; return lhs[i] != rhs[i]; } return T{} != T{}; }
  friend bool operator >=(const vector &lhs, const vector &rhs) { lhs.pragma(); rhs.pragma(); VITIS_LOOP_194_1: for (size_t i = 0; i < N; ++i) {
# 194 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 194 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 if (lhs[i] == rhs[i]) continue; return lhs[i] >= rhs[i]; } return T{} >= T{}; }
  friend bool operator >(const vector &lhs, const vector &rhs) { lhs.pragma(); rhs.pragma(); VITIS_LOOP_195_1: for (size_t i = 0; i < N; ++i) {
# 195 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
#pragma HLS UNROLL
# 195 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
 if (lhs[i] == rhs[i]) continue; return lhs[i] > rhs[i]; } return T{} > T{}; }
# 204 "C:/Xilinx/Vitis_HLS/2020.2/common/technology/autopilot\\hls_vector.h"
  friend vector operator +(vector lhs, const vector &rhs) { lhs.pragma(); rhs.pragma(); return lhs += rhs; }
  friend vector operator -(vector lhs, const vector &rhs) { lhs.pragma(); rhs.pragma(); return lhs -= rhs; }
  friend vector operator *(vector lhs, const vector &rhs) { lhs.pragma(); rhs.pragma(); return lhs *= rhs; }
  friend vector operator /(vector lhs, const vector &rhs) { lhs.pragma(); rhs.pragma(); return lhs /= rhs; }
  friend vector operator %(vector lhs, const vector &rhs) { lhs.pragma(); rhs.pragma(); return lhs %= rhs; }
  friend vector operator &(vector lhs, const vector &rhs) { lhs.pragma(); rhs.pragma(); return lhs &= rhs; }
  friend vector operator |(vector lhs, const vector &rhs) { lhs.pragma(); rhs.pragma(); return lhs |= rhs; }
  friend vector operator ^(vector lhs, const vector &rhs) { lhs.pragma(); rhs.pragma(); return lhs ^= rhs; }
  friend vector operator <<(vector lhs, const vector &rhs) { lhs.pragma(); rhs.pragma(); return lhs <<= rhs; }
  friend vector operator >>(vector lhs, const vector &rhs) { lhs.pragma(); rhs.pragma(); return lhs >>= rhs; }
};

}
# 12 "./sha256.h" 2
# 26 "./sha256.h"
typedef unsigned char BYTE;
typedef unsigned int WORD;





static const WORD k[64] = {
 0x428a2f98,0x71374491,0xb5c0fbcf,0xe9b5dba5,0x3956c25b,0x59f111f1,0x923f82a4,0xab1c5ed5,
 0xd807aa98,0x12835b01,0x243185be,0x550c7dc3,0x72be5d74,0x80deb1fe,0x9bdc06a7,0xc19bf174,
 0xe49b69c1,0xefbe4786,0x0fc19dc6,0x240ca1cc,0x2de92c6f,0x4a7484aa,0x5cb0a9dc,0x76f988da,
 0x983e5152,0xa831c66d,0xb00327c8,0xbf597fc7,0xc6e00bf3,0xd5a79147,0x06ca6351,0x14292967,
 0x27b70a85,0x2e1b2138,0x4d2c6dfc,0x53380d13,0x650a7354,0x766a0abb,0x81c2c92e,0x92722c85,
 0xa2bfe8a1,0xa81a664b,0xc24b8b70,0xc76c51a3,0xd192e819,0xd6990624,0xf40e3585,0x106aa070,
 0x19a4c116,0x1e376c08,0x2748774c,0x34b0bcb5,0x391c0cb3,0x4ed8aa4a,0x5b9cca4f,0x682e6ff3,
 0x748f82ee,0x78a5636f,0x84c87814,0x8cc70208,0x90befffa,0xa4506ceb,0xbef9a3f7,0xc67178f2
};
# 58 "./sha256.h"
__attribute__((sdx_kernel("sha256", 0))) void sha256(hls::stream<unsigned int> &istateREG, hls::stream<unsigned char> &idata,hls::stream<unsigned char> &ohash);
# 10 "sha256.cpp" 2
# 19 "sha256.cpp"
__attribute__((sdx_kernel("sha256", 0))) void sha256(hls::stream<unsigned int> &istateREG,hls::stream<unsigned char> &idata,hls::stream<unsigned char> &ohash)
{
#pragma HLS TOP name=sha256
# 20 "sha256.cpp"

 WORD stateREG[8];
 BYTE data[64];
 BYTE hash[32];
 load_State:for(int n=0; n < 8; n++){

  istateREG.read(stateREG[n]);

 }
 load_data:for(int n=0; n<64;n++){

   idata.read(data[n]);

  }
 WORD a, b, c, d, e, f, g, h, i, j, t1, t2, m[64];
#pragma HLS ARRAY_PARTITION variable=m complete factor=8 dim=1
# 34 "sha256.cpp"


 convert_to_words:for (i = 0, j = 0; i < 16; ++i, j += 4)
#pragma HLS PIPELINE
# 36 "sha256.cpp"


  m[i] = (data[j] << 24) | (data[j + 1] << 16) | (data[j + 2] << 8) | (data[j + 3]);
 create_schedule:for ( ; i < 64; ++i)
#pragma HLS PIPELINE
# 39 "sha256.cpp"

  m[i] = ((((m[i - 2]) >> (17)) | ((m[i - 2]) << (32-(17)))) ^ (((m[i - 2]) >> (19)) | ((m[i - 2]) << (32-(19)))) ^ ((m[i - 2]) >> 10)) + m[i - 7] + ((((m[i - 15]) >> (7)) | ((m[i - 15]) << (32-(7)))) ^ (((m[i - 15]) >> (18)) | ((m[i - 15]) << (32-(18)))) ^ ((m[i - 15]) >> 3)) + m[i - 16];


 a = stateREG[0];
 b = stateREG[1];
 c = stateREG[2];
 d = stateREG[3];
 e = stateREG[4];
 f = stateREG[5];
 g = stateREG[6];
 h = stateREG[7];


 compression:for (i = 0; i < 64; ++i) {
#pragma HLS PIPELINE
# 53 "sha256.cpp"

  t1 = h + ((((e) >> (6)) | ((e) << (32-(6)))) ^ (((e) >> (11)) | ((e) << (32-(11)))) ^ (((e) >> (25)) | ((e) << (32-(25))))) + (((e) & (f)) ^ (~(e) & (g))) + k[i] + m[i];
  t2 = ((((a) >> (2)) | ((a) << (32-(2)))) ^ (((a) >> (13)) | ((a) << (32-(13)))) ^ (((a) >> (22)) | ((a) << (32-(22))))) + (((a) & (b)) ^ ((a) & (c)) ^ ((b) & (c)));
  h = g;
  g = f;
  f = e;
  e = d + t1;
  d = c;
  c = b;
  b = a;
  a = t1 + t2;
 }



 stateREG[0] += a;
 stateREG[1] += b;
 stateREG[2] += c;
 stateREG[3] += d;
 stateREG[4] += e;
 stateREG[5] += f;
 stateREG[6] += g;
 stateREG[7] += h;

 WORD r;




 convert_endianess:for (r = 0; r < 4; ++r) {
#pragma HLS PIPELINE II=4
# 82 "sha256.cpp"

  hash[r] = (stateREG[0] >> (24 - r * 8)) & 0x000000ff;
  hash[r + 4] = (stateREG[1] >> (24 - r * 8)) & 0x000000ff;
  hash[r + 8] = (stateREG[2] >> (24 - r * 8)) & 0x000000ff;
  hash[r + 12] = (stateREG[3] >> (24 - r * 8)) & 0x000000ff;
  hash[r + 16] = (stateREG[4] >> (24 - r * 8)) & 0x000000ff;
  hash[r + 20] = (stateREG[5] >> (24 - r * 8)) & 0x000000ff;
  hash[r + 24] = (stateREG[6] >> (24 - r * 8)) & 0x000000ff;
  hash[r + 28] = (stateREG[7] >> (24 - r * 8)) & 0x000000ff;
 }

 store_hash:for(int n=0; n < 32; n++){

   ohash.write(hash[n]);

   }


}
