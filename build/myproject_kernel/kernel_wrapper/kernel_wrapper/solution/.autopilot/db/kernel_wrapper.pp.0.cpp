# 1 "/home/ayvol/vitis_accel_backend_test/kernel_wrapper.cpp"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 361 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/etc/autopilot_ssdm_op.h" 1
# 108 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/etc/autopilot_ssdm_op.h"
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
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_CanReadReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_NbWriteReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_CanWriteReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));




    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_PrintNone(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_PrintInt(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_PrintDouble(...) __attribute__ ((nothrow)) __attribute__((overloadable));

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
# 1 "/home/ayvol/vitis_accel_backend_test/kernel_wrapper.cpp" 2
# 1 "/home/ayvol/vitis_accel_backend_test/kernel_wrapper.h" 1



# 1 "/home/ayvol/vitis_accel_backend_test/firmware/defines.h" 1



# 1 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed.h" 1








# 1 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_common.h" 1
# 41 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_common.h"
# 1 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_decl.h" 1
# 54 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_decl.h"
enum ap_q_mode {
  AP_RND,
  AP_RND_ZERO,
  AP_RND_MIN_INF,
  AP_RND_INF,
  AP_RND_CONV,
  AP_TRN,
  AP_TRN_ZERO,
};
# 76 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_decl.h"
enum ap_o_mode {
  AP_SAT,
  AP_SAT_ZERO,
  AP_SAT_SYM,
  AP_WRAP,
  AP_WRAP_SM,
};
# 133 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_decl.h"
template <int _AP_W, bool _AP_S>
struct ap_int_base;

template <int _AP_W>
struct ap_int;

template <int _AP_W>
struct ap_uint;

template <int _AP_W, bool _AP_S>
struct ap_range_ref;

template <int _AP_W, bool _AP_S>
struct ap_bit_ref;

template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2>
struct ap_concat_ref;

template <int _AP_W, int _AP_I, bool _AP_S = true, ap_q_mode _AP_Q = AP_TRN,
          ap_o_mode _AP_O = AP_WRAP, int _AP_N = 0>
struct ap_fixed_base;

template <int _AP_W, int _AP_I, ap_q_mode _AP_Q = AP_TRN,
          ap_o_mode _AP_O = AP_WRAP, int _AP_N = 0>
struct ap_fixed;

template <int _AP_W, int _AP_I, ap_q_mode _AP_Q = AP_TRN,
          ap_o_mode _AP_O = AP_WRAP, int _AP_N = 0>
struct ap_ufixed;

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
struct af_range_ref;

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
struct af_bit_ref;


enum BaseMode { AP_BIN = 2, AP_OCT = 8, AP_DEC = 10, AP_HEX = 16 };
# 187 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_decl.h"
typedef signed long long ap_slong;
typedef unsigned long long ap_ulong;


enum {
  _AP_SIZE_char = 8,
  _AP_SIZE_short = sizeof(short) * 8,
  _AP_SIZE_int = sizeof(int) * 8,
  _AP_SIZE_long = sizeof(long) * 8,
  _AP_SIZE_ap_slong = sizeof(ap_slong) * 8
};
# 42 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_common.h" 2
# 164 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_common.h"
enum { CHAR_IS_SIGNED = (char)-1 < 0 };


namespace _ap_type {
template <typename _Tp>
struct is_signed {
  static const bool value = _Tp(-1) < _Tp(1);
};

template <typename _Tp>
struct is_integral {
  static const bool value = false;
};





template <> struct is_integral<bool> { static const bool value = true; };
template <> struct is_integral<char> { static const bool value = true; };
template <> struct is_integral<signed char> { static const bool value = true; };
template <> struct is_integral<unsigned char> { static const bool value = true; };
template <> struct is_integral<short> { static const bool value = true; };
template <> struct is_integral<unsigned short> { static const bool value = true; };
template <> struct is_integral<int> { static const bool value = true; };
template <> struct is_integral<unsigned int> { static const bool value = true; };
template <> struct is_integral<long> { static const bool value = true; };
template <> struct is_integral<unsigned long> { static const bool value = true; };
template <> struct is_integral<ap_slong> { static const bool value = true; };
template <> struct is_integral<ap_ulong> { static const bool value = true; };


template <bool, typename _Tp = void>
struct enable_if {};

template <typename _Tp>
struct enable_if<true, _Tp> {
  typedef _Tp type;
};

template <typename _Tp>
struct remove_const {
  typedef _Tp type;
};

template <typename _Tp>
struct remove_const<_Tp const> {
  typedef _Tp type;
};
}
# 507 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_common.h"
template <int _AP_N, bool _AP_S>
struct ssdm_int;

template <int _AP_N>
struct ssdm_int<_AP_N, true> {
  typedef int __attribute__((bitwidth(_AP_N))) DataType;
  int V __attribute__((bitwidth(_AP_N)));
  inline __attribute__((always_inline)) ssdm_int<_AP_N, true>(){};
                inline __attribute__((always_inline)) ssdm_int<_AP_N, true>(int o __attribute__((bitwidth(_AP_N)))):V(o){};
};

template <int _AP_N>
struct ssdm_int<_AP_N, false> {
  typedef unsigned __attribute__((bitwidth(_AP_N))) DataType;
  unsigned V __attribute__((bitwidth(_AP_N)));
  inline __attribute__((always_inline)) ssdm_int<_AP_N, false>(){};
                inline __attribute__((always_inline)) ssdm_int<_AP_N, false>(unsigned o __attribute__((bitwidth(_AP_N)))):V(o){};
};
# 575 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_common.h"
# 1 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/etc/autopilot_ssdm_bits.h" 1
# 576 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_common.h" 2

extern "C" void _ssdm_string2bits(...);
# 587 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_common.h"
static inline unsigned char guess_radix(const char* s) {
  unsigned char rd = 10;
  const char* p = s;

  if (p[0] == '-' || p[0] == '+') ++p;

  if (p[0] == '0') {
    if (p[1] == 'b' || p[1] == 'B') {
      rd = 2;
    } else if (p[1] == 'o' || p[1] == 'O') {
      rd = 8;
    } else if (p[1] == 'x' || p[1] == 'X') {
      rd = 16;
    } else if (p[1] == 'd' || p[1] == 'D') {
      rd = 10;
    }
  }
  return rd;
}







typedef __fp16 half;
# 718 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_common.h"
inline __attribute__((always_inline)) ap_ulong doubleToRawBits(double pf) {
  union {
    ap_ulong __L;
    double __D;
  } LD;
  LD.__D = pf;
  return LD.__L;
}

inline __attribute__((always_inline)) unsigned int floatToRawBits(float pf) {
  union {
    unsigned int __L;
    float __D;
  } LD;
  LD.__D = pf;
  return LD.__L;
}

inline __attribute__((always_inline)) unsigned short halfToRawBits(half pf) {

  union {
    unsigned short __L;
    half __D;
  } LD;
  LD.__D = pf;
  return LD.__L;



}


inline __attribute__((always_inline)) double rawBitsToDouble(ap_ulong pi) {
  union {
    ap_ulong __L;
    double __D;
  } LD;
  LD.__L = pi;
  return LD.__D;
}


inline __attribute__((always_inline)) float rawBitsToFloat(unsigned long pi) {
  union {
    unsigned int __L;
    float __D;
  } LD;
  LD.__L = pi;
  return LD.__D;
}


inline __attribute__((always_inline)) half rawBitsToHalf(unsigned short pi) {

  union {
    unsigned short __L;
    half __D;
  } LD;
  LD.__L = pi;
  return LD.__D;






}
# 10 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed.h" 2
# 1 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h" 1
# 16 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h"
# 1 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int.h" 1
# 11 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int.h"
# 1 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h" 1
# 40 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
template <int _AP_N, bool _AP_S>
struct retval;


template <int _AP_N>
struct retval<_AP_N, true> {
  typedef ap_slong Type;
};

template <int _AP_N>
struct retval<_AP_N, false> {
  typedef ap_ulong Type;
};


template <>
struct retval<1, true> {
  typedef signed char Type;
};

template <>
struct retval<1, false> {
  typedef unsigned char Type;
};


template <>
struct retval<2, true> {
  typedef short Type;
};

template <>
struct retval<2, false> {
  typedef unsigned short Type;
};


template <>
struct retval<3, true> {
  typedef long Type;
};

template <>
struct retval<3, false> {
  typedef unsigned long Type;
};

template <>
struct retval<4, true> {
  typedef long Type;
};

template <>
struct retval<4, false> {
  typedef unsigned long Type;
};




template <int _AP_W2, bool _AP_S2>
struct _ap_int_factory;
template <int _AP_W2>
struct _ap_int_factory<_AP_W2,true> { typedef ap_int<_AP_W2> type; };
template <int _AP_W2>
struct _ap_int_factory<_AP_W2,false> { typedef ap_uint<_AP_W2> type; };

template <int _AP_W, bool _AP_S>
struct ap_int_base : public ssdm_int<_AP_W, _AP_S> {
 private:
                inline __attribute__((always_inline)) int countLeadingOnes() const {




    return 0;

  }

 public:
  typedef ssdm_int<_AP_W, _AP_S> Base;







  typedef typename retval<(((_AP_W + 7) / 8) > (8) ? ((_AP_W + 7) / 8) : (8)), _AP_S>::Type RetType;

  static const int width = _AP_W;
  static const bool sign_flag = _AP_S;

  template <int _AP_W2, bool _AP_S2>
  struct RType {
    enum {
      mult_w = _AP_W + _AP_W2,
      mult_s = _AP_S || _AP_S2,
      plus_w =
          ((_AP_W + (_AP_S2 && !_AP_S)) > (_AP_W2 + (_AP_S && !_AP_S2)) ? (_AP_W + (_AP_S2 && !_AP_S)) : (_AP_W2 + (_AP_S && !_AP_S2))) + 1,
      plus_s = _AP_S || _AP_S2,
      minus_w =
          ((_AP_W + (_AP_S2 && !_AP_S)) > (_AP_W2 + (_AP_S && !_AP_S2)) ? (_AP_W + (_AP_S2 && !_AP_S)) : (_AP_W2 + (_AP_S && !_AP_S2))) + 1,
      minus_s = true,
      div_w = _AP_W + _AP_S2,
      div_s = _AP_S || _AP_S2,
      mod_w = ((_AP_W) < (_AP_W2 + (!_AP_S2 && _AP_S)) ? (_AP_W) : (_AP_W2 + (!_AP_S2 && _AP_S))),
      mod_s = _AP_S,
      logic_w = ((_AP_W + (_AP_S2 && !_AP_S)) > (_AP_W2 + (_AP_S && !_AP_S2)) ? (_AP_W + (_AP_S2 && !_AP_S)) : (_AP_W2 + (_AP_S && !_AP_S2))),
      logic_s = _AP_S || _AP_S2
    };


    typedef ap_int_base<mult_w, mult_s> mult_base;
    typedef ap_int_base<plus_w, plus_s> plus_base;
    typedef ap_int_base<minus_w, minus_s> minus_base;
    typedef ap_int_base<logic_w, logic_s> logic_base;
    typedef ap_int_base<div_w, div_s> div_base;
    typedef ap_int_base<mod_w, mod_s> mod_base;
    typedef ap_int_base<_AP_W, _AP_S> arg1_base;

    typedef typename _ap_int_factory<mult_w, mult_s>::type mult;
    typedef typename _ap_int_factory<plus_w, plus_s>::type plus;
    typedef typename _ap_int_factory<minus_w, minus_s>::type minus;
    typedef typename _ap_int_factory<logic_w, logic_s>::type logic;
    typedef typename _ap_int_factory<div_w, div_s>::type div;
    typedef typename _ap_int_factory<mod_w, mod_s>::type mod;
    typedef typename _ap_int_factory<_AP_W, _AP_S>::type arg1;
    typedef bool reduce;
  };





  inline __attribute__((always_inline)) ap_int_base() {





  }


  template <int _AP_W2, bool _AP_S2>
                inline __attribute__((always_inline)) ap_int_base(const ap_int_base<_AP_W2, _AP_S2>& op):Base(op.V) {
    Base::V = op.V;
  }


  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_int_base(const volatile ap_int_base<_AP_W2, _AP_S2>& op) {
    Base::V = op.V;
  }
# 208 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
  inline __attribute__((always_inline)) ap_int_base(const bool op):Base(op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const char op):Base(op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const signed char op):Base(op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const unsigned char op):Base(op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const short op):Base(op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const unsigned short op):Base(op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const int op):Base(op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const unsigned int op):Base(op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const long op):Base(op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const unsigned long op):Base(op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const ap_slong op):Base(op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const ap_ulong op):Base(op) { Base::V = op; }




  inline __attribute__((always_inline)) ap_int_base(half op) {
    ap_int_base<_AP_W, _AP_S> t((float)op);
    Base::V = t.V;
  }


  inline __attribute__((always_inline)) ap_int_base(float op) {
    const int BITS = 23 + 8 + 1;
    ap_int_base<BITS, false> reg;
    reg.V = floatToRawBits(op);
    bool is_neg = ({ __typeof__(reg.V) __Val2__ = reg.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), BITS - 1); __Result__; });

    ap_int_base<8 + 1, true> exp = 0;
    exp.V = ({ typename _ap_type::remove_const<__typeof__(reg.V)>::type __Result__ = 0; __typeof__(reg.V) __Val2__ = reg.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 23, BITS - 2); __Result__; });
    exp = exp - ((1L << (8 - 1L)) - 1L);

    ap_int_base<23 + 2, true> man;
    man.V = ({ typename _ap_type::remove_const<__typeof__(reg.V)>::type __Result__ = 0; __typeof__(reg.V) __Val2__ = reg.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, 23 - 1); __Result__; });

    (static_cast<void>(0));


    man.V = ({ typename _ap_type::remove_const<__typeof__(man.V)>::type __Result__ = 0; __typeof__(man.V) __Val2__ = man.V; __typeof__(1) __Repl2__ = !!1; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), 23, 23); __Result__; });


    if ((reg.V & 0x7ffffffful) == 0) {
      Base::V = 0;
    } else {
      int sh_amt = 23 - exp.V;
      if (sh_amt == 0) {
        Base::V = man.V;
      } else if (sh_amt > 0) {
        if (sh_amt < 23 + 2) {
          ap_int_base<23 + 2, true> man_shift;
          man_shift.V = (man.V >> sh_amt);






          Base::V = man_shift.V;
        } else {



            Base::V = 0;
        }
      } else {
        sh_amt = -sh_amt;
        if (sh_amt < _AP_W) {
          Base::V = man.V;
          Base::V <<= sh_amt;
        } else {



          Base::V = 0;
        }
      }
    }
    if (is_neg) *this = -(*this);
  }


  inline __attribute__((always_inline)) ap_int_base(double op) {
    const int BITS = 52 + 11 + 1;
    ap_int_base<BITS, false> reg;
    reg.V = doubleToRawBits(op);
    bool is_neg = ({ __typeof__(reg.V) __Val2__ = reg.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), BITS - 1); __Result__; });

    ap_int_base<11 + 1, true> exp = 0;
    exp.V = ({ typename _ap_type::remove_const<__typeof__(reg.V)>::type __Result__ = 0; __typeof__(reg.V) __Val2__ = reg.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 52, BITS - 2); __Result__; });
    exp = exp - ((1L << (11 - 1L)) - 1L);

    ap_int_base<52 + 2, true> man;
    man.V = ({ typename _ap_type::remove_const<__typeof__(reg.V)>::type __Result__ = 0; __typeof__(reg.V) __Val2__ = reg.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, 52 - 1); __Result__; });

    (static_cast<void>(0));


    man.V = ({ typename _ap_type::remove_const<__typeof__(man.V)>::type __Result__ = 0; __typeof__(man.V) __Val2__ = man.V; __typeof__(1) __Repl2__ = !!1; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), 52, 52); __Result__; });


    if ((reg.V & 0x7fffffffffffffffull) == 0) {
      Base::V = 0;
    } else {
      int sh_amt = 52 - exp.V;
      if (sh_amt == 0) {
        Base::V = man.V;
      } else if (sh_amt > 0) {
        if (sh_amt < 52 + 2) {
          ap_int_base<23 + 2, true> man_shift;
          man_shift.V = (man.V >> sh_amt);






          Base::V = man_shift.V;
        } else {



           Base::V = 0;
        }
      } else {
        sh_amt = -sh_amt;
        if (sh_amt < _AP_W) {
          Base::V = man.V;
          Base::V <<= sh_amt;
        } else {



          Base::V = 0;
        }
      }
    }
    if (is_neg) *this = -(*this);
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
                      inline __attribute__((always_inline)) ap_int_base(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
    op.checkOverflowCsimFix(_AP_W, _AP_S);
    Base::V = op.to_ap_int_base().V;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_int_base(const ap_range_ref<_AP_W2, _AP_S2>& ref) {
    Base::V = (ref.get()).V;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_int_base(const ap_bit_ref<_AP_W2, _AP_S2>& ref) {
    Base::V = ref.operator bool();
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_int_base(const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& ref) {
    const ap_int_base<ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>::_AP_WR,
                      false>
        tmp = ref.get();
    Base::V = tmp.V;
  }
# 385 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
  inline __attribute__((always_inline)) ap_int_base(const char* s) {
    __typeof__(Base::V) t;
    _ssdm_string2bits((void*)(&t), (const char*)(s), 10, _AP_W, _AP_S,
                      AP_TRN, AP_WRAP, 0, true);
    Base::V = t;
  }
  inline __attribute__((always_inline)) ap_int_base(const char* s, signed char rd) {
    __typeof__(Base::V) t;
    _ssdm_string2bits((void*)(&t), (const char*)(s), rd, _AP_W, _AP_S,
                      AP_TRN, AP_WRAP, 0, true);
    Base::V = t;
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_int_base(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& val) {
    Base::V = (val.get()).V;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_int_base(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& val) {
    Base::V = val.operator bool();
  }

  inline __attribute__((always_inline)) ap_int_base read() volatile {

    ap_int_base ret;
    ret.V = Base::V;
    return ret;
  }

  inline __attribute__((always_inline)) void write(const ap_int_base<_AP_W, _AP_S>& op2) volatile {

    *((volatile typename Base::DataType *)(&(Base::V))) = op2.V;
  }


  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) void operator=(
      const volatile ap_int_base<_AP_W2, _AP_S2>& op2) volatile {
    *((volatile typename Base::DataType *)(&(Base::V))) = op2.V;
  }

  inline __attribute__((always_inline)) void operator=(
      const volatile ap_int_base<_AP_W, _AP_S>& op2) volatile {
    *((volatile typename Base::DataType *)(&(Base::V))) = op2.V;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) void operator=(const ap_int_base<_AP_W2, _AP_S2>& op2) volatile {
    *((volatile typename Base::DataType *)(&(Base::V))) = op2.V;
  }

  inline __attribute__((always_inline)) void operator=(const ap_int_base<_AP_W, _AP_S>& op2) volatile {
    *((volatile typename Base::DataType *)(&(Base::V))) = op2.V;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_int_base& operator=(
      const volatile ap_int_base<_AP_W2, _AP_S2>& op2) {
    Base::V = op2.V;
    return *this;
  }

  template <int _AP_W2, bool _AP_S2>
                inline __attribute__((always_inline)) ap_int_base& operator=(const ap_int_base<_AP_W2, _AP_S2>& op2) {
    Base::V = op2.V;
    return *this;
  }

  inline __attribute__((always_inline)) ap_int_base& operator=(const volatile ap_int_base<_AP_W, _AP_S>& op2) {
    Base::V = op2.V;
    return *this;
  }


  ap_int_base& operator=(const ap_int_base<_AP_W, _AP_S>& op2) = default;
# 479 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
  inline __attribute__((always_inline)) ap_int_base& operator=(bool op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(char op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(signed char op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(unsigned char op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(short op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(unsigned short op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(int op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(unsigned int op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(long op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(unsigned long op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(ap_slong op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(ap_ulong op) { Base::V = op; return *this; }



  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_int_base& operator=(const ap_bit_ref<_AP_W2, _AP_S2>& op2) {
    Base::V = (bool)op2;
    return *this;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_int_base& operator=(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    Base::V = (ap_int_base<_AP_W2, false>(op2)).V;
    return *this;
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_int_base& operator=(
      const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& op2) {
    Base::V = op2.get().V;
    return *this;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_int_base& operator=(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
    Base::V = op.to_ap_int_base().V;
    return *this;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_int_base& operator=(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
    Base::V = (bool)op;
    return *this;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_int_base& operator=(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
    Base::V = ((const ap_int_base<_AP_W2, false>)(op)).V;
    return *this;
  }





                inline __attribute__((always_inline)) operator RetType() const { return (RetType)(Base::V); }




                inline __attribute__((always_inline)) bool to_bool() const { return (bool)(Base::V); }
                inline __attribute__((always_inline)) char to_char() const { return (char)(Base::V); }
                inline __attribute__((always_inline)) signed char to_schar() const { return (signed char)(Base::V); }
                inline __attribute__((always_inline)) unsigned char to_uchar() const { return (unsigned char)(Base::V); }
                inline __attribute__((always_inline)) short to_short() const { return (short)(Base::V); }
                inline __attribute__((always_inline)) unsigned short to_ushort() const { return (unsigned short)(Base::V); }
                inline __attribute__((always_inline)) int to_int() const { return (int)(Base::V); }
                inline __attribute__((always_inline)) unsigned to_uint() const { return (unsigned)(Base::V); }
                inline __attribute__((always_inline)) long to_long() const { return (long)(Base::V); }
                inline __attribute__((always_inline)) unsigned long to_ulong() const { return (unsigned long)(Base::V); }
                inline __attribute__((always_inline)) ap_slong to_int64() const { return (ap_slong)(Base::V); }
                inline __attribute__((always_inline)) ap_ulong to_uint64() const { return (ap_ulong)(Base::V); }
  inline __attribute__((always_inline)) half to_half() const { return (float)(Base::V); }
                inline __attribute__((always_inline)) float to_float() const { return (float)(Base::V); }
                inline __attribute__((always_inline)) double to_double() const { return (double)(Base::V); }
# 584 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
  inline __attribute__((always_inline)) int length() const volatile { return _AP_W; }
                inline __attribute__((always_inline)) int length() const { return _AP_W; }


                inline __attribute__((always_inline)) bool iszero() const { return Base::V == 0; }


                inline __attribute__((always_inline)) bool is_zero() const { return Base::V == 0; }


                      inline __attribute__((always_inline)) bool sign() const {
    if (_AP_S &&
        ({ __typeof__(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; }))
      return true;
    else
      return false;
  }


  inline __attribute__((always_inline)) void clear(int i) {
                                                           ;
    Base::V = ({ typename _ap_type::remove_const<__typeof__(Base::V)>::type __Result__ = 0; __typeof__(Base::V) __Val2__ = Base::V; __typeof__(0) __Repl2__ = !!0; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), i, i); __Result__; });
  }


  inline __attribute__((always_inline)) void invert(int i) {
                                                           ;
    bool val = ({ __typeof__(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), i); __Result__; });
    if (val)
      Base::V = ({ typename _ap_type::remove_const<__typeof__(Base::V)>::type __Result__ = 0; __typeof__(Base::V) __Val2__ = Base::V; __typeof__(0) __Repl2__ = !!0; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), i, i); __Result__; });
    else
      Base::V = ({ typename _ap_type::remove_const<__typeof__(Base::V)>::type __Result__ = 0; __typeof__(Base::V) __Val2__ = Base::V; __typeof__(1) __Repl2__ = !!1; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), i, i); __Result__; });
  }

  inline __attribute__((always_inline)) bool test(int i) const {
                                                           ;
    return ({ __typeof__(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), i); __Result__; });
  }


                inline __attribute__((always_inline)) ap_int_base& get() { return *this; }


  inline __attribute__((always_inline)) void set(int i) {
                                                           ;
    Base::V = ({ typename _ap_type::remove_const<__typeof__(Base::V)>::type __Result__ = 0; __typeof__(Base::V) __Val2__ = Base::V; __typeof__(1) __Repl2__ = !!1; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), i, i); __Result__; });
  }


  inline __attribute__((always_inline)) void set(int i, bool v) {
                                                           ;
    Base::V = ({ typename _ap_type::remove_const<__typeof__(Base::V)>::type __Result__ = 0; __typeof__(Base::V) __Val2__ = Base::V; __typeof__(v) __Repl2__ = !!v; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), i, i); __Result__; });
  }



  inline __attribute__((always_inline)) ap_int_base& lrotate(int n) {
                                                              ;


    __typeof__(Base::V) l_p = Base::V << n;
    __typeof__(Base::V) r_p = Base::V >> (_AP_W - n);
    Base::V = l_p | r_p;



    return *this;
  }



  inline __attribute__((always_inline)) ap_int_base& rrotate(int n) {
                                                              ;


    __typeof__(Base::V) l_p = Base::V << (_AP_W - n);
    __typeof__(Base::V) r_p = Base::V >> n;
    Base::V = l_p | r_p;



    return *this;
  }



  inline __attribute__((always_inline)) ap_int_base& reverse() {
    Base::V = ({ typename _ap_type::remove_const<__typeof__(Base::V)>::type __Result__ = 0; __typeof__(Base::V) __Val2__ = Base::V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), _AP_W - 1, 0); __Result__; });
    return *this;
  }


  inline __attribute__((always_inline)) void set_bit(int i, bool v) {
    Base::V = ({ typename _ap_type::remove_const<__typeof__(Base::V)>::type __Result__ = 0; __typeof__(Base::V) __Val2__ = Base::V; __typeof__(v) __Repl2__ = !!v; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), i, i); __Result__; });
  }


  inline __attribute__((always_inline)) bool get_bit(int i) const {
    return (bool)({ __typeof__(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), i); __Result__; });
  }


  inline __attribute__((always_inline)) void b_not() { Base::V = ~Base::V; }

  template<typename T>
                inline __attribute__((always_inline)) void checkOverflowBaseC(T val) {
# 755 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
    (void)val;

    return;
  }

                inline __attribute__((always_inline)) bool checkOverflowCsim(int _ap_w2, bool _ap_s2,
          bool print = true) const {
# 805 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
      (void)_ap_w2;
      (void)_ap_s2;
      (void)print;

      return 0;
  }
# 839 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
  template <int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base& operator *=(const ap_int_base<_AP_W2, _AP_S2>& op2) { Base::V *= op2.V; return *this; }
  template <int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base& operator +=(const ap_int_base<_AP_W2, _AP_S2>& op2) { Base::V += op2.V; return *this; }
  template <int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base& operator -=(const ap_int_base<_AP_W2, _AP_S2>& op2) { Base::V -= op2.V; return *this; }
  template <int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base& operator /=(const ap_int_base<_AP_W2, _AP_S2>& op2) { Base::V /= op2.V; return *this; }
  template <int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base& operator %=(const ap_int_base<_AP_W2, _AP_S2>& op2) { Base::V %= op2.V; return *this; }
# 857 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
  template <int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base& operator &=(const ap_int_base<_AP_W2, _AP_S2>& op2) { (static_cast<void>(0)); Base::V &= op2.V; return *this; }
  template <int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base& operator |=(const ap_int_base<_AP_W2, _AP_S2>& op2) { (static_cast<void>(0)); Base::V |= op2.V; return *this; }
  template <int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base& operator ^=(const ap_int_base<_AP_W2, _AP_S2>& op2) { (static_cast<void>(0)); Base::V ^= op2.V; return *this; }





  inline __attribute__((always_inline)) ap_int_base& operator++() {
    operator+=((ap_int_base<1, false>)1);
    return *this;
  }
  inline __attribute__((always_inline)) ap_int_base& operator--() {
    operator-=((ap_int_base<1, false>)1);
    return *this;
  }




  inline __attribute__((always_inline)) const typename RType<_AP_W,_AP_S>::arg1 operator++(int) {
    ap_int_base t = *this;
    operator+=((ap_int_base<1, false>)1);
    return t;
  }
  inline __attribute__((always_inline)) const typename RType<_AP_W,_AP_S>::arg1 operator--(int) {
    ap_int_base t = *this;
    operator-=((ap_int_base<1, false>)1);
    return t;
  }




                inline __attribute__((always_inline)) typename RType<_AP_W,_AP_S>::arg1 operator+() const { return *this; }


                inline __attribute__((always_inline)) typename RType<1, false>::minus operator-() const {
    return ap_int_base<1, false>(0) - *this;
  }




                inline __attribute__((always_inline)) bool operator!() const { return Base::V == 0; }





                inline __attribute__((always_inline)) typename RType<_AP_W,_AP_S>::arg1 operator~() const {
    ap_int_base<_AP_W, _AP_S> r(0);
    r.V = ~Base::V;
    return r;
  }




  template <int _AP_W2>
                      inline __attribute__((always_inline)) typename RType<_AP_W,_AP_S>::arg1 operator<<(const ap_int_base<_AP_W2, true>& op2) const {
    bool isNeg = ({ __typeof__(op2.V) __Val2__ = op2.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W2 - 1); __Result__; });
    ap_int_base<_AP_W2, false> sh = op2;
    if (isNeg) {
      sh = -op2;
      return operator>>(sh);
    } else
      return operator<<(sh);
  }

  template <int _AP_W2>
                      inline __attribute__((always_inline)) typename RType<_AP_W,_AP_S>::arg1 operator<<(const ap_int_base<_AP_W2, false>& op2) const {
    ap_int_base r(0);
    r.V = Base::V << op2.to_uint();
    return r;
  }

  template <int _AP_W2>
                      inline __attribute__((always_inline)) typename RType<_AP_W,_AP_S>::arg1 operator>>(const ap_int_base<_AP_W2, true>& op2) const {
    bool isNeg = ({ __typeof__(op2.V) __Val2__ = op2.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W2 - 1); __Result__; });
    ap_int_base<_AP_W2, false> sh = op2;
    if (isNeg) {
      sh = -op2;
      return operator<<(sh);
    }
    return operator>>(sh);
  }

  template <int _AP_W2>
                      inline __attribute__((always_inline)) typename RType<_AP_W,_AP_S>::arg1 operator>>(const ap_int_base<_AP_W2, false>& op2) const {
    ap_int_base r(0);
    r.V = Base::V >> op2.to_uint();
    return r;
  }
# 968 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
  template <int _AP_W2>
                      inline __attribute__((always_inline)) ap_int_base& operator<<=(const ap_int_base<_AP_W2, true>& op2) {
    bool isNeg = ({ __typeof__(op2.V) __Val2__ = op2.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W2 - 1); __Result__; });
    ap_int_base<_AP_W2, false> sh = op2;
    if (isNeg) {
      sh = -op2;
      return operator>>=(sh);
    } else
      return operator<<=(sh);
  }

  template <int _AP_W2>
                      inline __attribute__((always_inline)) ap_int_base& operator<<=(const ap_int_base<_AP_W2, false>& op2) {
    Base::V <<= op2.to_uint();
    return *this;
  }

  template <int _AP_W2>
                      inline __attribute__((always_inline)) ap_int_base& operator>>=(const ap_int_base<_AP_W2, true>& op2) {
    bool isNeg = ({ __typeof__(op2.V) __Val2__ = op2.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W2 - 1); __Result__; });
    ap_int_base<_AP_W2, false> sh = op2;
    if (isNeg) {
      sh = -op2;
      return operator<<=(sh);
    }
    return operator>>=(sh);
  }

  template <int _AP_W2>
                      inline __attribute__((always_inline)) ap_int_base& operator>>=(const ap_int_base<_AP_W2, false>& op2) {
    Base::V >>= op2.to_uint();
    return *this;
  }
# 1017 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
  template <int _AP_W2, bool _AP_S2>
                inline __attribute__((always_inline)) bool operator==(const ap_int_base<_AP_W2, _AP_S2>& op2) const {
    return Base::V == op2.V;
  }
  template <int _AP_W2, bool _AP_S2>
                inline __attribute__((always_inline)) bool operator!=(const ap_int_base<_AP_W2, _AP_S2>& op2) const {
    return !(Base::V == op2.V);
  }
  template <int _AP_W2, bool _AP_S2>
                inline __attribute__((always_inline)) bool operator<(const ap_int_base<_AP_W2, _AP_S2>& op2) const {
    return Base::V < op2.V;
  }
  template <int _AP_W2, bool _AP_S2>
                inline __attribute__((always_inline)) bool operator>=(const ap_int_base<_AP_W2, _AP_S2>& op2) const {
    return Base::V >= op2.V;
  }
  template <int _AP_W2, bool _AP_S2>
                inline __attribute__((always_inline)) bool operator>(const ap_int_base<_AP_W2, _AP_S2>& op2) const {
    return Base::V > op2.V;
  }
  template <int _AP_W2, bool _AP_S2>
                inline __attribute__((always_inline)) bool operator<=(const ap_int_base<_AP_W2, _AP_S2>& op2) const {
    return Base::V <= op2.V;
  }




  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S> range(int Hi, int Lo) {
    (static_cast<void>(0));
    (static_cast<void>(0));
    return ap_range_ref<_AP_W, _AP_S>(this, Hi, Lo);
  }


  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S> range(int Hi, int Lo) const {
    (static_cast<void>(0));
    (static_cast<void>(0));
    return ap_range_ref<_AP_W, _AP_S>(const_cast<ap_int_base*>(this), Hi, Lo);
  }

  template <int _AP_W2, bool _AP_S2, int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S> range(
      const ap_int_base<_AP_W2, _AP_S2>& HiIdx,
      const ap_int_base<_AP_W3, _AP_S3>& LoIdx) {
    int Hi = HiIdx.to_int();
    int Lo = LoIdx.to_int();
    return this->range(Hi, Lo);
  }

  template <int _AP_W2, bool _AP_S2, int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S> range(
      const ap_int_base<_AP_W2, _AP_S2>& HiIdx,
      const ap_int_base<_AP_W3, _AP_S3>& LoIdx) const {
    int Hi = HiIdx.to_int();
    int Lo = LoIdx.to_int();
    return this->range(Hi, Lo);
  }

  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S> range() {
    return this->range(_AP_W - 1, 0);
  }

  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S> range() const {
    return this->range(_AP_W - 1, 0);
  }

  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S> operator()(int Hi, int Lo) {
    return this->range(Hi, Lo);
  }

  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S> operator()(int Hi, int Lo) const {
    return this->range(Hi, Lo);
  }

  template <int _AP_W2, bool _AP_S2, int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S> operator()(
      const ap_int_base<_AP_W2, _AP_S2>& HiIdx,
      const ap_int_base<_AP_W3, _AP_S3>& LoIdx) {
    int Hi = HiIdx.to_int();
    int Lo = LoIdx.to_int();
    return this->range(Hi, Lo);
  }

  template <int _AP_W2, bool _AP_S2, int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S> operator()(
      const ap_int_base<_AP_W2, _AP_S2>& HiIdx,
      const ap_int_base<_AP_W3, _AP_S3>& LoIdx) const {
    int Hi = HiIdx.to_int();
    int Lo = LoIdx.to_int();
    return this->range(Hi, Lo);
  }
# 1126 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
  inline __attribute__((always_inline)) ap_bit_ref<_AP_W, _AP_S> operator[](int index) {
                                                                       ;
                                                                 ;
    ap_bit_ref<_AP_W, _AP_S> bvh(this, index);
    return bvh;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_bit_ref<_AP_W, _AP_S> operator[](
      const ap_int_base<_AP_W2, _AP_S2>& index) {
                                                                       ;
                                                                 ;
    ap_bit_ref<_AP_W, _AP_S> bvh(this, index.to_int());
    return bvh;
  }

  inline __attribute__((always_inline)) bool operator[](int index) const {
                                                                       ;
                                                                 ;
    ap_bit_ref<_AP_W, _AP_S> br(this, index);
    return br.to_bool();
  }
  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator[](const ap_int_base<_AP_W2, _AP_S2>& index) const {
                                                                 ;
    ap_bit_ref<_AP_W, _AP_S> br(this, index.to_int());
    return br.to_bool();
  }

  inline __attribute__((always_inline)) ap_bit_ref<_AP_W, _AP_S> bit(int index) {
                                                                       ;
                                                                 ;
    ap_bit_ref<_AP_W, _AP_S> bvh(this, index);
    return bvh;
  }
  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_bit_ref<_AP_W, _AP_S> bit(
      const ap_int_base<_AP_W2, _AP_S2>& index) {
                                                                       ;
                                                                 ;
    ap_bit_ref<_AP_W, _AP_S> bvh(this, index.to_int());
    return bvh;
  }

  inline __attribute__((always_inline)) bool bit(int index) const {
                                                                       ;
                                                                 ;
    ap_bit_ref<_AP_W, _AP_S> br(this, index);
    return br.to_bool();
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool bit(const ap_int_base<_AP_W2, _AP_S2>& index) const {
    return bit(index.to_int());
  }
# 1193 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
                inline __attribute__((always_inline)) int countLeadingZeros() const {

    if (_AP_W <= 32) {
      ap_int_base<32, false> t(-1UL), x;
      x.V = ({ typename _ap_type::remove_const<__typeof__(this->V)>::type __Result__ = 0; __typeof__(this->V) __Val2__ = this->V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), _AP_W - 1, 0); __Result__; });
      t.V = ({ typename _ap_type::remove_const<__typeof__(t.V)>::type __Result__ = 0; __typeof__(t.V) __Val2__ = t.V; __typeof__(x.V) __Repl2__ = x.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), 0, _AP_W - 1); __Result__; });
      return __builtin_ctz(t.V);
    } else if (_AP_W <= 64) {
      ap_int_base<64, false> t(-1ULL);
      ap_int_base<64, false> x;
      x.V = ({ typename _ap_type::remove_const<__typeof__(this->V)>::type __Result__ = 0; __typeof__(this->V) __Val2__ = this->V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), _AP_W - 1, 0); __Result__; });
      t.V = ({ typename _ap_type::remove_const<__typeof__(t.V)>::type __Result__ = 0; __typeof__(t.V) __Val2__ = t.V; __typeof__(x.V) __Repl2__ = x.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), 0, _AP_W - 1); __Result__; });
      return __builtin_ctzll(t.V);
    } else {
      enum { __N = (_AP_W + 63) / 64 };
      int NZeros = 0;
      int i = 0;
      bool hitNonZero = false;
      VITIS_LOOP_1211_1: for (i = 0; i < __N - 1; ++i) {
        ap_int_base<64, false> t;
        t.V = ({ typename _ap_type::remove_const<__typeof__(this->V)>::type __Result__ = 0; __typeof__(this->V) __Val2__ = this->V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), _AP_W - i * 64 - 64, _AP_W - i * 64 - 1); __Result__; });
        NZeros += hitNonZero ? 0 : __builtin_clzll(t.V);
        hitNonZero |= (t.V != 0);
      }
      if (!hitNonZero) {
        ap_int_base<64, false> t(-1ULL);
        enum { REST = (_AP_W - 1) % 64 };
        ap_int_base<64, false> x;
        x.V = ({ typename _ap_type::remove_const<__typeof__(this->V)>::type __Result__ = 0; __typeof__(this->V) __Val2__ = this->V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, REST); __Result__; });
        t.V = ({ typename _ap_type::remove_const<__typeof__(t.V)>::type __Result__ = 0; __typeof__(t.V) __Val2__ = t.V; __typeof__(x.V) __Repl2__ = x.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), 63 - REST, 63); __Result__; });
        NZeros += __builtin_clzll(t.V);
      }
      return NZeros;
    }



  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_int_base, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  concat(const ap_int_base<_AP_W2, _AP_S2>& a2) const {
    return ap_concat_ref<_AP_W, ap_int_base, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(
        const_cast<ap_int_base<_AP_W, _AP_S>&>(*this),
        const_cast<ap_int_base<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_int_base, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  concat(ap_int_base<_AP_W2, _AP_S2>& a2) {
    return ap_concat_ref<_AP_W, ap_int_base, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(*this, a2);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, ap_int_base, _AP_W2, ap_range_ref<_AP_W2, _AP_S2> >
      operator,(const ap_range_ref<_AP_W2, _AP_S2> &a2) const {
    return ap_concat_ref<_AP_W, ap_int_base, _AP_W2,
                         ap_range_ref<_AP_W2, _AP_S2> >(
        const_cast<ap_int_base<_AP_W, _AP_S>&>(*this),
        const_cast<ap_range_ref<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, ap_int_base, _AP_W2, ap_range_ref<_AP_W2, _AP_S2> >
      operator,(ap_range_ref<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<_AP_W, ap_int_base, _AP_W2,
                         ap_range_ref<_AP_W2, _AP_S2> >(*this, a2);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_int_base, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  operator,(const ap_int_base<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<_AP_W, ap_int_base, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_int_base<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_int_base, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  operator,(ap_int_base<_AP_W2, _AP_S2> &a2) const {
    return ap_concat_ref<_AP_W, ap_int_base, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(
        const_cast<ap_int_base<_AP_W, _AP_S>&>(*this), a2);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_int_base, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  operator,(const ap_int_base<_AP_W2, _AP_S2> &a2) const {
    return ap_concat_ref<_AP_W, ap_int_base, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(
        const_cast<ap_int_base<_AP_W, _AP_S>&>(*this),
        const_cast<ap_int_base<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_int_base, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  operator,(ap_int_base<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<_AP_W, ap_int_base, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(*this, a2);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_int_base, 1, ap_bit_ref<_AP_W2, _AP_S2> >
  operator,(const ap_bit_ref<_AP_W2, _AP_S2> &a2) const {
    return ap_concat_ref<_AP_W, ap_int_base, 1, ap_bit_ref<_AP_W2, _AP_S2> >(
        const_cast<ap_int_base<_AP_W, _AP_S>&>(*this),
        const_cast<ap_bit_ref<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_int_base, 1, ap_bit_ref<_AP_W2, _AP_S2> >
  operator,(ap_bit_ref<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<_AP_W, ap_int_base, 1, ap_bit_ref<_AP_W2, _AP_S2> >(
        *this, a2);
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_int_base, _AP_W2 + _AP_W3,
                       ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >
  operator,(const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> &a2) {
    return ap_concat_ref<_AP_W, ap_int_base, _AP_W2 + _AP_W3,
                         ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >(
        const_cast<ap_int_base<_AP_W, _AP_S>&>(*this),
        const_cast<ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>&>(a2));
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_int_base, _AP_W2 + _AP_W3,
                       ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >
  operator,(ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> &a2) {
    return ap_concat_ref<_AP_W, ap_int_base, _AP_W2 + _AP_W3,
                         ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >(*this,
                                                                         a2);
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_concat_ref<
      _AP_W, ap_int_base, _AP_W2,
      af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >
  operator,(const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>
                &a2) const {
    return ap_concat_ref<
        _AP_W, ap_int_base, _AP_W2,
        af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >(
        const_cast<ap_int_base<_AP_W, _AP_S>&>(*this),
        const_cast<
            af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&>(a2));
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_concat_ref<
      _AP_W, ap_int_base, _AP_W2,
      af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >
  operator,(af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> &a2) {
    return ap_concat_ref<
        _AP_W, ap_int_base, _AP_W2,
        af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >(*this,
                                                                       a2);
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, ap_int_base, 1,
                    af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >
      operator,(const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>
                    &a2) const {
    return ap_concat_ref<
        _AP_W, ap_int_base, 1,
        af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >(
        const_cast<ap_int_base<_AP_W, _AP_S>&>(*this),
        const_cast<af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&>(
            a2));
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, ap_int_base, 1,
                    af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >
      operator,(
          af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> &a2) {
    return ap_concat_ref<
        _AP_W, ap_int_base, 1,
        af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >(*this, a2);
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_int_base<((_AP_W2 + _AP_W3) > (_AP_W) ? (_AP_W2 + _AP_W3) : (_AP_W)), _AP_S> operator&(
      const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& a2) {
    return *this & a2.get();
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_int_base<((_AP_W2 + _AP_W3) > (_AP_W) ? (_AP_W2 + _AP_W3) : (_AP_W)), _AP_S> operator|(
      const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& a2) {
    return *this | a2.get();
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_int_base<((_AP_W2 + _AP_W3) > (_AP_W) ? (_AP_W2 + _AP_W3) : (_AP_W)), _AP_S> operator^(
      const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& a2) {
    return *this ^ a2.get();
  }

  template <int _AP_W3>
  inline __attribute__((always_inline)) void set(const ap_int_base<_AP_W3, false>& val) {
    Base::V = val.V;
  }





  inline __attribute__((always_inline)) bool and_reduce() const { return ({ __typeof__(Base::V) __what2__ = Base::V; __builtin_bit_and_reduce((void*)(&__what2__)); }); }
  inline __attribute__((always_inline)) bool nand_reduce() const { return ({ __typeof__(Base::V) __what2__ = Base::V; __builtin_bit_nand_reduce((void*)(&__what2__)); }); }
  inline __attribute__((always_inline)) bool or_reduce() const { return ({ __typeof__(Base::V) __what2__ = Base::V; __builtin_bit_or_reduce((void*)(&__what2__)); }); }
  inline __attribute__((always_inline)) bool nor_reduce() const { return !(({ __typeof__(Base::V) __what2__ = Base::V; __builtin_bit_or_reduce((void*)(&__what2__)); })); }
  inline __attribute__((always_inline)) bool xor_reduce() const { return ({ __typeof__(Base::V) __what2__ = Base::V; __builtin_bit_xor_reduce((void*)(&__what2__)); }); }
  inline __attribute__((always_inline)) bool xnor_reduce() const {
    return !(({ __typeof__(Base::V) __what2__ = Base::V; __builtin_bit_xor_reduce((void*)(&__what2__)); }));
  }
# 1433 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
  inline __attribute__((always_inline)) char* to_string(signed char rd = 2, bool sign = _AP_S) const {
    (void)(rd);
    (void)(sign);
    return 0;
  }

};
# 1494 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W2, _AP_S2>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::mult_base lhs(op); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::mult_base rhs(op2); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::mult_base ret(0); ret.V = lhs.V * rhs.V; return ret; }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W2, _AP_S2>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::plus_base lhs(op); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::plus_base rhs(op2); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::plus_base ret(0); ret.V = lhs.V + rhs.V; return ret; }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W2, _AP_S2>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::minus_base lhs(op); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::minus_base rhs(op2); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::minus_base ret(0); ret.V = lhs.V - rhs.V; return ret; }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W2, _AP_S2>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::logic_base lhs(op); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::logic_base rhs(op2); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::logic_base ret(0); ret.V = lhs.V & rhs.V; return ret; }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W2, _AP_S2>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::logic_base lhs(op); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::logic_base rhs(op2); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::logic_base ret(0); ret.V = lhs.V | rhs.V; return ret; }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W2, _AP_S2>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::logic_base lhs(op); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::logic_base rhs(op2); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::logic_base ret(0); ret.V = lhs.V ^ rhs.V; return ret; }
# 1513 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W2, _AP_S2>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::div_base ret(0); ret.V = op.V / op2.V; return ret; }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W2, _AP_S2>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::mod_base ret(0); ret.V = op.V % op2.V; return ret; }
# 1541 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
template <typename PTR_TYPE, int _AP_W, bool _AP_S> inline __attribute__((always_inline)) PTR_TYPE* operator +(PTR_TYPE* i_op, const ap_int_base<_AP_W, _AP_S>& op) { ap_slong op2 = op.to_int64(); return i_op + op2; } template <typename PTR_TYPE, int _AP_W, bool _AP_S> inline __attribute__((always_inline)) PTR_TYPE* operator +(const ap_int_base<_AP_W, _AP_S>& op, PTR_TYPE* i_op) { ap_slong op2 = op.to_int64(); return op2 + i_op; }
template <typename PTR_TYPE, int _AP_W, bool _AP_S> inline __attribute__((always_inline)) PTR_TYPE* operator -(PTR_TYPE* i_op, const ap_int_base<_AP_W, _AP_S>& op) { ap_slong op2 = op.to_int64(); return i_op - op2; } template <typename PTR_TYPE, int _AP_W, bool _AP_S> inline __attribute__((always_inline)) PTR_TYPE* operator -(const ap_int_base<_AP_W, _AP_S>& op, PTR_TYPE* i_op) { ap_slong op2 = op.to_int64(); return op2 - i_op; }
# 1570 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float operator *(float i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op * op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float operator *(const ap_int_base<_AP_W, _AP_S>& op, float i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 * i_op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float operator /(float i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op / op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float operator /(const ap_int_base<_AP_W, _AP_S>& op, float i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 / i_op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float operator +(float i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op + op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float operator +(const ap_int_base<_AP_W, _AP_S>& op, float i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 + i_op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float operator -(float i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op - op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float operator -(const ap_int_base<_AP_W, _AP_S>& op, float i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 - i_op; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double operator *(double i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op * op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double operator *(const ap_int_base<_AP_W, _AP_S>& op, double i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 * i_op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double operator /(double i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op / op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double operator /(const ap_int_base<_AP_W, _AP_S>& op, double i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 / i_op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double operator +(double i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op + op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double operator +(const ap_int_base<_AP_W, _AP_S>& op, double i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 + i_op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double operator -(double i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op - op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double operator -(const ap_int_base<_AP_W, _AP_S>& op, double i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 - i_op; }
# 1595 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half operator *(half i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op * op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half operator *(const ap_int_base<_AP_W, _AP_S>& op, half i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 * i_op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half operator /(half i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op / op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half operator /(const ap_int_base<_AP_W, _AP_S>& op, half i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 / i_op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half operator +(half i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op + op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half operator +(const ap_int_base<_AP_W, _AP_S>& op, half i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 + i_op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half operator -(half i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op - op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half operator -(const ap_int_base<_AP_W, _AP_S>& op, half i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 - i_op; }
# 1627 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::mult operator *(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, bool i_op) { return op * ap_int_base<1, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::plus operator +(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, bool i_op) { return op + ap_int_base<1, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::minus operator -(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, bool i_op) { return op - ap_int_base<1, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::div operator /(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, bool i_op) { return op / ap_int_base<1, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::mod operator %(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, bool i_op) { return op % ap_int_base<1, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::logic operator &(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, bool i_op) { return op & ap_int_base<1, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::logic operator |(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, bool i_op) { return op | ap_int_base<1, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::logic operator ^(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, bool i_op) { return op ^ ap_int_base<1, false>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::mult operator *(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, char i_op) { return op * ap_int_base<8, CHAR_IS_SIGNED>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::plus operator +(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, char i_op) { return op + ap_int_base<8, CHAR_IS_SIGNED>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::minus operator -(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, char i_op) { return op - ap_int_base<8, CHAR_IS_SIGNED>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::div operator /(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, char i_op) { return op / ap_int_base<8, CHAR_IS_SIGNED>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::mod operator %(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, char i_op) { return op % ap_int_base<8, CHAR_IS_SIGNED>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::logic operator &(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, char i_op) { return op & ap_int_base<8, CHAR_IS_SIGNED>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::logic operator |(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, char i_op) { return op | ap_int_base<8, CHAR_IS_SIGNED>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::logic operator ^(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, char i_op) { return op ^ ap_int_base<8, CHAR_IS_SIGNED>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::mult operator *(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, signed char i_op) { return op * ap_int_base<8, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::plus operator +(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, signed char i_op) { return op + ap_int_base<8, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::minus operator -(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, signed char i_op) { return op - ap_int_base<8, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::div operator /(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, signed char i_op) { return op / ap_int_base<8, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::mod operator %(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, signed char i_op) { return op % ap_int_base<8, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::logic operator &(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, signed char i_op) { return op & ap_int_base<8, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::logic operator |(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, signed char i_op) { return op | ap_int_base<8, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::logic operator ^(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, signed char i_op) { return op ^ ap_int_base<8, true>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::mult operator *(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, unsigned char i_op) { return op * ap_int_base<8, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::plus operator +(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, unsigned char i_op) { return op + ap_int_base<8, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::minus operator -(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, unsigned char i_op) { return op - ap_int_base<8, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::div operator /(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, unsigned char i_op) { return op / ap_int_base<8, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::mod operator %(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, unsigned char i_op) { return op % ap_int_base<8, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::logic operator &(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, unsigned char i_op) { return op & ap_int_base<8, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::logic operator |(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, unsigned char i_op) { return op | ap_int_base<8, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::logic operator ^(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, unsigned char i_op) { return op ^ ap_int_base<8, false>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::mult operator *(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, short i_op) { return op * ap_int_base<_AP_SIZE_short, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::plus operator +(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, short i_op) { return op + ap_int_base<_AP_SIZE_short, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::minus operator -(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, short i_op) { return op - ap_int_base<_AP_SIZE_short, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::div operator /(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, short i_op) { return op / ap_int_base<_AP_SIZE_short, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::mod operator %(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, short i_op) { return op % ap_int_base<_AP_SIZE_short, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::logic operator &(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, short i_op) { return op & ap_int_base<_AP_SIZE_short, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::logic operator |(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, short i_op) { return op | ap_int_base<_AP_SIZE_short, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::logic operator ^(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, short i_op) { return op ^ ap_int_base<_AP_SIZE_short, true>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::mult operator *(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, unsigned short i_op) { return op * ap_int_base<_AP_SIZE_short, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::plus operator +(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, unsigned short i_op) { return op + ap_int_base<_AP_SIZE_short, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::minus operator -(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, unsigned short i_op) { return op - ap_int_base<_AP_SIZE_short, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::div operator /(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, unsigned short i_op) { return op / ap_int_base<_AP_SIZE_short, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::mod operator %(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, unsigned short i_op) { return op % ap_int_base<_AP_SIZE_short, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::logic operator &(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, unsigned short i_op) { return op & ap_int_base<_AP_SIZE_short, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::logic operator |(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, unsigned short i_op) { return op | ap_int_base<_AP_SIZE_short, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::logic operator ^(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, unsigned short i_op) { return op ^ ap_int_base<_AP_SIZE_short, false>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::mult operator *(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, int i_op) { return op * ap_int_base<_AP_SIZE_int, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::plus operator +(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, int i_op) { return op + ap_int_base<_AP_SIZE_int, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::minus operator -(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, int i_op) { return op - ap_int_base<_AP_SIZE_int, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::div operator /(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, int i_op) { return op / ap_int_base<_AP_SIZE_int, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::mod operator %(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, int i_op) { return op % ap_int_base<_AP_SIZE_int, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::logic operator &(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, int i_op) { return op & ap_int_base<_AP_SIZE_int, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::logic operator |(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, int i_op) { return op | ap_int_base<_AP_SIZE_int, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::logic operator ^(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, int i_op) { return op ^ ap_int_base<_AP_SIZE_int, true>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::mult operator *(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, unsigned int i_op) { return op * ap_int_base<_AP_SIZE_int, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::plus operator +(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, unsigned int i_op) { return op + ap_int_base<_AP_SIZE_int, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::minus operator -(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, unsigned int i_op) { return op - ap_int_base<_AP_SIZE_int, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::div operator /(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, unsigned int i_op) { return op / ap_int_base<_AP_SIZE_int, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::mod operator %(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, unsigned int i_op) { return op % ap_int_base<_AP_SIZE_int, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::logic operator &(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, unsigned int i_op) { return op & ap_int_base<_AP_SIZE_int, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::logic operator |(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, unsigned int i_op) { return op | ap_int_base<_AP_SIZE_int, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::logic operator ^(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, unsigned int i_op) { return op ^ ap_int_base<_AP_SIZE_int, false>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::mult operator *(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, long i_op) { return op * ap_int_base<_AP_SIZE_long, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::plus operator +(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, long i_op) { return op + ap_int_base<_AP_SIZE_long, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::minus operator -(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, long i_op) { return op - ap_int_base<_AP_SIZE_long, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::div operator /(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, long i_op) { return op / ap_int_base<_AP_SIZE_long, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::mod operator %(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, long i_op) { return op % ap_int_base<_AP_SIZE_long, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::logic operator &(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, long i_op) { return op & ap_int_base<_AP_SIZE_long, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::logic operator |(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, long i_op) { return op | ap_int_base<_AP_SIZE_long, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::logic operator ^(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, long i_op) { return op ^ ap_int_base<_AP_SIZE_long, true>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::mult operator *(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, unsigned long i_op) { return op * ap_int_base<_AP_SIZE_long, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::plus operator +(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, unsigned long i_op) { return op + ap_int_base<_AP_SIZE_long, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::minus operator -(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, unsigned long i_op) { return op - ap_int_base<_AP_SIZE_long, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::div operator /(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, unsigned long i_op) { return op / ap_int_base<_AP_SIZE_long, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::mod operator %(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, unsigned long i_op) { return op % ap_int_base<_AP_SIZE_long, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::logic operator &(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, unsigned long i_op) { return op & ap_int_base<_AP_SIZE_long, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::logic operator |(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, unsigned long i_op) { return op | ap_int_base<_AP_SIZE_long, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::logic operator ^(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, unsigned long i_op) { return op ^ ap_int_base<_AP_SIZE_long, false>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::mult operator *(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, ap_slong i_op) { return op * ap_int_base<_AP_SIZE_ap_slong, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::plus operator +(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, ap_slong i_op) { return op + ap_int_base<_AP_SIZE_ap_slong, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::minus operator -(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, ap_slong i_op) { return op - ap_int_base<_AP_SIZE_ap_slong, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::div operator /(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, ap_slong i_op) { return op / ap_int_base<_AP_SIZE_ap_slong, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::mod operator %(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, ap_slong i_op) { return op % ap_int_base<_AP_SIZE_ap_slong, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::logic operator &(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, ap_slong i_op) { return op & ap_int_base<_AP_SIZE_ap_slong, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::logic operator |(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, ap_slong i_op) { return op | ap_int_base<_AP_SIZE_ap_slong, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::logic operator ^(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, ap_slong i_op) { return op ^ ap_int_base<_AP_SIZE_ap_slong, true>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::mult operator *(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong i_op) { return op * ap_int_base<_AP_SIZE_ap_slong, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::plus operator +(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong i_op) { return op + ap_int_base<_AP_SIZE_ap_slong, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::minus operator -(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong i_op) { return op - ap_int_base<_AP_SIZE_ap_slong, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::div operator /(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong i_op) { return op / ap_int_base<_AP_SIZE_ap_slong, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::mod operator %(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong i_op) { return op % ap_int_base<_AP_SIZE_ap_slong, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::logic operator &(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong i_op) { return op & ap_int_base<_AP_SIZE_ap_slong, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::logic operator |(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong i_op) { return op | ap_int_base<_AP_SIZE_ap_slong, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::logic operator ^(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong i_op) { return op ^ ap_int_base<_AP_SIZE_ap_slong, false>(i_op); }
# 1666 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, char op2) { ap_int_base<_AP_W, _AP_S> r(0); if (CHAR_IS_SIGNED) r.V = op2 >= 0 ? (op.V << op2) : (op.V >> (-op2)); else r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, char op2) { ap_int_base<_AP_W, _AP_S> r(0); if (CHAR_IS_SIGNED) r.V = op2 >= 0 ? (op.V >> op2) : (op.V << (-op2)); else r.V = op.V >> op2; return r; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, signed char op2) { ap_int_base<_AP_W, _AP_S> r(0); if (true) r.V = op2 >= 0 ? (op.V << op2) : (op.V >> (-op2)); else r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, signed char op2) { ap_int_base<_AP_W, _AP_S> r(0); if (true) r.V = op2 >= 0 ? (op.V >> op2) : (op.V << (-op2)); else r.V = op.V >> op2; return r; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, short op2) { ap_int_base<_AP_W, _AP_S> r(0); if (true) r.V = op2 >= 0 ? (op.V << op2) : (op.V >> (-op2)); else r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, short op2) { ap_int_base<_AP_W, _AP_S> r(0); if (true) r.V = op2 >= 0 ? (op.V >> op2) : (op.V << (-op2)); else r.V = op.V >> op2; return r; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, int op2) { ap_int_base<_AP_W, _AP_S> r(0); if (true) r.V = op2 >= 0 ? (op.V << op2) : (op.V >> (-op2)); else r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, int op2) { ap_int_base<_AP_W, _AP_S> r(0); if (true) r.V = op2 >= 0 ? (op.V >> op2) : (op.V << (-op2)); else r.V = op.V >> op2; return r; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, long op2) { ap_int_base<_AP_W, _AP_S> r(0); if (true) r.V = op2 >= 0 ? (op.V << op2) : (op.V >> (-op2)); else r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, long op2) { ap_int_base<_AP_W, _AP_S> r(0); if (true) r.V = op2 >= 0 ? (op.V >> op2) : (op.V << (-op2)); else r.V = op.V >> op2; return r; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { ap_int_base<_AP_W, _AP_S> r(0); if (true) r.V = op2 >= 0 ? (op.V << op2) : (op.V >> (-op2)); else r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { ap_int_base<_AP_W, _AP_S> r(0); if (true) r.V = op2 >= 0 ? (op.V >> op2) : (op.V << (-op2)); else r.V = op.V >> op2; return r; }
# 1690 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, bool op2) { ap_int_base<_AP_W, _AP_S> r(0); r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, bool op2) { ap_int_base<_AP_W, _AP_S> r(0); r.V = op.V >> op2; return r; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { ap_int_base<_AP_W, _AP_S> r(0); r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { ap_int_base<_AP_W, _AP_S> r(0); r.V = op.V >> op2; return r; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { ap_int_base<_AP_W, _AP_S> r(0); r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { ap_int_base<_AP_W, _AP_S> r(0); r.V = op.V >> op2; return r; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { ap_int_base<_AP_W, _AP_S> r(0); r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { ap_int_base<_AP_W, _AP_S> r(0); r.V = op.V >> op2; return r; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { ap_int_base<_AP_W, _AP_S> r(0); r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { ap_int_base<_AP_W, _AP_S> r(0); r.V = op.V >> op2; return r; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { ap_int_base<_AP_W, _AP_S> r(0); r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { ap_int_base<_AP_W, _AP_S> r(0); r.V = op.V >> op2; return r; }
# 1721 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op += ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op -= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op *= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op /= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op %= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op &= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op |= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op ^= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op >>= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op <<= ap_int_base<1, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, char op2) { return op += ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, char op2) { return op -= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, char op2) { return op *= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, char op2) { return op /= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, char op2) { return op %= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, char op2) { return op &= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, char op2) { return op |= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, char op2) { return op ^= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, char op2) { return op >>= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, char op2) { return op <<= ap_int_base<8, CHAR_IS_SIGNED>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op += ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op -= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op *= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op /= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op %= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op &= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op |= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op ^= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op >>= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op <<= ap_int_base<8, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op += ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op -= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op *= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op /= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op %= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op &= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op |= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op ^= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op >>= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op <<= ap_int_base<8, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, short op2) { return op += ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, short op2) { return op -= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, short op2) { return op *= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, short op2) { return op /= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, short op2) { return op %= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, short op2) { return op &= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, short op2) { return op |= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, short op2) { return op ^= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, short op2) { return op >>= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, short op2) { return op <<= ap_int_base<_AP_SIZE_short, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op += ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op -= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op *= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op /= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op %= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op &= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op |= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op ^= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op >>= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op <<= ap_int_base<_AP_SIZE_short, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, int op2) { return op += ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, int op2) { return op -= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, int op2) { return op *= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, int op2) { return op /= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, int op2) { return op %= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, int op2) { return op &= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, int op2) { return op |= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, int op2) { return op ^= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, int op2) { return op >>= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, int op2) { return op <<= ap_int_base<_AP_SIZE_int, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op += ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op -= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op *= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op /= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op %= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op &= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op |= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op ^= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op >>= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op <<= ap_int_base<_AP_SIZE_int, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, long op2) { return op += ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, long op2) { return op -= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, long op2) { return op *= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, long op2) { return op /= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, long op2) { return op %= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, long op2) { return op &= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, long op2) { return op |= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, long op2) { return op ^= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, long op2) { return op >>= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, long op2) { return op <<= ap_int_base<_AP_SIZE_long, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op += ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op -= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op *= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op /= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op %= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op &= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op |= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op ^= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op >>= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op <<= ap_int_base<_AP_SIZE_long, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op += ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op -= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op *= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op /= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op %= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op &= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op |= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op ^= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op >>= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op <<= ap_int_base<_AP_SIZE_ap_slong, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op += ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op -= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op *= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op /= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op %= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op &= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op |= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op ^= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op >>= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op <<= ap_int_base<_AP_SIZE_ap_slong, false>(op2); }
# 1754 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half& operator +=( half& op2, ap_int_base<_AP_W, _AP_S>& op) { half op_rt = op.to_half(); return op2 += op_rt; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half& operator -=( half& op2, ap_int_base<_AP_W, _AP_S>& op) { half op_rt = op.to_half(); return op2 -= op_rt; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half& operator *=( half& op2, ap_int_base<_AP_W, _AP_S>& op) { half op_rt = op.to_half(); return op2 *= op_rt; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half& operator /=( half& op2, ap_int_base<_AP_W, _AP_S>& op) { half op_rt = op.to_half(); return op2 /= op_rt; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float& operator +=( float& op2, ap_int_base<_AP_W, _AP_S>& op) { float op_rt = op.to_float(); return op2 += op_rt; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float& operator -=( float& op2, ap_int_base<_AP_W, _AP_S>& op) { float op_rt = op.to_float(); return op2 -= op_rt; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float& operator *=( float& op2, ap_int_base<_AP_W, _AP_S>& op) { float op_rt = op.to_float(); return op2 *= op_rt; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float& operator /=( float& op2, ap_int_base<_AP_W, _AP_S>& op) { float op_rt = op.to_float(); return op2 /= op_rt; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double& operator +=( double& op2, ap_int_base<_AP_W, _AP_S>& op) { double op_rt = op.to_double(); return op2 += op_rt; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double& operator -=( double& op2, ap_int_base<_AP_W, _AP_S>& op) { double op_rt = op.to_double(); return op2 -= op_rt; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double& operator *=( double& op2, ap_int_base<_AP_W, _AP_S>& op) { double op_rt = op.to_double(); return op2 *= op_rt; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double& operator /=( double& op2, ap_int_base<_AP_W, _AP_S>& op) { double op_rt = op.to_double(); return op2 /= op_rt; }
# 1782 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op > ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op < ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op >= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op <= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op == ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op != ap_int_base<1, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, char op2) { return op > ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, char op2) { return op < ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, char op2) { return op >= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, char op2) { return op <= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, char op2) { return op == ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, char op2) { return op != ap_int_base<8, CHAR_IS_SIGNED>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op > ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op < ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op >= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op <= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op == ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op != ap_int_base<8, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op > ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op < ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op >= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op <= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op == ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op != ap_int_base<8, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, short op2) { return op > ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, short op2) { return op < ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, short op2) { return op >= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, short op2) { return op <= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, short op2) { return op == ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, short op2) { return op != ap_int_base<_AP_SIZE_short, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op > ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op < ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op >= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op <= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op == ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op != ap_int_base<_AP_SIZE_short, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, int op2) { return op > ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, int op2) { return op < ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, int op2) { return op >= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, int op2) { return op <= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, int op2) { return op == ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, int op2) { return op != ap_int_base<_AP_SIZE_int, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op > ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op < ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op >= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op <= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op == ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op != ap_int_base<_AP_SIZE_int, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, long op2) { return op > ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, long op2) { return op < ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, long op2) { return op >= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, long op2) { return op <= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, long op2) { return op == ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, long op2) { return op != ap_int_base<_AP_SIZE_long, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op > ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op < ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op >= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op <= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op == ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op != ap_int_base<_AP_SIZE_long, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op > ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op < ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op >= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op <= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op == ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op != ap_int_base<_AP_SIZE_ap_slong, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op > ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op < ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op >= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op <= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op == ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op != ap_int_base<_AP_SIZE_ap_slong, false>(op2); }
# 1819 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
  template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op1, double op2) { return op1.to_double() > op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(double op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 > op2.to_double() ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op1, float op2) { return op1.to_double() > op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(float op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 > op2.to_double() ; }
  template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op1, double op2) { return op1.to_double() < op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(double op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 < op2.to_double() ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op1, float op2) { return op1.to_double() < op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(float op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 < op2.to_double() ; }
  template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op1, double op2) { return op1.to_double() >= op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(double op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 >= op2.to_double() ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op1, float op2) { return op1.to_double() >= op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(float op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 >= op2.to_double() ; }
  template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op1, double op2) { return op1.to_double() <= op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(double op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 <= op2.to_double() ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op1, float op2) { return op1.to_double() <= op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(float op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 <= op2.to_double() ; }
  template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op1, double op2) { return op1.to_double() == op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(double op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 == op2.to_double() ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op1, float op2) { return op1.to_double() == op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(float op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 == op2.to_double() ; }
  template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op1, double op2) { return op1.to_double() != op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(double op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 != op2.to_double() ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op1, float op2) { return op1.to_double() != op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(float op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 != op2.to_double() ; }
# 1849 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::plus operator +(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1) + op2; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::plus operator +(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 + ap_int_base<_AP_W2, false>(op2); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::minus operator -(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1) - op2; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::minus operator -(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 - ap_int_base<_AP_W2, false>(op2); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::mult operator *(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1) * op2; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::mult operator *(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 * ap_int_base<_AP_W2, false>(op2); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::div operator /(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1) / op2; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::div operator /(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 / ap_int_base<_AP_W2, false>(op2); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::mod operator %(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1) % op2; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::mod operator %(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 % ap_int_base<_AP_W2, false>(op2); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::logic operator &(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1) & op2; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::logic operator &(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 & ap_int_base<_AP_W2, false>(op2); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::logic operator |(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1) | op2; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::logic operator |(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 | ap_int_base<_AP_W2, false>(op2); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::logic operator ^(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1) ^ op2; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::logic operator ^(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 ^ ap_int_base<_AP_W2, false>(op2); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::arg1 operator >>(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1) >> op2; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::arg1 operator >>(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 >> ap_int_base<_AP_W2, false>(op2); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::arg1 operator <<(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1) << op2; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::arg1 operator <<(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 << ap_int_base<_AP_W2, false>(op2); }
# 1880 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator +=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 += ap_int_base<_AP_W2, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_range_ref<_AP_W1, _AP_S1>& operator +=( ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W1, false> tmp(op1); tmp += op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator -=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 -= ap_int_base<_AP_W2, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_range_ref<_AP_W1, _AP_S1>& operator -=( ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W1, false> tmp(op1); tmp -= op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator *=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 *= ap_int_base<_AP_W2, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_range_ref<_AP_W1, _AP_S1>& operator *=( ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W1, false> tmp(op1); tmp *= op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator /=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 /= ap_int_base<_AP_W2, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_range_ref<_AP_W1, _AP_S1>& operator /=( ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W1, false> tmp(op1); tmp /= op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator %=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 %= ap_int_base<_AP_W2, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_range_ref<_AP_W1, _AP_S1>& operator %=( ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W1, false> tmp(op1); tmp %= op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator >>=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 >>= ap_int_base<_AP_W2, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_range_ref<_AP_W1, _AP_S1>& operator >>=( ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W1, false> tmp(op1); tmp >>= op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator <<=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 <<= ap_int_base<_AP_W2, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_range_ref<_AP_W1, _AP_S1>& operator <<=( ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W1, false> tmp(op1); tmp <<= op2; op1 = tmp; return op1; }
# 1912 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator &=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W2, false> tmp(op2); op1.V &= tmp.V; return op1; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_range_ref<_AP_W1, _AP_S1>& operator &=( ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W1, false> tmp(op1); tmp.V &= op2.V; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator |=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W2, false> tmp(op2); op1.V |= tmp.V; return op1; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_range_ref<_AP_W1, _AP_S1>& operator |=( ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W1, false> tmp(op1); tmp.V |= op2.V; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator ^=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W2, false> tmp(op2); op1.V ^= tmp.V; return op1; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_range_ref<_AP_W1, _AP_S1>& operator ^=( ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W1, false> tmp(op1); tmp.V ^= op2.V; op1 = tmp; return op1; }
# 1931 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1).operator ==(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1.operator ==(op2.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1).operator !=(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1.operator !=(op2.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1).operator >(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1.operator >(op2.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1).operator >=(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1.operator >=(op2.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1).operator <(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1.operator <(op2.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1).operator <=(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1.operator <=(op2.operator ap_int_base<_AP_W2, false>()); }
# 1958 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<1, false>::plus operator +(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 + ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<1, false>::template RType<_AP_W2, _AP_S2>::plus operator +(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) + op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<1, false>::minus operator -(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 - ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<1, false>::template RType<_AP_W2, _AP_S2>::minus operator -(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) - op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<1, false>::mult operator *(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 * ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<1, false>::template RType<_AP_W2, _AP_S2>::mult operator *(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) * op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<1, false>::div operator /(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 / ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<1, false>::template RType<_AP_W2, _AP_S2>::div operator /(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) / op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<1, false>::mod operator %(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 % ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<1, false>::template RType<_AP_W2, _AP_S2>::mod operator %(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) % op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<1, false>::logic operator &(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 & ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<1, false>::template RType<_AP_W2, _AP_S2>::logic operator &(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) & op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<1, false>::logic operator |(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 | ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<1, false>::template RType<_AP_W2, _AP_S2>::logic operator |(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) | op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<1, false>::logic operator ^(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 ^ ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<1, false>::template RType<_AP_W2, _AP_S2>::logic operator ^(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) ^ op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<1, false>::arg1 operator >>(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 >> ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<1, false>::template RType<_AP_W2, _AP_S2>::arg1 operator >>(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) >> op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<1, false>::arg1 operator <<(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 << ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<1, false>::template RType<_AP_W2, _AP_S2>::arg1 operator <<(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) << op2; }
# 1989 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator +=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 += ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_bit_ref<_AP_W1, _AP_S1>& operator +=( ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op1); tmp += op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator -=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 -= ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_bit_ref<_AP_W1, _AP_S1>& operator -=( ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op1); tmp -= op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator *=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 *= ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_bit_ref<_AP_W1, _AP_S1>& operator *=( ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op1); tmp *= op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator /=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 /= ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_bit_ref<_AP_W1, _AP_S1>& operator /=( ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op1); tmp /= op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator %=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 %= ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_bit_ref<_AP_W1, _AP_S1>& operator %=( ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op1); tmp %= op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator >>=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 >>= ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_bit_ref<_AP_W1, _AP_S1>& operator >>=( ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op1); tmp >>= op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator <<=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 <<= ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_bit_ref<_AP_W1, _AP_S1>& operator <<=( ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op1); tmp <<= op2; op1 = tmp; return op1; }
# 2021 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator &=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op2); op1.V &= tmp.V; return op1; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_bit_ref<_AP_W1, _AP_S1>& operator &=( ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op1); tmp.V &= op2.V; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator |=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op2); op1.V |= tmp.V; return op1; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_bit_ref<_AP_W1, _AP_S1>& operator |=( ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op1); tmp.V |= op2.V; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator ^=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op2); op1.V ^= tmp.V; return op1; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_bit_ref<_AP_W1, _AP_S1>& operator ^=( ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op1); tmp.V ^= op2.V; op1 = tmp; return op1; }
# 2040 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 == ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) == op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 != ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) != op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 > ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) > op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 >= ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) >= op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 < ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) < op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 <= ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) <= op2; }
# 2147 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_base.h"
template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator ==( const ap_int_base<_AP_W3, _AP_S3>& op1, const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op2) { return op1 == op2.get(); } template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op1, const ap_int_base<_AP_W3, _AP_S3>& op2) { return op1.get() == op2; }
template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator !=( const ap_int_base<_AP_W3, _AP_S3>& op1, const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op2) { return op1 != op2.get(); } template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op1, const ap_int_base<_AP_W3, _AP_S3>& op2) { return op1.get() != op2; }
template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator >( const ap_int_base<_AP_W3, _AP_S3>& op1, const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op2) { return op1 > op2.get(); } template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op1, const ap_int_base<_AP_W3, _AP_S3>& op2) { return op1.get() > op2; }
template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator >=( const ap_int_base<_AP_W3, _AP_S3>& op1, const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op2) { return op1 >= op2.get(); } template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op1, const ap_int_base<_AP_W3, _AP_S3>& op2) { return op1.get() >= op2; }
template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator <( const ap_int_base<_AP_W3, _AP_S3>& op1, const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op2) { return op1 < op2.get(); } template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op1, const ap_int_base<_AP_W3, _AP_S3>& op2) { return op1.get() < op2; }
template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator <=( const ap_int_base<_AP_W3, _AP_S3>& op1, const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op2) { return op1 <= op2.get(); } template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op1, const ap_int_base<_AP_W3, _AP_S3>& op2) { return op1.get() <= op2; }
# 12 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int.h" 2
# 1 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_ref.h" 1
# 27 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_ref.h"
template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2>
struct ap_concat_ref {
  enum {
    _AP_WR = _AP_W1 + _AP_W2,
  };

  _AP_T1& mbv1;
  _AP_T2& mbv2;

  inline __attribute__((always_inline)) ap_concat_ref(const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& ref)
      : mbv1(ref.mbv1), mbv2(ref.mbv2) {}

  inline __attribute__((always_inline)) ap_concat_ref(_AP_T1& bv1, _AP_T2& bv2) : mbv1(bv1), mbv2(bv2) {}

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_concat_ref& operator=(const ap_int_base<_AP_W3, _AP_S3>& val) {
    ap_int_base<_AP_W1 + _AP_W2, false> vval(val);
    int W_ref1 = mbv1.length();
    int W_ref2 = mbv2.length();
    ap_int_base<_AP_W1, false> Part1;
    Part1.V = ({ typename _ap_type::remove_const<__typeof__(vval.V)>::type __Result__ = 0; __typeof__(vval.V) __Val2__ = vval.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), W_ref2, W_ref1 + W_ref2 - 1); __Result__; });
    mbv1.set(Part1);
    ap_int_base<_AP_W2, false> Part2;
    Part2.V = ({ typename _ap_type::remove_const<__typeof__(vval.V)>::type __Result__ = 0; __typeof__(vval.V) __Val2__ = vval.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, W_ref2 - 1); __Result__; });
    mbv2.set(Part2);
    return *this;
  }
# 70 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_ref.h"
  inline __attribute__((always_inline)) ap_concat_ref& operator=(bool val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(char val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(signed char val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(unsigned char val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(short val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(unsigned short val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(int val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(unsigned int val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(long val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(unsigned long val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(ap_slong val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(ap_ulong val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(half val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(float val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(double val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }





  inline __attribute__((always_inline)) ap_concat_ref& operator=(
      const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& val) {
    ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val);
    return operator=(tmpVal);
  }

  template <int _AP_W3, typename _AP_T3, int _AP_W4, typename _AP_T4>
  inline __attribute__((always_inline)) ap_concat_ref& operator=(
      const ap_concat_ref<_AP_W3, _AP_T3, _AP_W4, _AP_T4>& val) {
    ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val);
    return operator=(tmpVal);
  }

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_concat_ref& operator=(const ap_bit_ref<_AP_W3, _AP_S3>& val) {
    ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val);
    return operator=(tmpVal);
  }
  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_concat_ref& operator=(const ap_range_ref<_AP_W3, _AP_S3>& val) {
    ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val);
    return operator=(tmpVal);
  }

  template <int _AP_W3, int _AP_I3, bool _AP_S3, ap_q_mode _AP_Q3,
            ap_o_mode _AP_O3, int _AP_N3>
  inline __attribute__((always_inline)) ap_concat_ref& operator=(
      const af_range_ref<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3>& val) {
    return operator=((const ap_int_base<_AP_W3, false>)(val));
  }

  template <int _AP_W3, int _AP_I3, bool _AP_S3, ap_q_mode _AP_Q3,
            ap_o_mode _AP_O3, int _AP_N3>
  inline __attribute__((always_inline)) ap_concat_ref& operator=(
      const ap_fixed_base<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3>&
          val) {
    return operator=(val.to_ap_int_base());
  }

  template <int _AP_W3, int _AP_I3, bool _AP_S3, ap_q_mode _AP_Q3,
            ap_o_mode _AP_O3, int _AP_N3>
  inline __attribute__((always_inline)) ap_concat_ref& operator=(
      const af_bit_ref<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3>& val) {
    return operator=((ap_ulong)(bool)(val));
  }

  inline __attribute__((always_inline)) operator ap_int_base<_AP_WR, false>() const { return get(); }

  inline __attribute__((always_inline)) operator ap_ulong() const { return get().to_uint64(); }

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3,
                       ap_range_ref<_AP_W3, _AP_S3> >
  operator,(const ap_range_ref<_AP_W3, _AP_S3> &a2) {
    return ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3,
                         ap_range_ref<_AP_W3, _AP_S3> >(
        *this, const_cast<ap_range_ref<_AP_W3, _AP_S3>&>(a2));
  }

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3, ap_int_base<_AP_W3, _AP_S3> >
      operator,(ap_int_base<_AP_W3, _AP_S3> &a2) {
    return ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3,
                         ap_int_base<_AP_W3, _AP_S3> >(*this, a2);
  }

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3, ap_int_base<_AP_W3, _AP_S3> >
      operator,(volatile ap_int_base<_AP_W3, _AP_S3> &a2) {
    return ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3,
                         ap_int_base<_AP_W3, _AP_S3> >(
        *this, const_cast<ap_int_base<_AP_W3, _AP_S3>&>(a2));
  }

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3, ap_int_base<_AP_W3, _AP_S3> >
      operator,(const ap_int_base<_AP_W3, _AP_S3> &a2) {
    return ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3,
                         ap_int_base<_AP_W3, _AP_S3> >(
        *this, const_cast<ap_int_base<_AP_W3, _AP_S3>&>(a2));
  }

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3, ap_int_base<_AP_W3, _AP_S3> >
      operator,(const volatile ap_int_base<_AP_W3, _AP_S3> &a2) {

    ap_int_base<_AP_W3, _AP_S3> op(a2);
    return ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3,
                         ap_int_base<_AP_W3, _AP_S3> >(
        *this, const_cast<ap_int_base<_AP_W3, _AP_S3>&>(op));
  }

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_WR, ap_concat_ref, 1, ap_bit_ref<_AP_W3, _AP_S3> >
  operator,(const ap_bit_ref<_AP_W3, _AP_S3> &a2) {
    return ap_concat_ref<_AP_WR, ap_concat_ref, 1, ap_bit_ref<_AP_W3, _AP_S3> >(
        *this, const_cast<ap_bit_ref<_AP_W3, _AP_S3>&>(a2));
  }

  template <int _AP_W3, typename _AP_T3, int _AP_W4, typename _AP_T4>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3 + _AP_W4,
                       ap_concat_ref<_AP_W3, _AP_T3, _AP_W4, _AP_T4> >
  operator,(const ap_concat_ref<_AP_W3, _AP_T3, _AP_W4, _AP_T4> &a2) {
    return ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3 + _AP_W4,
                         ap_concat_ref<_AP_W3, _AP_T3, _AP_W4, _AP_T4> >(
        *this, const_cast<ap_concat_ref<_AP_W3, _AP_T3, _AP_W4, _AP_T4>&>(a2));
  }

  template <int _AP_W3, int _AP_I3, bool _AP_S3, ap_q_mode _AP_Q3,
            ap_o_mode _AP_O3, int _AP_N3>
  inline __attribute__((always_inline)) ap_concat_ref<
      _AP_WR, ap_concat_ref, _AP_W3,
      af_range_ref<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3> >
  operator,(
      const af_range_ref<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3> &a2) {
    return ap_concat_ref<
        _AP_WR, ap_concat_ref, _AP_W3,
        af_range_ref<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3> >(
        *this,
        const_cast<
            af_range_ref<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3>&>(a2));
  }

  template <int _AP_W3, int _AP_I3, bool _AP_S3, ap_q_mode _AP_Q3,
            ap_o_mode _AP_O3, int _AP_N3>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_WR, ap_concat_ref, 1,
                    af_bit_ref<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3> >
      operator,(const af_bit_ref<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3>
                    &a2) {
    return ap_concat_ref<
        _AP_WR, ap_concat_ref, 1,
        af_bit_ref<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3> >(
        *this,
        const_cast<af_bit_ref<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3>&>(
            a2));
  }

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_int_base<((_AP_WR) > (_AP_W3) ? (_AP_WR) : (_AP_W3)), _AP_S3> operator&(
      const ap_int_base<_AP_W3, _AP_S3>& a2) {
    return get() & a2;
  }

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_int_base<((_AP_WR) > (_AP_W3) ? (_AP_WR) : (_AP_W3)), _AP_S3> operator|(
      const ap_int_base<_AP_W3, _AP_S3>& a2) {
    return get() | a2;
  }

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_int_base<((_AP_WR) > (_AP_W3) ? (_AP_WR) : (_AP_W3)), _AP_S3> operator^(
      const ap_int_base<_AP_W3, _AP_S3>& a2) {
    return get() ^ a2;
  }
# 258 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_ref.h"
  inline __attribute__((always_inline)) ap_int_base<_AP_WR, false> get() const {
    ap_int_base<_AP_WR, false> tmpVal(0);
    int W_ref1 = mbv1.length();
    int W_ref2 = mbv2.length();
    ap_int_base<_AP_W2, false> v2(mbv2);
    ap_int_base<_AP_W1, false> v1(mbv1);
    tmpVal.V = ({ typename _ap_type::remove_const<__typeof__(tmpVal.V)>::type __Result__ = 0; __typeof__(tmpVal.V) __Val2__ = tmpVal.V; __typeof__(v2.V) __Repl2__ = v2.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), 0, W_ref2 - 1); __Result__; });
    tmpVal.V =
        ({ typename _ap_type::remove_const<__typeof__(tmpVal.V)>::type __Result__ = 0; __typeof__(tmpVal.V) __Val2__ = tmpVal.V; __typeof__(v1.V) __Repl2__ = v1.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), W_ref2, W_ref1 + W_ref2 - 1); __Result__; });
    return tmpVal;
  }

  template <int _AP_W3>
  inline __attribute__((always_inline)) void set(const ap_int_base<_AP_W3, false>& val) {
    ap_int_base<_AP_W1 + _AP_W2, false> vval(val);
    int W_ref1 = mbv1.length();
    int W_ref2 = mbv2.length();
    ap_int_base<_AP_W1, false> tmpVal1;
    tmpVal1.V = ({ typename _ap_type::remove_const<__typeof__(vval.V)>::type __Result__ = 0; __typeof__(vval.V) __Val2__ = vval.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), W_ref2, W_ref1 + W_ref2 - 1); __Result__; });
    mbv1.set(tmpVal1);
    ap_int_base<_AP_W2, false> tmpVal2;
    tmpVal2.V = ({ typename _ap_type::remove_const<__typeof__(vval.V)>::type __Result__ = 0; __typeof__(vval.V) __Val2__ = vval.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, W_ref2 - 1); __Result__; });
    mbv2.set(tmpVal2);
  }

  inline __attribute__((always_inline)) int length() const { return mbv1.length() + mbv2.length(); }
};




template <int _AP_W, bool _AP_S>
struct ap_range_ref {



  typedef ap_int_base<_AP_W, _AP_S> ref_type;
  ref_type& d_bv;
  int l_index;
  int h_index;

 public:
  inline __attribute__((always_inline)) ap_range_ref(const ap_range_ref<_AP_W, _AP_S>& ref)
      : d_bv(ref.d_bv), l_index(ref.l_index), h_index(ref.h_index) {}

  inline __attribute__((always_inline)) ap_range_ref(ref_type* bv, int h, int l)
      : d_bv(*bv), l_index(l), h_index(h) {}

  inline __attribute__((always_inline)) ap_range_ref(const ref_type* bv, int h, int l)
      : d_bv(*const_cast<ref_type*>(bv)), l_index(l), h_index(h) {}

  inline __attribute__((always_inline)) operator ap_int_base<_AP_W, false>() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return ret;
  }

  inline __attribute__((always_inline)) operator ap_ulong() const { return to_uint64(); }
# 339 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_ref.h"
  inline __attribute__((always_inline)) ap_range_ref& operator=(bool val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(char val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(signed char val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(unsigned char val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(short val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(unsigned short val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(int val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(unsigned int val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(long val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(unsigned long val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(ap_slong val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(ap_ulong val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(half val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(float val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(double val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }




  inline __attribute__((always_inline)) ap_range_ref& operator=(const char* val) {
    const ap_int_base<_AP_W, false> tmp(val);
    d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; });
    return *this;
  }


  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_range_ref& operator=(const ap_int_base<_AP_W2, _AP_S2>& val) {
    ap_int_base<_AP_W, false> tmp(val);
    d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; });
    return *this;
  }




  inline __attribute__((always_inline)) ap_range_ref& operator=(const ap_range_ref& val) {
    return operator=((const ap_int_base<_AP_W, false>)val);
  }


  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_range_ref& operator=(const ap_range_ref<_AP_W2, _AP_S2>& val) {
    return operator=((const ap_int_base<_AP_W2, false>)val);
  }


  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_range_ref& operator=(const ap_bit_ref<_AP_W2, _AP_S2>& val) {
    return operator=((ap_ulong)(bool)(val));
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_range_ref& operator=(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&
          val) {
    return operator=(val.to_ap_int_base());
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_range_ref& operator=(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& val) {
    return operator=((const ap_int_base<_AP_W2, false>)val);
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_range_ref& operator=(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& val) {
    return operator=((ap_ulong)(bool)(val));
  }


  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_range_ref& operator=(
      const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& val) {
    return operator=((const ap_int_base<_AP_W2 + _AP_W3, false>)(val));
  }


  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, ap_range_ref, _AP_W2, ap_range_ref<_AP_W2, _AP_S2> >
      operator,(const ap_range_ref<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<_AP_W, ap_range_ref, _AP_W2,
                         ap_range_ref<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_range_ref<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, ap_range_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
      operator,(ap_int_base<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<_AP_W, ap_range_ref, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(*this, a2);
  }

  inline __attribute__((always_inline))
  ap_concat_ref<_AP_W, ap_range_ref, _AP_W, ap_int_base<_AP_W, _AP_S> >
  operator,(ap_int_base<_AP_W, _AP_S>& a2) {
    return ap_concat_ref<_AP_W, ap_range_ref, _AP_W,
                         ap_int_base<_AP_W, _AP_S> >(*this, a2);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, ap_range_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
      operator,(volatile ap_int_base<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<_AP_W, ap_range_ref, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_int_base<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, ap_range_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
      operator,(const ap_int_base<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<_AP_W, ap_range_ref, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_int_base<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, ap_range_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
      operator,(const volatile ap_int_base<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<_AP_W, ap_range_ref, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_int_base<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_range_ref, 1, ap_bit_ref<_AP_W2, _AP_S2> >
  operator,(const ap_bit_ref<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<_AP_W, ap_range_ref, 1, ap_bit_ref<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_bit_ref<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_range_ref, _AP_W2 + _AP_W3,
                       ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >
  operator,(const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> &a2) {
    return ap_concat_ref<_AP_W, ap_range_ref, _AP_W2 + _AP_W3,
                         ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >(
        *this, const_cast<ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>&>(a2));
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_concat_ref<
      _AP_W, ap_range_ref, _AP_W2,
      af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >
  operator,(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> a2) {
    return ap_concat_ref<
        _AP_W, ap_range_ref, _AP_W2,
        af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >(
        *this,
        const_cast<
            af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&>(a2));
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, ap_range_ref, 1,
                    af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >
      operator,(const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>
                    &a2) {
    return ap_concat_ref<
        _AP_W, ap_range_ref, 1,
        af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >(
        *this,
        const_cast<af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&>(
            a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator==(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    ap_int_base<_AP_W, false> lop(*this);
    ap_int_base<_AP_W2, false> hop(op2);
    return lop == hop;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator!=(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    return !(operator==(op2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator<(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    ap_int_base<_AP_W, false> lop(*this);
    ap_int_base<_AP_W2, false> hop(op2);
    return lop < hop;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator<=(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    ap_int_base<_AP_W, false> lop(*this);
    ap_int_base<_AP_W2, false> hop(op2);
    return lop <= hop;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator>(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    return !(operator<=(op2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator>=(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    return !(operator<(op2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S>& operator|=(
      const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    (this->d_bv).V |= (op2.d_bv).V;
    return *this;
  };

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S>& operator|=(
      const ap_int_base<_AP_W2, _AP_S2>& op2) {
    (this->d_bv).V |= op2.V;
    return *this;
  };

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S>& operator&=(
      const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    (this->d_bv).V &= (op2.d_bv).V;
    return *this;
  };

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S>& operator&=(
      const ap_int_base<_AP_W2, _AP_S2>& op2) {
    (this->d_bv).V &= op2.V;
    return *this;
  };

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S>& operator^=(
      const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    (this->d_bv).V ^= (op2.d_bv).V;
    return *this;
  };

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S>& operator^=(
      const ap_int_base<_AP_W2, _AP_S2>& op2) {
    (this->d_bv).V ^= op2.V;
    return *this;
  };



  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> operator~() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return (~ret);
  }

  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> operator!() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return (!ret);
  }

  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> operator+() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return ret;
  }

  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> operator-() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return (-ret);
  }


  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> get() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return ret;
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) void set(const ap_int_base<_AP_W2, false>& val) {
    d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(val.V) __Repl2__ = val.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; });
  }

  inline __attribute__((always_inline)) int length() const {
    return h_index >= l_index ? h_index - l_index + 1 : l_index - h_index + 1;
  }

  inline __attribute__((always_inline)) int to_int() const {
    return (int)(({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) unsigned to_uint() const {
    ap_int_base<_AP_W, false> t;
    t.V = d_bv.V;
    return (unsigned)(({ typename _ap_type::remove_const<__typeof__(t.V)>::type __Result__ = 0; __typeof__(t.V) __Val2__ = t.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) long to_long() const {
    return (long)(({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) unsigned long to_ulong() const {
    ap_int_base<_AP_W, false> t;
    t.V = d_bv.V;
    return (unsigned long)(({ typename _ap_type::remove_const<__typeof__(t.V)>::type __Result__ = 0; __typeof__(t.V) __Val2__ = t.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) ap_slong to_int64() const {
    return (ap_slong)(({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) ap_ulong to_uint64() const {
    ap_int_base<_AP_W, false> t;
    t.V = d_bv.V;
    return (ap_ulong)(({ typename _ap_type::remove_const<__typeof__(t.V)>::type __Result__ = 0; __typeof__(t.V) __Val2__ = t.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) bool and_reduce() const {
    bool ret = true;
    bool reverse = l_index > h_index;
    unsigned low = reverse ? h_index : l_index;
    unsigned high = reverse ? l_index : h_index;
    VITIS_LOOP_676_1: for (unsigned i = low; i != high; ++i) {

#pragma HLS unroll

 ret &= ({ __typeof__(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), i); __Result__; });
    }
    return ret;
  }

  inline __attribute__((always_inline)) bool or_reduce() const {
    bool ret = false;
    bool reverse = l_index > h_index;
    unsigned low = reverse ? h_index : l_index;
    unsigned high = reverse ? l_index : h_index;
    VITIS_LOOP_690_1: for (unsigned i = low; i != high; ++i) {

#pragma HLS unroll

 ret |= ({ __typeof__(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), i); __Result__; });
    }
    return ret;
  }

  inline __attribute__((always_inline)) bool xor_reduce() const {
    bool ret = false;
    bool reverse = l_index > h_index;
    unsigned low = reverse ? h_index : l_index;
    unsigned high = reverse ? l_index : h_index;
    VITIS_LOOP_704_1: for (unsigned i = low; i != high; ++i) {

#pragma HLS unroll

 ret ^= ({ __typeof__(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), i); __Result__; });
    }
    return ret;
  }
# 720 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_ref.h"
  inline __attribute__((always_inline)) char* to_string(signed char radix = 2) const {
    (void)(radix);
    return 0;
  }

};
# 760 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_ref.h"
template <int _AP_W, bool _AP_S>
struct ap_bit_ref {



  typedef ap_int_base<_AP_W, _AP_S> ref_type;
  ref_type& d_bv;
  int d_index;

 public:

  inline __attribute__((always_inline)) ap_bit_ref(const ap_bit_ref<_AP_W, _AP_S>& ref)
      : d_bv(ref.d_bv), d_index(ref.d_index) {}

  inline __attribute__((always_inline)) ap_bit_ref(ref_type* bv, int index = 0) : d_bv(*bv), d_index(index) {}

  inline __attribute__((always_inline)) ap_bit_ref(const ref_type* bv, int index = 0)
      : d_bv(*const_cast<ref_type*>(bv)), d_index(index) {}

  inline __attribute__((always_inline)) operator bool() const { return ({ __typeof__(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), d_index); __Result__; }); }
  inline __attribute__((always_inline)) bool to_bool() const { return ({ __typeof__(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), d_index); __Result__; }); }
# 798 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_ref.h"
  inline __attribute__((always_inline)) ap_bit_ref& operator=(bool val) { d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(char val) { d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(signed char val) { d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(unsigned char val) { d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(short val) { d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(unsigned short val) { d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(int val) { d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(unsigned int val) { d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(long val) { d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(unsigned long val) { d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(ap_slong val) { d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(ap_ulong val) { d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
# 820 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_ref.h"
  inline __attribute__((always_inline)) ap_bit_ref& operator=(half val) { bool tmp_val = val; d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(tmp_val) __Repl2__ = !!tmp_val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(float val) { bool tmp_val = val; d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(tmp_val) __Repl2__ = !!tmp_val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(double val) { bool tmp_val = val; d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(tmp_val) __Repl2__ = !!tmp_val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }




  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_bit_ref& operator=(const ap_int_base<_AP_W2, _AP_S2>& val) {
    return operator=((ap_ulong)(val.V != 0));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_bit_ref& operator=(const ap_range_ref<_AP_W2, _AP_S2>& val) {
    return operator=((ap_int_base<_AP_W2, false>)val);
  }



  inline __attribute__((always_inline)) ap_bit_ref& operator=(const ap_bit_ref& val) {
    return operator=((ap_ulong)(bool)val);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_bit_ref& operator=(const ap_bit_ref<_AP_W2, _AP_S2>& val) {
    return operator=((ap_ulong)(bool)val);
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_bit_ref& operator=(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& val) {
    return operator=((const ap_int_base<_AP_W2, false>)val);
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_bit_ref& operator=(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& val) {
    return operator=((ap_ulong)(bool)val);
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_bit_ref& operator=(
      const ap_concat_ref<_AP_W2, _AP_T3, _AP_W3, _AP_T3>& val) {
    return operator=((const ap_int_base<_AP_W2 + _AP_W3, false>)val);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<1, ap_bit_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  operator,(ap_int_base<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<1, ap_bit_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >(
        *this, a2);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<1, ap_bit_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  operator,(volatile ap_int_base<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<1, ap_bit_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_int_base<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<1, ap_bit_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  operator,(const ap_int_base<_AP_W2, _AP_S2> &a2) {
    ap_int_base<_AP_W2, _AP_S2> op(a2);
    return ap_concat_ref<1, ap_bit_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_int_base<_AP_W2, _AP_S2>&>(op));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<1, ap_bit_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  operator,(const volatile ap_int_base<_AP_W2, _AP_S2> &a2) {
    ap_int_base<_AP_W2, _AP_S2> op(a2);
    return ap_concat_ref<1, ap_bit_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_int_base<_AP_W2, _AP_S2>&>(op));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<1, ap_bit_ref, _AP_W2, ap_range_ref<_AP_W2, _AP_S2> >
  operator,(const ap_range_ref<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<1, ap_bit_ref, _AP_W2, ap_range_ref<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_range_ref<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<1, ap_bit_ref, 1, ap_bit_ref<_AP_W2, _AP_S2> > operator,(
      const ap_bit_ref<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<1, ap_bit_ref, 1, ap_bit_ref<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_bit_ref<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_concat_ref<1, ap_bit_ref, _AP_W2 + _AP_W3,
                       ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >
  operator,(const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> &a2) {
    return ap_concat_ref<1, ap_bit_ref, _AP_W2 + _AP_W3,
                         ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >(
        *this, const_cast<ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>&>(a2));
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_concat_ref<
      1, ap_bit_ref, _AP_W2,
      af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >
  operator,(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> &a2) {
    return ap_concat_ref<
        1, ap_bit_ref, _AP_W2,
        af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >(
        *this,
        const_cast<
            af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&>(a2));
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_concat_ref<1, ap_bit_ref, 1, af_bit_ref<_AP_W2, _AP_I2, _AP_S2,
                                                    _AP_Q2, _AP_O2, _AP_N2> >
  operator,(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> &a2) {
    return ap_concat_ref<1, ap_bit_ref, 1, af_bit_ref<_AP_W2, _AP_I2, _AP_S2,
                                                      _AP_Q2, _AP_O2, _AP_N2> >(
        *this,
        const_cast<af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&>(
            a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator==(const ap_bit_ref<_AP_W2, _AP_S2>& op) {
    return get() == op.get();
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator!=(const ap_bit_ref<_AP_W2, _AP_S2>& op) {
    return get() != op.get();
  }

  inline __attribute__((always_inline)) bool get() const { return ({ __typeof__(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), d_index); __Result__; }); }

  inline __attribute__((always_inline)) bool get() { return ({ __typeof__(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), d_index); __Result__; }); }

  template <int _AP_W3>
  inline __attribute__((always_inline)) void set(const ap_int_base<_AP_W3, false>& val) {
    operator=(val);
  }

  inline __attribute__((always_inline)) bool operator~() const {
    bool bit = ({ __typeof__(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), d_index); __Result__; });
    return bit ? false : true;
  }

  inline __attribute__((always_inline)) int length() const { return 1; }





  inline __attribute__((always_inline)) char* to_string() const { return 0; }

};
# 1018 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_ref.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, bool op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(bool op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, bool op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, bool op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(bool op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, bool op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, bool op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(bool op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, bool op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, bool op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(bool op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, bool op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<1, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, char op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, char op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, char op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, char op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<8, CHAR_IS_SIGNED>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, signed char op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(signed char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, signed char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, signed char op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(signed char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, signed char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, signed char op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(signed char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, signed char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, signed char op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(signed char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, signed char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<8, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned char op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(unsigned char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned char op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(unsigned char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned char op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(unsigned char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned char op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(unsigned char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<8, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, short op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, short op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, short op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, short op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<_AP_SIZE_short, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned short op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(unsigned short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned short op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(unsigned short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned short op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(unsigned short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned short op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(unsigned short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<_AP_SIZE_short, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, int op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, int op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, int op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, int op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<_AP_SIZE_int, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned int op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(unsigned int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned int op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(unsigned int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned int op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(unsigned int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned int op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(unsigned int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<_AP_SIZE_int, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, long op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, long op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, long op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, long op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<_AP_SIZE_long, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned long op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(unsigned long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned long op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(unsigned long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned long op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(unsigned long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned long op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(unsigned long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<_AP_SIZE_long, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, ap_slong op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(ap_slong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_slong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, ap_slong op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(ap_slong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_slong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, ap_slong op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(ap_slong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_slong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, ap_slong op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(ap_slong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_slong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<_AP_SIZE_ap_slong, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(ap_ulong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_ulong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(ap_ulong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_ulong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(ap_ulong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_ulong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(ap_ulong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_ulong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<_AP_SIZE_ap_slong, false>(op2); }






template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, bool op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(bool op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, bool op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, bool op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(bool op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, bool op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<1, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, char op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, char op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<8, CHAR_IS_SIGNED>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, signed char op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(signed char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, signed char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, signed char op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(signed char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, signed char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<8, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned char op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(unsigned char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned char op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(unsigned char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<8, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, short op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, short op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<_AP_SIZE_short, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned short op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(unsigned short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned short op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(unsigned short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<_AP_SIZE_short, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, int op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, int op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<_AP_SIZE_int, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned int op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(unsigned int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned int op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(unsigned int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<_AP_SIZE_int, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, long op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, long op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<_AP_SIZE_long, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned long op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(unsigned long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned long op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(unsigned long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<_AP_SIZE_long, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, ap_slong op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(ap_slong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_slong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, ap_slong op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(ap_slong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_slong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<_AP_SIZE_ap_slong, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(ap_ulong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_ulong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(ap_ulong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_ulong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<_AP_SIZE_ap_slong, false>(op2); }
# 1077 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_ref.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(1), (false)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(1), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(1), (false)>::template RType<_AP_W, false>::plus operator +(bool op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(1), (false)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(1), (false)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(1), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(1), (false)>::template RType<_AP_W, false>::minus operator -(bool op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(1), (false)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(1), (false)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(1), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(1), (false)>::template RType<_AP_W, false>::mult operator *(bool op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(1), (false)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(1), (false)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(1), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(1), (false)>::template RType<_AP_W, false>::div operator /(bool op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(1), (false)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(1), (false)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(1), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(1), (false)>::template RType<_AP_W, false>::mod operator %(bool op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(1), (false)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (CHAR_IS_SIGNED)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (CHAR_IS_SIGNED)>::template RType<_AP_W, false>::plus operator +(char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (CHAR_IS_SIGNED)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (CHAR_IS_SIGNED)>::template RType<_AP_W, false>::minus operator -(char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (CHAR_IS_SIGNED)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (CHAR_IS_SIGNED)>::template RType<_AP_W, false>::mult operator *(char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (CHAR_IS_SIGNED)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (CHAR_IS_SIGNED)>::template RType<_AP_W, false>::div operator /(char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (CHAR_IS_SIGNED)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (CHAR_IS_SIGNED)>::template RType<_AP_W, false>::mod operator %(char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (true)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(8), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (true)>::template RType<_AP_W, false>::plus operator +(signed char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (true)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (true)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(8), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (true)>::template RType<_AP_W, false>::minus operator -(signed char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (true)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (true)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(8), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (true)>::template RType<_AP_W, false>::mult operator *(signed char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (true)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (true)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(8), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (true)>::template RType<_AP_W, false>::div operator /(signed char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (true)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (true)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(8), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (true)>::template RType<_AP_W, false>::mod operator %(signed char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (true)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (false)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(8), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (false)>::template RType<_AP_W, false>::plus operator +(unsigned char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (false)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (false)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(8), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (false)>::template RType<_AP_W, false>::minus operator -(unsigned char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (false)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (false)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(8), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (false)>::template RType<_AP_W, false>::mult operator *(unsigned char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (false)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (false)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(8), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (false)>::template RType<_AP_W, false>::div operator /(unsigned char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (false)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (false)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(8), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (false)>::template RType<_AP_W, false>::mod operator %(unsigned char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (false)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (true)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (true)>::template RType<_AP_W, false>::plus operator +(short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (true)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (true)>::template RType<_AP_W, false>::minus operator -(short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (true)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (true)>::template RType<_AP_W, false>::mult operator *(short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (true)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (true)>::template RType<_AP_W, false>::div operator /(short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (true)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (true)>::template RType<_AP_W, false>::mod operator %(short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (false)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (false)>::template RType<_AP_W, false>::plus operator +(unsigned short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (false)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (false)>::template RType<_AP_W, false>::minus operator -(unsigned short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (false)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (false)>::template RType<_AP_W, false>::mult operator *(unsigned short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (false)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (false)>::template RType<_AP_W, false>::div operator /(unsigned short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (false)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (false)>::template RType<_AP_W, false>::mod operator %(unsigned short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (true)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (true)>::template RType<_AP_W, false>::plus operator +(int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (true)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (true)>::template RType<_AP_W, false>::minus operator -(int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (true)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (true)>::template RType<_AP_W, false>::mult operator *(int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (true)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (true)>::template RType<_AP_W, false>::div operator /(int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (true)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (true)>::template RType<_AP_W, false>::mod operator %(int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (false)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (false)>::template RType<_AP_W, false>::plus operator +(unsigned int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (false)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (false)>::template RType<_AP_W, false>::minus operator -(unsigned int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (false)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (false)>::template RType<_AP_W, false>::mult operator *(unsigned int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (false)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (false)>::template RType<_AP_W, false>::div operator /(unsigned int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (false)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (false)>::template RType<_AP_W, false>::mod operator %(unsigned int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (true)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (true)>::template RType<_AP_W, false>::plus operator +(long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (true)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (true)>::template RType<_AP_W, false>::minus operator -(long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (true)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (true)>::template RType<_AP_W, false>::mult operator *(long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (true)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (true)>::template RType<_AP_W, false>::div operator /(long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (true)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (true)>::template RType<_AP_W, false>::mod operator %(long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (false)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (false)>::template RType<_AP_W, false>::plus operator +(unsigned long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (false)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (false)>::template RType<_AP_W, false>::minus operator -(unsigned long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (false)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (false)>::template RType<_AP_W, false>::mult operator *(unsigned long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (false)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (false)>::template RType<_AP_W, false>::div operator /(unsigned long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (false)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (false)>::template RType<_AP_W, false>::mod operator %(unsigned long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (true)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (true)>::template RType<_AP_W, false>::plus operator +(ap_slong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (true)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (true)>::template RType<_AP_W, false>::minus operator -(ap_slong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (true)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (true)>::template RType<_AP_W, false>::mult operator *(ap_slong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (true)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (true)>::template RType<_AP_W, false>::div operator /(ap_slong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (true)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (true)>::template RType<_AP_W, false>::mod operator %(ap_slong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (false)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (false)>::template RType<_AP_W, false>::plus operator +(ap_ulong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (false)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (false)>::template RType<_AP_W, false>::minus operator -(ap_ulong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (false)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (false)>::template RType<_AP_W, false>::mult operator *(ap_ulong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (false)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (false)>::template RType<_AP_W, false>::div operator /(ap_ulong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (false)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (false)>::template RType<_AP_W, false>::mod operator %(ap_ulong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) % ap_int_base<_AP_W, false>(op); }
# 1100 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_ref.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(1), (false)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(1), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(1), (false)>::template RType<_AP_W, false>::logic operator &(bool op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(1), (false)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(1), (false)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(1), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(1), (false)>::template RType<_AP_W, false>::logic operator |(bool op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(1), (false)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(1), (false)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(1), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(1), (false)>::template RType<_AP_W, false>::logic operator ^(bool op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(1), (false)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(1), (false)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(1), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(1), (false)>::template RType<_AP_W, false>::arg1 operator >>(bool op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(1), (false)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(1), (false)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(1), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(1), (false)>::template RType<_AP_W, false>::arg1 operator <<(bool op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(1), (false)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (CHAR_IS_SIGNED)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (CHAR_IS_SIGNED)>::template RType<_AP_W, false>::logic operator &(char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (CHAR_IS_SIGNED)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (CHAR_IS_SIGNED)>::template RType<_AP_W, false>::logic operator |(char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (CHAR_IS_SIGNED)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (CHAR_IS_SIGNED)>::template RType<_AP_W, false>::logic operator ^(char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (CHAR_IS_SIGNED)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (CHAR_IS_SIGNED)>::template RType<_AP_W, false>::arg1 operator >>(char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (CHAR_IS_SIGNED)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (CHAR_IS_SIGNED)>::template RType<_AP_W, false>::arg1 operator <<(char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (true)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(8), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (true)>::template RType<_AP_W, false>::logic operator &(signed char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (true)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (true)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(8), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (true)>::template RType<_AP_W, false>::logic operator |(signed char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (true)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (true)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(8), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (true)>::template RType<_AP_W, false>::logic operator ^(signed char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (true)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (true)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(8), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (true)>::template RType<_AP_W, false>::arg1 operator >>(signed char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (true)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (true)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(8), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (true)>::template RType<_AP_W, false>::arg1 operator <<(signed char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (true)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (false)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(8), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (false)>::template RType<_AP_W, false>::logic operator &(unsigned char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (false)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (false)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(8), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (false)>::template RType<_AP_W, false>::logic operator |(unsigned char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (false)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (false)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(8), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (false)>::template RType<_AP_W, false>::logic operator ^(unsigned char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (false)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (false)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(8), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (false)>::template RType<_AP_W, false>::arg1 operator >>(unsigned char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (false)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (false)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(8), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (false)>::template RType<_AP_W, false>::arg1 operator <<(unsigned char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (false)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (true)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (true)>::template RType<_AP_W, false>::logic operator &(short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (true)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (true)>::template RType<_AP_W, false>::logic operator |(short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (true)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (true)>::template RType<_AP_W, false>::logic operator ^(short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (true)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (true)>::template RType<_AP_W, false>::arg1 operator >>(short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (true)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (true)>::template RType<_AP_W, false>::arg1 operator <<(short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (false)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (false)>::template RType<_AP_W, false>::logic operator &(unsigned short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (false)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (false)>::template RType<_AP_W, false>::logic operator |(unsigned short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (false)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (false)>::template RType<_AP_W, false>::logic operator ^(unsigned short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (false)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (false)>::template RType<_AP_W, false>::arg1 operator >>(unsigned short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (false)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (false)>::template RType<_AP_W, false>::arg1 operator <<(unsigned short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (true)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (true)>::template RType<_AP_W, false>::logic operator &(int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (true)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (true)>::template RType<_AP_W, false>::logic operator |(int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (true)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (true)>::template RType<_AP_W, false>::logic operator ^(int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (true)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (true)>::template RType<_AP_W, false>::arg1 operator >>(int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (true)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (true)>::template RType<_AP_W, false>::arg1 operator <<(int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (false)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (false)>::template RType<_AP_W, false>::logic operator &(unsigned int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (false)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (false)>::template RType<_AP_W, false>::logic operator |(unsigned int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (false)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (false)>::template RType<_AP_W, false>::logic operator ^(unsigned int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (false)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (false)>::template RType<_AP_W, false>::arg1 operator >>(unsigned int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (false)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (false)>::template RType<_AP_W, false>::arg1 operator <<(unsigned int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (true)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (true)>::template RType<_AP_W, false>::logic operator &(long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (true)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (true)>::template RType<_AP_W, false>::logic operator |(long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (true)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (true)>::template RType<_AP_W, false>::logic operator ^(long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (true)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (true)>::template RType<_AP_W, false>::arg1 operator >>(long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (true)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (true)>::template RType<_AP_W, false>::arg1 operator <<(long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (false)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (false)>::template RType<_AP_W, false>::logic operator &(unsigned long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (false)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (false)>::template RType<_AP_W, false>::logic operator |(unsigned long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (false)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (false)>::template RType<_AP_W, false>::logic operator ^(unsigned long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (false)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (false)>::template RType<_AP_W, false>::arg1 operator >>(unsigned long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (false)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (false)>::template RType<_AP_W, false>::arg1 operator <<(unsigned long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (true)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (true)>::template RType<_AP_W, false>::logic operator &(ap_slong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (true)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (true)>::template RType<_AP_W, false>::logic operator |(ap_slong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (true)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (true)>::template RType<_AP_W, false>::logic operator ^(ap_slong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (true)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (true)>::template RType<_AP_W, false>::arg1 operator >>(ap_slong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (true)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (true)>::template RType<_AP_W, false>::arg1 operator <<(ap_slong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (false)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (false)>::template RType<_AP_W, false>::logic operator &(ap_ulong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (false)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (false)>::template RType<_AP_W, false>::logic operator |(ap_ulong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (false)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (false)>::template RType<_AP_W, false>::logic operator ^(ap_ulong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (false)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (false)>::template RType<_AP_W, false>::arg1 operator >>(ap_ulong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (false)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (false)>::template RType<_AP_W, false>::arg1 operator <<(ap_ulong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) << ap_int_base<_AP_W, false>(op); }
# 1128 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_ref.h"
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<_AP_W2, false>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& lhs, const ap_range_ref<_AP_W2, _AP_S2>& rhs) { return (lhs.operator ap_int_base<_AP_W, false>())+( rhs.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<_AP_W2, false>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& lhs, const ap_range_ref<_AP_W2, _AP_S2>& rhs) { return (lhs.operator ap_int_base<_AP_W, false>())-( rhs.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<_AP_W2, false>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& lhs, const ap_range_ref<_AP_W2, _AP_S2>& rhs) { return (lhs.operator ap_int_base<_AP_W, false>())*( rhs.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<_AP_W2, false>::div operator /(const ap_range_ref<_AP_W, _AP_S>& lhs, const ap_range_ref<_AP_W2, _AP_S2>& rhs) { return (lhs.operator ap_int_base<_AP_W, false>())/( rhs.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<_AP_W2, false>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& lhs, const ap_range_ref<_AP_W2, _AP_S2>& rhs) { return (lhs.operator ap_int_base<_AP_W, false>())%( rhs.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<_AP_W2, false>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& lhs, const ap_range_ref<_AP_W2, _AP_S2>& rhs) { return (lhs.operator ap_int_base<_AP_W, false>())&( rhs.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<_AP_W2, false>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& lhs, const ap_range_ref<_AP_W2, _AP_S2>& rhs) { return (lhs.operator ap_int_base<_AP_W, false>())|( rhs.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<_AP_W2, false>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& lhs, const ap_range_ref<_AP_W2, _AP_S2>& rhs) { return (lhs.operator ap_int_base<_AP_W, false>())^( rhs.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<_AP_W2, false>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& lhs, const ap_range_ref<_AP_W2, _AP_S2>& rhs) { return (lhs.operator ap_int_base<_AP_W, false>())>>( rhs.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<_AP_W2, false>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& lhs, const ap_range_ref<_AP_W2, _AP_S2>& rhs) { return (lhs.operator ap_int_base<_AP_W, false>())<<( rhs.operator ap_int_base<_AP_W2, false>()); }
# 1177 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_ref.h"
template <int _AP_LW1, typename _AP_LT1, int _AP_LW2, typename _AP_LT2, int _AP_RW1, typename _AP_RT1, int _AP_RW2, typename _AP_RT2> inline __attribute__((always_inline)) typename ap_int_base<_AP_LW1 + _AP_LW2, false>::template RType< _AP_RW1 + _AP_RW2, false>::plus operator +( const ap_concat_ref<_AP_LW1, _AP_LT1, _AP_LW2, _AP_LT2>& lhs, const ap_concat_ref<_AP_RW1, _AP_RT1, _AP_RW2, _AP_RT2>& rhs) { return lhs.get() + rhs.get(); }
template <int _AP_LW1, typename _AP_LT1, int _AP_LW2, typename _AP_LT2, int _AP_RW1, typename _AP_RT1, int _AP_RW2, typename _AP_RT2> inline __attribute__((always_inline)) typename ap_int_base<_AP_LW1 + _AP_LW2, false>::template RType< _AP_RW1 + _AP_RW2, false>::minus operator -( const ap_concat_ref<_AP_LW1, _AP_LT1, _AP_LW2, _AP_LT2>& lhs, const ap_concat_ref<_AP_RW1, _AP_RT1, _AP_RW2, _AP_RT2>& rhs) { return lhs.get() - rhs.get(); }
template <int _AP_LW1, typename _AP_LT1, int _AP_LW2, typename _AP_LT2, int _AP_RW1, typename _AP_RT1, int _AP_RW2, typename _AP_RT2> inline __attribute__((always_inline)) typename ap_int_base<_AP_LW1 + _AP_LW2, false>::template RType< _AP_RW1 + _AP_RW2, false>::mult operator *( const ap_concat_ref<_AP_LW1, _AP_LT1, _AP_LW2, _AP_LT2>& lhs, const ap_concat_ref<_AP_RW1, _AP_RT1, _AP_RW2, _AP_RT2>& rhs) { return lhs.get() * rhs.get(); }
template <int _AP_LW1, typename _AP_LT1, int _AP_LW2, typename _AP_LT2, int _AP_RW1, typename _AP_RT1, int _AP_RW2, typename _AP_RT2> inline __attribute__((always_inline)) typename ap_int_base<_AP_LW1 + _AP_LW2, false>::template RType< _AP_RW1 + _AP_RW2, false>::div operator /( const ap_concat_ref<_AP_LW1, _AP_LT1, _AP_LW2, _AP_LT2>& lhs, const ap_concat_ref<_AP_RW1, _AP_RT1, _AP_RW2, _AP_RT2>& rhs) { return lhs.get() / rhs.get(); }
template <int _AP_LW1, typename _AP_LT1, int _AP_LW2, typename _AP_LT2, int _AP_RW1, typename _AP_RT1, int _AP_RW2, typename _AP_RT2> inline __attribute__((always_inline)) typename ap_int_base<_AP_LW1 + _AP_LW2, false>::template RType< _AP_RW1 + _AP_RW2, false>::mod operator %( const ap_concat_ref<_AP_LW1, _AP_LT1, _AP_LW2, _AP_LT2>& lhs, const ap_concat_ref<_AP_RW1, _AP_RT1, _AP_RW2, _AP_RT2>& rhs) { return lhs.get() % rhs.get(); }
template <int _AP_LW1, typename _AP_LT1, int _AP_LW2, typename _AP_LT2, int _AP_RW1, typename _AP_RT1, int _AP_RW2, typename _AP_RT2> inline __attribute__((always_inline)) typename ap_int_base<_AP_LW1 + _AP_LW2, false>::template RType< _AP_RW1 + _AP_RW2, false>::logic operator &( const ap_concat_ref<_AP_LW1, _AP_LT1, _AP_LW2, _AP_LT2>& lhs, const ap_concat_ref<_AP_RW1, _AP_RT1, _AP_RW2, _AP_RT2>& rhs) { return lhs.get() & rhs.get(); }
template <int _AP_LW1, typename _AP_LT1, int _AP_LW2, typename _AP_LT2, int _AP_RW1, typename _AP_RT1, int _AP_RW2, typename _AP_RT2> inline __attribute__((always_inline)) typename ap_int_base<_AP_LW1 + _AP_LW2, false>::template RType< _AP_RW1 + _AP_RW2, false>::logic operator |( const ap_concat_ref<_AP_LW1, _AP_LT1, _AP_LW2, _AP_LT2>& lhs, const ap_concat_ref<_AP_RW1, _AP_RT1, _AP_RW2, _AP_RT2>& rhs) { return lhs.get() | rhs.get(); }
template <int _AP_LW1, typename _AP_LT1, int _AP_LW2, typename _AP_LT2, int _AP_RW1, typename _AP_RT1, int _AP_RW2, typename _AP_RT2> inline __attribute__((always_inline)) typename ap_int_base<_AP_LW1 + _AP_LW2, false>::template RType< _AP_RW1 + _AP_RW2, false>::logic operator ^( const ap_concat_ref<_AP_LW1, _AP_LT1, _AP_LW2, _AP_LT2>& lhs, const ap_concat_ref<_AP_RW1, _AP_RT1, _AP_RW2, _AP_RT2>& rhs) { return lhs.get() ^ rhs.get(); }
template <int _AP_LW1, typename _AP_LT1, int _AP_LW2, typename _AP_LT2, int _AP_RW1, typename _AP_RT1, int _AP_RW2, typename _AP_RT2> inline __attribute__((always_inline)) typename ap_int_base<_AP_LW1 + _AP_LW2, false>::template RType< _AP_RW1 + _AP_RW2, false>::arg1 operator >>( const ap_concat_ref<_AP_LW1, _AP_LT1, _AP_LW2, _AP_LT2>& lhs, const ap_concat_ref<_AP_RW1, _AP_RT1, _AP_RW2, _AP_RT2>& rhs) { return lhs.get() >> rhs.get(); }
template <int _AP_LW1, typename _AP_LT1, int _AP_LW2, typename _AP_LT2, int _AP_RW1, typename _AP_RT1, int _AP_RW2, typename _AP_RT2> inline __attribute__((always_inline)) typename ap_int_base<_AP_LW1 + _AP_LW2, false>::template RType< _AP_RW1 + _AP_RW2, false>::arg1 operator <<( const ap_concat_ref<_AP_LW1, _AP_LT1, _AP_LW2, _AP_LT2>& lhs, const ap_concat_ref<_AP_RW1, _AP_RT1, _AP_RW2, _AP_RT2>& rhs) { return lhs.get() << rhs.get(); }
# 1324 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_ref.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 1, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, bool op2) { ap_int_base<1 + _AP_W, false> val(op2); ap_int_base<1 + _AP_W, false> ret(op1); ret <<= 1; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 1, false> operator,( bool op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<1 + _AP_W, false> val(op1); ap_int_base<1 + _AP_W, false> ret(op2); if (_AP_S) { ret <<= 1; ret >>= 1; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 1, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, bool op2) { ap_int_base<1 + _AP_W, false> val(op2); ap_int_base<1 + _AP_W, false> ret(op1); ret <<= 1; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 1, false> operator,( bool op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<1 + _AP_W, false> val(op1); ap_int_base<1 + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<1 + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, bool op2) { ap_int_base<1 + 1, false> val(op2); val[1] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<1 + 1, false> operator,( bool op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<1 + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + 1, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, bool op2) { ap_int_base<1 + _AP_W + _AP_W2, false> val(op2); ap_int_base<1 + _AP_W + _AP_W2, false> ret(op1); if (false) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= 1; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + 1, false> operator,( bool op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<1 + _AP_W + _AP_W2, false> val(op1); ap_int_base<1 + _AP_W + _AP_W2, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + 1, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, bool op2) { ap_int_base<1 + _AP_W, false> val(op2); ap_int_base<1 + _AP_W, false> ret(op1); if (false) { val <<= _AP_W; val >>= _AP_W; } ret <<= 1; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + 1, false> operator,( bool op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<1 + _AP_W, false> val(op1); ap_int_base<1 + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + 1, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, bool op2) { ap_int_base<1 + 1, false> val(op2); val[1] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + 1, false> operator,( bool op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<1 + 1, false> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, char op2) { ap_int_base<8 + _AP_W, false> val(op2); ap_int_base<8 + _AP_W, false> ret(op1); ret <<= 8; if (CHAR_IS_SIGNED) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( char op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<8 + _AP_W, false> val(op1); ap_int_base<8 + _AP_W, false> ret(op2); if (_AP_S) { ret <<= 8; ret >>= 8; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, char op2) { ap_int_base<8 + _AP_W, false> val(op2); ap_int_base<8 + _AP_W, false> ret(op1); ret <<= 8; if (CHAR_IS_SIGNED) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( char op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<8 + _AP_W, false> val(op1); ap_int_base<8 + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<8 + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, char op2) { ap_int_base<8 + 1, false> val(op2); val[8] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<8 + 1, false> operator,( char op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<8 + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + 8, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, char op2) { ap_int_base<8 + _AP_W + _AP_W2, CHAR_IS_SIGNED> val(op2); ap_int_base<8 + _AP_W + _AP_W2, CHAR_IS_SIGNED> ret(op1); if (CHAR_IS_SIGNED) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= 8; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + 8, false> operator,( char op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<8 + _AP_W + _AP_W2, CHAR_IS_SIGNED> val(op1); ap_int_base<8 + _AP_W + _AP_W2, CHAR_IS_SIGNED> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, char op2) { ap_int_base<8 + _AP_W, false> val(op2); ap_int_base<8 + _AP_W, false> ret(op1); if (CHAR_IS_SIGNED) { val <<= _AP_W; val >>= _AP_W; } ret <<= 8; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( char op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<8 + _AP_W, false> val(op1); ap_int_base<8 + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + 8, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, char op2) { ap_int_base<8 + 1, CHAR_IS_SIGNED> val(op2); val[8] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + 8, false> operator,( char op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<8 + 1, CHAR_IS_SIGNED> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, signed char op2) { ap_int_base<8 + _AP_W, false> val(op2); ap_int_base<8 + _AP_W, false> ret(op1); ret <<= 8; if (true) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( signed char op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<8 + _AP_W, false> val(op1); ap_int_base<8 + _AP_W, false> ret(op2); if (_AP_S) { ret <<= 8; ret >>= 8; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, signed char op2) { ap_int_base<8 + _AP_W, false> val(op2); ap_int_base<8 + _AP_W, false> ret(op1); ret <<= 8; if (true) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( signed char op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<8 + _AP_W, false> val(op1); ap_int_base<8 + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<8 + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, signed char op2) { ap_int_base<8 + 1, false> val(op2); val[8] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<8 + 1, false> operator,( signed char op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<8 + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + 8, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, signed char op2) { ap_int_base<8 + _AP_W + _AP_W2, true> val(op2); ap_int_base<8 + _AP_W + _AP_W2, true> ret(op1); if (true) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= 8; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + 8, false> operator,( signed char op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<8 + _AP_W + _AP_W2, true> val(op1); ap_int_base<8 + _AP_W + _AP_W2, true> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, signed char op2) { ap_int_base<8 + _AP_W, false> val(op2); ap_int_base<8 + _AP_W, false> ret(op1); if (true) { val <<= _AP_W; val >>= _AP_W; } ret <<= 8; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( signed char op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<8 + _AP_W, false> val(op1); ap_int_base<8 + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + 8, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, signed char op2) { ap_int_base<8 + 1, true> val(op2); val[8] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + 8, false> operator,( signed char op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<8 + 1, true> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, unsigned char op2) { ap_int_base<8 + _AP_W, false> val(op2); ap_int_base<8 + _AP_W, false> ret(op1); ret <<= 8; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( unsigned char op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<8 + _AP_W, false> val(op1); ap_int_base<8 + _AP_W, false> ret(op2); if (_AP_S) { ret <<= 8; ret >>= 8; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, unsigned char op2) { ap_int_base<8 + _AP_W, false> val(op2); ap_int_base<8 + _AP_W, false> ret(op1); ret <<= 8; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( unsigned char op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<8 + _AP_W, false> val(op1); ap_int_base<8 + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<8 + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, unsigned char op2) { ap_int_base<8 + 1, false> val(op2); val[8] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<8 + 1, false> operator,( unsigned char op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<8 + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + 8, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, unsigned char op2) { ap_int_base<8 + _AP_W + _AP_W2, false> val(op2); ap_int_base<8 + _AP_W + _AP_W2, false> ret(op1); if (false) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= 8; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + 8, false> operator,( unsigned char op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<8 + _AP_W + _AP_W2, false> val(op1); ap_int_base<8 + _AP_W + _AP_W2, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, unsigned char op2) { ap_int_base<8 + _AP_W, false> val(op2); ap_int_base<8 + _AP_W, false> ret(op1); if (false) { val <<= _AP_W; val >>= _AP_W; } ret <<= 8; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( unsigned char op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<8 + _AP_W, false> val(op1); ap_int_base<8 + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + 8, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, unsigned char op2) { ap_int_base<8 + 1, false> val(op2); val[8] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + 8, false> operator,( unsigned char op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<8 + 1, false> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, short op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op1); ret <<= _AP_SIZE_short; if (true) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( short op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op2); if (_AP_S) { ret <<= _AP_SIZE_short; ret >>= _AP_SIZE_short; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, short op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op1); ret <<= _AP_SIZE_short; if (true) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( short op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_short + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, short op2) { ap_int_base<_AP_SIZE_short + 1, false> val(op2); val[_AP_SIZE_short] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_short + 1, false> operator,( short op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_short + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_short, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, short op2) { ap_int_base<_AP_SIZE_short + _AP_W + _AP_W2, true> val(op2); ap_int_base<_AP_SIZE_short + _AP_W + _AP_W2, true> ret(op1); if (true) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= _AP_SIZE_short; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_short, false> operator,( short op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<_AP_SIZE_short + _AP_W + _AP_W2, true> val(op1); ap_int_base<_AP_SIZE_short + _AP_W + _AP_W2, true> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, short op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op1); if (true) { val <<= _AP_W; val >>= _AP_W; } ret <<= _AP_SIZE_short; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( short op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_short, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, short op2) { ap_int_base<_AP_SIZE_short + 1, true> val(op2); val[_AP_SIZE_short] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_short, false> operator,( short op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_short + 1, true> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, unsigned short op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op1); ret <<= _AP_SIZE_short; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( unsigned short op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op2); if (_AP_S) { ret <<= _AP_SIZE_short; ret >>= _AP_SIZE_short; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, unsigned short op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op1); ret <<= _AP_SIZE_short; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( unsigned short op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_short + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, unsigned short op2) { ap_int_base<_AP_SIZE_short + 1, false> val(op2); val[_AP_SIZE_short] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_short + 1, false> operator,( unsigned short op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_short + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_short, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, unsigned short op2) { ap_int_base<_AP_SIZE_short + _AP_W + _AP_W2, false> val(op2); ap_int_base<_AP_SIZE_short + _AP_W + _AP_W2, false> ret(op1); if (false) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= _AP_SIZE_short; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_short, false> operator,( unsigned short op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<_AP_SIZE_short + _AP_W + _AP_W2, false> val(op1); ap_int_base<_AP_SIZE_short + _AP_W + _AP_W2, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, unsigned short op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op1); if (false) { val <<= _AP_W; val >>= _AP_W; } ret <<= _AP_SIZE_short; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( unsigned short op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_short, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, unsigned short op2) { ap_int_base<_AP_SIZE_short + 1, false> val(op2); val[_AP_SIZE_short] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_short, false> operator,( unsigned short op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_short + 1, false> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, int op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op1); ret <<= _AP_SIZE_int; if (true) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( int op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op2); if (_AP_S) { ret <<= _AP_SIZE_int; ret >>= _AP_SIZE_int; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, int op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op1); ret <<= _AP_SIZE_int; if (true) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( int op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_int + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, int op2) { ap_int_base<_AP_SIZE_int + 1, false> val(op2); val[_AP_SIZE_int] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_int + 1, false> operator,( int op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_int + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_int, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, int op2) { ap_int_base<_AP_SIZE_int + _AP_W + _AP_W2, true> val(op2); ap_int_base<_AP_SIZE_int + _AP_W + _AP_W2, true> ret(op1); if (true) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= _AP_SIZE_int; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_int, false> operator,( int op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<_AP_SIZE_int + _AP_W + _AP_W2, true> val(op1); ap_int_base<_AP_SIZE_int + _AP_W + _AP_W2, true> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, int op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op1); if (true) { val <<= _AP_W; val >>= _AP_W; } ret <<= _AP_SIZE_int; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( int op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_int, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, int op2) { ap_int_base<_AP_SIZE_int + 1, true> val(op2); val[_AP_SIZE_int] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_int, false> operator,( int op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_int + 1, true> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, unsigned int op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op1); ret <<= _AP_SIZE_int; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( unsigned int op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op2); if (_AP_S) { ret <<= _AP_SIZE_int; ret >>= _AP_SIZE_int; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, unsigned int op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op1); ret <<= _AP_SIZE_int; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( unsigned int op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_int + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, unsigned int op2) { ap_int_base<_AP_SIZE_int + 1, false> val(op2); val[_AP_SIZE_int] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_int + 1, false> operator,( unsigned int op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_int + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_int, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, unsigned int op2) { ap_int_base<_AP_SIZE_int + _AP_W + _AP_W2, false> val(op2); ap_int_base<_AP_SIZE_int + _AP_W + _AP_W2, false> ret(op1); if (false) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= _AP_SIZE_int; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_int, false> operator,( unsigned int op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<_AP_SIZE_int + _AP_W + _AP_W2, false> val(op1); ap_int_base<_AP_SIZE_int + _AP_W + _AP_W2, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, unsigned int op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op1); if (false) { val <<= _AP_W; val >>= _AP_W; } ret <<= _AP_SIZE_int; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( unsigned int op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_int, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, unsigned int op2) { ap_int_base<_AP_SIZE_int + 1, false> val(op2); val[_AP_SIZE_int] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_int, false> operator,( unsigned int op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_int + 1, false> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, long op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op1); ret <<= _AP_SIZE_long; if (true) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( long op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op2); if (_AP_S) { ret <<= _AP_SIZE_long; ret >>= _AP_SIZE_long; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, long op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op1); ret <<= _AP_SIZE_long; if (true) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( long op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_long + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, long op2) { ap_int_base<_AP_SIZE_long + 1, false> val(op2); val[_AP_SIZE_long] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_long + 1, false> operator,( long op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_long + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_long, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, long op2) { ap_int_base<_AP_SIZE_long + _AP_W + _AP_W2, true> val(op2); ap_int_base<_AP_SIZE_long + _AP_W + _AP_W2, true> ret(op1); if (true) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= _AP_SIZE_long; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_long, false> operator,( long op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<_AP_SIZE_long + _AP_W + _AP_W2, true> val(op1); ap_int_base<_AP_SIZE_long + _AP_W + _AP_W2, true> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, long op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op1); if (true) { val <<= _AP_W; val >>= _AP_W; } ret <<= _AP_SIZE_long; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( long op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_long, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, long op2) { ap_int_base<_AP_SIZE_long + 1, true> val(op2); val[_AP_SIZE_long] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_long, false> operator,( long op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_long + 1, true> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, unsigned long op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op1); ret <<= _AP_SIZE_long; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( unsigned long op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op2); if (_AP_S) { ret <<= _AP_SIZE_long; ret >>= _AP_SIZE_long; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, unsigned long op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op1); ret <<= _AP_SIZE_long; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( unsigned long op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_long + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, unsigned long op2) { ap_int_base<_AP_SIZE_long + 1, false> val(op2); val[_AP_SIZE_long] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_long + 1, false> operator,( unsigned long op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_long + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_long, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, unsigned long op2) { ap_int_base<_AP_SIZE_long + _AP_W + _AP_W2, false> val(op2); ap_int_base<_AP_SIZE_long + _AP_W + _AP_W2, false> ret(op1); if (false) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= _AP_SIZE_long; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_long, false> operator,( unsigned long op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<_AP_SIZE_long + _AP_W + _AP_W2, false> val(op1); ap_int_base<_AP_SIZE_long + _AP_W + _AP_W2, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, unsigned long op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op1); if (false) { val <<= _AP_W; val >>= _AP_W; } ret <<= _AP_SIZE_long; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( unsigned long op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_long, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, unsigned long op2) { ap_int_base<_AP_SIZE_long + 1, false> val(op2); val[_AP_SIZE_long] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_long, false> operator,( unsigned long op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_long + 1, false> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, ap_slong op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op1); ret <<= _AP_SIZE_ap_slong; if (true) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( ap_slong op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op2); if (_AP_S) { ret <<= _AP_SIZE_ap_slong; ret >>= _AP_SIZE_ap_slong; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, ap_slong op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op1); ret <<= _AP_SIZE_ap_slong; if (true) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( ap_slong op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_ap_slong + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, ap_slong op2) { ap_int_base<_AP_SIZE_ap_slong + 1, false> val(op2); val[_AP_SIZE_ap_slong] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_ap_slong + 1, false> operator,( ap_slong op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_ap_slong + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_ap_slong, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, ap_slong op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W + _AP_W2, true> val(op2); ap_int_base<_AP_SIZE_ap_slong + _AP_W + _AP_W2, true> ret(op1); if (true) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= _AP_SIZE_ap_slong; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_ap_slong, false> operator,( ap_slong op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W + _AP_W2, true> val(op1); ap_int_base<_AP_SIZE_ap_slong + _AP_W + _AP_W2, true> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, ap_slong op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op1); if (true) { val <<= _AP_W; val >>= _AP_W; } ret <<= _AP_SIZE_ap_slong; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( ap_slong op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_ap_slong, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, ap_slong op2) { ap_int_base<_AP_SIZE_ap_slong + 1, true> val(op2); val[_AP_SIZE_ap_slong] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_ap_slong, false> operator,( ap_slong op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_ap_slong + 1, true> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, ap_ulong op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op1); ret <<= _AP_SIZE_ap_slong; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( ap_ulong op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op2); if (_AP_S) { ret <<= _AP_SIZE_ap_slong; ret >>= _AP_SIZE_ap_slong; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, ap_ulong op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op1); ret <<= _AP_SIZE_ap_slong; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( ap_ulong op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_ap_slong + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, ap_ulong op2) { ap_int_base<_AP_SIZE_ap_slong + 1, false> val(op2); val[_AP_SIZE_ap_slong] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_ap_slong + 1, false> operator,( ap_ulong op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_ap_slong + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_ap_slong, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, ap_ulong op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W + _AP_W2, false> val(op2); ap_int_base<_AP_SIZE_ap_slong + _AP_W + _AP_W2, false> ret(op1); if (false) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= _AP_SIZE_ap_slong; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_ap_slong, false> operator,( ap_ulong op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W + _AP_W2, false> val(op1); ap_int_base<_AP_SIZE_ap_slong + _AP_W + _AP_W2, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, ap_ulong op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op1); if (false) { val <<= _AP_W; val >>= _AP_W; } ret <<= _AP_SIZE_ap_slong; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( ap_ulong op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_ap_slong, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, ap_ulong op2) { ap_int_base<_AP_SIZE_ap_slong + 1, false> val(op2); val[_AP_SIZE_ap_slong] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_ap_slong, false> operator,( ap_ulong op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_ap_slong + 1, false> val(op1); val <<= 1; val[0] = op2; return val; }
# 1348 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_ref.h"
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator <<( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, int rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() << int(rhs); }
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator <<( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, unsigned int rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() << int(rhs); }
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator <<( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, long rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() << int(rhs); }
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator <<( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, unsigned long rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() << int(rhs); }
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator <<( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, ap_slong rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() << int(rhs); }
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator <<( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, ap_ulong rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() << int(rhs); }

template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator >>( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, int rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() >> int(rhs); }
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator >>( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, unsigned int rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() >> int(rhs); }
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator >>( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, long rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() >> int(rhs); }
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator >>( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, unsigned long rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() >> int(rhs); }
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator >>( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, ap_slong rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() >> int(rhs); }
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator >>( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, ap_ulong rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() >> int(rhs); }
# 13 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int.h" 2




template <int _AP_W>
struct ap_int : ap_int_base<_AP_W, true> {
  typedef ap_int_base<_AP_W, true> Base;

  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int() {}
  template <int _AP_W2>
                inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(const ap_int<_AP_W2>& op): Base((ap_int_base<_AP_W2, true>)op){



    op.checkOverflowCsim(_AP_W, true);

    Base::V = op.V;
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(const volatile ap_int<_AP_W2>& op) {
    const_cast<const ap_int<_AP_W2>& >(op).checkOverflowCsim(_AP_W, true);
    Base::V = op.V;
  }

  template <int _AP_W2>
                inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(const ap_uint<_AP_W2>& op): Base((ap_int_base<_AP_W2, false>)op){



    op.checkOverflowCsim(_AP_W, true);

    Base::V = op.V;
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(const volatile ap_uint<_AP_W2>& op) {
    const_cast<const ap_uint<_AP_W2>& >(op).checkOverflowCsim(_AP_W, true);
    Base::V = op.V;
  }




                inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(unsigned V __attribute__((bitwidth(_AP_W))), bool raw): Base(0) {
    Base::V = V;
    (void)(raw);
  }



  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(const ap_range_ref<_AP_W2, _AP_S2>& ref) : Base(ref) {}

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(const ap_bit_ref<_AP_W2, _AP_S2>& ref) : Base(ref) {}

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& ref)
      : Base(ref) {}

  template <int _AP_W2, int _AP_I2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2,
            int _AP_N2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(const ap_fixed<_AP_W2, _AP_I2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base((ap_fixed_base<_AP_W2, _AP_I2, true, _AP_Q2, _AP_O2, _AP_N2>)op) {}

  template <int _AP_W2, int _AP_I2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2,
            int _AP_N2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(const ap_ufixed<_AP_W2, _AP_I2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base((ap_fixed_base<_AP_W2, _AP_I2, false, _AP_Q2, _AP_O2, _AP_N2>)op) {
  }

  template <int _AP_W2, int _AP_I2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2,
            int _AP_N2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(
      const volatile ap_fixed<_AP_W2, _AP_I2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base((ap_fixed_base<_AP_W2, _AP_I2, true, _AP_Q2, _AP_O2, _AP_N2>)op) {}

  template <int _AP_W2, int _AP_I2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2,
            int _AP_N2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(
      const volatile ap_ufixed<_AP_W2, _AP_I2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base((ap_fixed_base<_AP_W2, _AP_I2, false, _AP_Q2, _AP_O2, _AP_N2>)op) {
  }

  template <int _AP_W2, bool _AP_S2>
                inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(const ap_int_base<_AP_W2, _AP_S2>& op):Base(op) {

  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
                inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base(op) {}

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
                inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base(op) {}

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base(op) {}







  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(bool val):Base(val){ this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(char val):Base(val){ this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(signed char val):Base(val){ this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(unsigned char val):Base(val){ this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(short val):Base(val){ this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(unsigned short val):Base(val){ this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(int val):Base(val){ this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(unsigned int val):Base(val){ this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(long val):Base(val){ this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(unsigned long val):Base(val){ this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(ap_slong val):Base(val){ this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(ap_ulong val):Base(val){ this->checkOverflowBaseC(val); }

                ap_int(double val) : Base(val) {}
                ap_int(float val) : Base(val) {}
  ap_int(half val) : Base(val) {}


  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(const char* s) : Base(s) {}

  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int(const char* s, signed char rd) : Base(s, rd) {}




  ap_int &operator=(const ap_int<_AP_W> &op2) = default;
# 161 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int.h"
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_int& operator=(const volatile ap_int<_AP_W>& op2) {
    Base::V = op2.V;
    return *this;
  }


  inline __attribute__((always_inline)) __attribute__((nodebug)) void operator=(const ap_int<_AP_W>& op2) volatile {
    *((volatile typename Base::Base::DataType *)(&(Base::V))) = op2.V;
  }

  inline __attribute__((always_inline)) __attribute__((nodebug)) void operator=(const volatile ap_int<_AP_W>& op2) volatile {
    *((volatile typename Base::Base::DataType *)(&(Base::V))) = op2.V;
  }

};




template <int _AP_W>
struct ap_uint : ap_int_base<_AP_W, false> {
  typedef ap_int_base<_AP_W, false> Base;

  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint() {}
  template <int _AP_W2>
                inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(const ap_uint<_AP_W2>& op):Base((ap_int_base<_AP_W2, false>)op) {
    op.checkOverflowCsim(_AP_W, false);

  }

  template <int _AP_W2>
                inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(const ap_int<_AP_W2>& op):Base((ap_int_base<_AP_W2, true>)op) {
    op.checkOverflowCsim(_AP_W, false);

  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(const volatile ap_uint<_AP_W2>& op) {
    const_cast<const ap_uint<_AP_W2>& >(op).checkOverflowCsim(_AP_W, false);
    Base::V = op.V;
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(const volatile ap_int<_AP_W2>& op) {
    const_cast<const ap_int<_AP_W2>& >(op).checkOverflowCsim(_AP_W, false);
    Base::V = op.V;
  }




                inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(unsigned V __attribute__((bitwidth(_AP_W))), bool raw):Base(0) {
    Base::V = V;
    (void)(raw);
  }



  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(const ap_range_ref<_AP_W2, _AP_S2>& ref) : Base(ref) {}

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(const ap_bit_ref<_AP_W2, _AP_S2>& ref) : Base(ref) {}

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& ref)
      : Base(ref) {}

  template <int _AP_W2, int _AP_I2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2,
            int _AP_N2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(const ap_fixed<_AP_W2, _AP_I2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base((ap_fixed_base<_AP_W2, _AP_I2, true, _AP_Q2, _AP_O2, _AP_N2>)op) {}

  template <int _AP_W2, int _AP_I2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2,
            int _AP_N2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(const ap_ufixed<_AP_W2, _AP_I2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base((ap_fixed_base<_AP_W2, _AP_I2, false, _AP_Q2, _AP_O2, _AP_N2>)op) {
  }

  template <int _AP_W2, int _AP_I2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2,
            int _AP_N2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(
      const volatile ap_fixed<_AP_W2, _AP_I2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base((ap_fixed_base<_AP_W2, _AP_I2, true, _AP_Q2, _AP_O2, _AP_N2>)op) {}

  template <int _AP_W2, int _AP_I2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2,
            int _AP_N2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(
      const volatile ap_ufixed<_AP_W2, _AP_I2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base((ap_fixed_base<_AP_W2, _AP_I2, false, _AP_Q2, _AP_O2, _AP_N2>)op) {
  }

  template <int _AP_W2, bool _AP_S2>
                inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(const ap_int_base<_AP_W2, _AP_S2>& op):Base(op) {

  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base(op) {}

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base(op) {}

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base(op) {}






  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(bool val):Base(val) { this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(char val):Base(val) { this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(signed char val):Base(val) { this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(unsigned char val):Base(val) { this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(short val):Base(val) { this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(unsigned short val):Base(val) { this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(int val):Base(val) { this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(unsigned int val):Base(val) { this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(long val):Base(val) { this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(unsigned long val):Base(val) { this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(ap_slong val):Base(val) { this->checkOverflowBaseC(val); }
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(ap_ulong val):Base(val) { this->checkOverflowBaseC(val); }

                ap_uint(double val) : Base(val) {}
                ap_uint(float val) : Base(val) {}
  ap_uint(half val) : Base(val) {}


  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(const char* s) : Base(s) {}

  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint(const char* s, signed char rd) : Base(s, rd) {}





  ap_uint &operator=(const ap_uint<_AP_W> &op2) = default;
# 317 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int.h"
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_uint& operator=(const volatile ap_uint<_AP_W>& op2) {
    Base::V = op2.V;
    return *this;
  }


  inline __attribute__((always_inline)) __attribute__((nodebug)) void operator=(const ap_uint<_AP_W>& op2) volatile {
    *((volatile typename Base::Base::DataType *)(&(Base::V))) = op2.V;
  }

  inline __attribute__((always_inline)) __attribute__((nodebug)) void operator=(const volatile ap_uint<_AP_W>& op2) volatile {
    *((volatile typename Base::Base::DataType *)(&(Base::V))) = op2.V;
  }

};
# 352 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int.h"
# 1 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_special.h" 1
# 15 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_special.h"
namespace std {
template<typename _Tp> class complex;
}







namespace std {
# 43 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_special.h"
template <int _AP_W>
class complex<ap_int<_AP_W> > {
 public:
  typedef ap_int<_AP_W> _Tp;
  typedef _Tp value_type;




  complex() : _M_real(_Tp()), _M_imag(_Tp()) {}


  complex(const _Tp &__r, const _Tp &__i = _Tp(0))
      : _M_real(__r), _M_imag(__i) {}


  template <typename _Up>
  complex(const complex<_Up> &__z) : _M_real(__z.real()), _M_imag(__z.imag()) {}


  const _Tp& real() const { return _M_real; }
  const _Tp& imag() const { return _M_imag; }







  void real(_Tp __val) { _M_real = __val; }

  void imag(_Tp __val) { _M_imag = __val; }



  complex<_Tp> &operator=(const _Tp __t) {
    _M_real = __t;
    _M_imag = _Tp(0);
    return *this;
  }



  complex<_Tp> &operator+=(const _Tp &__t) {
    _M_real += __t;
    return *this;
  }



  complex<_Tp> &operator-=(const _Tp &__t) {
    _M_real -= __t;
    return *this;
  }



  complex<_Tp> &operator*=(const _Tp &__t) {
    _M_real *= __t;
    _M_imag *= __t;
    return *this;
  }



  complex<_Tp> &operator/=(const _Tp &__t) {
    _M_real /= __t;
    _M_imag /= __t;
    return *this;
  }


  template <typename _Up>
  complex<_Tp> &operator=(const complex<_Up> &__z) {
    _M_real = __z.real();
    _M_imag = __z.imag();
    return *this;
  }



  template <typename _Up>
  complex<_Tp> &operator+=(const complex<_Up> &__z) {
    _M_real += __z.real();
    _M_imag += __z.imag();
    return *this;
  }



  template <typename _Up>
  complex<_Tp> &operator-=(const complex<_Up> &__z) {
    _M_real -= __z.real();
    _M_imag -= __z.imag();
    return *this;
  }



  template <typename _Up>
  complex<_Tp> &operator*=(const complex<_Up> &__z) {
    const _Tp __r = _M_real * __z.real() - _M_imag * __z.imag();
    _M_imag = _M_real * __z.imag() + _M_imag * __z.real();
    _M_real = __r;
    return *this;
  }



  template <typename _Up>
  complex<_Tp> &operator/=(const complex<_Up> &__z) {
    complex<_Tp> cj (__z.real(), -__z.imag());
    complex<_Tp> a = (*this) * cj;
    complex<_Tp> b = cj * __z;
    _M_real = a.real() / b.real();
    _M_imag = a.imag() / b.real();
    return *this;
  }

 private:
  _Tp _M_real;
  _Tp _M_imag;

};
# 176 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int_special.h"
template <int _AP_W>
inline bool operator==(const complex<ap_int<_AP_W> > &__x, const ap_int<_AP_W> &__y) {
  return __x.real() == __y &&
         __x.imag() == 0;
}


template <int _AP_W>
inline bool operator==(const ap_int<_AP_W> &__x, const complex<ap_int<_AP_W> > &__y) {
  return __x == __y.real() &&
         0 == __y.imag();
}


template <int _AP_W>
inline bool operator!=(const complex<ap_int<_AP_W> > &__x, const ap_int<_AP_W> &__y) {
  return __x.real() != __y ||
         __x.imag() != 0;
}


template <int _AP_W>
inline bool operator!=(const ap_int<_AP_W> &__x, const complex<ap_int<_AP_W> > &__y) {
  return __x != __y.real() ||
         0 != __y.imag();
}

}
# 353 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int.h" 2
# 17 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h" 2
# 87 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h"
template <int _AP_W2, int _AP_I2, bool _AP_S2>
struct _ap_fixed_factory;
template <int _AP_W2, int _AP_I2>
struct _ap_fixed_factory<_AP_W2, _AP_I2, true> {
  typedef ap_fixed<_AP_W2, _AP_I2> type;
};
template <int _AP_W2, int _AP_I2>
struct _ap_fixed_factory<_AP_W2, _AP_I2, false> {
  typedef ap_ufixed<_AP_W2, _AP_I2> type;
};
# 108 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h"
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
struct ap_fixed_base : ssdm_int<_AP_W, _AP_S> {
 public:
  typedef ssdm_int<_AP_W, _AP_S> Base;
  static const int width = _AP_W;
  static const int iwidth = _AP_I;
  static const ap_q_mode qmode = _AP_Q;
  static const ap_o_mode omode = _AP_O;


  template <int _AP_W2, int _AP_I2, bool _AP_S2>
  struct RType {
    enum {
      _AP_F = _AP_W - _AP_I,
      F2 = _AP_W2 - _AP_I2,
      mult_w = _AP_W + _AP_W2,
      mult_i = _AP_I + _AP_I2,
      mult_s = _AP_S || _AP_S2,
      plus_w = ((_AP_I + (_AP_S2 && !_AP_S)) > (_AP_I2 + (_AP_S && !_AP_S2)) ? (_AP_I + (_AP_S2 && !_AP_S)) : (_AP_I2 + (_AP_S && !_AP_S2))) +
               1 + ((_AP_F) > (F2) ? (_AP_F) : (F2)),
      plus_i =
          ((_AP_I + (_AP_S2 && !_AP_S)) > (_AP_I2 + (_AP_S && !_AP_S2)) ? (_AP_I + (_AP_S2 && !_AP_S)) : (_AP_I2 + (_AP_S && !_AP_S2))) + 1,
      plus_s = _AP_S || _AP_S2,
      minus_w =
          ((_AP_I + (_AP_S2 && !_AP_S)) > (_AP_I2 + (_AP_S && !_AP_S2)) ? (_AP_I + (_AP_S2 && !_AP_S)) : (_AP_I2 + (_AP_S && !_AP_S2))) + 1 +
          ((_AP_F) > (F2) ? (_AP_F) : (F2)),
      minus_i =
          ((_AP_I + (_AP_S2 && !_AP_S)) > (_AP_I2 + (_AP_S && !_AP_S2)) ? (_AP_I + (_AP_S2 && !_AP_S)) : (_AP_I2 + (_AP_S && !_AP_S2))) + 1,
      minus_s = true,

      div_w = _AP_S2 + _AP_W + ((F2) > (0) ? (F2) : (0)),



      div_i = _AP_S2 + _AP_I + F2,
      div_s = _AP_S || _AP_S2,
      logic_w =
          ((_AP_I + (_AP_S2 && !_AP_S)) > (_AP_I2 + (_AP_S && !_AP_S2)) ? (_AP_I + (_AP_S2 && !_AP_S)) : (_AP_I2 + (_AP_S && !_AP_S2))) +
          ((_AP_F) > (F2) ? (_AP_F) : (F2)),
      logic_i = ((_AP_I + (_AP_S2 && !_AP_S)) > (_AP_I2 + (_AP_S && !_AP_S2)) ? (_AP_I + (_AP_S2 && !_AP_S)) : (_AP_I2 + (_AP_S && !_AP_S2))),
      logic_s = _AP_S || _AP_S2
    };

    typedef ap_fixed_base<_AP_W, _AP_I, _AP_S> lhs;
    typedef ap_fixed_base<_AP_W2, _AP_I2, _AP_S2> rhs;

    typedef ap_fixed_base<mult_w, mult_i, mult_s> mult_base;
    typedef ap_fixed_base<plus_w, plus_i, plus_s> plus_base;
    typedef ap_fixed_base<minus_w, minus_i, minus_s> minus_base;
    typedef ap_fixed_base<logic_w, logic_i, logic_s> logic_base;
    typedef ap_fixed_base<div_w, div_i, div_s> div_base;
    typedef ap_fixed_base<_AP_W, _AP_I, _AP_S> arg1_base;

    typedef typename _ap_fixed_factory<mult_w, mult_i, mult_s>::type mult;
    typedef typename _ap_fixed_factory<plus_w, plus_i, plus_s>::type plus;
    typedef typename _ap_fixed_factory<minus_w, minus_i, minus_s>::type minus;
    typedef typename _ap_fixed_factory<logic_w, logic_i, logic_s>::type logic;
    typedef typename _ap_fixed_factory<div_w, div_i, div_s>::type div;
    typedef typename _ap_fixed_factory<_AP_W, _AP_I, _AP_S>::type arg1;
  };

 private:
# 295 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h"
                      inline __attribute__((always_inline)) void report() {}




                      inline __attribute__((always_inline)) void overflow_adjust(bool underflow, bool overflow, bool lD,
                              bool sign) {
    if (!underflow && !overflow) return;
    if (_AP_O == AP_WRAP) {
      if (_AP_N == 0) return;
      if (_AP_S) {


        Base::V = ({ typename _ap_type::remove_const<__typeof__(Base::V)>::type __Result__ = 0; __typeof__(Base::V) __Val2__ = Base::V; __typeof__(sign) __Repl2__ = !!sign; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), _AP_W - 1, _AP_W - 1); __Result__; });
        if (_AP_N > 1) {

          ap_int_base<_AP_W, false> mask(-1);
          if (sign) mask.V = 0;
          Base::V =
              ({ typename _ap_type::remove_const<__typeof__(Base::V)>::type __Result__ = 0; __typeof__(Base::V) __Val2__ = Base::V; __typeof__(mask.V) __Repl2__ = mask.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), _AP_W - _AP_N, _AP_W - 2); __Result__; });
        }
      } else {

        ap_int_base<_AP_W, false> mask(-1);
        Base::V =
            ({ typename _ap_type::remove_const<__typeof__(Base::V)>::type __Result__ = 0; __typeof__(Base::V) __Val2__ = Base::V; __typeof__(mask.V) __Repl2__ = mask.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), _AP_W - _AP_N, _AP_W - 1); __Result__; });
      }
    } else if (_AP_O == AP_SAT_ZERO) {
      Base::V = 0;
    } else if (_AP_O == AP_WRAP_SM && _AP_S) {
      bool Ro = ({ __typeof__(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; });
      if (_AP_N == 0) {
        if (lD != Ro) {
          Base::V = ~Base::V;
          Base::V = ({ typename _ap_type::remove_const<__typeof__(Base::V)>::type __Result__ = 0; __typeof__(Base::V) __Val2__ = Base::V; __typeof__(lD) __Repl2__ = !!lD; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), _AP_W - 1, _AP_W - 1); __Result__; });
        }
      } else {
        if (_AP_N == 1 && sign != Ro) {
          Base::V = ~Base::V;
        } else if (_AP_N > 1) {
          bool lNo = ({ __typeof__(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - _AP_N); __Result__; });
          if (lNo == sign) Base::V = ~Base::V;
          ap_int_base<_AP_W, false> mask(-1);
          if (sign) mask.V = 0;
          Base::V =
              ({ typename _ap_type::remove_const<__typeof__(Base::V)>::type __Result__ = 0; __typeof__(Base::V) __Val2__ = Base::V; __typeof__(mask.V) __Repl2__ = mask.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), _AP_W - _AP_N, _AP_W - 2); __Result__; });
        }
        Base::V = ({ typename _ap_type::remove_const<__typeof__(Base::V)>::type __Result__ = 0; __typeof__(Base::V) __Val2__ = Base::V; __typeof__(sign) __Repl2__ = !!sign; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), _AP_W - 1, _AP_W - 1); __Result__; });
      }
    } else {
      if (_AP_S) {
        if (overflow) {
          Base::V = 1;
          Base::V <<= _AP_W - 1;
          Base::V = ~Base::V;
        } else if (underflow) {
          Base::V = 1;
          Base::V <<= _AP_W - 1;
          if (_AP_O == AP_SAT_SYM) Base::V |= 1;
        }
      } else {
        if (overflow)
          Base::V = ~(ap_int_base<_AP_W, false>(0).V);
        else if (underflow)
          Base::V = 0;
      }
    }
  }

                      inline __attribute__((always_inline)) bool quantization_adjust(bool qb, bool r, bool s) {
    bool carry = (bool)({ __typeof__(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; });
    if (_AP_Q == AP_TRN) return false;
    if (_AP_Q == AP_RND_ZERO)
      qb &= s || r;
    else if (_AP_Q == AP_RND_MIN_INF)
      qb &= r;
    else if (_AP_Q == AP_RND_INF)
      qb &= !s || r;
    else if (_AP_Q == AP_RND_CONV)
      qb &= ({ __typeof__(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), 0); __Result__; }) || r;
    else if (_AP_Q == AP_TRN_ZERO)
      qb = s && (qb || r);
    Base::V += qb;
    return carry && (!(bool)({ __typeof__(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; }));
  }


                      inline __attribute__((always_inline)) int countLeadingOnes() const {




    return 0;

  }

 public:



  inline __attribute__((always_inline)) ap_fixed_base() {}


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
                      inline __attribute__((always_inline)) ap_fixed_base(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op):Base(op.V) {

    operator=(op);



    report();
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_fixed_base(
      const volatile ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
    operator=(op);
    report();
  }

  template <int _AP_W2, bool _AP_S2>
                      inline __attribute__((always_inline)) ap_fixed_base(const ap_int_base<_AP_W2, _AP_S2>& op):Base(op.V) {
    ap_fixed_base<_AP_W2, _AP_W2, _AP_S2> tmp(0);
    tmp.V = op.V;

    operator=(tmp);



    report();
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_fixed_base(const volatile ap_int_base<_AP_W2, _AP_S2>& op) {
    ap_fixed_base<_AP_W2, _AP_W2, _AP_S2> tmp;
    tmp.V = op.V;
    operator=(tmp);
    report();
  }
# 456 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h"
  inline __attribute__((always_inline)) ap_fixed_base(const char* s) {
    __typeof__(Base::V) t;
    _ssdm_string2bits((void*)(&t), (const char*)(s), 10, _AP_I, _AP_S, _AP_Q,
                      _AP_O, _AP_N, true);
    Base::V = t;
  }
  inline __attribute__((always_inline)) ap_fixed_base(const char* s, signed char rd) {
    __typeof__(Base::V) t;
    _ssdm_string2bits((void*)(&t), (const char*)(s), rd, _AP_I, _AP_S, _AP_Q,
                      _AP_O, _AP_N, true);
    Base::V = t;
  }


  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_fixed_base(const ap_bit_ref<_AP_W2, _AP_S2>& op) {
    *this = ((bool)op);
    report();
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_fixed_base(const ap_range_ref<_AP_W2, _AP_S2>& op) {
    *this = (ap_int_base<_AP_W2, false>(op));
    report();
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_fixed_base(
      const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& op) {
    *this = (ap_int_base<_AP_W2 + _AP_W3, false>(op));
    report();
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_fixed_base(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
    *this = (bool(op));
    report();
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_fixed_base(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
    *this = (ap_int_base<_AP_W2, false>(op));
    report();
  }
# 524 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h"
  inline __attribute__((always_inline)) ap_fixed_base(const bool x) { ap_fixed_base<(1), (1), (false)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const char x) { ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const signed char x) { ap_fixed_base<(8), (8), (true)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const unsigned char x) { ap_fixed_base<(8), (8), (false)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const short x) { ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const unsigned short x) { ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const int x) { ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const unsigned int x) { ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const long x) { ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const unsigned long x) { ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const ap_slong x) { ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const ap_ulong x) { ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)> tmp; tmp.V = x; *this = tmp; }







          ap_fixed_base(double d) {
    ap_int_base<64, false> ireg;
    ireg.V = doubleToRawBits(d);
    bool isneg = ({ __typeof__(ireg.V) __Val2__ = ireg.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), 63); __Result__; });

    ap_int_base<11 + 1, true> exp;
    ap_int_base<11, false> exp_tmp;
    exp_tmp.V =
        ({ typename _ap_type::remove_const<__typeof__(ireg.V)>::type __Result__ = 0; __typeof__(ireg.V) __Val2__ = ireg.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 52, 52 + 11 - 1); __Result__; });
    exp = exp_tmp - ((1L << (11 - 1L)) - 1L);
    ap_int_base<52 + 2, true> man;
    man.V = ({ typename _ap_type::remove_const<__typeof__(ireg.V)>::type __Result__ = 0; __typeof__(ireg.V) __Val2__ = ireg.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, 52 - 1); __Result__; });

    (static_cast<void>(0));

    man.V = ({ typename _ap_type::remove_const<__typeof__(man.V)>::type __Result__ = 0; __typeof__(man.V) __Val2__ = man.V; __typeof__(1) __Repl2__ = !!1; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), 52, 52); __Result__; });
    if (isneg) man = -man;
    if ((ireg.V & 0x7fffffffffffffffLL) == 0) {
      Base::V = 0;
    } else {
      int _AP_W2 = 52 + 2, _AP_I2 = exp.V + 2, _AP_F = _AP_W - _AP_I,
          F2 = _AP_W2 - _AP_I2;
      bool _AP_S2 = true,
           QUAN_INC = F2 > _AP_F &&
                      !(_AP_Q == AP_TRN || (_AP_Q == AP_TRN_ZERO && !_AP_S2));
      bool carry = false;

      unsigned sh_amt = (F2 > _AP_F) ? F2 - _AP_F : _AP_F - F2;
      if (F2 == _AP_F)
        Base::V = man.V;
      else if (F2 > _AP_F) {
        if (sh_amt < 52 + 2)
          Base::V = man.V >> sh_amt;
        else {
          Base::V = isneg ? -1 : 0;
        }
        if ((_AP_Q != AP_TRN) && !((_AP_Q == AP_TRN_ZERO) && !_AP_S2)) {
          bool qb = (F2 - _AP_F > _AP_W2) ? isneg : (bool)({ __typeof__(man.V) __Val2__ = man.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), F2 - _AP_F - 1); __Result__; });

          bool r =
              (F2 > _AP_F + 1)
                  ? ({ typename _ap_type::remove_const<__typeof__(man.V)>::type __Result__ = 0; __typeof__(man.V) __Val2__ = man.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, (F2 - _AP_F - 2 < _AP_W2) ? (F2 - _AP_F - 2) : (_AP_W2 - 1)); __Result__; }) != 0


                  : false;
          carry = quantization_adjust(qb, r, isneg);
        }
      } else {
        Base::V = man.V;
        if (sh_amt < _AP_W)
          Base::V = Base::V << sh_amt;
        else
          Base::V = 0;
      }

      if ((_AP_O != AP_WRAP || _AP_N != 0) &&
          ((!_AP_S && _AP_S2) ||
           _AP_I - _AP_S <
               _AP_I2 - _AP_S2 +
                   (QUAN_INC ||
                    (_AP_S2 && (_AP_O == AP_SAT_SYM))))) {
        bool deleted_zeros = _AP_S2 ? true : !carry, deleted_ones = true;
        bool neg_src = isneg;
        bool lD = false;
        int pos1 = F2 - _AP_F + _AP_W;
        int pos2 = F2 - _AP_F + _AP_W + 1;
        bool newsignbit = ({ __typeof__(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; });
        if (pos1 < _AP_W2 && pos1 >= 0)

          lD = (man.V >> pos1) & 1;
        if (pos1 < _AP_W2) {
          bool Range1_all_ones = true;
          bool Range1_all_zeros = true;
          bool Range2_all_ones = true;
          ap_int_base<52 + 2, false> Range2;
          ap_int_base<52 + 2, false> all_ones(-1);

          if (pos2 >= 0 && pos2 < _AP_W2) {


            Range2.V = man.V;
            Range2.V >>= pos2;
            Range2_all_ones = Range2 == (all_ones >> pos2);
          } else if (pos2 < 0)
            Range2_all_ones = false;
          if (pos1 >= 0 && pos2 < _AP_W2) {
            Range1_all_ones = Range2_all_ones && lD;
            Range1_all_zeros = !Range2.V && !lD;
          } else if (pos2 == _AP_W2) {
            Range1_all_ones = lD;
            Range1_all_zeros = !lD;
          } else if (pos1 < 0) {
            Range1_all_zeros = !man.V;
            Range1_all_ones = false;
          }

          deleted_zeros =
              deleted_zeros && (carry ? Range1_all_ones : Range1_all_zeros);
          deleted_ones =
              carry ? Range2_all_ones && (pos1 < 0 || !lD) : Range1_all_ones;
          neg_src = isneg && !(carry && Range1_all_ones);
        } else
          neg_src = isneg && newsignbit;
        bool neg_trg = _AP_S && newsignbit;
        bool overflow = (neg_trg || !deleted_zeros) && !isneg;
        bool underflow = (!neg_trg || !deleted_ones) && neg_src;
        if ((_AP_O == AP_SAT_SYM) && _AP_S2 && _AP_S)
          underflow |=
              neg_src &&
              (_AP_W > 1 ? ({ typename _ap_type::remove_const<__typeof__(Base::V)>::type __Result__ = 0; __typeof__(Base::V) __Val2__ = Base::V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, _AP_W - 2); __Result__; }) == 0
                         : true);
        overflow_adjust(underflow, overflow, lD, neg_src);
      }
    }
    report();
  }


  inline __attribute__((always_inline)) ap_fixed_base(float d) { *this = ap_fixed_base(double(d)); }


  inline __attribute__((always_inline)) ap_fixed_base(half d) { *this = ap_fixed_base(double(d)); }
# 798 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h"
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
                      inline __attribute__((always_inline)) ap_fixed_base& operator=(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {

    const int _AP_F = _AP_W - _AP_I;
    const int F2 = _AP_W2 - _AP_I2;
    const int QUAN_INC =
          F2 > _AP_F && !(_AP_Q == AP_TRN || (_AP_Q == AP_TRN_ZERO && !_AP_S2));

    if (!op) Base::V = 0;
    bool carry = false;
    bool signbit = ({ __typeof__(op.V) __Val2__ = op.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W2 - 1); __Result__; });
    bool isneg = signbit && _AP_S2;
    if (F2 == _AP_F)
      Base::V = op.V;
    else if (F2 > _AP_F) {
      unsigned int sh_amt = F2 - _AP_F;

      if (sh_amt < _AP_W2) {
        Base::V = op.V >> sh_amt;
      } else {
        Base::V = isneg ? -1 : 0;
      }
      if (_AP_Q != AP_TRN && !(_AP_Q == AP_TRN_ZERO && !_AP_S2)) {
        bool qbit = ({ __typeof__(op.V) __Val2__ = op.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), F2 - _AP_F - 1); __Result__; });

        bool qb = (F2 - _AP_F > _AP_W2) ? _AP_S2 && signbit : qbit;
        enum { hi = ((F2 - _AP_F - 2) < _AP_W2) ? (F2 - _AP_F - 2) : (_AP_W2 - 1) };

        bool r = (F2 > _AP_F + 1) ? (({ typename _ap_type::remove_const<__typeof__(op.V)>::type __Result__ = 0; __typeof__(op.V) __Val2__ = op.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, hi); __Result__; }) != 0) : false;
        carry = quantization_adjust(qb, r, isneg);
      }
    } else {
      unsigned sh_amt = _AP_F - F2;

      if (sh_amt < _AP_W) {
        if (_AP_W > _AP_W2) {

          Base::V = op.V;
          Base::V <<= sh_amt;
        } else {

          Base::V = op.V << sh_amt;
        }
      } else {
        Base::V = 0;
      }
    }

    if ((_AP_O != AP_WRAP || _AP_N != 0) &&
        ((!_AP_S && _AP_S2) ||
         _AP_I - _AP_S <
             _AP_I2 - _AP_S2 +
                 (QUAN_INC || (_AP_S2 && _AP_O == AP_SAT_SYM)))) {
      bool deleted_zeros = _AP_S2 ? true : !carry;
      bool deleted_ones = true;
      bool neg_src = isneg;
      bool newsignbit = ({ __typeof__(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; });
      enum { pos1 = F2 - _AP_F + _AP_W, pos2 = F2 - _AP_F + _AP_W + 1 };
      bool lD = (pos1 < _AP_W2 && pos1 >= 0) ? ({ __typeof__(op.V) __Val2__ = op.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), pos1); __Result__; })
                                             : false;
      if (pos1 < _AP_W2) {
        bool Range1_all_ones = true;
        bool Range1_all_zeros = true;
        bool Range2_all_ones = true;
        ap_int_base<_AP_W2, false> all_ones(-1);

        if (pos2 < _AP_W2 && pos2 >= 0) {
          ap_int_base<_AP_W2, false> Range2(0);
          Range2.V = ({ typename _ap_type::remove_const<__typeof__(op.V)>::type __Result__ = 0; __typeof__(op.V) __Val2__ = op.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), pos2, _AP_W2 - 1); __Result__; });
          Range2_all_ones = Range2 == (all_ones >> pos2);
        } else if (pos2 < 0) {
          Range2_all_ones = false;
        }

        if (pos1 >= 0 && pos2 < _AP_W2) {
          ap_int_base<_AP_W2, false> Range1(0);
          Range1.V = ({ typename _ap_type::remove_const<__typeof__(op.V)>::type __Result__ = 0; __typeof__(op.V) __Val2__ = op.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), pos1, _AP_W2 - 1); __Result__; });
          Range1_all_ones = Range1 == (all_ones >> pos1);
          Range1_all_zeros = !Range1.V;
        } else if (pos2 == _AP_W2) {
          Range1_all_ones = lD;
          Range1_all_zeros = !lD;
        } else if (pos1 < 0) {
          Range1_all_zeros = !op.V;
          Range1_all_ones = false;
        }

        deleted_zeros =
            deleted_zeros && (carry ? Range1_all_ones : Range1_all_zeros);
        deleted_ones =
            carry ? Range2_all_ones && (pos1 < 0 || !lD) : Range1_all_ones;
        neg_src = isneg && !(carry && Range1_all_ones);
      } else
        neg_src = isneg && newsignbit;
      bool neg_trg = _AP_S && newsignbit;
      bool overflow = (neg_trg || !deleted_zeros) && !isneg;
      bool underflow = (!neg_trg || !deleted_ones) && neg_src;
      if ((_AP_O == AP_SAT_SYM) && _AP_S2 && _AP_S)
        underflow |=
            neg_src &&
            (_AP_W > 1 ? ({ typename _ap_type::remove_const<__typeof__(Base::V)>::type __Result__ = 0; __typeof__(Base::V) __Val2__ = Base::V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, _AP_W - 2); __Result__; }) == 0
                       : true);

      overflow_adjust(underflow, overflow, lD, neg_src);
    }
    return *this;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_fixed_base& operator=(
      const volatile ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
    operator=(const_cast<const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&>(op));
    return *this;
  }


                      inline __attribute__((always_inline)) ap_fixed_base& setBits(ap_ulong bv) {

    Base::V = bv;
    return *this;
  }


  static inline __attribute__((always_inline)) ap_fixed_base bitsToFixed(ap_ulong bv) {

    ap_fixed_base t;

    t.V = bv;



    return t;
  }

                      inline __attribute__((always_inline)) void checkOverflowCsimFix(int _ap_w2, bool _ap_s2) const {
# 971 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h"
      (void)_ap_w2;
      (void)_ap_s2;

      return;
  }





                      inline __attribute__((always_inline)) ap_int_base<((_AP_I) > (1) ? (_AP_I) : (1)), _AP_S> to_ap_int_base(
      bool Cnative = true) const {
    ap_int_base<((_AP_I) > (1) ? (_AP_I) : (1)), _AP_S> ret(0);
    if (_AP_I == 0) {
      ret.V = 0;
    } else if (_AP_I > 0 && _AP_I <= _AP_W) {
      ret.V = ({ typename _ap_type::remove_const<__typeof__(Base::V)>::type __Result__ = 0; __typeof__(Base::V) __Val2__ = Base::V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), _AP_W - _AP_I, _AP_W - 1); __Result__; });
    } else if (_AP_I > _AP_W) {
      ret.V = ({ typename _ap_type::remove_const<__typeof__(Base::V)>::type __Result__ = 0; __typeof__(Base::V) __Val2__ = Base::V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, _AP_W - 1); __Result__; });
      ret.V <<= (_AP_I - _AP_W);
    }
# 1000 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h"
    if (Cnative && _AP_I < _AP_W) {

      if (_AP_S && ({ __typeof__(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; }) && (_AP_I < _AP_W) &&
          (({ typename _ap_type::remove_const<__typeof__(Base::V)>::type __Result__ = 0; __typeof__(Base::V) __Val2__ = Base::V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, _AP_I < 0 ? _AP_W - 1 : _AP_W - _AP_I - 1); __Result__; }) != (unsigned long)0))


        ret = ret + 1;
    } else {

    }
    return ret;
  };

 public:
  template <int _AP_W2, bool _AP_S2>
                      inline __attribute__((always_inline)) operator ap_int_base<_AP_W2, _AP_S2>() const {
    return ap_int_base<_AP_W2, _AP_S2>(to_ap_int_base());
  }


                      inline __attribute__((always_inline)) char to_char() const { return to_ap_int_base().to_char(); }

                      inline __attribute__((always_inline)) int to_int() const { return to_ap_int_base().to_int(); }

                      inline __attribute__((always_inline)) unsigned to_uint() const { return to_ap_int_base().to_uint(); }

                      inline __attribute__((always_inline)) ap_slong to_int64() const { return to_ap_int_base().to_int64(); }

                      inline __attribute__((always_inline)) ap_ulong to_uint64() const { return to_ap_int_base().to_uint64(); }

                      inline __attribute__((always_inline)) ap_int<_AP_I> to_ap_int() const { return ap_int<_AP_I>(to_ap_int_base()); }



  inline __attribute__((always_inline)) double to_double() const {




    enum { BITS = 52 + 11 + 1 };
    if (!Base::V) return 0.0f;
    bool s = _AP_S && ({ __typeof__(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; });
    ap_int_base<_AP_W, false> tmp(0);
    if (s)
      tmp.V = -Base::V;
    else
      tmp.V = Base::V;
    int l = tmp.countLeadingZeros();
    int e = _AP_I - l - 1 + ((1L << (11 - 1L)) - 1L);
    int lsb_index = _AP_W - l - 1 - 52;

    bool a = (lsb_index >=2) ?
        (({ typename _ap_type::remove_const<__typeof__(tmp.V)>::type __Result__ = 0; __typeof__(tmp.V) __Val2__ = tmp.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, lsb_index - 2); __Result__; }) != 0) : 0;

    a |= (lsb_index >=0) ? ({ __typeof__(tmp.V) __Val2__ = tmp.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), lsb_index); __Result__; }) : 0;

    ap_ulong m = 0;

    if (_AP_W > BITS) {
      m = (lsb_index >= 1) ? (ap_ulong)(tmp.V >> (lsb_index - 1))
                           : (ap_ulong)(tmp.V << (1 - lsb_index));
    } else {
      m = (ap_ulong)tmp.V;
      m = (lsb_index >= 1) ? (m >> (lsb_index - 1))
                           : (m << (1 - lsb_index));
    }
    m += a;
    m >>= 1;


    if (({ __typeof__(m) __Val2__ = m; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), 52 + 1); __Result__; })) {
      e += 1;
    }

    m = ({ typename _ap_type::remove_const<__typeof__(m)>::type __Result__ = 0; __typeof__(m) __Val2__ = m; __typeof__(s) __Repl2__ = !!s; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), BITS - 1, BITS - 1); __Result__; });

    m = ({ typename _ap_type::remove_const<__typeof__(m)>::type __Result__ = 0; __typeof__(m) __Val2__ = m; __typeof__(e) __Repl2__ = e; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), 52, 52 + 11 - 1); __Result__; });


    return rawBitsToDouble(m);
  }



  inline __attribute__((always_inline)) float to_float() const {




    enum { BITS = 23 + 8 + 1 };
    if (!Base::V) return 0.0f;
    bool s = _AP_S && ({ __typeof__(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; });
    ap_int_base<_AP_W, false> tmp;
    if (s)
      tmp.V = -Base::V;
    else
      tmp.V = Base::V;
    int l = tmp.countLeadingZeros();
    int e = _AP_I - l - 1 + ((1L << (8 - 1L)) - 1L);
    int lsb_index = _AP_W - l - 1 - 23;

    bool a = (lsb_index >=2) ?
        (({ typename _ap_type::remove_const<__typeof__(tmp.V)>::type __Result__ = 0; __typeof__(tmp.V) __Val2__ = tmp.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, lsb_index - 2); __Result__; }) != 0) : 0;

    a |= (lsb_index >=0) ? ({ __typeof__(tmp.V) __Val2__ = tmp.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), lsb_index); __Result__; }) : 0;

    unsigned long m;

    if (_AP_W > BITS) {
      m = (lsb_index >= 1) ? (unsigned long)(tmp.V >> (lsb_index - 1))
                           : (unsigned long)(tmp.V << (1 - lsb_index));
    } else {
      m = (unsigned long)tmp.V;
      m = (lsb_index >= 1) ? (m >> (lsb_index - 1))
                           : (m << (1 - lsb_index));
    }
    m += a;
    m >>= 1;

    if (({ __typeof__(m) __Val2__ = m; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), 23 + 1); __Result__; })) {
      e += 1;
    }

    m = ({ typename _ap_type::remove_const<__typeof__(m)>::type __Result__ = 0; __typeof__(m) __Val2__ = m; __typeof__(s) __Repl2__ = !!s; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), BITS - 1, BITS - 1); __Result__; });
    m = ({ typename _ap_type::remove_const<__typeof__(m)>::type __Result__ = 0; __typeof__(m) __Val2__ = m; __typeof__(e) __Repl2__ = e; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), 23, 23 + 8 - 1); __Result__; });

    return rawBitsToFloat(m);
  }



  inline __attribute__((always_inline)) half to_half() const {




    enum { BITS = 10 + 5 + 1 };
    if (!Base::V) return 0.0f;
    bool s = _AP_S && ({ __typeof__(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; });
    ap_int_base<_AP_W, false> tmp;
    if (s)
      tmp.V = -Base::V;
    else
      tmp.V = Base::V;
    int l = tmp.countLeadingZeros();
    int e = _AP_I - l - 1 + ((1L << (5 - 1L)) - 1L);
    int lsb_index = _AP_W - l - 1 - 10;

    bool a = (lsb_index >=2) ?
        (({ typename _ap_type::remove_const<__typeof__(tmp.V)>::type __Result__ = 0; __typeof__(tmp.V) __Val2__ = tmp.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, lsb_index - 2); __Result__; }) != 0) : 0;

    a |= (lsb_index >=0) ? ({ __typeof__(tmp.V) __Val2__ = tmp.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), lsb_index); __Result__; }) : 0;

    unsigned short m;

    if (_AP_W > BITS) {
      m = (lsb_index >= 1) ? (unsigned short)(tmp.V >> (lsb_index - 1))
                           : (unsigned short)(tmp.V << (1 - lsb_index));
    } else {
      m = (unsigned short)tmp.V;
      m = (lsb_index >= 1) ? (m >> (lsb_index - 1))
                           : (m << (1 - lsb_index));
    }
    m += a;
    m >>= 1;

    if (({ __typeof__(m) __Val2__ = m; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), 10 + 1); __Result__; })) {
      e += 1;
    }

    m = ({ typename _ap_type::remove_const<__typeof__(m)>::type __Result__ = 0; __typeof__(m) __Val2__ = m; __typeof__(s) __Repl2__ = !!s; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), BITS - 1, BITS - 1); __Result__; });
    m = ({ typename _ap_type::remove_const<__typeof__(m)>::type __Result__ = 0; __typeof__(m) __Val2__ = m; __typeof__(e) __Repl2__ = e; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), 10, 10 + 5 - 1); __Result__; });

    return rawBitsToHalf(m);
  }


  inline __attribute__((always_inline)) operator long double() const { return (long double)to_double(); }

  inline __attribute__((always_inline)) operator double() const { return to_double(); }

  inline __attribute__((always_inline)) operator float() const { return to_float(); }

  inline __attribute__((always_inline)) operator half() const { return to_half(); }

                      inline __attribute__((always_inline)) operator bool() const { return (bool)Base::V != 0; }

                      inline __attribute__((always_inline)) operator char() const { return (char)to_int(); }

                      inline __attribute__((always_inline)) operator signed char() const { return (signed char)to_int(); }

                      inline __attribute__((always_inline)) operator unsigned char() const { return (unsigned char)to_uint(); }

                      inline __attribute__((always_inline)) operator short() const { return (short)to_int(); }

                      inline __attribute__((always_inline)) operator unsigned short() const { return (unsigned short)to_uint(); }

                      inline __attribute__((always_inline)) operator int() const { return to_int(); }

                      inline __attribute__((always_inline)) operator unsigned int() const { return to_uint(); }



                      inline __attribute__((always_inline)) operator long() const { return (long)to_int64(); }

                      inline __attribute__((always_inline)) operator unsigned long() const { return (unsigned long)to_uint64(); }






                      inline __attribute__((always_inline)) operator ap_ulong() const { return to_uint64(); }

                      inline __attribute__((always_inline)) operator ap_slong() const { return to_int64(); }

                      inline __attribute__((always_inline)) int length() const { return _AP_W; };
# 1229 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h"
                      inline __attribute__((always_inline)) int countLeadingZeros() const {


    if (_AP_W <= 32) {
      ap_int_base<32, false> t(-1ULL);
      t.range(_AP_W - 1, 0) = this->range(0, _AP_W - 1);
      return __builtin_ctz(t.V);
    } else if (_AP_W <= 64) {
      ap_int_base<64, false> t(-1ULL);
      t.range(_AP_W - 1, 0) = this->range(0, _AP_W - 1);
      return __builtin_ctzll(t.V);
    } else {
      enum {__N = (_AP_W + 63) / 64};
      int NZeros = 0;
      int i = 0;
      bool hitNonZero = false;
      VITIS_LOOP_1245_1: for (i = 0; i < __N - 1; ++i) {
        ap_int_base<64, false> t;
        t.range(0, 63) = this->range(_AP_W - i * 64 - 64, _AP_W - i * 64 - 1);
        NZeros += hitNonZero ? 0 : __builtin_clzll(t.V);
        hitNonZero |= (t != 0);
      }
      if (!hitNonZero) {
        ap_int_base<64, false> t(-1ULL);
        t.range(63 - (_AP_W - 1) % 64, 63) = this->range(0, (_AP_W - 1) % 64);
        NZeros += __builtin_clzll(t.V);
      }
      return NZeros;
    }



  }



  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
                      inline __attribute__((always_inline)) typename RType<_AP_W2, _AP_I2, _AP_S2>::mult operator*(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2)
      const {
    typename RType<_AP_W2, _AP_I2, _AP_S2>::mult_base r(0), t(0);
    r.V = Base::V;
    t.V = op2.V;
    r.V *= op2.V;
    return r;
  }



  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) typename RType<_AP_W2, _AP_I2, _AP_S2>::div operator/(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2)
      const {
    typename RType<_AP_W2, _AP_I2, _AP_S2>::div_base r;
# 1299 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h"
        ap_fixed_base<_AP_W + ((_AP_W2 - _AP_I2) > (0) ? (_AP_W2 - _AP_I2) : (0)),_AP_I, _AP_S> t(*this);



        r.V = t.V / op2.V;
# 1332 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h"
    return r;
  }
# 1347 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h"
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) typename RType<_AP_W2, _AP_I2, _AP_S2>::plus operator +( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { typename RType<_AP_W2, _AP_I2, _AP_S2>::plus_base ret(0), lhs(*this), rhs(op2); ret.V = lhs.V + rhs.V; return ret; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) typename RType<_AP_W2, _AP_I2, _AP_S2>::minus operator -( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { typename RType<_AP_W2, _AP_I2, _AP_S2>::minus_base ret(0), lhs(*this), rhs(op2); ret.V = lhs.V - rhs.V; return ret; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) typename RType<_AP_W2, _AP_I2, _AP_S2>::logic operator &( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { typename RType<_AP_W2, _AP_I2, _AP_S2>::logic_base ret(0), lhs(*this), rhs(op2); ret.V = lhs.V & rhs.V; return ret; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) typename RType<_AP_W2, _AP_I2, _AP_S2>::logic operator |( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { typename RType<_AP_W2, _AP_I2, _AP_S2>::logic_base ret(0), lhs(*this), rhs(op2); ret.V = lhs.V | rhs.V; return ret; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) typename RType<_AP_W2, _AP_I2, _AP_S2>::logic operator ^( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { typename RType<_AP_W2, _AP_I2, _AP_S2>::logic_base ret(0), lhs(*this), rhs(op2); ret.V = lhs.V ^ rhs.V; return ret; }
# 1365 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h"
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) ap_fixed_base& operator *=( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) { *this = operator *(op2); return *this; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) ap_fixed_base& operator /=( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) { *this = operator /(op2); return *this; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) ap_fixed_base& operator +=( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) { *this = operator +(op2); return *this; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) ap_fixed_base& operator -=( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) { *this = operator -(op2); return *this; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) ap_fixed_base& operator &=( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) { *this = operator &(op2); return *this; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) ap_fixed_base& operator |=( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) { *this = operator |(op2); return *this; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) ap_fixed_base& operator ^=( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) { *this = operator ^(op2); return *this; }





  inline __attribute__((always_inline)) ap_fixed_base& operator++() {
    operator+=(ap_fixed_base<_AP_W - _AP_I + 1, 1, false>(1));
    return *this;
  }


  inline __attribute__((always_inline)) ap_fixed_base& operator--() {
    operator-=(ap_fixed_base<_AP_W - _AP_I + 1, 1, false>(1));
    return *this;
  }


  inline __attribute__((always_inline)) const ap_fixed_base operator++(int) {
    ap_fixed_base r(*this);
    operator++();
    return r;
  }


  inline __attribute__((always_inline)) const ap_fixed_base operator--(int) {
    ap_fixed_base r(*this);
    operator--();
    return r;
  }



  inline __attribute__((always_inline)) typename _ap_fixed_factory<_AP_W, _AP_I, _AP_S>::type operator+() { return *this; }

                      inline __attribute__((always_inline)) typename _ap_fixed_factory<_AP_W + 1, _AP_I + 1, true>::type operator-() const {
    ap_fixed_base<_AP_W + 1, _AP_I + 1, true> r(*this);
    r.V = -r.V;
    return r;
  }

                      inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, true, _AP_Q, _AP_O, _AP_N> getNeg() {
    ap_fixed_base<_AP_W, _AP_I, true, _AP_Q, _AP_O, _AP_N> r(*this);
    r.V = -r.V;
    return r;
  }



                      inline __attribute__((always_inline)) bool operator!() const { return Base::V == (unsigned long)0; }




                      inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S> operator~() const {
    ap_fixed_base<_AP_W, _AP_I, _AP_S> r(0);
    r.V = ~Base::V;
    return r;
  }




  template <int _AP_SHIFT>
                      inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I + _AP_SHIFT, _AP_S> lshift() const {
    ap_fixed_base<_AP_W, _AP_I + _AP_SHIFT, _AP_S> r(0);
    r.V = Base::V;
    return r;
  }

  template <int _AP_SHIFT>
                      inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I - _AP_SHIFT, _AP_S> rshift() const {
    ap_fixed_base<_AP_W, _AP_I - _AP_SHIFT, _AP_S> r(0);
    r.V = Base::V;
    return r;
  }





                      inline __attribute__((always_inline)) ap_fixed_base operator<<(unsigned int sh) const {
    ap_fixed_base r(0);
    r.V = Base::V << sh;
# 1483 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h"
    return r;
  }

                      inline __attribute__((always_inline)) ap_fixed_base operator>>(unsigned int sh) const {
    ap_fixed_base r(0);
    r.V = Base::V >> sh;
# 1505 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h"
    return r;
  }


                      inline __attribute__((always_inline)) ap_fixed_base operator<<(int sh) const {
    ap_fixed_base r(0);
    bool isNeg = sh < 0;
    unsigned int ush = isNeg ? -sh : sh;
    if (isNeg) {
      return operator>>(ush);
    } else {
      return operator<<(ush);
    }
  }

                      inline __attribute__((always_inline)) ap_fixed_base operator>>(int sh) const {
    bool isNeg = sh < 0;
    unsigned int ush = isNeg ? -sh : sh;
    if (isNeg) {
      return operator<<(ush);
    } else {
      return operator>>(ush);
    }
  }


  template <int _AP_W2>
                      inline __attribute__((always_inline)) ap_fixed_base operator<<(const ap_int_base<_AP_W2, true>& op2) const {


    int sh = op2.to_int();
    return operator<<(sh);
  }

  template <int _AP_W2>
                      inline __attribute__((always_inline)) ap_fixed_base operator>>(const ap_int_base<_AP_W2, true>& op2) const {
    int sh = op2.to_int();
    return operator>>(sh);
  }


  template <int _AP_W2>
                      inline __attribute__((always_inline)) ap_fixed_base operator<<(const ap_int_base<_AP_W2, false>& op2) const {
    unsigned int sh = op2.to_uint();
    return operator<<(sh);
  }

  template <int _AP_W2>
                      inline __attribute__((always_inline)) ap_fixed_base operator>>(const ap_int_base<_AP_W2, false>& op2) const {
    unsigned int sh = op2.to_uint();
    return operator>>(sh);
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
                      inline __attribute__((always_inline)) ap_fixed_base operator<<(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&
          op2) {
    return operator<<(op2.to_ap_int_base());
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
                      inline __attribute__((always_inline)) ap_fixed_base operator>>(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&
          op2) {
    return operator>>(op2.to_ap_int_base());
  }





                      inline __attribute__((always_inline)) ap_fixed_base& operator<<=(const int sh) {
    *this = operator<<(sh);
    return *this;
  }

                      inline __attribute__((always_inline)) ap_fixed_base& operator<<=(const unsigned int sh) {
    *this = operator<<(sh);
    return *this;
  }

  template <int _AP_W2, bool _AP_S2>
                      inline __attribute__((always_inline)) ap_fixed_base& operator<<=(const ap_int_base<_AP_W2, _AP_S2>& sh) {
    *this = operator<<(sh.to_int());
    return *this;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
                      inline __attribute__((always_inline)) ap_fixed_base& operator<<=(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&
          sh) {
    *this = operator<<(sh.to_int());
    return *this;
  }


                      inline __attribute__((always_inline)) ap_fixed_base& operator>>=(const int sh) {
    *this = operator>>(sh);
    return *this;
  }

                      inline __attribute__((always_inline)) ap_fixed_base& operator>>=(const unsigned int sh) {
    *this = operator>>(sh);
    return *this;
  }

  template <int _AP_W2, bool _AP_S2>
                      inline __attribute__((always_inline)) ap_fixed_base& operator>>=(const ap_int_base<_AP_W2, _AP_S2>& sh) {
    *this = operator>>(sh.to_int());
    return *this;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
                      inline __attribute__((always_inline)) ap_fixed_base& operator>>=(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&
          sh) {
    *this = operator>>(sh.to_int());
    return *this;
  }
# 1649 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h"
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) bool operator >(const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { enum { _AP_F = _AP_W - _AP_I, F2 = _AP_W2 - _AP_I2 }; if (_AP_F == F2) return Base::V > op2.V; else if (_AP_F > F2) return Base::V > ap_fixed_base<((_AP_W2 + _AP_F - F2) > (1) ? (_AP_W2 + _AP_F - F2) : (1)), _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>(op2).V; else return ap_fixed_base<((_AP_W + F2 - _AP_F + 1) > (1) ? (_AP_W + F2 - _AP_F + 1) : (1)), _AP_I + 1, _AP_S, _AP_Q, _AP_O, _AP_N>(*this).V > op2.V; return false; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) bool operator <(const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { enum { _AP_F = _AP_W - _AP_I, F2 = _AP_W2 - _AP_I2 }; if (_AP_F == F2) return Base::V < op2.V; else if (_AP_F > F2) return Base::V < ap_fixed_base<((_AP_W2 + _AP_F - F2) > (1) ? (_AP_W2 + _AP_F - F2) : (1)), _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>(op2).V; else return ap_fixed_base<((_AP_W + F2 - _AP_F + 1) > (1) ? (_AP_W + F2 - _AP_F + 1) : (1)), _AP_I + 1, _AP_S, _AP_Q, _AP_O, _AP_N>(*this).V < op2.V; return false; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) bool operator >=(const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { enum { _AP_F = _AP_W - _AP_I, F2 = _AP_W2 - _AP_I2 }; if (_AP_F == F2) return Base::V >= op2.V; else if (_AP_F > F2) return Base::V >= ap_fixed_base<((_AP_W2 + _AP_F - F2) > (1) ? (_AP_W2 + _AP_F - F2) : (1)), _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>(op2).V; else return ap_fixed_base<((_AP_W + F2 - _AP_F + 1) > (1) ? (_AP_W + F2 - _AP_F + 1) : (1)), _AP_I + 1, _AP_S, _AP_Q, _AP_O, _AP_N>(*this).V >= op2.V; return false; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) bool operator <=(const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { enum { _AP_F = _AP_W - _AP_I, F2 = _AP_W2 - _AP_I2 }; if (_AP_F == F2) return Base::V <= op2.V; else if (_AP_F > F2) return Base::V <= ap_fixed_base<((_AP_W2 + _AP_F - F2) > (1) ? (_AP_W2 + _AP_F - F2) : (1)), _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>(op2).V; else return ap_fixed_base<((_AP_W + F2 - _AP_F + 1) > (1) ? (_AP_W + F2 - _AP_F + 1) : (1)), _AP_I + 1, _AP_S, _AP_Q, _AP_O, _AP_N>(*this).V <= op2.V; return false; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) bool operator ==(const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { enum { _AP_F = _AP_W - _AP_I, F2 = _AP_W2 - _AP_I2 }; if (_AP_F == F2) return Base::V == op2.V; else if (_AP_F > F2) return Base::V == ap_fixed_base<((_AP_W2 + _AP_F - F2) > (1) ? (_AP_W2 + _AP_F - F2) : (1)), _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>(op2).V; else return ap_fixed_base<((_AP_W + F2 - _AP_F + 1) > (1) ? (_AP_W + F2 - _AP_F + 1) : (1)), _AP_I + 1, _AP_S, _AP_Q, _AP_O, _AP_N>(*this).V == op2.V; return false; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) bool operator !=(const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { enum { _AP_F = _AP_W - _AP_I, F2 = _AP_W2 - _AP_I2 }; if (_AP_F == F2) return Base::V != op2.V; else if (_AP_F > F2) return Base::V != ap_fixed_base<((_AP_W2 + _AP_F - F2) > (1) ? (_AP_W2 + _AP_F - F2) : (1)), _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>(op2).V; else return ap_fixed_base<((_AP_W + F2 - _AP_F + 1) > (1) ? (_AP_W + F2 - _AP_F + 1) : (1)), _AP_I + 1, _AP_S, _AP_Q, _AP_O, _AP_N>(*this).V != op2.V; return false; }





  inline __attribute__((always_inline)) bool operator >(double d) const { return to_double() > d; }
  inline __attribute__((always_inline)) bool operator <(double d) const { return to_double() < d; }
  inline __attribute__((always_inline)) bool operator >=(double d) const { return to_double() >= d; }
  inline __attribute__((always_inline)) bool operator <=(double d) const { return to_double() <= d; }
  inline __attribute__((always_inline)) bool operator ==(double d) const { return to_double() == d; }
  inline __attribute__((always_inline)) bool operator !=(double d) const { return to_double() != d; }


  inline __attribute__((always_inline)) af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> operator[](
      unsigned index) {
    (static_cast<void>(0));
    return af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>(this, index);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> operator[](
      const ap_int_base<_AP_W2, _AP_S2>& index) {
    (static_cast<void>(0));
    (static_cast<void>(0));
    return af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>(this,
                                                                index.to_int());
  }

                      inline __attribute__((always_inline)) bool operator[](unsigned index) const {
    (static_cast<void>(0));
    return ({ __typeof__(const_cast<ap_fixed_base*>(this)->V) __Val2__ = const_cast<ap_fixed_base*>(this)->V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), index); __Result__; });
  }

  inline __attribute__((always_inline)) af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> bit(
      unsigned index) {
    (static_cast<void>(0));
    return af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>(this, index);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> bit(
      const ap_int_base<_AP_W2, _AP_S2>& index) {
    (static_cast<void>(0));
    (static_cast<void>(0));
    return af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>(this,
                                                                index.to_int());
  }

                      inline __attribute__((always_inline)) bool bit(unsigned index) const {
    (static_cast<void>(0));
    return ({ __typeof__(const_cast<ap_fixed_base*>(this)->V) __Val2__ = const_cast<ap_fixed_base*>(this)->V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), index); __Result__; });
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> get_bit(
      const ap_int_base<_AP_W2, true>& index) {
    (static_cast<void>(0));

    (static_cast<void>(0));
    return af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>(
        this, index.to_int() + _AP_W - _AP_I);
  }

                      inline __attribute__((always_inline)) bool get_bit(int index) const {
    (static_cast<void>(0));
    (static_cast<void>(0));
    return ({ __typeof__(const_cast<ap_fixed_base*>(this)->V) __Val2__ = const_cast<ap_fixed_base*>(this)->V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), index + _AP_W - _AP_I); __Result__; });

  }
# 1735 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h"
  template <int _AP_W2>
                      inline __attribute__((always_inline)) bool get_bit(const ap_int_base<_AP_W2, true>& index) const {
    (static_cast<void>(0));
    (static_cast<void>(0));
    return ({ __typeof__(const_cast<ap_fixed_base*>(this)->V) __Val2__ = const_cast<ap_fixed_base*>(this)->V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), index.to_int() + _AP_W - _AP_I); __Result__; });

  }

  inline __attribute__((always_inline)) af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> range(int Hi,
                                                                      int Lo) {
    (static_cast<void>(0));
    return af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>(this, Hi, Lo);
  }


  inline __attribute__((always_inline)) af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> range(
      int Hi, int Lo) const {
    (static_cast<void>(0));
    return af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>(
        const_cast<ap_fixed_base*>(this), Hi, Lo);
  }

  template <int _AP_W2, bool _AP_S2, int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> range(
      const ap_int_base<_AP_W2, _AP_S2>& HiIdx,
      const ap_int_base<_AP_W3, _AP_S3>& LoIdx) {
    int Hi = HiIdx.to_int();
    int Lo = LoIdx.to_int();
    return this->range(Hi, Lo);
  }

  template <int _AP_W2, bool _AP_S2, int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> range(
      const ap_int_base<_AP_W2, _AP_S2>& HiIdx,
      const ap_int_base<_AP_W3, _AP_S3>& LoIdx) const {
    int Hi = HiIdx.to_int();
    int Lo = LoIdx.to_int();
    return this->range(Hi, Lo);
  }

  inline __attribute__((always_inline)) af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> range() {
    return this->range(_AP_W - 1, 0);
  }

  inline __attribute__((always_inline)) af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> range() const {
    return this->range(_AP_W - 1, 0);
  }

  inline __attribute__((always_inline)) af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> operator()(
      int Hi, int Lo) {
    return this->range(Hi, Lo);
  }

  inline __attribute__((always_inline)) af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> operator()(
      int Hi, int Lo) const {
    return this->range(Hi, Lo);
  }

  template <int _AP_W2, bool _AP_S2, int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> operator()(
      const ap_int_base<_AP_W2, _AP_S2>& HiIdx,
      const ap_int_base<_AP_W3, _AP_S3>& LoIdx) {
    int Hi = HiIdx.to_int();
    int Lo = LoIdx.to_int();
    return this->range(Hi, Lo);
  }

  template <int _AP_W2, bool _AP_S2, int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> operator()(
      const ap_int_base<_AP_W2, _AP_S2>& HiIdx,
      const ap_int_base<_AP_W3, _AP_S3>& LoIdx) const {
    int Hi = HiIdx.to_int();
    int Lo = LoIdx.to_int();
    return this->range(Hi, Lo);
  }

                      inline __attribute__((always_inline)) bool is_zero() const { return Base::V == (unsigned long)0; }

                      inline __attribute__((always_inline)) bool is_neg() const {
    if (_AP_S && ({ __typeof__(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; })) return true;
    return false;
  }

                      inline __attribute__((always_inline)) int wl() const { return _AP_W; }

                      inline __attribute__((always_inline)) int iwl() const { return _AP_I; }

                      inline __attribute__((always_inline)) ap_q_mode q_mode() const { return _AP_Q; }

                      inline __attribute__((always_inline)) ap_o_mode o_mode() const { return _AP_O; }

                      inline __attribute__((always_inline)) int n_bits() const { return _AP_N; }
# 1918 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h"
  inline __attribute__((always_inline)) char* to_string(unsigned char radix = 2, bool sign = _AP_S) const {
    (void)(radix);
    (void)(sign);
    return 0;
  }

};

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
                    inline __attribute__((always_inline)) void b_not(
    ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& ret,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) {
  ret.V = ~op.V;
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
                    inline __attribute__((always_inline)) void b_and(
    ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& ret,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op1,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op2) {
  ret.V = op1.V & op2.V;
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
                    inline __attribute__((always_inline)) void b_or(
    ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& ret,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op1,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op2) {
  ret.V = op1.V | op2.V;
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
                    inline __attribute__((always_inline)) void b_xor(
    ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& ret,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op1,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op2) {
  ret.V = op1.V ^ op2.V;
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N, int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
          ap_o_mode _AP_O2, int _AP_N2>
                    inline __attribute__((always_inline)) void neg(
    ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& ret,
    const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
  ap_fixed_base<_AP_W2 + !_AP_S2, _AP_I2 + !_AP_S2, true, _AP_Q2, _AP_O2,
                _AP_N2>
      t(0);
  t.V = -op.V;
  ret = t;
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N, int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
          ap_o_mode _AP_O2, int _AP_N2>
                    inline __attribute__((always_inline)) void lshift(
    ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& ret,
    const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op,
    int i) {
  enum {
    F2 = _AP_W2 - _AP_I2,
    _AP_I3 = ((_AP_I) > (_AP_I2) ? (_AP_I) : (_AP_I2)),
    _AP_W3 = _AP_I3 + F2,
  };

  ap_fixed_base<_AP_W3, _AP_I3, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> t(0);
  t.V = op.V;
  t.V <<= i;

  ret = t;
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N, int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
          ap_o_mode _AP_O2, int _AP_N2>
                    inline __attribute__((always_inline)) void rshift(
    ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& ret,
    const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op,
    int i) {
  enum {
    F = _AP_W - _AP_I,
    F2 = _AP_W2 - _AP_I2,
    F3 = ((F) > (F2) ? (F) : (F2)),
    _AP_W3 = _AP_I2 + F3,
    sh = F - F2,
  };

  ap_fixed_base<_AP_W3, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> t(0);
  t.V = op.V;
  if (sh >= 0)
    t.V <<= (int) sh;
  t.V >>= i;

  ret = t;
}
# 2370 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h"
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator +(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::plus operator +( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator -(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::minus operator -( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator *(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::mult operator *( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator /(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::div operator /( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator &(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::logic operator &( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator |(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::logic operator |( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator ^(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::logic operator ^( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator >>(ap_int_base<(1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator <<(ap_int_base<(1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator +=(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator -=(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator *=(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator /=(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator &=(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator |=(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator ^=(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator >>=(ap_int_base<(1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator <<=(ap_int_base<(1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator >(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator <(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator >=(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator <=(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator ==(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator !=(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator +(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::plus operator +( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator -(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::minus operator -( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator *(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::mult operator *( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator /(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::div operator /( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator &(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::logic operator &( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator |(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::logic operator |( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator ^(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::logic operator ^( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator >>(ap_int_base<(8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator <<(ap_int_base<(8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator +=(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator -=(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator *=(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator /=(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator &=(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator |=(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator ^=(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator >>=(ap_int_base<(8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator <<=(ap_int_base<(8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator >(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator <(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator >=(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator <=(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator ==(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator !=(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator +(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::plus operator +( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator -(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::minus operator -( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator *(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::mult operator *( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator /(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::div operator /( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator &(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::logic operator &( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator |(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::logic operator |( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator ^(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::logic operator ^( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator >>(ap_int_base<(8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator <<(ap_int_base<(8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator +=(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator -=(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator *=(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator /=(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator &=(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator |=(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator ^=(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator >>=(ap_int_base<(8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator <<=(ap_int_base<(8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator >(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator <(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator >=(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator <=(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator ==(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator !=(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator +(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::plus operator +( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator -(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::minus operator -( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator *(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::mult operator *( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator /(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::div operator /( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator &(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::logic operator &( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator |(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::logic operator |( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator ^(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::logic operator ^( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator >>(ap_int_base<(8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator <<(ap_int_base<(8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator +=(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator -=(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator *=(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator /=(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator &=(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator |=(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator ^=(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator >>=(ap_int_base<(8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator <<=(ap_int_base<(8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator >(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator <(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator >=(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator <=(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator ==(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator !=(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator +(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::plus operator +( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator -(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::minus operator -( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator *(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::mult operator *( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator /(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::div operator /( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator &(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::logic operator &( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator |(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::logic operator |( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator ^(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::logic operator ^( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator >>(ap_int_base<(_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator <<(ap_int_base<(_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator +=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator -=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator *=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator /=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator &=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator |=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator ^=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator >>=(ap_int_base<(_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator <<=(ap_int_base<(_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator >(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator <(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator >=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator <=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator ==(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator !=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator +(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::plus operator +( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator -(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::minus operator -( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator *(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::mult operator *( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator /(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::div operator /( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator &(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::logic operator &( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator |(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::logic operator |( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator ^(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::logic operator ^( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator >>(ap_int_base<(_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator <<(ap_int_base<(_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator +=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator -=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator *=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator /=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator &=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator |=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator ^=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator >>=(ap_int_base<(_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator <<=(ap_int_base<(_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator >(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator <(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator >=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator <=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator ==(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator !=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator +(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::plus operator +( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator -(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::minus operator -( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator *(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::mult operator *( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator /(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::div operator /( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator &(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::logic operator &( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator |(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::logic operator |( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator ^(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::logic operator ^( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator >>(ap_int_base<(_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator <<(ap_int_base<(_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator +=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator -=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator *=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator /=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator &=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator |=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator ^=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator >>=(ap_int_base<(_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator <<=(ap_int_base<(_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator >(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator <(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator >=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator <=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator ==(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator !=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator +(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::plus operator +( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator -(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::minus operator -( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator *(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::mult operator *( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator /(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::div operator /( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator &(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::logic operator &( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator |(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::logic operator |( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator ^(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::logic operator ^( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator >>(ap_int_base<(_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator <<(ap_int_base<(_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator +=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator -=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator *=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator /=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator &=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator |=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator ^=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator >>=(ap_int_base<(_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator <<=(ap_int_base<(_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator >(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator <(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator >=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator <=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator ==(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator !=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator +(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::plus operator +( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator -(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::minus operator -( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator *(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::mult operator *( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator /(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::div operator /( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator &(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::logic operator &( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator |(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::logic operator |( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator ^(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::logic operator ^( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator >>(ap_int_base<(_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator <<(ap_int_base<(_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator +=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator -=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator *=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator /=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator &=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator |=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator ^=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator >>=(ap_int_base<(_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator <<=(ap_int_base<(_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator >(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator <(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator >=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator <=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator ==(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator !=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator +(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::plus operator +( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator -(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::minus operator -( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator *(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::mult operator *( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator /(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::div operator /( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator &(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::logic operator &( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator |(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::logic operator |( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator ^(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::logic operator ^( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator >>(ap_int_base<(_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator <<(ap_int_base<(_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator +=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator -=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator *=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator /=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator &=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator |=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator ^=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator >>=(ap_int_base<(_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator <<=(ap_int_base<(_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator >(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator <(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator >=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator <=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator ==(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator !=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator +(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::plus operator +( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator -(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::minus operator -( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator *(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::mult operator *( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator /(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::div operator /( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator &(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::logic operator &( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator |(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::logic operator |( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator ^(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::logic operator ^( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator >>(ap_int_base<(_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator <<(ap_int_base<(_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator +=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator -=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator *=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator /=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator &=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator |=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator ^=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator >>=(ap_int_base<(_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator <<=(ap_int_base<(_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator >(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator <(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator >=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator <=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator ==(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator !=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator +(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::plus operator +( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator -(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::minus operator -( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator *(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::mult operator *( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator /(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::div operator /( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator &(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::logic operator &( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator |(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::logic operator |( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator ^(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::logic operator ^( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator >>(ap_int_base<(_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator <<(ap_int_base<(_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator +=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator -=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator *=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator /=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator &=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator |=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator ^=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator >>=(ap_int_base<(_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator <<=(ap_int_base<(_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator >(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator <(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator >=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator <=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator ==(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator !=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator !=(op); }
# 2458 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_base.h"
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>::template RType< _AP_W, _AP_I, _AP_S>::plus operator +( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< _AP_W2, _AP_W2, _AP_S2>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator +(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>::template RType< _AP_W, _AP_I, _AP_S>::minus operator -( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< _AP_W2, _AP_W2, _AP_S2>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator -(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>::template RType< _AP_W, _AP_I, _AP_S>::mult operator *( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< _AP_W2, _AP_W2, _AP_S2>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator *(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>::template RType< _AP_W, _AP_I, _AP_S>::div operator /( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< _AP_W2, _AP_W2, _AP_S2>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator /(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>::template RType< _AP_W, _AP_I, _AP_S>::logic operator &( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< _AP_W2, _AP_W2, _AP_S2>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator &(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>::template RType< _AP_W, _AP_I, _AP_S>::logic operator |( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< _AP_W2, _AP_W2, _AP_S2>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator |(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>::template RType< _AP_W, _AP_I, _AP_S>::logic operator ^( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< _AP_W2, _AP_W2, _AP_S2>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator ^(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); }



template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator +=(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W2, _AP_S2>& operator +=( ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return i_op.operator +=(op.to_ap_int_base()); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator -=(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W2, _AP_S2>& operator -=( ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return i_op.operator -=(op.to_ap_int_base()); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator *=(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W2, _AP_S2>& operator *=( ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return i_op.operator *=(op.to_ap_int_base()); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator /=(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W2, _AP_S2>& operator /=( ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return i_op.operator /=(op.to_ap_int_base()); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator &=(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W2, _AP_S2>& operator &=( ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return i_op.operator &=(op.to_ap_int_base()); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator |=(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W2, _AP_S2>& operator |=( ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return i_op.operator |=(op.to_ap_int_base()); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator ^=(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W2, _AP_S2>& operator ^=( ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return i_op.operator ^=(op.to_ap_int_base()); }



template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator ==(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator ==( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator ==(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator !=(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator !=( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator >(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator >(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator >=(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >=( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator >=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator <(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator <(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator <=(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <=( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator <=(op); }




template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
                    inline __attribute__((always_inline)) bool operator==(
    double op1,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op2) {
  return op2.operator==(op1);
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
                    inline __attribute__((always_inline)) bool operator!=(
    double op1,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op2) {
  return op2.operator!=(op1);
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
                    inline __attribute__((always_inline)) bool operator>(
    double op1,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op2) {
  return op2.operator<(op1);
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
                    inline __attribute__((always_inline)) bool operator>=(
    double op1,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op2) {
  return op2.operator<=(op1);
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
                    inline __attribute__((always_inline)) bool operator<(
    double op1,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op2) {
  return op2.operator>(op1);
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
                    inline __attribute__((always_inline)) bool operator<=(
    double op1,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op2) {
  return op2.operator>=(op1);
}
# 11 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed.h" 2
# 1 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_ref.h" 1
# 25 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_ref.h"
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
struct af_bit_ref {



  typedef ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> ref_type;
  ref_type& d_bv;
  int d_index;

 public:
  inline __attribute__((always_inline)) af_bit_ref(
      const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& ref)
      : d_bv(ref.d_bv), d_index(ref.d_index) {






  }

  inline __attribute__((always_inline)) af_bit_ref(ref_type* bv, int index = 0) : d_bv(*bv), d_index(index) {}

  inline __attribute__((always_inline)) af_bit_ref(const ref_type* bv, int index = 0)
      : d_bv(*const_cast<ref_type*>(bv)), d_index(index) {}


  inline __attribute__((always_inline)) operator bool() const { return ({ __typeof__(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), d_index); __Result__; }); }



  inline __attribute__((always_inline)) af_bit_ref& operator=(bool val) {
    d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; });
    return *this;
  }



  inline __attribute__((always_inline)) af_bit_ref& operator=(const af_bit_ref& val) {
    return operator=(bool(val));
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) af_bit_ref& operator=(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& val) {
    return operator=(bool(val));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) af_bit_ref& operator=(const ap_bit_ref<_AP_W2, _AP_S2>& val) {
    return operator=(bool(val));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) af_bit_ref& operator=(const ap_int_base<_AP_W2, _AP_S2>& val) {
    return operator=(val != 0);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) af_bit_ref& operator=(const ap_range_ref<_AP_W2, _AP_S2>& val) {
    return operator=(ap_int_base<_AP_W2, false>(val));
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) af_bit_ref& operator=(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& val) {
    return operator=(ap_int_base<_AP_W2, false>(val));
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) af_bit_ref& operator=(
      const ap_concat_ref<_AP_W2, _AP_T3, _AP_W3, _AP_T3>& val) {
    return operator=(ap_int_base<_AP_W2 + _AP_W3, false>(val));
  }




  template <int _AP_W2, int _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<1, af_bit_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  operator,(ap_int_base<_AP_W2, _AP_S2> &op) {
    return ap_concat_ref<1, af_bit_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >(
        *this, op);
  }

  template <int _AP_W2, int _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<1, af_bit_ref, 1, ap_bit_ref<_AP_W2, _AP_S2> > operator,(
      const ap_bit_ref<_AP_W2, _AP_S2> &op) {
    return ap_concat_ref<1, af_bit_ref, 1, ap_bit_ref<_AP_W2, _AP_S2> >(*this,
                                                                        op);
  }

  template <int _AP_W2, int _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<1, af_bit_ref, _AP_W2, ap_range_ref<_AP_W2, _AP_S2> >
  operator,(const ap_range_ref<_AP_W2, _AP_S2> &op) {
    return ap_concat_ref<1, af_bit_ref, _AP_W2, ap_range_ref<_AP_W2, _AP_S2> >(
        *this, op);
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_concat_ref<1, af_bit_ref, _AP_W2 + _AP_W3,
                       ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >
  operator,(const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> &op) {
    return ap_concat_ref<1, af_bit_ref, _AP_W2 + _AP_W3,
                         ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >(*this,
                                                                         op);
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_concat_ref<
      1, af_bit_ref, _AP_W2,
      af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >
  operator,(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> &op) {
    return ap_concat_ref<
        1, af_bit_ref, _AP_W2,
        af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >(*this,
                                                                       op);
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_concat_ref<1, af_bit_ref, 1, af_bit_ref<_AP_W2, _AP_I2, _AP_S2,
                                                    _AP_Q2, _AP_O2, _AP_N2> >
  operator,(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> &op) {
    return ap_concat_ref<1, af_bit_ref, 1, af_bit_ref<_AP_W2, _AP_I2, _AP_S2,
                                                      _AP_Q2, _AP_O2, _AP_N2> >(
        *this,
        const_cast<af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&>(
            op));
  }




  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) bool operator==(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
    return get() == op.get();
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) bool operator!=(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
    return get() != op.get();
  }


  inline __attribute__((always_inline)) bool operator~() const {
    bool bit = ({ __typeof__(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), d_index); __Result__; });
    return bit ? false : true;
  }

  inline __attribute__((always_inline)) bool get() const { return ({ __typeof__(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), d_index); __Result__; }); }

  inline __attribute__((always_inline)) int length() const { return 1; }





  inline __attribute__((always_inline)) char* to_string() const { return 0; }

};
# 212 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_ref.h"
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
struct af_range_ref {



  typedef ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> ref_type;
  ref_type& d_bv;
  int l_index;
  int h_index;

 public:

  inline __attribute__((always_inline)) af_range_ref(
      const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& ref)
      : d_bv(ref.d_bv), l_index(ref.l_index), h_index(ref.h_index) {}




  inline __attribute__((always_inline)) af_range_ref(ref_type* bv, int h, int l)
      : d_bv(*bv), l_index(l), h_index(h) {
# 242 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_ref.h"
  }

  inline __attribute__((always_inline)) af_range_ref(const ref_type* bv, int h, int l)
      : d_bv(*const_cast<ref_type*>(bv)), l_index(l), h_index(h) {
# 254 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_ref.h"
  }
# 266 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_ref.h"
  inline __attribute__((always_inline)) af_range_ref& operator=(const bool val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const char val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const signed char val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const unsigned char val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const short val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const unsigned short val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const int val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const unsigned int val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const long val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const unsigned long val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const ap_slong val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const ap_ulong val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const half val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const float val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const double val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }



  inline __attribute__((always_inline)) af_range_ref& operator=(const char* val) {
    const ap_int_base<_AP_W, false> tmp(val);
    d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; });
    return *this;
  }



  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) af_range_ref& operator=(const ap_int_base<_AP_W3, _AP_S3>& val) {
    d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(val.V) __Repl2__ = val.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; });
    return *this;
  }


  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) af_range_ref& operator=(const ap_range_ref<_AP_W2, _AP_S2>& val) {
    const ap_int_base<_AP_W2, false> tmp(val);
    return operator=(tmp);
  }


  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) af_range_ref& operator=(const ap_bit_ref<_AP_W2, _AP_S2>& val) {
    const ap_int_base<1, false> tmp((bool)val);
    return operator=(tmp);
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) af_range_ref& operator=(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&
          val) {
    d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(val.V) __Repl2__ = val.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; });
    return *this;
  }




  inline __attribute__((always_inline)) af_range_ref& operator=(const af_range_ref& val) {
    ap_int_base<_AP_W, false> tmp(val);
    return operator=(tmp);
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) af_range_ref& operator=(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& val) {
    ap_int_base<_AP_W2, false> tmp(val);
    return operator=(tmp);
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) af_range_ref& operator=(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& val) {
    ap_int_base<1, false> tmp((bool)val);
    return operator=(tmp);
  }


  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) af_range_ref& operator=(
      const ap_concat_ref<_AP_W2, _AP_T3, _AP_W3, _AP_T3>& val) {
    const ap_int_base<_AP_W2 + _AP_W3, false> tmp(val);
    return operator=(tmp);
  }




  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator==(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    ap_int_base<_AP_W, false> lop(*this);
    ap_int_base<_AP_W2, false> rop(op2);
    return lop == rop;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator!=(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    return !(operator==(op2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator<(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    ap_int_base<_AP_W, false> lop(*this);
    ap_int_base<_AP_W2, false> rop(op2);
    return lop < rop;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator>(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    ap_int_base<_AP_W, false> lop(*this);
    ap_int_base<_AP_W2, false> rop(op2);
    return lop > rop;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator<=(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    return !(operator>(op2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator>=(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    return !(operator<(op2));
  }




  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) bool operator==(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) {
    ap_int_base<_AP_W, false> lop(*this);
    ap_int_base<_AP_W2, false> rop(op2);
    return lop == rop;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) bool operator!=(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) {
    return !(operator==(op2));
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) bool operator<(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) {
    ap_int_base<_AP_W, false> lop(*this);
    ap_int_base<_AP_W2, false> rop(op2);
    return lop < rop;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) bool operator>(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) {
    ap_int_base<_AP_W, false> lop(*this);
    ap_int_base<_AP_W2, false> rop(op2);
    return lop > rop;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) bool operator<=(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) {
    return !(operator>(op2));
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) bool operator>=(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) {
    return !(operator<(op2));
  }





  template <int _AP_W2, int _AP_S2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, af_range_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
      operator,(ap_int_base<_AP_W2, _AP_S2> &op) {
    return ap_concat_ref<_AP_W, af_range_ref, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(*this, op);
  }


  template <int _AP_W2, int _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, af_range_ref, 1, ap_bit_ref<_AP_W2, _AP_S2> >
  operator,(const ap_bit_ref<_AP_W2, _AP_S2> &op) {
    return ap_concat_ref<_AP_W, af_range_ref, 1, ap_bit_ref<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_bit_ref<_AP_W2, _AP_S2>&>(op));
  }


  template <int _AP_W2, int _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, af_range_ref, _AP_W2, ap_range_ref<_AP_W2, _AP_S2> >
  operator,(const ap_range_ref<_AP_W2, _AP_S2> &op) {
    return ap_concat_ref<_AP_W, af_range_ref, _AP_W2,
                         ap_range_ref<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_range_ref<_AP_W2, _AP_S2>&>(op));
  }


  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, af_range_ref, _AP_W2 + _AP_W3,
                       ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >
  operator,(const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> &op) {
    return ap_concat_ref<_AP_W, af_range_ref, _AP_W2 + _AP_W3,
                         ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >(
        *this, const_cast<ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>&>(op));
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, af_range_ref, _AP_W2,
                    af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >
      operator,(const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>
                    &op) {
    return ap_concat_ref<
        _AP_W, af_range_ref, _AP_W2,
        af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >(
        *this,
        const_cast<af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&>(
            op));
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, af_range_ref, 1,
                    af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >
      operator,(
          const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> &op) {
    return ap_concat_ref<
        _AP_W, af_range_ref, 1,
        af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >(
        *this,
        const_cast<af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&>(
            op));
  }


  inline __attribute__((always_inline)) operator ap_ulong() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return ret.to_uint64();
  }

  inline __attribute__((always_inline)) operator ap_int_base<_AP_W, false>() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return ret;
  }

  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> to_ap_int_base() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return ret;
  }


  inline __attribute__((always_inline)) char to_char() const {
    return (char)(({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) int to_int() const {
    return (int)(({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) unsigned to_uint() const {
    return (unsigned)(({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) long to_long() const {
    return (long)(({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) unsigned long to_ulong() const {
    return (unsigned long)(({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) ap_slong to_int64() const {
    return (ap_slong)(({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) ap_ulong to_uint64() const {
    return (ap_ulong)(({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }



  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> operator~() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return (~ret);
  }

  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> operator!() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return (!ret);
  }

  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> operator+() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return ret;
  }

  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> operator-() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return (-ret);
  }


  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> get() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return ret;
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) void set(const ap_int_base<_AP_W2, false>& val) {
    d_bv.V = ({ typename _ap_type::remove_const<__typeof__(d_bv.V)>::type __Result__ = 0; __typeof__(d_bv.V) __Val2__ = d_bv.V; __typeof__(val.V) __Repl2__ = val.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; });
  }

  inline __attribute__((always_inline)) int length() const {
    return h_index >= l_index ? h_index - l_index + 1 : l_index - h_index + 1;
  }
# 615 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_ref.h"
  inline __attribute__((always_inline)) char* to_string(signed char rd = 2) const {
     (void)(rd);
    return 0;
  }

};
# 679 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_ref.h"
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(1), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( bool op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(1), (false)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( bool op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(1), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( bool op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(1), (false)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( bool op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(1), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( bool op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(1), (false)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( bool op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(1), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( bool op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(1), (false)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( bool op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(1), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( bool op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(1), (false)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( bool op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(1), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( bool op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(1), (false)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( bool op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(8), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( signed char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (true)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( signed char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(8), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( signed char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (true)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( signed char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(8), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( signed char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (true)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( signed char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(8), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( signed char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (true)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( signed char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(8), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( signed char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (true)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( signed char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(8), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( signed char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (true)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( signed char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(8), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (false)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(8), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (false)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(8), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (false)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(8), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (false)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(8), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (false)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(8), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (false)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( ap_slong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( ap_slong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( ap_slong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( ap_slong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( ap_slong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( ap_slong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( ap_slong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( ap_slong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( ap_slong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( ap_slong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( ap_slong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( ap_slong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( ap_ulong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( ap_ulong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( ap_ulong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( ap_ulong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( ap_ulong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( ap_ulong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( ap_ulong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( ap_ulong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( ap_ulong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( ap_ulong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( ap_ulong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( ap_ulong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
# 725 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_ref.h"
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S>& op2) { return ap_int_base<_AP_W, false>(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > ap_int_base<1, false>(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S>& op2) { return ap_int_base<_AP_W, false>(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < ap_int_base<1, false>(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S>& op2) { return ap_int_base<_AP_W, false>(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >=( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >=( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= ap_int_base<1, false>(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S>& op2) { return ap_int_base<_AP_W, false>(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <=( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <=( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= ap_int_base<1, false>(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S>& op2) { return ap_int_base<_AP_W, false>(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator ==( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator ==( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == ap_int_base<1, false>(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S>& op2) { return ap_int_base<_AP_W, false>(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator !=( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator !=( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != ap_int_base<1, false>(op); }
# 12 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed.h" 2





template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
struct ap_fixed : ap_fixed_base<_AP_W, _AP_I, true, _AP_Q, _AP_O, _AP_N> {
  typedef ap_fixed_base<_AP_W, _AP_I, true, _AP_Q, _AP_O, _AP_N> Base;


  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed() : Base() {}


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2,
                                      _AP_O2, _AP_N2>& op)
      : Base(op) {}

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(const volatile ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2,
                                               _AP_O2, _AP_N2>& op)
      : Base(op) {}
# 66 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed.h"
  template <int _AP_W2, bool _AP_S2>
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(const ap_int_base<_AP_W2, _AP_S2>& op) : Base(op) {}

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(const volatile ap_int_base<_AP_W2, _AP_S2>& op) : Base(op) {}




  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(unsigned V __attribute__((bitwidth(_AP_W))), bool raw) {
    Base::V = V;
    (void)(raw);
  }
# 101 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed.h"
  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(const ap_bit_ref<_AP_W2, _AP_S2>& op) : Base(op) {}


  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(const ap_range_ref<_AP_W2, _AP_S2>& op) : Base(op) {}


  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& op)
      : Base(op) {}


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base(op) {}


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base(op) {}





                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(bool v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(char v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(signed char v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(unsigned char v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(short v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(unsigned short v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(int v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(unsigned int v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(long v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(unsigned long v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(ap_slong v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(ap_ulong v) : Base(v) {}
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(half v) : Base(v) {}
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(float v) : Base(v) {}
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(double v) : Base(v) {}


  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(const char* s) : Base(s) {}

  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed(const char* s, signed char rd) : Base(s, rd) {}







  ap_fixed &
  operator=(const ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> &op) = default;
# 168 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed.h"
  inline __attribute__((always_inline)) __attribute__((nodebug)) void operator=(
      const ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N>& op) volatile {
    Base::V = op.V;
  }

  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_fixed& operator=(
      const volatile ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N>& op) {
    Base::V = op.V;
    return *this;
  }

  inline __attribute__((always_inline)) __attribute__((nodebug)) void operator=(
      const volatile ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N>& op) volatile {
    Base::V = op.V;
  }
};





template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
struct ap_ufixed : ap_fixed_base<_AP_W, _AP_I, false, _AP_Q, _AP_O, _AP_N> {
  typedef ap_fixed_base<_AP_W, _AP_I, false, _AP_Q, _AP_O, _AP_N> Base;


  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed() : Base() {}


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2,
                                       _AP_O2, _AP_N2>& op)
      : Base(op) {}


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(const volatile ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2,
                                                _AP_O2, _AP_N2>& op)
      : Base(op) {}
# 237 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed.h"
  template <int _AP_W2, bool _AP_S2>
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(const ap_int_base<_AP_W2, _AP_S2>& op) : Base(op) {}

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(const volatile ap_int_base<_AP_W2, _AP_S2>& op) : Base(op) {}




  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(unsigned V __attribute__((bitwidth(_AP_W))), bool raw) {
    Base::V = V;
    (void)(raw);
  }
# 269 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed.h"
  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(const ap_bit_ref<_AP_W2, _AP_S2>& op) : Base(op) {}

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(const ap_range_ref<_AP_W2, _AP_S2>& op) : Base(op) {}

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& op)
      : Base(op) {}

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base(op) {}

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base(op) {}




                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(bool v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(char v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(signed char v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(unsigned char v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(short v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(unsigned short v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(int v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(unsigned int v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(long v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(unsigned long v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(ap_slong v) : Base(v) {}
                      inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(ap_ulong v) : Base(v) {}
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(half v) : Base(v) {}
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(float v) : Base(v) {}
  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(double v) : Base(v) {}


  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(const char* s) : Base(s) {}

  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed(const char* s, signed char rd) : Base(s, rd) {}



  ap_ufixed &
  operator=(const ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> &op) = default;
# 327 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed.h"
  inline __attribute__((always_inline)) __attribute__((nodebug)) void operator=(
      const ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N>& op) volatile {
    Base::V = op.V;
  }

  inline __attribute__((always_inline)) __attribute__((nodebug)) ap_ufixed& operator=(
      const volatile ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N>& op) {
    Base::V = op.V;
    return *this;
  }

  inline __attribute__((always_inline)) __attribute__((nodebug)) void operator=(const volatile ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O,
                                                 _AP_N>& op) volatile {
    Base::V = op.V;
  }
};
# 365 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed.h"
# 1 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_special.h" 1
# 20 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_special.h"
namespace std {
template<typename _Tp> class complex;
}







namespace std {
# 48 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_special.h"
template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
class complex<ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> > {
 public:
  typedef ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> _Tp;
  typedef _Tp value_type;




  __attribute__((nodebug)) complex() : _M_real(_Tp()), _M_imag(_Tp()) {}


  __attribute__((nodebug)) complex(const _Tp &__r, const _Tp &__i = _Tp(0))
      : _M_real(__r), _M_imag(__i) {}


  template <typename _Up>
  __attribute__((nodebug)) complex(const complex<_Up> &__z) : _M_real(__z.real()), _M_imag(__z.imag()) {}


  const __attribute__((nodebug)) _Tp& real() const { return _M_real; }
  const __attribute__((nodebug)) _Tp& imag() const { return _M_imag; }







  __attribute__((nodebug)) void real(_Tp __val) { _M_real = __val; }

  __attribute__((nodebug)) void imag(_Tp __val) { _M_imag = __val; }



  __attribute__((nodebug)) complex<_Tp> &operator=(const _Tp __t) {
    _M_real = __t;
    _M_imag = _Tp(0);
    return *this;
  }



  __attribute__((nodebug)) complex<_Tp> &operator+=(const _Tp &__t) {
    _M_real += __t;
    return *this;
  }



  __attribute__((nodebug)) complex<_Tp> &operator-=(const _Tp &__t) {
    _M_real -= __t;
    return *this;
  }



  __attribute__((nodebug)) complex<_Tp> &operator*=(const _Tp &__t) {
    _M_real *= __t;
    _M_imag *= __t;
    return *this;
  }



  __attribute__((nodebug)) complex<_Tp> &operator/=(const _Tp &__t) {
    _M_real /= __t;
    _M_imag /= __t;
    return *this;
  }


  template <typename _Up>
  __attribute__((nodebug)) complex<_Tp> &operator=(const complex<_Up> &__z) {
    auto tmp1 = __z;
    complex<_Tp> tmp2 = {tmp1.real(), tmp1.imag()};
    *this = tmp2;
    return *this;
  }



  template <typename _Up>
  __attribute__((nodebug)) complex<_Tp> &operator+=(const complex<_Up> &__z) {
    _M_real += __z.real();
    _M_imag += __z.imag();
    return *this;
  }



  template <typename _Up>
  __attribute__((nodebug)) complex<_Tp> &operator-=(const complex<_Up> &__z) {
    _M_real -= __z.real();
    _M_imag -= __z.imag();
    return *this;
  }



  template <typename _Up>
  __attribute__((nodebug)) complex<_Tp> &operator*=(const complex<_Up> &__z) {
    const _Tp __r = _M_real * __z.real() - _M_imag * __z.imag();
    _M_imag = _M_real * __z.imag() + _M_imag * __z.real();
    _M_real = __r;
    return *this;
  }



  template <typename _Up>
  __attribute__((nodebug)) complex<_Tp> &operator/=(const complex<_Up> &__z) {
    complex<_Tp> cj (__z.real(), -__z.imag());
    complex<_Tp> a = (*this) * cj;
    complex<_Tp> b = cj * __z;
    _M_real = a.real() / b.real();
    _M_imag = a.imag() / b.real();
    return *this;
  }

 private:
  _Tp _M_real;
  _Tp _M_imag;

};
# 190 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_special.h"
template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
class complex<ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> > {
 public:
  typedef ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> _Tp;
  typedef _Tp value_type;




  __attribute__((nodebug)) complex() : _M_real(_Tp()), _M_imag(_Tp()) {}


  __attribute__((nodebug)) complex(const _Tp &__r, const _Tp &__i = _Tp(0))
      : _M_real(__r), _M_imag(__i) {}


  template <typename _Up>
  __attribute__((nodebug)) complex(const complex<_Up> &__z) : _M_real(__z.real()), _M_imag(__z.imag()) {}


  const __attribute__((nodebug)) _Tp& real() const { return _M_real; }
  const __attribute__((nodebug)) _Tp& imag() const { return _M_imag; }







  __attribute__((nodebug)) void real(_Tp __val) { _M_real = __val; }

  __attribute__((nodebug)) void imag(_Tp __val) { _M_imag = __val; }



  __attribute__((nodebug)) complex<_Tp> &operator=(const _Tp __t) {
    _M_real = __t;
    _M_imag = _Tp(0);
    return *this;
  }



  __attribute__((nodebug)) complex<_Tp> &operator+=(const _Tp &__t) {
    _M_real += __t;
    return *this;
  }



  __attribute__((nodebug)) complex<_Tp> &operator-=(const _Tp &__t) {
    _M_real -= __t;
    return *this;
  }



  __attribute__((nodebug)) complex<_Tp> &operator*=(const _Tp &__t) {
    _M_real *= __t;
    _M_imag *= __t;
    return *this;
  }



  __attribute__((nodebug)) complex<_Tp> &operator/=(const _Tp &__t) {
    _M_real /= __t;
    _M_imag /= __t;
    return *this;
  }


  template <typename _Up>
  __attribute__((nodebug)) complex<_Tp> &operator=(const complex<_Up> &__z) {
    auto tmp1 = __z;
    complex<_Tp> tmp2 = {tmp1.real(), tmp1.imag()};
    *this = tmp2;
    return *this;
  }



  template <typename _Up>
  __attribute__((nodebug)) complex<_Tp> &operator+=(const complex<_Up> &__z) {
    _M_real += __z.real();
    _M_imag += __z.imag();
    return *this;
  }



  template <typename _Up>
  __attribute__((nodebug)) complex<_Tp> &operator-=(const complex<_Up> &__z) {
    _M_real -= __z.real();
    _M_imag -= __z.imag();
    return *this;
  }



  template <typename _Up>
  __attribute__((nodebug)) complex<_Tp> &operator*=(const complex<_Up> &__z) {
    const _Tp __r = _M_real * __z.real() - _M_imag * __z.imag();
    _M_imag = _M_real * __z.imag() + _M_imag * __z.real();
    _M_real = __r;
    return *this;
  }



  template <typename _Up>
  __attribute__((nodebug)) complex<_Tp> &operator/=(const complex<_Up> &__z) {
    complex<_Tp> cj (__z.real(), -__z.imag());
    complex<_Tp> a = (*this) * cj;
    complex<_Tp> b = cj * __z;
    _M_real = a.real() / b.real();
    _M_imag = a.imag() / b.real();
    return *this;
  }

 private:
  _Tp _M_real;
  _Tp _M_imag;

};
# 323 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed_special.h"
template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
inline __attribute__((nodebug)) bool operator==(
    const complex<ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> > &__x,
    const ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> &__y) {
  return __x.real() == __y &&
         __x.imag() == 0;
}


template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
inline __attribute__((nodebug)) bool operator==(
    const ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> &__x,
    const complex<ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> > &__y) {
  return __x == __y.real() &&
         0 == __y.imag();
}


template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
inline __attribute__((nodebug)) bool operator!=(
    const complex<ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> > &__x,
    const ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> &__y) {
  return __x.real() != __y ||
         __x.imag() != 0;
}


template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
inline __attribute__((nodebug)) bool operator!=(
    const ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> &__x,
    const complex<ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> > &__y) {
  return __x != __y.real() ||
         0 != __y.imag();
}


template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
inline __attribute__((nodebug)) bool operator==(
    const complex<ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> > &__x,
    const ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> &__y) {
  return __x.real() == __y &&
         __x.imag() == 0;
}


template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
inline __attribute__((nodebug)) bool operator==(
    const ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> &__x,
    const complex<ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> > &__y) {
  return __x == __y.real() &&
         0 == __y.imag();
}


template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
inline __attribute__((nodebug)) bool operator!=(
    const complex<ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> > &__x,
    const ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> &__y) {
  return __x.real() != __y ||
         __x.imag() != 0;
}


template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
inline __attribute__((nodebug)) bool operator!=(
    const ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> &__x,
    const complex<ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> > &__y) {
  return __x != __y.real() ||
         0 != __y.imag();
}

}
# 366 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_fixed.h" 2
# 5 "/home/ayvol/vitis_accel_backend_test/firmware/defines.h" 2
# 1 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int.h" 1
# 6 "/home/ayvol/vitis_accel_backend_test/firmware/defines.h" 2
# 1 "/home/ayvol/vitis_accel_backend_test/firmware/nnet_utils/nnet_types.h" 1



# 1 "/usr/include/assert.h" 1 3 4
# 35 "/usr/include/assert.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 439 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 440 "/usr/include/features.h" 2 3 4
# 461 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 452 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 453 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 454 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 462 "/usr/include/features.h" 2 3 4
# 485 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 486 "/usr/include/features.h" 2 3 4
# 36 "/usr/include/assert.h" 2 3 4
# 66 "/usr/include/assert.h" 3 4
extern "C" {


extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     throw () __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     throw () __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     throw () __attribute__ ((__noreturn__));


}
# 5 "/home/ayvol/vitis_accel_backend_test/firmware/nnet_utils/nnet_types.h" 2
# 1 "/tools/Xilinx/Vitis_HLS/2022.2/tps/lnx64/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/../../../../include/c++/8.3.0/cstddef" 1 3
# 43 "/tools/Xilinx/Vitis_HLS/2022.2/tps/lnx64/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/../../../../include/c++/8.3.0/cstddef" 3






# 1 "/tools/Xilinx/Vitis_HLS/2022.2/tps/lnx64/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/../../../../include/c++/8.3.0/x86_64-pc-linux-gnu/bits/c++config.h" 1 3
# 236 "/tools/Xilinx/Vitis_HLS/2022.2/tps/lnx64/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/../../../../include/c++/8.3.0/x86_64-pc-linux-gnu/bits/c++config.h" 3
namespace std
{
  typedef long unsigned int size_t;
  typedef long int ptrdiff_t;


  typedef decltype(nullptr) nullptr_t;

}
# 258 "/tools/Xilinx/Vitis_HLS/2022.2/tps/lnx64/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/../../../../include/c++/8.3.0/x86_64-pc-linux-gnu/bits/c++config.h" 3
namespace std
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
namespace __gnu_cxx
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
# 508 "/tools/Xilinx/Vitis_HLS/2022.2/tps/lnx64/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/../../../../include/c++/8.3.0/x86_64-pc-linux-gnu/bits/c++config.h" 3
# 1 "/tools/Xilinx/Vitis_HLS/2022.2/tps/lnx64/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/../../../../include/c++/8.3.0/x86_64-pc-linux-gnu/bits/os_defines.h" 1 3
# 509 "/tools/Xilinx/Vitis_HLS/2022.2/tps/lnx64/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/../../../../include/c++/8.3.0/x86_64-pc-linux-gnu/bits/c++config.h" 2 3


# 1 "/tools/Xilinx/Vitis_HLS/2022.2/tps/lnx64/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/../../../../include/c++/8.3.0/x86_64-pc-linux-gnu/bits/cpu_defines.h" 1 3
# 512 "/tools/Xilinx/Vitis_HLS/2022.2/tps/lnx64/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/../../../../include/c++/8.3.0/x86_64-pc-linux-gnu/bits/c++config.h" 2 3
# 50 "/tools/Xilinx/Vitis_HLS/2022.2/tps/lnx64/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/../../../../include/c++/8.3.0/cstddef" 2 3
# 1 "/tools/Xilinx/Vitis_HLS/2022.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/stddef.h" 1 3
# 51 "/tools/Xilinx/Vitis_HLS/2022.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/stddef.h" 3
typedef long int ptrdiff_t;
# 62 "/tools/Xilinx/Vitis_HLS/2022.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/stddef.h" 3
typedef long unsigned int size_t;
# 118 "/tools/Xilinx/Vitis_HLS/2022.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/stddef.h" 3
# 1 "/tools/Xilinx/Vitis_HLS/2022.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/__stddef_max_align_t.h" 1 3
# 35 "/tools/Xilinx/Vitis_HLS/2022.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/__stddef_max_align_t.h" 3
typedef struct {
  long long __clang_max_align_nonce1
      __attribute__((__aligned__(__alignof__(long long))));
  long double __clang_max_align_nonce2
      __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
# 119 "/tools/Xilinx/Vitis_HLS/2022.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/stddef.h" 2 3
# 51 "/tools/Xilinx/Vitis_HLS/2022.2/tps/lnx64/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/../../../../include/c++/8.3.0/cstddef" 2 3


namespace std
{

  using ::max_align_t;
}
# 6 "/home/ayvol/vitis_accel_backend_test/firmware/nnet_utils/nnet_types.h" 2
# 1 "/tools/Xilinx/Vitis_HLS/2022.2/tps/lnx64/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/../../../../include/c++/8.3.0/cstdio" 1 3
# 40 "/tools/Xilinx/Vitis_HLS/2022.2/tps/lnx64/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/../../../../include/c++/8.3.0/cstdio" 3


# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/stdio.h" 2 3 4

extern "C" {




# 1 "/tools/Xilinx/Vitis_HLS/2022.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4


# 1 "/tools/Xilinx/Vitis_HLS/2022.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/stdarg.h" 1 3 4
# 30 "/tools/Xilinx/Vitis_HLS/2022.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/stdarg.h" 3 4
typedef __builtin_va_list va_list;
# 48 "/tools/Xilinx/Vitis_HLS/2022.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 142 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time64.h" 1 3 4
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 39 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 2 3 4




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 3 4
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 44 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h" 3 4
typedef __ssize_t cookie_read_function_t (void *__cookie, char *__buf,
                                          size_t __nbytes);







typedef __ssize_t cookie_write_function_t (void *__cookie, const char *__buf,
                                           size_t __nbytes);







typedef int cookie_seek_function_t (void *__cookie, __off64_t *__pos, int __w);


typedef int cookie_close_function_t (void *__cookie);






typedef struct _IO_cookie_io_functions_t
{
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
# 47 "/usr/include/stdio.h" 2 3 4





typedef __gnuc_va_list va_list;
# 63 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;






typedef __off64_t off64_t;






typedef __ssize_t ssize_t;






typedef __fpos_t fpos_t;




typedef __fpos64_t fpos64_t;
# 133 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 134 "/usr/include/stdio.h" 2 3 4



extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) throw ();

extern int rename (const char *__old, const char *__new) throw ();



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) throw ();
# 164 "/usr/include/stdio.h" 3 4
extern int renameat2 (int __oldfd, const char *__old, int __newfd,
        const char *__new, unsigned int __flags) throw ();







extern FILE *tmpfile (void) ;
# 183 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) throw () ;




extern char *tmpnam_r (char *__s) throw () ;
# 204 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     throw () __attribute__ ((__malloc__)) ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 227 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 237 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);
# 246 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 270 "/usr/include/stdio.h" 3 4
extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) ;
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, const char *__modes) throw () ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     cookie_io_functions_t __io_funcs) throw () ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  throw () ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () ;





extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) throw ();




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) throw ();


extern void setlinebuf (FILE *__stream) throw ();







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) throw ();





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) throw ();



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));





extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) throw ();






extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") ;


extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") ;

extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) throw () __asm__ ("" "__isoc99_sscanf");
# 432 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));




extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) throw () __asm__ ("" "__isoc99_vsscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 485 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 510 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 521 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 537 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
          ;
# 577 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));
# 587 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 603 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 662 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 673 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 707 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 731 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 750 "/usr/include/stdio.h" 3 4
extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);



extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw () ;

extern int ferror (FILE *__stream) throw () ;



extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () ;
extern int ferror_unlocked (FILE *__stream) throw () ;







extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 782 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw () ;




extern int fileno_unlocked (FILE *__stream) throw () ;
# 800 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) throw ();





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) throw ();



extern int ftrylockfile (FILE *__stream) throw () ;


extern void funlockfile (FILE *__stream) throw ();
# 858 "/usr/include/stdio.h" 3 4
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
# 873 "/usr/include/stdio.h" 3 4
}
# 43 "/tools/Xilinx/Vitis_HLS/2022.2/tps/lnx64/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/../../../../include/c++/8.3.0/cstdio" 2 3
# 96 "/tools/Xilinx/Vitis_HLS/2022.2/tps/lnx64/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/../../../../include/c++/8.3.0/cstdio" 3
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


  using ::gets;

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
# 157 "/tools/Xilinx/Vitis_HLS/2022.2/tps/lnx64/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/../../../../include/c++/8.3.0/cstdio" 3
namespace __gnu_cxx
{
# 175 "/tools/Xilinx/Vitis_HLS/2022.2/tps/lnx64/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/../../../../include/c++/8.3.0/cstdio" 3
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
# 7 "/home/ayvol/vitis_accel_backend_test/firmware/nnet_utils/nnet_types.h" 2

namespace nnet {


template <typename T, unsigned N> struct array {
    typedef T value_type;
    static const unsigned size = N;

    T data[N];

    T &operator[](size_t pos) { return data[pos]; }

    const T &operator[](size_t pos) const { return data[pos]; }

    array &operator=(const array &other) {
        if (&other == this)
            return *this;

        (__builtin_assume(static_cast <bool> (N == other.size && "Array sizes must match.")));

        VITIS_LOOP_27_1: for (unsigned i = 0; i < N; i++) {
#pragma HLS UNROLL
 data[i] = other[i];
        }
        return *this;
    }
};


template <typename T, unsigned N, T (*func)(T)> class lookup_table {
  public:
    lookup_table(T from, T to) : range_start(from), range_end(to), base_div(ap_uint<16>(N) / T(to - from)) {
        T step = (range_end - range_start) / ap_uint<16>(N);
        VITIS_LOOP_40_1: for (size_t i = 0; i < N; i++) {
            T num = range_start + ap_uint<16>(i) * step;
            T sample = func(num);
            samples[i] = sample;
        }
    }

    T operator()(T n) const {
        int index = (n - range_start) * base_div;
        if (index < 0)
            index = 0;
        else if (index > N - 1)
            index = N - 1;
        return samples[index];
    }

  private:
    T samples[N];
    const T range_start, range_end;
    ap_fixed<20, 16> base_div;
};

}
# 7 "/home/ayvol/vitis_accel_backend_test/firmware/defines.h" 2

# 1 "/tools/Xilinx/Vitis_HLS/2022.2/tps/lnx64/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/../../../../include/c++/8.3.0/cstdio" 1 3
# 40 "/tools/Xilinx/Vitis_HLS/2022.2/tps/lnx64/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/../../../../include/c++/8.3.0/cstdio" 3
# 9 "/home/ayvol/vitis_accel_backend_test/firmware/defines.h" 2
# 52 "/home/ayvol/vitis_accel_backend_test/firmware/defines.h"
typedef nnet::array<ap_fixed<16,6>, 3*1> input_t;
typedef ap_fixed<16,6> fused_convbn_0_accum_t;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer2_t;
typedef ap_fixed<6,1> weight2_t;
typedef ap_fixed<6,1> bias2_t;
typedef nnet::array<ap_ufixed<6,0,AP_RND_CONV,AP_SAT>, 16*1> layer4_t;
typedef ap_fixed<18,8> conv_act_0_table_t;
typedef ap_fixed<16,8> pool_0_accum_t;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer5_t;
typedef ap_fixed<16,6> fused_convbn_1_accum_t;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer6_t;
typedef ap_fixed<6,1> weight6_t;
typedef ap_fixed<6,1> bias6_t;
typedef nnet::array<ap_ufixed<6,0,AP_RND_CONV,AP_SAT>, 16*1> layer8_t;
typedef ap_fixed<18,8> conv_act_1_table_t;
typedef ap_fixed<16,8> pool_1_accum_t;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer9_t;
typedef ap_fixed<16,6> fused_convbn_2_accum_t;
typedef nnet::array<ap_fixed<16,6>, 24*1> layer10_t;
typedef ap_fixed<6,1> weight10_t;
typedef ap_fixed<6,1> bias10_t;
typedef nnet::array<ap_ufixed<6,0,AP_RND_CONV,AP_SAT>, 24*1> layer12_t;
typedef ap_fixed<18,8> conv_act_2_table_t;
typedef ap_fixed<16,8> pool_2_accum_t;
typedef nnet::array<ap_fixed<16,6>, 24*1> layer13_t;
typedef ap_fixed<16,6> dense_0_accum_t;
typedef nnet::array<ap_fixed<16,6>, 42*1> layer15_t;
typedef ap_fixed<6,1> weight15_t;
typedef ap_uint<1> bias15_t;
typedef ap_uint<1> layer15_index;
typedef nnet::array<ap_fixed<16,6>, 42*1> layer17_t;
typedef ap_fixed<16,6> bn_dense_0_scale_t;
typedef ap_fixed<16,6> bn_dense_0_bias_t;
typedef nnet::array<ap_ufixed<6,0,AP_RND_CONV,AP_SAT>, 42*1> layer18_t;
typedef ap_fixed<18,8> dense_act_0_table_t;
typedef ap_fixed<16,6> dense_1_accum_t;
typedef nnet::array<ap_fixed<16,6>, 64*1> layer19_t;
typedef ap_fixed<6,1> weight19_t;
typedef ap_uint<1> bias19_t;
typedef ap_uint<1> layer19_index;
typedef nnet::array<ap_fixed<16,6>, 64*1> layer21_t;
typedef ap_fixed<16,6> bn_dense_1_scale_t;
typedef ap_fixed<16,6> bn_dense_1_bias_t;
typedef nnet::array<ap_ufixed<6,0,AP_RND_CONV,AP_SAT>, 64*1> layer22_t;
typedef ap_fixed<18,8> dense_act_1_table_t;
typedef ap_fixed<16,6> output_dense_accum_t;
typedef nnet::array<ap_fixed<16,6>, 10*1> layer23_t;
typedef ap_fixed<16,6> output_dense_weight_t;
typedef ap_fixed<16,6> output_dense_bias_t;
typedef ap_uint<1> layer23_index;
typedef nnet::array<ap_fixed<16,6>, 10*1> result_t;
typedef ap_fixed<18,8> output_softmax_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> output_softmax_exp_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> output_softmax_inv_table_t;
# 5 "/home/ayvol/vitis_accel_backend_test/kernel_wrapper.h" 2
# 19 "/home/ayvol/vitis_accel_backend_test/kernel_wrapper.h"
typedef ap_fixed<16,6> in_buffer_t;
typedef ap_fixed<16,6> out_buffer_t;
# 2 "/home/ayvol/vitis_accel_backend_test/kernel_wrapper.cpp" 2
# 1 "/home/ayvol/vitis_accel_backend_test/firmware/myproject.h" 1




# 1 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/ap_int.h" 1
# 6 "/home/ayvol/vitis_accel_backend_test/firmware/myproject.h" 2
# 1 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/hls_stream.h" 1
# 15 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/hls_stream.h"
# 1 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/hls_stream_39.h" 1
# 26 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/hls_stream_39.h"
namespace hls {
# 52 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/hls_stream_39.h"
template<typename __STREAM_T__, int DEPTH=0>
class stream;

template<typename __STREAM_T__>
class stream<__STREAM_T__, 0>
{
  public:
    using value_type = __STREAM_T__;

    inline __attribute__((always_inline)) __attribute__((nodebug)) stream() {
      __fpga_set_stream_depth(&this->V, 0);
    }

    inline __attribute__((always_inline)) __attribute__((nodebug)) stream(const char* name) {
      (void)(name);
      __fpga_set_stream_depth(&this->V, 0);
    }


  private:
    inline __attribute__((always_inline)) __attribute__((nodebug)) stream(const stream< __STREAM_T__ >& chn):V(chn.V) {
    }

    inline __attribute__((always_inline)) __attribute__((nodebug)) stream& operator= (const stream< __STREAM_T__ >& chn) {
        V = chn.V;
        return *this;
    }

  public:

    inline __attribute__((always_inline)) __attribute__((nodebug)) void operator >> (__STREAM_T__& rdata) {
        read(rdata);
    }

    inline __attribute__((always_inline)) __attribute__((nodebug)) void operator << (const __STREAM_T__& wdata) {
        write(wdata);
    }


  public:

    inline __attribute__((always_inline)) __attribute__((nodebug)) bool empty() const {
        return !__fpga_fifo_not_empty(&V);
    }

    inline __attribute__((always_inline)) __attribute__((nodebug)) bool full() const {
        return !__fpga_fifo_not_full(&V);
    }


    inline __attribute__((always_inline)) __attribute__((nodebug)) void read(__STREAM_T__& dout) {
        __fpga_fifo_pop(&V, &dout);
    }


    inline __attribute__((noinline)) __attribute__((nodebug)) bool read_dep(__STREAM_T__& dout, volatile bool flag) {
        __fpga_fifo_pop(&V, &dout);
        return flag;
    }

    inline __attribute__((always_inline)) __attribute__((nodebug)) __STREAM_T__ read() {
        __STREAM_T__ tmp;
        read(tmp);
        return tmp;
    }


    inline __attribute__((always_inline)) __attribute__((nodebug)) bool read_nb(__STREAM_T__& dout) {
        __STREAM_T__ tmp;

        if (__fpga_fifo_nb_pop(&V, &tmp)) {
            dout = tmp;
            return true;
        } else {
            return false;
        }
    }


    inline __attribute__((always_inline)) __attribute__((nodebug)) void write(const __STREAM_T__& din) {
        __fpga_fifo_push(&V, &din);
    }


    inline __attribute__((noinline)) __attribute__((nodebug)) bool write_dep(const __STREAM_T__& din, volatile bool flag) {
        __fpga_fifo_push(&V, &din);
        return flag;
    }


    inline __attribute__((always_inline)) __attribute__((nodebug)) bool write_nb(const __STREAM_T__& din) {
        return __fpga_fifo_nb_push(&V, &din);
    }


    inline __attribute__((always_inline)) __attribute__((nodebug)) unsigned size() const {
        return __fpga_fifo_size(&V);
    }


    inline __attribute__((always_inline)) __attribute__((nodebug)) unsigned capacity() const {
        return __fpga_fifo_capacity(&V);
    }


    void set_name(const char* name) { (void)(name); }

  public:
    __STREAM_T__ V __attribute__((no_ctor));
};

template<typename __STREAM_T__, int DEPTH>
class stream : public stream<__STREAM_T__, 0> {
  public:
    inline __attribute__((always_inline)) __attribute__((nodebug)) stream() {
      __fpga_set_stream_depth(&this->V, DEPTH);
    }

    inline __attribute__((always_inline)) __attribute__((nodebug)) stream(const char* name) {
      (void)(name);
      __fpga_set_stream_depth(&this->V, DEPTH);
    }
};
}
# 16 "/tools/Xilinx/Vitis_HLS/2022.2/common/technology/autopilot/hls_stream.h" 2
# 7 "/home/ayvol/vitis_accel_backend_test/firmware/myproject.h" 2




void myproject(
    hls::stream<input_t> &input_2,
    hls::stream<result_t> &layer25_out
);
# 3 "/home/ayvol/vitis_accel_backend_test/kernel_wrapper.cpp" 2

static void read_input(const in_buffer_t *in, hls::stream<input_t> &input, int n) {
  VITIS_LOOP_5_1: for (int i = 0; i < (32 * 32); i++) {
#pragma HLS PIPELINE
 input_t tmp;
    VITIS_LOOP_8_2: for (int j = 0; j < 3; j++) {
#pragma HLS UNROLL
 tmp[j] = in[(n * (32 * 32) * 3) + (i * 3) + j];
    }
    input << tmp;
  }
}

static void write_result(out_buffer_t *out, hls::stream<result_t> &output, int n) {
  result_t tmp = output.read();
  VITIS_LOOP_18_1: for (int i = 0; i < 10; i++) {
#pragma HLS UNROLL
 out[(n * 10) + i] = tmp[i];
  }
}

extern "C" {





  __attribute__((sdx_kernel("kernel_wrapper", 0))) void kernel_wrapper(const in_buffer_t *in, out_buffer_t *out) {
#line 26 "/home/ayvol/vitis_accel_backend_test/build/myproject_kernel/kernel_wrapper/kernel_wrapper.tcl"
#pragma HLSDIRECTIVE TOP name=kernel_wrapper
# 30 "/home/ayvol/vitis_accel_backend_test/kernel_wrapper.cpp"

    hls::stream<input_t> input("input");
    hls::stream<result_t> output("output");
#pragma HLS STREAM variable=input depth=(32 * 32)
#pragma HLS STREAM variable=output depth=1

 VITIS_LOOP_36_1: for (int n = 0; n < 8192; n++) {
#pragma HLS DATAFLOW
 read_input(in, input, n);
      myproject(input, output);
      write_result(out, output, n);
    }
  }
}
