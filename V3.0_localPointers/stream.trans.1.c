/* --- UPCR system headers --- */ 
#include "upcr.h" 
#include "whirl2c.h"
#include "upcr_proxy.h"
/*******************************************************
 * C file translated from WHIRL Fri Dec  2 06:18:07 2016
 *******************************************************/

/* UPC Runtime specification expected: 3.6 */
#define UPCR_WANT_MAJOR 3
#define UPCR_WANT_MINOR 6
/* UPC translator version: release 2.22.2, built on May 12 2016 at 15:50:34, host aphid linux-x86_64/64, gcc v4.2.4 (Ubuntu 4.2.4-1ubuntu4) */
/* Included code from the initialization script */
#include</cluster/home/jeremie/myRepo/pgashpc/Compilers/BUFA_2.22.3/installed/include/upcr_config.h>
#include</cluster/home/jeremie/myRepo/pgashpc/Compilers/BUFA_2.22.3/installed/include/portable_platform.h>
#include "upcr_geninclude/stdio.h"
#include</usr/include/unistd.h>
#include "upcr_geninclude/math.h"
#include</cluster/software/VERSIONS/intel-2015.1/compiler/include/float.h>
#include "upcr_geninclude/limits.h"
#include</usr/include/sys/time.h>
#include</cluster/home/jeremie/myRepo/pgashpc/Compilers/BUFA_2.22.3/installed/include/upcr_preinclude/upc_types.h>
#include "upcr_geninclude/stddef.h"
#include</cluster/home/jeremie/myRepo/pgashpc/Compilers/BUFA_2.22.3/installed/include/upcr_preinclude/upc_bits.h>
#include "upcr_geninclude/stdlib.h"
#include "upcr_geninclude/inttypes.h"
#include "upcr_geninclude/stdlib.h"
#include "upcr_geninclude/stdint.h"
#line 1 "stream.w2c.h"
/* Include builtin types and operators */

#ifndef UPCR_TRANS_EXTRA_INCL
#define UPCR_TRANS_EXTRA_INCL
extern int upcrt_gcd (int _a, int _b);
extern int _upcrt_forall_start(int _start_thread, int _step, int _lo, int _scale);
#define upcrt_forall_start(start_thread, step, lo, scale)  \
       _upcrt_forall_start(start_thread, step, lo, scale)
int32_t UPCR_TLD_DEFINE_TENTATIVE(upcrt_forall_control, 4, 4);
#define upcr_forall_control upcrt_forall_control
#ifndef UPCR_EXIT_FUNCTION
#define UPCR_EXIT_FUNCTION() ((void)0)
#endif
#if UPCR_RUNTIME_SPEC_MAJOR > 3 || (UPCR_RUNTIME_SPEC_MAJOR == 3 && UPCR_RUNTIME_SPEC_MINOR >= 8)
  #define UPCRT_STARTUP_SHALLOC(sptr, blockbytes, numblocks, mult_by_threads, elemsz, typestr) \
      { &(sptr), (blockbytes), (numblocks), (mult_by_threads), (elemsz), #sptr, (typestr) }
#else
  #define UPCRT_STARTUP_SHALLOC(sptr, blockbytes, numblocks, mult_by_threads, elemsz, typestr) \
      { &(sptr), (blockbytes), (numblocks), (mult_by_threads) }
#endif
#define UPCRT_STARTUP_PSHALLOC UPCRT_STARTUP_SHALLOC

/**** Autonb optimization ********/

extern void _upcrt_memput_nb(upcr_shared_ptr_t _dst, const void *_src, size_t _n);
#define upcrt_memput_nb(dst, src, n) \
       (upcri_srcpos(), _upcrt_memput_nb(dst, src, n))

#endif


/* Types */
/* File-level vars and routines */
extern int user_main();

extern int checktick();

extern _IEEE64 mysecond();

extern void checkSTREAMresults();

extern int checktick();


#define UPCR_SHARED_SIZE_ 8
#define UPCR_PSHARED_SIZE_ 8
upcr_pshared_ptr_t threadCounter = UPCR_INITIALIZED_PSHARED;
upcr_pshared_ptr_t UPCR_TLD_DEFINE_TENTATIVE(a, 8, 8);
upcr_pshared_ptr_t UPCR_TLD_DEFINE_TENTATIVE(b, 8, 8);
upcr_pshared_ptr_t UPCR_TLD_DEFINE_TENTATIVE(c, 8, 8);
typedef double _type__N7_avgtime_N10_3940499318_[4];
_type__N7_avgtime_N10_3940499318_ UPCR_TLD_DEFINE(_N7_avgtime_N10_3940499318_, 32, 8) = {0.0,};
typedef double _type__N7_maxtime_N9_871054179_[4];
_type__N7_maxtime_N9_871054179_ UPCR_TLD_DEFINE(_N7_maxtime_N9_871054179_, 32, 8) = {0.0,};
typedef double _type__N7_mintime_N10_4112777632_[4];
_type__N7_mintime_N10_4112777632_ UPCR_TLD_DEFINE(_N7_mintime_N10_4112777632_, 32, 8) = {3.4028234663852886e+38,3.4028234663852886e+38,3.4028234663852886e+38,3.4028234663852886e+38,};
typedef char*  _type__N5_label_N9_410935108_[4];
_type__N5_label_N9_410935108_ UPCR_TLD_DEFINE(_N5_label_N9_410935108_, 32, 8) = {"Copy:      ","Scale:     ","Add:       ","Triad:     ",};
typedef double _type__N5_bytes_N7_4662377_[4];
_type__N5_bytes_N7_4662377_ UPCR_TLD_DEFINE(_N5_bytes_N7_4662377_, 32, 8) = {1.6e+08,1.6e+08,2.4e+08,2.4e+08,};

void UPCRI_ALLOC_stream_7572940290800616(void) { 
UPCR_BEGIN_FUNCTION();
upcr_startup_pshalloc_t _bupc_pinfo[] = { 
UPCRT_STARTUP_PSHALLOC(threadCounter, 4, 1, 0, 4, "R1_i"), 
 };

UPCR_SET_SRCPOS("_stream_7572940290800616_ALLOC",0);
upcr_startup_pshalloc(_bupc_pinfo, sizeof(_bupc_pinfo) / sizeof(upcr_startup_pshalloc_t));
}

void UPCRI_INIT_stream_7572940290800616(void) { 
UPCR_BEGIN_FUNCTION();
int32_t _bupc_threadCounter_val = 0;
UPCR_SET_SRCPOS("_stream_7572940290800616_INIT",0);
if (upcr_mythread()== 0) { 
upcr_put_pshared(threadCounter, 0, &_bupc_threadCounter_val, 4);
}
}

#line 84 "stream.c"
extern int user_main()
#line 84 "stream.c"
{
#line 84 "stream.c"
  UPCR_BEGIN_FUNCTION();
  register _INT32 _bupc_comma;
  register _INT32 _bupc_comma0;
  register _IEEE64 _bupc_comma1;
  register _INT32 _bupc_comma2;
  register _IEEE64 _bupc_comma3;
  register _IEEE64 _bupc_comma4;
  register _IEEE64 _bupc_comma5;
  register _IEEE64 _bupc_comma6;
  register _IEEE64 _bupc_comma7;
  register _IEEE64 _bupc_comma8;
  register _IEEE64 _bupc_comma9;
  register _IEEE64 _bupc_comma10;
  register _IEEE64 _bupc_comma11;
  int BytesPerWord;
  long j;
  int quantum;
  _IEEE64 t;
  _IEEE64 * locA;
  _IEEE64 * locB;
  _IEEE64 * locC;
  _IEEE64 scalar;
  int remainder;
  int k;
  _IEEE64 times[4LL][10LL];
  int bl;
  upcr_shared_ptr_t _bupc_call0;
  upcr_shared_ptr_t _bupc_call1;
  upcr_shared_ptr_t _bupc_call2;
  _IEEE64 _bupc_mcselect3;
  _IEEE64 _bupc_mcselect4;
  upcr_pshared_ptr_t _bupc_Mstopcvt5;
  upcr_pshared_ptr_t _bupc_Mstopcvt6;
  upcr_pshared_ptr_t _bupc_Mstopcvt7;
  int _bupc_spillld8;
  int _bupc_spillld9;
  upcr_pshared_ptr_t _bupc_Mptra10;
  _IEEE64 _bupc_spillstoreparm11;
  upcr_pshared_ptr_t _bupc_Mptra12;
  _IEEE64 _bupc_spillstoreparm13;
  upcr_pshared_ptr_t _bupc_Mptra14;
  _IEEE64 _bupc_spillstoreparm15;
  upcr_pshared_ptr_t _bupc_Mptra16;
  upcr_pshared_ptr_t _bupc_Mptra17;
  _IEEE64 _bupc_spillstoreparm18;
  upcr_pshared_ptr_t _bupc_Mptra19;
  _IEEE64 _bupc_spillstoreparm20;
  upcr_pshared_ptr_t _bupc_Mptra21;
  _IEEE64 _bupc_spillstoreparm22;
  upcr_pshared_ptr_t _bupc_Mptra23;
  _IEEE64 _bupc_spillld24;
  upcr_pshared_ptr_t _bupc_Mptra25;
  _IEEE64 _bupc_spillstoreparm26;
  upcr_pshared_ptr_t _bupc_Mptra27;
  upcr_pshared_ptr_t _bupc_Mptra28;
  _IEEE64 _bupc_spillld29;
  upcr_pshared_ptr_t _bupc_Mptra30;
  _IEEE64 _bupc_spillstoreparm31;
  upcr_pshared_ptr_t _bupc_Mptra32;
  _IEEE64 * _bupc_Mcvtptr33;
  upcr_pshared_ptr_t _bupc_Mptra34;
  _IEEE64 * _bupc_Mcvtptr35;
  upcr_pshared_ptr_t _bupc_Mptra36;
  _IEEE64 * _bupc_Mcvtptr37;
  
#line 86 "stream.c"
  _bupc_call0 = upc_all_alloc((unsigned long) 1ULL, (unsigned long) 80000000ULL);
#line 86 "stream.c"
  _bupc_Mstopcvt5 = UPCR_SHARED_TO_PSHARED(_bupc_call0);
#line 86 "stream.c"
  a = _bupc_Mstopcvt5;
#line 87 "stream.c"
  _bupc_call1 = upc_all_alloc((unsigned long) 1ULL, (unsigned long) 80000000ULL);
#line 87 "stream.c"
  _bupc_Mstopcvt6 = UPCR_SHARED_TO_PSHARED(_bupc_call1);
#line 87 "stream.c"
  b = _bupc_Mstopcvt6;
#line 88 "stream.c"
  _bupc_call2 = upc_all_alloc((unsigned long) 1ULL, (unsigned long) 80000000ULL);
#line 88 "stream.c"
  _bupc_Mstopcvt7 = UPCR_SHARED_TO_PSHARED(_bupc_call2);
#line 88 "stream.c"
  c = _bupc_Mstopcvt7;
#line 101 "stream.c"
  upcr_barrier(-1880081432, 1);
#line 106 "stream.c"
  if(((int) upcr_mythread () ) == 0)
#line 106 "stream.c"
  {
#line 108 "stream.c"
    printf("-------------------------------------------------------------\n");
#line 109 "stream.c"
    printf("STREAM version $Revision: 5.10 $\n");
#line 110 "stream.c"
    printf("-------------------------------------------------------------\n");
#line 111 "stream.c"
    BytesPerWord = 8;
#line 112 "stream.c"
    printf("This system uses %d bytes per array element.\n", BytesPerWord);
#line 114 "stream.c"
    printf("-------------------------------------------------------------\n");
#line 123 "stream.c"
    printf("Array size = %llu (elements), Offset = %d (elements)\n", (unsigned long long) 10000000ULL, (int) 0);
#line 126 "stream.c"
    printf("Memory per array = %.1f MiB (= %.1f GiB).\n", (_IEEE64)(BytesPerWord) * 9.5367431640625, (_IEEE64)(BytesPerWord) * 0.009313225746154785);
#line 130 "stream.c"
    printf("Total memory required = %.1f MiB (= %.1f GiB).\n", ((_IEEE64)(BytesPerWord) * 3.0) * 9.5367431640625, ((_IEEE64)(BytesPerWord) * 3.0) * 0.009313225746154785);
#line 132 "stream.c"
    printf("Each kernel will be executed %d times.\n", (int) 10);
#line 133 "stream.c"
    printf(" The *best* time for each kernel (excluding the first iteration)\n");
#line 134 "stream.c"
    printf(" will be used to compute the reported bandwidth.\n");
#line 135 "stream.c"
    printf("-------------------------------------------------------------\n");
#line 136 "stream.c"
    printf("Number of Threads requested = %i\n", (int) 1);
  }
#line 141 "stream.c"
  UPCR_PUT_PSHARED_VAL(threadCounter, 0, 0, 4);
#line 142 "stream.c"
  upcr_barrier(-1880081431, 1);
#line 143 "stream.c"
  UPCR_GET_PSHARED(&_bupc_spillld8, threadCounter, 0, 4);
#line 143 "stream.c"
  UPCR_PUT_PSHARED_VAL(threadCounter, 0, _bupc_spillld8 + 1, 4);
#line 144 "stream.c"
  upcr_barrier(-1880081430, 1);
#line 146 "stream.c"
  if(((int) upcr_mythread () ) == 0)
#line 146 "stream.c"
  {
#line 148 "stream.c"
    UPCR_GET_PSHARED(&_bupc_spillld9, threadCounter, 0, 4);
#line 148 "stream.c"
    printf("Number of Threads counted = %i\n", _bupc_spillld9);
  }
#line 151 "stream.c"
  if(upcr_forall_control)
#line 151 "stream.c"
  {
#line 151 "stream.c"
    j = 0LL;
#line 151 "stream.c"
    while(j <= 9999999LL)
    {
#line 153 "stream.c"
      _bupc_Mptra10 = UPCR_ADD_PSHARED1(a, 8ULL, j);
      _bupc_spillstoreparm11 = 1.0;
#line 153 "stream.c"
      UPCR_PUT_PSHARED(_bupc_Mptra10, 0, &_bupc_spillstoreparm11, 8);
#line 154 "stream.c"
      _bupc_Mptra12 = UPCR_ADD_PSHARED1(b, 8ULL, j);
      _bupc_spillstoreparm13 = 2.0;
#line 154 "stream.c"
      UPCR_PUT_PSHARED(_bupc_Mptra12, 0, &_bupc_spillstoreparm13, 8);
#line 155 "stream.c"
      _bupc_Mptra14 = UPCR_ADD_PSHARED1(c, 8ULL, j);
      _bupc_spillstoreparm15 = 0.0;
#line 155 "stream.c"
      UPCR_PUT_PSHARED(_bupc_Mptra14, 0, &_bupc_spillstoreparm15, 8);
#line 156 "stream.c"
      _61 :;
#line 156 "stream.c"
      j = j + 1LL;
    }
  }
  else
#line 151 "stream.c"
  {
#line 151 "stream.c"
    upcr_forall_control = 1;
#line 151 "stream.c"
    j = 0LL;
#line 151 "stream.c"
    while(j <= 9999999LL)
#line 151 "stream.c"
    {
      _bupc_Mptra16 = UPCR_ADD_PSHARED1(a, 8ULL, j);
      _bupc_comma = upcr_hasMyAffinity_pshared(_bupc_Mptra16);
      if(_bupc_comma != 0)
      {
#line 153 "stream.c"
        _bupc_Mptra17 = UPCR_ADD_PSHARED1(a, 8ULL, j);
        _bupc_spillstoreparm18 = 1.0;
#line 153 "stream.c"
        UPCR_PUT_PSHARED(_bupc_Mptra17, 0, &_bupc_spillstoreparm18, 8);
#line 154 "stream.c"
        _bupc_Mptra19 = UPCR_ADD_PSHARED1(b, 8ULL, j);
        _bupc_spillstoreparm20 = 2.0;
#line 154 "stream.c"
        UPCR_PUT_PSHARED(_bupc_Mptra19, 0, &_bupc_spillstoreparm20, 8);
#line 155 "stream.c"
        _bupc_Mptra21 = UPCR_ADD_PSHARED1(c, 8ULL, j);
        _bupc_spillstoreparm22 = 0.0;
#line 155 "stream.c"
        UPCR_PUT_PSHARED(_bupc_Mptra21, 0, &_bupc_spillstoreparm22, 8);
      }
#line 156 "stream.c"
      _1 :;
#line 156 "stream.c"
      j = j + 1LL;
    }
#line 151 "stream.c"
    upcr_forall_control = 0;
  }
#line 160 "stream.c"
  if(((int) upcr_mythread () ) == 0)
#line 160 "stream.c"
  {
#line 164 "stream.c"
    printf("-------------------------------------------------------------\n");
#line 166 "stream.c"
    _bupc_comma0 = checktick();
#line 166 "stream.c"
    quantum = _bupc_comma0;
#line 166 "stream.c"
    if(quantum > 0)
#line 166 "stream.c"
    {
#line 168 "stream.c"
      printf("Your clock granularity/precision appears to be %d microseconds.\n", quantum);
    }
    else
#line 168 "stream.c"
    {
#line 172 "stream.c"
      printf("Your clock granularity appears to be less than one microsecond.\n");
#line 173 "stream.c"
      quantum = 1;
    }
#line 176 "stream.c"
    _bupc_comma1 = mysecond();
#line 176 "stream.c"
    t = _bupc_comma1;
  }
#line 179 "stream.c"
  upcr_barrier(-1880081429, 1);
#line 181 "stream.c"
  if(upcr_forall_control)
#line 181 "stream.c"
  {
#line 181 "stream.c"
    j = 0LL;
#line 181 "stream.c"
    while(j <= 9999999LL)
    {
#line 183 "stream.c"
      _bupc_Mptra25 = UPCR_ADD_PSHARED1(a, 8ULL, j);
#line 183 "stream.c"
      _bupc_Mptra23 = UPCR_ADD_PSHARED1(a, 8ULL, j);
#line 183 "stream.c"
      _bupc_spillld24 = UPCR_GET_PSHARED_DOUBLEVAL(_bupc_Mptra23, 0);
      _bupc_spillstoreparm26 = _bupc_spillld24 * 2.0;
#line 183 "stream.c"
      UPCR_PUT_PSHARED(_bupc_Mptra25, 0, &_bupc_spillstoreparm26, 8);
#line 184 "stream.c"
      _62 :;
#line 184 "stream.c"
      j = j + 1LL;
    }
  }
  else
#line 181 "stream.c"
  {
#line 181 "stream.c"
    upcr_forall_control = 1;
#line 181 "stream.c"
    j = 0LL;
#line 181 "stream.c"
    while(j <= 9999999LL)
#line 181 "stream.c"
    {
      _bupc_Mptra27 = UPCR_ADD_PSHARED1(a, 8ULL, j);
      _bupc_comma2 = upcr_hasMyAffinity_pshared(_bupc_Mptra27);
      if(_bupc_comma2 != 0)
      {
#line 183 "stream.c"
        _bupc_Mptra30 = UPCR_ADD_PSHARED1(a, 8ULL, j);
#line 183 "stream.c"
        _bupc_Mptra28 = UPCR_ADD_PSHARED1(a, 8ULL, j);
#line 183 "stream.c"
        _bupc_spillld29 = UPCR_GET_PSHARED_DOUBLEVAL(_bupc_Mptra28, 0);
        _bupc_spillstoreparm31 = _bupc_spillld29 * 2.0;
#line 183 "stream.c"
        UPCR_PUT_PSHARED(_bupc_Mptra30, 0, &_bupc_spillstoreparm31, 8);
      }
#line 184 "stream.c"
      _2 :;
#line 184 "stream.c"
      j = j + 1LL;
    }
#line 181 "stream.c"
    upcr_forall_control = 0;
  }
#line 186 "stream.c"
  _bupc_Mptra32 = UPCR_ADD_PSHARED1(a, 8ULL, ((int) upcr_mythread () ));
#line 186 "stream.c"
  _bupc_Mcvtptr33 = (_IEEE64 *) UPCR_PSHARED_TO_LOCAL(_bupc_Mptra32);
#line 186 "stream.c"
  locA = _bupc_Mcvtptr33;
#line 187 "stream.c"
  _bupc_Mptra34 = UPCR_ADD_PSHARED1(b, 8ULL, ((int) upcr_mythread () ));
#line 187 "stream.c"
  _bupc_Mcvtptr35 = (_IEEE64 *) UPCR_PSHARED_TO_LOCAL(_bupc_Mptra34);
#line 187 "stream.c"
  locB = _bupc_Mcvtptr35;
#line 188 "stream.c"
  _bupc_Mptra36 = UPCR_ADD_PSHARED1(c, 8ULL, ((int) upcr_mythread () ));
#line 188 "stream.c"
  _bupc_Mcvtptr37 = (_IEEE64 *) UPCR_PSHARED_TO_LOCAL(_bupc_Mptra36);
#line 188 "stream.c"
  locC = _bupc_Mcvtptr37;
#line 190 "stream.c"
  if(((int) upcr_mythread () ) == 0)
#line 190 "stream.c"
  {
#line 193 "stream.c"
    _bupc_comma3 = mysecond();
#line 193 "stream.c"
    t = (_bupc_comma3 - t) * 1e+06;
#line 196 "stream.c"
    printf("Each test below will take on the order of %d microseconds.\n", (int) _I4F8TRUNC(t));
#line 197 "stream.c"
    printf("   (= %d clock ticks)\n", (int) _I4F8TRUNC(t / (_IEEE64)(quantum)));
#line 198 "stream.c"
    printf("Increase the size of the arrays if this shows that\n");
#line 199 "stream.c"
    printf("you are not getting at least 20 clock ticks per test.\n");
#line 201 "stream.c"
    printf("-------------------------------------------------------------\n");
#line 203 "stream.c"
    printf("WARNING -- The above is only a rough guideline.\n");
#line 204 "stream.c"
    printf("For best results, please be sure you know the\n");
#line 205 "stream.c"
    printf("precision of your system timer.\n");
#line 206 "stream.c"
    printf("-------------------------------------------------------------\n");
  }
#line 210 "stream.c"
  scalar = 3.0;
#line 215 "stream.c"
  remainder = 0;
#line 216 "stream.c"
  k = 0;
#line 216 "stream.c"
  while(k <= 9)
#line 216 "stream.c"
  {
#line 218 "stream.c"
    upcr_barrier(-1880081428, 1);
#line 219 "stream.c"
    if(((int) upcr_mythread () ) == 0)
#line 219 "stream.c"
    {
#line 221 "stream.c"
      _bupc_comma4 = mysecond();
#line 221 "stream.c"
      times[0][k] = _bupc_comma4;
    }
#line 225 "stream.c"
    bl = 0;
#line 226 "stream.c"
    bl = 0;
#line 226 "stream.c"
    while(bl <= 9999999)
#line 226 "stream.c"
    {
#line 228 "stream.c"
      * (locC + bl) = *(locA + bl);
#line 229 "stream.c"
      _4 :;
#line 229 "stream.c"
      bl = bl + 1;
    }
#line 231 "stream.c"
    upcr_barrier(-1880081427, 1);
#line 232 "stream.c"
    if(((int) upcr_mythread () ) == 0)
#line 232 "stream.c"
    {
#line 234 "stream.c"
      _bupc_comma5 = mysecond();
#line 234 "stream.c"
      times[0][k] = _bupc_comma5 - times[0][k];
#line 235 "stream.c"
      _bupc_comma6 = mysecond();
#line 235 "stream.c"
      times[1][k] = _bupc_comma6;
    }
#line 239 "stream.c"
    bl = 0;
#line 239 "stream.c"
    while(bl <= 9999999)
#line 239 "stream.c"
    {
#line 241 "stream.c"
      * (locB + bl) = scalar ** (locC + bl);
#line 242 "stream.c"
      _5 :;
#line 242 "stream.c"
      bl = bl + 1;
    }
#line 243 "stream.c"
    upcr_barrier(-1880081426, 1);
#line 244 "stream.c"
    if(((int) upcr_mythread () ) == 0)
#line 244 "stream.c"
    {
#line 246 "stream.c"
      _bupc_comma7 = mysecond();
#line 246 "stream.c"
      times[1][k] = _bupc_comma7 - times[1][k];
#line 247 "stream.c"
      _bupc_comma8 = mysecond();
#line 247 "stream.c"
      times[2][k] = _bupc_comma8;
    }
#line 250 "stream.c"
    bl = 0;
#line 250 "stream.c"
    while(bl <= 9999999)
#line 250 "stream.c"
    {
#line 252 "stream.c"
      * (locC + bl) = *(locA + bl) + *(locB + bl);
#line 253 "stream.c"
      _6 :;
#line 253 "stream.c"
      bl = bl + 1;
    }
#line 255 "stream.c"
    upcr_barrier(-1880081425, 1);
#line 256 "stream.c"
    if(((int) upcr_mythread () ) == 0)
#line 256 "stream.c"
    {
#line 258 "stream.c"
      _bupc_comma9 = mysecond();
#line 258 "stream.c"
      times[2][k] = _bupc_comma9 - times[2][k];
#line 259 "stream.c"
      _bupc_comma10 = mysecond();
#line 259 "stream.c"
      times[3][k] = _bupc_comma10;
    }
#line 261 "stream.c"
    bl = 0;
#line 261 "stream.c"
    while(bl <= 9999999)
#line 261 "stream.c"
    {
#line 263 "stream.c"
      * (locA + bl) = *(locB + bl) + (scalar ** (locC + bl));
#line 264 "stream.c"
      _7 :;
#line 264 "stream.c"
      bl = bl + 1;
    }
#line 265 "stream.c"
    upcr_barrier(-1880081424, 1);
#line 266 "stream.c"
    if(((int) upcr_mythread () ) == 0)
#line 266 "stream.c"
    {
#line 268 "stream.c"
      _bupc_comma11 = mysecond();
#line 268 "stream.c"
      times[3][k] = _bupc_comma11 - times[3][k];
    }
#line 270 "stream.c"
    _3 :;
#line 270 "stream.c"
    k = k + 1;
  }
#line 273 "stream.c"
  if(((int) upcr_mythread () ) == 0)
#line 273 "stream.c"
  {
#line 275 "stream.c"
    k = 1;
#line 275 "stream.c"
    while(k <= 9)
#line 275 "stream.c"
    {
#line 277 "stream.c"
      j = 0LL;
#line 277 "stream.c"
      while(j <= 3LL)
#line 277 "stream.c"
      {
#line 279 "stream.c"
        (_N7_avgtime_N10_3940499318_)[j] = (_N7_avgtime_N10_3940499318_)[j] + times[j][k];
#line 280 "stream.c"
        if((_N7_mintime_N10_4112777632_)[j] < times[j][k])
#line 280 "stream.c"
        {
#line 280 "stream.c"
          _bupc_mcselect3 = (_N7_mintime_N10_4112777632_)[j];
        }
        else
#line 280 "stream.c"
        {
#line 280 "stream.c"
          _bupc_mcselect3 = times[j][k];
        }
#line 280 "stream.c"
        (_N7_mintime_N10_4112777632_)[j] = _bupc_mcselect3;
#line 281 "stream.c"
        if((_N7_maxtime_N9_871054179_)[j] > times[j][k])
#line 281 "stream.c"
        {
#line 281 "stream.c"
          _bupc_mcselect4 = (_N7_maxtime_N9_871054179_)[j];
        }
        else
#line 281 "stream.c"
        {
#line 281 "stream.c"
          _bupc_mcselect4 = times[j][k];
        }
#line 281 "stream.c"
        (_N7_maxtime_N9_871054179_)[j] = _bupc_mcselect4;
#line 282 "stream.c"
        _9 :;
#line 282 "stream.c"
        j = j + 1LL;
      }
#line 283 "stream.c"
      _8 :;
#line 283 "stream.c"
      k = k + 1;
    }
#line 285 "stream.c"
    printf("Function    Best Rate MB/s  Avg time     Min time     Max time\n");
#line 287 "stream.c"
    j = 0LL;
#line 287 "stream.c"
    while(j <= 3LL)
#line 287 "stream.c"
    {
#line 289 "stream.c"
      (_N7_avgtime_N10_3940499318_)[j] = (_N7_avgtime_N10_3940499318_)[j] / 9.0;
#line 295 "stream.c"
      printf("%s%12.1f  %11.6f  %11.6f  %11.6f\n", (_N5_label_N9_410935108_)[j], ((_N5_bytes_N7_4662377_)[j] * 1e-06) / (_N7_mintime_N10_4112777632_)[j], (_N7_avgtime_N10_3940499318_)[j], (_N7_mintime_N10_4112777632_)[j], (_N7_maxtime_N9_871054179_)[j]);
#line 296 "stream.c"
      _10 :;
#line 296 "stream.c"
      j = j + 1LL;
    }
#line 297 "stream.c"
    printf("-------------------------------------------------------------\n");
#line 300 "stream.c"
    checkSTREAMresults();
#line 301 "stream.c"
    printf("-------------------------------------------------------------\n");
  }
#line 303 "stream.c"
  upcr_barrier(-1880081423, 1);
#line 304 "stream.c"
  UPCR_EXIT_FUNCTION();
#line 304 "stream.c"
  return 0;
} /* user_main */


#line 311 "stream.c"
extern int checktick()
#line 311 "stream.c"
{
#line 311 "stream.c"
  UPCR_BEGIN_FUNCTION();
  register _IEEE64 _bupc_comma;
  register _IEEE64 _bupc_comma0;
  int i;
  _IEEE64 t1;
  _IEEE64 t2;
  _IEEE64 timesfound[20LL];
  int minDelta;
  int Delta;
  
#line 317 "stream.c"
  i = 0;
#line 317 "stream.c"
  while(i <= 19)
#line 317 "stream.c"
  {
#line 319 "stream.c"
    _bupc_comma = mysecond();
#line 319 "stream.c"
    t1 = _bupc_comma;
#line 320 "stream.c"
    _bupc_comma0 = mysecond();
#line 320 "stream.c"
    t2 = _bupc_comma0;
#line 320 "stream.c"
    while((t2 - t1) < 1e-06)
#line 320 "stream.c"
    {
#line 320 "stream.c"
      _bupc_comma0 = mysecond();
#line 320 "stream.c"
      t2 = _bupc_comma0;
    }
#line 321 "stream.c"
    t1 = t2;
#line 321 "stream.c"
    (timesfound)[i] = t1;
#line 322 "stream.c"
    _1 :;
#line 322 "stream.c"
    i = i + 1;
  }
#line 330 "stream.c"
  minDelta = 1000000;
#line 331 "stream.c"
  i = 1;
#line 331 "stream.c"
  while(i <= 19)
#line 331 "stream.c"
  {
#line 333 "stream.c"
    Delta = _I4F8TRUNC(((timesfound)[i] - (timesfound)[i + -1]) * 1e+06);
#line 334 "stream.c"
    minDelta = _I4MIN(_I4MAX(Delta, 0), minDelta);
#line 335 "stream.c"
    _2 :;
#line 335 "stream.c"
    i = i + 1;
  }
#line 337 "stream.c"
  UPCR_EXIT_FUNCTION();
#line 337 "stream.c"
  return minDelta;
} /* checktick */


#line 348 "stream.c"
extern _IEEE64 mysecond()
#line 348 "stream.c"
{
#line 348 "stream.c"
  UPCR_BEGIN_FUNCTION();
  register _INT32 _bupc_comma;
  struct timeval tp;
  struct timezone tzp;
  int i;
  
#line 353 "stream.c"
  _bupc_comma = gettimeofday(&tp, &tzp);
#line 353 "stream.c"
  i = _bupc_comma;
#line 354 "stream.c"
  UPCR_EXIT_FUNCTION();
#line 354 "stream.c"
  return(_IEEE64)((tp).tv_sec) + ((_IEEE64)((tp).tv_usec) * 1e-06);
} /* mysecond */


#line 361 "stream.c"
extern void checkSTREAMresults()
#line 361 "stream.c"
{
#line 361 "stream.c"
  UPCR_BEGIN_FUNCTION();
  _IEEE64 aj;
  _IEEE64 bj;
  _IEEE64 cj;
  _IEEE64 _bupc___save_expr0;
  _IEEE64 scalar;
  int k;
  _IEEE64 aSumErr;
  _IEEE64 bSumErr;
  _IEEE64 cSumErr;
  long j;
  _IEEE64 aAvgErr;
  _IEEE64 bAvgErr;
  _IEEE64 cAvgErr;
  _IEEE64 epsilon;
  int err;
  int ierr;
  _IEEE64 _bupc_mcselect38;
  _IEEE64 _bupc_mcselect39;
  _IEEE64 _bupc_mcselect40;
  _IEEE64 _bupc_mcselect41;
  _INT32 _bupc_mcselect42;
  _INT32 _bupc_mcselect43;
  _IEEE64 _bupc_mcselect44;
  _INT32 _bupc_mcselect45;
  _INT32 _bupc_mcselect46;
  _IEEE64 _bupc_mcselect47;
  _INT32 _bupc_mcselect48;
  _INT32 _bupc_mcselect49;
  upcr_pshared_ptr_t _bupc_Mptra50;
  _IEEE64 _bupc_spillld51;
  upcr_pshared_ptr_t _bupc_Mptra52;
  _IEEE64 _bupc_spillld53;
  upcr_pshared_ptr_t _bupc_Mptra54;
  _IEEE64 _bupc_spillld55;
  upcr_pshared_ptr_t _bupc_Mptra56;
  _IEEE64 _bupc_spillld57;
  upcr_pshared_ptr_t _bupc_Mptra58;
  _IEEE64 _bupc_spillld59;
  upcr_pshared_ptr_t _bupc_Mptra60;
  _IEEE64 _bupc_spillld61;
  upcr_pshared_ptr_t _bupc_Mptra62;
  _IEEE64 _bupc_spillld63;
  upcr_pshared_ptr_t _bupc_Mptra64;
  _IEEE64 _bupc_spillld65;
  upcr_pshared_ptr_t _bupc_Mptra66;
  _IEEE64 _bupc_spillld67;
  upcr_pshared_ptr_t _bupc_Mptra68;
  _IEEE64 _bupc_spillld69;
  upcr_pshared_ptr_t _bupc_Mptra70;
  _IEEE64 _bupc_spillld71;
  upcr_pshared_ptr_t _bupc_Mptra72;
  _IEEE64 _bupc_spillld73;
  upcr_pshared_ptr_t _bupc_Mptra74;
  _IEEE64 _bupc_spillld75;
  upcr_pshared_ptr_t _bupc_Mptra76;
  _IEEE64 _bupc_spillld77;
  upcr_pshared_ptr_t _bupc_Mptra78;
  _IEEE64 _bupc_spillld79;
  upcr_pshared_ptr_t _bupc_Mptra80;
  _IEEE64 _bupc_spillld81;
  upcr_pshared_ptr_t _bupc_Mptra82;
  _IEEE64 _bupc_spillld83;
  upcr_pshared_ptr_t _bupc_Mptra84;
  _IEEE64 _bupc_spillld85;
  
#line 370 "stream.c"
  aj = 1.0;
#line 371 "stream.c"
  bj = 2.0;
#line 372 "stream.c"
  cj = 0.0;
#line 374 "stream.c"
  _bupc___save_expr0 = aj;
#line 374 "stream.c"
  aj = _bupc___save_expr0 + _bupc___save_expr0;
#line 376 "stream.c"
  scalar = 3.0;
#line 377 "stream.c"
  k = 0;
#line 377 "stream.c"
  while(k <= 9)
#line 377 "stream.c"
  {
#line 379 "stream.c"
    cj = aj;
#line 380 "stream.c"
    bj = scalar * cj;
#line 381 "stream.c"
    cj = aj + bj;
#line 382 "stream.c"
    aj = bj + (scalar * cj);
#line 383 "stream.c"
    _1 :;
#line 383 "stream.c"
    k = k + 1;
  }
#line 386 "stream.c"
  aSumErr = 0.0;
#line 387 "stream.c"
  bSumErr = 0.0;
#line 388 "stream.c"
  cSumErr = 0.0;
#line 389 "stream.c"
  j = 0LL;
#line 389 "stream.c"
  while(j <= 9999999LL)
#line 389 "stream.c"
  {
#line 390 "stream.c"
    _bupc_Mptra50 = UPCR_ADD_PSHARED1(a, 8ULL, j);
#line 390 "stream.c"
    _bupc_spillld51 = UPCR_GET_PSHARED_DOUBLEVAL(_bupc_Mptra50, 0);
#line 390 "stream.c"
    if((_bupc_spillld51 - aj) >= 0.0)
#line 390 "stream.c"
    {
#line 390 "stream.c"
      _bupc_Mptra52 = UPCR_ADD_PSHARED1(a, 8ULL, j);
#line 390 "stream.c"
      _bupc_spillld53 = UPCR_GET_PSHARED_DOUBLEVAL(_bupc_Mptra52, 0);
#line 390 "stream.c"
      _bupc_mcselect38 = aSumErr + (_bupc_spillld53 - aj);
    }
    else
#line 390 "stream.c"
    {
#line 390 "stream.c"
      _bupc_Mptra54 = UPCR_ADD_PSHARED1(a, 8ULL, j);
#line 390 "stream.c"
      _bupc_spillld55 = UPCR_GET_PSHARED_DOUBLEVAL(_bupc_Mptra54, 0);
#line 390 "stream.c"
      _bupc_mcselect38 = aSumErr - (_bupc_spillld55 - aj);
    }
#line 390 "stream.c"
    aSumErr = _bupc_mcselect38;
#line 391 "stream.c"
    _bupc_Mptra56 = UPCR_ADD_PSHARED1(b, 8ULL, j);
#line 391 "stream.c"
    _bupc_spillld57 = UPCR_GET_PSHARED_DOUBLEVAL(_bupc_Mptra56, 0);
#line 391 "stream.c"
    if((_bupc_spillld57 - bj) >= 0.0)
#line 391 "stream.c"
    {
#line 391 "stream.c"
      _bupc_Mptra58 = UPCR_ADD_PSHARED1(b, 8ULL, j);
#line 391 "stream.c"
      _bupc_spillld59 = UPCR_GET_PSHARED_DOUBLEVAL(_bupc_Mptra58, 0);
#line 391 "stream.c"
      _bupc_mcselect39 = bSumErr + (_bupc_spillld59 - bj);
    }
    else
#line 391 "stream.c"
    {
#line 391 "stream.c"
      _bupc_Mptra60 = UPCR_ADD_PSHARED1(b, 8ULL, j);
#line 391 "stream.c"
      _bupc_spillld61 = UPCR_GET_PSHARED_DOUBLEVAL(_bupc_Mptra60, 0);
#line 391 "stream.c"
      _bupc_mcselect39 = bSumErr - (_bupc_spillld61 - bj);
    }
#line 391 "stream.c"
    bSumErr = _bupc_mcselect39;
#line 392 "stream.c"
    _bupc_Mptra62 = UPCR_ADD_PSHARED1(c, 8ULL, j);
#line 392 "stream.c"
    _bupc_spillld63 = UPCR_GET_PSHARED_DOUBLEVAL(_bupc_Mptra62, 0);
#line 392 "stream.c"
    if((_bupc_spillld63 - cj) >= 0.0)
#line 392 "stream.c"
    {
#line 392 "stream.c"
      _bupc_Mptra64 = UPCR_ADD_PSHARED1(c, 8ULL, j);
#line 392 "stream.c"
      _bupc_spillld65 = UPCR_GET_PSHARED_DOUBLEVAL(_bupc_Mptra64, 0);
#line 392 "stream.c"
      _bupc_mcselect40 = cSumErr + (_bupc_spillld65 - cj);
    }
    else
#line 392 "stream.c"
    {
#line 392 "stream.c"
      _bupc_Mptra66 = UPCR_ADD_PSHARED1(c, 8ULL, j);
#line 392 "stream.c"
      _bupc_spillld67 = UPCR_GET_PSHARED_DOUBLEVAL(_bupc_Mptra66, 0);
#line 392 "stream.c"
      _bupc_mcselect40 = cSumErr - (_bupc_spillld67 - cj);
    }
#line 392 "stream.c"
    cSumErr = _bupc_mcselect40;
#line 394 "stream.c"
    _2 :;
#line 394 "stream.c"
    j = j + 1LL;
  }
#line 395 "stream.c"
  aAvgErr = aSumErr / 1e+07;
#line 396 "stream.c"
  bAvgErr = bSumErr / 1e+07;
#line 397 "stream.c"
  cAvgErr = cSumErr / 1e+07;
#line 399 "stream.c"
  if(0)
#line 399 "stream.c"
  {
#line 400 "stream.c"
    epsilon = 1e-06;
  }
  else
#line 400 "stream.c"
  {
#line 402 "stream.c"
    if(1)
#line 402 "stream.c"
    {
#line 403 "stream.c"
      epsilon = 1e-13;
    }
    else
#line 403 "stream.c"
    {
#line 406 "stream.c"
      printf("WEIRD: sizeof(STREAM_TYPE) = %lu\n", 8ULL);
#line 407 "stream.c"
      epsilon = 1e-06;
    }
  }
#line 410 "stream.c"
  err = 0;
#line 427 "stream.c"
  if((aAvgErr / aj) >= 0.0)
#line 427 "stream.c"
  {
#line 427 "stream.c"
    _bupc_mcselect43 = (aAvgErr / aj) > epsilon;
  }
  else
#line 427 "stream.c"
  {
#line 427 "stream.c"
    _bupc_mcselect43 = (-(aAvgErr / aj)) > epsilon;
  }
#line 411 "stream.c"
  if(_bupc_mcselect43)
#line 411 "stream.c"
  {
#line 412 "stream.c"
    err = err + 1;
#line 413 "stream.c"
    printf("Failed Validation on array a[], AvgRelAbsErr > epsilon (%e)\n", epsilon);
#line 414 "stream.c"
    if(aAvgErr >= 0.0)
#line 414 "stream.c"
    {
#line 414 "stream.c"
      _bupc_mcselect41 = aAvgErr / aj;
    }
    else
#line 414 "stream.c"
    {
#line 414 "stream.c"
      _bupc_mcselect41 = (-aAvgErr) / aj;
    }
#line 414 "stream.c"
    printf("     Expected Value: %e, AvgAbsErr: %e, AvgRelAbsErr: %e\n", aj, aAvgErr, _bupc_mcselect41);
#line 415 "stream.c"
    ierr = 0;
#line 416 "stream.c"
    j = 0LL;
#line 416 "stream.c"
    while(j <= 9999999LL)
#line 416 "stream.c"
    {
#line 418 "stream.c"
      _bupc_Mptra68 = UPCR_ADD_PSHARED1(a, 8ULL, j);
#line 418 "stream.c"
      _bupc_spillld69 = UPCR_GET_PSHARED_DOUBLEVAL(_bupc_Mptra68, 0);
#line 418 "stream.c"
      if(((_bupc_spillld69 / aj) + -1.0e+0) >= 0.0)
#line 418 "stream.c"
      {
#line 418 "stream.c"
        _bupc_Mptra70 = UPCR_ADD_PSHARED1(a, 8ULL, j);
#line 418 "stream.c"
        _bupc_spillld71 = UPCR_GET_PSHARED_DOUBLEVAL(_bupc_Mptra70, 0);
#line 418 "stream.c"
        _bupc_mcselect42 = ((_bupc_spillld71 / aj) + -1.0e+0) > epsilon;
      }
      else
#line 418 "stream.c"
      {
#line 418 "stream.c"
        _bupc_Mptra72 = UPCR_ADD_PSHARED1(a, 8ULL, j);
#line 418 "stream.c"
        _bupc_spillld73 = UPCR_GET_PSHARED_DOUBLEVAL(_bupc_Mptra72, 0);
#line 418 "stream.c"
        _bupc_mcselect42 = (-((_bupc_spillld73 / aj) + -1.0e+0)) > epsilon;
      }
#line 417 "stream.c"
      if(_bupc_mcselect42)
#line 417 "stream.c"
      {
#line 418 "stream.c"
        ierr = ierr + 1;
      }
#line 426 "stream.c"
      _3 :;
#line 426 "stream.c"
      j = j + 1LL;
    }
#line 427 "stream.c"
    printf("     For array a[], %d errors were found.\n", ierr);
  }
#line 446 "stream.c"
  if((bAvgErr / bj) >= 0.0)
#line 446 "stream.c"
  {
#line 446 "stream.c"
    _bupc_mcselect46 = (bAvgErr / bj) > epsilon;
  }
  else
#line 446 "stream.c"
  {
#line 446 "stream.c"
    _bupc_mcselect46 = (-(bAvgErr / bj)) > epsilon;
  }
#line 429 "stream.c"
  if(_bupc_mcselect46)
#line 429 "stream.c"
  {
#line 430 "stream.c"
    err = err + 1;
#line 431 "stream.c"
    printf("Failed Validation on array b[], AvgRelAbsErr > epsilon (%e)\n", epsilon);
#line 432 "stream.c"
    if(bAvgErr >= 0.0)
#line 432 "stream.c"
    {
#line 432 "stream.c"
      _bupc_mcselect44 = bAvgErr / bj;
    }
    else
#line 432 "stream.c"
    {
#line 432 "stream.c"
      _bupc_mcselect44 = (-bAvgErr) / bj;
    }
#line 432 "stream.c"
    printf("     Expected Value: %e, AvgAbsErr: %e, AvgRelAbsErr: %e\n", bj, bAvgErr, _bupc_mcselect44);
#line 433 "stream.c"
    printf("     AvgRelAbsErr > Epsilon (%e)\n", epsilon);
#line 434 "stream.c"
    ierr = 0;
#line 435 "stream.c"
    j = 0LL;
#line 435 "stream.c"
    while(j <= 9999999LL)
#line 435 "stream.c"
    {
#line 437 "stream.c"
      _bupc_Mptra74 = UPCR_ADD_PSHARED1(b, 8ULL, j);
#line 437 "stream.c"
      _bupc_spillld75 = UPCR_GET_PSHARED_DOUBLEVAL(_bupc_Mptra74, 0);
#line 437 "stream.c"
      if(((_bupc_spillld75 / bj) + -1.0e+0) >= 0.0)
#line 437 "stream.c"
      {
#line 437 "stream.c"
        _bupc_Mptra76 = UPCR_ADD_PSHARED1(b, 8ULL, j);
#line 437 "stream.c"
        _bupc_spillld77 = UPCR_GET_PSHARED_DOUBLEVAL(_bupc_Mptra76, 0);
#line 437 "stream.c"
        _bupc_mcselect45 = ((_bupc_spillld77 / bj) + -1.0e+0) > epsilon;
      }
      else
#line 437 "stream.c"
      {
#line 437 "stream.c"
        _bupc_Mptra78 = UPCR_ADD_PSHARED1(b, 8ULL, j);
#line 437 "stream.c"
        _bupc_spillld79 = UPCR_GET_PSHARED_DOUBLEVAL(_bupc_Mptra78, 0);
#line 437 "stream.c"
        _bupc_mcselect45 = (-((_bupc_spillld79 / bj) + -1.0e+0)) > epsilon;
      }
#line 436 "stream.c"
      if(_bupc_mcselect45)
#line 436 "stream.c"
      {
#line 437 "stream.c"
        ierr = ierr + 1;
      }
#line 445 "stream.c"
      _4 :;
#line 445 "stream.c"
      j = j + 1LL;
    }
#line 446 "stream.c"
    printf("     For array b[], %d errors were found.\n", ierr);
  }
#line 465 "stream.c"
  if((cAvgErr / cj) >= 0.0)
#line 465 "stream.c"
  {
#line 465 "stream.c"
    _bupc_mcselect49 = (cAvgErr / cj) > epsilon;
  }
  else
#line 465 "stream.c"
  {
#line 465 "stream.c"
    _bupc_mcselect49 = (-(cAvgErr / cj)) > epsilon;
  }
#line 448 "stream.c"
  if(_bupc_mcselect49)
#line 448 "stream.c"
  {
#line 449 "stream.c"
    err = err + 1;
#line 450 "stream.c"
    printf("Failed Validation on array c[], AvgRelAbsErr > epsilon (%e)\n", epsilon);
#line 451 "stream.c"
    if(cAvgErr >= 0.0)
#line 451 "stream.c"
    {
#line 451 "stream.c"
      _bupc_mcselect47 = cAvgErr / cj;
    }
    else
#line 451 "stream.c"
    {
#line 451 "stream.c"
      _bupc_mcselect47 = (-cAvgErr) / cj;
    }
#line 451 "stream.c"
    printf("     Expected Value: %e, AvgAbsErr: %e, AvgRelAbsErr: %e\n", cj, cAvgErr, _bupc_mcselect47);
#line 452 "stream.c"
    printf("     AvgRelAbsErr > Epsilon (%e)\n", epsilon);
#line 453 "stream.c"
    ierr = 0;
#line 454 "stream.c"
    j = 0LL;
#line 454 "stream.c"
    while(j <= 9999999LL)
#line 454 "stream.c"
    {
#line 456 "stream.c"
      _bupc_Mptra80 = UPCR_ADD_PSHARED1(c, 8ULL, j);
#line 456 "stream.c"
      _bupc_spillld81 = UPCR_GET_PSHARED_DOUBLEVAL(_bupc_Mptra80, 0);
#line 456 "stream.c"
      if(((_bupc_spillld81 / cj) + -1.0e+0) >= 0.0)
#line 456 "stream.c"
      {
#line 456 "stream.c"
        _bupc_Mptra82 = UPCR_ADD_PSHARED1(c, 8ULL, j);
#line 456 "stream.c"
        _bupc_spillld83 = UPCR_GET_PSHARED_DOUBLEVAL(_bupc_Mptra82, 0);
#line 456 "stream.c"
        _bupc_mcselect48 = ((_bupc_spillld83 / cj) + -1.0e+0) > epsilon;
      }
      else
#line 456 "stream.c"
      {
#line 456 "stream.c"
        _bupc_Mptra84 = UPCR_ADD_PSHARED1(c, 8ULL, j);
#line 456 "stream.c"
        _bupc_spillld85 = UPCR_GET_PSHARED_DOUBLEVAL(_bupc_Mptra84, 0);
#line 456 "stream.c"
        _bupc_mcselect48 = (-((_bupc_spillld85 / cj) + -1.0e+0)) > epsilon;
      }
#line 455 "stream.c"
      if(_bupc_mcselect48)
#line 455 "stream.c"
      {
#line 456 "stream.c"
        ierr = ierr + 1;
      }
#line 464 "stream.c"
      _5 :;
#line 464 "stream.c"
      j = j + 1LL;
    }
#line 465 "stream.c"
    printf("     For array c[], %d errors were found.\n", ierr);
  }
#line 467 "stream.c"
  if(err == 0)
#line 467 "stream.c"
  {
#line 468 "stream.c"
    printf("Solution Validates: avg error less than %e on all three arrays\n", epsilon);
  }
  UPCR_EXIT_FUNCTION();
  return;
} /* checkSTREAMresults */

#line 1 "_SYSTEM"
/**************************************************************************/
/* upcc-generated strings for configuration consistency checks            */

GASNETT_IDENT(UPCRI_IdentString_stream_o_1480688287_GASNetConfig_gen, 
 "$GASNetConfig: (/tmp/upcc--31164-1480688286/stream.trans.c) RELEASE=1.26.3,SPEC=1.8,CONDUIT=IBV(IBV-1.17/IBV-1.13),THREADMODEL=SEQ,SEGMENT=FAST,PTR=64bit,noalign,pshm,nodebug,notrace,nostats,nodebugmalloc,nosrclines,timers_native,membars_native,atomics_native,atomic32_native,atomic64_native $");
GASNETT_IDENT(UPCRI_IdentString_stream_o_1480688287_UPCRConfig_gen,
 "$UPCRConfig: (/tmp/upcc--31164-1480688286/stream.trans.c) VERSION=2.22.3,PLATFORMENV=shared-distributed,SHMEM=pshm,SHAREDPTRREP=packed/p20:t10:a34,TRANS=berkeleyupc,nodebug,nogasp,notv,staticthreads=1 $");
GASNETT_IDENT(UPCRI_IdentString_stream_o_1480688287_translatetime, 
 "$UPCTranslateTime: (stream.o) Fri Dec  2 06:18:07 2016 $");
GASNETT_IDENT(UPCRI_IdentString_stream_o_1480688287_GASNetConfig_obj, 
 "$GASNetConfig: (stream.o) " GASNET_CONFIG_STRING " $");
GASNETT_IDENT(UPCRI_IdentString_stream_o_1480688287_UPCRConfig_obj,
 "$UPCRConfig: (stream.o) " UPCR_CONFIG_STRING UPCRI_THREADCONFIG_STR " $");
GASNETT_IDENT(UPCRI_IdentString_stream_o_1480688287_translator, 
 "$UPCTranslator: (stream.o) /usr/local/upc/2.22.2/translator/install/targ (aphid) $");
GASNETT_IDENT(UPCRI_IdentString_stream_o_1480688287_upcver, 
 "$UPCVersion: (stream.o) 2.22.2 $");
GASNETT_IDENT(UPCRI_IdentString_stream_o_1480688287_compileline, 
 "$UPCCompileLine: (stream.o) /usr/local/upc/2.22.2/runtime/inst/bin/upcc.pl --at-remote-http -translator=/usr/local/upc/2.22.2/translator/install/targ --arch-size=64 --network=ibv -T 1 --lines --trans --sizes-file=upcc-sizes stream.i $");
GASNETT_IDENT(UPCRI_IdentString_stream_o_1480688287_compiletime, 
 "$UPCCompileTime: (stream.o) " __DATE__ " " __TIME__ " $");
#ifndef UPCRI_CC /* ensure backward compatilibity for http netcompile */
#define UPCRI_CC <unknown>
#endif
GASNETT_IDENT(UPCRI_IdentString_stream_o_1480688287_backendcompiler, 
 "$UPCRBackendCompiler: (stream.o) " _STRINGIFY(UPCRI_CC) " $");

#ifdef GASNETT_CONFIGURE_MISMATCH
  GASNETT_IDENT(UPCRI_IdentString_stream_o_1480688287_configuremismatch, 
   "$UPCRConfigureMismatch: (stream.o) 1 $");
  GASNETT_IDENT(UPCRI_IdentString_stream_o_1480688287_configuredcompiler, 
   "$UPCRConfigureCompiler: (stream.o) " GASNETT_PLATFORM_COMPILER_IDSTR " $");
  GASNETT_IDENT(UPCRI_IdentString_stream_o_1480688287_buildcompiler, 
   "$UPCRBuildCompiler: (stream.o) " PLATFORM_COMPILER_IDSTR " $");
#endif

/**************************************************************************/
GASNETT_IDENT(UPCRI_IdentString_stream_o_1480688287_transver_2,
 "$UPCTranslatorVersion: (stream.o) 2.22.2, built on May 12 2016 at 15:50:34, host aphid linux-x86_64/64, gcc v4.2.4 (Ubuntu 4.2.4-1ubuntu4) $");
