#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 150 "/usr/lib/gcc/msp430/4.6.3/include/stddef.h" 3
typedef long int ptrdiff_t;
#line 212
typedef unsigned int size_t;
#line 324
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 38 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/stdint.h" 3
typedef signed char int8_t;
typedef int int16_t;
typedef long int int32_t;
__extension__ 
#line 41
typedef long long int int64_t;

typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
__extension__ 
#line 46
typedef unsigned long long int uint64_t;





typedef signed char int_least8_t;
typedef int int_least16_t;
typedef long int int_least32_t;
__extension__ 
#line 55
typedef long long int int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
__extension__ 
#line 61
typedef unsigned long long int uint_least64_t;





typedef signed char int_fast8_t;
typedef int int_fast16_t;
typedef long int int_fast32_t;
__extension__ 
#line 70
typedef long long int int_fast64_t;


typedef unsigned char uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
__extension__ 
#line 76
typedef unsigned long long int uint_fast64_t;









typedef int16_t intptr_t;
typedef uint16_t uintptr_t;





__extension__ 
#line 93
typedef long long int intmax_t;
__extension__ 
#line 94
typedef unsigned long long int uintmax_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;





static __inline int8_t __nesc_ntoh_int8(const void * source)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;
#line 303
static __inline int8_t __nesc_hton_leint8(void * target, int8_t value)  ;
#line 322
static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 340
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;








static __inline uint32_t __nesc_ntoh_leuint32(const void * source)  ;






static __inline uint32_t __nesc_hton_leuint32(void * target, uint32_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 48 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/types.h" 3
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned short ushort;
typedef unsigned int uint;

typedef uint8_t u_int8_t;
typedef uint16_t u_int16_t;
typedef uint32_t u_int32_t;
typedef uint64_t u_int64_t;

typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t *qaddr_t;

typedef char *caddr_t;
typedef const char *c_caddr_t;
typedef volatile char *v_caddr_t;
typedef u_int32_t fixpt_t;
typedef u_int32_t gid_t;
typedef u_int32_t in_addr_t;
typedef u_int16_t in_port_t;
typedef u_int32_t ino_t;
typedef long key_t;
typedef u_int16_t mode_t;
typedef u_int16_t nlink_t;
typedef quad_t rlim_t;
typedef int32_t segsz_t;
typedef int32_t swblk_t;
typedef int32_t ufs_daddr_t;
typedef int32_t ufs_time_t;
typedef u_int32_t uid_t;
# 43 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/string.h" 3
extern void *memmove(void *arg_0x402b2698, const void *arg_0x402b2830, size_t arg_0x402b29c8);
extern void *memset(void *arg_0x402b2e90, int arg_0x402b7010, size_t arg_0x402b71a8);
#line 65
extern void *memset(void *arg_0x402c3d30, int arg_0x402c3e88, size_t arg_0x402c2030);
# 62 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/stdlib.h" 3
#line 59
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;






#line 66
typedef struct __nesc_unnamed4243 {
  long int quot;
  long int rem;
} ldiv_t;
# 122 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/config.h" 3
typedef long int __int32_t;
typedef unsigned long int __uint32_t;
# 12 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/_types.h" 3
typedef long _off_t;
typedef long _ssize_t;
# 19 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/reent.h" 3
typedef unsigned long __ULong;
#line 31
struct _glue {

  struct _glue *_next;
  int _niobs;
  struct __sFILE *_iobs;
};

struct _Bigint {

  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm {

  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _atexit {
  struct _atexit *_next;
  int _ind;
  void (*_fns[32])(void );
};








struct __sbuf {
  unsigned char *_base;
  int _size;
};






typedef long _fpos_t;
#line 116
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;


  void *_cookie;

  int (*_read)(void *_cookie, char *_buf, int _n);
  int (*_write)(void *_cookie, const char *_buf, int _n);

  _fpos_t (*_seek)(void *_cookie, _fpos_t _offset, int _whence);
  int (*_close)(void *_cookie);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _offset;

  struct _reent *_data;
};
#line 174
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};









struct _reent {


  int _errno;




  struct __sFILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void (*__cleanup)(struct _reent *arg_0x402e33b8);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union __nesc_unnamed4244 {

    struct __nesc_unnamed4245 {

      unsigned int _unused_rand;
      char *_strtok_last;
      char _asctime_buf[26];
      struct __tm _localtime_buf;
      int _gamma_signgam;
      __extension__ unsigned long long _rand_next;
      struct _rand48 _r48;
    } _reent;



    struct __nesc_unnamed4246 {


      unsigned char *_nextf[30];
      unsigned int _nmalloc[30];
    } _unused;
  } _new;


  struct _atexit *_atexit;
  struct _atexit _atexit0;


  void (**_sig_func)(int arg_0x402e6a70);




  struct _glue __sglue;
  struct __sFILE __sf[3];
};
#line 273
struct _reent;
# 18 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/math.h" 3
union __dmath {

  __uint32_t i[2];
  double d;
};




union __dmath;
#line 212
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};
#line 265
enum __fdlibm_version {

  __fdlibm_ieee = -1, 
  __fdlibm_svid, 
  __fdlibm_xopen, 
  __fdlibm_posix
};




enum __fdlibm_version;
# 25 "/opt/tinyos/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4247 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 51 "/opt/tinyos/tos/types/TinyError.h"
enum __nesc_unnamed4248 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 47 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/intrinsics.h" 3
void __nop(void );



void __dint(void );



void __eint(void );


unsigned int __read_status_register(void );


typedef unsigned int __istate_t;
# 164 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/msp430f1611.h" 3
extern volatile unsigned char ME1 __asm ("__""ME1");
#line 183
extern volatile unsigned char ME2 __asm ("__""ME2");
#line 195
extern volatile unsigned int WDTCTL __asm ("__""WDTCTL");
#line 267
extern volatile unsigned char P1OUT __asm ("__""P1OUT");

extern volatile unsigned char P1DIR __asm ("__""P1DIR");

extern volatile unsigned char P1IFG __asm ("__""P1IFG");

extern volatile unsigned char P1IES __asm ("__""P1IES");

extern volatile unsigned char P1IE __asm ("__""P1IE");

extern volatile unsigned char P1SEL __asm ("__""P1SEL");




extern volatile unsigned char P2OUT __asm ("__""P2OUT");

extern volatile unsigned char P2DIR __asm ("__""P2DIR");

extern volatile unsigned char P2IFG __asm ("__""P2IFG");



extern volatile unsigned char P2IE __asm ("__""P2IE");

extern volatile unsigned char P2SEL __asm ("__""P2SEL");










extern volatile unsigned char P3OUT __asm ("__""P3OUT");

extern volatile unsigned char P3DIR __asm ("__""P3DIR");

extern volatile unsigned char P3SEL __asm ("__""P3SEL");




extern volatile unsigned char P4OUT __asm ("__""P4OUT");

extern volatile unsigned char P4DIR __asm ("__""P4DIR");

extern volatile unsigned char P4SEL __asm ("__""P4SEL");










extern volatile unsigned char P5OUT __asm ("__""P5OUT");

extern volatile unsigned char P5DIR __asm ("__""P5DIR");

extern volatile unsigned char P5SEL __asm ("__""P5SEL");




extern volatile unsigned char P6OUT __asm ("__""P6OUT");

extern volatile unsigned char P6DIR __asm ("__""P6DIR");

extern volatile unsigned char P6SEL __asm ("__""P6SEL");
#line 382
extern volatile unsigned char U0CTL __asm ("__""U0CTL");

extern volatile unsigned char U0TCTL __asm ("__""U0TCTL");



extern volatile unsigned char U0MCTL __asm ("__""U0MCTL");

extern volatile unsigned char U0BR0 __asm ("__""U0BR0");

extern volatile unsigned char U0BR1 __asm ("__""U0BR1");

extern const volatile unsigned char U0RXBUF __asm ("__""U0RXBUF");
#line 439
extern volatile unsigned char U1CTL __asm ("__""U1CTL");

extern volatile unsigned char U1TCTL __asm ("__""U1TCTL");



extern volatile unsigned char U1MCTL __asm ("__""U1MCTL");

extern volatile unsigned char U1BR0 __asm ("__""U1BR0");

extern volatile unsigned char U1BR1 __asm ("__""U1BR1");

extern const volatile unsigned char U1RXBUF __asm ("__""U1RXBUF");
#line 595
extern volatile unsigned int TACTL __asm ("__""TACTL");

extern volatile unsigned int TACCTL0 __asm ("__""TACCTL0");

extern volatile unsigned int TACCTL1 __asm ("__""TACCTL1");

extern volatile unsigned int TACCTL2 __asm ("__""TACCTL2");

extern volatile unsigned int TAR __asm ("__""TAR");
#line 720
extern volatile unsigned int TBCCTL0 __asm ("__""TBCCTL0");
#line 734
extern volatile unsigned int TBR __asm ("__""TBR");

extern volatile unsigned int TBCCR0 __asm ("__""TBCCR0");
#line 849
extern volatile unsigned char DCOCTL __asm ("__""DCOCTL");

extern volatile unsigned char BCSCTL1 __asm ("__""BCSCTL1");

extern volatile unsigned char BCSCTL2 __asm ("__""BCSCTL2");
#line 1021
extern volatile unsigned int ADC12CTL0 __asm ("__""ADC12CTL0");

extern volatile unsigned int ADC12CTL1 __asm ("__""ADC12CTL1");
# 343 "/opt/tinyos/tos/chips/msp430/msp430hardware.h"
static volatile uint8_t U0CTLnr __asm ("0x0070");
static volatile uint8_t I2CTCTLnr __asm ("0x0071");
static volatile uint8_t I2CDCTLnr __asm ("0x0072");
#line 378
typedef uint8_t mcu_power_t  ;
static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;


enum __nesc_unnamed4249 {
  MSP430_POWER_ACTIVE = 0, 
  MSP430_POWER_LPM0 = 1, 
  MSP430_POWER_LPM1 = 2, 
  MSP430_POWER_LPM2 = 3, 
  MSP430_POWER_LPM3 = 4, 
  MSP430_POWER_LPM4 = 5
};

static inline void __nesc_disable_interrupt(void )  ;





static inline void __nesc_enable_interrupt(void )  ;




typedef bool __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts);






__nesc_atomic_t __nesc_atomic_start(void )   ;







void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)   ;
#line 433
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
#line 448
enum __nesc_unnamed4250 {
  MSP430_PORT_RESISTOR_INVALID, 
  MSP430_PORT_RESISTOR_OFF, 
  MSP430_PORT_RESISTOR_PULLDOWN, 
  MSP430_PORT_RESISTOR_PULLUP
};
# 8 "/opt/tinyos/tos/platforms/telosb/hardware.h"
enum __nesc_unnamed4251 {
  TOS_SLEEP_NONE = MSP430_POWER_ACTIVE
};
#line 36
static inline void TOSH_SET_SIMO0_PIN()  ;
#line 36
static inline void TOSH_CLR_SIMO0_PIN()  ;
#line 36
static inline void TOSH_MAKE_SIMO0_OUTPUT()  ;
static inline void TOSH_SET_UCLK0_PIN()  ;
#line 37
static inline void TOSH_CLR_UCLK0_PIN()  ;
#line 37
static inline void TOSH_MAKE_UCLK0_OUTPUT()  ;
#line 79
enum __nesc_unnamed4252 {

  TOSH_HUMIDITY_ADDR = 5, 
  TOSH_HUMIDTEMP_ADDR = 3, 
  TOSH_HUMIDITY_RESET = 0x1E
};



static inline void TOSH_SET_FLASH_CS_PIN()  ;
#line 88
static inline void TOSH_CLR_FLASH_CS_PIN()  ;
#line 88
static inline void TOSH_MAKE_FLASH_CS_OUTPUT()  ;
static inline void TOSH_SET_FLASH_HOLD_PIN()  ;
#line 89
static inline void TOSH_MAKE_FLASH_HOLD_OUTPUT()  ;
# 39 "app_profile.h"
enum __nesc_unnamed4253 {
  INITAL_RADIO_CHANNEL = 26, 
  RX_QUEUE_SIZE = 10
};









#line 44
typedef nx_struct sniffer_metadata {

  nxle_uint8_t lqi;
  nxle_int8_t rssi;
  nxle_uint8_t crc;
  nxle_uint8_t mhrLen;
  nxle_uint8_t channel;
  nxle_uint32_t timestamp;
} __attribute__((packed)) sniffer_metadata_t;
# 6 "/opt/tinyos/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4254 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4255 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 83 "/opt/tinyos/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4256 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4257 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4258 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 82 "/opt/tinyos/tos/lib/mac/tkn154/TKN154.h"
#line 43
typedef enum ieee154_status {

  IEEE154_SUCCESS = 0x00, 
  IEEE154_BEACON_LOSS = 0xE0, 
  IEEE154_CHANNEL_ACCESS_FAILURE = 0xE1, 
  IEEE154_COUNTER_ERROR = 0xDB, 
  IEEE154_DENIED = 0xE2, 
  IEEE154_DISABLE_TRX_FAILURE = 0xE3, 
  IEEE154_FRAME_TOO_LONG = 0xE5, 
  IEEE154_IMPROPER_KEY_TYPE = 0xDC, 
  IEEE154_IMPROPER_SECURITY_LEVEL = 0xDD, 
  IEEE154_INVALID_ADDRESS = 0xF5, 
  IEEE154_INVALID_GTS = 0xE6, 
  IEEE154_INVALID_HANDLE = 0xE7, 
  IEEE154_INVALID_INDEX = 0xF9, 
  IEEE154_INVALID_PARAMETER = 0xE8, 
  IEEE154_LIMIT_REACHED = 0xFA, 
  IEEE154_NO_ACK = 0xE9, 
  IEEE154_NO_BEACON = 0xEA, 
  IEEE154_NO_DATA = 0xEB, 
  IEEE154_NO_SHORT_ADDRESS = 0xEC, 
  IEEE154_ON_TIME_TOO_LONG = 0xF6, 
  IEEE154_OUT_OF_CAP = 0xED, 
  IEEE154_PAN_ID_CONFLICT = 0xEE, 
  IEEE154_PAST_TIME = 0xF7, 
  IEEE154_READ_ONLY = 0xFB, 
  IEEE154_REALIGNMENT = 0xEF, 
  IEEE154_SCAN_IN_PROGRESS = 0xFC, 
  IEEE154_SECURITY_ERROR = 0xE4, 
  IEEE154_SUPERFRAME_OVERLAP = 0xFD, 
  IEEE154_TRACKING_OFF = 0xF8, 
  IEEE154_TRANSACTION_EXPIRED = 0xF0, 
  IEEE154_TRANSACTION_OVERFLOW = 0xF1, 
  IEEE154_TX_ACTIVE = 0xF2, 
  IEEE154_UNAVAILABLE_KEY = 0xF3, 
  IEEE154_UNSUPPORTED_ATTRIBUTE = 0xF4, 
  IEEE154_UNSUPPORTED_LEGACY = 0xDE, 
  IEEE154_UNSUPPORTED_SECURITY = 0xDF, 
  IEEE154_PURGED = 0xDA
} ieee154_status_t;






#line 84
typedef enum ieee154_association_status {

  IEEE154_ASSOCIATION_SUCCESSFUL = 0x00, 
  IEEE154_PAN_AT_CAPACITY = 0x01, 
  IEEE154_ACCESS_DENIED = 0x02
} ieee154_association_status_t;





#line 91
typedef enum ieee154_disassociation_reason {

  IEEE154_COORDINATOR_WISHES_DEVICE_TO_LEAVE = 0x01, 
  IEEE154_DEVICE_WISHES_TO_LEAVE = 0x02
} ieee154_disassociation_reason_t;






#line 97
typedef union ieee154_address {


  uint16_t shortAddress;
  uint64_t extendedAddress;
} ieee154_address_t;








#line 104
typedef struct ieee154_security {


  uint8_t SecurityLevel;
  uint8_t KeyIdMode;
  uint8_t KeySource[8];
  uint8_t KeyIndex;
} ieee154_security_t;










#line 113
typedef nx_struct __nesc_unnamed4259 {
  unsigned char __nesc_filler0[1];
} __attribute__((packed)) 






ieee154_CapabilityInformation_t;










#line 124
typedef nx_struct __nesc_unnamed4260 {
  unsigned char __nesc_filler1[2];
} __attribute__((packed)) 






ieee154_SuperframeSpec_t;
#line 150
#line 135
typedef struct ieee154_PANDescriptor {
  uint8_t CoordAddrMode;
  uint16_t CoordPANId;
  ieee154_address_t CoordAddress;
  uint8_t LogicalChannel;
  uint8_t ChannelPage;
  ieee154_SuperframeSpec_t SuperframeSpec;
  bool GTSPermit;
  uint8_t LinkQuality;
  uint32_t TimeStamp;
  ieee154_status_t SecurityFailure;
  uint8_t SecurityLevel;
  uint8_t KeyIdMode;
  uint64_t KeySource;
  uint8_t KeyIndex;
} ieee154_PANDescriptor_t;

enum __nesc_unnamed4261 {

  BEACON_ENABLED_PAN, 
  NONBEACON_ENABLED_PAN, 


  TX_OPTIONS_ACK = 0x01, 
  TX_OPTIONS_GTS = 0x02, 
  TX_OPTIONS_INDIRECT = 0x04, 


  ADDR_MODE_NOT_PRESENT = 0x00, 
  ADDR_MODE_RESERVED = 0x01, 
  ADDR_MODE_SHORT_ADDRESS = 0x02, 
  ADDR_MODE_EXTENDED_ADDRESS = 0x03, 


  ENERGY_DETECTION_SCAN = 0x00, 
  ACTIVE_SCAN = 0x01, 
  PASSIVE_SCAN = 0x02, 
  ORPHAN_SCAN = 0x03, 


  FRAMETYPE_BEACON = 0x00, 
  FRAMETYPE_DATA = 0x01, 
  FRAMETYPE_ACK = 0x02, 
  FRAMETYPE_CMD = 0x03
};





typedef uint8_t ieee154_phyCurrentChannel_t;
typedef uint32_t ieee154_phyChannelsSupported_t;
typedef uint8_t ieee154_phyTransmitPower_t;
typedef uint8_t ieee154_phyCCAMode_t;
typedef uint8_t ieee154_phyCurrentPage_t;
typedef uint16_t ieee154_phyMaxFrameDuration_t;
typedef uint8_t ieee154_phySHRDuration_t;
typedef uint8_t ieee154_phySymbolsPerOctet_t;

typedef uint8_t ieee154_macAckWaitDuration_t;
typedef bool ieee154_macAssociatedPANCoord_t;
typedef bool ieee154_macAssociationPermit_t;
typedef bool ieee154_macAutoRequest_t;
typedef bool ieee154_macBattLifeExt_t;
typedef uint8_t ieee154_macBattLifeExtPeriods_t;
typedef uint8_t *ieee154_macBeaconPayload_t;
typedef uint8_t ieee154_macBeaconPayloadLength_t;
typedef uint8_t ieee154_macBeaconOrder_t;
typedef uint32_t ieee154_macBeaconTxTime_t;
typedef uint8_t ieee154_macBSN_t;
typedef uint64_t ieee154_macCoordExtendedAddress_t;
typedef uint16_t ieee154_macCoordShortAddress_t;
typedef uint8_t ieee154_macDSN_t;
typedef bool ieee154_macGTSPermit_t;
typedef uint8_t ieee154_macMaxBE_t;
typedef uint8_t ieee154_macMaxCSMABackoffs_t;
typedef uint32_t ieee154_macMaxFrameTotalWaitTime_t;
typedef uint8_t ieee154_macMaxFrameRetries_t;
typedef uint8_t ieee154_macMinBE_t;
typedef uint8_t ieee154_macMinLIFSPeriod_t;
typedef uint8_t ieee154_macMinSIFSPeriod_t;
typedef uint16_t ieee154_macPANId_t;
typedef bool ieee154_macPromiscuousMode_t;
typedef uint8_t ieee154_macResponseWaitTime_t;
typedef bool ieee154_macRxOnWhenIdle_t;
typedef bool ieee154_macSecurityEnabled_t;
typedef uint16_t ieee154_macShortAddress_t;
typedef uint8_t ieee154_macSuperframeOrder_t;
typedef uint16_t ieee154_macSyncSymbolOffset_t;
typedef bool ieee154_macTimestampSupported_t;
typedef uint16_t ieee154_macTransactionPersistenceTime_t;


typedef bool ieee154_macPanCoordinator_t;
#line 315
enum __nesc_unnamed4262 {

  IEEE154_aMaxPHYPacketSize = 127
};
# 42 "/opt/tinyos/tos/chips/cc2420_tkn154/TKN154_PHY.h"
enum __nesc_unnamed4263 {

  IEEE154_SUPPORTED_CHANNELS = 0x07FFF800, 
  IEEE154_SYMBOLS_PER_OCTET = 2, 
  IEEE154_TXPOWER_TOLERANCE = 0x80, 
  IEEE154_SHR_DURATION = 5 * IEEE154_SYMBOLS_PER_OCTET, 
  IEEE154_MAX_FRAME_DURATION = IEEE154_SHR_DURATION + (IEEE154_aMaxPHYPacketSize + 1) * IEEE154_SYMBOLS_PER_OCTET, 
  IEEE154_PREAMBLE_LENGTH = 4 * IEEE154_SYMBOLS_PER_OCTET, 
  IEEE154_SYNC_SYMBOL_OFFSET = 1 * IEEE154_SYMBOLS_PER_OCTET, 
  IEEE154_MIN_LIFS_PERIOD = 40, 
  IEEE154_MIN_SIFS_PERIOD = 12, 
  IEEE154_ACK_WAIT_DURATION = 20 + 12 + IEEE154_SHR_DURATION + 6 * IEEE154_SYMBOLS_PER_OCTET, 
  IEEE154_TIMESTAMP_SUPPORTED = TRUE
};
# 4 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Timer62500hz.h"
typedef struct __nesc_unnamed4264 {
} 
#line 4
T62500hz;
# 45 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/TKN154_platform.h"
enum __nesc_unnamed4265 {


  IEEE154_RADIO_TX_DELAY = 400, 



  IEEE154_RADIO_RX_DELAY = 400, 




  BEACON_PAYLOAD_UPDATE_INTERVAL = 2500
};
# 46 "/opt/tinyos/tos/lib/mac/tkn154/TKN154_MAC.h"
enum __nesc_unnamed4266 {

  IEEE154_phyCurrentChannel = 0x00, 
  IEEE154_phyChannelsSupported = 0x01, 
  IEEE154_phyTransmitPower = 0x02, 
  IEEE154_phyCCAMode = 0x03, 
  IEEE154_phyCurrentPage = 0x04, 
  IEEE154_phyMaxFrameDuration = 0x05, 
  IEEE154_phySHRDuration = 0x06, 
  IEEE154_phySymbolsPerOctet = 0x07, 


  IEEE154_macAckWaitDuration = 0x40, 
  IEEE154_macAssociatedPANCoord = 0x56, 
  IEEE154_macAssociationPermit = 0x41, 
  IEEE154_macAutoRequest = 0x42, 
  IEEE154_macBattLifeExt = 0x43, 
  IEEE154_macBattLifeExtPeriods = 0x44, 
  IEEE154_macBeaconPayload = 0x45, 
  IEEE154_macBeaconPayloadLength = 0x46, 
  IEEE154_macBeaconOrder = 0x47, 
  IEEE154_macBeaconTxTime = 0x48, 
  IEEE154_macBSN = 0x49, 
  IEEE154_macCoordExtendedAddress = 0x4A, 
  IEEE154_macCoordShortAddress = 0x4B, 
  IEEE154_macDSN = 0x4C, 
  IEEE154_macGTSPermit = 0x4D, 
  IEEE154_macMaxBE = 0x57, 
  IEEE154_macMaxCSMABackoffs = 0x4E, 
  IEEE154_macMaxFrameTotalWaitTime = 0x58, 
  IEEE154_macMaxFrameRetries = 0x59, 
  IEEE154_macMinBE = 0x4F, 
  IEEE154_macMinLIFSPeriod = 0xA0, 
  IEEE154_macMinSIFSPeriod = 0xA1, 
  IEEE154_macPANId = 0x50, 
  IEEE154_macPromiscuousMode = 0x51, 
  IEEE154_macResponseWaitTime = 0x5A, 
  IEEE154_macRxOnWhenIdle = 0x52, 
  IEEE154_macSecurityEnabled = 0x5D, 
  IEEE154_macShortAddress = 0x53, 
  IEEE154_macSuperframeOrder = 0x54, 
  IEEE154_macSyncSymbolOffset = 0x5B, 
  IEEE154_macTimestampSupported = 0x5C, 
  IEEE154_macTransactionPersistenceTime = 0x55, 


  IEEE154_macPanCoordinator = 0xF0
};

enum __nesc_unnamed4267 {

  MHR_INDEX_FC1 = 0, 
  MHR_INDEX_FC2 = 1, 
  MHR_INDEX_SEQNO = 2, 
  MHR_INDEX_ADDRESS = 3, 
  MHR_MAX_LEN = 23, 


  FC1_FRAMETYPE_BEACON = 0x00, 
  FC1_FRAMETYPE_DATA = 0x01, 
  FC1_FRAMETYPE_ACK = 0x02, 
  FC1_FRAMETYPE_CMD = 0x03, 
  FC1_FRAMETYPE_MASK = 0x07, 

  FC1_SECURITY_ENABLED = 0x08, 
  FC1_FRAME_PENDING = 0x10, 
  FC1_ACK_REQUEST = 0x20, 
  FC1_PAN_ID_COMPRESSION = 0x40, 

  FC2_DEST_MODE_SHORT = 0x08, 
  FC2_DEST_MODE_EXTENDED = 0x0c, 
  FC2_DEST_MODE_MASK = 0x0c, 
  FC2_DEST_MODE_OFFSET = 2, 

  FC2_SRC_MODE_SHORT = 0x80, 
  FC2_SRC_MODE_EXTENDED = 0xc0, 
  FC2_SRC_MODE_MASK = 0xc0, 
  FC2_SRC_MODE_OFFSET = 6, 

  FC2_FRAME_VERSION_1 = 0x10, 
  FC2_FRAME_VERSION_2 = 0x20, 
  FC2_FRAME_VERSION_MASK = 0x30
};








enum __nesc_unnamed4268 {





  RADIO_CLIENT_SCAN = 0U, 
  RADIO_CLIENT_PIB = 1U, 
  RADIO_CLIENT_PROMISCUOUSMODE = 2U, 

  RADIO_CLIENT_BEACONTRANSMIT = 3U, 
  RADIO_CLIENT_COORDBROADCAST = 4U, 
  RADIO_CLIENT_COORDCAP = 5U, 
  RADIO_CLIENT_COORDCFP = 6U, 
  RADIO_CLIENT_COORD_INACTIVE_PERIOD = 7U, 

  RADIO_CLIENT_BEACONSYNCHRONIZE = 8U, 
  RADIO_CLIENT_DEVICECAP = 9U, 
  RADIO_CLIENT_DEVICECFP = 10U, 
  RADIO_CLIENT_DEVICE_INACTIVE_PERIOD = 11U
};

enum __nesc_unnamed4269 {

  OUTGOING_SUPERFRAME, 
  INCOMING_SUPERFRAME
};
#line 205
#line 183
typedef struct __nesc_unnamed4270 {

  uint8_t length;
  uint8_t mhr[MHR_MAX_LEN];
#line 198
  uint8_t network;



  uint8_t type;
} 

ieee154_header_t;





#line 207
typedef nx_struct __nesc_unnamed4271 {
  nx_uint32_t timestamp;
  nx_int8_t rssi;
  nx_uint8_t linkQuality;
} __attribute__((packed)) ieee154_metadata_t;










#line 213
typedef struct __nesc_unnamed4272 {

  ieee154_header_t *header;
  uint8_t *payload;
  ieee154_metadata_t *metadata;
  uint8_t headerLen;
  uint8_t payloadLen;
  uint8_t client;
  uint8_t handle;
} ieee154_txframe_t;





#line 224
typedef struct __nesc_unnamed4273 {

  ieee154_header_t header;
  ieee154_metadata_t metadata;
} ieee154_txcontrol_t;






#line 230
typedef struct ieee154_csma {
  uint8_t BE;
  uint8_t macMaxBE;
  uint8_t macMaxCsmaBackoffs;
  uint8_t NB;
} ieee154_csma_t;





#line 237
typedef struct __nesc_unnamed4274 {
  uint32_t transactionTime;
  ieee154_txframe_t *frame;
  ieee154_csma_t csma;
} ieee154_cap_frame_backup_t;




enum __nesc_unnamed4275 {
  CMD_FRAME_ASSOCIATION_REQUEST = 1, 
  CMD_FRAME_ASSOCIATION_RESPONSE = 2, 
  CMD_FRAME_DISASSOCIATION_NOTIFICATION = 3, 
  CMD_FRAME_DATA_REQUEST = 4, 
  CMD_FRAME_PAN_ID_CONFLICT_NOTIFICATION = 5, 
  CMD_FRAME_ORPHAN_NOTIFICATION = 6, 
  CMD_FRAME_BEACON_REQUEST = 7, 
  CMD_FRAME_COORDINATOR_REALIGNMENT = 8, 
  CMD_FRAME_GTS_REQUEST = 9
};

enum __nesc_unnamed4276 {

  BEACON_INDEX_SF_SPEC1 = 0, 
  BEACON_INDEX_SF_SPEC2 = 1, 
  BEACON_INDEX_GTS_SPEC = 2, 

  SF_SPEC1_BO_MASK = 0x0F, 
  SF_SPEC1_BO_OFFSET = 0, 
  SF_SPEC1_SO_MASK = 0xF0, 
  SF_SPEC1_SO_OFFSET = 4, 

  SF_SPEC2_FINAL_CAPSLOT_MASK = 0x0F, 
  SF_SPEC2_FINAL_CAPSLOT_OFFSET = 0, 
  SF_SPEC2_BATT_LIFE_EXT = 0x10, 
  SF_SPEC2_PAN_COORD = 0x40, 
  SF_SPEC2_ASSOCIATION_PERMIT = 0x80, 

  GTS_DESCRIPTOR_COUNT_MASK = 0x07, 
  GTS_DESCRIPTOR_COUNT_OFFSET = 0, 
  GTS_LENGTH_MASK = 0xF0, 
  GTS_LENGTH_OFFSET = 4, 
  GTS_SPEC_PERMIT = 0x80, 

  PENDING_ADDRESS_SHORT_MASK = 0x07, 
  PENDING_ADDRESS_EXT_MASK = 0x70
};

enum __nesc_unnamed4277 {

  IEEE154_aTurnaroundTime = 12, 

  FRAMECTL_LENGTH_MASK = 0x7F, 
  FRAMECTL_PROMISCUOUS = 0x80
};


enum __nesc_unnamed4278 {

  IEEE154_aNumSuperframeSlots = 16, 
  IEEE154_aMaxMPDUUnsecuredOverhead = 25, 
  IEEE154_aMinMPDUOverhead = 9, 
  IEEE154_aBaseSlotDuration = 60, 
  IEEE154_aBaseSuperframeDuration = IEEE154_aBaseSlotDuration * IEEE154_aNumSuperframeSlots, 
  IEEE154_aGTSDescPersistenceTime = 4, 
  IEEE154_aMaxBeaconOverhead = 75, 
  IEEE154_aMaxBeaconPayloadLength = IEEE154_aMaxPHYPacketSize - IEEE154_aMaxBeaconOverhead, 
  IEEE154_aMaxLostBeacons = 4, 
  IEEE154_aMaxMACSafePayloadSize = IEEE154_aMaxPHYPacketSize - IEEE154_aMaxMPDUUnsecuredOverhead, 
  IEEE154_aMaxMACPayloadSize = IEEE154_aMaxPHYPacketSize - IEEE154_aMinMPDUOverhead, 
  IEEE154_aMaxSIFSFrameSize = 18, 
  IEEE154_aMinCAPLength = 440, 
  IEEE154_aUnitBackoffPeriod = 20
};


typedef bool token_requested_t  ;
static inline token_requested_t rcombine(token_requested_t r1, token_requested_t r2);
# 20 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/platform_message.h"
#line 17
typedef union message_header {
  ieee154_header_t ieee154;
  serial_header_t serial;
} message_header_t;


#line 22
typedef union TOSRadioFooter {
} message_footer_t;



#line 25
typedef union TOSRadioMetadata {
  ieee154_metadata_t ieee154;
} message_metadata_t;
# 19 "/opt/tinyos/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[118];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.h"
enum __nesc_unnamed4279 {
  MSP430TIMER_CM_NONE = 0, 
  MSP430TIMER_CM_RISING = 1, 
  MSP430TIMER_CM_FALLING = 2, 
  MSP430TIMER_CM_BOTH = 3, 

  MSP430TIMER_STOP_MODE = 0, 
  MSP430TIMER_UP_MODE = 1, 
  MSP430TIMER_CONTINUOUS_MODE = 2, 
  MSP430TIMER_UPDOWN_MODE = 3, 

  MSP430TIMER_TACLK = 0, 
  MSP430TIMER_TBCLK = 0, 
  MSP430TIMER_ACLK = 1, 
  MSP430TIMER_SMCLK = 2, 
  MSP430TIMER_INCLK = 3, 

  MSP430TIMER_CLOCKDIV_1 = 0, 
  MSP430TIMER_CLOCKDIV_2 = 1, 
  MSP430TIMER_CLOCKDIV_4 = 2, 
  MSP430TIMER_CLOCKDIV_8 = 3
};
#line 75
#line 62
typedef struct __nesc_unnamed4280 {

  int ccifg : 1;
  int cov : 1;
  int out : 1;
  int cci : 1;
  int ccie : 1;
  int outmod : 3;
  int cap : 1;
  int clld : 2;
  int scs : 1;
  int ccis : 2;
  int cm : 2;
} msp430_compare_control_t;
#line 87
#line 77
typedef struct __nesc_unnamed4281 {

  int taifg : 1;
  int taie : 1;
  int taclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tassel : 2;
  int _unused1 : 6;
} msp430_timer_a_control_t;
#line 102
#line 89
typedef struct __nesc_unnamed4282 {

  int tbifg : 1;
  int tbie : 1;
  int tbclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tbssel : 2;
  int _unused1 : 1;
  int cntl : 2;
  int tbclgrp : 2;
  int _unused2 : 1;
} msp430_timer_b_control_t;
# 43 "/opt/tinyos/tos/types/Leds.h"
enum __nesc_unnamed4283 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 40 "/opt/tinyos/tos/types/IeeeEui64.h"
enum __nesc_unnamed4284 {
#line 40
  IEEE_EUI64_LENGTH = 8
};


#line 42
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 47 "/opt/tinyos/tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







#line 51
typedef struct __nesc_unnamed4285 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4286 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4287 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4288 {
  IEEE154_MIN_HDR_SZ = 6
};
#line 86
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3, 
  IEEE154_TYPE_MASK = 7
};

enum ieee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3, 
  IEEE154_ADDR_MASK = 3
};
# 118 "/opt/tinyos/tos/lib/mac/tkn154/TKN154_PIB.h"
#line 44
typedef struct ieee154_PIB {




  ieee154_macAssociationPermit_t macAssociationPermit;

  ieee154_macAutoRequest_t macAutoRequest;

  ieee154_macBattLifeExt_t macBattLifeExt;

  ieee154_macGTSPermit_t macGTSPermit;

  ieee154_macPromiscuousMode_t macPromiscuousMode;

  ieee154_macRxOnWhenIdle_t macRxOnWhenIdle;

  ieee154_macAssociatedPANCoord_t macAssociatedPANCoord;

  ieee154_macSecurityEnabled_t macSecurityEnabled;

  ieee154_macPanCoordinator_t macPanCoordinator;




  ieee154_phyCurrentChannel_t phyCurrentChannel;

  ieee154_phyTransmitPower_t phyTransmitPower;

  ieee154_phyCCAMode_t phyCCAMode;

  ieee154_phyCurrentPage_t phyCurrentPage;

  ieee154_macBattLifeExtPeriods_t macBattLifeExtPeriods;

  ieee154_macBeaconPayloadLength_t macBeaconPayloadLength;

  ieee154_macBeaconOrder_t macBeaconOrder;

  ieee154_macBSN_t macBSN;

  ieee154_macDSN_t macDSN;

  ieee154_macMaxCSMABackoffs_t macMaxCSMABackoffs;

  ieee154_macMinBE_t macMinBE;

  ieee154_macSuperframeOrder_t macSuperframeOrder;

  ieee154_macMaxBE_t macMaxBE;

  ieee154_macMaxFrameRetries_t macMaxFrameRetries;

  ieee154_macResponseWaitTime_t macResponseWaitTime;




  ieee154_macCoordShortAddress_t macCoordShortAddress;

  ieee154_macPANId_t macPANId;

  ieee154_macShortAddress_t macShortAddress;

  ieee154_macTransactionPersistenceTime_t macTransactionPersistenceTime;


  ieee154_macMaxFrameTotalWaitTime_t macMaxFrameTotalWaitTime;

  ieee154_macBeaconTxTime_t macBeaconTxTime;

  ieee154_macCoordExtendedAddress_t macCoordExtendedAddress;
} 
ieee154_PIB_t;
# 41 "/opt/tinyos/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4289 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4290 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4291 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4292 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 33 "/opt/tinyos/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 39 "/opt/tinyos/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 93
#line 87
typedef nx_struct security_header_t {
  unsigned char __nesc_filler2[1];


  nx_uint32_t frameCounter;
  nx_uint8_t keyID[1];
} __attribute__((packed)) security_header_t;
#line 113
#line 95
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;







  nxle_uint8_t network;


  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;





#line 118
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 143
#line 128
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_bool crc;
  nx_bool ack;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 





cc2420_metadata_t;





#line 146
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 179
enum __nesc_unnamed4293 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 118 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};

enum cc2420_security_enums {
  CC2420_NO_SEC = 0, 
  CC2420_CBC_MAC = 1, 
  CC2420_CTR = 2, 
  CC2420_CCM = 3, 
  NO_SEC = 0, 
  CBC_MAC_4 = 1, 
  CBC_MAC_8 = 2, 
  CBC_MAC_16 = 3, 
  CTR = 4, 
  CCM_4 = 5, 
  CCM_8 = 6, 
  CCM_16 = 7
};


enum __nesc_unnamed4294 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 56 "/opt/tinyos/tos/chips/msp430/usart/msp430usart.h"
#line 48
typedef enum __nesc_unnamed4295 {

  USART_NONE = 0, 
  USART_UART = 1, 
  USART_UART_TX = 2, 
  USART_UART_RX = 3, 
  USART_SPI = 4, 
  USART_I2C = 5
} msp430_usartmode_t;










#line 58
typedef struct __nesc_unnamed4296 {
  unsigned int swrst : 1;
  unsigned int mm : 1;
  unsigned int sync : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int spb : 1;
  unsigned int pev : 1;
  unsigned int pena : 1;
} __attribute((packed))  msp430_uctl_t;









#line 69
typedef struct __nesc_unnamed4297 {
  unsigned int txept : 1;
  unsigned int stc : 1;
  unsigned int txwake : 1;
  unsigned int urxse : 1;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int ckph : 1;
} __attribute((packed))  msp430_utctl_t;










#line 79
typedef struct __nesc_unnamed4298 {
  unsigned int rxerr : 1;
  unsigned int rxwake : 1;
  unsigned int urxwie : 1;
  unsigned int urxeie : 1;
  unsigned int brk : 1;
  unsigned int oe : 1;
  unsigned int pe : 1;
  unsigned int fe : 1;
} __attribute((packed))  msp430_urctl_t;
#line 116
#line 99
typedef struct __nesc_unnamed4299 {
  unsigned int ubr : 16;

  unsigned int  : 1;
  unsigned int mm : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int  : 3;

  unsigned int  : 1;
  unsigned int stc : 1;
  unsigned int  : 2;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int ckph : 1;
  unsigned int  : 0;
} msp430_spi_config_t;





#line 118
typedef struct __nesc_unnamed4300 {
  uint16_t ubr;
  uint8_t uctl;
  uint8_t utctl;
} msp430_spi_registers_t;




#line 124
typedef union __nesc_unnamed4301 {
  msp430_spi_config_t spiConfig;
  msp430_spi_registers_t spiRegisters;
} msp430_spi_union_config_t;

msp430_spi_union_config_t msp430_spi_default_config = { 
{ 
.ubr = 0x0002, 
.ssel = 0x02, 
.clen = 1, 
.listen = 0, 
.mm = 1, 
.ckph = 1, 
.ckpl = 0, 
.stc = 1 } };
#line 169
#line 150
typedef enum __nesc_unnamed4302 {

  UBR_32KHZ_1200 = 0x001B, UMCTL_32KHZ_1200 = 0x94, 
  UBR_32KHZ_1800 = 0x0012, UMCTL_32KHZ_1800 = 0x84, 
  UBR_32KHZ_2400 = 0x000D, UMCTL_32KHZ_2400 = 0x6D, 
  UBR_32KHZ_4800 = 0x0006, UMCTL_32KHZ_4800 = 0x77, 
  UBR_32KHZ_9600 = 0x0003, UMCTL_32KHZ_9600 = 0x29, 

  UBR_1MHZ_1200 = 0x0369, UMCTL_1MHZ_1200 = 0x7B, 
  UBR_1MHZ_1800 = 0x0246, UMCTL_1MHZ_1800 = 0x55, 
  UBR_1MHZ_2400 = 0x01B4, UMCTL_1MHZ_2400 = 0xDF, 
  UBR_1MHZ_4800 = 0x00DA, UMCTL_1MHZ_4800 = 0xAA, 
  UBR_1MHZ_9600 = 0x006D, UMCTL_1MHZ_9600 = 0x44, 
  UBR_1MHZ_19200 = 0x0036, UMCTL_1MHZ_19200 = 0xB5, 
  UBR_1MHZ_38400 = 0x001B, UMCTL_1MHZ_38400 = 0x94, 
  UBR_1MHZ_57600 = 0x0012, UMCTL_1MHZ_57600 = 0x84, 
  UBR_1MHZ_76800 = 0x000D, UMCTL_1MHZ_76800 = 0x6D, 
  UBR_1MHZ_115200 = 0x0009, UMCTL_1MHZ_115200 = 0x10, 
  UBR_1MHZ_230400 = 0x0004, UMCTL_1MHZ_230400 = 0x55
} msp430_uart_rate_t;
#line 200
#line 171
typedef struct __nesc_unnamed4303 {
  unsigned int ubr : 16;

  unsigned int umctl : 8;

  unsigned int  : 1;
  unsigned int mm : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int spb : 1;
  unsigned int pev : 1;
  unsigned int pena : 1;
  unsigned int  : 0;

  unsigned int  : 3;
  unsigned int urxse : 1;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int  : 1;

  unsigned int  : 2;
  unsigned int urxwie : 1;
  unsigned int urxeie : 1;
  unsigned int  : 4;
  unsigned int  : 0;

  unsigned int utxe : 1;
  unsigned int urxe : 1;
} msp430_uart_config_t;








#line 202
typedef struct __nesc_unnamed4304 {
  uint16_t ubr;
  uint8_t umctl;
  uint8_t uctl;
  uint8_t utctl;
  uint8_t urctl;
  uint8_t ume;
} msp430_uart_registers_t;




#line 211
typedef union __nesc_unnamed4305 {
  msp430_uart_config_t uartConfig;
  msp430_uart_registers_t uartRegisters;
} msp430_uart_union_config_t;

msp430_uart_union_config_t msp430_uart_default_config = { 
{ 
.utxe = 1, 
.urxe = 1, 
.ubr = UBR_1MHZ_57600, 
.umctl = UMCTL_1MHZ_57600, 
.ssel = 0x02, 
.pena = 0, 
.pev = 0, 
.spb = 0, 
.clen = 1, 
.listen = 0, 
.mm = 0, 
.ckpl = 0, 
.urxse = 0, 
.urxeie = 1, 
.urxwie = 0, 
.utxe = 1, 
.urxe = 1 } };
#line 248
#line 240
typedef struct __nesc_unnamed4306 {
  unsigned int i2cstt : 1;
  unsigned int i2cstp : 1;
  unsigned int i2cstb : 1;
  unsigned int i2cctrx : 1;
  unsigned int i2cssel : 2;
  unsigned int i2ccrm : 1;
  unsigned int i2cword : 1;
} __attribute((packed))  msp430_i2ctctl_t;
#line 276
#line 253
typedef struct __nesc_unnamed4307 {
  unsigned int  : 1;
  unsigned int mst : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int xa : 1;
  unsigned int  : 1;
  unsigned int txdmaen : 1;
  unsigned int rxdmaen : 1;

  unsigned int  : 4;
  unsigned int i2cssel : 2;
  unsigned int i2crm : 1;
  unsigned int i2cword : 1;

  unsigned int i2cpsc : 8;

  unsigned int i2csclh : 8;

  unsigned int i2cscll : 8;

  unsigned int i2coa : 10;
  unsigned int  : 6;
} msp430_i2c_config_t;








#line 278
typedef struct __nesc_unnamed4308 {
  uint8_t uctl;
  uint8_t i2ctctl;
  uint8_t i2cpsc;
  uint8_t i2csclh;
  uint8_t i2cscll;
  uint16_t i2coa;
} msp430_i2c_registers_t;




#line 287
typedef union __nesc_unnamed4309 {
  msp430_i2c_config_t i2cConfig;
  msp430_i2c_registers_t i2cRegisters;
} msp430_i2c_union_config_t;
#line 309
typedef uint8_t uart_speed_t;
typedef uint8_t uart_parity_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4310 {
  TOS_UART_1200 = 0, 
  TOS_UART_1800 = 1, 
  TOS_UART_2400 = 2, 
  TOS_UART_4800 = 3, 
  TOS_UART_9600 = 4, 
  TOS_UART_19200 = 5, 
  TOS_UART_38400 = 6, 
  TOS_UART_57600 = 7, 
  TOS_UART_76800 = 8, 
  TOS_UART_115200 = 9, 
  TOS_UART_230400 = 10
};

enum __nesc_unnamed4311 {
  TOS_UART_OFF, 
  TOS_UART_RONLY, 
  TOS_UART_TONLY, 
  TOS_UART_DUPLEX
};

enum __nesc_unnamed4312 {
  TOS_UART_PARITY_NONE, 
  TOS_UART_PARITY_EVEN, 
  TOS_UART_PARITY_ODD
};
# 91 "/opt/tinyos/tos/system/crc.h"
static uint16_t crcByte(uint16_t crc, uint8_t b);
typedef message_t SnifferC__Pool__t;
typedef message_t *SnifferC__Queue__t;
typedef ieee154_txframe_t DataP__TxFramePool__t;
typedef uint64_t DataP__LocalExtendedAddress__val_t;
typedef ieee154_macSuperframeOrder_t PibP__SetMacSuperframeOrder__val_t;
typedef T62500hz PibP__LocalTime__precision_tag;
typedef ieee154_macPanCoordinator_t PibP__SetMacPanCoordinator__val_t;
typedef bool PibP__PromiscuousModeGet__val_t;
typedef uint64_t PibP__GetLocalExtendedAddress__val_t;
typedef ieee154_macBeaconTxTime_t PibP__SetMacBeaconTxTime__val_t;
typedef token_requested_t PibP__IsRadioTokenRequested__data_type;
typedef const void *PibP__PIBUpdate__val_t;
typedef bool RadioControlImplP__RadioPromiscuousMode__val_t;
typedef ieee154_macSuperframeOrder_t DispatchUnslottedCsmaP__SetMacSuperframeOrder__val_t;
typedef T62500hz DispatchUnslottedCsmaP__IndirectTxWaitTimer__precision_tag;
typedef bool DispatchUnslottedCsmaP__WasRxEnabled__val_t;
typedef ieee154_macPanCoordinator_t DispatchUnslottedCsmaP__SetMacPanCoordinator__val_t;
typedef ieee154_txframe_t *DispatchUnslottedCsmaP__GetIndirectTxFrame__val_t;
typedef bool DispatchUnslottedCsmaP__RxEnableStateChange__val_t;
typedef token_requested_t DispatchUnslottedCsmaP__IsRadioTokenRequested__data_type;
typedef const void *DispatchUnslottedCsmaP__PIBUpdateMacRxOnWhenIdle__val_t;
typedef bool DispatchUnslottedCsmaP__IsRxEnableActive__data_type;
typedef ieee154_txframe_t */*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__t;
typedef T62500hz IndirectTxP__IndirectTxTimeout__precision_tag;
typedef ieee154_txframe_t *IndirectTxP__GetIndirectTxFrame__val_t;
typedef bool IndirectTxP__PendingAddrSpecUpdated__val_t;
typedef ieee154_txframe_t PollP__TxFramePool__t;
typedef ieee154_txcontrol_t PollP__TxControlPool__t;
typedef uint64_t PollP__LocalExtendedAddress__val_t;
typedef ieee154_txframe_t NoScanP__TxFramePool__t;
typedef T62500hz NoScanP__ScanTimer__precision_tag;
typedef ieee154_txcontrol_t NoScanP__TxControlPool__t;
typedef token_requested_t NoScanP__IsRadioTokenRequested__data_type;
typedef ieee154_txframe_t NoAssociateP__TxFramePool__t;
typedef ieee154_txcontrol_t NoAssociateP__TxControlPool__t;
typedef uint64_t NoAssociateP__LocalExtendedAddress__val_t;
typedef T62500hz NoAssociateP__ResponseTimeout__precision_tag;
typedef ieee154_txframe_t NoDisassociateP__TxFramePool__t;
typedef ieee154_txcontrol_t NoDisassociateP__TxControlPool__t;
typedef uint64_t NoDisassociateP__LocalExtendedAddress__val_t;
typedef ieee154_macPanCoordinator_t NoRxEnableP__IsMacPanCoordinator__val_t;
typedef bool NoRxEnableP__IsSendingBeacons__data_type;
typedef bool NoRxEnableP__IsTrackingBeacons__data_type;
typedef bool NoRxEnableP__WasRxEnabled__val_t;
typedef bool NoRxEnableP__RxEnableStateChange__val_t;
typedef T62500hz NoRxEnableP__RxEnableTimer__precision_tag;
typedef bool NoRxEnableP__IsRxEnableActive__data_type;
typedef bool PromiscuousModeP__PromiscuousModeGet__val_t;
typedef token_requested_t PromiscuousModeP__IsRadioTokenRequested__data_type;
typedef bool PromiscuousModeP__RadioPromiscuousMode__val_t;
typedef uint64_t NoCoordRealignmentP__LocalExtendedAddress__val_t;
typedef ieee154_txframe_t NoCoordRealignmentP__TxFramePool__t;
typedef ieee154_txcontrol_t NoCoordRealignmentP__TxControlPool__t;
typedef ieee154_txframe_t *NoCoordRealignmentP__GetSetRealignmentFrame__val_t;
typedef ieee154_txframe_t /*TKN154NonBeaconEnabledP.TxFramePoolP*/PoolC__0__pool_t;
typedef /*TKN154NonBeaconEnabledP.TxFramePoolP*/PoolC__0__pool_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t;
typedef /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__t;
typedef ieee154_txcontrol_t /*TKN154NonBeaconEnabledP.TxControlPoolP*/PoolC__1__pool_t;
typedef /*TKN154NonBeaconEnabledP.TxControlPoolP*/PoolC__1__pool_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t;
typedef /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__t;
typedef ieee154_txframe_t */*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue_t;
typedef /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__t;
typedef T62500hz CC2420TKN154P__LocalTime__precision_tag;
typedef bool CC2420TKN154P__CCA__data_type;
typedef bool CC2420TKN154P__RadioPromiscuousMode__val_t;
typedef const void *CC2420TKN154P__PIBUpdate__val_t;
typedef T62500hz CC2420ControlP__StartupAlarm__precision_tag;
typedef uint32_t CC2420ControlP__StartupAlarm__size_type;
enum /*CC2420ControlTransmitC.Spi*/CC2420SpiC__0____nesc_unnamed4313 {
  CC2420SpiC__0__CLIENT_ID = 0U
};
enum /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0____nesc_unnamed4314 {
  Msp430Spi0C__0__CLIENT_ID = 0U
};
enum /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0____nesc_unnamed4315 {
  Msp430Usart0C__0__CLIENT_ID = 0U
};
typedef T62500hz CC2420TransmitP__BackoffAlarm__precision_tag;
typedef uint32_t CC2420TransmitP__BackoffAlarm__size_type;
enum /*CC2420ReceiveC.Spi*/CC2420SpiC__1____nesc_unnamed4316 {
  CC2420SpiC__1__CLIENT_ID = 1U
};
enum /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Timer*/Msp430Timer32khzC__0____nesc_unnamed4317 {
  Msp430Timer32khzC__0__ALARM_ID = 0U
};
typedef T32khz /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__frequency_tag;
typedef /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__frequency_tag /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__precision_tag;
typedef uint16_t /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type;
typedef T32khz /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag;
typedef /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__precision_tag;
typedef uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__from_precision_tag /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__size_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__to_precision_tag /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__size_type;
typedef T32khz /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_precision_tag;
typedef uint32_t /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type;
typedef T32khz /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__from_precision_tag;
typedef uint16_t /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type;
typedef /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_precision_tag /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type;
typedef /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__from_precision_tag /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_precision_tag /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__precision_tag;
typedef /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__size_type;
typedef T62500hz /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__precision_tag;
typedef uint32_t /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__size_type;
typedef T32khz /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__precision_tag;
typedef uint32_t /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__size_type;
typedef T62500hz Alarm32khzTo62500hzTransformC__Alarm__precision_tag;
typedef uint32_t Alarm32khzTo62500hzTransformC__Alarm__size_type;
typedef T32khz Alarm32khzTo62500hzTransformC__AlarmFrom__precision_tag;
typedef uint32_t Alarm32khzTo62500hzTransformC__AlarmFrom__size_type;
enum /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Timer*/Msp430Timer32khzC__1____nesc_unnamed4318 {
  Msp430Timer32khzC__1__ALARM_ID = 1U
};
typedef T32khz /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__frequency_tag;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__frequency_tag /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__precision_tag;
typedef uint16_t /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type;
typedef T32khz /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_precision_tag;
typedef uint32_t /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type;
typedef T32khz /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__from_precision_tag;
typedef uint16_t /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_precision_tag /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__precision_tag;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__from_precision_tag /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__precision_tag;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_precision_tag /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__precision_tag;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__size_type;
typedef T32khz /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__precision_tag;
typedef uint32_t /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type;
typedef /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__precision_tag /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__precision_tag;
typedef /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type;
typedef /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__precision_tag /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__precision_tag;
typedef /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type;
enum /*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0____nesc_unnamed4319 {
  Alarm62500hz32VirtualizedC__0__CLIENT_ID = 0U
};
enum /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Timer*/Msp430Timer32khzC__2____nesc_unnamed4320 {
  Msp430Timer32khzC__2__ALARM_ID = 2U
};
typedef T32khz /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__frequency_tag;
typedef /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__frequency_tag /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__precision_tag;
typedef uint16_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__size_type;
typedef T32khz /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_precision_tag;
typedef uint32_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type;
typedef T32khz /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__from_precision_tag;
typedef uint16_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__from_size_type;
typedef /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_precision_tag /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__precision_tag;
typedef /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__size_type;
typedef /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__from_precision_tag /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__precision_tag;
typedef /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__from_size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__size_type;
typedef /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_precision_tag /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__precision_tag;
typedef /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__size_type;
typedef T62500hz /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__precision_tag;
typedef uint32_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__size_type;
typedef T32khz /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__precision_tag;
typedef uint32_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__size_type;
enum /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1____nesc_unnamed4321 {
  Alarm62500hz32VirtualizedC__1__CLIENT_ID = 1U
};
typedef T62500hz LocalTime62500hzP__LocalTime__precision_tag;
typedef T62500hz LocalTime62500hzP__Alarm__precision_tag;
typedef uint32_t LocalTime62500hzP__Alarm__size_type;
typedef bool TKN154TimingP__CCA__data_type;
typedef T62500hz TKN154TimingP__SymbolAlarm__precision_tag;
typedef uint32_t TKN154TimingP__SymbolAlarm__size_type;
enum /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2____nesc_unnamed4322 {
  Alarm62500hz32VirtualizedC__2__CLIENT_ID = 2U
};
typedef T62500hz /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef T62500hz /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef uint16_t RandomMlcgC__SeedInit__parameter;
enum /*PlatformSerialC.UartC*/Msp430Uart1C__0____nesc_unnamed4323 {
  Msp430Uart1C__0__CLIENT_ID = 0U
};
typedef T32khz /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__precision_tag;
typedef uint16_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__size_type;
enum /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0____nesc_unnamed4324 {
  Msp430Usart1C__0__CLIENT_ID = 0U
};
typedef message_t */*SnifferAppC.QueueC*/QueueC__1__queue_t;
typedef /*SnifferAppC.QueueC*/QueueC__1__queue_t /*SnifferAppC.QueueC*/QueueC__1__Queue__t;
typedef message_t /*SnifferAppC.PoolC*/PoolC__2__pool_t;
typedef /*SnifferAppC.PoolC*/PoolC__2__pool_t /*SnifferAppC.PoolC.PoolP*/PoolP__2__pool_t;
typedef /*SnifferAppC.PoolC.PoolP*/PoolP__2__pool_t /*SnifferAppC.PoolC.PoolP*/PoolP__2__Pool__t;
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformC__Init__init(void );
# 46 "/opt/tinyos/tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void );
#line 43
static void Msp430ClockP__Msp430ClockInit__default__initTimerB(void );



static void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void );
#line 42
static void Msp430ClockP__Msp430ClockInit__default__initTimerA(void );





static void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void );
#line 45
static void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void );
#line 40
static void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void );
static void Msp430ClockP__Msp430ClockInit__default__initClocks(void );
# 62 "/opt/tinyos/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t Msp430ClockP__Init__init(void );
# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(
# 51 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x4067c4b0);
# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(
# 51 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x4067c4b0);
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
static bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
# 44 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );
# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void );
# 48 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 44 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );
# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void );
# 48 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void );
# 44 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void );
# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void );
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void );
# 48 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void );
# 44 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void );
#line 47
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );
# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void );
# 41 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t delta);
# 48 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void );
# 44 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );
#line 68
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void );
# 55 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm);
#line 42
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void );
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void );
# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void );
# 48 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
# 44 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void );
#line 47
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void );
# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );
# 41 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t delta);
# 48 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
# 44 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__enableEvents(void );
#line 47
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__clearPendingInterrupt(void );
# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void );
# 41 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEventFromNow(uint16_t delta);
# 48 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void );
# 44 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void );
# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void );
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void );
# 48 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void );
# 44 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void );
# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void );
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void );
# 48 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void );
# 44 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void );
# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void );
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void );
# 48 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void );
# 76 "/opt/tinyos/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/opt/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x4059ab40);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/opt/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x4059ab40);
# 57 "/opt/tinyos/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 60 "/opt/tinyos/tos/interfaces/Boot.nc"
static void SnifferC__Boot__booted(void );
# 113 "/opt/tinyos/tos/interfaces/SplitControl.nc"
static void SnifferC__SerialControl__startDone(error_t error);
#line 138
static void SnifferC__SerialControl__stopDone(error_t error);
#line 113
static void SnifferC__PromiscuousMode__startDone(error_t error);
#line 138
static void SnifferC__PromiscuousMode__stopDone(error_t error);
# 100 "/opt/tinyos/tos/interfaces/Send.nc"
static void SnifferC__SerialSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void SnifferC__serialSendTask__runTask(void );
# 91 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MCPS/MCPS_DATA.nc"
static void SnifferC__MCPS_DATA__confirm(
message_t *frame, 
uint8_t msduHandle, 
ieee154_status_t status, 
uint32_t Timestamp);









static message_t *SnifferC__MCPS_DATA__indication(message_t *frame);
# 31 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SnifferC__SerialPacketInfo__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SnifferC__SerialPacketInfo__offset(void );







static uint8_t SnifferC__SerialPacketInfo__dataLinkLength(message_t *msg, uint8_t upperLen);
# 78 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RESET.nc"
static void SnifferC__MLME_RESET__confirm(
ieee154_status_t status);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 83 "/opt/tinyos/tos/interfaces/Leds.nc"
static void LedsP__Leds__led1Toggle(void );
#line 56
static void LedsP__Leds__led0On(void );
#line 89
static void LedsP__Leds__led2On(void );
# 73 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw(void );






static bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw(void );
#line 78
static void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput(void );
#line 73
static bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw(void );
#line 99
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void );
#line 99
static void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void );
#line 99
static void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput(void );
#line 73
static bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get(void );
#line 99
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw(void );
#line 92
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc(void );
#line 85
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void );




static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void );
#line 85
static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set(void );




static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr(void );
#line 85
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set(void );




static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr(void );
#line 99
static void /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc(void );
#line 99
static void /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc(void );
#line 99
static void /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc(void );
#line 85
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void );




static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__clr(void );




static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__toggle(void );
#line 85
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void );
#line 85
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void );




static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__clr(void );
# 46 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr(void );
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__toggle(void );



static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );





static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void );
# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void DataP__DeviceCapTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *DataP__DeviceCapRx__received(message_t *frame);
# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void DataP__IndirectTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 51
static void DataP__CoordCapTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 37 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/Purge.nc"
static void DataP__PurgeDirect__purgeDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 241 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
static uint8_t PibP__Frame__getHeaderLength(message_t *frame);
#line 139
static error_t PibP__Frame__setAddressingFields(message_t *frame, 
uint8_t SrcAddrMode, 
uint8_t DstAddrMode, 
uint16_t DstPANID, 
ieee154_address_t *DstAddr, 
ieee154_security_t *security);







static void *PibP__Frame__getPayload(message_t *frame);
#line 69
static error_t PibP__Frame__getSrcAddr(message_t *frame, ieee154_address_t *address);
#line 55
static uint8_t PibP__Frame__getSrcAddrMode(message_t *frame);
#line 81
static error_t PibP__Frame__getSrcPANId(message_t *frame, uint16_t *PANID);









static uint8_t PibP__Frame__getDstAddrMode(message_t *frame);
#line 233
static void *PibP__Frame__getHeader(message_t *frame);
#line 160
static uint8_t PibP__Frame__getPayloadLength(message_t *frame);
# 47 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
static bool PibP__TimeCalc__hasExpired(uint32_t t0, uint32_t dt);
#line 40
static uint32_t PibP__TimeCalc__timeElapsed(uint32_t t0, uint32_t t1);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t PibP__LocalInit__init(void );
# 117 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_macMinBE_t PibP__MLME_GET__macMinBE(void );
#line 93
static ieee154_macBeaconOrder_t PibP__MLME_GET__macBeaconOrder(void );
#line 147
static ieee154_macMaxFrameRetries_t PibP__MLME_GET__macMaxFrameRetries(void );
#line 84
static ieee154_macBattLifeExt_t PibP__MLME_GET__macBattLifeExt(void );
#line 120
static ieee154_macPANId_t PibP__MLME_GET__macPANId(void );
#line 51
static ieee154_phyCurrentChannel_t PibP__MLME_GET__phyCurrentChannel(void );
#line 66
static ieee154_phyMaxFrameDuration_t PibP__MLME_GET__phyMaxFrameDuration(void );
#line 144
static ieee154_macMaxFrameTotalWaitTime_t PibP__MLME_GET__macMaxFrameTotalWaitTime(void );
#line 135
static ieee154_macTransactionPersistenceTime_t PibP__MLME_GET__macTransactionPersistenceTime(void );
#line 129
static ieee154_macShortAddress_t PibP__MLME_GET__macShortAddress(void );
#line 141
static ieee154_macMaxBE_t PibP__MLME_GET__macMaxBE(void );
#line 114
static ieee154_macMaxCSMABackoffs_t PibP__MLME_GET__macMaxCSMABackoffs(void );
#line 108
static ieee154_macDSN_t PibP__MLME_GET__macDSN(void );
#line 99
static ieee154_macBSN_t PibP__MLME_GET__macBSN(void );
# 113 "/opt/tinyos/tos/interfaces/SplitControl.nc"
static void PibP__RadioControl__startDone(error_t error);
#line 138
static void PibP__RadioControl__stopDone(error_t error);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void PibP__resetSpinTask__runTask(void );
# 98 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void PibP__RadioToken__granted(void );
# 55 "/opt/tinyos/tos/interfaces/Get.nc"
static PibP__GetLocalExtendedAddress__val_t PibP__GetLocalExtendedAddress__get(void );
# 53 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void PibP__RadioOff__offDone(void );
# 51 "/opt/tinyos/tos/interfaces/GetNow.nc"
static PibP__IsRadioTokenRequested__data_type PibP__IsRadioTokenRequested__getNow(void );
# 54 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
static ieee154_status_t PibP__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value);
#line 118
static ieee154_status_t PibP__MLME_SET__macDSN(ieee154_macDSN_t value);
#line 103
static ieee154_status_t PibP__MLME_SET__macBSN(ieee154_macBSN_t value);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void PibP__radioControlStopTask__runTask(void );
# 74 "/opt/tinyos/tos/interfaces/Notify.nc"
static void PibP__PIBUpdate__default__notify(
# 59 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
uint8_t arg_0x409d7b80, 
# 74 "/opt/tinyos/tos/interfaces/Notify.nc"
PibP__PIBUpdate__val_t val);
# 37 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
static uint8_t PibP__FrameUtility__writeHeader(
uint8_t *mhr, 
uint8_t DstAddrMode, 
uint16_t DstPANId, 
ieee154_address_t *DstAddr, 
uint8_t SrcAddrMode, 
uint16_t SrcPANId, 
const ieee154_address_t *SrcAddr, 
bool PANIDCompression);


static error_t PibP__FrameUtility__getMHRLength(uint8_t fcf1, uint8_t fcf2, uint8_t *len);
#line 64
static void PibP__FrameUtility__convertToNative(uint64_t *destNative, const uint8_t *srcLE);
#line 55
static void PibP__FrameUtility__copyLocalExtendedAddressLE(uint8_t *destLE);





static void PibP__FrameUtility__convertToLE(uint8_t *destLE, const uint64_t *srcNative);
# 69 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RESET.nc"
static ieee154_status_t PibP__MLME_RESET__request(
bool SetDefaultPIB);
# 83 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static void RadioControlImplP__MacTx__default__transmitDone(
# 43 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae80c8, 
# 83 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
ieee154_txframe_t *frame, error_t result);
# 56 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static error_t RadioControlImplP__MacRx__enableRx(
# 42 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40aec748, 
# 56 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
uint32_t t0, uint32_t dt);








static void RadioControlImplP__MacRx__default__enableRxDone(
# 42 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40aec748);
# 73 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static bool RadioControlImplP__MacRx__isReceiving(
# 42 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40aec748);
# 84 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static message_t *RadioControlImplP__MacRx__default__received(
# 42 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40aec748, 
# 84 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
message_t *frame);
# 83 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static void RadioControlImplP__PhyTx__transmitDone(ieee154_txframe_t *frame, error_t result);
# 89 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
static void RadioControlImplP__PhyUnslottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result);
#line 62
static error_t RadioControlImplP__UnslottedCsmaCa__transmit(
# 45 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae6170, 
# 62 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
ieee154_txframe_t *frame, ieee154_csma_t *csma);
#line 89
static void RadioControlImplP__UnslottedCsmaCa__default__transmitDone(
# 45 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae6170, 
# 89 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result);
# 53 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void RadioControlImplP__PhyRadioOff__offDone(void );
#line 53
static void RadioControlImplP__MacRadioOff__default__offDone(
# 46 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae6958);
# 47 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static error_t RadioControlImplP__MacRadioOff__off(
# 46 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae6958);
# 60 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static bool RadioControlImplP__MacRadioOff__isOff(
# 46 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae6958);
# 65 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void RadioControlImplP__PhyRx__enableRxDone(void );
#line 84
static message_t *RadioControlImplP__PhyRx__received(message_t *frame);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__Init__init(void );
# 79 "/opt/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
# 53 "/opt/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceRequested__default__requested(
# 53 "/opt/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b40b08);
# 65 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__unconfigure(
# 57 "/opt/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b3f7a8);
# 59 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__configure(
# 57 "/opt/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b3f7a8);
# 98 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__default__granted(
# 52 "/opt/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b2be70);
# 137 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__release(
# 52 "/opt/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b2be70);
# 145 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static bool /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__isOwner(
# 52 "/opt/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b2be70);
# 84 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__request(
# 52 "/opt/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b2be70);
# 98 "/opt/tinyos/tos/interfaces/ArbiterInfo.nc"
static uint8_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ArbiterInfo__userId(void );
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__runTask(void );
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t DispatchUnslottedCsmaP__FrameTx__transmit(ieee154_txframe_t *txFrame);
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
static message_t *DispatchUnslottedCsmaP__FrameExtracted__default__received(
# 57 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
uint8_t arg_0x40b67488, 
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
message_t *rxFrame, ieee154_txframe_t *txFrame);
# 65 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void DispatchUnslottedCsmaP__RadioRx__enableRxDone(void );
#line 84
static message_t *DispatchUnslottedCsmaP__RadioRx__received(message_t *frame);
# 53 "/opt/tinyos/tos/interfaces/ResourceRequested.nc"
static void DispatchUnslottedCsmaP__RadioTokenRequested__requested(void );
# 83 "/opt/tinyos/tos/lib/timer/Timer.nc"
static void DispatchUnslottedCsmaP__IndirectTxWaitTimer__fired(void );
# 111 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_START.nc"
static void DispatchUnslottedCsmaP__MLME_START__default__confirm(
ieee154_status_t status);
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *DispatchUnslottedCsmaP__FrameRx__default__received(
# 56 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
uint8_t arg_0x40b43be8, 
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
message_t *frame);
# 98 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void DispatchUnslottedCsmaP__RadioToken__granted(void );
# 74 "/opt/tinyos/tos/interfaces/Notify.nc"
static void DispatchUnslottedCsmaP__RxEnableStateChange__notify(DispatchUnslottedCsmaP__RxEnableStateChange__val_t val);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void DispatchUnslottedCsmaP__wasRxEnabledTask__runTask(void );
# 53 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void DispatchUnslottedCsmaP__RadioOff__offDone(void );
# 89 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
static void DispatchUnslottedCsmaP__UnslottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void DispatchUnslottedCsmaP__startIndirectTxTimerTask__runTask(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t DispatchUnslottedCsmaP__Reset__init(void );
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void DispatchUnslottedCsmaP__signalTxDoneTask__runTask(void );
# 74 "/opt/tinyos/tos/interfaces/Notify.nc"
static void DispatchUnslottedCsmaP__PIBUpdateMacRxOnWhenIdle__notify(DispatchUnslottedCsmaP__PIBUpdateMacRxOnWhenIdle__val_t val);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void DispatchUnslottedCsmaP__signalStartConfirmTask__runTask(void );
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmit(
# 40 "/opt/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
uint8_t arg_0x40bcdaf8, 
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
ieee154_txframe_t *txFrame);







static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__default__transmitDone(
# 40 "/opt/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
uint8_t arg_0x40bcdaf8, 
# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
ieee154_txframe_t *txFrame, ieee154_status_t status);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask__runTask(void );
# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTxCsma__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Reset__init(void );
# 83 "/opt/tinyos/tos/lib/timer/Timer.nc"
static void IndirectTxP__IndirectTxTimeout__fired(void );
# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void IndirectTxP__FrameTx__default__transmitDone(
# 42 "/opt/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
uint8_t arg_0x40bd13b0, 
# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
ieee154_txframe_t *txFrame, ieee154_status_t status);
# 55 "/opt/tinyos/tos/interfaces/Get.nc"
static IndirectTxP__GetIndirectTxFrame__val_t IndirectTxP__GetIndirectTxFrame__get(void );
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void IndirectTxP__tryCoordCapTxTask__runTask(void );
# 74 "/opt/tinyos/tos/interfaces/Notify.nc"
static void IndirectTxP__PendingAddrSpecUpdated__default__notify(IndirectTxP__PendingAddrSpecUpdated__val_t val);
# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void IndirectTxP__CoordCapTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t IndirectTxP__Reset__init(void );
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *IndirectTxP__DataRequestRx__received(message_t *frame);
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
static message_t *PollP__DataExtracted__received(message_t *rxFrame, ieee154_txframe_t *txFrame);
# 52 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/DataRequest.nc"
static void PollP__DataRequest__default__pollDone(
# 46 "/opt/tinyos/tos/lib/mac/tkn154/PollP.nc"
uint8_t arg_0x40c49248);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t PollP__Init__init(void );
# 73 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_POLL.nc"
static void PollP__MLME_POLL__default__confirm(
ieee154_status_t status);
# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void PollP__PollTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 83 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static void NoScanP__RadioTx__transmitDone(ieee154_txframe_t *frame, error_t result);
# 65 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void NoScanP__RadioRx__enableRxDone(void );
#line 84
static message_t *NoScanP__RadioRx__received(message_t *frame);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t NoScanP__Init__init(void );
# 98 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void NoScanP__RadioToken__granted(void );
# 83 "/opt/tinyos/tos/lib/timer/Timer.nc"
static void NoScanP__ScanTimer__fired(void );
# 53 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void NoScanP__RadioOff__offDone(void );
# 51 "/opt/tinyos/tos/interfaces/GetNow.nc"
static NoScanP__IsRadioTokenRequested__data_type NoScanP__IsRadioTokenRequested__getNow(void );
# 61 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/EnergyDetection.nc"
static void NoScanP__EnergyDetection__done(error_t status, int8_t EnergyLevel);
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *NoBeaconRequestRxP__BeaconRequestRx__received(message_t *frame);
# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void NoBeaconRequestRxP__BeaconRequestResponseTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t NoBeaconRequestRxP__Reset__init(void );
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
static message_t *NoAssociateP__AssociationResponseExtracted__received(message_t *rxFrame, ieee154_txframe_t *txFrame);
# 52 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/DataRequest.nc"
static void NoAssociateP__DataRequest__pollDone(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t NoAssociateP__Init__init(void );
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *NoAssociateP__AssociationRequestRx__received(message_t *frame);
# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void NoAssociateP__AssociationResponseTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 83 "/opt/tinyos/tos/lib/timer/Timer.nc"
static void NoAssociateP__ResponseTimeout__fired(void );
# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void NoAssociateP__AssociationRequestTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 51
static void NoDisassociateP__DisassociationToCoord__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 51
static void NoDisassociateP__DisassociationDirectTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t NoDisassociateP__Init__init(void );
# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void NoDisassociateP__DisassociationIndirectTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
static message_t *NoDisassociateP__DisassociationExtractedFromCoord__received(message_t *rxFrame, ieee154_txframe_t *txFrame);
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *NoDisassociateP__DisassociationRxFromDevice__received(message_t *frame);
# 74 "/opt/tinyos/tos/interfaces/Notify.nc"
static void NoRxEnableP__WasRxEnabled__notify(NoRxEnableP__WasRxEnabled__val_t val);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t NoRxEnableP__Init__init(void );
# 83 "/opt/tinyos/tos/lib/timer/Timer.nc"
static void NoRxEnableP__RxEnableTimer__fired(void );
# 51 "/opt/tinyos/tos/interfaces/GetNow.nc"
static NoRxEnableP__IsRxEnableActive__data_type NoRxEnableP__IsRxEnableActive__getNow(void );
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void PromiscuousModeP__signalStartDoneTask__runTask(void );
# 104 "/opt/tinyos/tos/interfaces/SplitControl.nc"
static error_t PromiscuousModeP__PromiscuousMode__start(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t PromiscuousModeP__Init__init(void );
# 55 "/opt/tinyos/tos/interfaces/Get.nc"
static PromiscuousModeP__PromiscuousModeGet__val_t PromiscuousModeP__PromiscuousModeGet__get(void );
# 98 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void PromiscuousModeP__RadioToken__granted(void );
# 53 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void PromiscuousModeP__RadioOff__offDone(void );
# 51 "/opt/tinyos/tos/interfaces/GetNow.nc"
static PromiscuousModeP__IsRadioTokenRequested__data_type PromiscuousModeP__IsRadioTokenRequested__getNow(void );
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void PromiscuousModeP__continueStopTask__runTask(void );
# 65 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void PromiscuousModeP__PromiscuousRx__enableRxDone(void );
#line 84
static message_t *PromiscuousModeP__PromiscuousRx__received(message_t *frame);
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *NoCoordRealignmentP__OrphanNotificationRx__received(message_t *frame);
# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void NoCoordRealignmentP__CoordRealignmentTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t NoCoordRealignmentP__Init__init(void );
# 89 "/opt/tinyos/tos/interfaces/Pool.nc"
static error_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(
#line 85
/*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__t * newVal);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Init__init(void );
# 89 "/opt/tinyos/tos/interfaces/Pool.nc"
static error_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__put(
#line 85
/*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__t * newVal);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Init__init(void );
# 73 "/opt/tinyos/tos/interfaces/Queue.nc"
static 
#line 71
/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__t  

/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__head(void );
#line 90
static error_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__enqueue(
#line 86
/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__t  newVal);
#line 65
static uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__maxSize(void );
#line 81
static 
#line 79
/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__t  

/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__empty(void );







static uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__size(void );
# 104 "/opt/tinyos/tos/interfaces/SplitControl.nc"
static error_t CC2420TKN154P__SplitControl__start(void );
#line 130
static error_t CC2420TKN154P__SplitControl__stop(void );
# 36 "/opt/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
static void CC2420TKN154P__ReliableWait__waitRxDone(void );



static void CC2420TKN154P__ReliableWait__waitBackoffDone(void );
#line 38
static void CC2420TKN154P__ReliableWait__waitTxDone(void );
# 45 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Rx.nc"
static message_t *CC2420TKN154P__CC2420Rx__received(message_t *data);
# 115 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
static void CC2420TKN154P__SlottedCsmaCa__default__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result);
# 56 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static error_t CC2420TKN154P__RadioRx__enableRx(uint32_t t0, uint32_t dt);
#line 73
static bool CC2420TKN154P__RadioRx__isReceiving(void );
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void CC2420TKN154P__configSyncTask__runTask(void );
# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
static void CC2420TKN154P__SpiResource__granted(void );
# 51 "/opt/tinyos/tos/interfaces/GetNow.nc"
static CC2420TKN154P__CCA__data_type CC2420TKN154P__CCA__getNow(void );
# 49 "/opt/tinyos/tos/chips/cc2420_tkn154/Timestamp.nc"
static void CC2420TKN154P__Timestamp__default__transmissionStarted(uint8_t frameType, uint8_t msduHandle, uint8_t *payload, uint8_t token);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void CC2420TKN154P__energyDetectionTask__runTask(void );
# 41 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
static void CC2420TKN154P__CC2420Tx__loadTXFIFODone(ieee154_txframe_t *data, error_t error);


static void CC2420TKN154P__CC2420Tx__sendDone(ieee154_txframe_t *frame, bool ackPendingFlag, error_t error);





static void CC2420TKN154P__CC2420Tx__transmissionStarted(ieee154_txframe_t *data);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void CC2420TKN154P__startDoneTask__runTask(void );
#line 75
static void CC2420TKN154P__rxControlStopDoneTask__runTask(void );
# 47 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static error_t CC2420TKN154P__RadioOff__off(void );
#line 60
static bool CC2420TKN154P__RadioOff__isOff(void );
# 62 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
static error_t CC2420TKN154P__UnslottedCsmaCa__transmit(ieee154_txframe_t *frame, ieee154_csma_t *csma);
# 77 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
static void CC2420TKN154P__CC2420Power__startOscillatorDone(void );
#line 57
static void CC2420TKN154P__CC2420Power__startVRegDone(void );
# 55 "/opt/tinyos/tos/interfaces/Set.nc"
static void CC2420TKN154P__RadioPromiscuousMode__set(CC2420TKN154P__RadioPromiscuousMode__val_t val);
# 74 "/opt/tinyos/tos/interfaces/Notify.nc"
static void CC2420TKN154P__PIBUpdate__notify(
# 57 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
uint8_t arg_0x40e14a80, 
# 74 "/opt/tinyos/tos/interfaces/Notify.nc"
CC2420TKN154P__PIBUpdate__val_t val);
# 132 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420AsyncSplitControl.nc"
static void CC2420TKN154P__RxControl__stopDone(error_t error);
# 72 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
static void CC2420ControlP__CC2420Config__setShortAddr(uint16_t address);
#line 66
static void CC2420ControlP__CC2420Config__setChannel(uint8_t channel);
#line 89
static void CC2420ControlP__CC2420Config__setPromiscuousMode(bool on);
#line 78
static void CC2420ControlP__CC2420Config__setPanAddr(uint16_t address);
#line 90
static bool CC2420ControlP__CC2420Config__isPromiscuousModeEnabled(void );





static void CC2420ControlP__CC2420Config__setCCAMode(uint8_t mode);
#line 53
static error_t CC2420ControlP__CC2420Config__sync(void );
#line 65
static uint8_t CC2420ControlP__CC2420Config__getChannel(void );
#line 84
static void CC2420ControlP__CC2420Config__setPanCoordinator(bool pcoord);
#line 102
static void CC2420ControlP__CC2420Config__setTxPower(uint8_t txPower);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t CC2420ControlP__Init__init(void );
# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
static void CC2420ControlP__SpiResource__granted(void );
# 72 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
static error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 98
static error_t CC2420ControlP__CC2420Power__rfOff(void );
#line 112
static error_t CC2420ControlP__CC2420Power__flushRxFifo(void );
#line 91
static error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 52
static error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 64
static error_t CC2420ControlP__CC2420Power__stopVReg(void );
#line 84
static error_t CC2420ControlP__CC2420Power__stopOscillator(void );
#line 104
static error_t CC2420ControlP__CC2420Power__rssi(int8_t *rssi);
# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__Resource__release(void );
#line 97
static error_t CC2420ControlP__Resource__immediateRequest(void );
#line 88
static error_t CC2420ControlP__Resource__request(void );
#line 128
static bool CC2420ControlP__Resource__isOwner(void );
# 68 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
static void CC2420ControlP__InterruptCCA__fired(void );
# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupAlarm__fired(void );
# 44 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput(void );
#line 43
static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get(void );


static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput(void );
#line 40
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set(void );
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr(void );

static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get(void );
#line 43
static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get(void );


static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput(void );
#line 40
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set(void );
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr(void );


static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput(void );
#line 43
static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__get(void );


static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput(void );
#line 40
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set(void );
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__clr(void );
# 86 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time);
# 54 "/opt/tinyos/tos/interfaces/GpioCapture.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge(void );
#line 66
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable(void );
#line 53
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void );
# 52 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void HplMsp430InterruptP__Port14__clear(void );
#line 47
static void HplMsp430InterruptP__Port14__disable(void );
#line 67
static void HplMsp430InterruptP__Port14__edge(bool low_to_high);
#line 42
static void HplMsp430InterruptP__Port14__enable(void );









static void HplMsp430InterruptP__Port26__clear(void );
#line 72
static void HplMsp430InterruptP__Port26__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port17__clear(void );
#line 72
static void HplMsp430InterruptP__Port17__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port21__clear(void );
#line 72
static void HplMsp430InterruptP__Port21__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port12__clear(void );
#line 72
static void HplMsp430InterruptP__Port12__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port24__clear(void );
#line 72
static void HplMsp430InterruptP__Port24__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port15__clear(void );
#line 72
static void HplMsp430InterruptP__Port15__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port27__clear(void );
#line 72
static void HplMsp430InterruptP__Port27__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port10__clear(void );
#line 47
static void HplMsp430InterruptP__Port10__disable(void );
#line 67
static void HplMsp430InterruptP__Port10__edge(bool low_to_high);
#line 42
static void HplMsp430InterruptP__Port10__enable(void );









static void HplMsp430InterruptP__Port22__clear(void );
#line 72
static void HplMsp430InterruptP__Port22__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port13__clear(void );
#line 72
static void HplMsp430InterruptP__Port13__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port25__clear(void );
#line 72
static void HplMsp430InterruptP__Port25__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port16__clear(void );
#line 72
static void HplMsp430InterruptP__Port16__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port20__clear(void );
#line 72
static void HplMsp430InterruptP__Port20__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port11__clear(void );
#line 72
static void HplMsp430InterruptP__Port11__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port23__clear(void );
#line 72
static void HplMsp430InterruptP__Port23__default__fired(void );
#line 72
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void );
# 61 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void );
#line 53
static error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void );
# 72 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void );
# 61 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void );
#line 54
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void );
# 82 "/opt/tinyos/tos/interfaces/SpiPacket.nc"
static void CC2420SpiP__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 62 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420SpiP__Fifo__continueRead(
# 46 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40fff010, 
# 62 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 91
static void CC2420SpiP__Fifo__default__writeDone(
# 46 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40fff010, 
# 91 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 82
static cc2420_status_t CC2420SpiP__Fifo__write(
# 46 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40fff010, 
# 82 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420SpiP__Fifo__beginRead(
# 46 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40fff010, 
# 51 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 71
static void CC2420SpiP__Fifo__default__readDone(
# 46 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40fff010, 
# 71 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 31 "/opt/tinyos/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__abortRelease(void );







static error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );
# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
static void CC2420SpiP__SpiResource__granted(void );
# 63 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420SpiP__Ram__write(
# 47 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint16_t arg_0x40fffa38, 
# 63 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t offset, uint8_t * data, uint8_t length);
# 55 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420SpiP__Reg__read(
# 48 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x41037200, 
# 55 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t *data);







static cc2420_status_t CC2420SpiP__Reg__write(
# 48 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x41037200, 
# 63 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t data);
# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__release(
# 45 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x41000558);
# 97 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__immediateRequest(
# 45 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x41000558);
# 88 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__request(
# 45 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x41000558);
# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
static void CC2420SpiP__Resource__default__granted(
# 45 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x41000558);
# 128 "/opt/tinyos/tos/interfaces/Resource.nc"
static bool CC2420SpiP__Resource__isOwner(
# 45 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x41000558);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void CC2420SpiP__grant__runTask(void );
# 53 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(
# 49 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x410379b8);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t StateImplP__Init__init(void );
# 56 "/opt/tinyos/tos/interfaces/State.nc"
static void StateImplP__State__toIdle(
# 67 "/opt/tinyos/tos/system/StateImplP.nc"
uint8_t arg_0x41067030);
# 66 "/opt/tinyos/tos/interfaces/State.nc"
static bool StateImplP__State__isState(
# 67 "/opt/tinyos/tos/system/StateImplP.nc"
uint8_t arg_0x41067030, 
# 66 "/opt/tinyos/tos/interfaces/State.nc"
uint8_t myState);
#line 61
static bool StateImplP__State__isIdle(
# 67 "/opt/tinyos/tos/system/StateImplP.nc"
uint8_t arg_0x41067030);
# 45 "/opt/tinyos/tos/interfaces/State.nc"
static error_t StateImplP__State__requestState(
# 67 "/opt/tinyos/tos/system/StateImplP.nc"
uint8_t arg_0x41067030, 
# 45 "/opt/tinyos/tos/interfaces/State.nc"
uint8_t reqState);
# 65 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(
# 76 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x41093ea8);
# 59 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(
# 76 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x41093ea8);
# 70 "/opt/tinyos/tos/interfaces/SpiPacket.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(
# 79 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x410ce068, 
# 59 "/opt/tinyos/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
#line 82
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(
# 79 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x410ce068, 
# 75 "/opt/tinyos/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 39 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiConfigure.nc"
static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(
# 82 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x410cd308);
# 45 "/opt/tinyos/tos/interfaces/SpiByte.nc"
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(uint8_t tx);
# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(
# 81 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x410ce860);
# 97 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(
# 81 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x410ce860);
# 88 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(
# 81 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x410ce860);
# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(
# 81 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x410ce860);
# 128 "/opt/tinyos/tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(
# 81 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x410ce860);
# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(
# 75 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x41093460);
# 97 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(
# 75 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x41093460);
# 88 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(
# 75 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x41093460);
# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(
# 75 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x41093460);
# 128 "/opt/tinyos/tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(
# 75 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x41093460);
# 54 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(uint8_t data);
#line 49
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone(void );
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask(void );
# 180 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430Usart0P__Usart__enableRxIntr(void );
#line 197
static void HplMsp430Usart0P__Usart__clrRxIntr(void );
#line 97
static void HplMsp430Usart0P__Usart__resetUsart(bool reset);
#line 179
static void HplMsp430Usart0P__Usart__disableIntr(void );
#line 90
static void HplMsp430Usart0P__Usart__setUmctl(uint8_t umctl);
#line 177
static void HplMsp430Usart0P__Usart__disableRxIntr(void );
#line 207
static void HplMsp430Usart0P__Usart__clrIntr(void );
#line 80
static void HplMsp430Usart0P__Usart__setUbr(uint16_t ubr);
#line 224
static void HplMsp430Usart0P__Usart__tx(uint8_t data);
#line 128
static void HplMsp430Usart0P__Usart__disableUart(void );
#line 153
static void HplMsp430Usart0P__Usart__enableSpi(void );
#line 168
static void HplMsp430Usart0P__Usart__setModeSpi(msp430_spi_union_config_t *config);
#line 231
static uint8_t HplMsp430Usart0P__Usart__rx(void );
#line 192
static bool HplMsp430Usart0P__Usart__isRxIntrPending(void );
#line 158
static void HplMsp430Usart0P__Usart__disableSpi(void );
# 54 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(
# 39 "/opt/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x4117b200, 
# 54 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(
# 39 "/opt/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x4117b200);
# 39 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void );
#line 39
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(
# 40 "/opt/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x4117ba80);
# 54 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 79 "/opt/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 53 "/opt/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41198690);
# 61 "/opt/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(
# 55 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41198690);
# 65 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41196a58);
# 59 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41196a58);
# 56 "/opt/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 73
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );
#line 46
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );
#line 81
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void );
# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41199bd0);
# 97 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(
# 54 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41199bd0);
# 88 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(
# 54 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41199bd0);
# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41199bd0);
# 128 "/opt/tinyos/tos/interfaces/Resource.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(
# 54 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41199bd0);
# 90 "/opt/tinyos/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 7 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430I2C.nc"
static void HplMsp430I2C0P__HplI2C__clearModeI2C(void );
#line 6
static bool HplMsp430I2C0P__HplI2C__isI2C(void );
# 61 "/opt/tinyos/tos/interfaces/GpioCapture.nc"
static void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
# 63 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t * message);
# 24 "/opt/tinyos/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__releasing(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t CC2420TransmitP__Init__init(void );
# 40 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
static error_t CC2420TransmitP__CC2420Tx__loadTXFIFO(ieee154_txframe_t *data);


static error_t CC2420TransmitP__CC2420Tx__send(bool cca);



static void CC2420TransmitP__CC2420Tx__lockChipSpi(void );
#line 46
static bool CC2420TransmitP__CC2420Tx__cca(void );

static void CC2420TransmitP__CC2420Tx__unlockChipSpi(void );
# 95 "/opt/tinyos/tos/interfaces/AsyncStdControl.nc"
static error_t CC2420TransmitP__AsyncStdControl__start(void );









static error_t CC2420TransmitP__AsyncStdControl__stop(void );
# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void CC2420TransmitP__BackoffAlarm__fired(void );
# 91 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420TransmitP__TXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420TransmitP__TXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void CC2420ReceiveP__receiveDone_task__runTask(void );
#line 75
static void CC2420ReceiveP__stopContinueTask__runTask(void );
# 55 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);
# 113 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420AsyncSplitControl.nc"
static error_t CC2420ReceiveP__AsyncSplitControl__start(void );









static error_t CC2420ReceiveP__AsyncSplitControl__stop(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t CC2420ReceiveP__Init__init(void );
# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
static void CC2420ReceiveP__SpiResource__granted(void );
# 91 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420ReceiveP__RXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420ReceiveP__RXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 68 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
static void CC2420ReceiveP__InterruptFIFOP__fired(void );
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );
# 48 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 103 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type t0, /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type dt);
#line 73
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
# 48 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "/opt/tinyos/tos/lib/timer/Counter.nc"
static /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );






static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );










static void /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get(void );
# 109 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );
#line 103
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type t0, /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type dt);
#line 66
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type dt);






static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
# 66 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__start(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__size_type dt);






static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__stop(void );




static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__fired(void );
#line 109
static Alarm32khzTo62500hzTransformC__Alarm__size_type Alarm32khzTo62500hzTransformC__Alarm__getNow(
# 38 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x413cce98);
# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__Alarm__default__fired(
# 38 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x413cce98);
# 103 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__Alarm__startAt(
# 38 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x413cce98, 
# 103 "/opt/tinyos/tos/lib/timer/Alarm.nc"
Alarm32khzTo62500hzTransformC__Alarm__size_type t0, Alarm32khzTo62500hzTransformC__Alarm__size_type dt);
#line 116
static Alarm32khzTo62500hzTransformC__Alarm__size_type Alarm32khzTo62500hzTransformC__Alarm__getAlarm(
# 38 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x413cce98);
# 66 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__Alarm__start(
# 38 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x413cce98, 
# 66 "/opt/tinyos/tos/lib/timer/Alarm.nc"
Alarm32khzTo62500hzTransformC__Alarm__size_type dt);






static void Alarm32khzTo62500hzTransformC__Alarm__stop(
# 38 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x413cce98);
# 109 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static Alarm32khzTo62500hzTransformC__AlarmFrom__size_type Alarm32khzTo62500hzTransformC__AlarmFrom__default__getNow(
# 39 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x413c8df0);
# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__AlarmFrom__fired(
# 39 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x413c8df0);
# 116 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static Alarm32khzTo62500hzTransformC__AlarmFrom__size_type Alarm32khzTo62500hzTransformC__AlarmFrom__default__getAlarm(
# 39 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x413c8df0);
# 66 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__AlarmFrom__default__start(
# 39 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x413c8df0, 
# 66 "/opt/tinyos/tos/lib/timer/Alarm.nc"
Alarm32khzTo62500hzTransformC__AlarmFrom__size_type dt);






static void Alarm32khzTo62500hzTransformC__AlarmFrom__default__stop(
# 39 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x413c8df0);
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void );
# 48 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void );
# 103 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(/*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type t0, /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type dt);
#line 73
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Init__init(void );
# 109 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow(void );
#line 103
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type t0, /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type dt);
#line 73
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__stop(void );




static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void );
# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__overflow(void );
# 109 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(
# 49 "/opt/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x413f15f8);
# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__default__fired(
# 49 "/opt/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x413f15f8);
# 103 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__startAt(
# 49 "/opt/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x413f15f8, 
# 103 "/opt/tinyos/tos/lib/timer/Alarm.nc"
/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type t0, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type dt);
#line 116
static /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(
# 49 "/opt/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x413f15f8);
# 66 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(
# 49 "/opt/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x413f15f8, 
# 66 "/opt/tinyos/tos/lib/timer/Alarm.nc"
/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type dt);






static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(
# 49 "/opt/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x413f15f8);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Init__init(void );
# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__fired(void );
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired(void );
# 48 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow(void );
# 103 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__size_type t0, /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__size_type dt);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Init__init(void );
# 109 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__getNow(void );
#line 103
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__size_type t0, /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__size_type dt);
#line 66
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__start(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__size_type dt);
#line 78
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__fired(void );
# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__overflow(void );
# 109 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__getNow(void );
#line 103
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__size_type t0, /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__size_type dt);
#line 66
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__start(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__size_type dt);
#line 78
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__fired(void );
# 61 "/opt/tinyos/tos/lib/timer/LocalTime.nc"
static uint32_t LocalTime62500hzP__LocalTime__get(void );
# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void LocalTime62500hzP__Alarm__fired(void );
# 35 "/opt/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
static void TKN154TimingP__ReliableWait__waitRx(uint32_t t0, uint32_t dt);





static bool TKN154TimingP__ReliableWait__ccaOnBackoffBoundary(uint32_t slot0);
#line 37
static void TKN154TimingP__ReliableWait__waitTx(uint32_t t0, uint32_t dt);

static void TKN154TimingP__ReliableWait__waitBackoff(uint32_t dt);
# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void TKN154TimingP__SymbolAlarm__fired(void );
# 47 "/opt/tinyos/tos/chips/cc2420_tkn154/CaptureTime.nc"
static uint32_t TKN154TimingP__CaptureTime__getTimestamp(uint16_t SFDCaptureTime);








static uint16_t TKN154TimingP__CaptureTime__getSFDUptime(uint16_t SFDCaptureTime, uint16_t EFDCaptureTime);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/opt/tinyos/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/opt/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 136
static uint32_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(
# 48 "/opt/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x414552d8);
# 83 "/opt/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/opt/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x414552d8);
# 73 "/opt/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/opt/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x414552d8, 
# 73 "/opt/tinyos/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "/opt/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x414552d8);
# 52 "/opt/tinyos/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 104 "/opt/tinyos/tos/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void );
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void );
#line 75
static void SerialP__RunTx__runTask(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t SerialP__Init__init(void );
# 54 "/opt/tinyos/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void );
#line 49
static void SerialP__SerialFlush__default__flush(void );
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void );
# 94 "/opt/tinyos/tos/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
#line 85
static void SerialP__SerialFrameComm__delimiterReceived(void );
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void );
# 71 "/opt/tinyos/tos/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void );
#line 62
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 75 "/opt/tinyos/tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 51 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41541010, 
# 67 "/opt/tinyos/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41541010, 
# 96 "/opt/tinyos/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 78 "/opt/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 50 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41544960, 
# 71 "/opt/tinyos/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 54 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41541b10, 
# 31 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 54 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41541b10);
# 23 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 54 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41541b10, 
# 23 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 81 "/opt/tinyos/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 62 "/opt/tinyos/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "/opt/tinyos/tos/interfaces/UartStream.nc"
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 56 "/opt/tinyos/tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
#line 79
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
#line 65
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
# 65 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(
# 44 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415c9108);
# 59 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__configure(
# 44 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415c9108);
# 39 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartConfigure.nc"
static msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(
# 49 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415c77a0);
# 48 "/opt/tinyos/tos/interfaces/UartStream.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__send(
# 45 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415c9868, 
# 44 "/opt/tinyos/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len);
#line 79
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(
# 45 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415c9868, 
# 79 "/opt/tinyos/tos/interfaces/UartStream.nc"
uint8_t byte);
#line 99
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(
# 45 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415c9868, 
# 95 "/opt/tinyos/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__sendDone(
# 45 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415c9868, 
# 53 "/opt/tinyos/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__overflow(void );
# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__release(
# 48 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415c8c90);
# 97 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(
# 48 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415c8c90);
# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__granted(
# 48 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415c8c90);
# 128 "/opt/tinyos/tos/interfaces/Resource.nc"
static bool /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(
# 48 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415c8c90);
# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__release(
# 43 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415cc690);
# 97 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__immediateRequest(
# 43 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415cc690);
# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__default__granted(
# 43 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415cc690);
# 54 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(
# 51 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415c3890, 
# 54 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(
# 51 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415c3890);
# 143 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430Usart1P__Usart__enableUartRx(void );
#line 123
static void HplMsp430Usart1P__Usart__enableUart(void );
#line 97
static void HplMsp430Usart1P__Usart__resetUsart(bool reset);
#line 179
static void HplMsp430Usart1P__Usart__disableIntr(void );
#line 90
static void HplMsp430Usart1P__Usart__setUmctl(uint8_t umctl);
#line 133
static void HplMsp430Usart1P__Usart__enableUartTx(void );
#line 148
static void HplMsp430Usart1P__Usart__disableUartRx(void );
#line 182
static void HplMsp430Usart1P__Usart__enableIntr(void );
#line 207
static void HplMsp430Usart1P__Usart__clrIntr(void );
#line 80
static void HplMsp430Usart1P__Usart__setUbr(uint16_t ubr);
#line 224
static void HplMsp430Usart1P__Usart__tx(uint8_t data);
#line 128
static void HplMsp430Usart1P__Usart__disableUart(void );
#line 174
static void HplMsp430Usart1P__Usart__setModeUart(msp430_uart_union_config_t *config);
#line 158
static void HplMsp430Usart1P__Usart__disableSpi(void );
#line 138
static void HplMsp430Usart1P__Usart__disableUartTx(void );
# 95 "/opt/tinyos/tos/interfaces/AsyncStdControl.nc"
static error_t HplMsp430Usart1P__AsyncStdControl__start(void );









static error_t HplMsp430Usart1P__AsyncStdControl__stop(void );
# 54 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__rxDone(
# 39 "/opt/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x4117b200, 
# 54 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__txDone(
# 39 "/opt/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x4117b200);
# 54 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__rxDone(uint8_t data);
#line 49
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__txDone(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init(void );
# 53 "/opt/tinyos/tos/interfaces/ResourceQueue.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
# 61 "/opt/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__immediateRequested(
# 55 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41198690);
# 65 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41196a58);
# 59 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(
# 60 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41196a58);
# 56 "/opt/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );
# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Resource__release(
# 54 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41199bd0);
# 97 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Resource__immediateRequest(
# 54 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41199bd0);
# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Resource__default__granted(
# 54 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41199bd0);
# 128 "/opt/tinyos/tos/interfaces/Resource.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Resource__isOwner(
# 54 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41199bd0);
# 90 "/opt/tinyos/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId(void );
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
# 62 "/opt/tinyos/tos/lib/power/PowerDownCleanup.nc"
static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 46 "/opt/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );
#line 81
static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested(void );
# 39 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartConfigure.nc"
static msp430_uart_union_config_t *TelosSerialP__Msp430UartConfigure__getConfig(void );
# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
static void TelosSerialP__Resource__granted(void );
# 95 "/opt/tinyos/tos/interfaces/StdControl.nc"
static error_t TelosSerialP__StdControl__start(void );









static error_t TelosSerialP__StdControl__stop(void );
# 73 "/opt/tinyos/tos/interfaces/Queue.nc"
static 
#line 71
/*SnifferAppC.QueueC*/QueueC__1__Queue__t  

/*SnifferAppC.QueueC*/QueueC__1__Queue__head(void );
#line 90
static error_t /*SnifferAppC.QueueC*/QueueC__1__Queue__enqueue(
#line 86
/*SnifferAppC.QueueC*/QueueC__1__Queue__t  newVal);
#line 65
static uint8_t /*SnifferAppC.QueueC*/QueueC__1__Queue__maxSize(void );
#line 81
static 
#line 79
/*SnifferAppC.QueueC*/QueueC__1__Queue__t  

/*SnifferAppC.QueueC*/QueueC__1__Queue__dequeue(void );
#line 50
static bool /*SnifferAppC.QueueC*/QueueC__1__Queue__empty(void );







static uint8_t /*SnifferAppC.QueueC*/QueueC__1__Queue__size(void );
# 97 "/opt/tinyos/tos/interfaces/Pool.nc"
static 
#line 94
/*SnifferAppC.PoolC.PoolP*/PoolP__2__Pool__t * 


/*SnifferAppC.PoolC.PoolP*/PoolP__2__Pool__get(void );
#line 80
static uint8_t /*SnifferAppC.PoolC.PoolP*/PoolP__2__Pool__maxSize(void );








static error_t /*SnifferAppC.PoolC.PoolP*/PoolP__2__Pool__put(
#line 85
/*SnifferAppC.PoolC.PoolP*/PoolP__2__Pool__t * newVal);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t /*SnifferAppC.PoolC.PoolP*/PoolP__2__Init__init(void );
#line 62
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MoteClockInit__init(void );
#line 62
static error_t PlatformP__LedsInit__init(void );
# 10 "/opt/tinyos/tos/platforms/telosa/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 6 "/opt/tinyos/tos/platforms/telosb/MotePlatformC.nc"
static __inline void MotePlatformC__uwait(uint16_t u);




static __inline void MotePlatformC__TOSH_wait(void );




static void MotePlatformC__TOSH_FLASH_M25P_DP_bit(bool set);










static inline void MotePlatformC__TOSH_FLASH_M25P_DP(void );
#line 56
static inline error_t MotePlatformC__Init__init(void );
# 43 "/opt/tinyos/tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__initTimerB(void );
#line 42
static void Msp430ClockP__Msp430ClockInit__initTimerA(void );
#line 40
static void Msp430ClockP__Msp430ClockInit__setupDcoCalibrate(void );
static void Msp430ClockP__Msp430ClockInit__initClocks(void );
# 51 "/opt/tinyos/tos/chips/msp430/timer/Msp430ClockP.nc"
static volatile uint8_t Msp430ClockP__IE1 __asm ("0x0000");
static volatile uint16_t Msp430ClockP__TACTL __asm ("0x0160");
static volatile uint16_t Msp430ClockP__TAIV __asm ("0x012E");
static volatile uint16_t Msp430ClockP__TBCTL __asm ("0x0180");
static volatile uint16_t Msp430ClockP__TBIV __asm ("0x011E");

enum Msp430ClockP____nesc_unnamed4325 {

  Msp430ClockP__ACLK_CALIB_PERIOD = 8, 
  Msp430ClockP__TARGET_DCO_DELTA = 4096 / 32 * Msp430ClockP__ACLK_CALIB_PERIOD
};

static inline mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void );



static inline void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void );
#line 79
static inline void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void );
#line 100
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void );
#line 115
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void );
#line 130
static inline void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initClocks(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initTimerA(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initTimerB(void );





static inline void Msp430ClockP__startTimerA(void );
#line 163
static inline void Msp430ClockP__startTimerB(void );
#line 175
static void Msp430ClockP__set_dco_calib(int calib);





static inline uint16_t Msp430ClockP__test_calib_busywait_delta(int calib);
#line 204
static inline void Msp430ClockP__busyCalibrateDco(void );
#line 229
static inline error_t Msp430ClockP__Init__init(void );
# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(
# 51 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x4067c4b0);
# 48 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void );
# 126 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );








static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n);
# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(
# 51 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x4067c4b0);
# 48 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void );
# 62 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
#line 81
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
#line 126
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );








static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n);
# 86 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time);
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void );
# 55 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t;


static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 86 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time);
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void );
# 55 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t;


static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void );
# 86 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time);
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void );
# 55 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t;


static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void );
# 86 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time);
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void );
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get(void );
# 55 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl(void );
#line 85
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void );
# 86 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time);
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void );
# 55 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)  ;
#line 72
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(uint8_t l_cm);
#line 85
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void );
#line 110
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm);
#line 130
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );
#line 175
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void );




static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );
#line 192
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
# 86 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time);
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void );
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get(void );
# 55 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl(void );
#line 85
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
# 86 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time);
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void );
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__get(void );
# 55 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__CC2int(/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__compareControl(void );
#line 85
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__setControlAsCompare(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void );
# 86 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time);
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void );
# 55 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t;


static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void );
# 86 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time);
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void );
# 55 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t;


static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void );
# 86 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time);
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void );
# 55 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t;


static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void );
# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCommonP__VectorTimerB1__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerA0__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerA1__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerB0__fired(void );
# 11 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
void sig_TIMERA0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x000C)))  ;
void sig_TIMERA1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x000A)))  ;
void sig_TIMERB0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x001A)))  ;
void sig_TIMERB1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0018)))  ;
# 62 "/opt/tinyos/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 59 "/opt/tinyos/tos/chips/msp430/McuSleepC.nc"
bool McuSleepC__dirty = TRUE;
mcu_power_t McuSleepC__powerState = MSP430_POWER_ACTIVE;




const uint16_t McuSleepC__msp430PowerBits[MSP430_POWER_LPM4 + 1] = { 
0, 
0x0010, 
0x0040 + 0x0010, 
0x0080 + 0x0010, 
0x0080 + 0x0040 + 0x0010, 
0x0080 + 0x0040 + 0x0020 + 0x0010 };


static inline mcu_power_t McuSleepC__getPowerState(void );
#line 112
static inline void McuSleepC__computePowerState(void );




static inline void McuSleepC__McuSleep__sleep(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/opt/tinyos/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/opt/tinyos/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/opt/tinyos/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/opt/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x4059ab40);
# 76 "/opt/tinyos/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/opt/tinyos/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4326 {

  SchedulerBasicP__NUM_TASKS = 30U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 241 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
static uint8_t SnifferC__Frame__getHeaderLength(message_t *frame);
#line 152
static void *SnifferC__Frame__getPayload(message_t *frame);
#line 233
static void *SnifferC__Frame__getHeader(message_t *frame);
#line 160
static uint8_t SnifferC__Frame__getPayloadLength(message_t *frame);
# 97 "/opt/tinyos/tos/interfaces/Pool.nc"
static 
#line 94
SnifferC__Pool__t * 


SnifferC__Pool__get(void );
#line 80
static uint8_t SnifferC__Pool__maxSize(void );








static error_t SnifferC__Pool__put(
#line 85
SnifferC__Pool__t * newVal);
# 104 "/opt/tinyos/tos/interfaces/SplitControl.nc"
static error_t SnifferC__SerialControl__start(void );
# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_phyCurrentChannel_t SnifferC__MLME_GET__phyCurrentChannel(void );
# 73 "/opt/tinyos/tos/interfaces/Queue.nc"
static 
#line 71
SnifferC__Queue__t  

SnifferC__Queue__head(void );
#line 90
static error_t SnifferC__Queue__enqueue(
#line 86
SnifferC__Queue__t  newVal);
#line 65
static uint8_t SnifferC__Queue__maxSize(void );
#line 81
static 
#line 79
SnifferC__Queue__t  

SnifferC__Queue__dequeue(void );
#line 50
static bool SnifferC__Queue__empty(void );
# 104 "/opt/tinyos/tos/interfaces/SplitControl.nc"
static error_t SnifferC__PromiscuousMode__start(void );
# 75 "/opt/tinyos/tos/interfaces/Send.nc"
static error_t SnifferC__SerialSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t SnifferC__serialSendTask__postTask(void );
# 83 "/opt/tinyos/tos/interfaces/Leds.nc"
static void SnifferC__Leds__led1Toggle(void );
#line 56
static void SnifferC__Leds__led0On(void );
#line 89
static void SnifferC__Leds__led2On(void );
# 54 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
static ieee154_status_t SnifferC__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value);
# 69 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RESET.nc"
static ieee154_status_t SnifferC__MLME_RESET__request(
bool SetDefaultPIB);
# 58 "SnifferC.nc"
enum SnifferC____nesc_unnamed4327 {
#line 58
  SnifferC__serialSendTask = 0U
};
#line 58
typedef int SnifferC____nesc_sillytask_serialSendTask[SnifferC__serialSendTask];
#line 57
bool SnifferC__m_serialSendBusy;


static inline void SnifferC__Boot__booted(void );






static inline void SnifferC__SerialControl__startDone(error_t error);






static inline void SnifferC__MLME_RESET__confirm(ieee154_status_t status);










static inline void SnifferC__PromiscuousMode__startDone(error_t error);





static message_t *SnifferC__MCPS_DATA__indication(message_t *frame);
#line 105
static inline void SnifferC__serialSendTask__runTask(void );
#line 165
static inline void SnifferC__SerialSend__sendDone(message_t *frame, error_t error);










static inline uint8_t SnifferC__SerialPacketInfo__offset(void );






static inline uint8_t SnifferC__SerialPacketInfo__dataLinkLength(message_t *frame, uint8_t upperLen);






static inline uint8_t SnifferC__SerialPacketInfo__upperLength(message_t *msg, uint8_t dataLinkLen);








static inline void SnifferC__MCPS_DATA__confirm(message_t *msg, uint8_t msduHandle, ieee154_status_t status, uint32_t Timestamp);
static inline void SnifferC__PromiscuousMode__stopDone(error_t error);
static inline void SnifferC__SerialControl__stopDone(error_t error);
# 46 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );
static void LedsP__Led1__toggle(void );



static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );





static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
static void LedsP__Led2__clr(void );
# 56 "/opt/tinyos/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 74
static inline void LedsP__Leds__led0On(void );
#line 99
static inline void LedsP__Leds__led1Toggle(void );




static inline void LedsP__Leds__led2On(void );
# 59 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get(void );
#line 59
static inline uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get(void );
#line 59
static inline uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get(void );
static inline void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void );
#line 65
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void );
#line 65
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void );
#line 65
static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc(void );
#line 65
static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc(void );
#line 59
static inline uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get(void );
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput(void );
#line 56
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set(void );
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput(void );



static inline void /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void );
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void );

static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__toggle(void );




static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void );
# 85 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void );




static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__clr(void );
# 48 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr(void );




static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
# 58 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__toggle(void );
#line 85
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void );
# 48 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );

static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__toggle(void );



static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
# 85 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void );




static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr(void );
# 48 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void );




static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
# 89 "/opt/tinyos/tos/interfaces/Pool.nc"
static error_t DataP__TxFramePool__put(
#line 85
DataP__TxFramePool__t * newVal);
# 91 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MCPS/MCPS_DATA.nc"
static void DataP__MCPS_DATA__confirm(
message_t *frame, 
uint8_t msduHandle, 
ieee154_status_t status, 
uint32_t Timestamp);









static message_t *DataP__MCPS_DATA__indication(message_t *frame);
# 70 "/opt/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline message_t *DataP__dataReceived(message_t *frame);
static void DataP__finishTxTransaction(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 180
static inline void DataP__PurgeDirect__purgeDone(ieee154_txframe_t *data, ieee154_status_t status);
#line 215
static inline message_t *DataP__DeviceCapRx__received(message_t *frame);




static inline message_t *DataP__dataReceived(message_t *frame);




static void DataP__finishTxTransaction(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 240
static inline void DataP__DeviceCapTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);




static inline void DataP__CoordCapTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 261
static inline void DataP__IndirectTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t PibP__MacReset__init(void );
# 61 "/opt/tinyos/tos/lib/timer/LocalTime.nc"
static uint32_t PibP__LocalTime__get(void );
# 52 "/opt/tinyos/tos/interfaces/Random.nc"
static uint16_t PibP__Random__rand16(void );
#line 46
static uint32_t PibP__Random__rand32(void );
# 104 "/opt/tinyos/tos/interfaces/SplitControl.nc"
static error_t PibP__RadioControl__start(void );
#line 130
static error_t PibP__RadioControl__stop(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t PibP__DispatchReset__init(void );
# 55 "/opt/tinyos/tos/interfaces/Get.nc"
static PibP__PromiscuousModeGet__val_t PibP__PromiscuousModeGet__get(void );
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t PibP__resetSpinTask__postTask(void );
# 137 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t PibP__RadioToken__release(void );







static bool PibP__RadioToken__isOwner(void );
#line 84
static error_t PibP__RadioToken__request(void );
# 47 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static error_t PibP__RadioOff__off(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t PibP__DispatchQueueReset__init(void );
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t PibP__radioControlStopTask__postTask(void );
# 74 "/opt/tinyos/tos/interfaces/Notify.nc"
static void PibP__PIBUpdate__notify(
# 59 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
uint8_t arg_0x409d7b80, 
# 74 "/opt/tinyos/tos/interfaces/Notify.nc"
PibP__PIBUpdate__val_t val);
# 78 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RESET.nc"
static void PibP__MLME_RESET__confirm(
ieee154_status_t status);
# 88 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
enum PibP____nesc_unnamed4328 {
#line 88
  PibP__radioControlStopTask = 1U
};
#line 88
typedef int PibP____nesc_sillytask_radioControlStopTask[PibP__radioControlStopTask];





enum PibP____nesc_unnamed4329 {
#line 94
  PibP__resetSpinTask = 2U
};
#line 94
typedef int PibP____nesc_sillytask_resetSpinTask[PibP__resetSpinTask];
#line 78
ieee154_PIB_t PibP__m_pib;

bool PibP__m_setDefaultPIB;
uint8_t PibP__m_resetSpin;




uint64_t PibP__m_aExtendedAddressLE;


static inline void PibP__updateMacMaxFrameTotalWaitTime(void );
static void PibP__resetAttributesToDefault(void );





static inline error_t PibP__LocalInit__init(void );








static void PibP__resetAttributesToDefault(void );
#line 140
static inline void PibP__updateMacMaxFrameTotalWaitTime(void );
#line 164
static inline ieee154_status_t PibP__MLME_RESET__request(bool SetDefaultPIB);
#line 187
static inline void PibP__RadioToken__granted(void );





static inline void PibP__RadioOff__offDone(void );




static inline void PibP__radioControlStopTask__runTask(void );








static void PibP__RadioControl__stopDone(error_t result);
#line 222
static inline void PibP__resetSpinTask__runTask(void );









static inline token_requested_t PibP__IsRadioTokenRequested__getNow(void );

static inline void PibP__RadioControl__startDone(error_t error);
#line 256
static inline ieee154_phyCurrentChannel_t PibP__MLME_GET__phyCurrentChannel(void );









static inline ieee154_phyMaxFrameDuration_t PibP__MLME_GET__phyMaxFrameDuration(void );
#line 278
static inline ieee154_macBattLifeExt_t PibP__MLME_GET__macBattLifeExt(void );



static inline ieee154_macBeaconOrder_t PibP__MLME_GET__macBeaconOrder(void );



static inline ieee154_macBSN_t PibP__MLME_GET__macBSN(void );





static inline ieee154_macDSN_t PibP__MLME_GET__macDSN(void );



static inline ieee154_macMaxCSMABackoffs_t PibP__MLME_GET__macMaxCSMABackoffs(void );

static inline ieee154_macMinBE_t PibP__MLME_GET__macMinBE(void );

static inline ieee154_macPANId_t PibP__MLME_GET__macPANId(void );





static inline ieee154_macShortAddress_t PibP__MLME_GET__macShortAddress(void );



static inline ieee154_macTransactionPersistenceTime_t PibP__MLME_GET__macTransactionPersistenceTime(void );



static inline ieee154_macMaxBE_t PibP__MLME_GET__macMaxBE(void );

static inline ieee154_macMaxFrameTotalWaitTime_t PibP__MLME_GET__macMaxFrameTotalWaitTime(void );

static inline ieee154_macMaxFrameRetries_t PibP__MLME_GET__macMaxFrameRetries(void );
#line 336
static inline ieee154_status_t PibP__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value);
#line 406
static inline ieee154_status_t PibP__MLME_SET__macBSN(ieee154_macBSN_t value);
#line 424
static inline ieee154_status_t PibP__MLME_SET__macDSN(ieee154_macDSN_t value);
#line 540
static uint32_t PibP__TimeCalc__timeElapsed(uint32_t t0, uint32_t t1);








static bool PibP__TimeCalc__hasExpired(uint32_t t0, uint32_t dt);
#line 591
static inline uint8_t PibP__FrameUtility__writeHeader(
uint8_t *mhr, 
uint8_t DstAddrMode, 
uint16_t DstPANId, 
ieee154_address_t *DstAddr, 
uint8_t SrcAddrMode, 
uint16_t SrcPANId, 
const ieee154_address_t *SrcAddr, 
bool PANIDCompression);
#line 653
static error_t PibP__FrameUtility__getMHRLength(uint8_t fcf1, uint8_t fcf2, uint8_t *len);
#line 678
static inline error_t PibP__Frame__setAddressingFields(message_t *frame, 
uint8_t srcAddrMode, 
uint8_t dstAddrMode, 
uint16_t dstPANId, 
ieee154_address_t *dstAddr, 
ieee154_security_t *security);
#line 722
static inline void *PibP__Frame__getHeader(message_t *frame);





static uint8_t PibP__Frame__getHeaderLength(message_t *frame);







static inline void *PibP__Frame__getPayload(message_t *frame);





static inline uint8_t PibP__Frame__getPayloadLength(message_t *frame);
#line 781
static inline uint8_t PibP__Frame__getSrcAddrMode(message_t *frame);





static inline error_t PibP__Frame__getSrcAddr(message_t *frame, ieee154_address_t *address);
#line 807
static inline error_t PibP__Frame__getSrcPANId(message_t *frame, uint16_t *PANID);
#line 827
static inline uint8_t PibP__Frame__getDstAddrMode(message_t *frame);
#line 1015
static inline uint64_t PibP__GetLocalExtendedAddress__get(void );




static void PibP__FrameUtility__convertToLE(uint8_t *destLE, const uint64_t *src);









static inline void PibP__FrameUtility__convertToNative(uint64_t *dest, const uint8_t *srcLE);








static inline void PibP__FrameUtility__copyLocalExtendedAddressLE(uint8_t *destLE);
#line 1063
static void PibP__PIBUpdate__default__notify(uint8_t PIBAttributeID, const void *PIBAttributeValue);
# 83 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static void RadioControlImplP__MacTx__transmitDone(
# 43 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae80c8, 
# 83 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
ieee154_txframe_t *frame, error_t result);
# 65 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void RadioControlImplP__MacRx__enableRxDone(
# 42 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40aec748);
# 84 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static message_t *RadioControlImplP__MacRx__received(
# 42 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40aec748, 
# 84 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
message_t *frame);
# 62 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
static error_t RadioControlImplP__PhyUnslottedCsmaCa__transmit(ieee154_txframe_t *frame, ieee154_csma_t *csma);
#line 89
static void RadioControlImplP__UnslottedCsmaCa__transmitDone(
# 45 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae6170, 
# 89 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result);
# 47 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static error_t RadioControlImplP__PhyRadioOff__off(void );
#line 60
static bool RadioControlImplP__PhyRadioOff__isOff(void );
#line 53
static void RadioControlImplP__MacRadioOff__offDone(
# 46 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae6958);
# 55 "/opt/tinyos/tos/interfaces/Get.nc"
static RadioControlImplP__RadioPromiscuousMode__val_t RadioControlImplP__RadioPromiscuousMode__get(void );
# 98 "/opt/tinyos/tos/interfaces/ArbiterInfo.nc"
static uint8_t RadioControlImplP__ArbiterInfo__userId(void );
# 56 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static error_t RadioControlImplP__PhyRx__enableRx(uint32_t t0, uint32_t dt);
#line 73
static bool RadioControlImplP__PhyRx__isReceiving(void );
# 63 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static error_t RadioControlImplP__MacRx__enableRx(uint8_t client, uint32_t t0, uint32_t dt);









static inline void RadioControlImplP__PhyRx__enableRxDone(void );




static inline message_t *RadioControlImplP__PhyRx__received(message_t *msg);
#line 97
static inline bool RadioControlImplP__MacRx__isReceiving(uint8_t client);









static inline void RadioControlImplP__MacRx__default__enableRxDone(uint8_t client);

static inline message_t *RadioControlImplP__MacRx__default__received(uint8_t client, message_t *frame);
#line 127
static inline void RadioControlImplP__PhyTx__transmitDone(ieee154_txframe_t *frame, error_t result);




static inline void RadioControlImplP__MacTx__default__transmitDone(uint8_t client, ieee154_txframe_t *frame, error_t result);






static inline error_t RadioControlImplP__UnslottedCsmaCa__transmit(uint8_t client, ieee154_txframe_t *frame, ieee154_csma_t *csma);









static inline void RadioControlImplP__PhyUnslottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result);





static inline void RadioControlImplP__UnslottedCsmaCa__default__transmitDone(uint8_t client, 
ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result);
#line 190
static error_t RadioControlImplP__MacRadioOff__off(uint8_t client);









static inline void RadioControlImplP__PhyRadioOff__offDone(void );





static bool RadioControlImplP__MacRadioOff__isOff(uint8_t client);







static inline void RadioControlImplP__MacRadioOff__default__offDone(uint8_t client);
# 49 "/opt/tinyos/tos/system/RoundRobinResourceQueueC.nc"
enum /*RadioControlP.Queue*/RoundRobinResourceQueueC__0____nesc_unnamed4330 {
  RoundRobinResourceQueueC__0__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__0__SIZE = 13U ? (13U - 1) / 8 + 1 : 0
};

uint8_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ[/*RadioControlP.Queue*/RoundRobinResourceQueueC__0__SIZE];
uint8_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__last = 0;

static inline void /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id);



static inline error_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__Init__init(void );




static inline bool /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
#line 97
static inline error_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceRequested__requested(
# 53 "/opt/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b40b08);
# 65 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__unconfigure(
# 57 "/opt/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b3f7a8);
# 59 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__configure(
# 57 "/opt/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b3f7a8);
# 79 "/opt/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__dequeue(void );
# 98 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__granted(
# 52 "/opt/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b2be70);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__postTask(void );
# 70 "/opt/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
enum /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0____nesc_unnamed4331 {
#line 70
  SimpleTransferArbiterP__0__grantedTask = 3U
};
#line 70
typedef int /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0____nesc_sillytask_grantedTask[/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask];
#line 63
enum /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0____nesc_unnamed4332 {
#line 63
  SimpleTransferArbiterP__0__RES_IDLE = 0, SimpleTransferArbiterP__0__RES_GRANTING = 1, SimpleTransferArbiterP__0__RES_BUSY = 2
};
#line 64
enum /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0____nesc_unnamed4333 {
#line 64
  SimpleTransferArbiterP__0__NO_RES = 0xFF
};
uint8_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_IDLE;
uint8_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__NO_RES;
uint8_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__reqResId;



static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__request(uint8_t id);
#line 98
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__release(uint8_t id);
#line 151
static uint8_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ArbiterInfo__userId(void );










static bool /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__isOwner(uint8_t id);






static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__runTask(void );









static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceRequested__default__requested(uint8_t id);



static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void DispatchUnslottedCsmaP__FrameTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
static message_t *DispatchUnslottedCsmaP__FrameExtracted__received(
# 57 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
uint8_t arg_0x40b67488, 
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
message_t *rxFrame, ieee154_txframe_t *txFrame);
# 56 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static error_t DispatchUnslottedCsmaP__RadioRx__enableRx(uint32_t t0, uint32_t dt);
#line 73
static bool DispatchUnslottedCsmaP__RadioRx__isReceiving(void );
# 73 "/opt/tinyos/tos/lib/timer/Timer.nc"
static void DispatchUnslottedCsmaP__IndirectTxWaitTimer__startOneShot(uint32_t dt);




static void DispatchUnslottedCsmaP__IndirectTxWaitTimer__stop(void );
# 117 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_macMinBE_t DispatchUnslottedCsmaP__MLME_GET__macMinBE(void );
#line 147
static ieee154_macMaxFrameRetries_t DispatchUnslottedCsmaP__MLME_GET__macMaxFrameRetries(void );
#line 84
static ieee154_macBattLifeExt_t DispatchUnslottedCsmaP__MLME_GET__macBattLifeExt(void );
#line 144
static ieee154_macMaxFrameTotalWaitTime_t DispatchUnslottedCsmaP__MLME_GET__macMaxFrameTotalWaitTime(void );
#line 141
static ieee154_macMaxBE_t DispatchUnslottedCsmaP__MLME_GET__macMaxBE(void );
#line 114
static ieee154_macMaxCSMABackoffs_t DispatchUnslottedCsmaP__MLME_GET__macMaxCSMABackoffs(void );
#line 108
static ieee154_macDSN_t DispatchUnslottedCsmaP__MLME_GET__macDSN(void );
#line 99
static ieee154_macBSN_t DispatchUnslottedCsmaP__MLME_GET__macBSN(void );
# 74 "/opt/tinyos/tos/interfaces/Notify.nc"
static void DispatchUnslottedCsmaP__WasRxEnabled__notify(DispatchUnslottedCsmaP__WasRxEnabled__val_t val);
# 111 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_START.nc"
static void DispatchUnslottedCsmaP__MLME_START__confirm(
ieee154_status_t status);
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *DispatchUnslottedCsmaP__FrameRx__received(
# 56 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
uint8_t arg_0x40b43be8, 
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
message_t *frame);
# 55 "/opt/tinyos/tos/interfaces/Get.nc"
static DispatchUnslottedCsmaP__GetIndirectTxFrame__val_t DispatchUnslottedCsmaP__GetIndirectTxFrame__get(void );
# 137 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t DispatchUnslottedCsmaP__RadioToken__release(void );







static bool DispatchUnslottedCsmaP__RadioToken__isOwner(void );
#line 84
static error_t DispatchUnslottedCsmaP__RadioToken__request(void );
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t DispatchUnslottedCsmaP__wasRxEnabledTask__postTask(void );
# 47 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static error_t DispatchUnslottedCsmaP__RadioOff__off(void );
#line 60
static bool DispatchUnslottedCsmaP__RadioOff__isOff(void );
# 62 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
static error_t DispatchUnslottedCsmaP__UnslottedCsmaCa__transmit(ieee154_txframe_t *frame, ieee154_csma_t *csma);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t DispatchUnslottedCsmaP__startIndirectTxTimerTask__postTask(void );
# 51 "/opt/tinyos/tos/interfaces/GetNow.nc"
static DispatchUnslottedCsmaP__IsRadioTokenRequested__data_type DispatchUnslottedCsmaP__IsRadioTokenRequested__getNow(void );
# 118 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
static ieee154_status_t DispatchUnslottedCsmaP__MLME_SET__macDSN(ieee154_macDSN_t value);
#line 103
static ieee154_status_t DispatchUnslottedCsmaP__MLME_SET__macBSN(ieee154_macBSN_t value);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t DispatchUnslottedCsmaP__signalTxDoneTask__postTask(void );
# 51 "/opt/tinyos/tos/interfaces/GetNow.nc"
static DispatchUnslottedCsmaP__IsRxEnableActive__data_type DispatchUnslottedCsmaP__IsRxEnableActive__getNow(void );
# 122 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
enum DispatchUnslottedCsmaP____nesc_unnamed4334 {
#line 122
  DispatchUnslottedCsmaP__signalTxDoneTask = 4U
};
#line 122
typedef int DispatchUnslottedCsmaP____nesc_sillytask_signalTxDoneTask[DispatchUnslottedCsmaP__signalTxDoneTask];
enum DispatchUnslottedCsmaP____nesc_unnamed4335 {
#line 123
  DispatchUnslottedCsmaP__wasRxEnabledTask = 5U
};
#line 123
typedef int DispatchUnslottedCsmaP____nesc_sillytask_wasRxEnabledTask[DispatchUnslottedCsmaP__wasRxEnabledTask];
enum DispatchUnslottedCsmaP____nesc_unnamed4336 {
#line 124
  DispatchUnslottedCsmaP__startIndirectTxTimerTask = 6U
};
#line 124
typedef int DispatchUnslottedCsmaP____nesc_sillytask_startIndirectTxTimerTask[DispatchUnslottedCsmaP__startIndirectTxTimerTask];
enum DispatchUnslottedCsmaP____nesc_unnamed4337 {
#line 125
  DispatchUnslottedCsmaP__signalStartConfirmTask = 7U
};
#line 125
typedef int DispatchUnslottedCsmaP____nesc_sillytask_signalStartConfirmTask[DispatchUnslottedCsmaP__signalStartConfirmTask];
#line 89
#line 84
typedef enum DispatchUnslottedCsmaP____nesc_unnamed4338 {
  DispatchUnslottedCsmaP__SWITCH_OFF, 
  DispatchUnslottedCsmaP__WAIT_FOR_RXDONE, 
  DispatchUnslottedCsmaP__WAIT_FOR_TXDONE, 
  DispatchUnslottedCsmaP__DO_NOTHING
} DispatchUnslottedCsmaP__next_state_t;




#line 91
typedef enum DispatchUnslottedCsmaP____nesc_unnamed4339 {
  DispatchUnslottedCsmaP__INDIRECT_TX_ALARM, 
  DispatchUnslottedCsmaP__NO_ALARM
} DispatchUnslottedCsmaP__rx_alarm_t;


bool DispatchUnslottedCsmaP__m_lock;
bool DispatchUnslottedCsmaP__m_resume;
ieee154_txframe_t *DispatchUnslottedCsmaP__m_currentFrame;
ieee154_txframe_t *DispatchUnslottedCsmaP__m_lastFrame;
ieee154_macRxOnWhenIdle_t DispatchUnslottedCsmaP__m_macRxOnWhenIdle;


ieee154_csma_t DispatchUnslottedCsmaP__m_csma;
ieee154_macMaxBE_t DispatchUnslottedCsmaP__m_BE;
ieee154_macMaxCSMABackoffs_t DispatchUnslottedCsmaP__m_macMaxCSMABackoffs;
ieee154_macMaxBE_t DispatchUnslottedCsmaP__m_macMaxBE;
ieee154_macMaxFrameRetries_t DispatchUnslottedCsmaP__m_macMaxFrameRetries;
ieee154_status_t DispatchUnslottedCsmaP__m_txStatus;
uint32_t DispatchUnslottedCsmaP__m_transactionTime;
bool DispatchUnslottedCsmaP__m_indirectTxPending = FALSE;


static DispatchUnslottedCsmaP__next_state_t DispatchUnslottedCsmaP__tryReceive(void );
static inline DispatchUnslottedCsmaP__next_state_t DispatchUnslottedCsmaP__tryTransmit(void );
static inline DispatchUnslottedCsmaP__next_state_t DispatchUnslottedCsmaP__trySwitchOff(void );


static void DispatchUnslottedCsmaP__updateState(void );
static inline void DispatchUnslottedCsmaP__setCurrentFrame(ieee154_txframe_t *frame);






static error_t DispatchUnslottedCsmaP__Reset__init(void );
#line 180
static inline void DispatchUnslottedCsmaP__signalStartConfirmTask__runTask(void );




static inline ieee154_status_t DispatchUnslottedCsmaP__FrameTx__transmit(ieee154_txframe_t *frame);
#line 201
static inline void DispatchUnslottedCsmaP__RadioToken__granted(void );




static inline void DispatchUnslottedCsmaP__setCurrentFrame(ieee154_txframe_t *frame);
#line 253
static void DispatchUnslottedCsmaP__updateState(void );
#line 325
static inline DispatchUnslottedCsmaP__next_state_t DispatchUnslottedCsmaP__tryTransmit(void );
#line 341
static DispatchUnslottedCsmaP__next_state_t DispatchUnslottedCsmaP__tryReceive(void );
#line 355
static inline DispatchUnslottedCsmaP__next_state_t DispatchUnslottedCsmaP__trySwitchOff(void );









static inline void DispatchUnslottedCsmaP__RadioOff__offDone(void );





static inline void DispatchUnslottedCsmaP__RadioRx__enableRxDone(void );







static inline void DispatchUnslottedCsmaP__RxEnableStateChange__notify(bool whatever);







static inline void DispatchUnslottedCsmaP__PIBUpdateMacRxOnWhenIdle__notify(const void *val);





static void DispatchUnslottedCsmaP__IndirectTxWaitTimer__fired(void );









static inline void DispatchUnslottedCsmaP__startIndirectTxTimerTask__runTask(void );




static void DispatchUnslottedCsmaP__UnslottedCsmaCa__transmitDone(ieee154_txframe_t *frame, 
ieee154_csma_t *csma, bool ackPendingFlag, error_t result);
#line 471
static inline void DispatchUnslottedCsmaP__signalTxDoneTask__runTask(void );
#line 485
static inline message_t *DispatchUnslottedCsmaP__RadioRx__received(message_t *frame);
#line 514
static inline void DispatchUnslottedCsmaP__wasRxEnabledTask__runTask(void );






static inline message_t *DispatchUnslottedCsmaP__FrameRx__default__received(uint8_t client, message_t *data);


static inline message_t *DispatchUnslottedCsmaP__FrameExtracted__default__received(uint8_t client, message_t *msg, ieee154_txframe_t *txFrame);



static inline void DispatchUnslottedCsmaP__MLME_START__default__confirm(ieee154_status_t status);

static inline void DispatchUnslottedCsmaP__RadioTokenRequested__requested(void );
# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmitDone(
# 40 "/opt/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
uint8_t arg_0x40bcdaf8, 
# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
ieee154_txframe_t *txFrame, ieee154_status_t status);
# 37 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/Purge.nc"
static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Purge__purgeDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 73 "/opt/tinyos/tos/interfaces/Queue.nc"
static 
#line 71
/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__t  

/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__head(void );
#line 90
static error_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__enqueue(
#line 86
/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__t  newVal);
#line 81
static 
#line 79
/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__t  

/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__dequeue(void );
#line 58
static uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__size(void );
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask__postTask(void );
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTxCsma__transmit(ieee154_txframe_t *txFrame);
# 51 "/opt/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
enum /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0____nesc_unnamed4340 {
#line 51
  DispatchQueueP__0__txTask = 8U
};
#line 51
typedef int /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0____nesc_sillytask_txTask[/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask];
bool /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__m_state;
uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__m_client;

enum /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0____nesc_unnamed4341 {
  DispatchQueueP__0__TX_DONE_PENDING = 0x01, 
  DispatchQueueP__0__RESET_PENDING = 0x02
};

static inline bool /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__isTxDonePending(void );
static inline void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__setTxDonePending(void );
static inline void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__resetTxDonePending(void );

static inline bool /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__isResetPending(void );
static inline void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__setResetPending(void );
static inline void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__resetResetPending(void );

static inline error_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Reset__init(void );










static ieee154_status_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmit(uint8_t client, ieee154_txframe_t *txFrame);










static inline void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask__runTask(void );
#line 107
static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTxCsma__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 132
static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__default__transmitDone(uint8_t client, ieee154_txframe_t *txFrame, ieee154_status_t status);
# 136 "/opt/tinyos/tos/lib/timer/Timer.nc"
static uint32_t IndirectTxP__IndirectTxTimeout__getNow(void );
#line 73
static void IndirectTxP__IndirectTxTimeout__startOneShot(uint32_t dt);




static void IndirectTxP__IndirectTxTimeout__stop(void );
# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void IndirectTxP__FrameTx__transmitDone(
# 42 "/opt/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
uint8_t arg_0x40bd13b0, 
# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
ieee154_txframe_t *txFrame, ieee154_status_t status);
# 47 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
static bool IndirectTxP__TimeCalc__hasExpired(uint32_t t0, uint32_t dt);
#line 40
static uint32_t IndirectTxP__TimeCalc__timeElapsed(uint32_t t0, uint32_t t1);
# 93 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_macBeaconOrder_t IndirectTxP__MLME_GET__macBeaconOrder(void );
#line 135
static ieee154_macTransactionPersistenceTime_t IndirectTxP__MLME_GET__macTransactionPersistenceTime(void );
# 241 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
static uint8_t IndirectTxP__IEEE154Frame__getHeaderLength(message_t *frame);
#line 139
static error_t IndirectTxP__IEEE154Frame__setAddressingFields(message_t *frame, 
uint8_t SrcAddrMode, 
uint8_t DstAddrMode, 
uint16_t DstPANID, 
ieee154_address_t *DstAddr, 
ieee154_security_t *security);
#line 69
static error_t IndirectTxP__IEEE154Frame__getSrcAddr(message_t *frame, ieee154_address_t *address);
#line 55
static uint8_t IndirectTxP__IEEE154Frame__getSrcAddrMode(message_t *frame);
#line 81
static error_t IndirectTxP__IEEE154Frame__getSrcPANId(message_t *frame, uint16_t *PANID);









static uint8_t IndirectTxP__IEEE154Frame__getDstAddrMode(message_t *frame);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t IndirectTxP__tryCoordCapTxTask__postTask(void );
# 74 "/opt/tinyos/tos/interfaces/Notify.nc"
static void IndirectTxP__PendingAddrSpecUpdated__notify(IndirectTxP__PendingAddrSpecUpdated__val_t val);
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t IndirectTxP__CoordCapTx__transmit(ieee154_txframe_t *txFrame);
# 76 "/opt/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
enum IndirectTxP____nesc_unnamed4342 {
#line 76
  IndirectTxP__tryCoordCapTxTask = 9U
};
#line 76
typedef int IndirectTxP____nesc_sillytask_tryCoordCapTxTask[IndirectTxP__tryCoordCapTxTask];
#line 61
enum IndirectTxP____nesc_unnamed4343 {
  IndirectTxP__SEND_THIS_FRAME = 0x80, 
  IndirectTxP__NUM_MAX_PENDING = 7
};

ieee154_txframe_t *IndirectTxP__m_txFrameTable[IndirectTxP__NUM_MAX_PENDING];
ieee154_txframe_t *IndirectTxP__m_pendingTxFrame;
uint8_t IndirectTxP__m_client;
uint8_t IndirectTxP__m_numTableEntries;
uint8_t IndirectTxP__m_numShortPending;
uint8_t IndirectTxP__m_numExtPending;
ieee154_txframe_t IndirectTxP__m_emptyDataFrame;
ieee154_metadata_t IndirectTxP__m_emptyDataFrameMetadata;
ieee154_header_t IndirectTxP__m_emptyDataFrameHeader;


static inline void IndirectTxP__tryCoordCapTx(void );
static inline void IndirectTxP__transmitEmptyDataFrame(message_t *dataRequestFrame);

static inline error_t IndirectTxP__Reset__init(void );
#line 104
static inline uint32_t IndirectTxP__getPersistenceTimeSymbols(void );
#line 215
static inline message_t *IndirectTxP__DataRequestRx__received(message_t *frame);
#line 269
static inline void IndirectTxP__transmitEmptyDataFrame(message_t *dataRequestFrame);
#line 296
static inline void IndirectTxP__tryCoordCapTx(void );
#line 317
static inline void IndirectTxP__tryCoordCapTxTask__runTask(void );




static inline void IndirectTxP__IndirectTxTimeout__fired(void );
#line 353
static inline void IndirectTxP__CoordCapTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 381
static inline ieee154_txframe_t *IndirectTxP__GetIndirectTxFrame__get(void );


static inline void IndirectTxP__PendingAddrSpecUpdated__default__notify(bool val);
static inline void IndirectTxP__FrameTx__default__transmitDone(uint8_t client, ieee154_txframe_t *txFrame, ieee154_status_t status);
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *PollP__DataRx__received(message_t *frame);
# 89 "/opt/tinyos/tos/interfaces/Pool.nc"
static error_t PollP__TxFramePool__put(
#line 85
PollP__TxFramePool__t * newVal);
# 52 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/DataRequest.nc"
static void PollP__DataRequest__pollDone(
# 46 "/opt/tinyos/tos/lib/mac/tkn154/PollP.nc"
uint8_t arg_0x40c49248);
# 73 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_POLL.nc"
static void PollP__MLME_POLL__confirm(
ieee154_status_t status);
# 89 "/opt/tinyos/tos/interfaces/Pool.nc"
static error_t PollP__TxControlPool__put(
#line 85
PollP__TxControlPool__t * newVal);
# 61 "/opt/tinyos/tos/lib/mac/tkn154/PollP.nc"
enum PollP____nesc_unnamed4344 {
  PollP__HANDLE_MLME_POLL_REQUEST = 0xFF, 
  PollP__HANDLE_MLME_POLL_SUCCESS = 0xFE
};
int PollP__m_numPending;




static inline error_t PollP__Init__init(void );
#line 191
static inline message_t *PollP__DataExtracted__received(message_t *frame, ieee154_txframe_t *txFrame);
#line 207
static inline void PollP__PollTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 223
static inline void PollP__MLME_POLL__default__confirm(ieee154_status_t status);
static inline void PollP__DataRequest__default__pollDone(uint8_t client);
# 70 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoScanP.nc"
static inline error_t NoScanP__Init__init(void );
#line 87
static inline void NoScanP__RadioToken__granted(void );




static inline void NoScanP__EnergyDetection__done(error_t status, int8_t EnergyLevel);

static inline void NoScanP__RadioRx__enableRxDone(void );

static inline message_t *NoScanP__RadioRx__received(message_t *frame);




static inline void NoScanP__RadioTx__transmitDone(ieee154_txframe_t *frame, error_t result);

static inline void NoScanP__ScanTimer__fired(void );

static inline void NoScanP__RadioOff__offDone(void );

static inline token_requested_t NoScanP__IsRadioTokenRequested__getNow(void );
# 60 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoBeaconRequestRxP.nc"
static inline error_t NoBeaconRequestRxP__Reset__init(void );

static inline message_t *NoBeaconRequestRxP__BeaconRequestRx__received(message_t *frame);

static inline void NoBeaconRequestRxP__BeaconRequestResponseTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 69 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoAssociateP.nc"
static inline error_t NoAssociateP__Init__init(void );
#line 86
static inline void NoAssociateP__AssociationRequestTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);

static inline void NoAssociateP__ResponseTimeout__fired(void );

static inline message_t *NoAssociateP__AssociationResponseExtracted__received(message_t *frame, ieee154_txframe_t *txFrame);

static inline void NoAssociateP__DataRequest__pollDone(void );



static inline message_t *NoAssociateP__AssociationRequestRx__received(message_t *frame);
#line 108
static inline void NoAssociateP__AssociationResponseTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 68 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoDisassociateP.nc"
static inline error_t NoDisassociateP__Init__init(void );
#line 84
static inline void NoDisassociateP__DisassociationToCoord__transmitDone(ieee154_txframe_t *data, ieee154_status_t status);

static inline void NoDisassociateP__DisassociationIndirectTx__transmitDone(ieee154_txframe_t *data, ieee154_status_t status);

static inline void NoDisassociateP__DisassociationDirectTx__transmitDone(ieee154_txframe_t *data, ieee154_status_t status);





static inline message_t *NoDisassociateP__DisassociationExtractedFromCoord__received(message_t *frame, ieee154_txframe_t *txFrame);


static inline message_t *NoDisassociateP__DisassociationRxFromDevice__received(message_t *frame);
# 64 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoRxEnableP.nc"
static inline error_t NoRxEnableP__Init__init(void );
#line 77
static inline void NoRxEnableP__RxEnableTimer__fired(void );

static inline bool NoRxEnableP__IsRxEnableActive__getNow(void );

static inline void NoRxEnableP__WasRxEnabled__notify(bool val);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t PromiscuousModeP__signalStartDoneTask__postTask(void );
# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *PromiscuousModeP__FrameRx__received(message_t *frame);
# 113 "/opt/tinyos/tos/interfaces/SplitControl.nc"
static void PromiscuousModeP__PromiscuousMode__startDone(error_t error);
#line 138
static void PromiscuousModeP__PromiscuousMode__stopDone(error_t error);
# 137 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t PromiscuousModeP__RadioToken__release(void );
#line 84
static error_t PromiscuousModeP__RadioToken__request(void );
# 47 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static error_t PromiscuousModeP__RadioOff__off(void );
#line 60
static bool PromiscuousModeP__RadioOff__isOff(void );
# 55 "/opt/tinyos/tos/interfaces/Set.nc"
static void PromiscuousModeP__RadioPromiscuousMode__set(PromiscuousModeP__RadioPromiscuousMode__val_t val);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t PromiscuousModeP__continueStopTask__postTask(void );
# 56 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static error_t PromiscuousModeP__PromiscuousRx__enableRx(uint32_t t0, uint32_t dt);
# 96 "/opt/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
enum PromiscuousModeP____nesc_unnamed4345 {
#line 96
  PromiscuousModeP__signalStartDoneTask = 10U
};
#line 96
typedef int PromiscuousModeP____nesc_sillytask_signalStartDoneTask[PromiscuousModeP__signalStartDoneTask];
#line 129
enum PromiscuousModeP____nesc_unnamed4346 {
#line 129
  PromiscuousModeP__continueStopTask = 11U
};
#line 129
typedef int PromiscuousModeP____nesc_sillytask_continueStopTask[PromiscuousModeP__continueStopTask];
#line 60
#line 55
enum PromiscuousModeP__promiscuous_state {
  PromiscuousModeP__S_STOPPING, 
  PromiscuousModeP__S_STOPPED, 
  PromiscuousModeP__S_STARTING, 
  PromiscuousModeP__S_STARTED
} PromiscuousModeP__m_state;

static inline error_t PromiscuousModeP__Init__init(void );







static inline bool PromiscuousModeP__PromiscuousModeGet__get(void );




static inline error_t PromiscuousModeP__PromiscuousMode__start(void );
#line 87
static inline void PromiscuousModeP__RadioToken__granted(void );








static inline void PromiscuousModeP__signalStartDoneTask__runTask(void );






static inline void PromiscuousModeP__PromiscuousRx__enableRxDone(void );




static inline message_t *PromiscuousModeP__PromiscuousRx__received(message_t *frame);
#line 129
static inline void PromiscuousModeP__continueStopTask__runTask(void );








static void PromiscuousModeP__RadioOff__offDone(void );







static inline token_requested_t PromiscuousModeP__IsRadioTokenRequested__getNow(void );
# 63 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoCoordRealignmentP.nc"
static inline error_t NoCoordRealignmentP__Init__init(void );





static inline message_t *NoCoordRealignmentP__OrphanNotificationRx__received(message_t *frame);
#line 81
static inline void NoCoordRealignmentP__CoordRealignmentTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 60 "/opt/tinyos/tos/system/PoolP.nc"
uint8_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__free;
uint8_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__index;
/*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t * /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__queue[4];
/*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool[4];

static inline error_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Init__init(void );
#line 103
static error_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(/*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t *newVal);
#line 60
uint8_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__free;
uint8_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__index;
/*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t * /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__queue[3];
/*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool[3];

static inline error_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Init__init(void );
#line 103
static inline error_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__put(/*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t *newVal);
# 48 "/opt/tinyos/tos/system/QueueC.nc"
/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue_t  /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue[4];
uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__head = 0;
uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__tail = 0;
uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__size = 0;

static inline bool /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__empty(void );



static inline uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__size(void );



static inline uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__maxSize(void );



static inline /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__head(void );



static inline void /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__printQueue(void );
#line 85
static /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__dequeue(void );
#line 97
static inline error_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__enqueue(/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue_t newVal);
# 72 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
static void CC2420TKN154P__CC2420Config__setShortAddr(uint16_t address);
#line 66
static void CC2420TKN154P__CC2420Config__setChannel(uint8_t channel);
#line 89
static void CC2420TKN154P__CC2420Config__setPromiscuousMode(bool on);
#line 78
static void CC2420TKN154P__CC2420Config__setPanAddr(uint16_t address);
#line 96
static void CC2420TKN154P__CC2420Config__setCCAMode(uint8_t mode);
#line 53
static error_t CC2420TKN154P__CC2420Config__sync(void );
#line 65
static uint8_t CC2420TKN154P__CC2420Config__getChannel(void );
#line 84
static void CC2420TKN154P__CC2420Config__setPanCoordinator(bool pcoord);
#line 102
static void CC2420TKN154P__CC2420Config__setTxPower(uint8_t txPower);
# 113 "/opt/tinyos/tos/interfaces/SplitControl.nc"
static void CC2420TKN154P__SplitControl__startDone(error_t error);
#line 138
static void CC2420TKN154P__SplitControl__stopDone(error_t error);
# 83 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static void CC2420TKN154P__RadioTx__transmitDone(ieee154_txframe_t *frame, error_t result);
# 35 "/opt/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
static void CC2420TKN154P__ReliableWait__waitRx(uint32_t t0, uint32_t dt);





static bool CC2420TKN154P__ReliableWait__ccaOnBackoffBoundary(uint32_t slot0);
#line 37
static void CC2420TKN154P__ReliableWait__waitTx(uint32_t t0, uint32_t dt);

static void CC2420TKN154P__ReliableWait__waitBackoff(uint32_t dt);
# 115 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
static void CC2420TKN154P__SlottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result);
# 47 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
static bool CC2420TKN154P__TimeCalc__hasExpired(uint32_t t0, uint32_t dt);
#line 40
static uint32_t CC2420TKN154P__TimeCalc__timeElapsed(uint32_t t0, uint32_t t1);
# 61 "/opt/tinyos/tos/lib/timer/LocalTime.nc"
static uint32_t CC2420TKN154P__LocalTime__get(void );
# 65 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void CC2420TKN154P__RadioRx__enableRxDone(void );
#line 84
static message_t *CC2420TKN154P__RadioRx__received(message_t *frame);
# 95 "/opt/tinyos/tos/interfaces/AsyncStdControl.nc"
static error_t CC2420TKN154P__TxControl__start(void );









static error_t CC2420TKN154P__TxControl__stop(void );
# 52 "/opt/tinyos/tos/interfaces/Random.nc"
static uint16_t CC2420TKN154P__Random__rand16(void );
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t CC2420TKN154P__configSyncTask__postTask(void );
# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420TKN154P__SpiResource__release(void );
#line 97
static error_t CC2420TKN154P__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420TKN154P__SpiResource__request(void );
#line 128
static bool CC2420TKN154P__SpiResource__isOwner(void );
# 49 "/opt/tinyos/tos/chips/cc2420_tkn154/Timestamp.nc"
static void CC2420TKN154P__Timestamp__transmissionStarted(uint8_t frameType, uint8_t msduHandle, uint8_t *payload, uint8_t token);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t CC2420TKN154P__energyDetectionTask__postTask(void );
# 40 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
static error_t CC2420TKN154P__CC2420Tx__loadTXFIFO(ieee154_txframe_t *data);


static error_t CC2420TKN154P__CC2420Tx__send(bool cca);



static void CC2420TKN154P__CC2420Tx__lockChipSpi(void );
#line 46
static bool CC2420TKN154P__CC2420Tx__cca(void );

static void CC2420TKN154P__CC2420Tx__unlockChipSpi(void );
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t CC2420TKN154P__startDoneTask__postTask(void );
#line 67
static error_t CC2420TKN154P__rxControlStopDoneTask__postTask(void );
# 53 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void CC2420TKN154P__RadioOff__offDone(void );
# 89 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
static void CC2420TKN154P__UnslottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result);
# 72 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
static error_t CC2420TKN154P__CC2420Power__startOscillator(void );
#line 98
static error_t CC2420TKN154P__CC2420Power__rfOff(void );
#line 112
static error_t CC2420TKN154P__CC2420Power__flushRxFifo(void );
#line 91
static error_t CC2420TKN154P__CC2420Power__rxOn(void );
#line 52
static error_t CC2420TKN154P__CC2420Power__startVReg(void );
#line 64
static error_t CC2420TKN154P__CC2420Power__stopVReg(void );
#line 84
static error_t CC2420TKN154P__CC2420Power__stopOscillator(void );
#line 104
static error_t CC2420TKN154P__CC2420Power__rssi(int8_t *rssi);
# 61 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/EnergyDetection.nc"
static void CC2420TKN154P__EnergyDetection__done(error_t status, int8_t EnergyLevel);
# 113 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420AsyncSplitControl.nc"
static error_t CC2420TKN154P__RxControl__start(void );









static error_t CC2420TKN154P__RxControl__stop(void );
# 117 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
enum CC2420TKN154P____nesc_unnamed4347 {
#line 117
  CC2420TKN154P__energyDetectionTask = 12U
};
#line 117
typedef int CC2420TKN154P____nesc_sillytask_energyDetectionTask[CC2420TKN154P__energyDetectionTask];
enum CC2420TKN154P____nesc_unnamed4348 {
#line 118
  CC2420TKN154P__startDoneTask = 13U
};
#line 118
typedef int CC2420TKN154P____nesc_sillytask_startDoneTask[CC2420TKN154P__startDoneTask];
enum CC2420TKN154P____nesc_unnamed4349 {
#line 119
  CC2420TKN154P__rxControlStopDoneTask = 14U
};
#line 119
typedef int CC2420TKN154P____nesc_sillytask_rxControlStopDoneTask[CC2420TKN154P__rxControlStopDoneTask];
enum CC2420TKN154P____nesc_unnamed4350 {
#line 120
  CC2420TKN154P__configSyncTask = 15U
};
#line 120
typedef int CC2420TKN154P____nesc_sillytask_configSyncTask[CC2420TKN154P__configSyncTask];
#line 95
#line 74
typedef enum CC2420TKN154P____nesc_unnamed4351 {
  CC2420TKN154P__S_STOPPED, 
  CC2420TKN154P__S_STOPPING, 
  CC2420TKN154P__S_STARTING, 
  CC2420TKN154P__S_ED, 
  CC2420TKN154P__S_RADIO_OFF, 

  CC2420TKN154P__S_RESERVE_RX_SPI, 
  CC2420TKN154P__S_RX_PENDING, 
  CC2420TKN154P__S_RECEIVING, 
  CC2420TKN154P__S_OFF_PENDING, 

  CC2420TKN154P__S_LOAD_TXFIFO_NO_CSMA, 
  CC2420TKN154P__S_LOAD_TXFIFO_UNSLOTTED, 
  CC2420TKN154P__S_LOAD_TXFIFO_SLOTTED, 
  CC2420TKN154P__S_TX_PENDING, 
  CC2420TKN154P__S_TX_BACKOFF_UNSLOTTED, 
  CC2420TKN154P__S_TX_BACKOFF_SLOTTED, 
  CC2420TKN154P__S_TX_ACTIVE_NO_CSMA, 
  CC2420TKN154P__S_TX_ACTIVE_UNSLOTTED_CSMA, 
  CC2420TKN154P__S_TX_ACTIVE_SLOTTED_CSMA
} CC2420TKN154P__m_state_t;

CC2420TKN154P__m_state_t CC2420TKN154P__m_state = CC2420TKN154P__S_STOPPED;
ieee154_txframe_t *CC2420TKN154P__m_txframe;
error_t CC2420TKN154P__m_txResult;
bool CC2420TKN154P__m_ackFramePending;
uint16_t CC2420TKN154P__m_remainingBackoff;
bool CC2420TKN154P__m_resume;
ieee154_csma_t *CC2420TKN154P__m_csma;



uint32_t CC2420TKN154P__m_dt;
uint32_t CC2420TKN154P__m_t0;



int8_t CC2420TKN154P__m_maxEnergy;
uint32_t CC2420TKN154P__m_edDuration;
uint32_t CC2420TKN154P__m_edStartTime;








static inline uint8_t CC2420TKN154P__dBmToPA_LEVEL(int dbm);
static inline void CC2420TKN154P__txDoneRxControlStopped(void );
static void CC2420TKN154P__rxSpiReserved(void );
static void CC2420TKN154P__txSpiReserved(void );
static void CC2420TKN154P__sendDoneSpiReserved(void );
static void CC2420TKN154P__offSpiReserved(void );
static inline void CC2420TKN154P__offStopRxDone(void );
static uint16_t CC2420TKN154P__getRandomBackoff(uint8_t BE);
static inline void CC2420TKN154P__loadTxFrame(ieee154_txframe_t *frame);
static void CC2420TKN154P__checkEnableRxForACK(void );



static inline error_t CC2420TKN154P__SplitControl__start(void );
#line 149
static inline void CC2420TKN154P__startSpiReserved(void );





static inline void CC2420TKN154P__CC2420Power__startVRegDone(void );




static inline void CC2420TKN154P__CC2420Power__startOscillatorDone(void );







static inline void CC2420TKN154P__startDoneTask__runTask(void );
#line 180
static inline error_t CC2420TKN154P__SplitControl__stop(void );
#line 193
static inline void CC2420TKN154P__stopSpiReserved(void );
#line 210
static uint16_t CC2420TKN154P__getRandomBackoff(uint8_t BE);










static inline uint8_t CC2420TKN154P__dBmToPA_LEVEL(int dBm);
#line 244
static void CC2420TKN154P__PIBUpdate__notify(uint8_t PIBAttribute, const void *PIBAttributeValue);
#line 276
static inline void CC2420TKN154P__configSyncTask__runTask(void );
#line 290
static inline void CC2420TKN154P__RadioPromiscuousMode__set(bool val);
#line 312
static inline void CC2420TKN154P__edReserved(void );







static inline void CC2420TKN154P__energyDetectionTask__runTask(void );
#line 342
static inline error_t CC2420TKN154P__RadioOff__off(void );
#line 357
static inline void CC2420TKN154P__offStopRxDone(void );







static void CC2420TKN154P__offSpiReserved(void );










static inline bool CC2420TKN154P__RadioOff__isOff(void );






static inline error_t CC2420TKN154P__RadioRx__enableRx(uint32_t t0, uint32_t dt);
#line 403
static void CC2420TKN154P__rxSpiReserved(void );
#line 417
static void CC2420TKN154P__ReliableWait__waitRxDone(void );
#line 430
static inline message_t *CC2420TKN154P__CC2420Rx__received(message_t *frame);







static inline bool CC2420TKN154P__RadioRx__isReceiving(void );
#line 464
static inline void CC2420TKN154P__loadDoneRadioTx(void );
#line 476
static void CC2420TKN154P__ReliableWait__waitTxDone(void );
#line 488
static __inline void CC2420TKN154P__txDoneRadioTx(ieee154_txframe_t *frame, error_t result);







static inline error_t CC2420TKN154P__UnslottedCsmaCa__transmit(ieee154_txframe_t *frame, ieee154_csma_t *csma);
#line 513
static void CC2420TKN154P__nextIterationUnslottedCsma(void );







static inline void CC2420TKN154P__waitBackoffDoneUnslottedCsma(void );
#line 572
static __inline void CC2420TKN154P__txDoneUnslottedCsma(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result);
#line 607
static void CC2420TKN154P__nextIterationSlottedCsma(void );
#line 644
static inline void CC2420TKN154P__waitBackoffDoneSlottedCsma(void );
#line 713
static __inline void CC2420TKN154P__txDoneSlottedCsmaCa(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result);







static inline void CC2420TKN154P__loadTxFrame(ieee154_txframe_t *frame);







static void CC2420TKN154P__txSpiReserved(void );








static inline void CC2420TKN154P__CC2420Tx__loadTXFIFODone(ieee154_txframe_t *data, error_t error);
#line 752
static void CC2420TKN154P__checkEnableRxForACK(void );
#line 768
static void CC2420TKN154P__CC2420Tx__sendDone(ieee154_txframe_t *frame, bool ackPendingFlag, error_t result);
#line 782
static inline void CC2420TKN154P__txDoneRxControlStopped(void );








static void CC2420TKN154P__sendDoneSpiReserved(void );
#line 815
static inline void CC2420TKN154P__CC2420Tx__transmissionStarted(ieee154_txframe_t *frame);
#line 837
static inline void CC2420TKN154P__ReliableWait__waitBackoffDone(void );
#line 849
static inline void CC2420TKN154P__RxControl__stopDone(error_t error);




static inline void CC2420TKN154P__rxControlStopDoneTask__runTask(void );
#line 868
static inline void CC2420TKN154P__SpiResource__granted(void );
#line 887
static inline bool CC2420TKN154P__CCA__getNow(void );









static inline void CC2420TKN154P__SlottedCsmaCa__default__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result);

static inline void CC2420TKN154P__Timestamp__default__transmissionStarted(uint8_t frameType, uint8_t msduHandle, uint8_t *msdu, uint8_t token);
# 43 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static bool CC2420ControlP__FIFO__get(void );
# 63 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data);
#line 63
static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data);
# 46 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__RSTN__makeOutput(void );
#line 40
static void CC2420ControlP__RSTN__set(void );
static void CC2420ControlP__RSTN__clr(void );
# 55 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data);







static cc2420_status_t CC2420ControlP__TXCTRL__write(uint16_t data);
#line 63
static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data);
# 53 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SACKPEND__strobe(void );
# 46 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__CSN__makeOutput(void );
#line 40
static void CC2420ControlP__CSN__set(void );
static void CC2420ControlP__CSN__clr(void );
# 53 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SXOSCOFF__strobe(void );
# 46 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__VREN__makeOutput(void );
#line 40
static void CC2420ControlP__VREN__set(void );
static void CC2420ControlP__VREN__clr(void );
# 53 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void );
# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__SpiResource__release(void );
#line 97
static error_t CC2420ControlP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420ControlP__SpiResource__request(void );
#line 128
static bool CC2420ControlP__SpiResource__isOwner(void );
# 77 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
static void CC2420ControlP__CC2420Power__startOscillatorDone(void );
#line 57
static void CC2420ControlP__CC2420Power__startVRegDone(void );
# 63 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data);
#line 63
static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data);
# 53 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRXON__strobe(void );
# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
static void CC2420ControlP__Resource__granted(void );
# 63 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420ControlP__IEEEADR__write(uint8_t offset, uint8_t * data, uint8_t length);
# 61 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ControlP__InterruptCCA__disable(void );
#line 53
static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void );
# 55 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RXFIFO_REGISTER__read(uint16_t *data);
# 53 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SFLUSHRX__strobe(void );
# 66 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupAlarm__start(CC2420ControlP__StartupAlarm__size_type dt);
# 55 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
static void CC2420ControlP__FrameUtility__copyLocalExtendedAddressLE(uint8_t *destLE);
# 53 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void );
# 88 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
#line 82
typedef enum CC2420ControlP____nesc_unnamed4352 {
  CC2420ControlP__S_VREG_STOPPED, 
  CC2420ControlP__S_VREG_STARTING, 
  CC2420ControlP__S_VREG_STARTED, 
  CC2420ControlP__S_XOSC_STARTING, 
  CC2420ControlP__S_XOSC_STARTED
} CC2420ControlP__cc2420_control_state_t;

uint8_t CC2420ControlP__m_channel;
uint16_t CC2420ControlP__m_pan;
uint16_t CC2420ControlP__m_short_addr;
bool CC2420ControlP__autoAckEnabled;
bool CC2420ControlP__hwAutoAckDefault;
bool CC2420ControlP__addressRecognition;
bool CC2420ControlP__acceptReservedFrames;
bool CC2420ControlP__m_isPanCoord;
uint8_t CC2420ControlP__m_CCAMode;
uint8_t CC2420ControlP__m_txPower;

bool CC2420ControlP__m_needsSync;

CC2420ControlP__cc2420_control_state_t CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;



static void CC2420ControlP__writeFsctrl(void );
static void CC2420ControlP__writeMdmctrl0(void );
static void CC2420ControlP__writeId(void );
static inline void CC2420ControlP__writeTxPower(void );


static inline error_t CC2420ControlP__Init__init(void );
#line 145
static error_t CC2420ControlP__Resource__immediateRequest(void );







static inline error_t CC2420ControlP__Resource__request(void );



static inline bool CC2420ControlP__Resource__isOwner(void );



static error_t CC2420ControlP__Resource__release(void );






static inline void CC2420ControlP__SpiResource__granted(void );





static inline error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 186
static inline error_t CC2420ControlP__CC2420Power__stopVReg(void );







static inline error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 228
static inline error_t CC2420ControlP__CC2420Power__stopOscillator(void );
#line 242
static error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 255
static error_t CC2420ControlP__CC2420Power__rfOff(void );
#line 267
static error_t CC2420ControlP__CC2420Power__flushRxFifo(void );
#line 292
static inline uint8_t CC2420ControlP__CC2420Config__getChannel(void );



static void CC2420ControlP__CC2420Config__setChannel(uint8_t channel);










static inline void CC2420ControlP__CC2420Config__setShortAddr(uint16_t addr);










static inline void CC2420ControlP__CC2420Config__setPanAddr(uint16_t pan);










static inline void CC2420ControlP__CC2420Config__setPanCoordinator(bool pCoord);






static void CC2420ControlP__CC2420Config__setPromiscuousMode(bool on);
#line 352
static inline bool CC2420ControlP__CC2420Config__isPromiscuousModeEnabled(void );









static inline void CC2420ControlP__CC2420Config__setCCAMode(uint8_t mode);
#line 375
static inline void CC2420ControlP__CC2420Config__setTxPower(uint8_t txPower);
#line 392
static error_t CC2420ControlP__CC2420Config__sync(void );
#line 417
static error_t CC2420ControlP__CC2420Power__rssi(int8_t *rssi);
#line 436
static void CC2420ControlP__StartupAlarm__fired(void );









static inline void CC2420ControlP__InterruptCCA__fired(void );
#line 461
static void CC2420ControlP__writeFsctrl(void );
#line 475
static void CC2420ControlP__writeMdmctrl0(void );
#line 498
static void CC2420ControlP__writeId(void );
#line 518
static inline void CC2420ControlP__writeTxPower(void );
# 78 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__makeInput(void );
#line 73
static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__get(void );
# 51 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get(void );
static inline void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput(void );
# 85 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__makeOutput(void );
#line 48
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__clr(void );
# 48 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput(void );
# 73 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__HplGeneralIO__get(void );
# 51 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get(void );
# 73 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__HplGeneralIO__get(void );
# 51 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get(void );
# 85 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__makeOutput(void );
#line 48
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__clr(void );
# 48 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput(void );
# 78 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__makeInput(void );
#line 73
static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__get(void );
# 51 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__get(void );
static inline void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput(void );
# 85 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__makeOutput(void );
#line 48
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__clr(void );
# 48 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput(void );
# 68 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow(void );
# 61 "/opt/tinyos/tos/interfaces/GpioCapture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(uint16_t time);
# 55 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(uint8_t cm);

static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents(void );
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents(void );
#line 44
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt(void );
# 99 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectIOFunc(void );
#line 92
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc(void );
# 49 "/opt/tinyos/tos/chips/msp430/timer/GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(uint8_t mode);
#line 61
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void );



static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable(void );






static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time);
# 72 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void HplMsp430InterruptP__Port14__fired(void );
#line 72
static void HplMsp430InterruptP__Port26__fired(void );
#line 72
static void HplMsp430InterruptP__Port17__fired(void );
#line 72
static void HplMsp430InterruptP__Port21__fired(void );
#line 72
static void HplMsp430InterruptP__Port12__fired(void );
#line 72
static void HplMsp430InterruptP__Port24__fired(void );
#line 72
static void HplMsp430InterruptP__Port15__fired(void );
#line 72
static void HplMsp430InterruptP__Port27__fired(void );
#line 72
static void HplMsp430InterruptP__Port10__fired(void );
#line 72
static void HplMsp430InterruptP__Port22__fired(void );
#line 72
static void HplMsp430InterruptP__Port13__fired(void );
#line 72
static void HplMsp430InterruptP__Port25__fired(void );
#line 72
static void HplMsp430InterruptP__Port16__fired(void );
#line 72
static void HplMsp430InterruptP__Port20__fired(void );
#line 72
static void HplMsp430InterruptP__Port11__fired(void );
#line 72
static void HplMsp430InterruptP__Port23__fired(void );
# 64 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
void sig_PORT1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0008)))  ;
#line 79
static inline void HplMsp430InterruptP__Port11__default__fired(void );
static inline void HplMsp430InterruptP__Port12__default__fired(void );
static inline void HplMsp430InterruptP__Port13__default__fired(void );

static inline void HplMsp430InterruptP__Port15__default__fired(void );
static inline void HplMsp430InterruptP__Port16__default__fired(void );
static inline void HplMsp430InterruptP__Port17__default__fired(void );
static inline void HplMsp430InterruptP__Port10__enable(void );



static inline void HplMsp430InterruptP__Port14__enable(void );



static inline void HplMsp430InterruptP__Port10__disable(void );



static inline void HplMsp430InterruptP__Port14__disable(void );



static inline void HplMsp430InterruptP__Port10__clear(void );
static inline void HplMsp430InterruptP__Port11__clear(void );
static inline void HplMsp430InterruptP__Port12__clear(void );
static inline void HplMsp430InterruptP__Port13__clear(void );
static inline void HplMsp430InterruptP__Port14__clear(void );
static inline void HplMsp430InterruptP__Port15__clear(void );
static inline void HplMsp430InterruptP__Port16__clear(void );
static inline void HplMsp430InterruptP__Port17__clear(void );








static inline void HplMsp430InterruptP__Port10__edge(bool l2h);
#line 142
static inline void HplMsp430InterruptP__Port14__edge(bool l2h);
#line 169
void sig_PORT2_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0002)))  ;
#line 182
static inline void HplMsp430InterruptP__Port20__default__fired(void );
static inline void HplMsp430InterruptP__Port21__default__fired(void );
static inline void HplMsp430InterruptP__Port22__default__fired(void );
static inline void HplMsp430InterruptP__Port23__default__fired(void );
static inline void HplMsp430InterruptP__Port24__default__fired(void );
static inline void HplMsp430InterruptP__Port25__default__fired(void );
static inline void HplMsp430InterruptP__Port26__default__fired(void );
static inline void HplMsp430InterruptP__Port27__default__fired(void );
#line 206
static inline void HplMsp430InterruptP__Port20__clear(void );
static inline void HplMsp430InterruptP__Port21__clear(void );
static inline void HplMsp430InterruptP__Port22__clear(void );
static inline void HplMsp430InterruptP__Port23__clear(void );
static inline void HplMsp430InterruptP__Port24__clear(void );
static inline void HplMsp430InterruptP__Port25__clear(void );
static inline void HplMsp430InterruptP__Port26__clear(void );
static inline void HplMsp430InterruptP__Port27__clear(void );
# 52 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear(void );
#line 47
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable(void );
#line 67
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(bool low_to_high);
#line 42
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable(void );
# 68 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired(void );
# 52 "/opt/tinyos/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(bool rising);








static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void );







static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void );







static inline void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void );
# 52 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear(void );
#line 47
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable(void );
#line 67
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(bool low_to_high);
#line 42
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable(void );
# 68 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired(void );
# 52 "/opt/tinyos/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(bool rising);
#line 65
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void );



static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void );







static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void );
# 70 "/opt/tinyos/tos/interfaces/SpiPacket.nc"
static error_t CC2420SpiP__SpiPacket__send(
#line 59
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 91 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420SpiP__Fifo__writeDone(
# 46 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40fff010, 
# 91 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420SpiP__Fifo__readDone(
# 46 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40fff010, 
# 71 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 24 "/opt/tinyos/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__releasing(void );
# 45 "/opt/tinyos/tos/interfaces/SpiByte.nc"
static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx);
# 56 "/opt/tinyos/tos/interfaces/State.nc"
static void CC2420SpiP__WorkingState__toIdle(void );




static bool CC2420SpiP__WorkingState__isIdle(void );
#line 45
static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState);
# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__SpiResource__release(void );
#line 97
static error_t CC2420SpiP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420SpiP__SpiResource__request(void );
#line 128
static bool CC2420SpiP__SpiResource__isOwner(void );
#line 102
static void CC2420SpiP__Resource__granted(
# 45 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x41000558);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t CC2420SpiP__grant__postTask(void );
# 88 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
enum CC2420SpiP____nesc_unnamed4353 {
#line 88
  CC2420SpiP__grant = 16U
};
#line 88
typedef int CC2420SpiP____nesc_sillytask_grant[CC2420SpiP__grant];
#line 63
enum CC2420SpiP____nesc_unnamed4354 {
  CC2420SpiP__RESOURCE_COUNT = 2U, 
  CC2420SpiP__NO_HOLDER = 0xFF
};


enum CC2420SpiP____nesc_unnamed4355 {
  CC2420SpiP__S_IDLE, 
  CC2420SpiP__S_BUSY
};


uint16_t CC2420SpiP__m_addr;


uint8_t CC2420SpiP__m_requests = 0;


uint8_t CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;


bool CC2420SpiP__release;


static error_t CC2420SpiP__attemptRelease(void );







static inline void CC2420SpiP__ChipSpiResource__abortRelease(void );






static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );




static error_t CC2420SpiP__Resource__request(uint8_t id);
#line 126
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id);
#line 149
static error_t CC2420SpiP__Resource__release(uint8_t id);
#line 178
static bool CC2420SpiP__Resource__isOwner(uint8_t id);





static inline void CC2420SpiP__SpiResource__granted(void );




static inline cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 209
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len);



static cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 260
static inline cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 287
static cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data);
#line 305
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data);
#line 318
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr);










static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);








static error_t CC2420SpiP__attemptRelease(void );
#line 358
static inline void CC2420SpiP__grant__runTask(void );








static inline void CC2420SpiP__Resource__default__granted(uint8_t id);


static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);


static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);
# 74 "/opt/tinyos/tos/system/StateImplP.nc"
uint8_t StateImplP__state[1U];

enum StateImplP____nesc_unnamed4356 {
  StateImplP__S_IDLE = 0
};


static inline error_t StateImplP__Init__init(void );
#line 96
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState);
#line 118
static inline void StateImplP__State__toIdle(uint8_t id);







static inline bool StateImplP__State__isIdle(uint8_t id);






static inline bool StateImplP__State__isState(uint8_t id, uint8_t myState);
# 82 "/opt/tinyos/tos/interfaces/SpiPacket.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__sendDone(
# 79 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x410ce068, 
# 75 "/opt/tinyos/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 39 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiConfigure.nc"
static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__getConfig(
# 82 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x410cd308);
# 180 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__enableRxIntr(void );
#line 197
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__clrRxIntr(void );
#line 97
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(bool reset);
#line 177
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableRxIntr(void );
#line 224
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(uint8_t data);
#line 168
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__setModeSpi(msp430_spi_union_config_t *config);
#line 231
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx(void );
#line 192
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending(void );
#line 158
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableSpi(void );
# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__release(
# 81 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x410ce860);
# 97 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__immediateRequest(
# 81 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x410ce860);
# 88 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__request(
# 81 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x410ce860);
# 128 "/opt/tinyos/tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__isOwner(
# 81 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x410ce860);
# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__granted(
# 75 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x41093460);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__postTask(void );
# 102 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
enum /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0____nesc_unnamed4357 {
#line 102
  Msp430SpiNoDmaP__0__signalDone_task = 17U
};
#line 102
typedef int /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0____nesc_sillytask_signalDone_task[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task];
#line 91
enum /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0____nesc_unnamed4358 {
  Msp430SpiNoDmaP__0__SPI_ATOMIC_SIZE = 2
};

uint16_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len;
uint8_t * /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf;
uint8_t * /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf;
uint16_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos;
uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_client;

static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone(void );


static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(uint8_t id);



static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(uint8_t id);



static inline bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(uint8_t id);



static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(uint8_t id);





static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(uint8_t id);



static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(uint8_t tx);
#line 172
static inline bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(uint8_t id);
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(uint8_t id);
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(uint8_t id);
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(uint8_t id);
static inline msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(uint8_t id);

static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp(void );
#line 205
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(uint8_t id, uint8_t *tx_buf, 
uint8_t *rx_buf, 
uint16_t len);
#line 227
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask(void );



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(uint8_t data);
#line 244
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone(void );




static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone(void );

static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error);
# 99 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__UCLK__selectIOFunc(void );
#line 92
static void HplMsp430Usart0P__UCLK__selectModuleFunc(void );
# 54 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void HplMsp430Usart0P__Interrupts__rxDone(uint8_t data);
#line 49
static void HplMsp430Usart0P__Interrupts__txDone(void );
# 99 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__URXD__selectIOFunc(void );
#line 99
static void HplMsp430Usart0P__UTXD__selectIOFunc(void );
# 7 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430I2C.nc"
static void HplMsp430Usart0P__HplI2C__clearModeI2C(void );
#line 6
static bool HplMsp430Usart0P__HplI2C__isI2C(void );
# 99 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__SOMI__selectIOFunc(void );
#line 92
static void HplMsp430Usart0P__SOMI__selectModuleFunc(void );
# 39 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void HplMsp430Usart0P__I2CInterrupts__fired(void );
# 99 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__SIMO__selectIOFunc(void );
#line 92
static void HplMsp430Usart0P__SIMO__selectModuleFunc(void );
# 89 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static volatile uint8_t HplMsp430Usart0P__IE1 __asm ("0x0000");
static volatile uint8_t HplMsp430Usart0P__ME1 __asm ("0x0004");
static volatile uint8_t HplMsp430Usart0P__IFG1 __asm ("0x0002");
static volatile uint8_t HplMsp430Usart0P__U0TCTL __asm ("0x0071");

static volatile uint8_t HplMsp430Usart0P__U0TXBUF __asm ("0x0077");

void sig_UART0RX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0012)))  ;




void sig_UART0TX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0010)))  ;
#line 132
static inline void HplMsp430Usart0P__Usart__setUbr(uint16_t control);










static inline void HplMsp430Usart0P__Usart__setUmctl(uint8_t control);







static inline void HplMsp430Usart0P__Usart__resetUsart(bool reset);
#line 207
static inline void HplMsp430Usart0P__Usart__disableUart(void );
#line 238
static inline void HplMsp430Usart0P__Usart__enableSpi(void );








static void HplMsp430Usart0P__Usart__disableSpi(void );








static inline void HplMsp430Usart0P__configSpi(msp430_spi_union_config_t *config);








static void HplMsp430Usart0P__Usart__setModeSpi(msp430_spi_union_config_t *config);
#line 330
static inline bool HplMsp430Usart0P__Usart__isRxIntrPending(void );










static inline void HplMsp430Usart0P__Usart__clrRxIntr(void );



static inline void HplMsp430Usart0P__Usart__clrIntr(void );



static inline void HplMsp430Usart0P__Usart__disableRxIntr(void );







static inline void HplMsp430Usart0P__Usart__disableIntr(void );



static inline void HplMsp430Usart0P__Usart__enableRxIntr(void );
#line 382
static inline void HplMsp430Usart0P__Usart__tx(uint8_t data);



static inline uint8_t HplMsp430Usart0P__Usart__rx(void );
# 90 "/opt/tinyos/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(void );
# 54 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(
# 39 "/opt/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x4117b200, 
# 54 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(
# 39 "/opt/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x4117b200);
# 39 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(
# 40 "/opt/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x4117ba80);








static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data);




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(uint8_t id);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(uint8_t id);
# 49 "/opt/tinyos/tos/system/FcfsResourceQueueC.nc"
enum /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0____nesc_unnamed4359 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[1U];
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41198690);
# 61 "/opt/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(
# 55 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41198690);
# 65 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41196a58);
# 59 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41196a58);
# 79 "/opt/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "/opt/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
#line 81
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void );
# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41199bd0);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/opt/tinyos/tos/system/ArbiterP.nc"
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4360 {
#line 75
  ArbiterP__0__grantedTask = 18U
};
#line 75
typedef int /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4361 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4362 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4363 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;



static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 93
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 111
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 133
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 153
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void );
#line 166
static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );










static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(uint8_t id);
#line 190
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 202
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );


static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void );


static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 97 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430I2C0P__HplUsart__resetUsart(bool reset);
# 49 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430I2C0P.nc"
static volatile uint8_t HplMsp430I2C0P__U0CTL __asm ("0x0070");





static inline bool HplMsp430I2C0P__HplI2C__isI2C(void );



static inline void HplMsp430I2C0P__HplI2C__clearModeI2C(void );
# 53 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void );
# 54 "/opt/tinyos/tos/interfaces/GpioCapture.nc"
static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void );
#line 66
static void CC2420TransmitP__CaptureSFD__disable(void );
#line 53
static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void );
# 55 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time);
# 31 "/opt/tinyos/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__abortRelease(void );







static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void );
# 53 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void );
# 46 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__CSN__makeOutput(void );
#line 40
static void CC2420TransmitP__CSN__set(void );
static void CC2420TransmitP__CSN__clr(void );


static void CC2420TransmitP__CCA__makeInput(void );
#line 43
static bool CC2420TransmitP__CCA__get(void );
# 41 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
static void CC2420TransmitP__CC2420Tx__loadTXFIFODone(ieee154_txframe_t *data, error_t error);


static void CC2420TransmitP__CC2420Tx__sendDone(ieee154_txframe_t *frame, bool ackPendingFlag, error_t error);





static void CC2420TransmitP__CC2420Tx__transmissionStarted(ieee154_txframe_t *data);
# 53 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SNOP__strobe(void );
# 44 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__SFD__makeInput(void );
#line 43
static bool CC2420TransmitP__SFD__get(void );
# 47 "/opt/tinyos/tos/chips/cc2420_tkn154/CaptureTime.nc"
static uint32_t CC2420TransmitP__CaptureTime__getTimestamp(uint16_t SFDCaptureTime);








static uint16_t CC2420TransmitP__CaptureTime__getSFDUptime(uint16_t SFDCaptureTime, uint16_t EFDCaptureTime);
# 66 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void CC2420TransmitP__BackoffAlarm__start(CC2420TransmitP__BackoffAlarm__size_type dt);






static void CC2420TransmitP__BackoffAlarm__stop(void );
# 82 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length);
# 53 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXON__strobe(void );
# 94 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
#line 86
typedef enum CC2420TransmitP____nesc_unnamed4364 {
  CC2420TransmitP__S_STOPPED, 
  CC2420TransmitP__S_STARTED, 
  CC2420TransmitP__S_LOAD, 
  CC2420TransmitP__S_READY_TX, 
  CC2420TransmitP__S_SFD, 
  CC2420TransmitP__S_EFD, 
  CC2420TransmitP__S_ACK_WAIT
} CC2420TransmitP__cc2420_transmit_state_t;





enum CC2420TransmitP____nesc_unnamed4365 {
  CC2420TransmitP__CC2420_ABORT_PERIOD = 320 * 3
};

ieee154_txframe_t *CC2420TransmitP__m_frame;

CC2420TransmitP__cc2420_transmit_state_t CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;

bool CC2420TransmitP__m_receiving = FALSE;

uint16_t CC2420TransmitP__m_prev_time;


bool CC2420TransmitP__sfdHigh;


bool CC2420TransmitP__abortSpiRelease;


static inline void CC2420TransmitP__signalDone(bool ackFramePending, error_t err);


static inline error_t CC2420TransmitP__Init__init(void );







static error_t CC2420TransmitP__AsyncStdControl__start(void );










static error_t CC2420TransmitP__AsyncStdControl__stop(void );
#line 154
static inline error_t CC2420TransmitP__CC2420Tx__loadTXFIFO(ieee154_txframe_t *data);
#line 172
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);
#line 190
static error_t CC2420TransmitP__CC2420Tx__send(bool cca);
#line 245
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
#line 327
static inline bool CC2420TransmitP__CC2420Tx__cca(void );
#line 341
static inline void CC2420TransmitP__CC2420Tx__lockChipSpi(void );




static inline void CC2420TransmitP__CC2420Tx__unlockChipSpi(void );




static inline void CC2420TransmitP__ChipSpiResource__releasing(void );
#line 363
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ackFrame);
#line 375
static inline void CC2420TransmitP__BackoffAlarm__fired(void );
#line 410
static inline void CC2420TransmitP__signalDone(bool ackFramePending, error_t err);





static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);
# 43 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFO__get(void );
# 90 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
static bool CC2420ReceiveP__CC2420Config__isPromiscuousModeEnabled(void );
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t CC2420ReceiveP__receiveDone_task__postTask(void );
# 43 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFOP__get(void );
# 45 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Rx.nc"
static message_t *CC2420ReceiveP__CC2420Rx__received(message_t *data);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t CC2420ReceiveP__stopContinueTask__postTask(void );
# 63 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message);
# 132 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420AsyncSplitControl.nc"
static void CC2420ReceiveP__AsyncSplitControl__stopDone(error_t error);
# 40 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static void CC2420ReceiveP__CSN__set(void );
static void CC2420ReceiveP__CSN__clr(void );
# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420ReceiveP__SpiResource__release(void );
#line 97
static error_t CC2420ReceiveP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420ReceiveP__SpiResource__request(void );
#line 128
static bool CC2420ReceiveP__SpiResource__isOwner(void );
# 62 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length);
# 61 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ReceiveP__InterruptFIFOP__disable(void );
#line 54
static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void );
# 53 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void );
# 48 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
static error_t CC2420ReceiveP__FrameUtility__getMHRLength(uint8_t fcf1, uint8_t fcf2, uint8_t *len);
# 121 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
enum CC2420ReceiveP____nesc_unnamed4366 {
#line 121
  CC2420ReceiveP__stopContinueTask = 19U
};
#line 121
typedef int CC2420ReceiveP____nesc_sillytask_stopContinueTask[CC2420ReceiveP__stopContinueTask];

enum CC2420ReceiveP____nesc_unnamed4367 {
#line 123
  CC2420ReceiveP__receiveDone_task = 20U
};
#line 123
typedef int CC2420ReceiveP____nesc_sillytask_receiveDone_task[CC2420ReceiveP__receiveDone_task];
#line 73
#line 65
typedef enum CC2420ReceiveP____nesc_unnamed4368 {
  CC2420ReceiveP__S_STOPPED, 
  CC2420ReceiveP__S_STARTING, 
  CC2420ReceiveP__S_STARTED, 
  CC2420ReceiveP__S_RX_LENGTH, 
  CC2420ReceiveP__S_RX_FCF, 
  CC2420ReceiveP__S_RX_HEADER, 
  CC2420ReceiveP__S_RX_PAYLOAD
} CC2420ReceiveP__cc2420_receive_state_t;

enum CC2420ReceiveP____nesc_unnamed4369 {
  CC2420ReceiveP__RXFIFO_SIZE = 128, 
  CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE = 8, 

  CC2420ReceiveP__SACK_HEADER_LENGTH = 3
};

uint32_t CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE];
uint8_t CC2420ReceiveP__m_timestamp_head;

uint8_t CC2420ReceiveP__m_timestamp_size;


uint8_t CC2420ReceiveP__m_missed_packets;


bool CC2420ReceiveP__receivingPacket;


uint8_t CC2420ReceiveP__rxFrameLength;

uint8_t CC2420ReceiveP__m_bytes_left;





CC2420ReceiveP__cc2420_receive_state_t CC2420ReceiveP__m_state;


message_t CC2420ReceiveP__m_frame;
message_t *CC2420ReceiveP__m_rxFramePtr;
uint8_t CC2420ReceiveP__m_mhrLen;

bool CC2420ReceiveP__m_stop;


static void CC2420ReceiveP__reset_state(void );
static void CC2420ReceiveP__beginReceive(void );
static void CC2420ReceiveP__receive(void );
static void CC2420ReceiveP__waitForNextPacket(void );
static void CC2420ReceiveP__flush(void );



static void CC2420ReceiveP__continueStop(void );





static inline error_t CC2420ReceiveP__Init__init(void );
#line 143
static error_t CC2420ReceiveP__AsyncSplitControl__start(void );
#line 172
static error_t CC2420ReceiveP__AsyncSplitControl__stop(void );
#line 189
static void CC2420ReceiveP__continueStop(void );
#line 201
static inline void CC2420ReceiveP__stopContinueTask__runTask(void );
#line 214
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);









static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );








static inline void CC2420ReceiveP__InterruptFIFOP__fired(void );
#line 246
static inline void CC2420ReceiveP__SpiResource__granted(void );
#line 261
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error);
#line 391
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);







static inline void CC2420ReceiveP__receiveDone_task__runTask(void );
#line 430
static void CC2420ReceiveP__beginReceive(void );
#line 453
static void CC2420ReceiveP__flush(void );
#line 470
static void CC2420ReceiveP__receive(void );
#line 482
static void CC2420ReceiveP__waitForNextPacket(void );
#line 514
static void CC2420ReceiveP__reset_state(void );
# 41 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time);

static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void );
# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void );
# 57 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void );
#line 47
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void );










static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void );
#line 44
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "/opt/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
#line 65
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );




static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );










static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get(void );
static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending(void );
# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void );
# 49 "/opt/tinyos/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );




static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );









static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "/opt/tinyos/tos/lib/timer/Counter.nc"
static /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get(void );






static bool /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__overflow(void );
# 67 "/opt/tinyos/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type /*Counter32khz32C.Transform*/TransformCounterC__0__m_upper;

enum /*Counter32khz32C.Transform*/TransformCounterC__0____nesc_unnamed4370 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type ) - /*Counter32khz32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*Counter32khz32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type )2 << (/*Counter32khz32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__fired(void );
#line 103
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void );
# 64 "/opt/tinyos/tos/lib/timer/Counter.nc"
static /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__size_type /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get(void );
# 77 "/opt/tinyos/tos/lib/timer/TransformAlarmC.nc"
/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0;
/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt;

enum /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0____nesc_unnamed4371 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type ) - 1 - 0, 
  TransformAlarmC__0__MAX_DELAY = (/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type )1 << /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );
#line 102
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm(void );
#line 147
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type t0, /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt);









static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt);




static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
#line 177
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__fired(void );
#line 66
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__start(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__size_type dt);






static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__stop(void );
# 52 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__start(uint32_t dt);
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__stop(void );
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__fired(void );
# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__Alarm__fired(
# 38 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x413cce98);
# 109 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static Alarm32khzTo62500hzTransformC__AlarmFrom__size_type Alarm32khzTo62500hzTransformC__AlarmFrom__getNow(
# 39 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x413c8df0);
# 116 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static Alarm32khzTo62500hzTransformC__AlarmFrom__size_type Alarm32khzTo62500hzTransformC__AlarmFrom__getAlarm(
# 39 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x413c8df0);
# 66 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__AlarmFrom__start(
# 39 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x413c8df0, 
# 66 "/opt/tinyos/tos/lib/timer/Alarm.nc"
Alarm32khzTo62500hzTransformC__AlarmFrom__size_type dt);






static void Alarm32khzTo62500hzTransformC__AlarmFrom__stop(
# 39 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x413c8df0);
#line 55
static inline void Alarm32khzTo62500hzTransformC__Alarm__start(uint8_t num, uint32_t dt);
static inline void Alarm32khzTo62500hzTransformC__Alarm__stop(uint8_t num);
static inline void Alarm32khzTo62500hzTransformC__AlarmFrom__fired(uint8_t num);

static inline uint32_t Alarm32khzTo62500hzTransformC__Alarm__getAlarm(uint8_t num);

static inline uint32_t Alarm32khzTo62500hzTransformC__Alarm__getNow(uint8_t num);





static void Alarm32khzTo62500hzTransformC__Alarm__startAt(uint8_t num, uint32_t t0, uint32_t dt);
#line 84
static inline void Alarm32khzTo62500hzTransformC__AlarmFrom__default__start(uint8_t num, uint32_t dt);
static inline void Alarm32khzTo62500hzTransformC__AlarmFrom__default__stop(uint8_t num);

static inline void Alarm32khzTo62500hzTransformC__Alarm__default__fired(uint8_t num);

static inline uint32_t Alarm32khzTo62500hzTransformC__AlarmFrom__default__getNow(uint8_t num);
static inline uint32_t Alarm32khzTo62500hzTransformC__AlarmFrom__default__getAlarm(uint8_t num);
# 41 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(uint16_t time);

static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get(void );
# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired(void );
# 57 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents(void );
#line 47
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare(void );










static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents(void );
#line 44
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "/opt/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Init__init(void );
#line 65
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void );




static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void );










static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void );
# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__fired(void );
#line 103
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type t0, /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type dt);
#line 73
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__stop(void );
# 64 "/opt/tinyos/tos/lib/timer/Counter.nc"
static /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__get(void );
# 77 "/opt/tinyos/tos/lib/timer/TransformAlarmC.nc"
/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0;
/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt;

enum /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1____nesc_unnamed4372 {

  TransformAlarmC__1__MAX_DELAY_LOG2 = 8 * sizeof(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type ) - 1 - 0, 
  TransformAlarmC__1__MAX_DELAY = (/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type )1 << /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY_LOG2
};

static inline /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow(void );
#line 102
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__stop(void );




static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__set_alarm(void );
#line 147
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type t0, /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type dt);
#line 162
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void );
#line 177
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__overflow(void );
# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__fired(
# 49 "/opt/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x413f15f8);
# 109 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow(void );
#line 103
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__startAt(/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type t0, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__stop(void );
# 54 "/opt/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
enum /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0____nesc_unnamed4373 {
  VirtualizeAlarmC__0__NUM_ALARMS = 3U
};




#line 58
typedef struct /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0____nesc_unnamed4374 {
  /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type t0;
  /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt;
} /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__alarm_t;
#line 80
#line 76
struct /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0____nesc_unnamed4375 {
  /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__alarm_t alarm[/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__NUM_ALARMS];
  bool isset[/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__NUM_ALARMS];
  bool is_signaling;
} /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m;

static inline error_t /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Init__init(void );




static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__setNextAlarm(void );
#line 139
static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__signalAlarms(void );
#line 162
static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(uint8_t id, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt);



static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(uint8_t id);



static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__fired(void );
#line 183
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__startAt(uint8_t id, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type t0, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt);








static inline /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(uint8_t id);



static /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(uint8_t id);



static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__default__fired(uint8_t id);
# 41 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEvent(uint16_t time);

static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__get(void );
# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__fired(void );
# 57 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__enableEvents(void );
#line 47
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__setControlAsCompare(void );










static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents(void );
#line 44
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "/opt/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Init__init(void );
#line 70
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired(void );










static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow(void );
# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__fired(void );
#line 103
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__startAt(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__size_type t0, /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__size_type dt);
# 64 "/opt/tinyos/tos/lib/timer/Counter.nc"
static /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__get(void );
# 77 "/opt/tinyos/tos/lib/timer/TransformAlarmC.nc"
/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_t0;
/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_dt;

enum /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2____nesc_unnamed4376 {

  TransformAlarmC__2__MAX_DELAY_LOG2 = 8 * sizeof(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__from_size_type ) - 1 - 0, 
  TransformAlarmC__2__MAX_DELAY = (/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type )1 << /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__MAX_DELAY_LOG2
};

static inline /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__getNow(void );
#line 107
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__set_alarm(void );
#line 147
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type t0, /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type dt);









static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__start(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type dt);




static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__fired(void );
#line 177
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__overflow(void );
# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__fired(void );
#line 109
static /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__getNow(void );
#line 66
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__start(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__size_type dt);
# 52 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__start(uint32_t dt);

static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__fired(void );



static inline uint32_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__getNow(void );





static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__startAt(uint32_t t0, uint32_t dt);
# 109 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static LocalTime62500hzP__Alarm__size_type LocalTime62500hzP__Alarm__getNow(void );
# 9 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/LocalTime62500hzP.nc"
static inline uint32_t LocalTime62500hzP__LocalTime__get(void );



static inline void LocalTime62500hzP__Alarm__fired(void );
# 36 "/opt/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
static void TKN154TimingP__ReliableWait__waitRxDone(void );



static void TKN154TimingP__ReliableWait__waitBackoffDone(void );
#line 38
static void TKN154TimingP__ReliableWait__waitTxDone(void );
# 51 "/opt/tinyos/tos/interfaces/GetNow.nc"
static TKN154TimingP__CCA__data_type TKN154TimingP__CCA__getNow(void );
# 109 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static TKN154TimingP__SymbolAlarm__size_type TKN154TimingP__SymbolAlarm__getNow(void );
#line 103
static void TKN154TimingP__SymbolAlarm__startAt(TKN154TimingP__SymbolAlarm__size_type t0, TKN154TimingP__SymbolAlarm__size_type dt);
#line 66
static void TKN154TimingP__SymbolAlarm__start(TKN154TimingP__SymbolAlarm__size_type dt);
# 58 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
enum TKN154TimingP____nesc_unnamed4377 {
  TKN154TimingP__S_WAIT_OFF, 
  TKN154TimingP__S_WAIT_RX, 
  TKN154TimingP__S_WAIT_TX, 
  TKN154TimingP__S_WAIT_BACKOFF
};
uint8_t TKN154TimingP__m_state = TKN154TimingP__S_WAIT_OFF;


static inline uint32_t TKN154TimingP__CaptureTime__getTimestamp(uint16_t captured_time);










static inline uint16_t TKN154TimingP__CaptureTime__getSFDUptime(uint16_t SFDCaptureTime, uint16_t EFDCaptureTime);





static inline bool TKN154TimingP__ReliableWait__ccaOnBackoffBoundary(uint32_t slot0);





static inline void TKN154TimingP__ReliableWait__waitRx(uint32_t t0, uint32_t dt);









static inline void TKN154TimingP__ReliableWait__waitTx(uint32_t t0, uint32_t dt);









static void TKN154TimingP__ReliableWait__waitBackoff(uint32_t dt);









static inline void TKN154TimingP__SymbolAlarm__fired(void );
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/opt/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/opt/tinyos/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4378 {
#line 74
  AlarmToTimerC__0__fired = 21U
};
#line 74
typedef int /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/opt/tinyos/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/opt/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x414552d8);
#line 71
enum /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4379 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 22U
};
#line 71
typedef int /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4380 {

  VirtualizeTimerC__0__NUM_TIMERS = 5U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4381 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
#line 159
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);
#line 189
static inline uint32_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num);
#line 204
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 52 "/opt/tinyos/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 113 "/opt/tinyos/tos/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error);
#line 138
static void SerialP__SplitControl__stopDone(error_t error);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void );
# 95 "/opt/tinyos/tos/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void );
# 49 "/opt/tinyos/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void );
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void );
# 56 "/opt/tinyos/tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void );
#line 79
static void SerialP__SerialFrameComm__resetReceive(void );
#line 65
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void );
# 81 "/opt/tinyos/tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
# 62 "/opt/tinyos/tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
# 191 "/opt/tinyos/tos/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4382 {
#line 191
  SerialP__RunTx = 23U
};
#line 191
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 322
enum SerialP____nesc_unnamed4383 {
#line 322
  SerialP__startDoneTask = 24U
};
#line 322
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];









enum SerialP____nesc_unnamed4384 {
#line 332
  SerialP__stopDoneTask = 25U
};
#line 332
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4385 {
#line 341
  SerialP__defaultSerialFlushTask = 26U
};
#line 341
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 81
enum SerialP____nesc_unnamed4386 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4387 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4388 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





#line 111
typedef enum SerialP____nesc_unnamed4389 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4390 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 124
typedef struct SerialP____nesc_unnamed4391 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 130
typedef struct SerialP____nesc_unnamed4392 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 135
typedef struct SerialP____nesc_unnamed4393 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static __inline void SerialP__txInit(void );
static __inline void SerialP__rxInit(void );
static __inline void SerialP__ackInit(void );

static __inline bool SerialP__ack_queue_is_full(void );
static __inline bool SerialP__ack_queue_is_empty(void );
static __inline void SerialP__ack_queue_push(uint8_t token);
static __inline uint8_t SerialP__ack_queue_top(void );
static inline uint8_t SerialP__ack_queue_pop(void );




static __inline void SerialP__rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP__rx_buffer_top(void );
static __inline uint8_t SerialP__rx_buffer_pop(void );
static __inline uint16_t SerialP__rx_current_crc(void );

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP__MaybeScheduleTx(void );




static __inline void SerialP__txInit(void );
#line 207
static __inline void SerialP__rxInit(void );








static __inline void SerialP__ackInit(void );



static inline error_t SerialP__Init__init(void );
#line 234
static __inline bool SerialP__ack_queue_is_full(void );









static __inline bool SerialP__ack_queue_is_empty(void );





static __inline void SerialP__ack_queue_push(uint8_t token);









static __inline uint8_t SerialP__ack_queue_top(void );









static inline uint8_t SerialP__ack_queue_pop(void );
#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP__rx_buffer_top(void );



static __inline uint8_t SerialP__rx_buffer_pop(void );





static __inline uint16_t SerialP__rx_current_crc(void );










static inline void SerialP__startDoneTask__runTask(void );









static inline void SerialP__stopDoneTask__runTask(void );



static inline void SerialP__SerialFlush__flushDone(void );




static inline void SerialP__defaultSerialFlushTask__runTask(void );


static inline void SerialP__SerialFlush__default__flush(void );



static inline error_t SerialP__SplitControl__start(void );








static void SerialP__testOff(void );
#line 394
static inline void SerialP__SerialFrameComm__delimiterReceived(void );


static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data);



static inline bool SerialP__valid_rx_proto(uint8_t proto);










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
#line 518
static void SerialP__MaybeScheduleTx(void );










static inline error_t SerialP__SendBytePacket__completeSend(void );








static inline error_t SerialP__SendBytePacket__startSend(uint8_t b);
#line 559
static inline void SerialP__RunTx__runTask(void );
#line 668
static inline void SerialP__SerialFrameComm__putDone(void );
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 100 "/opt/tinyos/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 51 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41541010, 
# 96 "/opt/tinyos/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 78 "/opt/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 50 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41544960, 
# 71 "/opt/tinyos/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 54 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41541b10, 
# 31 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 54 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41541b10);
# 23 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 54 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41541b10, 
# 23 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 71 "/opt/tinyos/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 158 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4394 {
#line 158
  SerialDispatcherP__0__signalSendDone = 27U
};
#line 158
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 275
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4395 {
#line 275
  SerialDispatcherP__0__receiveTask = 28U
};
#line 275
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 66
#line 62
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4396 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4397 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 74
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4398 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
#line 158
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
#line 178
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
#line 194
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );
#line 244
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
#line 275
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
#line 296
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
#line 358
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/opt/tinyos/tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 94 "/opt/tinyos/tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
#line 85
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
# 59 "/opt/tinyos/tos/lib/serial/HdlcTranslateC.nc"
#line 56
typedef struct HdlcTranslateC____nesc_unnamed4399 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void );





static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data);
#line 98
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );







static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
#line 118
static void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);
#line 132
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 39 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartConfigure.nc"
static msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(
# 49 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415c77a0);
# 97 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__resetUsart(bool reset);
#line 179
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableIntr(void );


static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__enableIntr(void );
#line 224
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__tx(uint8_t data);
#line 128
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableUart(void );
#line 174
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__setModeUart(msp430_uart_union_config_t *config);
# 79 "/opt/tinyos/tos/interfaces/UartStream.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receivedByte(
# 45 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415c9868, 
# 79 "/opt/tinyos/tos/interfaces/UartStream.nc"
uint8_t byte);
#line 99
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receiveDone(
# 45 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415c9868, 
# 95 "/opt/tinyos/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__sendDone(
# 45 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415c9868, 
# 53 "/opt/tinyos/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__release(
# 48 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415c8c90);
# 97 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__immediateRequest(
# 48 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415c8c90);
# 128 "/opt/tinyos/tos/interfaces/Resource.nc"
static bool /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__isOwner(
# 48 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415c8c90);
# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__granted(
# 43 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x415cc690);
#line 59
uint16_t /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_len;
#line 59
uint16_t /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_len;
uint8_t * /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf;
#line 60
uint8_t * /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf;
uint16_t /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_pos;
#line 61
uint16_t /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_pos;
uint8_t /*Msp430Uart1P.UartP*/Msp430UartP__0__m_byte_time;
uint8_t /*Msp430Uart1P.UartP*/Msp430UartP__0__current_owner;

static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__immediateRequest(uint8_t id);
#line 77
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__release(uint8_t id);







static void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__configure(uint8_t id);






static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(uint8_t id);








static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__granted(uint8_t id);
#line 134
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(uint8_t id, uint8_t data);
#line 147
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__send(uint8_t id, uint8_t *buf, uint16_t len);
#line 162
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(uint8_t id);
#line 208
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__overflow(void );

static inline bool /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(uint8_t id);

static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(uint8_t id);
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__release(uint8_t id);
static inline msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(uint8_t id);



static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__default__granted(uint8_t id);

static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__sendDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error);
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(uint8_t id, uint8_t byte);
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error);
# 99 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart1P__UCLK__selectIOFunc(void );
# 54 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void HplMsp430Usart1P__Interrupts__rxDone(uint8_t data);
#line 49
static void HplMsp430Usart1P__Interrupts__txDone(void );
# 99 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart1P__URXD__selectIOFunc(void );
#line 92
static void HplMsp430Usart1P__URXD__selectModuleFunc(void );






static void HplMsp430Usart1P__UTXD__selectIOFunc(void );
#line 92
static void HplMsp430Usart1P__UTXD__selectModuleFunc(void );






static void HplMsp430Usart1P__SOMI__selectIOFunc(void );
#line 99
static void HplMsp430Usart1P__SIMO__selectIOFunc(void );
# 87 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static volatile uint8_t HplMsp430Usart1P__IE2 __asm ("0x0001");
static volatile uint8_t HplMsp430Usart1P__ME2 __asm ("0x0005");
static volatile uint8_t HplMsp430Usart1P__IFG2 __asm ("0x0003");
static volatile uint8_t HplMsp430Usart1P__U1TCTL __asm ("0x0079");
static volatile uint8_t HplMsp430Usart1P__U1RCTL __asm ("0x007A");
static volatile uint8_t HplMsp430Usart1P__U1TXBUF __asm ("0x007F");



void sig_UART1RX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0006)))  ;




void sig_UART1TX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0004)))  ;



static inline error_t HplMsp430Usart1P__AsyncStdControl__start(void );



static inline error_t HplMsp430Usart1P__AsyncStdControl__stop(void );
#line 140
static inline void HplMsp430Usart1P__Usart__setUbr(uint16_t control);










static inline void HplMsp430Usart1P__Usart__setUmctl(uint8_t control);







static inline void HplMsp430Usart1P__Usart__resetUsart(bool reset);
#line 203
static inline void HplMsp430Usart1P__Usart__enableUart(void );







static void HplMsp430Usart1P__Usart__disableUart(void );








static inline void HplMsp430Usart1P__Usart__enableUartTx(void );




static inline void HplMsp430Usart1P__Usart__disableUartTx(void );





static inline void HplMsp430Usart1P__Usart__enableUartRx(void );




static inline void HplMsp430Usart1P__Usart__disableUartRx(void );
#line 251
static void HplMsp430Usart1P__Usart__disableSpi(void );
#line 283
static inline void HplMsp430Usart1P__configUart(msp430_uart_union_config_t *config);









static inline void HplMsp430Usart1P__Usart__setModeUart(msp430_uart_union_config_t *config);
#line 347
static inline void HplMsp430Usart1P__Usart__clrIntr(void );
#line 359
static inline void HplMsp430Usart1P__Usart__disableIntr(void );
#line 377
static inline void HplMsp430Usart1P__Usart__enableIntr(void );






static inline void HplMsp430Usart1P__Usart__tx(uint8_t data);
# 90 "/opt/tinyos/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__userId(void );
# 54 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__rxDone(
# 39 "/opt/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x4117b200, 
# 54 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__txDone(
# 39 "/opt/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x4117b200);









static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__txDone(void );




static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__rxDone(uint8_t data);









static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__txDone(uint8_t id);
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__rxDone(uint8_t id, uint8_t data);
# 49 "/opt/tinyos/tos/system/FcfsResourceQueueC.nc"
enum /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1____nesc_unnamed4400 {
#line 49
  FcfsResourceQueueC__1__NO_ENTRY = 0xFF
};
uint8_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[1U];
uint8_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
uint8_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qTail = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

static inline error_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init(void );




static inline bool /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );







static inline resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
# 61 "/opt/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__immediateRequested(
# 55 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41198690);
# 65 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41196a58);
# 59 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(
# 60 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41196a58);
# 53 "/opt/tinyos/tos/interfaces/ResourceQueue.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Queue__dequeue(void );
# 46 "/opt/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void );
#line 81
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__immediateRequested(void );
# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Resource__granted(
# 54 "/opt/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x41199bd0);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask(void );
# 75 "/opt/tinyos/tos/system/ArbiterP.nc"
enum /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4401 {
#line 75
  ArbiterP__1__grantedTask = 29U
};
#line 75
typedef int /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1____nesc_sillytask_grantedTask[/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask];
#line 67
enum /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4402 {
#line 67
  ArbiterP__1__RES_CONTROLLED, ArbiterP__1__RES_GRANTING, ArbiterP__1__RES_IMM_GRANTING, ArbiterP__1__RES_BUSY
};
#line 68
enum /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4403 {
#line 68
  ArbiterP__1__default_owner_id = 1U
};
#line 69
enum /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4404 {
#line 69
  ArbiterP__1__NO_RES = 0xFF
};
uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED;
uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__default_owner_id;
uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__reqResId;
#line 93
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Resource__immediateRequest(uint8_t id);
#line 111
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Resource__release(uint8_t id);
#line 133
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );
#line 153
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__inUse(void );
#line 166
static uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId(void );










static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Resource__isOwner(uint8_t id);
#line 190
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
#line 202
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Resource__default__granted(uint8_t id);



static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__immediateRequested(uint8_t id);









static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id);
# 62 "/opt/tinyos/tos/lib/power/PowerDownCleanup.nc"
static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void );
# 56 "/opt/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void );
# 95 "/opt/tinyos/tos/interfaces/AsyncStdControl.nc"
static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void );









static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void );
# 74 "/opt/tinyos/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested(void );




static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );




static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t TelosSerialP__Resource__release(void );
#line 97
static error_t TelosSerialP__Resource__immediateRequest(void );
# 8 "/opt/tinyos/tos/platforms/telosa/TelosSerialP.nc"
msp430_uart_union_config_t TelosSerialP__msp430_uart_telos_config = { { .ubr = UBR_1MHZ_115200, .umctl = UMCTL_1MHZ_115200, .ssel = 0x02, .pena = 0, .pev = 0, .spb = 0, .clen = 1, .listen = 0, .mm = 0, .ckpl = 0, .urxse = 0, .urxeie = 1, .urxwie = 0, .utxe = 1, .urxe = 1 } };

static inline error_t TelosSerialP__StdControl__start(void );


static inline error_t TelosSerialP__StdControl__stop(void );



static inline void TelosSerialP__Resource__granted(void );

static inline msp430_uart_union_config_t *TelosSerialP__Msp430UartConfigure__getConfig(void );
# 48 "/opt/tinyos/tos/system/QueueC.nc"
/*SnifferAppC.QueueC*/QueueC__1__queue_t  /*SnifferAppC.QueueC*/QueueC__1__queue[10];
uint8_t /*SnifferAppC.QueueC*/QueueC__1__head = 0;
uint8_t /*SnifferAppC.QueueC*/QueueC__1__tail = 0;
uint8_t /*SnifferAppC.QueueC*/QueueC__1__size = 0;

static inline bool /*SnifferAppC.QueueC*/QueueC__1__Queue__empty(void );



static inline uint8_t /*SnifferAppC.QueueC*/QueueC__1__Queue__size(void );



static inline uint8_t /*SnifferAppC.QueueC*/QueueC__1__Queue__maxSize(void );



static inline /*SnifferAppC.QueueC*/QueueC__1__queue_t /*SnifferAppC.QueueC*/QueueC__1__Queue__head(void );



static inline void /*SnifferAppC.QueueC*/QueueC__1__printQueue(void );
#line 85
static inline /*SnifferAppC.QueueC*/QueueC__1__queue_t /*SnifferAppC.QueueC*/QueueC__1__Queue__dequeue(void );
#line 97
static inline error_t /*SnifferAppC.QueueC*/QueueC__1__Queue__enqueue(/*SnifferAppC.QueueC*/QueueC__1__queue_t newVal);
# 60 "/opt/tinyos/tos/system/PoolP.nc"
uint8_t /*SnifferAppC.PoolC.PoolP*/PoolP__2__free;
uint8_t /*SnifferAppC.PoolC.PoolP*/PoolP__2__index;
/*SnifferAppC.PoolC.PoolP*/PoolP__2__pool_t * /*SnifferAppC.PoolC.PoolP*/PoolP__2__queue[10];
/*SnifferAppC.PoolC.PoolP*/PoolP__2__pool_t /*SnifferAppC.PoolC.PoolP*/PoolP__2__pool[10];

static inline error_t /*SnifferAppC.PoolC.PoolP*/PoolP__2__Init__init(void );
#line 84
static inline uint8_t /*SnifferAppC.PoolC.PoolP*/PoolP__2__Pool__maxSize(void );



static inline /*SnifferAppC.PoolC.PoolP*/PoolP__2__pool_t */*SnifferAppC.PoolC.PoolP*/PoolP__2__Pool__get(void );
#line 103
static inline error_t /*SnifferAppC.PoolC.PoolP*/PoolP__2__Pool__put(/*SnifferAppC.PoolC.PoolP*/PoolP__2__pool_t *newVal);
# 397 "/opt/tinyos/tos/chips/msp430/msp430hardware.h"
static inline  void __nesc_enable_interrupt(void )
{
  __eint();
}

# 196 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void )
{
}

# 48 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void ){
#line 48
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow();
#line 48
}
#line 48
# 137 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow();
}





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n)
{
}

# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(uint8_t arg_0x4067c4b0){
#line 39
  switch (arg_0x4067c4b0) {
#line 39
    case 0:
#line 39
      /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired();
#line 39
      break;
#line 39
    case 1:
#line 39
      /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired();
#line 39
      break;
#line 39
    case 2:
#line 39
      /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired();
#line 39
      break;
#line 39
    case 5:
#line 39
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired();
#line 39
      break;
#line 39
    default:
#line 39
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(arg_0x4067c4b0);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 126 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(0);
}

# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA0__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired();
#line 39
}
#line 39
# 58 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0____nesc_unnamed4405 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(* (volatile uint16_t * )354U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(time);
#line 86
}
#line 86
# 150 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void )
{
  return * (volatile uint16_t * )370U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired();
#line 45
}
#line 45
# 58 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1____nesc_unnamed4406 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(* (volatile uint16_t * )356U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(time);
#line 86
}
#line 86
# 150 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void )
{
  return * (volatile uint16_t * )372U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired();
#line 45
}
#line 45
# 58 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2____nesc_unnamed4407 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(* (volatile uint16_t * )358U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(time);
#line 86
}
#line 86
# 150 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void )
{
  return * (volatile uint16_t * )374U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired();
#line 45
}
#line 45
# 131 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )302U;

#line 134
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(n >> 1);
}

# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA1__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired();
#line 39
}
#line 39
# 126 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(0);
}

# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB0__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired();
#line 39
}
#line 39
# 196 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void )
{
}

# 114 "/opt/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow(void )
{
}

#line 114
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void )
{
}

#line 114
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void )
{
}

# 177 "/opt/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow(void )
{
}

#line 177
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__overflow(void )
{
}

#line 177
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__overflow(void )
{
}

# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
inline static void /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__overflow();
#line 82
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__overflow();
#line 82
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos/tos/lib/timer/TransformCounterC.nc"
static inline void /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*Counter32khz32C.Transform*/TransformCounterC__0__m_upper++;
    if ((/*Counter32khz32C.Transform*/TransformCounterC__0__m_upper & /*Counter32khz32C.Transform*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
      /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__overflow();
      }
  }
}

# 208 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__overflow(void )
#line 208
{
}

# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
inline static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void ){
#line 82
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__overflow();
#line 82
  /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 64 "/opt/tinyos/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void )
{
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow();
}

# 48 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void ){
#line 48
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow();
#line 48
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow();
#line 48
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow();
#line 48
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow();
#line 48
}
#line 48
# 137 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow();
}

# 102 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void )
#line 102
{
  return CC2420SpiP__attemptRelease();
}

# 39 "/opt/tinyos/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = CC2420SpiP__ChipSpiResource__attemptRelease();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 44 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static void CC2420TransmitP__CC2420Tx__sendDone(ieee154_txframe_t *frame, bool ackPendingFlag, error_t error){
#line 44
  CC2420TKN154P__CC2420Tx__sendDone(frame, ackPendingFlag, error);
#line 44
}
#line 44
# 410 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__signalDone(bool ackFramePending, error_t err)
#line 410
{
  /* atomic removed: atomic calls only */
#line 411
  CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
  CC2420TransmitP__CC2420Tx__sendDone(CC2420TransmitP__m_frame, ackFramePending, err);
  CC2420TransmitP__ChipSpiResource__attemptRelease();
}

# 56 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )29U |= 0x01 << 2;
}

# 48 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set();
#line 48
}
#line 48
# 48 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__set();
}

# 40 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__set(void ){
#line 40
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set();
#line 40
}
#line 40
# 53 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHTX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 57 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )29U &= ~(0x01 << 2);
}

# 53 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr();
#line 53
}
#line 53
# 49 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__clr();
}

# 41 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__clr(void ){
#line 41
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr();
#line 41
}
#line 41
# 375 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__BackoffAlarm__fired(void )
#line 375
{
  /* atomic removed: atomic calls only */
#line 376
  {
    switch (CC2420TransmitP__m_state) {

        case CC2420TransmitP__S_SFD: 
          case CC2420TransmitP__S_EFD: 


            {
              CC2420TransmitP__CSN__set();
              CC2420TransmitP__CSN__clr();
              CC2420TransmitP__SFLUSHTX__strobe();
              CC2420TransmitP__CSN__set();
            }
        CC2420TransmitP__signalDone(FALSE, ERETRY);
        break;

        case CC2420TransmitP__S_ACK_WAIT: 







          CC2420TransmitP__signalDone(FALSE, ENOACK);
        break;


        default: 
          break;
      }
  }
}

# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__fired(void ){
#line 78
  CC2420TransmitP__BackoffAlarm__fired();
#line 78
}
#line 78
# 54 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__fired(void )
#line 54
{
#line 54
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__fired();
}

# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__fired(void ){
#line 78
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__fired();
#line 78
}
#line 78
# 162 "/opt/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt == 0) 
      {
        /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__fired();
      }
    else 
      {
        /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm();
      }
  }
}

# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void ){
#line 78
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void )
{
  * (volatile uint16_t * )386U &= ~0x0010;
}

# 58 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents();
#line 58
}
#line 58
# 70 "/opt/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void )
{
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired();
}

# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void ){
#line 45
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void )
{
  return * (volatile uint16_t * )402U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4408 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(* (volatile uint16_t * )386U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired();
    }
}

# 382 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__tx(uint8_t data)
#line 382
{
  HplMsp430Usart0P__U0TXBUF = data;
}

# 224 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(uint8_t data){
#line 224
  HplMsp430Usart0P__Usart__tx(data);
#line 224
}
#line 224
# 330 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline bool HplMsp430Usart0P__Usart__isRxIntrPending(void )
#line 330
{
  if (HplMsp430Usart0P__IFG1 & 0x40) {
      return TRUE;
    }
  return FALSE;
}

# 192 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending(void ){
#line 192
  unsigned char __nesc_result;
#line 192

#line 192
  __nesc_result = HplMsp430Usart0P__Usart__isRxIntrPending();
#line 192

#line 192
  return __nesc_result;
#line 192
}
#line 192
# 341 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__clrRxIntr(void )
#line 341
{
  HplMsp430Usart0P__IFG1 &= ~0x40;
}

# 197 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__clrRxIntr(void ){
#line 197
  HplMsp430Usart0P__Usart__clrRxIntr();
#line 197
}
#line 197
# 386 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline uint8_t HplMsp430Usart0P__Usart__rx(void )
#line 386
{
  return U0RXBUF;
}

# 231 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx(void ){
#line 231
  unsigned char __nesc_result;
#line 231

#line 231
  __nesc_result = HplMsp430Usart0P__Usart__rx();
#line 231

#line 231
  return __nesc_result;
#line 231
}
#line 231
# 102 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__clear(void )
#line 102
{
#line 102
  P1IFG &= ~(1 << 0);
}

# 52 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port10__clear();
#line 52
}
#line 52
# 94 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__disable(void )
#line 94
{
#line 94
  P1IE &= ~(1 << 0);
}

# 47 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable(void ){
#line 47
  HplMsp430InterruptP__Port10__disable();
#line 47
}
#line 47
# 69 "/opt/tinyos/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void )
#line 69
{
  /* atomic removed: atomic calls only */
#line 70
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear();
  }
  return SUCCESS;
}

# 61 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ReceiveP__stopContinueTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ReceiveP__stopContinueTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 97 "/opt/tinyos/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 53 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRFOFF);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 59 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )32U & (0x01 << 3);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw() != 0;
}

# 73 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__HplGeneralIO__get();
}

# 43 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ControlP__FIFO__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 55 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RXFIFO_REGISTER__read(uint16_t *data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP__Reg__read(CC2420_RXFIFO, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 53 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SFLUSHRX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHRX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 67 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )31U &= ~(0x01 << 1);
}

# 99 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc();
#line 99
}
#line 99
# 135 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void )
{
  * (volatile uint16_t * )388U &= ~0x0010;
}

# 58 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents();
#line 58
}
#line 58
# 69 "/opt/tinyos/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable(void )
#line 69
{
  /* atomic removed: atomic calls only */
#line 70
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectIOFunc();
  }
}

# 66 "/opt/tinyos/tos/interfaces/GpioCapture.nc"
inline static void CC2420TransmitP__CaptureSFD__disable(void ){
#line 66
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable();
#line 66
}
#line 66
# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlTransmitC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 118 "/opt/tinyos/tos/system/StateImplP.nc"
static inline void StateImplP__State__toIdle(uint8_t id)
#line 118
{
  /* atomic removed: atomic calls only */
#line 119
  StateImplP__state[id] = StateImplP__S_IDLE;
}

# 56 "/opt/tinyos/tos/interfaces/State.nc"
inline static void CC2420SpiP__WorkingState__toIdle(void ){
#line 56
  StateImplP__State__toIdle(0U);
#line 56
}
#line 56
# 95 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__ChipSpiResource__abortRelease(void )
#line 95
{
  /* atomic removed: atomic calls only */
#line 96
  CC2420SpiP__release = FALSE;
}

# 31 "/opt/tinyos/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420TransmitP__ChipSpiResource__abortRelease(void ){
#line 31
  CC2420SpiP__ChipSpiResource__abortRelease();
#line 31
}
#line 31
# 351 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__ChipSpiResource__releasing(void )
#line 351
{
  if (CC2420TransmitP__abortSpiRelease) {
      CC2420TransmitP__ChipSpiResource__abortRelease();
    }
}

# 24 "/opt/tinyos/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420SpiP__ChipSpiResource__releasing(void ){
#line 24
  CC2420TransmitP__ChipSpiResource__releasing();
#line 24
}
#line 24
# 208 "/opt/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void )
#line 208
{
}

# 46 "/opt/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted();
#line 46
}
#line 46
# 151 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__resetUsart(bool reset)
#line 151
{
  if (reset) {
      U0CTL = 0x01;
    }
  else {
      U0CTL &= ~0x01;
    }
}

# 97 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(bool reset){
#line 97
  HplMsp430Usart0P__Usart__resetUsart(reset);
#line 97
}
#line 97
#line 158
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableSpi(void ){
#line 158
  HplMsp430Usart0P__Usart__disableSpi();
#line 158
}
#line 158
# 124 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(uint8_t id)
#line 124
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(TRUE);
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableSpi();
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(FALSE);
}

# 218 "/opt/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x41196a58){
#line 65
  switch (arg_0x41196a58) {
#line 65
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 65
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 65
      break;
#line 65
    default:
#line 65
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x41196a58);
#line 65
      break;
#line 65
    }
#line 65
}
#line 65
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 68 "/opt/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead != /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead;

#line 72
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead];
        if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 75
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[id] = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "/opt/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/opt/tinyos/tos/interfaces/ResourceQueue.nc"
inline static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "/opt/tinyos/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 111
{
  /* atomic removed: atomic calls only */
#line 112
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY && /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId == id) {
        if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue();
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__NO_RES;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask();
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
          }
        else {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
          }
        {
          unsigned char __nesc_temp = 
#line 127
          SUCCESS;

#line 127
          return __nesc_temp;
        }
      }
  }
#line 130
  return FAIL;
}

# 175 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(uint8_t id)
#line 175
{
#line 175
  return FAIL;
}

# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__release(uint8_t arg_0x410ce860){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x410ce860) {
#line 120
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 120
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(arg_0x410ce860);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 116 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(uint8_t id)
#line 116
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__release(id);
}

# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 67 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 1);
}

# 99 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SIMO__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 2);
}

# 99 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SOMI__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 3);
}

# 99 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UCLK__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc();
#line 99
}
#line 99
# 98 "/opt/tinyos/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t RadioControlImplP__ArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 101 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoScanP.nc"
static inline void NoScanP__RadioTx__transmitDone(ieee154_txframe_t *frame, error_t result)
#line 101
{
}

# 132 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__MacTx__default__transmitDone(uint8_t client, ieee154_txframe_t *frame, error_t result)
{
  while (!0) {
#line 134
      break;
    }
#line 134
  ;
}

# 83 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
inline static void RadioControlImplP__MacTx__transmitDone(uint8_t arg_0x40ae80c8, ieee154_txframe_t *frame, error_t result){
#line 83
  switch (arg_0x40ae80c8) {
#line 83
    case 0:
#line 83
      NoScanP__RadioTx__transmitDone(frame, result);
#line 83
      break;
#line 83
    default:
#line 83
      RadioControlImplP__MacTx__default__transmitDone(arg_0x40ae80c8, frame, result);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 127 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__PhyTx__transmitDone(ieee154_txframe_t *frame, error_t result)
{
  RadioControlImplP__MacTx__transmitDone(RadioControlImplP__ArbiterInfo__userId(), frame, result);
}

# 83 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
inline static void CC2420TKN154P__RadioTx__transmitDone(ieee154_txframe_t *frame, error_t result){
#line 83
  RadioControlImplP__PhyTx__transmitDone(frame, result);
#line 83
}
#line 83
# 488 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static __inline void CC2420TKN154P__txDoneRadioTx(ieee154_txframe_t *frame, error_t result)
{

  CC2420TKN154P__RadioTx__transmitDone(frame, result);
}

# 155 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__UnslottedCsmaCa__default__transmitDone(uint8_t client, 
ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result)
{
  while (!0) {
#line 158
      break;
    }
#line 158
  ;
}

# 89 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
inline static void RadioControlImplP__UnslottedCsmaCa__transmitDone(uint8_t arg_0x40ae6170, ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result){
#line 89
  switch (arg_0x40ae6170) {
#line 89
    case 12U:
#line 89
      DispatchUnslottedCsmaP__UnslottedCsmaCa__transmitDone(frame, csma, ackPendingFlag, result);
#line 89
      break;
#line 89
    default:
#line 89
      RadioControlImplP__UnslottedCsmaCa__default__transmitDone(arg_0x40ae6170, frame, csma, ackPendingFlag, result);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 149 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__PhyUnslottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result)
{
  RadioControlImplP__UnslottedCsmaCa__transmitDone(RadioControlImplP__ArbiterInfo__userId(), 
  frame, csma, ackPendingFlag, result);
}

# 89 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
inline static void CC2420TKN154P__UnslottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result){
#line 89
  RadioControlImplP__PhyUnslottedCsmaCa__transmitDone(frame, csma, ackPendingFlag, result);
#line 89
}
#line 89
# 572 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static __inline void CC2420TKN154P__txDoneUnslottedCsma(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result)
{

  CC2420TKN154P__UnslottedCsmaCa__transmitDone(frame, csma, ackPendingFlag, result);
}

# 56 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static error_t DispatchUnslottedCsmaP__RadioRx__enableRx(uint32_t t0, uint32_t dt){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = RadioControlImplP__MacRx__enableRx(12U, t0, dt);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 88 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ControlTransmitC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 153 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Resource__request(void )
#line 153
{
  return CC2420ControlP__SpiResource__request();
}

# 88 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420TKN154P__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420ControlP__Resource__request();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88









inline static error_t CC2420TKN154P__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420ControlP__Resource__immediateRequest();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 113 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420AsyncSplitControl.nc"
inline static error_t CC2420TKN154P__RxControl__start(void ){
#line 113
  unsigned char __nesc_result;
#line 113

#line 113
  __nesc_result = CC2420ReceiveP__AsyncSplitControl__start();
#line 113

#line 113
  return __nesc_result;
#line 113
}
#line 113
# 383 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline error_t CC2420TKN154P__RadioRx__enableRx(uint32_t t0, uint32_t dt)
{
  error_t result;

#line 386
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 386
    {
      if (CC2420TKN154P__m_state != CC2420TKN154P__S_RADIO_OFF) 
        {
          unsigned char __nesc_temp = 
#line 388
          FAIL;

          {
#line 388
            __nesc_atomic_end(__nesc_atomic); 
#line 388
            return __nesc_temp;
          }
        }
#line 389
      CC2420TKN154P__m_state = CC2420TKN154P__S_RESERVE_RX_SPI;
    }
#line 390
    __nesc_atomic_end(__nesc_atomic); }
  CC2420TKN154P__m_t0 = t0;
  CC2420TKN154P__m_dt = dt;
  result = CC2420TKN154P__RxControl__start();
  while (!(result == SUCCESS)) {
#line 394
      break;
    }
#line 394
  ;
  if (result == SUCCESS) {
    if (CC2420TKN154P__SpiResource__immediateRequest() == SUCCESS) {
      CC2420TKN154P__rxSpiReserved();
      }
    else {
#line 399
      CC2420TKN154P__SpiResource__request();
      }
    }
#line 400
  return result;
}

# 56 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static error_t RadioControlImplP__PhyRx__enableRx(uint32_t t0, uint32_t dt){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = CC2420TKN154P__RadioRx__enableRx(t0, dt);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 86 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__enable(void )
#line 86
{
#line 86
  P1IE |= 1 << 0;
}

# 42 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port10__enable();
#line 42
}
#line 42
# 118 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__edge(bool l2h)
#line 118
{
  /* atomic removed: atomic calls only */
#line 119
  {
    if (l2h) {
#line 120
      P1IES &= ~(1 << 0);
      }
    else {
#line 121
      P1IES |= 1 << 0;
      }
  }
}

# 67 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(bool low_to_high){
#line 67
  HplMsp430InterruptP__Port10__edge(low_to_high);
#line 67
}
#line 67
# 52 "/opt/tinyos/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(bool rising)
#line 52
{
  /* atomic removed: atomic calls only */
#line 53
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(rising);
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable();
  }
  return SUCCESS;
}





static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void )
#line 65
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(FALSE);
}

# 54 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 97 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420ControlTransmitC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 45 "/opt/tinyos/tos/interfaces/State.nc"
inline static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(0U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 172 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(uint8_t id)
#line 172
{
#line 172
  return FALSE;
}

# 128 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__isOwner(uint8_t arg_0x410ce860){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  switch (arg_0x410ce860) {
#line 128
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 128
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 128
      break;
#line 128
    default:
#line 128
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(arg_0x410ce860);
#line 128
      break;
#line 128
    }
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 112 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(uint8_t id)
#line 112
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__isOwner(id);
}

# 128 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static bool CC2420SpiP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 176 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(uint8_t id)
#line 176
{
  return &msp430_spi_default_config;
}

# 39 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiConfigure.nc"
inline static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__getConfig(uint8_t arg_0x410cd308){
#line 39
  union __nesc_unnamed4301 *__nesc_result;
#line 39

#line 39
    __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(arg_0x410cd308);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 168 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__setModeSpi(msp430_spi_union_config_t *config){
#line 168
  HplMsp430Usart0P__Usart__setModeSpi(config);
#line 168
}
#line 168
# 120 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(uint8_t id)
#line 120
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__setModeSpi(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__getConfig(id));
}

# 216 "/opt/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x41196a58){
#line 59
  switch (arg_0x41196a58) {
#line 59
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 59
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 59
      break;
#line 59
    default:
#line 59
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x41196a58);
#line 59
      break;
#line 59
    }
#line 59
}
#line 59
# 213 "/opt/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void )
#line 213
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
}

# 81 "/opt/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void ){
#line 81
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested();
#line 81
}
#line 81
# 206 "/opt/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 206
{
}

# 61 "/opt/tinyos/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x41198690){
#line 61
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x41198690);
#line 61
}
#line 61
# 93 "/opt/tinyos/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 93
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 95
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_IMM_GRANTING;
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = id;
      }
    else {
        unsigned char __nesc_temp = 
#line 100
        FAIL;

#line 100
        return __nesc_temp;
      }
  }
#line 102
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested();
  if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId == id) {
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
      return SUCCESS;
    }
  /* atomic removed: atomic calls only */
#line 107
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
  return FAIL;
}

# 174 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(uint8_t id)
#line 174
{
#line 174
  return FAIL;
}

# 97 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__immediateRequest(uint8_t arg_0x410ce860){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  switch (arg_0x410ce860) {
#line 97
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 97
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 97
      break;
#line 97
    default:
#line 97
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(arg_0x410ce860);
#line 97
      break;
#line 97
    }
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 104 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(uint8_t id)
#line 104
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__immediateRequest(id);
}

# 97 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 97 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void HplMsp430I2C0P__HplUsart__resetUsart(bool reset){
#line 97
  HplMsp430Usart0P__Usart__resetUsart(reset);
#line 97
}
#line 97
# 59 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430I2C0P.nc"
static inline void HplMsp430I2C0P__HplI2C__clearModeI2C(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 60
  {
    HplMsp430I2C0P__U0CTL &= ~((0x20 | 0x04) | 0x01);
    HplMsp430I2C0P__HplUsart__resetUsart(TRUE);
  }
}

# 7 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static void HplMsp430Usart0P__HplI2C__clearModeI2C(void ){
#line 7
  HplMsp430I2C0P__HplI2C__clearModeI2C();
#line 7
}
#line 7
# 67 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 5);
}

# 99 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__URXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 4);
}

# 99 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UTXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc();
#line 99
}
#line 99
# 207 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__disableUart(void )
#line 207
{
  /* atomic removed: atomic calls only */
#line 208
  {
    HplMsp430Usart0P__ME1 &= ~(0x80 | 0x40);
    HplMsp430Usart0P__UTXD__selectIOFunc();
    HplMsp430Usart0P__URXD__selectIOFunc();
  }
}

#line 143
static inline void HplMsp430Usart0P__Usart__setUmctl(uint8_t control)
#line 143
{
  U0MCTL = control;
}

#line 132
static inline void HplMsp430Usart0P__Usart__setUbr(uint16_t control)
#line 132
{
  /* atomic removed: atomic calls only */
#line 133
  {
    U0BR0 = control & 0x00FF;
    U0BR1 = (control >> 8) & 0x00FF;
  }
}

#line 256
static inline void HplMsp430Usart0P__configSpi(msp430_spi_union_config_t *config)
#line 256
{

  U0CTL = (config->spiRegisters.uctl | 0x04) | 0x01;
  HplMsp430Usart0P__U0TCTL = config->spiRegisters.utctl;

  HplMsp430Usart0P__Usart__setUbr(config->spiRegisters.ubr);
  HplMsp430Usart0P__Usart__setUmctl(0x00);
}

# 65 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 3;
}

# 92 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UCLK__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc();
#line 92
}
#line 92
# 65 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 2;
}

# 92 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SOMI__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc();
#line 92
}
#line 92
# 65 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 1;
}

# 92 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SIMO__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc();
#line 92
}
#line 92
# 238 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__enableSpi(void )
#line 238
{
  /* atomic removed: atomic calls only */
#line 239
  {
    HplMsp430Usart0P__SIMO__selectModuleFunc();
    HplMsp430Usart0P__SOMI__selectModuleFunc();
    HplMsp430Usart0P__UCLK__selectModuleFunc();
  }
  HplMsp430Usart0P__ME1 |= 0x40;
}

#line 345
static inline void HplMsp430Usart0P__Usart__clrIntr(void )
#line 345
{
  HplMsp430Usart0P__IFG1 &= ~(0x80 | 0x40);
}









static inline void HplMsp430Usart0P__Usart__disableIntr(void )
#line 357
{
  HplMsp430Usart0P__IE1 &= ~(0x80 | 0x40);
}

# 63 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_FSCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_MDMCTRL0, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__TXCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_TXCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 518 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__writeTxPower(void )
#line 518
{
  CC2420ControlP__TXCTRL__write((((
  2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
  3 << CC2420_TXCTRL_PA_CURRENT)) | (
  1 << CC2420_TXCTRL_RESERVED)) | ((
  CC2420ControlP__m_txPower & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
}

# 1039 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__FrameUtility__copyLocalExtendedAddressLE(uint8_t *destLE)
{
  PibP__FrameUtility__convertToLE(destLE, &PibP__m_aExtendedAddressLE);
}

# 55 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static void CC2420ControlP__FrameUtility__copyLocalExtendedAddressLE(uint8_t *destLE){
#line 55
  PibP__FrameUtility__copyLocalExtendedAddressLE(destLE);
#line 55
}
#line 55
# 45 "/opt/tinyos/tos/interfaces/SpiByte.nc"
inline static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(tx);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 133 "/opt/tinyos/tos/system/StateImplP.nc"
static inline bool StateImplP__State__isState(uint8_t id, uint8_t myState)
#line 133
{
  bool isState;

  /* atomic removed: atomic calls only */
#line 135
  isState = StateImplP__state[id] == myState;
  return isState;
}

#line 126
static inline bool StateImplP__State__isIdle(uint8_t id)
#line 126
{
  return StateImplP__State__isState(id, StateImplP__S_IDLE);
}

# 61 "/opt/tinyos/tos/interfaces/State.nc"
inline static bool CC2420SpiP__WorkingState__isIdle(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = StateImplP__State__isIdle(0U);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 260 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 262
{

  cc2420_status_t status = 0;
  uint8_t tmpLen = len;
  uint8_t * tmpData = (uint8_t * )data;

  /* atomic removed: atomic calls only */
#line 268
  {
    if (CC2420SpiP__WorkingState__isIdle()) {
        {
          unsigned char __nesc_temp = 
#line 270
          status;

#line 270
          return __nesc_temp;
        }
      }
  }
  addr += offset;

  status = CC2420SpiP__SpiByte__write(addr | 0x80);
  CC2420SpiP__SpiByte__write((addr >> 1) & 0xc0);
  for (; len; len--) {
      CC2420SpiP__SpiByte__write(tmpData[tmpLen - len]);
    }

  return status;
}

# 63 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420ControlP__IEEEADR__write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Ram__write(CC2420_RAM_IEEEADR, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 95 "/opt/tinyos/tos/interfaces/AsyncStdControl.nc"
inline static error_t CC2420TKN154P__TxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = CC2420TransmitP__AsyncStdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 65 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )31U |= 0x01 << 1;
}

# 92 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc();
#line 92
}
#line 92
# 57 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4409 {
#line 57
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

#line 72
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(uint8_t l_cm)
{
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x = { 
  .cm = l_cm & 0x03, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 1, 
  .scs = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(x);
}

#line 110
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm)
{
  * (volatile uint16_t * )388U = /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(cm);
}

# 55 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(uint8_t cm){
#line 55
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(cm);
#line 55
}
#line 55
# 130 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void )
{
  * (volatile uint16_t * )388U |= 0x0010;
}

# 57 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents();
#line 57
}
#line 57
# 64 "/opt/tinyos/tos/lib/timer/Counter.nc"
inline static /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/opt/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow(void )
{
  return /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__get();
}

# 109 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 192 "/opt/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static inline /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(uint8_t id)
#line 192
{
  return /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow();
}

# 89 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline uint32_t Alarm32khzTo62500hzTransformC__AlarmFrom__default__getNow(uint8_t num)
#line 89
{
#line 89
  return 0;
}

# 109 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static Alarm32khzTo62500hzTransformC__AlarmFrom__size_type Alarm32khzTo62500hzTransformC__AlarmFrom__getNow(uint8_t arg_0x413c8df0){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  switch (arg_0x413c8df0) {
#line 109
    case /*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID);
#line 109
      break;
#line 109
    case /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID);
#line 109
      break;
#line 109
    case /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID);
#line 109
      break;
#line 109
    default:
#line 109
      __nesc_result = Alarm32khzTo62500hzTransformC__AlarmFrom__default__getNow(arg_0x413c8df0);
#line 109
      break;
#line 109
    }
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 61 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline uint32_t Alarm32khzTo62500hzTransformC__Alarm__getNow(uint8_t num)
#line 61
{


  return Alarm32khzTo62500hzTransformC__AlarmFrom__getNow(num) << 1;
}

# 109 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static LocalTime62500hzP__Alarm__size_type LocalTime62500hzP__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = Alarm32khzTo62500hzTransformC__Alarm__getNow(/*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID);
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 9 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/LocalTime62500hzP.nc"
static inline uint32_t LocalTime62500hzP__LocalTime__get(void )
{
  return LocalTime62500hzP__Alarm__getNow();
}

# 61 "/opt/tinyos/tos/lib/timer/LocalTime.nc"
inline static uint32_t PibP__LocalTime__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = LocalTime62500hzP__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 49 "/opt/tinyos/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get();
}

# 64 "/opt/tinyos/tos/lib/timer/Counter.nc"
inline static /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 81 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void )
{
  return * (volatile uint16_t * )384U & 1U;
}

# 46 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
inline static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending(void ){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 54 "/opt/tinyos/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending();
}

# 71 "/opt/tinyos/tos/lib/timer/Counter.nc"
inline static bool /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 53 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SRXON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRXON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420ControlP__SACKPEND__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SACKPEND);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 341 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__CC2420Tx__lockChipSpi(void )
{
  CC2420TransmitP__abortSpiRelease = TRUE;
}

# 47 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static void CC2420TKN154P__CC2420Tx__lockChipSpi(void ){
#line 47
  CC2420TransmitP__CC2420Tx__lockChipSpi();
#line 47
}
#line 47
# 94 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoScanP.nc"
static inline void NoScanP__RadioRx__enableRxDone(void )
#line 94
{
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t DispatchUnslottedCsmaP__startIndirectTxTimerTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(DispatchUnslottedCsmaP__startIndirectTxTimerTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 371 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__RadioRx__enableRxDone(void )
{
  if (DispatchUnslottedCsmaP__m_indirectTxPending) {
    DispatchUnslottedCsmaP__startIndirectTxTimerTask__postTask();
    }
#line 375
  DispatchUnslottedCsmaP__m_lock = FALSE;
  DispatchUnslottedCsmaP__updateState();
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t PromiscuousModeP__signalStartDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PromiscuousModeP__signalStartDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 103 "/opt/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline void PromiscuousModeP__PromiscuousRx__enableRxDone(void )
{
  PromiscuousModeP__signalStartDoneTask__postTask();
}

# 107 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__MacRx__default__enableRxDone(uint8_t client)
#line 107
{
#line 107
  while (!0) {
#line 107
      break;
    }
#line 107
  ;
}

# 65 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static void RadioControlImplP__MacRx__enableRxDone(uint8_t arg_0x40aec748){
#line 65
  switch (arg_0x40aec748) {
#line 65
    case 0:
#line 65
      NoScanP__RadioRx__enableRxDone();
#line 65
      break;
#line 65
    case 2:
#line 65
      PromiscuousModeP__PromiscuousRx__enableRxDone();
#line 65
      break;
#line 65
    case 12U:
#line 65
      DispatchUnslottedCsmaP__RadioRx__enableRxDone();
#line 65
      break;
#line 65
    default:
#line 65
      RadioControlImplP__MacRx__default__enableRxDone(arg_0x40aec748);
#line 65
      break;
#line 65
    }
#line 65
}
#line 65
# 73 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__PhyRx__enableRxDone(void )
{
  RadioControlImplP__MacRx__enableRxDone(RadioControlImplP__ArbiterInfo__userId());
}

# 65 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static void CC2420TKN154P__RadioRx__enableRxDone(void ){
#line 65
  RadioControlImplP__PhyRx__enableRxDone();
#line 65
}
#line 65
# 438 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline bool CC2420TKN154P__RadioRx__isReceiving(void )
{
  return CC2420TKN154P__m_state == CC2420TKN154P__S_RECEIVING;
}

# 73 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static bool RadioControlImplP__PhyRx__isReceiving(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = CC2420TKN154P__RadioRx__isReceiving();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 97 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline bool RadioControlImplP__MacRx__isReceiving(uint8_t client)
{
  if (client == RadioControlImplP__ArbiterInfo__userId()) {
    return RadioControlImplP__PhyRx__isReceiving();
    }
  else 
#line 101
    {
      while (!0) {
#line 102
          break;
        }
#line 102
      ;
      return FAIL;
    }
}

# 73 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static bool DispatchUnslottedCsmaP__RadioRx__isReceiving(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = RadioControlImplP__MacRx__isReceiving(12U);
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 376 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline bool CC2420TKN154P__RadioOff__isOff(void )
{
  return CC2420TKN154P__m_state == CC2420TKN154P__S_RADIO_OFF;
}

# 60 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static bool RadioControlImplP__PhyRadioOff__isOff(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = CC2420TKN154P__RadioOff__isOff();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 314 "/opt/tinyos/tos/lib/mac/tkn154/TKN154_MAC.h"
static inline token_requested_t rcombine(token_requested_t r1, token_requested_t r2)
{
  return r1 || r2;
}

# 107 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoScanP.nc"
static inline token_requested_t NoScanP__IsRadioTokenRequested__getNow(void )
#line 107
{
#line 107
  return FALSE;
}

# 146 "/opt/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline token_requested_t PromiscuousModeP__IsRadioTokenRequested__getNow(void )
#line 146
{
#line 146
  return PromiscuousModeP__m_state == PromiscuousModeP__S_STARTING;
}

# 232 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline token_requested_t PibP__IsRadioTokenRequested__getNow(void )
#line 232
{
#line 232
  return PibP__m_resetSpin != 0;
}

# 51 "/opt/tinyos/tos/interfaces/GetNow.nc"
inline static DispatchUnslottedCsmaP__IsRadioTokenRequested__data_type DispatchUnslottedCsmaP__IsRadioTokenRequested__getNow(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = PibP__IsRadioTokenRequested__getNow();
#line 51
  __nesc_result = rcombine(__nesc_result, PromiscuousModeP__IsRadioTokenRequested__getNow());
#line 51
  __nesc_result = rcombine(__nesc_result, NoScanP__IsRadioTokenRequested__getNow());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 530 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__RadioTokenRequested__requested(void )
#line 530
{
#line 530
  DispatchUnslottedCsmaP__updateState();
}

# 181 "/opt/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 181
{
}

# 53 "/opt/tinyos/tos/interfaces/ResourceRequested.nc"
inline static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceRequested__requested(uint8_t arg_0x40b40b08){
#line 53
  switch (arg_0x40b40b08) {
#line 53
    case 12U:
#line 53
      DispatchUnslottedCsmaP__RadioTokenRequested__requested();
#line 53
      break;
#line 53
    default:
#line 53
      /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceRequested__default__requested(arg_0x40b40b08);
#line 53
      break;
#line 53
    }
#line 53
}
#line 53
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 97 "/opt/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id)
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  {
    if (!/*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(id)) {
        /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 101
          SUCCESS;

#line 101
          return __nesc_temp;
        }
      }
#line 103
    {
      unsigned char __nesc_temp = 
#line 103
      EBUSY;

#line 103
      return __nesc_temp;
    }
  }
}

# 79 "/opt/tinyos/tos/interfaces/ResourceQueue.nc"
inline static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 137 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t DispatchUnslottedCsmaP__RadioToken__release(void ){
#line 137
  unsigned char __nesc_result;
#line 137

#line 137
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__release(12U);
#line 137

#line 137
  return __nesc_result;
#line 137
}
#line 137
# 66 "/opt/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void )
#line 66
{
  int i;

  /* atomic removed: atomic calls only */
#line 68
  {
    for (i = 0; i < sizeof /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ; i++) 
      if (/*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 70
          FALSE;

#line 70
          return __nesc_temp;
        }
#line 71
    {
      unsigned char __nesc_temp = 
#line 71
      TRUE;

#line 71
      return __nesc_temp;
    }
  }
}

# 53 "/opt/tinyos/tos/interfaces/ResourceQueue.nc"
inline static bool /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 57 "/opt/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id)
#line 57
{
  /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] &= ~(1 << id % 8);
}

#line 79
static inline resource_client_id_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void )
#line 79
{
  int i;

  /* atomic removed: atomic calls only */
#line 81
  {
    for (i = /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__last + 1; ; i++) {
        if (i == 13U) {
          i = 0;
          }
#line 85
        if (/*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(i)) {
            /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__clearEntry(i);
            /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__last = i;
            {
              unsigned char __nesc_temp = 
#line 88
              i;

#line 88
              return __nesc_temp;
            }
          }
#line 90
        if (i == /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__last) {
          break;
          }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__NO_ENTRY;

#line 93
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 187 "/opt/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 187
{
}

# 65 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x40b3f7a8){
#line 65
    /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x40b3f7a8);
#line 65
}
#line 65
# 128 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static bool CC2420ControlP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = CC2420SpiP__Resource__isOwner(/*CC2420ControlTransmitC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 157 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline bool CC2420ControlP__Resource__isOwner(void )
#line 157
{
  return CC2420ControlP__SpiResource__isOwner();
}

# 128 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static bool CC2420TKN154P__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = CC2420ControlP__Resource__isOwner();
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 722 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__loadTxFrame(ieee154_txframe_t *frame)
{
  if (CC2420TKN154P__SpiResource__isOwner() || CC2420TKN154P__SpiResource__immediateRequest() == SUCCESS) {
    CC2420TKN154P__txSpiReserved();
    }
  else {
#line 727
    CC2420TKN154P__SpiResource__request();
    }
}

#line 496
static inline error_t CC2420TKN154P__UnslottedCsmaCa__transmit(ieee154_txframe_t *frame, ieee154_csma_t *csma)
{

  if ((((
#line 498
  frame == (void *)0 || frame->header == (void *)0) || (
  frame->payload == (void *)0 && frame->payloadLen != 0)) || frame->metadata == (void *)0) || 
  frame->headerLen + frame->payloadLen + 2 > IEEE154_aMaxPHYPacketSize) {
    return EINVAL;
    }
  /* atomic removed: atomic calls only */
#line 502
  {
    if (CC2420TKN154P__m_state != CC2420TKN154P__S_RADIO_OFF) 
      {
        unsigned char __nesc_temp = 
#line 504
        FAIL;

#line 504
        return __nesc_temp;
      }
#line 505
    CC2420TKN154P__m_state = CC2420TKN154P__S_LOAD_TXFIFO_UNSLOTTED;
  }
  CC2420TKN154P__m_txframe = frame;
  CC2420TKN154P__m_csma = csma;
  CC2420TKN154P__loadTxFrame(frame);
  return SUCCESS;
}

# 62 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
inline static error_t RadioControlImplP__PhyUnslottedCsmaCa__transmit(ieee154_txframe_t *frame, ieee154_csma_t *csma){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = CC2420TKN154P__UnslottedCsmaCa__transmit(frame, csma);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 139 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline error_t RadioControlImplP__UnslottedCsmaCa__transmit(uint8_t client, ieee154_txframe_t *frame, ieee154_csma_t *csma)
{
  if (client == RadioControlImplP__ArbiterInfo__userId()) {
    return RadioControlImplP__PhyUnslottedCsmaCa__transmit(frame, csma);
    }
  else 
#line 143
    {
      while (!0) {
#line 144
          break;
        }
#line 144
      ;
      return IEEE154_TRANSACTION_OVERFLOW;
    }
}

# 62 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
inline static error_t DispatchUnslottedCsmaP__UnslottedCsmaCa__transmit(ieee154_txframe_t *frame, ieee154_csma_t *csma){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RadioControlImplP__UnslottedCsmaCa__transmit(12U, frame, csma);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 60 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static bool DispatchUnslottedCsmaP__RadioOff__isOff(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = RadioControlImplP__MacRadioOff__isOff(12U);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 325 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline DispatchUnslottedCsmaP__next_state_t DispatchUnslottedCsmaP__tryTransmit(void )
{

  DispatchUnslottedCsmaP__next_state_t next;

  if (!DispatchUnslottedCsmaP__RadioOff__isOff()) {
    next = DispatchUnslottedCsmaP__SWITCH_OFF;
    }
  else 
#line 332
    {
      error_t res;

#line 334
      res = DispatchUnslottedCsmaP__UnslottedCsmaCa__transmit(DispatchUnslottedCsmaP__m_currentFrame, &DispatchUnslottedCsmaP__m_csma);
      ;
      next = DispatchUnslottedCsmaP__WAIT_FOR_TXDONE;
    }
  return next;
}

# 82 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length){
#line 82
  unsigned char __nesc_result;
#line 82

#line 82
  __nesc_result = CC2420SpiP__Fifo__write(CC2420_TXFIFO, data, length);
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 154 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__CC2420Tx__loadTXFIFO(ieee154_txframe_t *data)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      if (CC2420TransmitP__m_state != CC2420TransmitP__S_STARTED) 
        {
          unsigned char __nesc_temp = 
#line 158
          FAIL;

          {
#line 158
            __nesc_atomic_end(__nesc_atomic); 
#line 158
            return __nesc_temp;
          }
        }
#line 159
      CC2420TransmitP__m_state = CC2420TransmitP__S_LOAD;
      CC2420TransmitP__m_frame = data;
      CC2420TransmitP__m_frame->header->length = CC2420TransmitP__m_frame->headerLen + CC2420TransmitP__m_frame->payloadLen + 2;
      CC2420TransmitP__CSN__set();
      CC2420TransmitP__CSN__clr();
      CC2420TransmitP__SFLUSHTX__strobe();
      CC2420TransmitP__CSN__set();
      CC2420TransmitP__CSN__clr();
      CC2420TransmitP__TXFIFO__write(& CC2420TransmitP__m_frame->header->length, 1);
    }
#line 168
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 40 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static error_t CC2420TKN154P__CC2420Tx__loadTXFIFO(ieee154_txframe_t *data){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = CC2420TransmitP__CC2420Tx__loadTXFIFO(data);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 361 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__enableRxIntr(void )
#line 361
{
  /* atomic removed: atomic calls only */
#line 362
  {
    HplMsp430Usart0P__IFG1 &= ~0x40;
    HplMsp430Usart0P__IE1 |= 0x40;
  }
}

# 180 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__enableRxIntr(void ){
#line 180
  HplMsp430Usart0P__Usart__enableRxIntr();
#line 180
}
#line 180
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 210 "/opt/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void )
#line 210
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
}

# 73 "/opt/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested();
#line 73
}
#line 73
# 64 "/opt/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[id] != /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY || /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
        if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead = id;
          }
        else {
#line 88
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail] = id;
          }
#line 89
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/opt/tinyos/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 204 "/opt/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "/opt/tinyos/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x41198690){
#line 53
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x41198690);
#line 53
}
#line 53
# 77 "/opt/tinyos/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 79
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING;
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = id;
      }
    else {
#line 84
      if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId == id) {
          {
            unsigned char __nesc_temp = 
#line 85
            SUCCESS;

#line 85
            return __nesc_temp;
          }
        }
      else 
#line 87
        {
          unsigned char __nesc_temp = 
#line 87
          /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__enqueue(id);

#line 87
          return __nesc_temp;
        }
      }
  }
#line 89
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 173 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(uint8_t id)
#line 173
{
#line 173
  return FAIL;
}

# 88 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__request(uint8_t arg_0x410ce860){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x410ce860) {
#line 88
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 88
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(arg_0x410ce860);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 108 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(uint8_t id)
#line 108
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__request(id);
}

# 88 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 79 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoRxEnableP.nc"
static inline bool NoRxEnableP__IsRxEnableActive__getNow(void )
#line 79
{
#line 79
  return FALSE;
}

# 51 "/opt/tinyos/tos/interfaces/GetNow.nc"
inline static DispatchUnslottedCsmaP__IsRxEnableActive__data_type DispatchUnslottedCsmaP__IsRxEnableActive__getNow(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = NoRxEnableP__IsRxEnableActive__getNow();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t DispatchUnslottedCsmaP__wasRxEnabledTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(DispatchUnslottedCsmaP__wasRxEnabledTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 355 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline DispatchUnslottedCsmaP__next_state_t DispatchUnslottedCsmaP__trySwitchOff(void )
{
  DispatchUnslottedCsmaP__next_state_t next;

#line 358
  if (DispatchUnslottedCsmaP__RadioOff__isOff()) {
    next = DispatchUnslottedCsmaP__DO_NOTHING;
    }
  else {
#line 361
    next = DispatchUnslottedCsmaP__SWITCH_OFF;
    }
#line 362
  return next;
}

# 47 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static error_t DispatchUnslottedCsmaP__RadioOff__off(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = RadioControlImplP__MacRadioOff__off(12U);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 123 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420AsyncSplitControl.nc"
inline static error_t CC2420TKN154P__RxControl__stop(void ){
#line 123
  unsigned char __nesc_result;
#line 123

#line 123
  __nesc_result = CC2420ReceiveP__AsyncSplitControl__stop();
#line 123

#line 123
  return __nesc_result;
#line 123
}
#line 123
# 342 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline error_t CC2420TKN154P__RadioOff__off(void )
{
  error_t result;

#line 345
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 345
    {
      if (CC2420TKN154P__m_state == CC2420TKN154P__S_RADIO_OFF) 
        {
          unsigned char __nesc_temp = 
#line 347
          EALREADY;

          {
#line 347
            __nesc_atomic_end(__nesc_atomic); 
#line 347
            return __nesc_temp;
          }
        }
      else {
#line 348
        if (CC2420TKN154P__m_state != CC2420TKN154P__S_RECEIVING) 
          {
            unsigned char __nesc_temp = 
#line 349
            FAIL;

            {
#line 349
              __nesc_atomic_end(__nesc_atomic); 
#line 349
              return __nesc_temp;
            }
          }
        }
#line 350
      CC2420TKN154P__m_state = CC2420TKN154P__S_OFF_PENDING;
    }
#line 351
    __nesc_atomic_end(__nesc_atomic); }
  result = CC2420TKN154P__RxControl__stop();
  while (!(result == SUCCESS)) {
#line 353
      break;
    }
#line 353
  ;
  return result;
}

# 47 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static error_t RadioControlImplP__PhyRadioOff__off(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = CC2420TKN154P__RadioOff__off();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 103 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void TKN154TimingP__SymbolAlarm__startAt(TKN154TimingP__SymbolAlarm__size_type t0, TKN154TimingP__SymbolAlarm__size_type dt){
#line 103
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 90 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
static inline void TKN154TimingP__ReliableWait__waitRx(uint32_t t0, uint32_t dt)
{
  if (TKN154TimingP__m_state != TKN154TimingP__S_WAIT_OFF) {
      while (!0) {
#line 93
          break;
        }
#line 93
      ;
      return;
    }
  TKN154TimingP__m_state = TKN154TimingP__S_WAIT_RX;
  TKN154TimingP__SymbolAlarm__startAt(t0 - 16, dt);
}

# 35 "/opt/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
inline static void CC2420TKN154P__ReliableWait__waitRx(uint32_t t0, uint32_t dt){
#line 35
  TKN154TimingP__ReliableWait__waitRx(t0, dt);
#line 35
}
#line 35
# 130 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__enableEvents(void )
{
  * (volatile uint16_t * )392U |= 0x0010;
}

# 57 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__enableEvents();
#line 57
}
#line 57
# 95 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )392U &= ~0x0001;
}

# 44 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )408U = x;
}

# 41 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 165 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )408U = /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__get() + x;
}

# 43 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "/opt/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__clearPendingInterrupt();
    /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__enableEvents();
  }
}

# 103 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__startAt(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__size_type t0, /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__size_type dt){
#line 103
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t DispatchUnslottedCsmaP__signalTxDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(DispatchUnslottedCsmaP__signalTxDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 897 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__SlottedCsmaCa__default__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result)
#line 898
{
}

# 115 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
inline static void CC2420TKN154P__SlottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, uint16_t remainingBackoff, error_t result){
#line 115
  CC2420TKN154P__SlottedCsmaCa__default__transmitDone(frame, csma, ackPendingFlag, remainingBackoff, result);
#line 115
}
#line 115
# 713 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static __inline void CC2420TKN154P__txDoneSlottedCsmaCa(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result)
{

  CC2420TKN154P__SlottedCsmaCa__transmitDone(frame, csma, ackPendingFlag, remainingBackoff, result);
}

# 130 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void )
{
  * (volatile uint16_t * )386U |= 0x0010;
}

# 57 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents();
#line 57
}
#line 57
# 95 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )386U &= ~0x0001;
}

# 44 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )402U = x;
}

# 41 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 165 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )402U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get() + x;
}

# 43 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "/opt/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt();
    /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents();
  }
}

# 103 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 192 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired();
#line 45
}
#line 45
# 150 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void )
{
  return * (volatile uint16_t * )404U;
}

# 347 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

# 224 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void )
#line 224
{
  if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) {
    return;
    }
#line 227
  if (CC2420ReceiveP__m_timestamp_size) {
      CC2420ReceiveP__m_timestamp_size--;
    }
}

# 55 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd_dropped(void ){
#line 55
  CC2420ReceiveP__CC2420Receive__sfd_dropped();
#line 55
}
#line 55
# 78 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
static inline uint16_t TKN154TimingP__CaptureTime__getSFDUptime(uint16_t SFDCaptureTime, uint16_t EFDCaptureTime)
{

  return (EFDCaptureTime - SFDCaptureTime) * 2;
}

# 56 "/opt/tinyos/tos/chips/cc2420_tkn154/CaptureTime.nc"
inline static uint16_t CC2420TransmitP__CaptureTime__getSFDUptime(uint16_t SFDCaptureTime, uint16_t EFDCaptureTime){
#line 56
  unsigned int __nesc_result;
#line 56

#line 56
  __nesc_result = TKN154TimingP__CaptureTime__getSFDUptime(SFDCaptureTime, EFDCaptureTime);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 61 "/opt/tinyos/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void )
#line 61
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(MSP430TIMER_CM_RISING);
}

# 53 "/opt/tinyos/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 59 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )28U & (0x01 << 1);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw() != 0;
}

# 73 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__get();
}

# 43 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__SFD__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 214 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time)
#line 214
{
  if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) {
    return;
    }
#line 217
  if (CC2420ReceiveP__m_timestamp_size < CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE) {
      uint8_t tail = (CC2420ReceiveP__m_timestamp_head + CC2420ReceiveP__m_timestamp_size) % CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;

#line 219
      CC2420ReceiveP__m_timestamp_queue[tail] = time;
      CC2420ReceiveP__m_timestamp_size++;
    }
}

# 49 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time){
#line 49
  CC2420ReceiveP__CC2420Receive__sfd(time);
#line 49
}
#line 49
# 65 "/opt/tinyos/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge(void )
#line 65
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(MSP430TIMER_CM_FALLING);
}

# 54 "/opt/tinyos/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 64 "/opt/tinyos/tos/lib/timer/Counter.nc"
inline static /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__size_type /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/opt/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get();
}

#line 147
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type t0, /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt)
{
  /* atomic removed: atomic calls only */
  {
    /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 = t0;
    /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt = dt;
    /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm();
  }
}

static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt)
{
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(), dt);
}

# 66 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__start(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__size_type dt){
#line 66
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(dt);
#line 66
}
#line 66
# 52 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__start(uint32_t dt)
#line 52
{
#line 52
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__start(dt >> 1);
}

# 66 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP__BackoffAlarm__start(CC2420TransmitP__BackoffAlarm__size_type dt){
#line 66
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__start(dt);
#line 66
}
#line 66
# 900 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__Timestamp__default__transmissionStarted(uint8_t frameType, uint8_t msduHandle, uint8_t *msdu, uint8_t token)
#line 900
{
}

# 49 "/opt/tinyos/tos/chips/cc2420_tkn154/Timestamp.nc"
inline static void CC2420TKN154P__Timestamp__transmissionStarted(uint8_t frameType, uint8_t msduHandle, uint8_t *payload, uint8_t token){
#line 49
  CC2420TKN154P__Timestamp__default__transmissionStarted(frameType, msduHandle, payload, token);
#line 49
}
#line 49
# 815 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__CC2420Tx__transmissionStarted(ieee154_txframe_t *frame)
{
  uint8_t frameType = frame->header->mhr[0] & FC1_FRAMETYPE_MASK;
  uint8_t token = frame->headerLen;

#line 819
  CC2420TKN154P__Timestamp__transmissionStarted(frameType, frame->handle, frame->payload, token);
}

# 50 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static void CC2420TransmitP__CC2420Tx__transmissionStarted(ieee154_txframe_t *data){
#line 50
  CC2420TKN154P__CC2420Tx__transmissionStarted(data);
#line 50
}
#line 50
# 65 "/opt/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void )
{
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
}

# 73 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 102 "/opt/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__stop(void )
{
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__stop();
}

# 73 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__stop(void ){
#line 73
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 53 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__stop(void )
#line 53
{
#line 53
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__stop();
}

# 73 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP__BackoffAlarm__stop(void ){
#line 73
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__stop();
#line 73
}
#line 73
# 64 "/opt/tinyos/tos/lib/timer/Counter.nc"
inline static /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/opt/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__getNow(void )
{
  return /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__get();
}

# 109 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 58 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline uint32_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__getNow(void )
#line 58
{


  return /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__getNow() << 1;
}

# 109 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static TKN154TimingP__SymbolAlarm__size_type TKN154TimingP__SymbolAlarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 67 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
static inline uint32_t TKN154TimingP__CaptureTime__getTimestamp(uint16_t captured_time)
{
  uint32_t now = TKN154TimingP__SymbolAlarm__getNow();





  return now - (uint16_t )(now - captured_time * 2) - 10;
}

# 47 "/opt/tinyos/tos/chips/cc2420_tkn154/CaptureTime.nc"
inline static uint32_t CC2420TransmitP__CaptureTime__getTimestamp(uint16_t SFDCaptureTime){
#line 47
  unsigned long __nesc_result;
#line 47

#line 47
  __nesc_result = TKN154TimingP__CaptureTime__getTimestamp(SFDCaptureTime);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 245 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time)
#line 245
{
  uint32_t time32;
  uint8_t sfd_state = 0;

  /* atomic removed: atomic calls only */
#line 248
  {
    time32 = CC2420TransmitP__CaptureTime__getTimestamp(time);
    switch (CC2420TransmitP__m_state) {

        case CC2420TransmitP__S_SFD: 
          CC2420TransmitP__m_state = CC2420TransmitP__S_EFD;
        CC2420TransmitP__sfdHigh = TRUE;


        CC2420TransmitP__m_receiving = FALSE;
        CC2420TransmitP__CaptureSFD__captureFallingEdge();
        __nesc_hton_uint32(CC2420TransmitP__m_frame->metadata->timestamp.nxdata, time32);

        CC2420TransmitP__BackoffAlarm__stop();

        if (CC2420TransmitP__SFD__get()) {
            break;
          }


        case CC2420TransmitP__S_EFD: 
          CC2420TransmitP__sfdHigh = FALSE;
        CC2420TransmitP__CaptureSFD__captureRisingEdge();

        CC2420TransmitP__CC2420Tx__transmissionStarted(CC2420TransmitP__m_frame);
        if (CC2420TransmitP__m_frame->header->mhr[0] & (1 << IEEE154_FCF_ACK_REQ)) {

            CC2420TransmitP__m_state = CC2420TransmitP__S_ACK_WAIT;



            CC2420TransmitP__BackoffAlarm__start(150);
          }
        else 
#line 280
          {
            CC2420TransmitP__signalDone(FALSE, SUCCESS);
          }

        if (!CC2420TransmitP__SFD__get()) {
            break;
          }


        default: 

          if (!CC2420TransmitP__m_receiving && CC2420TransmitP__sfdHigh == FALSE) {
              CC2420TransmitP__sfdHigh = TRUE;
              CC2420TransmitP__CaptureSFD__captureFallingEdge();

              sfd_state = CC2420TransmitP__SFD__get();

              CC2420TransmitP__CC2420Receive__sfd(time32);
              CC2420TransmitP__m_receiving = TRUE;
              CC2420TransmitP__m_prev_time = time;
              if (CC2420TransmitP__SFD__get()) {

                  return;
                }
            }

        if (CC2420TransmitP__sfdHigh == TRUE) {
            CC2420TransmitP__sfdHigh = FALSE;
            CC2420TransmitP__CaptureSFD__captureRisingEdge();
            CC2420TransmitP__m_receiving = FALSE;









            if (sfd_state == 0 && CC2420TransmitP__CaptureTime__getSFDUptime(CC2420TransmitP__m_prev_time, time) < 20) {
              CC2420TransmitP__CC2420Receive__sfd_dropped();
              }
#line 321
            break;
          }
      }
  }
}

# 61 "/opt/tinyos/tos/interfaces/GpioCapture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(uint16_t time){
#line 61
  CC2420TransmitP__CaptureSFD__captured(time);
#line 61
}
#line 61
# 175 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void )
{
  * (volatile uint16_t * )388U &= ~0x0002;
}

# 68 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow(void ){
#line 68
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow();
#line 68
}
#line 68
# 95 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )388U &= ~0x0001;
}

# 44 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 76 "/opt/tinyos/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time)
#line 76
{
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt();
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow();
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(time);
}

# 86 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time){
#line 86
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(time);
#line 86
}
#line 86
# 58 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4410 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(* (volatile uint16_t * )388U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired();
    }
}

# 13 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/LocalTime62500hzP.nc"
static inline void LocalTime62500hzP__Alarm__fired(void )
#line 13
{
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/opt/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 87 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline void Alarm32khzTo62500hzTransformC__Alarm__default__fired(uint8_t num)
#line 87
{
}

# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void Alarm32khzTo62500hzTransformC__Alarm__fired(uint8_t arg_0x413cce98){
#line 78
  switch (arg_0x413cce98) {
#line 78
    case /*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID:
#line 78
      CC2420ControlP__StartupAlarm__fired();
#line 78
      break;
#line 78
    case /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID:
#line 78
      LocalTime62500hzP__Alarm__fired();
#line 78
      break;
#line 78
    case /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID:
#line 78
      /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
      break;
#line 78
    default:
#line 78
      Alarm32khzTo62500hzTransformC__Alarm__default__fired(arg_0x413cce98);
#line 78
      break;
#line 78
    }
#line 78
}
#line 78
# 57 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline void Alarm32khzTo62500hzTransformC__AlarmFrom__fired(uint8_t num)
#line 57
{
#line 57
  Alarm32khzTo62500hzTransformC__Alarm__fired(num);
}

# 200 "/opt/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__default__fired(uint8_t id)
#line 200
{
}

# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__fired(uint8_t arg_0x413f15f8){
#line 78
  switch (arg_0x413f15f8) {
#line 78
    case /*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID);
#line 78
      break;
#line 78
    case /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID);
#line 78
      break;
#line 78
    case /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID);
#line 78
      break;
#line 78
    default:
#line 78
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__default__fired(arg_0x413f15f8);
#line 78
      break;
#line 78
    }
#line 78
}
#line 78
# 139 "/opt/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__signalAlarms(void )
#line 139
{
  uint8_t id;

  /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.is_signaling = TRUE;

  for (id = 0; id < /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__NUM_ALARMS; id++) {
      if (/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset[id]) {


          /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type t0 = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].t0;
          /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type elapsed = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow() - t0;

#line 150
          if (/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].dt <= elapsed) {
              /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset[id] = FALSE;
              /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__fired(id);
            }
        }
    }

  /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.is_signaling = FALSE;
}











static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__fired(void )
#line 170
{
  /* atomic removed: atomic calls only */
#line 171
  {
    /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__signalAlarms();
    /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__setNextAlarm();
  }
}

# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__fired(void ){
#line 78
  /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 162 "/opt/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt == 0) 
      {
        /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__fired();
      }
    else 
      {
        /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__set_alarm();
      }
  }
}

# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired(void ){
#line 78
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void )
{
  * (volatile uint16_t * )390U &= ~0x0010;
}

# 58 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents();
#line 58
}
#line 58
# 70 "/opt/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void )
{
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired();
}

# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void ){
#line 45
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void )
{
  return * (volatile uint16_t * )406U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4411 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(* (volatile uint16_t * )390U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired();
    }
}

# 40 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__set(void ){
#line 40
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set();
#line 40
}
#line 40
# 63 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_RXCTRL1, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG0, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 53 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SXOSCON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 90 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__enable(void )
#line 90
{
#line 90
  P1IE |= 1 << 4;
}

# 42 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port14__enable();
#line 42
}
#line 42
# 142 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__edge(bool l2h)
#line 142
{
  /* atomic removed: atomic calls only */
#line 143
  {
    if (l2h) {
#line 144
      P1IES &= ~(1 << 4);
      }
    else {
#line 145
      P1IES |= 1 << 4;
      }
  }
}

# 67 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(bool low_to_high){
#line 67
  HplMsp430InterruptP__Port14__edge(low_to_high);
#line 67
}
#line 67
# 106 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__clear(void )
#line 106
{
#line 106
  P1IFG &= ~(1 << 4);
}

# 52 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port14__clear();
#line 52
}
#line 52
# 98 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__disable(void )
#line 98
{
#line 98
  P1IE &= ~(1 << 4);
}

# 47 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable(void ){
#line 47
  HplMsp430InterruptP__Port14__disable();
#line 47
}
#line 47
# 69 "/opt/tinyos/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void )
#line 69
{
  /* atomic removed: atomic calls only */
#line 70
  {
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable();
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear();
  }
  return SUCCESS;
}

#line 52
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(bool rising)
#line 52
{
  /* atomic removed: atomic calls only */
#line 53
  {
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable();
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(rising);
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable();
  }
  return SUCCESS;
}

static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void )
#line 61
{
  return /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(TRUE);
}

# 53 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 63 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG1, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 41 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__clr(void ){
#line 41
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr();
#line 41
}
#line 41
# 194 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startOscillator(void )
#line 194
{
  /* atomic removed: atomic calls only */
#line 195
  {
    if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STARTED) {
        {
          unsigned char __nesc_temp = 
#line 197
          FAIL;

#line 197
          return __nesc_temp;
        }
      }
    CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTING;
    CC2420ControlP__CSN__set();
    CC2420ControlP__CSN__clr();
    CC2420ControlP__IOCFG1__write(CC2420_SFDMUX_XOSC16M_STABLE << 
    CC2420_IOCFG1_CCAMUX);

    CC2420ControlP__InterruptCCA__enableRisingEdge();
    CC2420ControlP__SXOSCON__strobe();

    CC2420ControlP__IOCFG0__write((1 << CC2420_IOCFG0_FIFOP_POLARITY) | (
    127 << CC2420_IOCFG0_FIFOP_THR));

    CC2420ControlP__writeFsctrl();
    CC2420ControlP__writeMdmctrl0();

    CC2420ControlP__RXCTRL1__write(((((((1 << CC2420_RXCTRL1_RXBPF_LOCUR) | (
    1 << CC2420_RXCTRL1_LOW_LOWGAIN)) | (
    1 << CC2420_RXCTRL1_HIGH_HGM)) | (
    1 << CC2420_RXCTRL1_LNA_CAP_ARRAY)) | (
    1 << CC2420_RXCTRL1_RXMIX_TAIL)) | (
    1 << CC2420_RXCTRL1_RXMIX_VCM)) | (
    2 << CC2420_RXCTRL1_RXMIX_CURRENT));
    CC2420ControlP__CSN__set();
  }
  return SUCCESS;
}

# 72 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static error_t CC2420TKN154P__CC2420Power__startOscillator(void ){
#line 72
  unsigned char __nesc_result;
#line 72

#line 72
  __nesc_result = CC2420ControlP__CC2420Power__startOscillator();
#line 72

#line 72
  return __nesc_result;
#line 72
}
#line 72
# 155 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__CC2420Power__startVRegDone(void )
{
  CC2420TKN154P__CC2420Power__startOscillator();
}

# 57 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startVRegDone(void ){
#line 57
  CC2420TKN154P__CC2420Power__startVRegDone();
#line 57
}
#line 57
# 147 "/opt/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type t0, /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type dt)
{
  /* atomic removed: atomic calls only */
  {
    /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 = t0;
    /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt = dt;
    /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__set_alarm();
  }
}

# 103 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__startAt(/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type t0, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 130 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void )
{
  * (volatile uint16_t * )390U |= 0x0010;
}

# 57 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents();
#line 57
}
#line 57
# 95 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )390U &= ~0x0001;
}

# 44 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )406U = x;
}

# 41 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 165 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )406U = /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get() + x;
}

# 43 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "/opt/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt();
    /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents();
  }
}

# 103 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type t0, /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type dt){
#line 103
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 65 "/opt/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void )
{
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
}

# 73 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__stop(void ){
#line 73
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop();
#line 73
}
#line 73
# 102 "/opt/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__stop(void )
{
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__stop();
}

# 73 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__stop();
#line 73
}
#line 73
# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420TKN154P__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420ControlP__Resource__release();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 105 "/opt/tinyos/tos/interfaces/AsyncStdControl.nc"
inline static error_t CC2420TKN154P__TxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = CC2420TransmitP__AsyncStdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 346 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__CC2420Tx__unlockChipSpi(void )
{
  CC2420TransmitP__abortSpiRelease = FALSE;
}

# 48 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static void CC2420TKN154P__CC2420Tx__unlockChipSpi(void ){
#line 48
  CC2420TransmitP__CC2420Tx__unlockChipSpi();
#line 48
}
#line 48
# 112 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static error_t CC2420TKN154P__CC2420Power__flushRxFifo(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = CC2420ControlP__CC2420Power__flushRxFifo();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
#line 98
inline static error_t CC2420TKN154P__CC2420Power__rfOff(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = CC2420ControlP__CC2420Power__rfOff();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 43 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static error_t CC2420TKN154P__CC2420Tx__send(bool cca){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = CC2420TransmitP__CC2420Tx__send(cca);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 104 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static error_t CC2420TKN154P__CC2420Power__rssi(int8_t *rssi){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = CC2420ControlP__CC2420Power__rssi(rssi);
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
#line 91
inline static error_t CC2420TKN154P__CC2420Power__rxOn(void ){
#line 91
  unsigned char __nesc_result;
#line 91

#line 91
  __nesc_result = CC2420ControlP__CC2420Power__rxOn();
#line 91

#line 91
  return __nesc_result;
#line 91
}
#line 91
# 521 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__waitBackoffDoneUnslottedCsma(void )
{

  int8_t dummy;
  ieee154_txframe_t *frame = (void *)0;
  ieee154_csma_t *csma = (void *)0;

  /* atomic removed: atomic calls only */
#line 528
  {



    CC2420TKN154P__CC2420Power__rxOn();
    CC2420TKN154P__m_state = CC2420TKN154P__S_TX_ACTIVE_UNSLOTTED_CSMA;


    while (CC2420TKN154P__CC2420Power__rssi(&dummy) != SUCCESS) 
      ;


    if (CC2420TKN154P__CC2420Tx__send(TRUE) == SUCCESS) {

        CC2420TKN154P__checkEnableRxForACK();
      }
    else 
#line 543
      {

        CC2420TKN154P__CC2420Power__rfOff();

        CC2420TKN154P__CC2420Power__flushRxFifo();
        CC2420TKN154P__m_csma->NB += 1;
        if (CC2420TKN154P__m_csma->NB > CC2420TKN154P__m_csma->macMaxCsmaBackoffs) {

            frame = CC2420TKN154P__m_txframe;
            csma = CC2420TKN154P__m_csma;
          }
        else {

            CC2420TKN154P__m_csma->BE += 1;
            if (CC2420TKN154P__m_csma->BE > CC2420TKN154P__m_csma->macMaxBE) {
              CC2420TKN154P__m_csma->BE = CC2420TKN154P__m_csma->macMaxBE;
              }
#line 559
            CC2420TKN154P__nextIterationUnslottedCsma();
          }
      }
  }
  if (frame != (void *)0) {
      CC2420TKN154P__CC2420Tx__unlockChipSpi();
      CC2420TKN154P__TxControl__stop();
      CC2420TKN154P__SpiResource__release();
      CC2420TKN154P__m_state = CC2420TKN154P__S_RADIO_OFF;
      CC2420TKN154P__UnslottedCsmaCa__transmitDone(frame, csma, FALSE, FAIL);
    }
}

# 59 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )32U & (0x01 << 4);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw() != 0;
}

# 73 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__get();
}

# 43 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__CCA__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 327 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline bool CC2420TransmitP__CC2420Tx__cca(void )
{
  return CC2420TransmitP__CCA__get();
}

# 46 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static bool CC2420TKN154P__CC2420Tx__cca(void ){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = CC2420TransmitP__CC2420Tx__cca();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 887 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline bool CC2420TKN154P__CCA__getNow(void )
{
  return CC2420TKN154P__CC2420Tx__cca();
}

# 51 "/opt/tinyos/tos/interfaces/GetNow.nc"
inline static TKN154TimingP__CCA__data_type TKN154TimingP__CCA__getNow(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420TKN154P__CCA__getNow();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 84 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
static inline bool TKN154TimingP__ReliableWait__ccaOnBackoffBoundary(uint32_t slot0)
{

  return TKN154TimingP__CCA__getNow() ? 20 : 0;
}

# 41 "/opt/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
inline static bool CC2420TKN154P__ReliableWait__ccaOnBackoffBoundary(uint32_t slot0){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = TKN154TimingP__ReliableWait__ccaOnBackoffBoundary(slot0);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 644 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__waitBackoffDoneSlottedCsma(void )
{
  int8_t dummy;
  bool ccaFailure = FALSE;
  error_t result = FAIL;
  ieee154_txframe_t *frame = (void *)0;
  ieee154_csma_t *csma = (void *)0;

  /* atomic removed: atomic calls only */
#line 652
  {



    CC2420TKN154P__CC2420Power__rxOn();
    CC2420TKN154P__m_state = CC2420TKN154P__S_TX_ACTIVE_SLOTTED_CSMA;


    while (CC2420TKN154P__CC2420Power__rssi(&dummy) != SUCCESS) 
      ;




    if (CC2420TKN154P__ReliableWait__ccaOnBackoffBoundary(CC2420TKN154P__m_t0)) {

        if (CC2420TKN154P__CC2420Tx__send(TRUE) == SUCCESS) {

            CC2420TKN154P__checkEnableRxForACK();
            return;
          }
        else {
#line 673
          ccaFailure = TRUE;
          }
      }
    else {
#line 675
      ccaFailure = TRUE;
      }

    CC2420TKN154P__CC2420Power__rfOff();
    CC2420TKN154P__CC2420Power__flushRxFifo();
    CC2420TKN154P__m_state = CC2420TKN154P__S_LOAD_TXFIFO_SLOTTED;
    if (ccaFailure) {
        CC2420TKN154P__m_csma->NB += 1;
        if (CC2420TKN154P__m_csma->NB > CC2420TKN154P__m_csma->macMaxCsmaBackoffs) {

            frame = CC2420TKN154P__m_txframe;
            csma = CC2420TKN154P__m_csma;
            result = FAIL;
          }
        else 
#line 688
          {

            CC2420TKN154P__m_csma->BE += 1;
            if (CC2420TKN154P__m_csma->BE > CC2420TKN154P__m_csma->macMaxBE) {
              CC2420TKN154P__m_csma->BE = CC2420TKN154P__m_csma->macMaxBE;
              }
#line 693
            CC2420TKN154P__nextIterationSlottedCsma();
          }
      }
    else 
#line 695
      {



        frame = CC2420TKN154P__m_txframe;
        csma = CC2420TKN154P__m_csma;
        result = ERETRY;
      }
  }
  if (frame != (void *)0) {
      CC2420TKN154P__CC2420Tx__unlockChipSpi();
      CC2420TKN154P__TxControl__stop();
      CC2420TKN154P__SpiResource__release();
      CC2420TKN154P__m_state = CC2420TKN154P__S_RADIO_OFF;
      CC2420TKN154P__SlottedCsmaCa__transmitDone(frame, csma, FALSE, 0, result);
    }
}

#line 837
static inline void CC2420TKN154P__ReliableWait__waitBackoffDone(void )
{
  switch (CC2420TKN154P__m_state) 
    {
      case CC2420TKN154P__S_TX_BACKOFF_SLOTTED: CC2420TKN154P__waitBackoffDoneSlottedCsma();
#line 841
      break;
      case CC2420TKN154P__S_TX_BACKOFF_UNSLOTTED: CC2420TKN154P__waitBackoffDoneUnslottedCsma();
#line 842
      break;
      default: while (!0) {
#line 843
            break;
          }
#line 843
      ;
#line 843
      break;
    }
}

# 40 "/opt/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
inline static void TKN154TimingP__ReliableWait__waitBackoffDone(void ){
#line 40
  CC2420TKN154P__ReliableWait__waitBackoffDone();
#line 40
}
#line 40
#line 38
inline static void TKN154TimingP__ReliableWait__waitTxDone(void ){
#line 38
  CC2420TKN154P__ReliableWait__waitTxDone();
#line 38
}
#line 38
#line 36
inline static void TKN154TimingP__ReliableWait__waitRxDone(void ){
#line 36
  CC2420TKN154P__ReliableWait__waitRxDone();
#line 36
}
#line 36
# 120 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
static inline void TKN154TimingP__SymbolAlarm__fired(void )
{
  switch (TKN154TimingP__m_state) 
    {
      case TKN154TimingP__S_WAIT_RX: TKN154TimingP__m_state = TKN154TimingP__S_WAIT_OFF;
#line 124
      TKN154TimingP__ReliableWait__waitRxDone();
#line 124
      break;
      case TKN154TimingP__S_WAIT_TX: TKN154TimingP__m_state = TKN154TimingP__S_WAIT_OFF;
#line 125
      TKN154TimingP__ReliableWait__waitTxDone();
#line 125
      break;
      case TKN154TimingP__S_WAIT_BACKOFF: TKN154TimingP__m_state = TKN154TimingP__S_WAIT_OFF;
#line 126
      TKN154TimingP__ReliableWait__waitBackoffDone();
#line 126
      break;
      default: while (!0) {
#line 127
            break;
          }
#line 127
      ;
#line 127
      break;
    }
}

# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__fired(void ){
#line 78
  TKN154TimingP__SymbolAlarm__fired();
#line 78
}
#line 78
# 54 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__fired(void )
#line 54
{
#line 54
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__fired();
}

# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__fired(void ){
#line 78
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__fired();
#line 78
}
#line 78
# 162 "/opt/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_dt == 0) 
      {
        /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__fired();
      }
    else 
      {
        /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__set_alarm();
      }
  }
}

# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__fired(void ){
#line 78
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__disableEvents(void )
{
  * (volatile uint16_t * )392U &= ~0x0010;
}

# 58 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__disableEvents();
#line 58
}
#line 58
# 70 "/opt/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired(void )
{
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents();
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__fired();
}

# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void ){
#line 45
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void )
{
  return * (volatile uint16_t * )408U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6____nesc_unnamed4412 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(* (volatile uint16_t * )392U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired();
    }
}

# 53 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXONCCA);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420TransmitP__STXON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420TransmitP__SNOP__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SNOP);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 55 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP__Reg__read(CC2420_RSSI, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 89 "/opt/tinyos/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "/opt/tinyos/tos/interfaces/Random.nc"
inline static uint16_t CC2420TKN154P__Random__rand16(void ){
#line 52
  unsigned int __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 40 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
inline static uint32_t CC2420TKN154P__TimeCalc__timeElapsed(uint32_t t0, uint32_t t1){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = PibP__TimeCalc__timeElapsed(t0, t1);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 39 "/opt/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
inline static void CC2420TKN154P__ReliableWait__waitBackoff(uint32_t dt){
#line 39
  TKN154TimingP__ReliableWait__waitBackoff(dt);
#line 39
}
#line 39
# 147 "/opt/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type t0, /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type dt)
{
  /* atomic removed: atomic calls only */
  {
    /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_t0 = t0;
    /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_dt = dt;
    /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__set_alarm();
  }
}

static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__start(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type dt)
{
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__getNow(), dt);
}

# 66 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__start(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__size_type dt){
#line 66
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__start(dt);
#line 66
}
#line 66
# 52 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__start(uint32_t dt)
#line 52
{
#line 52
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__start(dt >> 1);
}

# 66 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void TKN154TimingP__SymbolAlarm__start(TKN154TimingP__SymbolAlarm__size_type dt){
#line 66
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__start(dt);
#line 66
}
#line 66
# 192 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired();
#line 45
}
#line 45
# 150 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void )
{
  return * (volatile uint16_t * )410U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7____nesc_unnamed4413 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(* (volatile uint16_t * )394U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired();
#line 45
}
#line 45
# 150 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void )
{
  return * (volatile uint16_t * )412U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8____nesc_unnamed4414 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(* (volatile uint16_t * )396U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired();
#line 45
}
#line 45
# 150 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void )
{
  return * (volatile uint16_t * )414U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9____nesc_unnamed4415 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(* (volatile uint16_t * )398U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired();
    }
}

# 131 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )286U;

#line 134
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(n >> 1);
}

# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB1__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired();
#line 39
}
#line 39
# 124 "/opt/tinyos/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/opt/tinyos/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 56 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )49U |= 0x01 << 6;
}

# 48 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set();
#line 48
}
#line 48
# 48 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set();
}

# 40 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set();
#line 40
}
#line 40
# 56 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )49U |= 0x01 << 5;
}

# 48 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set();
#line 48
}
#line 48
# 48 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set();
}

# 40 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set();
#line 40
}
#line 40
# 56 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )49U |= 0x01 << 4;
}

# 48 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set();
#line 48
}
#line 48
# 48 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set();
}

# 40 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set();
#line 40
}
#line 40
# 63 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )50U |= 0x01 << 6;
}

# 85 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput();
#line 85
}
#line 85
# 54 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput();
}

# 46 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )50U |= 0x01 << 5;
}

# 85 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput();
#line 85
}
#line 85
# 54 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput();
}

# 46 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )50U |= 0x01 << 4;
}

# 85 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput();
#line 85
}
#line 85
# 54 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput();
}

# 46 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput();
#line 46
}
#line 46
# 56 "/opt/tinyos/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "/opt/tinyos/tos/interfaces/Init.nc"
inline static error_t PlatformP__LedsInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 36 "/opt/tinyos/tos/platforms/telosb/hardware.h"
static inline  void TOSH_SET_SIMO0_PIN()
#line 36
{
#line 36
  static volatile uint8_t r __asm ("0x0019");

#line 36
  r |= 1 << 1;
}

#line 37
static inline  void TOSH_SET_UCLK0_PIN()
#line 37
{
#line 37
  static volatile uint8_t r __asm ("0x0019");

#line 37
  r |= 1 << 3;
}

#line 88
static inline  void TOSH_SET_FLASH_CS_PIN()
#line 88
{
#line 88
  static volatile uint8_t r __asm ("0x001D");

#line 88
  r |= 1 << 4;
}

#line 37
static inline  void TOSH_CLR_UCLK0_PIN()
#line 37
{
#line 37
  static volatile uint8_t r __asm ("0x0019");

#line 37
  r &= ~(1 << 3);
}

#line 88
static inline  void TOSH_CLR_FLASH_CS_PIN()
#line 88
{
#line 88
  static volatile uint8_t r __asm ("0x001D");

#line 88
  r &= ~(1 << 4);
}

# 11 "/opt/tinyos/tos/platforms/telosb/MotePlatformC.nc"
static __inline void MotePlatformC__TOSH_wait(void )
#line 11
{
  __nop();
#line 12
  __nop();
}

# 89 "/opt/tinyos/tos/platforms/telosb/hardware.h"
static inline  void TOSH_SET_FLASH_HOLD_PIN()
#line 89
{
#line 89
  static volatile uint8_t r __asm ("0x001D");

#line 89
  r |= 1 << 7;
}

#line 88
static inline  void TOSH_MAKE_FLASH_CS_OUTPUT()
#line 88
{
#line 88
  static volatile uint8_t r __asm ("0x001E");

#line 88
  r |= 1 << 4;
}

#line 89
static inline  void TOSH_MAKE_FLASH_HOLD_OUTPUT()
#line 89
{
#line 89
  static volatile uint8_t r __asm ("0x001E");

#line 89
  r |= 1 << 7;
}

#line 37
static inline  void TOSH_MAKE_UCLK0_OUTPUT()
#line 37
{
#line 37
  static volatile uint8_t r __asm ("0x001A");

#line 37
  r |= 1 << 3;
}

#line 36
static inline  void TOSH_MAKE_SIMO0_OUTPUT()
#line 36
{
#line 36
  static volatile uint8_t r __asm ("0x001A");

#line 36
  r |= 1 << 1;
}

# 27 "/opt/tinyos/tos/platforms/telosb/MotePlatformC.nc"
static inline void MotePlatformC__TOSH_FLASH_M25P_DP(void )
#line 27
{

  TOSH_MAKE_SIMO0_OUTPUT();
  TOSH_MAKE_UCLK0_OUTPUT();
  TOSH_MAKE_FLASH_HOLD_OUTPUT();
  TOSH_MAKE_FLASH_CS_OUTPUT();
  TOSH_SET_FLASH_HOLD_PIN();
  TOSH_SET_FLASH_CS_PIN();

  MotePlatformC__TOSH_wait();


  TOSH_CLR_FLASH_CS_PIN();
  TOSH_CLR_UCLK0_PIN();

  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);

  TOSH_SET_FLASH_CS_PIN();
  TOSH_SET_UCLK0_PIN();
  TOSH_SET_SIMO0_PIN();
}

#line 6
static __inline void MotePlatformC__uwait(uint16_t u)
#line 6
{
  uint16_t t0 = TAR;

#line 8
  while (TAR - t0 <= u) ;
}

#line 56
static inline error_t MotePlatformC__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */

  {
    P1SEL = 0;
    P2SEL = 0;
    P3SEL = 0;
    P4SEL = 0;
    P5SEL = 0;
    P6SEL = 0;

    P1OUT = 0x00;
    P1DIR = 0xe0;

    P2OUT = 0x30;
    P2DIR = 0x7b;

    P3OUT = 0x00;
    P3DIR = 0xf1;

    P4OUT = 0xdd;
    P4DIR = 0xfd;

    P5OUT = 0xff;
    P5DIR = 0xff;

    P6OUT = 0x00;
    P6DIR = 0xff;

    P1IE = 0;
    P2IE = 0;






    MotePlatformC__uwait(1024 * 10);

    MotePlatformC__TOSH_FLASH_M25P_DP();
  }

  return SUCCESS;
}

# 62 "/opt/tinyos/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MotePlatformC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 163 "/opt/tinyos/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__startTimerB(void )
{

  Msp430ClockP__TBCTL = 0x0020 | (Msp430ClockP__TBCTL & ~(0x0020 | 0x0010));
}

#line 151
static inline void Msp430ClockP__startTimerA(void )
{

  Msp430ClockP__TACTL = 0x0020 | (Msp430ClockP__TACTL & ~(0x0020 | 0x0010));
}

#line 115
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void )
{
  TBR = 0;









  Msp430ClockP__TBCTL = 0x0100 | 0x0002;
}

#line 145
static inline void Msp430ClockP__Msp430ClockInit__default__initTimerB(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitTimerB();
}

# 43 "/opt/tinyos/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerB(void ){
#line 43
  Msp430ClockP__Msp430ClockInit__default__initTimerB();
#line 43
}
#line 43
# 100 "/opt/tinyos/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void )
{
  TAR = 0;









  Msp430ClockP__TACTL = 0x0200 | 0x0002;
}

#line 140
static inline void Msp430ClockP__Msp430ClockInit__default__initTimerA(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitTimerA();
}

# 42 "/opt/tinyos/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerA(void ){
#line 42
  Msp430ClockP__Msp430ClockInit__default__initTimerA();
#line 42
}
#line 42
# 79 "/opt/tinyos/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void )
{





  BCSCTL1 = 0x80 | (BCSCTL1 & ((0x04 | 0x02) | 0x01));







  BCSCTL2 = 0x04;


  Msp430ClockP__IE1 &= ~0x02;
}

#line 135
static inline void Msp430ClockP__Msp430ClockInit__default__initClocks(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitClocks();
}

# 41 "/opt/tinyos/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initClocks(void ){
#line 41
  Msp430ClockP__Msp430ClockInit__default__initClocks();
#line 41
}
#line 41
# 181 "/opt/tinyos/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline uint16_t Msp430ClockP__test_calib_busywait_delta(int calib)
{
  int8_t aclk_count = 2;
  uint16_t dco_prev = 0;
  uint16_t dco_curr = 0;

  Msp430ClockP__set_dco_calib(calib);

  while (aclk_count-- > 0) 
    {
      TBCCR0 = TBR + Msp430ClockP__ACLK_CALIB_PERIOD;
      TBCCTL0 &= ~0x0001;
      while ((TBCCTL0 & 0x0001) == 0) ;
      dco_prev = dco_curr;
      dco_curr = TAR;
    }

  return dco_curr - dco_prev;
}




static inline void Msp430ClockP__busyCalibrateDco(void )
{

  int calib;
  int step;






  for (calib = 0, step = 0x800; step != 0; step >>= 1) 
    {

      if (Msp430ClockP__test_calib_busywait_delta(calib | step) <= Msp430ClockP__TARGET_DCO_DELTA) {
        calib |= step;
        }
    }

  if ((calib & 0x0e0) == 0x0e0) {
    calib &= ~0x01f;
    }
  Msp430ClockP__set_dco_calib(calib);
}

#line 67
static inline void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void )
{



  Msp430ClockP__TACTL = 0x0200 | 0x0020;
  Msp430ClockP__TBCTL = 0x0100 | 0x0020;
  BCSCTL1 = 0x80 | 0x04;
  BCSCTL2 = 0;
  TBCCTL0 = 0x4000;
}

#line 130
static inline void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void )
{
  Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate();
}

# 40 "/opt/tinyos/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__setupDcoCalibrate(void ){
#line 40
  Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate();
#line 40
}
#line 40
# 229 "/opt/tinyos/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline error_t Msp430ClockP__Init__init(void )
{

  Msp430ClockP__TACTL = 0x0004;
  Msp430ClockP__TAIV = 0;
  Msp430ClockP__TBCTL = 0x0004;
  Msp430ClockP__TBIV = 0;
  /* atomic removed: atomic calls only */

  {
    Msp430ClockP__Msp430ClockInit__setupDcoCalibrate();
    Msp430ClockP__busyCalibrateDco();
    Msp430ClockP__Msp430ClockInit__initClocks();
    Msp430ClockP__Msp430ClockInit__initTimerA();
    Msp430ClockP__Msp430ClockInit__initTimerB();
    Msp430ClockP__startTimerA();
    Msp430ClockP__startTimerB();
  }

  return SUCCESS;
}

# 62 "/opt/tinyos/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteClockInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Msp430ClockP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 10 "/opt/tinyos/tos/platforms/telosa/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
#line 10
{
  WDTCTL = 0x5A00 + 0x0080;
  PlatformP__MoteClockInit__init();
  PlatformP__MoteInit__init();
  PlatformP__LedsInit__init();
  return SUCCESS;
}

# 62 "/opt/tinyos/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 36 "/opt/tinyos/tos/platforms/telosb/hardware.h"
static inline  void TOSH_CLR_SIMO0_PIN()
#line 36
{
#line 36
  static volatile uint8_t r __asm ("0x0019");

#line 36
  r &= ~(1 << 1);
}

# 65 "/opt/tinyos/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 17 "/opt/tinyos/tos/platforms/telosa/TelosSerialP.nc"
static inline void TelosSerialP__Resource__granted(void )
#line 17
{
}

# 218 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__default__granted(uint8_t id)
#line 218
{
}

# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__granted(uint8_t arg_0x415cc690){
#line 102
  switch (arg_0x415cc690) {
#line 102
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 102
      TelosSerialP__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__default__granted(arg_0x415cc690);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 101 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__granted(uint8_t id)
#line 101
{
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__granted(id);
}

# 202 "/opt/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Resource__granted(uint8_t arg_0x41199bd0){
#line 102
  switch (arg_0x41199bd0) {
#line 102
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID:
#line 102
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__granted(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Resource__default__granted(arg_0x41199bd0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 216 "/opt/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(uint8_t arg_0x41196a58){
#line 59
  switch (arg_0x41196a58) {
#line 59
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID:
#line 59
      /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__configure(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
#line 59
      break;
#line 59
    default:
#line 59
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(arg_0x41196a58);
#line 59
      break;
#line 59
    }
#line 59
}
#line 59
# 190 "/opt/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__reqResId;
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__resId);
  /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Resource__granted(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__resId);
}

# 19 "/opt/tinyos/tos/platforms/telosa/TelosSerialP.nc"
static inline msp430_uart_union_config_t *TelosSerialP__Msp430UartConfigure__getConfig(void )
#line 19
{
  return &TelosSerialP__msp430_uart_telos_config;
}

# 214 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
static inline msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(uint8_t id)
#line 214
{
  return &msp430_uart_default_config;
}

# 39 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartConfigure.nc"
inline static msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(uint8_t arg_0x415c77a0){
#line 39
  union __nesc_unnamed4305 *__nesc_result;
#line 39

#line 39
  switch (arg_0x415c77a0) {
#line 39
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 39
      __nesc_result = TelosSerialP__Msp430UartConfigure__getConfig();
#line 39
      break;
#line 39
    default:
#line 39
      __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(arg_0x415c77a0);
#line 39
      break;
#line 39
    }
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 359 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__disableIntr(void )
#line 359
{
  HplMsp430Usart1P__IE2 &= ~(0x20 | 0x10);
}

#line 347
static inline void HplMsp430Usart1P__Usart__clrIntr(void )
#line 347
{
  HplMsp430Usart1P__IFG2 &= ~(0x20 | 0x10);
}

#line 159
static inline void HplMsp430Usart1P__Usart__resetUsart(bool reset)
#line 159
{
  if (reset) {
    U1CTL = 0x01;
    }
  else {
#line 163
    U1CTL &= ~0x01;
    }
}

# 65 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 6;
}

# 92 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__UTXD__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc();
#line 92
}
#line 92
# 220 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__enableUartTx(void )
#line 220
{
  HplMsp430Usart1P__UTXD__selectModuleFunc();
  HplMsp430Usart1P__ME2 |= 0x20;
}

# 67 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 7);
}

# 99 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__URXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc();
#line 99
}
#line 99
# 236 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__disableUartRx(void )
#line 236
{
  HplMsp430Usart1P__ME2 &= ~0x10;
  HplMsp430Usart1P__URXD__selectIOFunc();
}

# 65 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 7;
}

# 92 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__URXD__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc();
#line 92
}
#line 92
# 231 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__enableUartRx(void )
#line 231
{
  HplMsp430Usart1P__URXD__selectModuleFunc();
  HplMsp430Usart1P__ME2 |= 0x10;
}

# 67 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 6);
}

# 99 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__UTXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc();
#line 99
}
#line 99
# 225 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__disableUartTx(void )
#line 225
{
  HplMsp430Usart1P__ME2 &= ~0x20;
  HplMsp430Usart1P__UTXD__selectIOFunc();
}

#line 203
static inline void HplMsp430Usart1P__Usart__enableUart(void )
#line 203
{
  /* atomic removed: atomic calls only */
#line 204
  {
    HplMsp430Usart1P__UTXD__selectModuleFunc();
    HplMsp430Usart1P__URXD__selectModuleFunc();
  }
  HplMsp430Usart1P__ME2 |= 0x20 | 0x10;
}

#line 151
static inline void HplMsp430Usart1P__Usart__setUmctl(uint8_t control)
#line 151
{
  U1MCTL = control;
}

#line 140
static inline void HplMsp430Usart1P__Usart__setUbr(uint16_t control)
#line 140
{
  /* atomic removed: atomic calls only */
#line 141
  {
    U1BR0 = control & 0x00FF;
    U1BR1 = (control >> 8) & 0x00FF;
  }
}

#line 283
static inline void HplMsp430Usart1P__configUart(msp430_uart_union_config_t *config)
#line 283
{

  U1CTL = (config->uartRegisters.uctl & ~0x04) | 0x01;
  HplMsp430Usart1P__U1TCTL = config->uartRegisters.utctl;
  HplMsp430Usart1P__U1RCTL = config->uartRegisters.urctl;

  HplMsp430Usart1P__Usart__setUbr(config->uartRegisters.ubr);
  HplMsp430Usart1P__Usart__setUmctl(config->uartRegisters.umctl);
}

static inline void HplMsp430Usart1P__Usart__setModeUart(msp430_uart_union_config_t *config)
#line 293
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 295
    {
      HplMsp430Usart1P__Usart__resetUsart(TRUE);
      HplMsp430Usart1P__Usart__disableSpi();
      HplMsp430Usart1P__configUart(config);
      if (config->uartConfig.utxe == 1 && config->uartConfig.urxe == 1) {
          HplMsp430Usart1P__Usart__enableUart();
        }
      else {
#line 301
        if (config->uartConfig.utxe == 0 && config->uartConfig.urxe == 1) {
            HplMsp430Usart1P__Usart__disableUartTx();
            HplMsp430Usart1P__Usart__enableUartRx();
          }
        else {
#line 304
          if (config->uartConfig.utxe == 1 && config->uartConfig.urxe == 0) {
              HplMsp430Usart1P__Usart__disableUartRx();
              HplMsp430Usart1P__Usart__enableUartTx();
            }
          else 
#line 307
            {
              HplMsp430Usart1P__Usart__disableUart();
            }
          }
        }
#line 310
      HplMsp430Usart1P__Usart__resetUsart(FALSE);
      HplMsp430Usart1P__Usart__clrIntr();
      HplMsp430Usart1P__Usart__disableIntr();
    }
#line 313
    __nesc_atomic_end(__nesc_atomic); }

  return;
}

# 174 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__setModeUart(msp430_uart_union_config_t *config){
#line 174
  HplMsp430Usart1P__Usart__setModeUart(config);
#line 174
}
#line 174
# 67 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )51U &= ~(0x01 << 1);
}

# 99 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__SIMO__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )51U &= ~(0x01 << 2);
}

# 99 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__SOMI__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )51U &= ~(0x01 << 3);
}

# 99 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__UCLK__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc();
#line 99
}
#line 99
# 377 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__enableIntr(void )
#line 377
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 378
    {
      HplMsp430Usart1P__IFG2 &= ~(0x20 | 0x10);
      HplMsp430Usart1P__IE2 |= 0x20 | 0x10;
    }
#line 381
    __nesc_atomic_end(__nesc_atomic); }
}

# 182 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__enableIntr(void ){
#line 182
  HplMsp430Usart1P__Usart__enableIntr();
#line 182
}
#line 182
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t SnifferC__serialSendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SnifferC__serialSendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 53 "/opt/tinyos/tos/system/QueueC.nc"
static inline bool /*SnifferAppC.QueueC*/QueueC__1__Queue__empty(void )
#line 53
{
  return /*SnifferAppC.QueueC*/QueueC__1__size == 0;
}

# 50 "/opt/tinyos/tos/interfaces/Queue.nc"
inline static bool SnifferC__Queue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*SnifferAppC.QueueC*/QueueC__1__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 69 "/opt/tinyos/tos/system/QueueC.nc"
static inline void /*SnifferAppC.QueueC*/QueueC__1__printQueue(void )
#line 69
{
}

#line 65
static inline /*SnifferAppC.QueueC*/QueueC__1__queue_t /*SnifferAppC.QueueC*/QueueC__1__Queue__head(void )
#line 65
{
  return /*SnifferAppC.QueueC*/QueueC__1__queue[/*SnifferAppC.QueueC*/QueueC__1__head];
}

#line 85
static inline /*SnifferAppC.QueueC*/QueueC__1__queue_t /*SnifferAppC.QueueC*/QueueC__1__Queue__dequeue(void )
#line 85
{
  /*SnifferAppC.QueueC*/QueueC__1__queue_t t = /*SnifferAppC.QueueC*/QueueC__1__Queue__head();

#line 87
  ;
  if (!/*SnifferAppC.QueueC*/QueueC__1__Queue__empty()) {
      /*SnifferAppC.QueueC*/QueueC__1__head++;
      if (/*SnifferAppC.QueueC*/QueueC__1__head == 10) {
#line 90
        /*SnifferAppC.QueueC*/QueueC__1__head = 0;
        }
#line 91
      /*SnifferAppC.QueueC*/QueueC__1__size--;
      /*SnifferAppC.QueueC*/QueueC__1__printQueue();
    }
  return t;
}

# 81 "/opt/tinyos/tos/interfaces/Queue.nc"
inline static SnifferC__Queue__t  SnifferC__Queue__dequeue(void ){
#line 81
  nx_struct message_t *__nesc_result;
#line 81

#line 81
  __nesc_result = /*SnifferAppC.QueueC*/QueueC__1__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 103 "/opt/tinyos/tos/system/PoolP.nc"
static inline error_t /*SnifferAppC.PoolC.PoolP*/PoolP__2__Pool__put(/*SnifferAppC.PoolC.PoolP*/PoolP__2__pool_t *newVal)
#line 103
{
  if (/*SnifferAppC.PoolC.PoolP*/PoolP__2__free >= 10) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*SnifferAppC.PoolC.PoolP*/PoolP__2__index + /*SnifferAppC.PoolC.PoolP*/PoolP__2__free;

#line 109
      if (emptyIndex >= 10) {
          emptyIndex -= 10;
        }
      /*SnifferAppC.PoolC.PoolP*/PoolP__2__queue[emptyIndex] = newVal;
      /*SnifferAppC.PoolC.PoolP*/PoolP__2__free++;
      ;
      return SUCCESS;
    }
}

# 89 "/opt/tinyos/tos/interfaces/Pool.nc"
inline static error_t SnifferC__Pool__put(SnifferC__Pool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*SnifferAppC.PoolC.PoolP*/PoolP__2__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 53 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__clr();
#line 53
}
#line 53
# 49 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr(void )
#line 49
{
#line 49
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__clr();
}

# 41 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__clr(void ){
#line 41
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr();
#line 41
}
#line 41
# 74 "/opt/tinyos/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0On(void )
#line 74
{
  LedsP__Led0__clr();
  ;
#line 76
  ;
}

# 56 "/opt/tinyos/tos/interfaces/Leds.nc"
inline static void SnifferC__Leds__led0On(void ){
#line 56
  LedsP__Leds__led0On();
#line 56
}
#line 56
# 165 "SnifferC.nc"
static inline void SnifferC__SerialSend__sendDone(message_t *frame, error_t error)
#line 165
{
  if (error != SUCCESS) {
    SnifferC__Leds__led0On();
    }
  else 
#line 168
    {
      SnifferC__Pool__put(SnifferC__Queue__dequeue());
      SnifferC__m_serialSendBusy = FALSE;
      if (!SnifferC__Queue__empty()) {
        SnifferC__serialSendTask__postTask();
        }
    }
}

# 376 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 376
{
  return;
}

# 100 "/opt/tinyos/tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x41541010, message_t * msg, error_t error){
#line 100
  switch (arg_0x41541010) {
#line 100
    case TOS_SERIAL_802_15_4_ID:
#line 100
      SnifferC__SerialSend__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x41541010, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 158 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
#line 158
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 162
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
#line 164
    error = ECANCEL;
    }
#line 165
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

#line 212
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
#line 212
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

#line 371
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 373
{
  return msg;
}

# 78 "/opt/tinyos/tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x41544960, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x41544960, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 292 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 292
{
  const uint8_t *base = source;

#line 294
  return base[0];
}

# 176 "SnifferC.nc"
static inline uint8_t SnifferC__SerialPacketInfo__offset(void )
{
  return (unsigned short )& ((message_t *)0)->header + 
  (unsigned short )& ((message_header_t *)0)->ieee154 + 
  (unsigned short )& ((ieee154_header_t *)0)->length;
}








static inline uint8_t SnifferC__SerialPacketInfo__upperLength(message_t *msg, uint8_t dataLinkLen)
{

  uint8_t *phyLenField = (uint8_t *)msg + SnifferC__SerialPacketInfo__offset();
  sniffer_metadata_t *snifferMetadata = 
  (sniffer_metadata_t *)(phyLenField + *phyLenField);

#line 196
  return *phyLenField + sizeof(sniffer_metadata_t ) - __nesc_ntoh_leuint8(snifferMetadata->mhrLen.nxdata);
}

# 365 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 366
{
  return 0;
}

# 31 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x41541b10, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x41541b10) {
#line 31
    case TOS_SERIAL_802_15_4_ID:
#line 31
      __nesc_result = SnifferC__SerialPacketInfo__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x41541b10, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 358 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 358
{
  return 0;
}

# 15 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x41541b10){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x41541b10) {
#line 15
    case TOS_SERIAL_802_15_4_ID:
#line 15
      __nesc_result = SnifferC__SerialPacketInfo__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x41541b10);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 275 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
#line 275
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 280
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
#line 285
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 289
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
#line 293
    __nesc_atomic_end(__nesc_atomic); }
}

# 201 "SnifferC.nc"
static inline void SnifferC__SerialControl__stopDone(error_t error)
#line 201
{
}

# 138 "/opt/tinyos/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__stopDone(error_t error){
#line 138
  SnifferC__SerialControl__stopDone(error);
#line 138
}
#line 138
# 109 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline error_t HplMsp430Usart1P__AsyncStdControl__stop(void )
#line 109
{
  HplMsp430Usart1P__Usart__disableSpi();
  HplMsp430Usart1P__Usart__disableUart();
  return SUCCESS;
}

# 105 "/opt/tinyos/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplMsp430Usart1P__AsyncStdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 84 "/opt/tinyos/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void )
#line 84
{
}

# 62 "/opt/tinyos/tos/lib/power/PowerDownCleanup.nc"
inline static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void ){
#line 62
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup();
#line 62
}
#line 62
# 79 "/opt/tinyos/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void )
#line 79
{
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup();
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop();
}

# 46 "/opt/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void ){
#line 46
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 128 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableUart(void ){
#line 128
  HplMsp430Usart1P__Usart__disableUart();
#line 128
}
#line 128
#line 179
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableIntr(void ){
#line 179
  HplMsp430Usart1P__Usart__disableIntr();
#line 179
}
#line 179
#line 97
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__resetUsart(bool reset){
#line 97
  HplMsp430Usart1P__Usart__resetUsart(reset);
#line 97
}
#line 97
# 92 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(uint8_t id)
#line 92
{
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__resetUsart(TRUE);
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableIntr();
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableUart();
}

# 218 "/opt/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(uint8_t arg_0x41196a58){
#line 65
  switch (arg_0x41196a58) {
#line 65
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID:
#line 65
      /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
#line 65
      break;
#line 65
    default:
#line 65
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(arg_0x41196a58);
#line 65
      break;
#line 65
    }
#line 65
}
#line 65
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 68 "/opt/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead != /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
        uint8_t id = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead;

#line 72
        /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[/*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead];
        if (/*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead == /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qTail = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
          }
#line 75
        /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[id] = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "/opt/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead == /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/opt/tinyos/tos/interfaces/ResourceQueue.nc"
inline static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "/opt/tinyos/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY && /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__resId == id) {
          if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Queue__isEmpty() == FALSE) {
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__reqResId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Queue__dequeue();
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__NO_RES;
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__RES_GRANTING;
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask();
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
            }
          else {
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__default_owner_id;
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED;
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 127
            SUCCESS;

            {
#line 127
              __nesc_atomic_end(__nesc_atomic); 
#line 127
              return __nesc_temp;
            }
          }
        }
    }
#line 131
    __nesc_atomic_end(__nesc_atomic); }
#line 130
  return FAIL;
}

# 213 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__release(uint8_t id)
#line 213
{
#line 213
  return FAIL;
}

# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__release(uint8_t arg_0x415c8c90){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x415c8c90) {
#line 120
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 120
      __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Resource__release(/*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__release(arg_0x415c8c90);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 210 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
static inline bool /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(uint8_t id)
#line 210
{
#line 210
  return FALSE;
}

# 128 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static bool /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__isOwner(uint8_t arg_0x415c8c90){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  switch (arg_0x415c8c90) {
#line 128
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 128
      __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Resource__isOwner(/*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID);
#line 128
      break;
#line 128
    default:
#line 128
      __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(arg_0x415c8c90);
#line 128
      break;
#line 128
    }
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 77 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__release(uint8_t id)
#line 77
{
  if (/*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__isOwner(id) == FALSE) {
    return FAIL;
    }
#line 80
  if (/*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf || /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf) {
    return EBUSY;
    }
#line 82
  return /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__release(id);
}

# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static error_t TelosSerialP__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__release(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 13 "/opt/tinyos/tos/platforms/telosa/TelosSerialP.nc"
static inline error_t TelosSerialP__StdControl__stop(void )
#line 13
{
  TelosSerialP__Resource__release();
  return SUCCESS;
}

# 105 "/opt/tinyos/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = TelosSerialP__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 336 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__flushDone(void )
#line 336
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static inline void SerialP__defaultSerialFlushTask__runTask(void )
#line 341
{
  SerialP__SerialFlush__flushDone();
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__defaultSerialFlushTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 344 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__default__flush(void )
#line 344
{
  SerialP__defaultSerialFlushTask__postTask();
}

# 49 "/opt/tinyos/tos/lib/serial/SerialFlush.nc"
inline static void SerialP__SerialFlush__flush(void ){
#line 49
  SerialP__SerialFlush__default__flush();
#line 49
}
#line 49
# 332 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static inline void SerialP__stopDoneTask__runTask(void )
#line 332
{
  SerialP__SerialFlush__flush();
}

# 84 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t PibP__RadioToken__request(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__request(1);
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 70 "/opt/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline bool PromiscuousModeP__PromiscuousModeGet__get(void )
{
  return PromiscuousModeP__m_state == PromiscuousModeP__S_STARTED;
}

# 55 "/opt/tinyos/tos/interfaces/Get.nc"
inline static PibP__PromiscuousModeGet__val_t PibP__PromiscuousModeGet__get(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = PromiscuousModeP__PromiscuousModeGet__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 164 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_status_t PibP__MLME_RESET__request(bool SetDefaultPIB)
{








  ieee154_status_t status = IEEE154_SUCCESS;

#line 175
  if (PibP__PromiscuousModeGet__get()) {
    status = IEEE154_TRANSACTION_OVERFLOW;
    }
  else 
#line 177
    {
      PibP__m_setDefaultPIB = SetDefaultPIB;
      PibP__m_resetSpin = 5;
      PibP__RadioToken__request();
    }
  ;

  return status;
}

# 69 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RESET.nc"
inline static ieee154_status_t SnifferC__MLME_RESET__request(bool SetDefaultPIB){
#line 69
  enum ieee154_status __nesc_result;
#line 69

#line 69
  __nesc_result = PibP__MLME_RESET__request(SetDefaultPIB);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 67 "SnifferC.nc"
static inline void SnifferC__SerialControl__startDone(error_t error)
#line 67
{
  if (error != SUCCESS) {
    SnifferC__Leds__led0On();
    }
  else {
#line 71
    SnifferC__MLME_RESET__request(TRUE);
    }
}

# 113 "/opt/tinyos/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__startDone(error_t error){
#line 113
  SnifferC__SerialControl__startDone(error);
#line 113
}
#line 113
# 133 "/opt/tinyos/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__resId == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__default_owner_id) {
          if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__RES_GRANTING) {
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 138
                SUCCESS;

                {
#line 138
                  __nesc_atomic_end(__nesc_atomic); 
#line 138
                  return __nesc_temp;
                }
              }
            }
          else {
#line 140
            if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__RES_IMM_GRANTING) {
                /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__reqResId;
                /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 143
                  SUCCESS;

                  {
#line 143
                    __nesc_atomic_end(__nesc_atomic); 
#line 143
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
#line 147
  return FAIL;
}

# 56 "/opt/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 105 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline error_t HplMsp430Usart1P__AsyncStdControl__start(void )
#line 105
{
  return SUCCESS;
}

# 95 "/opt/tinyos/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplMsp430Usart1P__AsyncStdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 74 "/opt/tinyos/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested(void )
#line 74
{
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start();
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release();
}

# 81 "/opt/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__immediateRequested(void ){
#line 81
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested();
#line 81
}
#line 81
# 206 "/opt/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__immediateRequested(uint8_t id)
#line 206
{
}

# 61 "/opt/tinyos/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__immediateRequested(uint8_t arg_0x41198690){
#line 61
    /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__immediateRequested(arg_0x41198690);
#line 61
}
#line 61
# 93 "/opt/tinyos/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Resource__immediateRequest(uint8_t id)
#line 93
{
  /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__immediateRequested(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 95
    {
      if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED) {
          /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__RES_IMM_GRANTING;
          /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 100
          FAIL;

          {
#line 100
            __nesc_atomic_end(__nesc_atomic); 
#line 100
            return __nesc_temp;
          }
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
#line 102
  /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__immediateRequested();
  if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__resId == id) {
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__resId);
      return SUCCESS;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 107
    /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED;
#line 107
    __nesc_atomic_end(__nesc_atomic); }
  return FAIL;
}

# 212 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(uint8_t id)
#line 212
{
#line 212
  return FAIL;
}

# 97 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__immediateRequest(uint8_t arg_0x415c8c90){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  switch (arg_0x415c8c90) {
#line 97
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 97
      __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Resource__immediateRequest(/*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID);
#line 97
      break;
#line 97
    default:
#line 97
      __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(arg_0x415c8c90);
#line 97
      break;
#line 97
    }
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 65 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__immediateRequest(uint8_t id)
#line 65
{
  return /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__immediateRequest(id);
}

# 97 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static error_t TelosSerialP__Resource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__immediateRequest(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 10 "/opt/tinyos/tos/platforms/telosa/TelosSerialP.nc"
static inline error_t TelosSerialP__StdControl__start(void )
#line 10
{
  return TelosSerialP__Resource__immediateRequest();
}

# 95 "/opt/tinyos/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = TelosSerialP__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 322 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static inline void SerialP__startDoneTask__runTask(void )
#line 322
{
  SerialP__SerialControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      SerialP__txState = SerialP__TXSTATE_IDLE;
      SerialP__rxState = SerialP__RXSTATE_NOSYNC;
    }
#line 327
    __nesc_atomic_end(__nesc_atomic); }
  SerialP__SplitControl__startDone(SUCCESS);
}

# 56 "/opt/tinyos/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putDelimiter(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = HdlcTranslateC__SerialFrameComm__putDelimiter();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 194 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
#line 194
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 195
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
#line 195
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

# 91 "/opt/tinyos/tos/lib/serial/SendBytePacket.nc"
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
#line 91
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 91
}
#line 91
# 244 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_empty(void )
#line 244
{
  bool ret;

#line 246
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
#line 246
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP__ack_queue_top(void )
#line 260
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 262
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP__ack_queue_pop(void )
#line 270
{
  uint8_t retval = 0;

  /* atomic removed: atomic calls only */
#line 272
  {
    if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
        retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
        if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
#line 275
          SerialP__ackQ.readPtr = 0;
          }
      }
  }
#line 278
  return retval;
}

#line 559
static inline void SerialP__RunTx__runTask(void )
#line 559
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 576
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
#line 585
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 589
        {
          SerialP__txSeqno++;
          if (SerialP__txProto == SERIAL_PROTO_ACK) {
              SerialP__ack_queue_pop();
            }
          else {
              result = done ? SUCCESS : FAIL;
              send_completed = TRUE;
            }
        }
#line 598
        __nesc_atomic_end(__nesc_atomic); }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 605
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 605
        goInactive = SerialP__offPending;
#line 605
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 607
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
#line 607
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 613
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 613
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
#line 616
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 618
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();

                  SerialP__txProto = SERIAL_PROTO_ACK;
                  SerialP__txIndex = SerialP__TX_ACK_INDEX;
                  start_it = TRUE;
                }
#line 625
                __nesc_atomic_end(__nesc_atomic); }
            }
          else {
#line 627
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 628
                  {
                    SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                    SerialP__txIndex = SerialP__TX_DATA_INDEX;
                    start_it = TRUE;
                  }
#line 632
                  __nesc_atomic_end(__nesc_atomic); }
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 646
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
          SerialP__testOff();
          {
#line 649
            __nesc_atomic_end(__nesc_atomic); 
#line 649
            return;
          }
        }
    }
#line 652
    __nesc_atomic_end(__nesc_atomic); }
  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 655
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
#line 659
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 661
            SerialP__txState = SerialP__TXSTATE_ERROR;
#line 661
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__stopDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 48 "/opt/tinyos/tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__send(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID, buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__RunTx__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 103 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  Alarm32khzTo62500hzTransformC__Alarm__startAt(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID, t0, dt);
#line 103
}
#line 103
# 58 "/opt/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/opt/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 166 "/opt/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(uint8_t id)
#line 166
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 167
    /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset[id] = FALSE;
#line 167
    __nesc_atomic_end(__nesc_atomic); }
}

# 85 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline void Alarm32khzTo62500hzTransformC__AlarmFrom__default__stop(uint8_t num)
#line 85
{
}

# 73 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void Alarm32khzTo62500hzTransformC__AlarmFrom__stop(uint8_t arg_0x413c8df0){
#line 73
  switch (arg_0x413c8df0) {
#line 73
    case /*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID);
#line 73
      break;
#line 73
    case /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID);
#line 73
      break;
#line 73
    case /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID);
#line 73
      break;
#line 73
    default:
#line 73
      Alarm32khzTo62500hzTransformC__AlarmFrom__default__stop(arg_0x413c8df0);
#line 73
      break;
#line 73
    }
#line 73
}
#line 73
# 56 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline void Alarm32khzTo62500hzTransformC__Alarm__stop(uint8_t num)
#line 56
{
#line 56
  Alarm32khzTo62500hzTransformC__AlarmFrom__stop(num);
}

# 73 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  Alarm32khzTo62500hzTransformC__Alarm__stop(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID);
#line 73
}
#line 73
# 71 "/opt/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/opt/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 96 "/opt/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/opt/tinyos/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 100 "/opt/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 103 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoScanP.nc"
static inline void NoScanP__ScanTimer__fired(void )
#line 103
{
}

# 88 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoAssociateP.nc"
static inline void NoAssociateP__ResponseTimeout__fired(void )
#line 88
{
}

# 340 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 159 "/opt/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 73 "/opt/tinyos/tos/lib/timer/Timer.nc"
inline static void IndirectTxP__IndirectTxTimeout__startOneShot(uint32_t dt){
#line 73
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(2U, dt);
#line 73
}
#line 73
# 40 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
inline static uint32_t IndirectTxP__TimeCalc__timeElapsed(uint32_t t0, uint32_t t1){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = PibP__TimeCalc__timeElapsed(t0, t1);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 384 "/opt/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline void IndirectTxP__PendingAddrSpecUpdated__default__notify(bool val)
#line 384
{
#line 384
  return;
}

# 74 "/opt/tinyos/tos/interfaces/Notify.nc"
inline static void IndirectTxP__PendingAddrSpecUpdated__notify(IndirectTxP__PendingAddrSpecUpdated__val_t val){
#line 74
  IndirectTxP__PendingAddrSpecUpdated__default__notify(val);
#line 74
}
#line 74
# 261 "/opt/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline void DataP__IndirectTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  DataP__finishTxTransaction(txFrame, status);
}

# 86 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoDisassociateP.nc"
static inline void NoDisassociateP__DisassociationIndirectTx__transmitDone(ieee154_txframe_t *data, ieee154_status_t status)
#line 86
{
}

# 108 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoAssociateP.nc"
static inline void NoAssociateP__AssociationResponseTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
#line 108
{
}

# 385 "/opt/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline void IndirectTxP__FrameTx__default__transmitDone(uint8_t client, ieee154_txframe_t *txFrame, ieee154_status_t status)
#line 385
{
}

# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static void IndirectTxP__FrameTx__transmitDone(uint8_t arg_0x40bd13b0, ieee154_txframe_t *txFrame, ieee154_status_t status){
#line 51
  switch (arg_0x40bd13b0) {
#line 51
    case 0U:
#line 51
      NoAssociateP__AssociationResponseTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 1U:
#line 51
      NoDisassociateP__DisassociationIndirectTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 2U:
#line 51
      DataP__IndirectTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    default:
#line 51
      IndirectTxP__FrameTx__default__transmitDone(arg_0x40bd13b0, txFrame, status);
#line 51
      break;
#line 51
    }
#line 51
}
#line 51
# 47 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
inline static bool IndirectTxP__TimeCalc__hasExpired(uint32_t t0, uint32_t dt){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = PibP__TimeCalc__hasExpired(t0, dt);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 310 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macTransactionPersistenceTime_t PibP__MLME_GET__macTransactionPersistenceTime(void )
#line 310
{
#line 310
  return PibP__m_pib.macTransactionPersistenceTime;
}

# 135 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macTransactionPersistenceTime_t IndirectTxP__MLME_GET__macTransactionPersistenceTime(void ){
#line 135
  unsigned int __nesc_result;
#line 135

#line 135
  __nesc_result = PibP__MLME_GET__macTransactionPersistenceTime();
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 282 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macBeaconOrder_t PibP__MLME_GET__macBeaconOrder(void )
#line 282
{
#line 282
  return PibP__m_pib.macBeaconOrder;
}

# 93 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macBeaconOrder_t IndirectTxP__MLME_GET__macBeaconOrder(void ){
#line 93
  unsigned char __nesc_result;
#line 93

#line 93
  __nesc_result = PibP__MLME_GET__macBeaconOrder();
#line 93

#line 93
  return __nesc_result;
#line 93
}
#line 93
# 104 "/opt/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline uint32_t IndirectTxP__getPersistenceTimeSymbols(void )
{


  uint32_t unitPeriod;
  ieee154_macBeaconOrder_t BO = IndirectTxP__MLME_GET__macBeaconOrder();

  if (BO <= 14) {
      unitPeriod = IEEE154_aBaseSuperframeDuration;
      unitPeriod *= (uint16_t )1 << BO;
    }
  else {
#line 115
    unitPeriod = IEEE154_aBaseSuperframeDuration;
    }
#line 116
  return unitPeriod * IndirectTxP__MLME_GET__macTransactionPersistenceTime();
}

# 189 "/opt/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num)
{
  return /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
}

# 136 "/opt/tinyos/tos/lib/timer/Timer.nc"
inline static uint32_t IndirectTxP__IndirectTxTimeout__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(2U);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 322 "/opt/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline void IndirectTxP__IndirectTxTimeout__fired(void )
{

  uint32_t now = IndirectTxP__IndirectTxTimeout__getNow();
#line 325
  uint32_t dt = 0;
  uint32_t persistenceTime = IndirectTxP__getPersistenceTimeSymbols();
  uint8_t i;

  for (i = 0; i < IndirectTxP__NUM_MAX_PENDING; i++) 
    if (IndirectTxP__m_txFrameTable[i] && IndirectTxP__m_txFrameTable[i] != IndirectTxP__m_pendingTxFrame) {
        if (IndirectTxP__TimeCalc__hasExpired(__nesc_ntoh_uint32(IndirectTxP__m_txFrameTable[i]->metadata->timestamp.nxdata), persistenceTime)) {
            ieee154_txframe_t *txFrame = IndirectTxP__m_txFrameTable[i];

#line 333
            txFrame->client &= ~IndirectTxP__SEND_THIS_FRAME;
            IndirectTxP__m_txFrameTable[i] = (void *)0;
            IndirectTxP__m_numTableEntries -= 1;
            if ((txFrame->header->mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK) == FC2_DEST_MODE_SHORT) {
              IndirectTxP__m_numShortPending--;
              }
            else {
#line 338
              if ((txFrame->header->mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK) == FC2_DEST_MODE_EXTENDED) {
                IndirectTxP__m_numExtPending--;
                }
              }
#line 340
            IndirectTxP__FrameTx__transmitDone(txFrame->client, txFrame, IEEE154_TRANSACTION_EXPIRED);
            IndirectTxP__PendingAddrSpecUpdated__notify(TRUE);
          }
        else {
#line 342
          if (IndirectTxP__TimeCalc__timeElapsed(__nesc_ntoh_uint32(IndirectTxP__m_txFrameTable[i]->metadata->timestamp.nxdata), now) > dt) {
              dt = IndirectTxP__TimeCalc__timeElapsed(__nesc_ntoh_uint32(IndirectTxP__m_txFrameTable[i]->metadata->timestamp.nxdata), now);
            }
          }
      }
#line 346
  if (dt != 0) {
      if (dt > persistenceTime) {
        dt = persistenceTime;
        }
#line 349
      IndirectTxP__IndirectTxTimeout__startOneShot(persistenceTime - dt);
    }
}

# 77 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoRxEnableP.nc"
static inline void NoRxEnableP__RxEnableTimer__fired(void )
#line 77
{
}

# 204 "/opt/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/opt/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x414552d8){
#line 83
  switch (arg_0x414552d8) {
#line 83
    case 0U:
#line 83
      NoScanP__ScanTimer__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      NoAssociateP__ResponseTimeout__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      IndirectTxP__IndirectTxTimeout__fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      DispatchUnslottedCsmaP__IndirectTxWaitTimer__fired();
#line 83
      break;
#line 83
    case 4U:
#line 83
      NoRxEnableP__RxEnableTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x414552d8);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 89 "/opt/tinyos/tos/interfaces/Pool.nc"
inline static error_t DataP__TxFramePool__put(DataP__TxFramePool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 199 "SnifferC.nc"
static inline void SnifferC__MCPS_DATA__confirm(message_t *msg, uint8_t msduHandle, ieee154_status_t status, uint32_t Timestamp)
#line 199
{
}

# 91 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MCPS/MCPS_DATA.nc"
inline static void DataP__MCPS_DATA__confirm(message_t *frame, uint8_t msduHandle, ieee154_status_t status, uint32_t Timestamp){
#line 91
  SnifferC__MCPS_DATA__confirm(frame, msduHandle, status, Timestamp);
#line 91
}
#line 91
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 139 "/opt/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/opt/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 90 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline uint32_t Alarm32khzTo62500hzTransformC__AlarmFrom__default__getAlarm(uint8_t num)
#line 90
{
#line 90
  return 0;
}

# 116 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static Alarm32khzTo62500hzTransformC__AlarmFrom__size_type Alarm32khzTo62500hzTransformC__AlarmFrom__getAlarm(uint8_t arg_0x413c8df0){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  switch (arg_0x413c8df0) {
#line 116
    case /*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID);
#line 116
      break;
#line 116
    case /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID);
#line 116
      break;
#line 116
    case /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID);
#line 116
      break;
#line 116
    default:
#line 116
      __nesc_result = Alarm32khzTo62500hzTransformC__AlarmFrom__default__getAlarm(arg_0x413c8df0);
#line 116
      break;
#line 116
    }
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 59 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline uint32_t Alarm32khzTo62500hzTransformC__Alarm__getAlarm(uint8_t num)
#line 59
{
#line 59
  return Alarm32khzTo62500hzTransformC__AlarmFrom__getAlarm(num) << 1;
}

# 116 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = Alarm32khzTo62500hzTransformC__Alarm__getAlarm(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID);
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "/opt/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 286 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

#line 281
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

#line 303
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_uint8(target, value);
#line 303
  return value;
}

# 96 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoScanP.nc"
static inline message_t *NoScanP__RadioRx__received(message_t *frame)
{
  return frame;
}

# 69 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoCoordRealignmentP.nc"
static inline message_t *NoCoordRealignmentP__OrphanNotificationRx__received(message_t *frame)
#line 69
{
#line 69
  return frame;
}

# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static ieee154_status_t IndirectTxP__CoordCapTx__transmit(ieee154_txframe_t *txFrame){
#line 43
  enum ieee154_status __nesc_result;
#line 43

#line 43
  __nesc_result = /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmit(7U, txFrame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 241 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static uint8_t IndirectTxP__IEEE154Frame__getHeaderLength(message_t *frame){
#line 241
  unsigned char __nesc_result;
#line 241

#line 241
  __nesc_result = PibP__Frame__getHeaderLength(frame);
#line 241

#line 241
  return __nesc_result;
#line 241
}
#line 241
# 781 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline uint8_t PibP__Frame__getSrcAddrMode(message_t *frame)
{
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;

#line 784
  return (mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK) >> FC2_SRC_MODE_OFFSET;
}

# 55 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static uint8_t IndirectTxP__IEEE154Frame__getSrcAddrMode(message_t *frame){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = PibP__Frame__getSrcAddrMode(frame);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 827 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline uint8_t PibP__Frame__getDstAddrMode(message_t *frame)
{
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;

#line 830
  return (mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK) >> FC2_DEST_MODE_OFFSET;
}

# 91 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static uint8_t IndirectTxP__IEEE154Frame__getDstAddrMode(message_t *frame){
#line 91
  unsigned char __nesc_result;
#line 91

#line 91
  __nesc_result = PibP__Frame__getDstAddrMode(frame);
#line 91

#line 91
  return __nesc_result;
#line 91
}
#line 91
# 327 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 327
{
  uint8_t *base = target;

#line 329
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 591 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline uint8_t PibP__FrameUtility__writeHeader(
uint8_t *mhr, 
uint8_t DstAddrMode, 
uint16_t DstPANId, 
ieee154_address_t *DstAddr, 
uint8_t SrcAddrMode, 
uint16_t SrcPANId, 
const ieee154_address_t *SrcAddr, 
bool PANIDCompression)
{
  uint8_t offset = MHR_INDEX_ADDRESS;

#line 602
  if (DstAddrMode == ADDR_MODE_SHORT_ADDRESS || DstAddrMode == ADDR_MODE_EXTENDED_ADDRESS) {
      __nesc_hton_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata, DstPANId);
      offset += 2;
      if (DstAddrMode == ADDR_MODE_SHORT_ADDRESS) {
          __nesc_hton_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata, DstAddr->shortAddress);
          offset += 2;
        }
      else 
#line 608
        {
          PibP__FrameUtility__convertToLE(&mhr[offset], & DstAddr->extendedAddress);
          offset += 8;
        }
    }
  if (SrcAddrMode == ADDR_MODE_SHORT_ADDRESS || SrcAddrMode == ADDR_MODE_EXTENDED_ADDRESS) {
      if (DstPANId != SrcPANId || !PANIDCompression) {
          __nesc_hton_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata, SrcPANId);
          offset += 2;
        }
      if (SrcAddrMode == ADDR_MODE_SHORT_ADDRESS) {
          __nesc_hton_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata, SrcAddr->shortAddress);
          offset += 2;
        }
      else 
#line 621
        {
          PibP__FrameUtility__convertToLE(&mhr[offset], & SrcAddr->extendedAddress);
          offset += 8;
        }
    }
  return offset;
}

#line 1015
static inline uint64_t PibP__GetLocalExtendedAddress__get(void )
{
  return PibP__m_aExtendedAddressLE;
}

#line 306
static inline ieee154_macShortAddress_t PibP__MLME_GET__macShortAddress(void )
#line 306
{
#line 306
  return PibP__m_pib.macShortAddress;
}

#line 300
static inline ieee154_macPANId_t PibP__MLME_GET__macPANId(void )
#line 300
{
#line 300
  return PibP__m_pib.macPANId;
}

#line 678
static inline error_t PibP__Frame__setAddressingFields(message_t *frame, 
uint8_t srcAddrMode, 
uint8_t dstAddrMode, 
uint16_t dstPANId, 
ieee154_address_t *dstAddr, 
ieee154_security_t *security)
{
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;
  ieee154_address_t srcAddress;
  ieee154_macPANId_t srcPANId = PibP__MLME_GET__macPANId();

  if (security && security->SecurityLevel) {
    return FAIL;
    }
#line 691
  mhr[MHR_INDEX_FC2] &= ~(FC2_DEST_MODE_MASK | FC2_SRC_MODE_MASK);
  mhr[MHR_INDEX_FC2] |= dstAddrMode << FC2_DEST_MODE_OFFSET;
  mhr[MHR_INDEX_FC2] |= srcAddrMode << FC2_SRC_MODE_OFFSET;
  if (srcAddrMode == ADDR_MODE_SHORT_ADDRESS) {
    srcAddress.shortAddress = PibP__MLME_GET__macShortAddress();
    }
  else {
#line 697
    srcAddress.extendedAddress = PibP__GetLocalExtendedAddress__get();
    }
  if (
#line 698
  dstAddrMode >= ADDR_MODE_SHORT_ADDRESS && 
  srcAddrMode >= ADDR_MODE_SHORT_ADDRESS && 
  dstPANId == srcPANId) {
    mhr[MHR_INDEX_FC1] |= FC1_PAN_ID_COMPRESSION;
    }
  else {
#line 703
    mhr[MHR_INDEX_FC1] &= ~FC1_PAN_ID_COMPRESSION;
    }
#line 704
  PibP__FrameUtility__writeHeader(
  mhr, 
  dstAddrMode, 
  dstPANId, 
  dstAddr, 
  srcAddrMode, 
  srcPANId, 
  &srcAddress, 
  mhr[MHR_INDEX_FC1] & FC1_PAN_ID_COMPRESSION ? TRUE : FALSE);
  return SUCCESS;
}

# 139 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static error_t IndirectTxP__IEEE154Frame__setAddressingFields(message_t *frame, uint8_t SrcAddrMode, uint8_t DstAddrMode, uint16_t DstPANID, ieee154_address_t *DstAddr, ieee154_security_t *security){
#line 139
  unsigned char __nesc_result;
#line 139

#line 139
  __nesc_result = PibP__Frame__setAddressingFields(frame, SrcAddrMode, DstAddrMode, DstPANID, DstAddr, security);
#line 139

#line 139
  return __nesc_result;
#line 139
}
#line 139
# 322 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 322
{
  const uint8_t *base = source;

#line 324
  return ((uint16_t )base[1] << 8) | base[0];
}

# 807 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline error_t PibP__Frame__getSrcPANId(message_t *frame, uint16_t *PANID)
{
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;
  uint8_t offset = MHR_INDEX_ADDRESS;
  uint8_t destMode = mhr[1] & FC2_DEST_MODE_MASK;

#line 812
  if (!(mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_SHORT)) {
    return FAIL;
    }
#line 814
  if (destMode == FC2_DEST_MODE_SHORT) {
    offset += 4;
    }
  else {
#line 816
    if (destMode == FC2_DEST_MODE_EXTENDED) {
      offset += 10;
      }
    }
#line 818
  if (mhr[MHR_INDEX_FC1] & FC1_PAN_ID_COMPRESSION && mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_SHORT) {
    *PANID = __nesc_ntoh_leuint16((* (nxle_uint16_t *)&mhr[MHR_INDEX_ADDRESS]).nxdata);
    }
  else {
#line 820
    if ((mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK) == FC2_SRC_MODE_SHORT) {
      *PANID = __nesc_ntoh_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata);
      }
    else {
#line 823
      *PANID = __nesc_ntoh_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata);
      }
    }
#line 824
  return SUCCESS;
}

# 81 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static error_t IndirectTxP__IEEE154Frame__getSrcPANId(message_t *frame, uint16_t *PANID){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = PibP__Frame__getSrcPANId(frame, PANID);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 356 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_leuint32(const void * source)
#line 356
{
  const uint8_t *base = source;

#line 358
  return ((((uint32_t )base[3] << 24) | (
  (uint32_t )base[2] << 16)) | (
  (uint32_t )base[1] << 8)) | base[0];
}

# 1030 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__FrameUtility__convertToNative(uint64_t *dest, const uint8_t *srcLE)
{

  uint32_t lower = __nesc_ntoh_leuint32((* (nxle_uint32_t *)srcLE).nxdata);
  uint64_t upper = __nesc_ntoh_leuint32((* (nxle_uint32_t *)(srcLE + 4)).nxdata);

#line 1035
  *dest = (upper << 32) + lower;
}

#line 787
static inline error_t PibP__Frame__getSrcAddr(message_t *frame, ieee154_address_t *address)
{
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;
  uint8_t offset = MHR_INDEX_ADDRESS;
  uint8_t destMode = mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK;

#line 792
  if (!(mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_SHORT)) {
    return FAIL;
    }
#line 794
  if (destMode == FC2_DEST_MODE_SHORT) {
    offset += 4;
    }
  else {
#line 796
    if (destMode == FC2_DEST_MODE_EXTENDED) {
      offset += 10;
      }
    }
#line 798
  if (!(mhr[MHR_INDEX_FC1] & FC1_PAN_ID_COMPRESSION && mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_SHORT)) {
    offset += 2;
    }
#line 800
  if ((mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK) == FC2_SRC_MODE_SHORT) {
    address->shortAddress = __nesc_ntoh_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata);
    }
  else {
#line 803
    PibP__FrameUtility__convertToNative(& address->extendedAddress, &mhr[offset]);
    }
#line 804
  return SUCCESS;
}

# 69 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static error_t IndirectTxP__IEEE154Frame__getSrcAddr(message_t *frame, ieee154_address_t *address){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = PibP__Frame__getSrcAddr(frame, address);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 269 "/opt/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline void IndirectTxP__transmitEmptyDataFrame(message_t *dataRequestFrame)
{


  message_t *emptyDataMsg = (message_t *)IndirectTxP__m_emptyDataFrame.header;
  ieee154_address_t dstAddr;
  uint16_t dstPanID;

  if (IndirectTxP__m_emptyDataFrame.client != 0) {
    return;
    }
#line 279
  if (IndirectTxP__IEEE154Frame__getSrcAddr(dataRequestFrame, &dstAddr) != IEEE154_SUCCESS || 
  IndirectTxP__IEEE154Frame__getSrcPANId(dataRequestFrame, &dstPanID) != IEEE154_SUCCESS) {
    return;
    }
#line 282
  IndirectTxP__IEEE154Frame__setAddressingFields(emptyDataMsg, 
  IndirectTxP__IEEE154Frame__getDstAddrMode(dataRequestFrame), 
  IndirectTxP__IEEE154Frame__getSrcAddrMode(dataRequestFrame), 
  dstPanID, 
  &dstAddr, 
  (void *)0);
  (
  (ieee154_header_t *)(&IndirectTxP__m_emptyDataFrame)->header)->mhr[MHR_INDEX_FC1] |= FC1_FRAMETYPE_DATA;
  IndirectTxP__m_emptyDataFrame.headerLen = IndirectTxP__IEEE154Frame__getHeaderLength(emptyDataMsg);
  IndirectTxP__m_emptyDataFrame.client = 1;
  if (IndirectTxP__CoordCapTx__transmit(&IndirectTxP__m_emptyDataFrame) != IEEE154_SUCCESS) {
    IndirectTxP__m_emptyDataFrame.client = 0;
    }
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t IndirectTxP__tryCoordCapTxTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(IndirectTxP__tryCoordCapTxTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 215 "/opt/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline message_t *IndirectTxP__DataRequestRx__received(message_t *frame)
{
  uint8_t i;
#line 217
  uint8_t j;
#line 217
  uint8_t srcAddressMode;
#line 217
  uint8_t dstAddressMode;
#line 217
  uint8_t *src;
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;
  uint8_t destMode = mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK;
  ieee154_txframe_t *dataResponseFrame = (void *)0;



  srcAddressMode = mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK;
  if (!(srcAddressMode & FC2_SRC_MODE_SHORT)) {
    return frame;
    }
#line 227
  src = mhr + MHR_INDEX_ADDRESS;
  if (destMode == FC2_DEST_MODE_SHORT) {
    src += 4;
    }
  else {
#line 230
    if (destMode == FC2_DEST_MODE_EXTENDED) {
      src += 10;
      }
    }
#line 232
  if (!(mhr[MHR_INDEX_FC1] & FC1_PAN_ID_COMPRESSION && mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_SHORT)) {
    src += 2;
    }
#line 234
  for (i = 0; i < IndirectTxP__NUM_MAX_PENDING; i++) {
      if (IndirectTxP__m_txFrameTable[i] == (void *)0) {
        continue;
        }
      else 
#line 237
        {
          dstAddressMode = IndirectTxP__m_txFrameTable[i]->header->mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK;
          if ((dstAddressMode << 4) != srcAddressMode) {
            continue;
            }
          else 
#line 241
            {

              uint8_t *dst = &IndirectTxP__m_txFrameTable[i]->header->mhr[MHR_INDEX_ADDRESS] + 2;
              uint8_t len = srcAddressMode == FC2_SRC_MODE_SHORT ? 2 : 8;

#line 245
              for (j = 0; j < len; j++) 
                if (dst[j] != src[j]) {
                  break;
                  }
#line 248
              if (j == len) {
                  if (dataResponseFrame == (void *)0) {
                    dataResponseFrame = IndirectTxP__m_txFrameTable[i];
                    }
                  else {
#line 252
                    dataResponseFrame->header->mhr[MHR_INDEX_FC1] |= FC1_FRAME_PENDING;
                    }
                }
            }
        }
    }
#line 257
  if (dataResponseFrame != (void *)0) {

      ;
      dataResponseFrame->client |= IndirectTxP__SEND_THIS_FRAME;
      IndirectTxP__tryCoordCapTxTask__postTask();
    }
  else 
#line 262
    {
      ;
      IndirectTxP__transmitEmptyDataFrame(frame);
    }
  return frame;
}

# 105 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MCPS/MCPS_DATA.nc"
inline static message_t *DataP__MCPS_DATA__indication(message_t *frame){
#line 105
  nx_struct message_t *__nesc_result;
#line 105

#line 105
  __nesc_result = SnifferC__MCPS_DATA__indication(frame);
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 220 "/opt/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline message_t *DataP__dataReceived(message_t *frame)
{
  return DataP__MCPS_DATA__indication(frame);
}

#line 215
static inline message_t *DataP__DeviceCapRx__received(message_t *frame)
{
  return DataP__dataReceived(frame);
}

# 97 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoDisassociateP.nc"
static inline message_t *NoDisassociateP__DisassociationRxFromDevice__received(message_t *frame)
#line 97
{
#line 97
  return frame;
}

# 96 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoAssociateP.nc"
static inline message_t *NoAssociateP__AssociationRequestRx__received(message_t *frame)
#line 96
{
#line 96
  return frame;
}

# 62 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoBeaconRequestRxP.nc"
static inline message_t *NoBeaconRequestRxP__BeaconRequestRx__received(message_t *frame)
#line 62
{
#line 62
  return frame;
}

# 521 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline message_t *DispatchUnslottedCsmaP__FrameRx__default__received(uint8_t client, message_t *data)
#line 521
{
#line 521
  return data;
}

# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
inline static message_t *DispatchUnslottedCsmaP__FrameRx__received(uint8_t arg_0x40b43be8, message_t *frame){
#line 43
  nx_struct message_t *__nesc_result;
#line 43

#line 43
  switch (arg_0x40b43be8) {
#line 43
    case FC1_FRAMETYPE_DATA:
#line 43
      __nesc_result = DataP__DeviceCapRx__received(frame);
#line 43
      break;
#line 43
    case FC1_FRAMETYPE_CMD + CMD_FRAME_ASSOCIATION_REQUEST:
#line 43
      __nesc_result = NoAssociateP__AssociationRequestRx__received(frame);
#line 43
      break;
#line 43
    case FC1_FRAMETYPE_CMD + CMD_FRAME_DISASSOCIATION_NOTIFICATION:
#line 43
      __nesc_result = NoDisassociateP__DisassociationRxFromDevice__received(frame);
#line 43
      break;
#line 43
    case FC1_FRAMETYPE_CMD + CMD_FRAME_DATA_REQUEST:
#line 43
      __nesc_result = IndirectTxP__DataRequestRx__received(frame);
#line 43
      break;
#line 43
    case FC1_FRAMETYPE_CMD + CMD_FRAME_ORPHAN_NOTIFICATION:
#line 43
      __nesc_result = NoCoordRealignmentP__OrphanNotificationRx__received(frame);
#line 43
      break;
#line 43
    case FC1_FRAMETYPE_CMD + CMD_FRAME_BEACON_REQUEST:
#line 43
      __nesc_result = NoBeaconRequestRxP__BeaconRequestRx__received(frame);
#line 43
      break;
#line 43
    default:
#line 43
      __nesc_result = DispatchUnslottedCsmaP__FrameRx__default__received(arg_0x40b43be8, frame);
#line 43
      break;
#line 43
    }
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
inline static message_t *PollP__DataRx__received(message_t *frame){
#line 43
  nx_struct message_t *__nesc_result;
#line 43

#line 43
  __nesc_result = DataP__DeviceCapRx__received(frame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 92 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoAssociateP.nc"
static inline void NoAssociateP__DataRequest__pollDone(void )
#line 92
{
}

# 224 "/opt/tinyos/tos/lib/mac/tkn154/PollP.nc"
static inline void PollP__DataRequest__default__pollDone(uint8_t client)
#line 224
{
}

# 52 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/DataRequest.nc"
inline static void PollP__DataRequest__pollDone(uint8_t arg_0x40c49248){
#line 52
  switch (arg_0x40c49248) {
#line 52
    case 0U:
#line 52
      NoAssociateP__DataRequest__pollDone();
#line 52
      break;
#line 52
    default:
#line 52
      PollP__DataRequest__default__pollDone(arg_0x40c49248);
#line 52
      break;
#line 52
    }
#line 52
}
#line 52
# 223 "/opt/tinyos/tos/lib/mac/tkn154/PollP.nc"
static inline void PollP__MLME_POLL__default__confirm(ieee154_status_t status)
#line 223
{
}

# 73 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_POLL.nc"
inline static void PollP__MLME_POLL__confirm(ieee154_status_t status){
#line 73
  PollP__MLME_POLL__default__confirm(status);
#line 73
}
#line 73
# 191 "/opt/tinyos/tos/lib/mac/tkn154/PollP.nc"
static inline message_t *PollP__DataExtracted__received(message_t *frame, ieee154_txframe_t *txFrame)
{
  if (!txFrame) {
      ;
      return frame;
    }
  else {
#line 197
    ;
    }
#line 198
  if (txFrame->handle == PollP__HANDLE_MLME_POLL_REQUEST) {
    PollP__MLME_POLL__confirm(IEEE154_SUCCESS);
    }
  else {
#line 201
    PollP__DataRequest__pollDone(txFrame->handle);
    }
#line 202
  txFrame->handle = PollP__HANDLE_MLME_POLL_SUCCESS;

  return PollP__DataRx__received(frame);
}

# 94 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoDisassociateP.nc"
static inline message_t *NoDisassociateP__DisassociationExtractedFromCoord__received(message_t *frame, ieee154_txframe_t *txFrame)
#line 94
{
#line 94
  return frame;
}

# 90 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoAssociateP.nc"
static inline message_t *NoAssociateP__AssociationResponseExtracted__received(message_t *frame, ieee154_txframe_t *txFrame)
#line 90
{
#line 90
  return frame;
}

# 524 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline message_t *DispatchUnslottedCsmaP__FrameExtracted__default__received(uint8_t client, message_t *msg, ieee154_txframe_t *txFrame)
#line 524
{
#line 524
  return msg;
}

# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
inline static message_t *DispatchUnslottedCsmaP__FrameExtracted__received(uint8_t arg_0x40b67488, message_t *rxFrame, ieee154_txframe_t *txFrame){
#line 43
  nx_struct message_t *__nesc_result;
#line 43

#line 43
  switch (arg_0x40b67488) {
#line 43
    case FC1_FRAMETYPE_DATA:
#line 43
      __nesc_result = PollP__DataExtracted__received(rxFrame, txFrame);
#line 43
      break;
#line 43
    case FC1_FRAMETYPE_CMD + CMD_FRAME_ASSOCIATION_RESPONSE:
#line 43
      __nesc_result = NoAssociateP__AssociationResponseExtracted__received(rxFrame, txFrame);
#line 43
      break;
#line 43
    case FC1_FRAMETYPE_CMD + CMD_FRAME_DISASSOCIATION_NOTIFICATION:
#line 43
      __nesc_result = NoDisassociateP__DisassociationExtractedFromCoord__received(rxFrame, txFrame);
#line 43
      break;
#line 43
    default:
#line 43
      __nesc_result = DispatchUnslottedCsmaP__FrameExtracted__default__received(arg_0x40b67488, rxFrame, txFrame);
#line 43
      break;
#line 43
    }
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 164 "/opt/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "/opt/tinyos/tos/lib/timer/Timer.nc"
inline static void DispatchUnslottedCsmaP__IndirectTxWaitTimer__stop(void ){
#line 78
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(3U);
#line 78
}
#line 78
# 485 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline message_t *DispatchUnslottedCsmaP__RadioRx__received(message_t *frame)
{


  uint8_t *payload = (uint8_t *)frame->data;
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;
  uint8_t frameType = mhr[MHR_INDEX_FC1] & FC1_FRAMETYPE_MASK;

  if (frameType == FC1_FRAMETYPE_CMD) {
    frameType += payload[0];
    }
#line 495
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 495
    {
      if (DispatchUnslottedCsmaP__m_indirectTxPending) {
          message_t *frameBuf;

#line 498
          DispatchUnslottedCsmaP__IndirectTxWaitTimer__stop();






          DispatchUnslottedCsmaP__m_txStatus = IEEE154_SUCCESS;
          frameBuf = DispatchUnslottedCsmaP__FrameExtracted__received(frameType, frame, DispatchUnslottedCsmaP__m_lastFrame);
          DispatchUnslottedCsmaP__IndirectTxWaitTimer__fired();
          {
            nx_struct message_t *__nesc_temp = 
#line 508
            frameBuf;

            {
#line 508
              __nesc_atomic_end(__nesc_atomic); 
#line 508
              return __nesc_temp;
            }
          }
        }
      else 
#line 510
        {
          nx_struct message_t *__nesc_temp = 
#line 510
          DispatchUnslottedCsmaP__FrameRx__received(frameType, frame);

          {
#line 510
            __nesc_atomic_end(__nesc_atomic); 
#line 510
            return __nesc_temp;
          }
        }
    }
#line 513
    __nesc_atomic_end(__nesc_atomic); }
}

# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
inline static message_t *PromiscuousModeP__FrameRx__received(message_t *frame){
#line 43
  nx_struct message_t *__nesc_result;
#line 43

#line 43
  __nesc_result = DataP__DeviceCapRx__received(frame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 108 "/opt/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline message_t *PromiscuousModeP__PromiscuousRx__received(message_t *frame)
{
  if (PromiscuousModeP__m_state == PromiscuousModeP__S_STARTED) {
      ((ieee154_header_t *)frame->header)->length |= FRAMECTL_PROMISCUOUS;
      return PromiscuousModeP__FrameRx__received(frame);
    }
  else {
#line 114
    return frame;
    }
}

# 109 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline message_t *RadioControlImplP__MacRx__default__received(uint8_t client, message_t *frame)
{
  while (!0) {
#line 111
      break;
    }
#line 111
  ;
  return frame;
}

# 84 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static message_t *RadioControlImplP__MacRx__received(uint8_t arg_0x40aec748, message_t *frame){
#line 84
  nx_struct message_t *__nesc_result;
#line 84

#line 84
  switch (arg_0x40aec748) {
#line 84
    case 0:
#line 84
      __nesc_result = NoScanP__RadioRx__received(frame);
#line 84
      break;
#line 84
    case 2:
#line 84
      __nesc_result = PromiscuousModeP__PromiscuousRx__received(frame);
#line 84
      break;
#line 84
    case 12U:
#line 84
      __nesc_result = DispatchUnslottedCsmaP__RadioRx__received(frame);
#line 84
      break;
#line 84
    default:
#line 84
      __nesc_result = RadioControlImplP__MacRx__default__received(arg_0x40aec748, frame);
#line 84
      break;
#line 84
    }
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 55 "/opt/tinyos/tos/interfaces/Get.nc"
inline static RadioControlImplP__RadioPromiscuousMode__val_t RadioControlImplP__RadioPromiscuousMode__get(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = PromiscuousModeP__PromiscuousModeGet__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 78 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline message_t *RadioControlImplP__PhyRx__received(message_t *msg)
{
  uint8_t *mhr = ((ieee154_header_t *)msg->header)->mhr;

  ;



  if ((
#line 85
  mhr[1] & FC2_FRAME_VERSION_MASK) > FC2_FRAME_VERSION_1
   && !RadioControlImplP__RadioPromiscuousMode__get()) {
    return msg;
    }


  if (
#line 90
  mhr[0] & FC1_SECURITY_ENABLED
   && !RadioControlImplP__RadioPromiscuousMode__get()) {
    return msg;
    }
  return RadioControlImplP__MacRx__received(RadioControlImplP__ArbiterInfo__userId(), msg);
}

# 84 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static message_t *CC2420TKN154P__RadioRx__received(message_t *frame){
#line 84
  nx_struct message_t *__nesc_result;
#line 84

#line 84
  __nesc_result = RadioControlImplP__PhyRx__received(frame);
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 430 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline message_t *CC2420TKN154P__CC2420Rx__received(message_t *frame)
{
  if (CC2420TKN154P__m_state == CC2420TKN154P__S_RECEIVING) {
    return CC2420TKN154P__RadioRx__received(frame);
    }
  else {
#line 435
    return frame;
    }
}

# 45 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Rx.nc"
inline static message_t *CC2420ReceiveP__CC2420Rx__received(message_t *data){
#line 45
  nx_struct message_t *__nesc_result;
#line 45

#line 45
  __nesc_result = CC2420TKN154P__CC2420Rx__received(data);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 399 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__receiveDone_task__runTask(void )
#line 399
{
  uint8_t payloadLen = ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->length - CC2420ReceiveP__m_mhrLen - 2;
  ieee154_metadata_t *metadata = (ieee154_metadata_t *)CC2420ReceiveP__m_rxFramePtr->metadata;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 403
    while (!(CC2420ReceiveP__m_state != CC2420ReceiveP__S_STOPPED)) {
#line 403
        break;
      }
#line 404
    __nesc_atomic_end(__nesc_atomic); }
#line 403
  ;
  ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->length = __nesc_ntoh_uint8(CC2420ReceiveP__m_rxFramePtr->data[payloadLen + 1].nxdata) & 0x7f;
  __nesc_hton_int8(metadata->rssi.nxdata, __nesc_ntoh_uint8(CC2420ReceiveP__m_rxFramePtr->data[payloadLen].nxdata));
  __nesc_hton_uint8(metadata->linkQuality.nxdata, ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->length);
  ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->length = payloadLen;
  CC2420ReceiveP__m_rxFramePtr = CC2420ReceiveP__CC2420Rx__received(CC2420ReceiveP__m_rxFramePtr);
#line 421
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 421
    CC2420ReceiveP__receivingPacket = FALSE;
#line 421
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP__waitForNextPacket();
}

# 58 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__toggle(void )
#line 58
{
#line 58
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 58
    * (volatile uint8_t * )49U ^= 0x01 << 5;
#line 58
    __nesc_atomic_end(__nesc_atomic); }
}

# 58 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__toggle(void ){
#line 58
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__toggle();
#line 58
}
#line 58
# 50 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__toggle(void )
#line 50
{
#line 50
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__toggle();
}

# 42 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__toggle(void ){
#line 42
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__toggle();
#line 42
}
#line 42
# 99 "/opt/tinyos/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Toggle(void )
#line 99
{
  LedsP__Led1__toggle();
  ;
#line 101
  ;
}

# 83 "/opt/tinyos/tos/interfaces/Leds.nc"
inline static void SnifferC__Leds__led1Toggle(void ){
#line 83
  LedsP__Leds__led1Toggle();
#line 83
}
#line 83
# 61 "/opt/tinyos/tos/system/QueueC.nc"
static inline uint8_t /*SnifferAppC.QueueC*/QueueC__1__Queue__maxSize(void )
#line 61
{
  return 10;
}

#line 57
static inline uint8_t /*SnifferAppC.QueueC*/QueueC__1__Queue__size(void )
#line 57
{
  return /*SnifferAppC.QueueC*/QueueC__1__size;
}

#line 97
static inline error_t /*SnifferAppC.QueueC*/QueueC__1__Queue__enqueue(/*SnifferAppC.QueueC*/QueueC__1__queue_t newVal)
#line 97
{
  if (/*SnifferAppC.QueueC*/QueueC__1__Queue__size() < /*SnifferAppC.QueueC*/QueueC__1__Queue__maxSize()) {
      ;
      /*SnifferAppC.QueueC*/QueueC__1__queue[/*SnifferAppC.QueueC*/QueueC__1__tail] = newVal;
      /*SnifferAppC.QueueC*/QueueC__1__tail++;
      if (/*SnifferAppC.QueueC*/QueueC__1__tail == 10) {
#line 102
        /*SnifferAppC.QueueC*/QueueC__1__tail = 0;
        }
#line 103
      /*SnifferAppC.QueueC*/QueueC__1__size++;
      /*SnifferAppC.QueueC*/QueueC__1__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/opt/tinyos/tos/interfaces/Queue.nc"
inline static error_t SnifferC__Queue__enqueue(SnifferC__Queue__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*SnifferAppC.QueueC*/QueueC__1__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 88 "/opt/tinyos/tos/system/PoolP.nc"
static inline /*SnifferAppC.PoolC.PoolP*/PoolP__2__pool_t */*SnifferAppC.PoolC.PoolP*/PoolP__2__Pool__get(void )
#line 88
{
  if (/*SnifferAppC.PoolC.PoolP*/PoolP__2__free) {
      /*SnifferAppC.PoolC.PoolP*/PoolP__2__pool_t *rval = /*SnifferAppC.PoolC.PoolP*/PoolP__2__queue[/*SnifferAppC.PoolC.PoolP*/PoolP__2__index];

#line 91
      /*SnifferAppC.PoolC.PoolP*/PoolP__2__queue[/*SnifferAppC.PoolC.PoolP*/PoolP__2__index] = (void *)0;
      /*SnifferAppC.PoolC.PoolP*/PoolP__2__free--;
      /*SnifferAppC.PoolC.PoolP*/PoolP__2__index++;
      if (/*SnifferAppC.PoolC.PoolP*/PoolP__2__index == 10) {
          /*SnifferAppC.PoolC.PoolP*/PoolP__2__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/tinyos/tos/interfaces/Pool.nc"
inline static SnifferC__Pool__t * SnifferC__Pool__get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*SnifferAppC.PoolC.PoolP*/PoolP__2__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 64 "/opt/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static inline bool /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__isResetPending(void )
#line 64
{
#line 64
  return /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__m_state & /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__RESET_PENDING ? TRUE : FALSE;
}

# 69 "/opt/tinyos/tos/system/QueueC.nc"
static inline void /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__printQueue(void )
#line 69
{
}

#line 61
static inline uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__maxSize(void )
#line 61
{
  return 4;
}

#line 57
static inline uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__size(void )
#line 57
{
  return /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__size;
}

#line 97
static inline error_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__enqueue(/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue_t newVal)
#line 97
{
  if (/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__size() < /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__maxSize()) {
      ;
      /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue[/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__tail] = newVal;
      /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__tail++;
      if (/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__tail == 4) {
#line 102
        /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__tail = 0;
        }
#line 103
      /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__size++;
      /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/opt/tinyos/tos/interfaces/Queue.nc"
inline static error_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__enqueue(/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 128 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static bool CC2420ReceiveP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = CC2420SpiP__Resource__isOwner(/*CC2420ReceiveC.Spi*/CC2420SpiC__1__CLIENT_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 41 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__clr(void ){
#line 41
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr();
#line 41
}
#line 41
# 70 "/opt/tinyos/tos/interfaces/SpiPacket.nc"
inline static error_t CC2420SpiP__SpiPacket__send(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID, txBuf, rxBuf, len);
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 209 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 210
{
  return CC2420SpiP__SpiPacket__send((void *)0, data, len);
}

#line 189
static inline cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 190
{

  cc2420_status_t status = 0;

  /* atomic removed: atomic calls only */
#line 194
  {
    if (CC2420SpiP__WorkingState__isIdle()) {
        {
          unsigned char __nesc_temp = 
#line 196
          status;

#line 196
          return __nesc_temp;
        }
      }
  }
  CC2420SpiP__m_addr = addr | 0x40;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__Fifo__continueRead(addr, data, len);

  return status;
}

# 51 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420SpiP__Fifo__beginRead(CC2420_RXFIFO, data, length);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 97 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420ReceiveP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420ReceiveC.Spi*/CC2420SpiC__1__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 88
inline static error_t CC2420ReceiveP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ReceiveC.Spi*/CC2420SpiC__1__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420TKN154P__rxControlStopDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420TKN154P__rxControlStopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 849 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__RxControl__stopDone(error_t error)
{
  CC2420TKN154P__rxControlStopDoneTask__postTask();
}

# 132 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420AsyncSplitControl.nc"
inline static void CC2420ReceiveP__AsyncSplitControl__stopDone(error_t error){
#line 132
  CC2420TKN154P__RxControl__stopDone(error);
#line 132
}
#line 132
# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420ReceiveP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ReceiveC.Spi*/CC2420SpiC__1__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 201 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__stopContinueTask__runTask(void )
{
  while (!(CC2420ReceiveP__receivingPacket != TRUE)) {
#line 203
      break;
    }
#line 203
  ;
  CC2420ReceiveP__SpiResource__release();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    CC2420ReceiveP__m_state = CC2420ReceiveP__S_STOPPED;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP__AsyncSplitControl__stopDone(SUCCESS);
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420SpiP__grant__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420SpiP__grant);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 184 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__SpiResource__granted(void )
#line 184
{
  CC2420SpiP__grant__postTask();
}

# 180 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(uint8_t id)
#line 180
{
}

# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__granted(uint8_t arg_0x41093460){
#line 102
  switch (arg_0x41093460) {
#line 102
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 102
      CC2420SpiP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(arg_0x41093460);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 130 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(uint8_t id)
#line 130
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__granted(id);
}

# 202 "/opt/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x41199bd0){
#line 102
  switch (arg_0x41199bd0) {
#line 102
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 102
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x41199bd0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 190 "/opt/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
}

# 251 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error)
#line 251
{
}

# 82 "/opt/tinyos/tos/interfaces/SpiPacket.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__sendDone(uint8_t arg_0x410ce068, uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 82
  switch (arg_0x410ce068) {
#line 82
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 82
      CC2420SpiP__SpiPacket__sendDone(txBuf, rxBuf, len, error);
#line 82
      break;
#line 82
    default:
#line 82
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(arg_0x410ce068, txBuf, rxBuf, len, error);
#line 82
      break;
#line 82
    }
#line 82
}
#line 82
# 244 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone(void )
#line 244
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__sendDone(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_client, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len, 
  SUCCESS);
}

#line 227
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask(void )
#line 227
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 228
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone();
#line 228
    __nesc_atomic_end(__nesc_atomic); }
}

# 416 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 417
{
}

# 40 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__set(void ){
#line 40
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set();
#line 40
}
#line 40
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ReceiveP__receiveDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ReceiveP__receiveDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 352 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isPromiscuousModeEnabled(void )
{
  return CC2420ControlP__acceptReservedFrames;
}

# 90 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isPromiscuousModeEnabled(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = CC2420ControlP__CC2420Config__isPromiscuousModeEnabled();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 363 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ackFrame)
#line 363
{
  /* atomic removed: atomic calls only */
#line 364
  {
    if (type == IEEE154_TYPE_ACK) {
        if (CC2420TransmitP__m_state == CC2420TransmitP__S_ACK_WAIT && 
        CC2420TransmitP__m_frame->header->mhr[2] == ((ieee154_header_t *)ackFrame->header)->mhr[2]) {
            CC2420TransmitP__BackoffAlarm__stop();
            CC2420TransmitP__signalDone(((ieee154_header_t *)ackFrame->header)->mhr[0] & 0x10 ? TRUE : FALSE, SUCCESS);
          }
      }
  }
}

# 63 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message){
#line 63
  CC2420TransmitP__CC2420Receive__receive(type, message);
#line 63
}
#line 63
# 62 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = CC2420SpiP__Fifo__continueRead(CC2420_RXFIFO, data, length);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 48 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static error_t CC2420ReceiveP__FrameUtility__getMHRLength(uint8_t fcf1, uint8_t fcf2, uint8_t *len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = PibP__FrameUtility__getMHRLength(fcf1, fcf2, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 59 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )32U & (0x01 << 0);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw() != 0;
}

# 73 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__HplGeneralIO__get();
}

# 43 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFOP__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 261 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error)
#line 262
{
  uint8_t *buf;

  /* atomic removed: atomic calls only */
#line 265
  {
    buf = (uint8_t *)& ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->length;
    CC2420ReceiveP__rxFrameLength = ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->length;

    switch (CC2420ReceiveP__m_state) {

        case CC2420ReceiveP__S_RX_LENGTH: 
          CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_FCF;
        if (CC2420ReceiveP__rxFrameLength + 1 > CC2420ReceiveP__m_bytes_left) {

            CC2420ReceiveP__flush();
          }
        else {
            if (!CC2420ReceiveP__FIFO__get() && !CC2420ReceiveP__FIFOP__get()) {

                CC2420ReceiveP__flush();
              }


            if (CC2420ReceiveP__rxFrameLength <= sizeof(ieee154_header_t ) - 1 + 118 + 2) {
                if (CC2420ReceiveP__rxFrameLength > 0) {
                    if (CC2420ReceiveP__rxFrameLength > CC2420ReceiveP__SACK_HEADER_LENGTH) {

                        CC2420ReceiveP__RXFIFO__continueRead(buf + 1, CC2420ReceiveP__SACK_HEADER_LENGTH);
                      }
                    else {

                        CC2420ReceiveP__flush();
                      }
                  }
                else 

                  {

                    CC2420ReceiveP__flush();
                  }
              }
            else 



              {

                CC2420ReceiveP__flush();
              }
          }
        break;

        case CC2420ReceiveP__S_RX_FCF: 
          if (CC2420ReceiveP__FrameUtility__getMHRLength(buf[1], buf[2], &CC2420ReceiveP__m_mhrLen) != SUCCESS || 
          CC2420ReceiveP__m_mhrLen > CC2420ReceiveP__rxFrameLength - 2) {

              CC2420ReceiveP__flush();
              break;
            }
          else {
#line 319
            if (CC2420ReceiveP__m_mhrLen > CC2420ReceiveP__SACK_HEADER_LENGTH) {
                CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_HEADER;
                CC2420ReceiveP__RXFIFO__continueRead(buf + 1 + CC2420ReceiveP__SACK_HEADER_LENGTH, 
                CC2420ReceiveP__m_mhrLen - CC2420ReceiveP__SACK_HEADER_LENGTH);
                break;
              }
            else 
#line 324
              {
              }
            }


        case CC2420ReceiveP__S_RX_HEADER: 



          if (CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__m_mhrLen - 2 > 118) {
            CC2420ReceiveP__flush();
            }
          else 
#line 335
            {
              CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;
              CC2420ReceiveP__RXFIFO__continueRead((uint8_t *)CC2420ReceiveP__m_rxFramePtr->data, CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__m_mhrLen);
            }
        break;

        case CC2420ReceiveP__S_RX_PAYLOAD: 
          CC2420ReceiveP__CSN__set();

        if (!CC2420ReceiveP__m_missed_packets) {

            CC2420ReceiveP__SpiResource__release();
          }

        if (CC2420ReceiveP__m_timestamp_size) {
            if (CC2420ReceiveP__rxFrameLength > 4) {
                __nesc_hton_uint32(((ieee154_metadata_t *)CC2420ReceiveP__m_rxFramePtr->metadata)->timestamp.nxdata, CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__m_timestamp_head]);
                CC2420ReceiveP__m_timestamp_head = (CC2420ReceiveP__m_timestamp_head + 1) % CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;
                CC2420ReceiveP__m_timestamp_size--;
              }
          }
        else 
#line 355
          {
            __nesc_hton_uint32(((ieee154_metadata_t *)CC2420ReceiveP__m_rxFramePtr->metadata)->timestamp.nxdata, 0xffffffff);
          }



        if (__nesc_ntoh_uint8(CC2420ReceiveP__m_rxFramePtr->data[CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__m_mhrLen - 1].nxdata) >> 7 && rx_buf) {
            uint8_t type = ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->mhr[0] & 0x07;

            CC2420ReceiveP__CC2420Receive__receive(type, CC2420ReceiveP__m_rxFramePtr);


            if ((
#line 366
            type != IEEE154_TYPE_ACK || CC2420ReceiveP__CC2420Config__isPromiscuousModeEnabled())
             && !CC2420ReceiveP__m_stop) {
                CC2420ReceiveP__receiveDone_task__postTask();
                return;
              }
          }

        CC2420ReceiveP__waitForNextPacket();
        break;

        default: 
          CC2420ReceiveP__receivingPacket = FALSE;
        CC2420ReceiveP__CSN__set();
        CC2420ReceiveP__SpiResource__release();
        if (CC2420ReceiveP__m_stop) {
            CC2420ReceiveP__continueStop();
            return;
          }
        break;
      }
  }
}

# 370 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 370
{
}

# 71 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__readDone(uint8_t arg_0x40fff010, uint8_t * data, uint8_t length, error_t error){
#line 71
  switch (arg_0x40fff010) {
#line 71
    case CC2420_TXFIFO:
#line 71
      CC2420TransmitP__TXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    case CC2420_RXFIFO:
#line 71
      CC2420ReceiveP__RXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    default:
#line 71
      CC2420SpiP__Fifo__default__readDone(arg_0x40fff010, data, length, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 53 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHRX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 100 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
static inline void TKN154TimingP__ReliableWait__waitTx(uint32_t t0, uint32_t dt)
{
  if (TKN154TimingP__m_state != TKN154TimingP__S_WAIT_OFF) {
      while (!0) {
#line 103
          break;
        }
#line 103
      ;
      return;
    }
  TKN154TimingP__m_state = TKN154TimingP__S_WAIT_TX;
  TKN154TimingP__SymbolAlarm__startAt(t0 - 16, dt);
}

# 37 "/opt/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
inline static void CC2420TKN154P__ReliableWait__waitTx(uint32_t t0, uint32_t dt){
#line 37
  TKN154TimingP__ReliableWait__waitTx(t0, dt);
#line 37
}
#line 37
# 464 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__loadDoneRadioTx(void )
{
  /* atomic removed: atomic calls only */
  {
    CC2420TKN154P__m_state = CC2420TKN154P__S_TX_PENDING;
    if (CC2420TKN154P__m_dt == 0) {
      CC2420TKN154P__ReliableWait__waitTxDone();
      }
    else {
#line 472
      CC2420TKN154P__ReliableWait__waitTx(CC2420TKN154P__m_t0, CC2420TKN154P__m_dt);
      }
  }
}

#line 739
static inline void CC2420TKN154P__CC2420Tx__loadTXFIFODone(ieee154_txframe_t *data, error_t error)
{
  /* atomic removed: atomic calls only */
#line 741
  {
    switch (CC2420TKN154P__m_state) 
      {
        case CC2420TKN154P__S_LOAD_TXFIFO_NO_CSMA: CC2420TKN154P__loadDoneRadioTx();
#line 744
        break;
        case CC2420TKN154P__S_LOAD_TXFIFO_UNSLOTTED: CC2420TKN154P__nextIterationUnslottedCsma();
#line 745
        break;
        case CC2420TKN154P__S_LOAD_TXFIFO_SLOTTED: CC2420TKN154P__nextIterationSlottedCsma();
#line 746
        break;
        default: while (!0) {
#line 747
              break;
            }
#line 747
        ;
#line 747
        break;
      }
  }
}

# 41 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static void CC2420TransmitP__CC2420Tx__loadTXFIFODone(ieee154_txframe_t *data, error_t error){
#line 41
  CC2420TKN154P__CC2420Tx__loadTXFIFODone(data, error);
#line 41
}
#line 41
# 172 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
{
  /* atomic removed: atomic calls only */
#line 174
  {
    CC2420TransmitP__CSN__set();
    if (tx_buf == & CC2420TransmitP__m_frame->header->length) {
        CC2420TransmitP__CSN__clr();
        CC2420TransmitP__TXFIFO__write(CC2420TransmitP__m_frame->header->mhr, CC2420TransmitP__m_frame->headerLen);
        return;
      }
    else {
#line 180
      if (tx_buf == CC2420TransmitP__m_frame->header->mhr) {
          CC2420TransmitP__CSN__clr();
          CC2420TransmitP__TXFIFO__write(CC2420TransmitP__m_frame->payload, CC2420TransmitP__m_frame->payloadLen);
          return;
        }
      }
  }
#line 186
  CC2420TransmitP__m_state = CC2420TransmitP__S_READY_TX;
  CC2420TransmitP__CC2420Tx__loadTXFIFODone(CC2420TransmitP__m_frame, error);
}

# 391 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 391
{
}

# 373 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 373
{
}

# 91 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__writeDone(uint8_t arg_0x40fff010, uint8_t * data, uint8_t length, error_t error){
#line 91
  switch (arg_0x40fff010) {
#line 91
    case CC2420_TXFIFO:
#line 91
      CC2420TransmitP__TXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    case CC2420_RXFIFO:
#line 91
      CC2420ReceiveP__RXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    default:
#line 91
      CC2420SpiP__Fifo__default__writeDone(arg_0x40fff010, data, length, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 138 "/opt/tinyos/tos/interfaces/SplitControl.nc"
inline static void CC2420TKN154P__SplitControl__stopDone(error_t error){
#line 138
  PibP__RadioControl__stopDone(error);
#line 138
}
#line 138
# 48 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set();
#line 48
}
#line 48
# 48 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__set();
}

# 40 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__set(void ){
#line 40
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set();
#line 40
}
#line 40
# 57 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )29U &= ~(0x01 << 5);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 53 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr();
#line 53
}
#line 53
# 49 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__clr();
}

# 41 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__clr(void ){
#line 41
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__clr();
#line 41
}
#line 41
# 53 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr();
#line 53
}
#line 53
# 49 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__clr();
}

# 41 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__clr(void ){
#line 41
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr();
#line 41
}
#line 41
# 186 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__stopVReg(void )
#line 186
{
  CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;
  CC2420ControlP__RSTN__clr();
  CC2420ControlP__VREN__clr();
  CC2420ControlP__RSTN__set();
  return SUCCESS;
}

# 64 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static error_t CC2420TKN154P__CC2420Power__stopVReg(void ){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = CC2420ControlP__CC2420Power__stopVReg();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 53 "/opt/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SXOSCOFF__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SXOSCOFF);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 228 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__stopOscillator(void )
#line 228
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 229
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_XOSC_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 231
            FAIL;

            {
#line 231
              __nesc_atomic_end(__nesc_atomic); 
#line 231
              return __nesc_temp;
            }
          }
        }
#line 233
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTED;
      CC2420ControlP__CSN__set();
      CC2420ControlP__CSN__clr();
      CC2420ControlP__SXOSCOFF__strobe();
      CC2420ControlP__CSN__set();
    }
#line 238
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 84 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static error_t CC2420TKN154P__CC2420Power__stopOscillator(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = CC2420ControlP__CC2420Power__stopOscillator();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 193 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__stopSpiReserved(void )
{

  CC2420TKN154P__CC2420Power__rfOff();
  CC2420TKN154P__CC2420Power__flushRxFifo();
  CC2420TKN154P__CC2420Power__stopOscillator();
  CC2420TKN154P__CC2420Power__stopVReg();
  CC2420TKN154P__CC2420Tx__unlockChipSpi();
  CC2420TKN154P__SpiResource__release();
  CC2420TKN154P__m_state = CC2420TKN154P__S_STOPPED;
  CC2420TKN154P__SplitControl__stopDone(SUCCESS);
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420TKN154P__energyDetectionTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420TKN154P__energyDetectionTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 53 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static error_t CC2420TKN154P__CC2420Config__sync(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420ControlP__CC2420Config__sync();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 312 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__edReserved(void )
{
  CC2420TKN154P__CC2420Config__sync();
  CC2420TKN154P__CC2420Power__rxOn();
  CC2420TKN154P__m_edStartTime = CC2420TKN154P__LocalTime__get();
  CC2420TKN154P__energyDetectionTask__postTask();
}

# 162 "/opt/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(uint8_t id, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt)
#line 162
{
  /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__startAt(id, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow(), dt);
}

# 84 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline void Alarm32khzTo62500hzTransformC__AlarmFrom__default__start(uint8_t num, uint32_t dt)
#line 84
{
}

# 66 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void Alarm32khzTo62500hzTransformC__AlarmFrom__start(uint8_t arg_0x413c8df0, Alarm32khzTo62500hzTransformC__AlarmFrom__size_type dt){
#line 66
  switch (arg_0x413c8df0) {
#line 66
    case /*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID, dt);
#line 66
      break;
#line 66
    case /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID, dt);
#line 66
      break;
#line 66
    case /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID, dt);
#line 66
      break;
#line 66
    default:
#line 66
      Alarm32khzTo62500hzTransformC__AlarmFrom__default__start(arg_0x413c8df0, dt);
#line 66
      break;
#line 66
    }
#line 66
}
#line 66
# 55 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline void Alarm32khzTo62500hzTransformC__Alarm__start(uint8_t num, uint32_t dt)
#line 55
{
#line 55
  Alarm32khzTo62500hzTransformC__AlarmFrom__start(num, dt >> 1);
}

# 66 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void CC2420ControlP__StartupAlarm__start(CC2420ControlP__StartupAlarm__size_type dt){
#line 66
  Alarm32khzTo62500hzTransformC__Alarm__start(/*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID, dt);
#line 66
}
#line 66
# 56 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )29U |= 0x01 << 5;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 48 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set();
#line 48
}
#line 48
# 48 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__set();
}

# 40 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__set(void ){
#line 40
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set();
#line 40
}
#line 40
# 174 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startVReg(void )
#line 174
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 175
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STOPPED) {
          {
            unsigned char __nesc_temp = 
#line 177
            FAIL;

            {
#line 177
              __nesc_atomic_end(__nesc_atomic); 
#line 177
              return __nesc_temp;
            }
          }
        }
#line 179
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTING;
    }
#line 180
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__VREN__set();
  CC2420ControlP__StartupAlarm__start(CC2420_TIME_VREN * 2);
  return SUCCESS;
}

# 52 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static error_t CC2420TKN154P__CC2420Power__startVReg(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = CC2420ControlP__CC2420Power__startVReg();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 149 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__startSpiReserved(void )
{

  CC2420TKN154P__CC2420Power__startVReg();
}

#line 868
static inline void CC2420TKN154P__SpiResource__granted(void )
{
  switch (CC2420TKN154P__m_state) 
    {
      case CC2420TKN154P__S_STARTING: CC2420TKN154P__startSpiReserved();
#line 872
      break;
      case CC2420TKN154P__S_ED: CC2420TKN154P__edReserved();
#line 873
      break;
      case CC2420TKN154P__S_RESERVE_RX_SPI: CC2420TKN154P__rxSpiReserved();
#line 874
      break;
      case CC2420TKN154P__S_LOAD_TXFIFO_NO_CSMA: 
        case CC2420TKN154P__S_LOAD_TXFIFO_UNSLOTTED: 
          case CC2420TKN154P__S_LOAD_TXFIFO_SLOTTED: CC2420TKN154P__txSpiReserved();
#line 877
      break;
      case CC2420TKN154P__S_TX_ACTIVE_NO_CSMA: 
        case CC2420TKN154P__S_TX_ACTIVE_UNSLOTTED_CSMA: 
          case CC2420TKN154P__S_TX_ACTIVE_SLOTTED_CSMA: CC2420TKN154P__sendDoneSpiReserved();
#line 880
      break;
      case CC2420TKN154P__S_STOPPING: CC2420TKN154P__stopSpiReserved();
#line 881
      break;
      case CC2420TKN154P__S_OFF_PENDING: CC2420TKN154P__offSpiReserved();
#line 882
      break;
      default: while (!0) {
#line 883
            break;
          }
#line 883
      ;
#line 883
      break;
    }
}

# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static void CC2420ControlP__Resource__granted(void ){
#line 102
  CC2420TKN154P__SpiResource__granted();
#line 102
}
#line 102
# 168 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__SpiResource__granted(void )
#line 168
{

  CC2420ControlP__Resource__granted();
}

# 246 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__SpiResource__granted(void )
#line 246
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 247
    {
      switch (CC2420ReceiveP__m_state) 
        {
          case CC2420ReceiveP__S_STOPPED: while (!0) {
#line 250
                break;
              }
#line 250
          ;
#line 250
          break;
          default: CC2420ReceiveP__receive();
        }
    }
#line 253
    __nesc_atomic_end(__nesc_atomic); }
}

# 367 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Resource__default__granted(uint8_t id)
#line 367
{
}

# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static void CC2420SpiP__Resource__granted(uint8_t arg_0x41000558){
#line 102
  switch (arg_0x41000558) {
#line 102
    case /*CC2420ControlTransmitC.Spi*/CC2420SpiC__0__CLIENT_ID:
#line 102
      CC2420ControlP__SpiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ReceiveC.Spi*/CC2420SpiC__1__CLIENT_ID:
#line 102
      CC2420ReceiveP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      CC2420SpiP__Resource__default__granted(arg_0x41000558);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 358 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__grant__runTask(void )
#line 358
{
  uint8_t holder;

#line 360
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
    {
      holder = CC2420SpiP__m_holder;
    }
#line 362
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiP__Resource__granted(holder);
}

# 69 "/opt/tinyos/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 62 "/opt/tinyos/tos/interfaces/Init.nc"
inline static error_t PibP__DispatchReset__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = DispatchUnslottedCsmaP__Reset__init();
#line 62
  __nesc_result = ecombine(__nesc_result, DispatchUnslottedCsmaP__Reset__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 53 "/opt/tinyos/tos/system/QueueC.nc"
static inline bool /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__size == 0;
}

# 64 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoBeaconRequestRxP.nc"
static inline void NoBeaconRequestRxP__BeaconRequestResponseTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
#line 64
{
}

# 86 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoAssociateP.nc"
static inline void NoAssociateP__AssociationRequestTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
#line 86
{
}

# 88 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoDisassociateP.nc"
static inline void NoDisassociateP__DisassociationDirectTx__transmitDone(ieee154_txframe_t *data, ieee154_status_t status)
#line 88
{
}

#line 84
static inline void NoDisassociateP__DisassociationToCoord__transmitDone(ieee154_txframe_t *data, ieee154_status_t status)
#line 84
{
}

# 240 "/opt/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline void DataP__DeviceCapTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  DataP__finishTxTransaction(txFrame, status);
}

static inline void DataP__CoordCapTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  DataP__finishTxTransaction(txFrame, status);
}

# 89 "/opt/tinyos/tos/interfaces/Pool.nc"
inline static error_t PollP__TxFramePool__put(PollP__TxFramePool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 103 "/opt/tinyos/tos/system/PoolP.nc"
static inline error_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__put(/*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t *newVal)
#line 103
{
  if (/*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__free >= 3) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__index + /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__free;

#line 109
      if (emptyIndex >= 3) {
          emptyIndex -= 3;
        }
      /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__queue[emptyIndex] = newVal;
      /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__free++;
      ;
      return SUCCESS;
    }
}

# 89 "/opt/tinyos/tos/interfaces/Pool.nc"
inline static error_t PollP__TxControlPool__put(PollP__TxControlPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 207 "/opt/tinyos/tos/lib/mac/tkn154/PollP.nc"
static inline void PollP__PollTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  ;
  PollP__m_numPending--;
  if (txFrame->handle != PollP__HANDLE_MLME_POLL_SUCCESS) {

      if (status == IEEE154_SUCCESS) {
        status = IEEE154_NO_DATA;
        }
#line 215
      if (txFrame->handle == PollP__HANDLE_MLME_POLL_REQUEST) {
        PollP__MLME_POLL__confirm(status);
        }
      else {
#line 218
        PollP__DataRequest__pollDone(txFrame->handle);
        }
    }
#line 220
  PollP__TxControlPool__put((ieee154_txcontrol_t *)((uint8_t *)txFrame->header - (unsigned short )& ((ieee154_txcontrol_t *)0)->header));
  PollP__TxFramePool__put(txFrame);
}

# 353 "/opt/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline void IndirectTxP__CoordCapTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  uint8_t i;

  ;

  if (txFrame == &IndirectTxP__m_emptyDataFrame) {
      IndirectTxP__m_emptyDataFrame.client = 0;
      return;
    }
  for (i = 0; i < IndirectTxP__NUM_MAX_PENDING; i++) 
    if (IndirectTxP__m_txFrameTable[i] == txFrame) {
        IndirectTxP__m_txFrameTable[i] = (void *)0;
        break;
      }
  IndirectTxP__PendingAddrSpecUpdated__notify(TRUE);
  IndirectTxP__m_pendingTxFrame = (void *)0;
  txFrame->client = IndirectTxP__m_client;
  txFrame->client &= ~IndirectTxP__SEND_THIS_FRAME;
  IndirectTxP__m_numTableEntries -= 1;
  if ((txFrame->header->mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK) == FC2_DEST_MODE_SHORT) {
    IndirectTxP__m_numShortPending--;
    }
  else {
#line 375
    if ((txFrame->header->mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK) == FC2_DEST_MODE_EXTENDED) {
      IndirectTxP__m_numExtPending--;
      }
    }
#line 377
  IndirectTxP__FrameTx__transmitDone(txFrame->client, txFrame, status);
  IndirectTxP__tryCoordCapTxTask__postTask();
}

# 81 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoCoordRealignmentP.nc"
static inline void NoCoordRealignmentP__CoordRealignmentTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
}

# 66 "/opt/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static inline void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__resetResetPending(void )
#line 66
{
#line 66
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__m_state &= ~/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__RESET_PENDING;
}

# 81 "/opt/tinyos/tos/interfaces/Queue.nc"
inline static /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__t  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__dequeue(void ){
#line 81
  struct __nesc_unnamed4272 *__nesc_result;
#line 81

#line 81
  __nesc_result = /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
#line 58
inline static uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 65 "/opt/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static inline void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__setResetPending(void )
#line 65
{
#line 65
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__m_state |= /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__RESET_PENDING;
}

static inline error_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Reset__init(void )
{
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__setResetPending();
  while (/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__size()) {
      ieee154_txframe_t *txFrame = /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__dequeue();

#line 73
      /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmitDone(txFrame->client, txFrame, IEEE154_TRANSACTION_OVERFLOW);
    }
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__resetResetPending();
  return SUCCESS;
}

# 62 "/opt/tinyos/tos/interfaces/Init.nc"
inline static error_t PibP__DispatchQueueReset__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Reset__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 64 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoRxEnableP.nc"
static inline error_t NoRxEnableP__Init__init(void )
#line 64
{
#line 64
  return SUCCESS;
}

# 62 "/opt/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline error_t PromiscuousModeP__Init__init(void )
{
  PromiscuousModeP__m_state = PromiscuousModeP__S_STOPPED;
  return SUCCESS;
}

# 63 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoCoordRealignmentP.nc"
static inline error_t NoCoordRealignmentP__Init__init(void )
#line 63
{
#line 63
  return SUCCESS;
}

# 78 "/opt/tinyos/tos/lib/timer/Timer.nc"
inline static void IndirectTxP__IndirectTxTimeout__stop(void ){
#line 78
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(2U);
#line 78
}
#line 78
# 80 "/opt/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline error_t IndirectTxP__Reset__init(void )
{
  uint8_t i;


  IndirectTxP__IndirectTxTimeout__stop();
  for (i = 0; i < IndirectTxP__NUM_MAX_PENDING; i++) 
    if (IndirectTxP__m_txFrameTable[i] != (void *)0) {
      IndirectTxP__FrameTx__transmitDone(IndirectTxP__m_txFrameTable[i]->client, IndirectTxP__m_txFrameTable[i], IEEE154_TRANSACTION_OVERFLOW);
      }
#line 89
  for (i = 0; i < IndirectTxP__NUM_MAX_PENDING; i++) 
    IndirectTxP__m_txFrameTable[i] = (void *)0;
  IndirectTxP__m_pendingTxFrame = (void *)0;
  IndirectTxP__m_numTableEntries = 0;
  IndirectTxP__m_numShortPending = 0;
  IndirectTxP__m_numExtPending = 0;

  IndirectTxP__m_emptyDataFrame.header = &IndirectTxP__m_emptyDataFrameHeader;
  IndirectTxP__m_emptyDataFrame.metadata = &IndirectTxP__m_emptyDataFrameMetadata;
  IndirectTxP__m_emptyDataFrame.payload = &IndirectTxP__m_numExtPending;
  IndirectTxP__m_emptyDataFrame.payloadLen = 0;
  IndirectTxP__m_emptyDataFrame.client = 0;
  return SUCCESS;
}

# 70 "/opt/tinyos/tos/lib/mac/tkn154/PollP.nc"
static inline error_t PollP__Init__init(void )
{
  PollP__m_numPending = 0;
  return SUCCESS;
}

# 68 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoDisassociateP.nc"
static inline error_t NoDisassociateP__Init__init(void )
#line 68
{
#line 68
  return SUCCESS;
}

# 69 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoAssociateP.nc"
static inline error_t NoAssociateP__Init__init(void )
#line 69
{
#line 69
  return SUCCESS;
}

# 60 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoBeaconRequestRxP.nc"
static inline error_t NoBeaconRequestRxP__Reset__init(void )
#line 60
{
#line 60
  return SUCCESS;
}

# 70 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoScanP.nc"
static inline error_t NoScanP__Init__init(void )
#line 70
{
#line 70
  return SUCCESS;
}

# 62 "/opt/tinyos/tos/interfaces/Init.nc"
inline static error_t PibP__MacReset__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = NoScanP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, NoBeaconRequestRxP__Reset__init());
#line 62
  __nesc_result = ecombine(__nesc_result, NoAssociateP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, NoDisassociateP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PollP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, IndirectTxP__Reset__init());
#line 62
  __nesc_result = ecombine(__nesc_result, NoCoordRealignmentP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PromiscuousModeP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, NoRxEnableP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 105 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoScanP.nc"
static inline void NoScanP__RadioOff__offDone(void )
#line 105
{
}

# 365 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__RadioOff__offDone(void )
{
  DispatchUnslottedCsmaP__m_lock = FALSE;
  DispatchUnslottedCsmaP__updateState();
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t PibP__radioControlStopTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PibP__radioControlStopTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 193 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__RadioOff__offDone(void )
{
  PibP__radioControlStopTask__postTask();
}

# 214 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__MacRadioOff__default__offDone(uint8_t client)
{
  while (!0) {
#line 216
      break;
    }
#line 216
  ;
}

# 53 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static void RadioControlImplP__MacRadioOff__offDone(uint8_t arg_0x40ae6958){
#line 53
  switch (arg_0x40ae6958) {
#line 53
    case 0:
#line 53
      NoScanP__RadioOff__offDone();
#line 53
      break;
#line 53
    case 1:
#line 53
      PibP__RadioOff__offDone();
#line 53
      break;
#line 53
    case 2:
#line 53
      PromiscuousModeP__RadioOff__offDone();
#line 53
      break;
#line 53
    case 12U:
#line 53
      DispatchUnslottedCsmaP__RadioOff__offDone();
#line 53
      break;
#line 53
    default:
#line 53
      RadioControlImplP__MacRadioOff__default__offDone(arg_0x40ae6958);
#line 53
      break;
#line 53
    }
#line 53
}
#line 53
# 200 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__PhyRadioOff__offDone(void )
{
  RadioControlImplP__MacRadioOff__offDone(RadioControlImplP__ArbiterInfo__userId());
}

# 53 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static void CC2420TKN154P__RadioOff__offDone(void ){
#line 53
  RadioControlImplP__PhyRadioOff__offDone();
#line 53
}
#line 53
# 56 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static error_t PromiscuousModeP__PromiscuousRx__enableRx(uint32_t t0, uint32_t dt){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = RadioControlImplP__MacRx__enableRx(2, t0, dt);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t PromiscuousModeP__continueStopTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PromiscuousModeP__continueStopTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t CC2420TKN154P__configSyncTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420TKN154P__configSyncTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 276 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__configSyncTask__runTask(void )
{
  if (CC2420TKN154P__SpiResource__immediateRequest() == SUCCESS) {
      CC2420TKN154P__CC2420Config__sync();
      if (CC2420TKN154P__m_state == CC2420TKN154P__S_RECEIVING) {

          CC2420TKN154P__CC2420Power__rfOff();
          CC2420TKN154P__CC2420Power__rxOn();
        }
      CC2420TKN154P__SpiResource__release();
    }
  else {
#line 287
    CC2420TKN154P__configSyncTask__postTask();
    }
}

#line 782
static inline void CC2420TKN154P__txDoneRxControlStopped(void )
{

  if (CC2420TKN154P__SpiResource__isOwner() || CC2420TKN154P__SpiResource__immediateRequest() == SUCCESS) {
    CC2420TKN154P__sendDoneSpiReserved();
    }
  else {
#line 788
    CC2420TKN154P__SpiResource__request();
    }
}

#line 357
static inline void CC2420TKN154P__offStopRxDone(void )
{
  if (CC2420TKN154P__SpiResource__immediateRequest() == SUCCESS) {
    CC2420TKN154P__offSpiReserved();
    }
  else {
#line 362
    CC2420TKN154P__SpiResource__request();
    }
}

#line 854
static inline void CC2420TKN154P__rxControlStopDoneTask__runTask(void )
{
  switch (CC2420TKN154P__m_state) 
    {
      case CC2420TKN154P__S_OFF_PENDING: CC2420TKN154P__offStopRxDone();
#line 858
      break;
      case CC2420TKN154P__S_TX_ACTIVE_NO_CSMA: 
        case CC2420TKN154P__S_TX_ACTIVE_UNSLOTTED_CSMA: 
          case CC2420TKN154P__S_TX_ACTIVE_SLOTTED_CSMA: CC2420TKN154P__txDoneRxControlStopped();
#line 861
      break;
      default: while (!0) {
#line 862
            break;
          }
#line 862
      ;
#line 862
      break;
    }
}

# 84 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t PromiscuousModeP__RadioToken__request(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__request(2);
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 75 "/opt/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline error_t PromiscuousModeP__PromiscuousMode__start(void )
{
  error_t result = FAIL;

#line 78
  if (PromiscuousModeP__m_state == PromiscuousModeP__S_STOPPED) {
      PromiscuousModeP__m_state = PromiscuousModeP__S_STARTING;
      PromiscuousModeP__RadioToken__request();
      result = SUCCESS;
    }
  ;
  return result;
}

# 104 "/opt/tinyos/tos/interfaces/SplitControl.nc"
inline static error_t SnifferC__PromiscuousMode__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = PromiscuousModeP__PromiscuousMode__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 336 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_status_t PibP__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value)
#line 336
{
  uint32_t i = 1;
  uint8_t k = value;

#line 339
  while (i && k) {
      i <<= 1;
      k -= 1;
    }
  if (!(IEEE154_SUPPORTED_CHANNELS & i)) {
    return IEEE154_INVALID_PARAMETER;
    }
#line 345
  PibP__m_pib.phyCurrentChannel = value;
  PibP__PIBUpdate__notify(IEEE154_phyCurrentChannel, & PibP__m_pib.phyCurrentChannel);
  return IEEE154_SUCCESS;
}

# 54 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t SnifferC__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value){
#line 54
  enum ieee154_status __nesc_result;
#line 54

#line 54
  __nesc_result = PibP__MLME_SET__phyCurrentChannel(value);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 74 "SnifferC.nc"
static inline void SnifferC__MLME_RESET__confirm(ieee154_status_t status)
{
  if (status != IEEE154_SUCCESS) {
    SnifferC__Leds__led0On();
    }
  else 
#line 78
    {
      SnifferC__MLME_SET__phyCurrentChannel(INITAL_RADIO_CHANNEL);
      if (SnifferC__PromiscuousMode__start() != SUCCESS) {
        SnifferC__Leds__led0On();
        }
    }
}

# 78 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RESET.nc"
inline static void PibP__MLME_RESET__confirm(ieee154_status_t status){
#line 78
  SnifferC__MLME_RESET__confirm(status);
#line 78
}
#line 78
# 137 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t PibP__RadioToken__release(void ){
#line 137
  unsigned char __nesc_result;
#line 137

#line 137
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__release(1);
#line 137

#line 137
  return __nesc_result;
#line 137
}
#line 137








inline static bool PibP__RadioToken__isOwner(void ){
#line 145
  unsigned char __nesc_result;
#line 145

#line 145
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__isOwner(1);
#line 145

#line 145
  return __nesc_result;
#line 145
}
#line 145
# 234 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__RadioControl__startDone(error_t error)
{

  if (PibP__RadioToken__isOwner()) {
      if (PibP__m_setDefaultPIB) {
        PibP__resetAttributesToDefault();
        }
      PibP__PIBUpdate__notify(IEEE154_phyCurrentChannel, & PibP__m_pib.phyCurrentChannel);
      PibP__PIBUpdate__notify(IEEE154_macShortAddress, & PibP__m_pib.macShortAddress);
      PibP__PIBUpdate__notify(IEEE154_macPANId, & PibP__m_pib.macPANId);
      PibP__PIBUpdate__notify(IEEE154_phyCCAMode, & PibP__m_pib.phyCCAMode);
      PibP__PIBUpdate__notify(IEEE154_phyTransmitPower, & PibP__m_pib.phyTransmitPower);
      PibP__PIBUpdate__notify(IEEE154_phyCurrentPage, & PibP__m_pib.phyCurrentPage);
      PibP__PIBUpdate__notify(IEEE154_macPanCoordinator, & PibP__m_pib.macPanCoordinator);

      PibP__RadioToken__release();
      PibP__MLME_RESET__confirm(IEEE154_SUCCESS);
    }
}

# 113 "/opt/tinyos/tos/interfaces/SplitControl.nc"
inline static void CC2420TKN154P__SplitControl__startDone(error_t error){
#line 113
  PibP__RadioControl__startDone(error);
#line 113
}
#line 113
# 292 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline uint8_t CC2420ControlP__CC2420Config__getChannel(void )
#line 292
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 293
    {
      unsigned char __nesc_temp = 
#line 293
      CC2420ControlP__m_channel;

      {
#line 293
        __nesc_atomic_end(__nesc_atomic); 
#line 293
        return __nesc_temp;
      }
    }
#line 295
    __nesc_atomic_end(__nesc_atomic); }
}

# 65 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static uint8_t CC2420TKN154P__CC2420Config__getChannel(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = CC2420ControlP__CC2420Config__getChannel();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65

inline static void CC2420TKN154P__CC2420Config__setChannel(uint8_t channel){
#line 66
  CC2420ControlP__CC2420Config__setChannel(channel);
#line 66
}
#line 66
# 168 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__startDoneTask__runTask(void )
{



  CC2420TKN154P__CC2420Config__setChannel(CC2420TKN154P__CC2420Config__getChannel());
  CC2420TKN154P__CC2420Config__sync();
  CC2420TKN154P__SpiResource__release();
  CC2420TKN154P__m_state = CC2420TKN154P__S_RADIO_OFF;
  CC2420TKN154P__SplitControl__startDone(SUCCESS);
}

# 52 "/opt/tinyos/tos/interfaces/Random.nc"
inline static uint16_t PibP__Random__rand16(void ){
#line 52
  unsigned int __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 266 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_phyMaxFrameDuration_t PibP__MLME_GET__phyMaxFrameDuration(void )
#line 266
{
#line 266
  return IEEE154_MAX_FRAME_DURATION;
}

#line 140
static inline void PibP__updateMacMaxFrameTotalWaitTime(void )
{

  ieee154_macMinBE_t macMinBE = PibP__m_pib.macMinBE;
  ieee154_macMaxBE_t macMaxBE = PibP__m_pib.macMaxBE;
  ieee154_macMaxCSMABackoffs_t macMaxCSMABackoffs = PibP__m_pib.macMaxCSMABackoffs;
  uint8_t m = macMaxBE - macMinBE;
#line 146
  uint8_t k;
  uint32_t waitTime = 0;

  if (macMaxCSMABackoffs < m) {
    m = macMaxCSMABackoffs;
    }
#line 151
  waitTime = (((uint16_t )1 << macMaxBE) - 1) * (macMaxCSMABackoffs - m);
  if (m) {
      k = 0;
      while (k != m) {
          waitTime += (uint16_t )1 << (macMinBE + k);
          k += 1;
        }
    }
  waitTime *= IEEE154_aUnitBackoffPeriod;
  waitTime += PibP__MLME_GET__phyMaxFrameDuration();
  PibP__m_pib.macMaxFrameTotalWaitTime = waitTime;
}

# 84 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t DispatchUnslottedCsmaP__RadioToken__request(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__request(12U);
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
#line 145
inline static bool DispatchUnslottedCsmaP__RadioToken__isOwner(void ){
#line 145
  unsigned char __nesc_result;
#line 145

#line 145
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__isOwner(12U);
#line 145

#line 145
  return __nesc_result;
#line 145
}
#line 145
# 379 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__RxEnableStateChange__notify(bool whatever)
{
  if (!DispatchUnslottedCsmaP__RadioToken__isOwner()) {
    DispatchUnslottedCsmaP__RadioToken__request();
    }
  else {
#line 384
    DispatchUnslottedCsmaP__updateState();
    }
}

#line 387
static inline void DispatchUnslottedCsmaP__PIBUpdateMacRxOnWhenIdle__notify(const void *val)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 389
    DispatchUnslottedCsmaP__m_macRxOnWhenIdle = * (ieee154_macRxOnWhenIdle_t *)val;
#line 389
    __nesc_atomic_end(__nesc_atomic); }
  DispatchUnslottedCsmaP__RxEnableStateChange__notify(TRUE);
}

# 307 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__CC2420Config__setShortAddr(uint16_t addr)
#line 307
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 308
    {
      CC2420ControlP__m_needsSync = TRUE;
      CC2420ControlP__m_short_addr = addr;
    }
#line 311
    __nesc_atomic_end(__nesc_atomic); }
}

# 72 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static void CC2420TKN154P__CC2420Config__setShortAddr(uint16_t address){
#line 72
  CC2420ControlP__CC2420Config__setShortAddr(address);
#line 72
}
#line 72
# 318 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__CC2420Config__setPanAddr(uint16_t pan)
#line 318
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 319
    {
      CC2420ControlP__m_needsSync = TRUE;
      CC2420ControlP__m_pan = pan;
    }
#line 322
    __nesc_atomic_end(__nesc_atomic); }
}

# 78 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static void CC2420TKN154P__CC2420Config__setPanAddr(uint16_t address){
#line 78
  CC2420ControlP__CC2420Config__setPanAddr(address);
#line 78
}
#line 78
# 329 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__CC2420Config__setPanCoordinator(bool pCoord)
#line 329
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 330
    {
      CC2420ControlP__m_needsSync = TRUE;
      CC2420ControlP__m_isPanCoord = pCoord;
    }
#line 333
    __nesc_atomic_end(__nesc_atomic); }
}

# 84 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static void CC2420TKN154P__CC2420Config__setPanCoordinator(bool pcoord){
#line 84
  CC2420ControlP__CC2420Config__setPanCoordinator(pcoord);
#line 84
}
#line 84
# 375 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__CC2420Config__setTxPower(uint8_t txPower)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 377
    {
      CC2420ControlP__m_needsSync = TRUE;
      CC2420ControlP__m_txPower = txPower;
    }
#line 380
    __nesc_atomic_end(__nesc_atomic); }
}

# 102 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static void CC2420TKN154P__CC2420Config__setTxPower(uint8_t txPower){
#line 102
  CC2420ControlP__CC2420Config__setTxPower(txPower);
#line 102
}
#line 102
# 221 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline uint8_t CC2420TKN154P__dBmToPA_LEVEL(int dBm)
{
  uint8_t result;

  if (dBm >= 0) {
    result = 31;
    }
  else {
#line 227
    if (dBm > -2) {
      result = 27;
      }
    else {
#line 229
      if (dBm > -4) {
        result = 23;
        }
      else {
#line 231
        if (dBm > -6) {
          result = 19;
          }
        else {
#line 233
          if (dBm > -9) {
            result = 15;
            }
          else {
#line 235
            if (dBm > -13) {
              result = 11;
              }
            else {
#line 237
              if (dBm > -20) {
                result = 7;
                }
              else {
#line 240
                result = 3;
                }
              }
            }
          }
        }
      }
    }
#line 241
  return result;
}

# 362 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__CC2420Config__setCCAMode(uint8_t mode)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 364
    {
      CC2420ControlP__m_needsSync = TRUE;
      CC2420ControlP__m_CCAMode = mode;
    }
#line 367
    __nesc_atomic_end(__nesc_atomic); }
}

# 96 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static void CC2420TKN154P__CC2420Config__setCCAMode(uint8_t mode){
#line 96
  CC2420ControlP__CC2420Config__setCCAMode(mode);
#line 96
}
#line 96
# 92 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoScanP.nc"
static inline void NoScanP__EnergyDetection__done(error_t status, int8_t EnergyLevel)
#line 92
{
}

# 61 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/EnergyDetection.nc"
inline static void CC2420TKN154P__EnergyDetection__done(error_t status, int8_t EnergyLevel){
#line 61
  NoScanP__EnergyDetection__done(status, EnergyLevel);
#line 61
}
#line 61
# 47 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
inline static bool CC2420TKN154P__TimeCalc__hasExpired(uint32_t t0, uint32_t dt){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = PibP__TimeCalc__hasExpired(t0, dt);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 320 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__energyDetectionTask__runTask(void )
{
  int8_t value;

#line 323
  if (CC2420TKN154P__CC2420Power__rssi(&value) == SUCCESS) {
    if (value > CC2420TKN154P__m_maxEnergy) {
      CC2420TKN154P__m_maxEnergy = value;
      }
    }
#line 327
  if (CC2420TKN154P__TimeCalc__hasExpired(CC2420TKN154P__m_edStartTime, CC2420TKN154P__m_edDuration)) {


      CC2420TKN154P__m_maxEnergy -= 45;
      CC2420TKN154P__CC2420Power__rfOff();
      CC2420TKN154P__CC2420Power__flushRxFifo();
      CC2420TKN154P__SpiResource__release();
      CC2420TKN154P__m_state = CC2420TKN154P__S_RADIO_OFF;
      CC2420TKN154P__EnergyDetection__done(SUCCESS, CC2420TKN154P__m_maxEnergy);
    }
  else {
#line 337
    CC2420TKN154P__energyDetectionTask__postTask();
    }
}

# 200 "SnifferC.nc"
static inline void SnifferC__PromiscuousMode__stopDone(error_t error)
#line 200
{
}

# 138 "/opt/tinyos/tos/interfaces/SplitControl.nc"
inline static void PromiscuousModeP__PromiscuousMode__stopDone(error_t error){
#line 138
  SnifferC__PromiscuousMode__stopDone(error);
#line 138
}
#line 138
# 137 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t PromiscuousModeP__RadioToken__release(void ){
#line 137
  unsigned char __nesc_result;
#line 137

#line 137
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__release(2);
#line 137

#line 137
  return __nesc_result;
#line 137
}
#line 137
# 89 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static void CC2420TKN154P__CC2420Config__setPromiscuousMode(bool on){
#line 89
  CC2420ControlP__CC2420Config__setPromiscuousMode(on);
#line 89
}
#line 89
# 290 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__RadioPromiscuousMode__set(bool val)
{
  CC2420TKN154P__CC2420Config__setPromiscuousMode(val);
}

# 55 "/opt/tinyos/tos/interfaces/Set.nc"
inline static void PromiscuousModeP__RadioPromiscuousMode__set(PromiscuousModeP__RadioPromiscuousMode__val_t val){
#line 55
  CC2420TKN154P__RadioPromiscuousMode__set(val);
#line 55
}
#line 55
# 129 "/opt/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline void PromiscuousModeP__continueStopTask__runTask(void )
{
  PromiscuousModeP__RadioPromiscuousMode__set(FALSE);
  PromiscuousModeP__m_state = PromiscuousModeP__S_STOPPED;
  PromiscuousModeP__RadioToken__release();
  ;
  PromiscuousModeP__PromiscuousMode__stopDone(SUCCESS);
}

# 57 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )49U &= ~(0x01 << 6);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 53 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__clr();
#line 53
}
#line 53
# 49 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void )
#line 49
{
#line 49
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr();
}

# 41 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__clr(void ){
#line 41
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr();
#line 41
}
#line 41
# 104 "/opt/tinyos/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2On(void )
#line 104
{
  LedsP__Led2__clr();
  ;
#line 106
  ;
}

# 89 "/opt/tinyos/tos/interfaces/Leds.nc"
inline static void SnifferC__Leds__led2On(void ){
#line 89
  LedsP__Leds__led2On();
#line 89
}
#line 89
# 85 "SnifferC.nc"
static inline void SnifferC__PromiscuousMode__startDone(error_t error)
{

  SnifferC__Leds__led2On();
}

# 113 "/opt/tinyos/tos/interfaces/SplitControl.nc"
inline static void PromiscuousModeP__PromiscuousMode__startDone(error_t error){
#line 113
  SnifferC__PromiscuousMode__startDone(error);
#line 113
}
#line 113
# 96 "/opt/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline void PromiscuousModeP__signalStartDoneTask__runTask(void )
{
  PromiscuousModeP__m_state = PromiscuousModeP__S_STARTED;
  ;
  PromiscuousModeP__PromiscuousMode__startDone(SUCCESS);
}

# 296 "/opt/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline void IndirectTxP__tryCoordCapTx(void )
{


  uint8_t i;

#line 301
  if (IndirectTxP__m_pendingTxFrame == (void *)0 && IndirectTxP__m_numTableEntries) {
      for (i = 0; i < IndirectTxP__NUM_MAX_PENDING; i++) 
        if (IndirectTxP__m_txFrameTable[i] && IndirectTxP__m_txFrameTable[i]->client & IndirectTxP__SEND_THIS_FRAME) {
            IndirectTxP__m_pendingTxFrame = IndirectTxP__m_txFrameTable[i];
            IndirectTxP__m_client = IndirectTxP__m_txFrameTable[i]->client;
            if (IndirectTxP__CoordCapTx__transmit(IndirectTxP__m_txFrameTable[i]) == IEEE154_SUCCESS) {
                ;
              }
            else 
#line 308
              {
                IndirectTxP__m_pendingTxFrame = (void *)0;
                IndirectTxP__tryCoordCapTxTask__postTask();
              }
            return;
          }
    }
}

static inline void IndirectTxP__tryCoordCapTxTask__runTask(void )
{
  IndirectTxP__tryCoordCapTx();
}

# 62 "/opt/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static inline void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__resetTxDonePending(void )
#line 62
{
#line 62
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__m_state &= ~/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__TX_DONE_PENDING;
}

# 318 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macMaxFrameRetries_t PibP__MLME_GET__macMaxFrameRetries(void )
#line 318
{
#line 318
  return PibP__m_pib.macMaxFrameRetries;
}

# 147 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macMaxFrameRetries_t DispatchUnslottedCsmaP__MLME_GET__macMaxFrameRetries(void ){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = PibP__MLME_GET__macMaxFrameRetries();
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 381 "/opt/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline ieee154_txframe_t *IndirectTxP__GetIndirectTxFrame__get(void )
#line 381
{
#line 381
  return IndirectTxP__m_pendingTxFrame;
}

# 55 "/opt/tinyos/tos/interfaces/Get.nc"
inline static DispatchUnslottedCsmaP__GetIndirectTxFrame__val_t DispatchUnslottedCsmaP__GetIndirectTxFrame__get(void ){
#line 55
  struct __nesc_unnamed4272 *__nesc_result;
#line 55

#line 55
  __nesc_result = IndirectTxP__GetIndirectTxFrame__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 278 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macBattLifeExt_t PibP__MLME_GET__macBattLifeExt(void )
#line 278
{
#line 278
  return PibP__m_pib.macBattLifeExt;
}

# 84 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macBattLifeExt_t DispatchUnslottedCsmaP__MLME_GET__macBattLifeExt(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = PibP__MLME_GET__macBattLifeExt();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 298 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macMinBE_t PibP__MLME_GET__macMinBE(void )
#line 298
{
#line 298
  return PibP__m_pib.macMinBE;
}

# 117 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macMinBE_t DispatchUnslottedCsmaP__MLME_GET__macMinBE(void ){
#line 117
  unsigned char __nesc_result;
#line 117

#line 117
  __nesc_result = PibP__MLME_GET__macMinBE();
#line 117

#line 117
  return __nesc_result;
#line 117
}
#line 117
# 314 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macMaxBE_t PibP__MLME_GET__macMaxBE(void )
#line 314
{
#line 314
  return PibP__m_pib.macMaxBE;
}

# 141 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macMaxBE_t DispatchUnslottedCsmaP__MLME_GET__macMaxBE(void ){
#line 141
  unsigned char __nesc_result;
#line 141

#line 141
  __nesc_result = PibP__MLME_GET__macMaxBE();
#line 141

#line 141
  return __nesc_result;
#line 141
}
#line 141
# 296 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macMaxCSMABackoffs_t PibP__MLME_GET__macMaxCSMABackoffs(void )
#line 296
{
#line 296
  return PibP__m_pib.macMaxCSMABackoffs;
}

# 114 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macMaxCSMABackoffs_t DispatchUnslottedCsmaP__MLME_GET__macMaxCSMABackoffs(void ){
#line 114
  unsigned char __nesc_result;
#line 114

#line 114
  __nesc_result = PibP__MLME_GET__macMaxCSMABackoffs();
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 406 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_status_t PibP__MLME_SET__macBSN(ieee154_macBSN_t value)
#line 406
{
  PibP__m_pib.macBSN = value;
  PibP__PIBUpdate__notify(IEEE154_macBSN, & PibP__m_pib.macBSN);
  return IEEE154_SUCCESS;
}

# 103 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t DispatchUnslottedCsmaP__MLME_SET__macBSN(ieee154_macBSN_t value){
#line 103
  enum ieee154_status __nesc_result;
#line 103

#line 103
  __nesc_result = PibP__MLME_SET__macBSN(value);
#line 103

#line 103
  return __nesc_result;
#line 103
}
#line 103
# 286 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macBSN_t PibP__MLME_GET__macBSN(void )
#line 286
{
#line 286
  return PibP__m_pib.macBSN;
}

# 99 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macBSN_t DispatchUnslottedCsmaP__MLME_GET__macBSN(void ){
#line 99
  unsigned char __nesc_result;
#line 99

#line 99
  __nesc_result = PibP__MLME_GET__macBSN();
#line 99

#line 99
  return __nesc_result;
#line 99
}
#line 99
# 424 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_status_t PibP__MLME_SET__macDSN(ieee154_macDSN_t value)
#line 424
{
  PibP__m_pib.macDSN = value;
  PibP__PIBUpdate__notify(IEEE154_macDSN, & PibP__m_pib.macDSN);
  return IEEE154_SUCCESS;
}

# 118 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t DispatchUnslottedCsmaP__MLME_SET__macDSN(ieee154_macDSN_t value){
#line 118
  enum ieee154_status __nesc_result;
#line 118

#line 118
  __nesc_result = PibP__MLME_SET__macDSN(value);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 292 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macDSN_t PibP__MLME_GET__macDSN(void )
#line 292
{
#line 292
  return PibP__m_pib.macDSN;
}

# 108 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macDSN_t DispatchUnslottedCsmaP__MLME_GET__macDSN(void ){
#line 108
  unsigned char __nesc_result;
#line 108

#line 108
  __nesc_result = PibP__MLME_GET__macDSN();
#line 108

#line 108
  return __nesc_result;
#line 108
}
#line 108
# 206 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__setCurrentFrame(ieee154_txframe_t *frame)
{
  if (frame->header->mhr[MHR_INDEX_FC1] != FC1_FRAMETYPE_BEACON) {

      ieee154_macDSN_t dsn = DispatchUnslottedCsmaP__MLME_GET__macDSN();

#line 211
      frame->header->mhr[MHR_INDEX_SEQNO] = dsn++;
      DispatchUnslottedCsmaP__MLME_SET__macDSN(dsn);
    }
  else 
#line 213
    {

      ieee154_macBSN_t bsn = DispatchUnslottedCsmaP__MLME_GET__macBSN();

#line 216
      frame->header->mhr[MHR_INDEX_SEQNO] = bsn++;
      DispatchUnslottedCsmaP__MLME_SET__macBSN(bsn);
    }
  DispatchUnslottedCsmaP__m_csma.NB = 0;
  DispatchUnslottedCsmaP__m_csma.macMaxCsmaBackoffs = DispatchUnslottedCsmaP__m_macMaxCSMABackoffs = DispatchUnslottedCsmaP__MLME_GET__macMaxCSMABackoffs();
  DispatchUnslottedCsmaP__m_csma.macMaxBE = DispatchUnslottedCsmaP__m_macMaxBE = DispatchUnslottedCsmaP__MLME_GET__macMaxBE();
  DispatchUnslottedCsmaP__m_csma.BE = DispatchUnslottedCsmaP__MLME_GET__macMinBE();
  if (DispatchUnslottedCsmaP__MLME_GET__macBattLifeExt() && DispatchUnslottedCsmaP__m_csma.BE > 2) {
    DispatchUnslottedCsmaP__m_csma.BE = 2;
    }
#line 225
  DispatchUnslottedCsmaP__m_BE = DispatchUnslottedCsmaP__m_csma.BE;
  if (DispatchUnslottedCsmaP__GetIndirectTxFrame__get() == frame) {
    DispatchUnslottedCsmaP__m_macMaxFrameRetries = 0;
    }
  else {
#line 229
    DispatchUnslottedCsmaP__m_macMaxFrameRetries = DispatchUnslottedCsmaP__MLME_GET__macMaxFrameRetries();
    }
#line 230
  DispatchUnslottedCsmaP__m_transactionTime = IEEE154_SHR_DURATION + (
  frame->headerLen + frame->payloadLen + 2) * IEEE154_SYMBOLS_PER_OCTET;
  if (frame->header->mhr[MHR_INDEX_FC1] & FC1_ACK_REQUEST) {
    DispatchUnslottedCsmaP__m_transactionTime += IEEE154_aTurnaroundTime + IEEE154_aUnitBackoffPeriod + 
    11 * IEEE154_SYMBOLS_PER_OCTET;
    }



  DispatchUnslottedCsmaP__m_currentFrame = frame;
}

#line 185
static inline ieee154_status_t DispatchUnslottedCsmaP__FrameTx__transmit(ieee154_txframe_t *frame)
{
  if (DispatchUnslottedCsmaP__m_currentFrame != (void *)0) {

      ;
      return IEEE154_TRANSACTION_OVERFLOW;
    }
  else 
#line 191
    {
      DispatchUnslottedCsmaP__setCurrentFrame(frame);
      if (DispatchUnslottedCsmaP__RadioToken__isOwner()) {
        DispatchUnslottedCsmaP__updateState();
        }
      else {
#line 196
        DispatchUnslottedCsmaP__RadioToken__request();
        }
#line 197
      return IEEE154_SUCCESS;
    }
}

# 43 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static ieee154_status_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTxCsma__transmit(ieee154_txframe_t *txFrame){
#line 43
  enum ieee154_status __nesc_result;
#line 43

#line 43
  __nesc_result = DispatchUnslottedCsmaP__FrameTx__transmit(txFrame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 61 "/opt/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static inline void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__setTxDonePending(void )
#line 61
{
#line 61
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__m_state |= /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__TX_DONE_PENDING;
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 180 "/opt/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline void DataP__PurgeDirect__purgeDone(ieee154_txframe_t *data, ieee154_status_t status)
{
  DataP__finishTxTransaction(data, status);
}

# 37 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/Purge.nc"
inline static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Purge__purgeDone(ieee154_txframe_t *txFrame, ieee154_status_t status){
#line 37
  DataP__PurgeDirect__purgeDone(txFrame, status);
#line 37
}
#line 37
# 65 "/opt/tinyos/tos/system/QueueC.nc"
static inline /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__head(void )
#line 65
{
  return /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue[/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__head];
}

# 73 "/opt/tinyos/tos/interfaces/Queue.nc"
inline static /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__t  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__head(void ){
#line 73
  struct __nesc_unnamed4272 *__nesc_result;
#line 73

#line 73
  __nesc_result = /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 60 "/opt/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static inline bool /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__isTxDonePending(void )
#line 60
{
#line 60
  return /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__m_state & /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__TX_DONE_PENDING ? TRUE : FALSE;
}

#line 90
static inline void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask__runTask(void )
{
  if (!/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__isTxDonePending() && /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__size()) {
      ieee154_txframe_t *txFrame = /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__head();

#line 94
      if (txFrame->headerLen == 0) {

          /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__dequeue();
          /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Purge__purgeDone(txFrame, IEEE154_SUCCESS);
          /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask__postTask();
        }
      /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__m_client = txFrame->client;
      /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__setTxDonePending();
      if (/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTxCsma__transmit(txFrame) != IEEE154_SUCCESS) {
        /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__resetTxDonePending();
        }
    }
}

# 528 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__MLME_START__default__confirm(ieee154_status_t status)
#line 528
{
}

# 111 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_START.nc"
inline static void DispatchUnslottedCsmaP__MLME_START__confirm(ieee154_status_t status){
#line 111
  DispatchUnslottedCsmaP__MLME_START__default__confirm(status);
#line 111
}
#line 111
# 180 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__signalStartConfirmTask__runTask(void )
{
  DispatchUnslottedCsmaP__MLME_START__confirm(IEEE154_SUCCESS);
}

# 316 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macMaxFrameTotalWaitTime_t PibP__MLME_GET__macMaxFrameTotalWaitTime(void )
#line 316
{
#line 316
  return PibP__m_pib.macMaxFrameTotalWaitTime;
}

# 144 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macMaxFrameTotalWaitTime_t DispatchUnslottedCsmaP__MLME_GET__macMaxFrameTotalWaitTime(void ){
#line 144
  unsigned long __nesc_result;
#line 144

#line 144
  __nesc_result = PibP__MLME_GET__macMaxFrameTotalWaitTime();
#line 144

#line 144
  return __nesc_result;
#line 144
}
#line 144
# 73 "/opt/tinyos/tos/lib/timer/Timer.nc"
inline static void DispatchUnslottedCsmaP__IndirectTxWaitTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(3U, dt);
#line 73
}
#line 73
# 403 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__startIndirectTxTimerTask__runTask(void )
{
  DispatchUnslottedCsmaP__IndirectTxWaitTimer__startOneShot(DispatchUnslottedCsmaP__MLME_GET__macMaxFrameTotalWaitTime());
}

# 81 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoRxEnableP.nc"
static inline void NoRxEnableP__WasRxEnabled__notify(bool val)
#line 81
{
}

# 74 "/opt/tinyos/tos/interfaces/Notify.nc"
inline static void DispatchUnslottedCsmaP__WasRxEnabled__notify(DispatchUnslottedCsmaP__WasRxEnabled__val_t val){
#line 74
  NoRxEnableP__WasRxEnabled__notify(val);
#line 74
}
#line 74
# 514 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__wasRxEnabledTask__runTask(void )
{
  DispatchUnslottedCsmaP__WasRxEnabled__notify(TRUE);
}

# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static void DispatchUnslottedCsmaP__FrameTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status){
#line 51
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTxCsma__transmitDone(txFrame, status);
#line 51
}
#line 51
# 471 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__signalTxDoneTask__runTask(void )
{
  ieee154_txframe_t *lastFrame = DispatchUnslottedCsmaP__m_lastFrame;
  ieee154_status_t status = DispatchUnslottedCsmaP__m_txStatus;

#line 475
  DispatchUnslottedCsmaP__m_indirectTxPending = FALSE;
  DispatchUnslottedCsmaP__m_lastFrame = (void *)0;
  if (lastFrame) {
      ;

      DispatchUnslottedCsmaP__FrameTx__transmitDone(lastFrame, status);
    }
  DispatchUnslottedCsmaP__updateState();
}

# 87 "/opt/tinyos/tos/lib/mac/tkn154/dummies/NoScanP.nc"
static inline void NoScanP__RadioToken__granted(void )
{
  while (!0) {
#line 89
      break;
    }
#line 89
  ;
}

# 201 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__RadioToken__granted(void )
{
  DispatchUnslottedCsmaP__updateState();
}

# 47 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static error_t PromiscuousModeP__RadioOff__off(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = RadioControlImplP__MacRadioOff__off(2);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
#line 60
inline static bool PromiscuousModeP__RadioOff__isOff(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = RadioControlImplP__MacRadioOff__isOff(2);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 87 "/opt/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline void PromiscuousModeP__RadioToken__granted(void )
{
  PromiscuousModeP__RadioPromiscuousMode__set(TRUE);
  if (PromiscuousModeP__RadioOff__isOff()) {
    PromiscuousModeP__RadioOff__offDone();
    }
  else {
#line 93
    PromiscuousModeP__RadioOff__off();
    }
}

# 47 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static error_t PibP__RadioOff__off(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = RadioControlImplP__MacRadioOff__off(1);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 187 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__RadioToken__granted(void )
{
  if (PibP__RadioOff__off() != SUCCESS) {
    PibP__RadioOff__offDone();
    }
}

# 179 "/opt/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__default__granted(uint8_t id)
#line 179
{
}

# 98 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__granted(uint8_t arg_0x40b2be70){
#line 98
  switch (arg_0x40b2be70) {
#line 98
    case 0:
#line 98
      NoScanP__RadioToken__granted();
#line 98
      break;
#line 98
    case 1:
#line 98
      PibP__RadioToken__granted();
#line 98
      break;
#line 98
    case 2:
#line 98
      PromiscuousModeP__RadioToken__granted();
#line 98
      break;
#line 98
    case 12U:
#line 98
      DispatchUnslottedCsmaP__RadioToken__granted();
#line 98
      break;
#line 98
    default:
#line 98
      /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__default__granted(arg_0x40b2be70);
#line 98
      break;
#line 98
    }
#line 98
}
#line 98
# 185 "/opt/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 185
{
}

# 59 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x40b3f7a8){
#line 59
    /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__configure(arg_0x40b3f7a8);
#line 59
}
#line 59
# 169 "/opt/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__runTask(void )
#line 169
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 170
    {
      /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__reqResId;
      /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_BUSY;
    }
#line 173
    __nesc_atomic_end(__nesc_atomic); }
  /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__configure(/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId);
  /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__granted(/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId);
}

# 136 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline error_t CC2420TKN154P__SplitControl__start(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 138
    {
      if (CC2420TKN154P__m_state == CC2420TKN154P__S_RADIO_OFF) 
        {
          unsigned char __nesc_temp = 
#line 140
          EALREADY;

          {
#line 140
            __nesc_atomic_end(__nesc_atomic); 
#line 140
            return __nesc_temp;
          }
        }
      else {
#line 141
        if (CC2420TKN154P__m_state != CC2420TKN154P__S_STOPPED) 
          {
            unsigned char __nesc_temp = 
#line 142
            FAIL;

            {
#line 142
              __nesc_atomic_end(__nesc_atomic); 
#line 142
              return __nesc_temp;
            }
          }
        }
#line 143
      CC2420TKN154P__m_state = CC2420TKN154P__S_STARTING;
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  CC2420TKN154P__SpiResource__request();
  return SUCCESS;
}

# 104 "/opt/tinyos/tos/interfaces/SplitControl.nc"
inline static error_t PibP__RadioControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = CC2420TKN154P__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t PibP__resetSpinTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PibP__resetSpinTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 222 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__resetSpinTask__runTask(void )
{
  PibP__m_resetSpin -= 1;
  if (PibP__m_resetSpin != 0) {
      PibP__resetSpinTask__postTask();
      return;
    }
  while (!(PibP__RadioControl__start() == SUCCESS)) {
#line 229
      break;
    }
#line 229
  ;
}

# 180 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline error_t CC2420TKN154P__SplitControl__stop(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 182
    {
      if (CC2420TKN154P__m_state == CC2420TKN154P__S_STOPPED) 
        {
          unsigned char __nesc_temp = 
#line 184
          EALREADY;

          {
#line 184
            __nesc_atomic_end(__nesc_atomic); 
#line 184
            return __nesc_temp;
          }
        }
      else {
#line 185
        if (CC2420TKN154P__m_state != CC2420TKN154P__S_RADIO_OFF) 
          {
            unsigned char __nesc_temp = 
#line 186
            FAIL;

            {
#line 186
              __nesc_atomic_end(__nesc_atomic); 
#line 186
              return __nesc_temp;
            }
          }
        }
#line 187
      CC2420TKN154P__m_state = CC2420TKN154P__S_STOPPING;
    }
#line 188
    __nesc_atomic_end(__nesc_atomic); }
  CC2420TKN154P__SpiResource__request();
  return SUCCESS;
}

# 130 "/opt/tinyos/tos/interfaces/SplitControl.nc"
inline static error_t PibP__RadioControl__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = CC2420TKN154P__SplitControl__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 198 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__radioControlStopTask__runTask(void )
{
  error_t result = PibP__RadioControl__stop();

#line 201
  if (result == EALREADY) {
    PibP__RadioControl__stopDone(SUCCESS);
    }
  else {
#line 204
    while (!(result == SUCCESS)) {
#line 204
        break;
      }
    }
#line 204
  ;
}

# 363 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_hton_leuint32(void * target, uint32_t value)
#line 363
{
  uint8_t *base = target;

#line 365
  base[0] = value;
  base[1] = value >> 8;
  base[2] = value >> 16;
  base[3] = value >> 24;
  return value;
}

#line 297
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 297
{
  uint8_t *base = target;

#line 299
  base[0] = value;
  return value;
}

static __inline  int8_t __nesc_hton_leint8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_leuint8(target, value);
#line 303
  return value;
}

#line 303
static __inline  int8_t __nesc_ntoh_int8(const void * source)
#line 303
{
#line 303
  return __nesc_ntoh_uint8(source);
}

# 538 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__startSend(uint8_t b)
#line 538
{
  bool not_busy = FALSE;

#line 540
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 540
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 542
          EOFF;

          {
#line 542
            __nesc_atomic_end(__nesc_atomic); 
#line 542
            return __nesc_temp;
          }
        }
    }
#line 545
    __nesc_atomic_end(__nesc_atomic); }
#line 544
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 544
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 550
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 62 "/opt/tinyos/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = SerialP__SendBytePacket__startSend(first_byte);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 183 "SnifferC.nc"
static inline uint8_t SnifferC__SerialPacketInfo__dataLinkLength(message_t *frame, uint8_t upperLen)
{

  uint8_t length = *((uint8_t *)frame + SnifferC__SerialPacketInfo__offset());

#line 187
  return 1 + length + sizeof(sniffer_metadata_t );
}

# 361 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 362
{
  return 0;
}

# 23 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x41541b10, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x41541b10) {
#line 23
    case TOS_SERIAL_802_15_4_ID:
#line 23
      __nesc_result = SnifferC__SerialPacketInfo__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x41541b10, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 111 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
#line 111
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 119
            ESIZE;

            {
#line 119
              __nesc_atomic_end(__nesc_atomic); 
#line 119
              return __nesc_temp;
            }
          }
        }
#line 122
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

# 75 "/opt/tinyos/tos/interfaces/Send.nc"
inline static error_t SnifferC__SerialSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_802_15_4_ID, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 256 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_phyCurrentChannel_t PibP__MLME_GET__phyCurrentChannel(void )
#line 256
{
#line 256
  return PibP__m_pib.phyCurrentChannel;
}

# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_phyCurrentChannel_t SnifferC__MLME_GET__phyCurrentChannel(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = PibP__MLME_GET__phyCurrentChannel();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 736 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void *PibP__Frame__getPayload(message_t *frame)
{
  uint8_t *payload = (uint8_t *)frame->data;

#line 739
  return payload;
}

# 152 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static void *SnifferC__Frame__getPayload(message_t *frame){
#line 152
  void *__nesc_result;
#line 152

#line 152
  __nesc_result = PibP__Frame__getPayload(frame);
#line 152

#line 152
  return __nesc_result;
#line 152
}
#line 152
# 722 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void *PibP__Frame__getHeader(message_t *frame)
{
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;

#line 725
  return (void *)&mhr[MHR_INDEX_FC1];
}

# 233 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static void *SnifferC__Frame__getHeader(message_t *frame){
#line 233
  void *__nesc_result;
#line 233

#line 233
  __nesc_result = PibP__Frame__getHeader(frame);
#line 233

#line 233
  return __nesc_result;
#line 233
}
#line 233
# 742 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline uint8_t PibP__Frame__getPayloadLength(message_t *frame)
{
  uint8_t len = ((ieee154_header_t *)frame->header)->length & FRAMECTL_LENGTH_MASK;

#line 745
  return len;
}

# 160 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static uint8_t SnifferC__Frame__getPayloadLength(message_t *frame){
#line 160
  unsigned char __nesc_result;
#line 160

#line 160
  __nesc_result = PibP__Frame__getPayloadLength(frame);
#line 160

#line 160
  return __nesc_result;
#line 160
}
#line 160
#line 241
inline static uint8_t SnifferC__Frame__getHeaderLength(message_t *frame){
#line 241
  unsigned char __nesc_result;
#line 241

#line 241
  __nesc_result = PibP__Frame__getHeaderLength(frame);
#line 241

#line 241
  return __nesc_result;
#line 241
}
#line 241
# 73 "/opt/tinyos/tos/interfaces/Queue.nc"
inline static SnifferC__Queue__t  SnifferC__Queue__head(void ){
#line 73
  nx_struct message_t *__nesc_result;
#line 73

#line 73
  __nesc_result = /*SnifferAppC.QueueC*/QueueC__1__Queue__head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 105 "SnifferC.nc"
static inline void SnifferC__serialSendTask__runTask(void )
{
  message_t *frame;
  sniffer_metadata_t *snifferMetadata;
  uint8_t headerLen;
  uint8_t payloadLen;
  uint8_t serialLen;
  ieee154_metadata_t *radioMetadata;
  uint8_t rssi;
#line 113
  uint8_t lqi;
  uint8_t *header;
  uint32_t timestamp;
  uint8_t *phyLenField;

  if (SnifferC__Queue__empty() || SnifferC__m_serialSendBusy) {
    return;
    }
#line 120
  frame = SnifferC__Queue__head();
  radioMetadata = (ieee154_metadata_t *)& frame->metadata;
  rssi = __nesc_ntoh_int8(radioMetadata->rssi.nxdata);
  lqi = __nesc_ntoh_uint8(radioMetadata->linkQuality.nxdata);
  timestamp = __nesc_ntoh_uint32(radioMetadata->timestamp.nxdata);
  headerLen = SnifferC__Frame__getHeaderLength(frame);
  payloadLen = SnifferC__Frame__getPayloadLength(frame);
  header = SnifferC__Frame__getHeader(frame);



  phyLenField = (uint8_t *)frame + SnifferC__SerialPacketInfo__offset();
  *phyLenField = headerLen + payloadLen;




  memmove(header + headerLen, SnifferC__Frame__getPayload(frame), payloadLen);

  snifferMetadata = (sniffer_metadata_t *)(header + headerLen + payloadLen);
  if ((uint8_t *)snifferMetadata + sizeof(sniffer_metadata_t ) > 
  (uint8_t *)frame + sizeof(message_t )) {


      SnifferC__Leds__led0On();
      return;
    }
  __nesc_hton_leuint8(snifferMetadata->lqi.nxdata, lqi);
  __nesc_hton_leint8(snifferMetadata->rssi.nxdata, rssi - 45);




  __nesc_hton_leuint8(snifferMetadata->crc.nxdata, 1);
  __nesc_hton_leuint8(snifferMetadata->mhrLen.nxdata, headerLen);
  __nesc_hton_leuint8(snifferMetadata->channel.nxdata, SnifferC__MLME_GET__phyCurrentChannel());
  __nesc_hton_leuint32(snifferMetadata->timestamp.nxdata, timestamp);

  serialLen = 1 + 
  headerLen + payloadLen + sizeof(sniffer_metadata_t );
  SnifferC__m_serialSendBusy = TRUE;
  if (SnifferC__SerialSend__send(frame, serialLen) != SUCCESS) {
    SnifferC__Leds__led0On();
    }
}

# 46 "/opt/tinyos/tos/interfaces/Random.nc"
inline static uint32_t PibP__Random__rand32(void ){
#line 46
  unsigned long __nesc_result;
#line 46

#line 46
  __nesc_result = RandomMlcgC__Random__rand32();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 96 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline error_t PibP__LocalInit__init(void )
{

  PibP__m_aExtendedAddressLE = ((uint64_t )PibP__Random__rand32() << 32) | PibP__Random__rand32();

  PibP__resetAttributesToDefault();
  return SUCCESS;
}

# 61 "/opt/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__Init__init(void )
#line 61
{
  memset(/*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ, 0, sizeof /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ);
  return SUCCESS;
}

# 65 "/opt/tinyos/tos/system/PoolP.nc"
static inline error_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 4; i++) {
      /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__queue[i] = &/*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool[i];
    }
  /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__free = 4;
  /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__index = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 3; i++) {
      /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__queue[i] = &/*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool[i];
    }
  /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__free = 3;
  /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__index = 0;
  return SUCCESS;
}

# 61 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )30U &= ~(0x01 << 1);
}

# 78 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput();
#line 78
}
#line 78
# 52 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput(void )
#line 52
{
#line 52
  /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__makeInput();
}

# 44 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__SFD__makeInput(void ){
#line 44
  /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput();
#line 44
}
#line 44
# 63 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 2;
}

# 85 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput();
#line 85
}
#line 85
# 54 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__makeOutput();
}

# 46 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )34U &= ~(0x01 << 4);
}

# 78 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput();
#line 78
}
#line 78
# 52 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput(void )
#line 52
{
#line 52
  /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__makeInput();
}

# 44 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CCA__makeInput(void ){
#line 44
  /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput();
#line 44
}
#line 44
# 122 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__Init__init(void )
#line 122
{
  CC2420TransmitP__CCA__makeInput();
  CC2420TransmitP__CSN__makeOutput();
  CC2420TransmitP__SFD__makeInput();
  return SUCCESS;
}

# 63 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 5;
}

# 85 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput();
#line 85
}
#line 85
# 54 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__makeOutput();
}

# 46 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 6;
}

# 85 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput();
#line 85
}
#line 85
# 54 "/opt/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__makeOutput();
}

# 46 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput();
#line 46
}
#line 46
inline static void CC2420ControlP__CSN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput();
#line 46
}
#line 46
# 113 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Init__init(void )
#line 113
{
  CC2420ControlP__CSN__makeOutput();
  CC2420ControlP__RSTN__makeOutput();
  CC2420ControlP__VREN__makeOutput();





  CC2420ControlP__addressRecognition = TRUE;






  CC2420ControlP__autoAckEnabled = TRUE;


  CC2420ControlP__hwAutoAckDefault = TRUE;
  CC2420ControlP__acceptReservedFrames = FALSE;
  CC2420ControlP__m_needsSync = FALSE;
  return SUCCESS;
}

# 81 "/opt/tinyos/tos/system/StateImplP.nc"
static inline error_t StateImplP__Init__init(void )
#line 81
{
  int i;

#line 83
  for (i = 0; i < 1U; i++) {
      StateImplP__state[i] = StateImplP__S_IDLE;
    }
  return SUCCESS;
}

# 55 "/opt/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 126 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__Init__init(void )
#line 126
{
  CC2420ReceiveP__m_rxFramePtr = &CC2420ReceiveP__m_frame;
  /* atomic removed: atomic calls only */
#line 128
  CC2420ReceiveP__m_state = CC2420ReceiveP__S_STOPPED;
  return SUCCESS;
}

# 57 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4416 {
#line 57
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(x);
}

#line 105
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void )
{
  * (volatile uint16_t * )386U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl();
}

# 47 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare();
#line 47
}
#line 47
# 53 "/opt/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Init__init(void )
{
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

# 82 "/opt/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static inline error_t /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Init__init(void )
#line 82
{
  memset(&/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m, 0, sizeof /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m);
  return SUCCESS;
}

# 57 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4417 {
#line 57
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(x);
}

#line 105
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void )
{
  * (volatile uint16_t * )390U = /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl();
}

# 47 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare();
#line 47
}
#line 47
# 53 "/opt/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Init__init(void )
{
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

# 57 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__CC2int(/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6____nesc_unnamed4418 {
#line 57
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__CC2int(x);
}

#line 105
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__setControlAsCompare(void )
{
  * (volatile uint16_t * )392U = /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__compareControl();
}

# 47 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__setControlAsCompare(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__setControlAsCompare();
#line 47
}
#line 47
# 53 "/opt/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Init__init(void )
{
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents();
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

# 55 "/opt/tinyos/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 216 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static __inline void SerialP__ackInit(void )
#line 216
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

#line 207
static __inline void SerialP__rxInit(void )
#line 207
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_INACTIVE;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

#line 195
static __inline void SerialP__txInit(void )
#line 195
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 197
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_INACTIVE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

#line 220
static inline error_t SerialP__Init__init(void )
#line 220
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

  return SUCCESS;
}

# 55 "/opt/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init(void )
#line 55
{
  memset(/*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ, /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY, sizeof /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ);
  return SUCCESS;
}

# 65 "/opt/tinyos/tos/system/PoolP.nc"
static inline error_t /*SnifferAppC.PoolC.PoolP*/PoolP__2__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 10; i++) {
      /*SnifferAppC.PoolC.PoolP*/PoolP__2__queue[i] = &/*SnifferAppC.PoolC.PoolP*/PoolP__2__pool[i];
    }
  /*SnifferAppC.PoolC.PoolP*/PoolP__2__free = 10;
  /*SnifferAppC.PoolC.PoolP*/PoolP__2__index = 0;
  return SUCCESS;
}

# 62 "/opt/tinyos/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*SnifferAppC.PoolC.PoolP*/PoolP__2__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, StateImplP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420ControlP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420TransmitP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PibP__LocalInit__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 348 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SplitControl__start(void )
#line 348
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP__txState != SerialP__TXSTATE_INACTIVE && SerialP__rxState != SerialP__RXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 351
          EALREADY;

          {
#line 351
            __nesc_atomic_end(__nesc_atomic); 
#line 351
            return __nesc_temp;
          }
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
#line 353
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

# 104 "/opt/tinyos/tos/interfaces/SplitControl.nc"
inline static error_t SnifferC__SerialControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = SerialP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 65 "/opt/tinyos/tos/interfaces/Queue.nc"
inline static uint8_t SnifferC__Queue__maxSize(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*SnifferAppC.QueueC*/QueueC__1__Queue__maxSize();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 84 "/opt/tinyos/tos/system/PoolP.nc"
static inline uint8_t /*SnifferAppC.PoolC.PoolP*/PoolP__2__Pool__maxSize(void )
#line 84
{
  return 10;
}

# 80 "/opt/tinyos/tos/interfaces/Pool.nc"
inline static uint8_t SnifferC__Pool__maxSize(void ){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SnifferAppC.PoolC.PoolP*/PoolP__2__Pool__maxSize();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 60 "SnifferC.nc"
static inline void SnifferC__Boot__booted(void )
#line 60
{
  SnifferC__m_serialSendBusy = FALSE;
  if (SnifferC__Pool__maxSize() != SnifferC__Queue__maxSize() || 
  SnifferC__SerialControl__start() != SUCCESS) {
    SnifferC__Leds__led0On();
    }
}

# 60 "/opt/tinyos/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  SnifferC__Boot__booted();
#line 60
}
#line 60
# 391 "/opt/tinyos/tos/chips/msp430/msp430hardware.h"
static inline  void __nesc_disable_interrupt(void )
{
  __dint();
  __nop();
}

# 63 "/opt/tinyos/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void )
#line 63
{
  return MSP430_POWER_LPM3;
}

# 62 "/opt/tinyos/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Msp430ClockP__McuPowerOverride__lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 74 "/opt/tinyos/tos/chips/msp430/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 74
{
  mcu_power_t pState = MSP430_POWER_LPM4;









  if ((((((
#line 77
  TACCTL0 & 0x0010 || 
  TACCTL1 & 0x0010) || 
  TACCTL2 & 0x0010) && (
  TACTL & 0x0300) == 0x0200) || (
  ME1 & (0x80 | 0x40) && U0TCTL & 0x20)) || (
  ME2 & (0x20 | 0x10) && U1TCTL & 0x20))


   || (U0CTLnr & 0x01 && I2CTCTLnr & 0x20 && 
  I2CDCTLnr & 0x20 && U0CTLnr & 0x04 && U0CTLnr & 0x20)) {


    pState = MSP430_POWER_LPM1;
    }


  if (ADC12CTL0 & 0x010) {
      if (ADC12CTL1 & 0x0010) {

          if (ADC12CTL1 & 0x0008) {
            pState = MSP430_POWER_LPM1;
            }
          else {
#line 99
            pState = MSP430_POWER_ACTIVE;
            }
        }
      else {
#line 100
        if (ADC12CTL1 & 0x0400 && (TACTL & 0x0300) == 0x0200) {



            pState = MSP430_POWER_LPM1;
          }
        }
    }

  return pState;
}

# 379 "/opt/tinyos/tos/chips/msp430/msp430hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 379
{
  return m1 < m2 ? m1 : m2;
}

# 112 "/opt/tinyos/tos/chips/msp430/McuSleepC.nc"
static inline void McuSleepC__computePowerState(void )
#line 112
{
  McuSleepC__powerState = mcombine(McuSleepC__getPowerState(), 
  McuSleepC__McuPowerOverride__lowestState());
}

static inline void McuSleepC__McuSleep__sleep(void )
#line 117
{
  uint16_t temp;

#line 119
  if (McuSleepC__dirty) {
      McuSleepC__computePowerState();
    }

  temp = McuSleepC__msp430PowerBits[McuSleepC__powerState] | 0x0008;
   __asm volatile ("bis  %0, r2" :  : "m"(temp));

   __asm volatile ("" :  :  : "memory");
  __nesc_disable_interrupt();
}

# 76 "/opt/tinyos/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/opt/tinyos/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/opt/tinyos/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 233 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__InterruptFIFOP__fired(void )
#line 233
{
  /* atomic removed: atomic calls only */
#line 234
  {
    if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STARTED) {
        CC2420ReceiveP__beginReceive();
      }
    else {
        CC2420ReceiveP__m_missed_packets++;
      }
  }
}

# 68 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired(void ){
#line 68
  CC2420ReceiveP__InterruptFIFOP__fired();
#line 68
}
#line 68
# 77 "/opt/tinyos/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void )
#line 77
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear();
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired();
}

# 72 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port10__fired(void ){
#line 72
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired();
#line 72
}
#line 72
# 103 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port11__clear(void )
#line 103
{
#line 103
  P1IFG &= ~(1 << 1);
}

#line 79
static inline void HplMsp430InterruptP__Port11__default__fired(void )
#line 79
{
#line 79
  HplMsp430InterruptP__Port11__clear();
}

# 72 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port11__fired(void ){
#line 72
  HplMsp430InterruptP__Port11__default__fired();
#line 72
}
#line 72
# 104 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port12__clear(void )
#line 104
{
#line 104
  P1IFG &= ~(1 << 2);
}

#line 80
static inline void HplMsp430InterruptP__Port12__default__fired(void )
#line 80
{
#line 80
  HplMsp430InterruptP__Port12__clear();
}

# 72 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port12__fired(void ){
#line 72
  HplMsp430InterruptP__Port12__default__fired();
#line 72
}
#line 72
# 105 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port13__clear(void )
#line 105
{
#line 105
  P1IFG &= ~(1 << 3);
}

#line 81
static inline void HplMsp430InterruptP__Port13__default__fired(void )
#line 81
{
#line 81
  HplMsp430InterruptP__Port13__clear();
}

# 72 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port13__fired(void ){
#line 72
  HplMsp430InterruptP__Port13__default__fired();
#line 72
}
#line 72
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420TKN154P__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420TKN154P__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 160 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__CC2420Power__startOscillatorDone(void )
{
  CC2420TKN154P__CC2420Power__rfOff();
  CC2420TKN154P__CC2420Power__flushRxFifo();
  CC2420TKN154P__CC2420Tx__unlockChipSpi();
  CC2420TKN154P__startDoneTask__postTask();
}

# 77 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startOscillatorDone(void ){
#line 77
  CC2420TKN154P__CC2420Power__startOscillatorDone();
#line 77
}
#line 77
# 61 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 446 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__InterruptCCA__fired(void )
#line 446
{
  CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTED;
  CC2420ControlP__InterruptCCA__disable();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__IOCFG1__write(0);
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CC2420Power__startOscillatorDone();
}

# 68 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired(void ){
#line 68
  CC2420ControlP__InterruptCCA__fired();
#line 68
}
#line 68
# 77 "/opt/tinyos/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void )
#line 77
{
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear();
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired();
}

# 72 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port14__fired(void ){
#line 72
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired();
#line 72
}
#line 72
# 107 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port15__clear(void )
#line 107
{
#line 107
  P1IFG &= ~(1 << 5);
}

#line 83
static inline void HplMsp430InterruptP__Port15__default__fired(void )
#line 83
{
#line 83
  HplMsp430InterruptP__Port15__clear();
}

# 72 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port15__fired(void ){
#line 72
  HplMsp430InterruptP__Port15__default__fired();
#line 72
}
#line 72
# 108 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port16__clear(void )
#line 108
{
#line 108
  P1IFG &= ~(1 << 6);
}

#line 84
static inline void HplMsp430InterruptP__Port16__default__fired(void )
#line 84
{
#line 84
  HplMsp430InterruptP__Port16__clear();
}

# 72 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port16__fired(void ){
#line 72
  HplMsp430InterruptP__Port16__default__fired();
#line 72
}
#line 72
# 109 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port17__clear(void )
#line 109
{
#line 109
  P1IFG &= ~(1 << 7);
}

#line 85
static inline void HplMsp430InterruptP__Port17__default__fired(void )
#line 85
{
#line 85
  HplMsp430InterruptP__Port17__clear();
}

# 72 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port17__fired(void ){
#line 72
  HplMsp430InterruptP__Port17__default__fired();
#line 72
}
#line 72
# 206 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port20__clear(void )
#line 206
{
#line 206
  P2IFG &= ~(1 << 0);
}

#line 182
static inline void HplMsp430InterruptP__Port20__default__fired(void )
#line 182
{
#line 182
  HplMsp430InterruptP__Port20__clear();
}

# 72 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port20__fired(void ){
#line 72
  HplMsp430InterruptP__Port20__default__fired();
#line 72
}
#line 72
# 207 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port21__clear(void )
#line 207
{
#line 207
  P2IFG &= ~(1 << 1);
}

#line 183
static inline void HplMsp430InterruptP__Port21__default__fired(void )
#line 183
{
#line 183
  HplMsp430InterruptP__Port21__clear();
}

# 72 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port21__fired(void ){
#line 72
  HplMsp430InterruptP__Port21__default__fired();
#line 72
}
#line 72
# 208 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port22__clear(void )
#line 208
{
#line 208
  P2IFG &= ~(1 << 2);
}

#line 184
static inline void HplMsp430InterruptP__Port22__default__fired(void )
#line 184
{
#line 184
  HplMsp430InterruptP__Port22__clear();
}

# 72 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port22__fired(void ){
#line 72
  HplMsp430InterruptP__Port22__default__fired();
#line 72
}
#line 72
# 209 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port23__clear(void )
#line 209
{
#line 209
  P2IFG &= ~(1 << 3);
}

#line 185
static inline void HplMsp430InterruptP__Port23__default__fired(void )
#line 185
{
#line 185
  HplMsp430InterruptP__Port23__clear();
}

# 72 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port23__fired(void ){
#line 72
  HplMsp430InterruptP__Port23__default__fired();
#line 72
}
#line 72
# 210 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port24__clear(void )
#line 210
{
#line 210
  P2IFG &= ~(1 << 4);
}

#line 186
static inline void HplMsp430InterruptP__Port24__default__fired(void )
#line 186
{
#line 186
  HplMsp430InterruptP__Port24__clear();
}

# 72 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port24__fired(void ){
#line 72
  HplMsp430InterruptP__Port24__default__fired();
#line 72
}
#line 72
# 211 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port25__clear(void )
#line 211
{
#line 211
  P2IFG &= ~(1 << 5);
}

#line 187
static inline void HplMsp430InterruptP__Port25__default__fired(void )
#line 187
{
#line 187
  HplMsp430InterruptP__Port25__clear();
}

# 72 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port25__fired(void ){
#line 72
  HplMsp430InterruptP__Port25__default__fired();
#line 72
}
#line 72
# 212 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port26__clear(void )
#line 212
{
#line 212
  P2IFG &= ~(1 << 6);
}

#line 188
static inline void HplMsp430InterruptP__Port26__default__fired(void )
#line 188
{
#line 188
  HplMsp430InterruptP__Port26__clear();
}

# 72 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port26__fired(void ){
#line 72
  HplMsp430InterruptP__Port26__default__fired();
#line 72
}
#line 72
# 213 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port27__clear(void )
#line 213
{
#line 213
  P2IFG &= ~(1 << 7);
}

#line 189
static inline void HplMsp430InterruptP__Port27__default__fired(void )
#line 189
{
#line 189
  HplMsp430InterruptP__Port27__clear();
}

# 72 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port27__fired(void ){
#line 72
  HplMsp430InterruptP__Port27__default__fired();
#line 72
}
#line 72
# 98 "/opt/tinyos/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 349 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__disableRxIntr(void )
#line 349
{
  HplMsp430Usart0P__IE1 &= ~0x40;
}

# 177 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableRxIntr(void ){
#line 177
  HplMsp430Usart0P__Usart__disableRxIntr();
#line 177
}
#line 177
# 231 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(uint8_t data)
#line 231
{

  if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf) {
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos - 1] = data;
    }
  if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos < /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len) {
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp();
    }
  else 
#line 238
    {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableRxIntr();
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone();
    }
}

# 65 "/opt/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data)
#line 65
{
}

# 54 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(uint8_t arg_0x4117b200, uint8_t data){
#line 54
  switch (arg_0x4117b200) {
#line 54
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 54
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(data);
#line 54
      break;
#line 54
    default:
#line 54
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(arg_0x4117b200, data);
#line 54
      break;
#line 54
    }
#line 54
}
#line 54
# 90 "/opt/tinyos/tos/interfaces/ArbiterInfo.nc"
inline static bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 54 "/opt/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data)
#line 54
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(), data);
    }
}

# 54 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart0P__Interrupts__rxDone(uint8_t data){
#line 54
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(data);
#line 54
}
#line 54
# 55 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430I2C0P.nc"
static inline bool HplMsp430I2C0P__HplI2C__isI2C(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  {
    unsigned char __nesc_temp = 
#line 56
    HplMsp430I2C0P__U0CTL & 0x20 && HplMsp430I2C0P__U0CTL & 0x04 && HplMsp430I2C0P__U0CTL & 0x01;

#line 56
    return __nesc_temp;
  }
}

# 6 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static bool HplMsp430Usart0P__HplI2C__isI2C(void ){
#line 6
  unsigned char __nesc_result;
#line 6

#line 6
  __nesc_result = HplMsp430I2C0P__HplI2C__isI2C();
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6
# 66 "/opt/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(uint8_t id)
#line 66
{
}

# 39 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(uint8_t arg_0x4117ba80){
#line 39
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(arg_0x4117ba80);
#line 39
}
#line 39
# 59 "/opt/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void )
#line 59
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId());
    }
}

# 39 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
inline static void HplMsp430Usart0P__I2CInterrupts__fired(void ){
#line 39
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired();
#line 39
}
#line 39
# 249 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone(void )
#line 249
{
}

# 64 "/opt/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(uint8_t id)
#line 64
{
}

# 49 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(uint8_t arg_0x4117b200){
#line 49
  switch (arg_0x4117b200) {
#line 49
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 49
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone();
#line 49
      break;
#line 49
    default:
#line 49
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(arg_0x4117b200);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 49 "/opt/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void )
#line 49
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId());
    }
}

# 49 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart0P__Interrupts__txDone(void ){
#line 49
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone();
#line 49
}
#line 49
# 98 "/opt/tinyos/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 397 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
#line 397
{
  SerialP__rx_state_machine(FALSE, data);
}

# 94 "/opt/tinyos/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
#line 94
  SerialP__SerialFrameComm__dataReceived(data);
#line 94
}
#line 94
# 394 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
#line 394
{
  SerialP__rx_state_machine(TRUE, 0);
}

# 85 "/opt/tinyos/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
#line 85
  SerialP__SerialFrameComm__delimiterReceived();
#line 85
}
#line 85
# 73 "/opt/tinyos/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data)
#line 73
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
#line 85
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
#line 90
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 95
  HdlcTranslateC__SerialFrameComm__dataReceived(data);
}

# 221 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(uint8_t id, uint8_t byte)
#line 221
{
}

# 79 "/opt/tinyos/tos/interfaces/UartStream.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receivedByte(uint8_t arg_0x415c9868, uint8_t byte){
#line 79
  switch (arg_0x415c9868) {
#line 79
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 79
      HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
      break;
#line 79
    default:
#line 79
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(arg_0x415c9868, byte);
#line 79
      break;
#line 79
    }
#line 79
}
#line 79
# 132 "/opt/tinyos/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 132
{
}

# 222 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error)
#line 222
{
}

# 99 "/opt/tinyos/tos/interfaces/UartStream.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receiveDone(uint8_t arg_0x415c9868, uint8_t * buf, uint16_t len, error_t error){
#line 99
  switch (arg_0x415c9868) {
#line 99
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 99
      HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
      break;
#line 99
    default:
#line 99
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(arg_0x415c9868, buf, len, error);
#line 99
      break;
#line 99
    }
#line 99
}
#line 99
# 134 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(uint8_t id, uint8_t data)
#line 134
{
  if (/*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf) {
      /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf[/*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_pos++] = data;
      if (/*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_pos >= /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_len) {
          uint8_t *buf = /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf;

#line 139
          /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf = (void *)0;
          /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receiveDone(id, buf, /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_len, SUCCESS);
        }
    }
  else 
#line 142
    {
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receivedByte(id, data);
    }
}

# 65 "/opt/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__rxDone(uint8_t id, uint8_t data)
#line 65
{
}

# 54 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__rxDone(uint8_t arg_0x4117b200, uint8_t data){
#line 54
  switch (arg_0x4117b200) {
#line 54
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID:
#line 54
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID, data);
#line 54
      break;
#line 54
    default:
#line 54
      /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__rxDone(arg_0x4117b200, data);
#line 54
      break;
#line 54
    }
#line 54
}
#line 54
# 90 "/opt/tinyos/tos/interfaces/ArbiterInfo.nc"
inline static bool /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__inUse(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__inUse();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 54 "/opt/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__rxDone(uint8_t data)
#line 54
{
  if (/*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__inUse()) {
    /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__rxDone(/*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__userId(), data);
    }
}

# 54 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart1P__Interrupts__rxDone(uint8_t data){
#line 54
  /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__rxDone(data);
#line 54
}
#line 54
# 401 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static inline bool SerialP__valid_rx_proto(uint8_t proto)
#line 401
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

# 203 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
#line 203
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

#line 199
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
#line 199
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

#line 226
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void )
#line 226
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 228
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 62 "/opt/tinyos/tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP__ReceiveBytePacket__startPacket(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 311 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP__rx_current_crc(void )
#line 311
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

#line 314
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 80 "/opt/tinyos/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 80
}
#line 80
# 221 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 221
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 234 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_full(void )
#line 234
{
  uint8_t tmp;
#line 235
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 236
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
#line 240
    tmp = 0;
    }
#line 241
  return tmp == tmp2;
}







static __inline void SerialP__ack_queue_push(uint8_t token)
#line 250
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 252
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
#line 254
          SerialP__ackQ.writePtr = 0;
          }
      }
#line 256
      SerialP__MaybeScheduleTx();
    }
}

# 67 "/opt/tinyos/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
#line 67
{
  HdlcTranslateC__state.receiveEscape = 0;
}

# 79 "/opt/tinyos/tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP__SerialFrameComm__resetReceive(void ){
#line 79
  HdlcTranslateC__SerialFrameComm__resetReceive();
#line 79
}
#line 79
# 244 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
#line 244
{
  /* atomic removed: atomic calls only */
#line 245
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
#line 266
            ;
      }
  }
}

# 69 "/opt/tinyos/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 69
}
#line 69
# 301 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP__rx_buffer_top(void )
#line 301
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 303
  return tmp;
}

#line 305
static __inline uint8_t SerialP__rx_buffer_pop(void )
#line 305
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 307
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 307
    SerialP__rxBuf.readPtr = 0;
    }
#line 308
  return tmp;
}

#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data)
#line 297
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 299
    SerialP__rxBuf.writePtr = 0;
    }
}

# 220 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__sendDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error)
#line 220
{
}

# 57 "/opt/tinyos/tos/interfaces/UartStream.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__sendDone(uint8_t arg_0x415c9868, uint8_t * buf, uint16_t len, error_t error){
#line 57
  switch (arg_0x415c9868) {
#line 57
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 57
      HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
      break;
#line 57
    default:
#line 57
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__sendDone(arg_0x415c9868, buf, len, error);
#line 57
      break;
#line 57
    }
#line 57
}
#line 57
# 384 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__tx(uint8_t data)
#line 384
{
  HplMsp430Usart1P__U1TXBUF = data;
}

# 224 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__tx(uint8_t data){
#line 224
  HplMsp430Usart1P__Usart__tx(data);
#line 224
}
#line 224
# 162 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(uint8_t id)
#line 162
{
  if (/*Msp430Uart1P.UartP*/Msp430UartP__0__current_owner != id) {
      uint8_t *buf = /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf;

#line 165
      /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf = (void *)0;
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__sendDone(id, buf, /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_len, FAIL);
    }
  else {
#line 168
    if (/*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_pos < /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_len) {
        /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__tx(/*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf[/*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_pos++]);
      }
    else {
        uint8_t *buf = /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf;

#line 173
        /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf = (void *)0;
        /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__sendDone(id, buf, /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_len, SUCCESS);
      }
    }
}

# 64 "/opt/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__txDone(uint8_t id)
#line 64
{
}

# 49 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__txDone(uint8_t arg_0x4117b200){
#line 49
  switch (arg_0x4117b200) {
#line 49
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID:
#line 49
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
#line 49
      break;
#line 49
    default:
#line 49
      /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__txDone(arg_0x4117b200);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 49 "/opt/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__txDone(void )
#line 49
{
  if (/*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__inUse()) {
    /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__txDone(/*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__userId());
    }
}

# 49 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart1P__Interrupts__txDone(void ){
#line 49
  /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__txDone();
#line 49
}
#line 49
# 65 "/opt/tinyos/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putData(uint8_t data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = HdlcTranslateC__SerialFrameComm__putData(data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 529 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__completeSend(void )
#line 529
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 531
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 71 "/opt/tinyos/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = SerialP__SendBytePacket__completeSend();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 178 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
#line 178
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 181
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 81 "/opt/tinyos/tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP__SendBytePacket__nextByte(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 668 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__putDone(void )
#line 668
{
  {
    error_t txResult = SUCCESS;

    /* atomic removed: atomic calls only */
#line 671
    {
      switch (SerialP__txState) {

          case SerialP__TXSTATE_PROTO: 

            txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

          SerialP__txState = SerialP__TXSTATE_INFO;



          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
          break;

          case SerialP__TXSTATE_SEQNO: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
          SerialP__txState = SerialP__TXSTATE_INFO;
          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
          break;

          case SerialP__TXSTATE_INFO: 
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 699
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
          break;

          case SerialP__TXSTATE_FCS1: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
          SerialP__txState = SerialP__TXSTATE_FCS2;
          break;

          case SerialP__TXSTATE_FCS2: 
            txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
          SerialP__txState = SerialP__TXSTATE_ENDFLAG;
          break;

          case SerialP__TXSTATE_ENDFLAG: 
            txResult = SerialP__SerialFrameComm__putDelimiter();
          SerialP__txState = SerialP__TXSTATE_ENDWAIT;
          break;

          case SerialP__TXSTATE_ENDWAIT: 
            SerialP__txState = SerialP__TXSTATE_FINISH;
          case SerialP__TXSTATE_FINISH: 
            SerialP__MaybeScheduleTx();
          break;
          case SerialP__TXSTATE_ERROR: 
            default: 
              txResult = FAIL;
          break;
        }

      if (txResult != SUCCESS) {
          SerialP__txState = SerialP__TXSTATE_ERROR;
          SerialP__MaybeScheduleTx();
        }
    }
  }
}

# 100 "/opt/tinyos/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
#line 100
  SerialP__SerialFrameComm__putDone();
#line 100
}
#line 100
# 411 "/opt/tinyos/tos/chips/msp430/msp430hardware.h"
  __nesc_atomic_t __nesc_atomic_start(void )
{
  __nesc_atomic_t result = (__read_status_register() & 0x0008) != 0;

#line 414
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}

  void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)
{
   __asm volatile ("" :  :  : "memory");
  if (reenable_interrupts) {
    __nesc_enable_interrupt();
    }
}

# 11 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x000C)))  void sig_TIMERA0_VECTOR(void )
#line 11
{
#line 11
  Msp430TimerCommonP__VectorTimerA0__fired();
}

# 180 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired();
    }
}

#line 180
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired();
    }
}

#line 180
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired();
    }
}

# 12 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x000A)))  void sig_TIMERA1_VECTOR(void )
#line 12
{
#line 12
  Msp430TimerCommonP__VectorTimerA1__fired();
}

#line 13
__attribute((wakeup)) __attribute((interrupt(0x001A)))  void sig_TIMERB0_VECTOR(void )
#line 13
{
#line 13
  Msp430TimerCommonP__VectorTimerB0__fired();
}

# 146 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n)
{
}

# 39 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(uint8_t arg_0x4067c4b0){
#line 39
  switch (arg_0x4067c4b0) {
#line 39
    case 0:
#line 39
      /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired();
#line 39
      break;
#line 39
    case 1:
#line 39
      /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired();
#line 39
      break;
#line 39
    case 2:
#line 39
      /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired();
#line 39
      break;
#line 39
    case 3:
#line 39
      /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired();
#line 39
      break;
#line 39
    case 4:
#line 39
      /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired();
#line 39
      break;
#line 39
    case 5:
#line 39
      /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired();
#line 39
      break;
#line 39
    case 6:
#line 39
      /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired();
#line 39
      break;
#line 39
    case 7:
#line 39
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired();
#line 39
      break;
#line 39
    default:
#line 39
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(arg_0x4067c4b0);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 318 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr)
#line 318
{
  /* atomic removed: atomic calls only */
#line 319
  {
    if (CC2420SpiP__WorkingState__isIdle()) {
        {
          unsigned char __nesc_temp = 
#line 321
          0;

#line 321
          return __nesc_temp;
        }
      }
  }
  return CC2420SpiP__SpiByte__write(addr);
}

# 134 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(uint8_t tx)
#line 134
{
  uint8_t byte;


  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(tx);
  while (!/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending()) ;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__clrRxIntr();
  byte = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx();

  return byte;
}

# 768 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__CC2420Tx__sendDone(ieee154_txframe_t *frame, bool ackPendingFlag, error_t result)
{
  CC2420TKN154P__m_ackFramePending = ackPendingFlag;
  CC2420TKN154P__m_txResult = result;
  if (!CC2420TKN154P__SpiResource__isOwner()) {


      while (!(frame->header->mhr[MHR_INDEX_FC1] & FC1_ACK_REQUEST)) {
#line 775
          break;
        }
#line 775
      ;
      result = CC2420TKN154P__RxControl__stop();
      while (!(result == SUCCESS)) {
#line 777
          break;
        }
#line 777
      ;
    }
  else {
#line 779
    CC2420TKN154P__sendDoneSpiReserved();
    }
}

# 178 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static bool CC2420SpiP__Resource__isOwner(uint8_t id)
#line 178
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 179
    {
      unsigned char __nesc_temp = 
#line 179
      CC2420SpiP__m_holder == id;

      {
#line 179
        __nesc_atomic_end(__nesc_atomic); 
#line 179
        return __nesc_temp;
      }
    }
#line 181
    __nesc_atomic_end(__nesc_atomic); }
}

# 172 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static error_t CC2420ReceiveP__AsyncSplitControl__stop(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 174
    {
      if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) 
        {
          unsigned char __nesc_temp = 
#line 176
          EALREADY;

          {
#line 176
            __nesc_atomic_end(__nesc_atomic); 
#line 176
            return __nesc_temp;
          }
        }
      else 
#line 177
        {
          CC2420ReceiveP__m_stop = TRUE;
          CC2420ReceiveP__InterruptFIFOP__disable();
          if (!CC2420ReceiveP__receivingPacket) {
            CC2420ReceiveP__continueStop();
            }
        }
    }
#line 184
    __nesc_atomic_end(__nesc_atomic); }

  return SUCCESS;
}

static void CC2420ReceiveP__continueStop(void )
{
  /* atomic removed: atomic calls only */
#line 191
  {
    if (!CC2420ReceiveP__m_stop) {
        return;
      }
    CC2420ReceiveP__m_stop = FALSE;
    CC2420ReceiveP__m_state = CC2420ReceiveP__S_STOPPED;
  }
  CC2420ReceiveP__stopContinueTask__postTask();
}

# 170 "/opt/tinyos/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 791 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__sendDoneSpiReserved(void )
{

  CC2420TKN154P__m_state_t state = CC2420TKN154P__m_state;
  ieee154_txframe_t *frame = CC2420TKN154P__m_txframe;
  ieee154_csma_t *csma = CC2420TKN154P__m_csma;

  CC2420TKN154P__CC2420Power__rfOff();
  CC2420TKN154P__CC2420Power__flushRxFifo();
  CC2420TKN154P__CC2420Tx__unlockChipSpi();
  CC2420TKN154P__TxControl__stop();
  CC2420TKN154P__SpiResource__release();
  CC2420TKN154P__m_state = CC2420TKN154P__S_RADIO_OFF;

  if (state == CC2420TKN154P__S_TX_ACTIVE_NO_CSMA) {
    CC2420TKN154P__txDoneRadioTx(frame, CC2420TKN154P__m_txResult);
    }
  else {
#line 807
    if (state == CC2420TKN154P__S_TX_ACTIVE_UNSLOTTED_CSMA) {
      CC2420TKN154P__txDoneUnslottedCsma(frame, csma, CC2420TKN154P__m_ackFramePending, CC2420TKN154P__m_txResult);
      }
    else {
#line 809
      if (state == CC2420TKN154P__S_TX_ACTIVE_SLOTTED_CSMA) {
        CC2420TKN154P__txDoneSlottedCsmaCa(frame, csma, CC2420TKN154P__m_ackFramePending, CC2420TKN154P__m_remainingBackoff, CC2420TKN154P__m_txResult);
        }
      else {
#line 812
        while (!0) {
#line 812
            break;
          }
        }
      }
    }
#line 812
  ;
}

# 255 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static error_t CC2420ControlP__CC2420Power__rfOff(void )
#line 255
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 256
    {
      if (!CC2420ControlP__SpiResource__isOwner()) 
        {
          unsigned char __nesc_temp = 
#line 258
          FAIL;

          {
#line 258
            __nesc_atomic_end(__nesc_atomic); 
#line 258
            return __nesc_temp;
          }
        }
#line 259
      CC2420ControlP__CSN__set();
      CC2420ControlP__CSN__clr();
      CC2420ControlP__SRFOFF__strobe();
      CC2420ControlP__CSN__set();
    }
#line 263
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

static error_t CC2420ControlP__CC2420Power__flushRxFifo(void )
{
  uint16_t dummy;

#line 270
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 270
    {
      if (!CC2420ControlP__SpiResource__isOwner()) 
        {
          unsigned char __nesc_temp = 
#line 272
          FAIL;

          {
#line 272
            __nesc_atomic_end(__nesc_atomic); 
#line 272
            return __nesc_temp;
          }
        }
#line 273
      if (CC2420ControlP__FIFO__get()) {



          CC2420ControlP__CSN__clr();
          CC2420ControlP__RXFIFO_REGISTER__read(&dummy);
          CC2420ControlP__CSN__set();
          CC2420ControlP__CSN__clr();


          CC2420ControlP__SFLUSHRX__strobe();
          CC2420ControlP__SFLUSHRX__strobe();
          CC2420ControlP__CSN__set();
        }
    }
#line 287
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 287 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data)
#line 287
{

  cc2420_status_t status = 0;

  /* atomic removed: atomic calls only */
#line 291
  {
    if (CC2420SpiP__WorkingState__isIdle()) {
        {
          unsigned char __nesc_temp = 
#line 293
          status;

#line 293
          return __nesc_temp;
        }
      }
  }
  status = CC2420SpiP__SpiByte__write(addr | 0x40);
  *data = (uint16_t )CC2420SpiP__SpiByte__write(0) << 8;
  *data |= CC2420SpiP__SpiByte__write(0);

  return status;
}

# 141 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static error_t CC2420TransmitP__AsyncStdControl__stop(void )
#line 141
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 142
    {
      CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;
      CC2420TransmitP__BackoffAlarm__stop();
      CC2420TransmitP__CaptureSFD__disable();
      CC2420TransmitP__CSN__set();
    }
#line 147
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 161 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static error_t CC2420ControlP__Resource__release(void )
#line 161
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
    {

      {
        unsigned char __nesc_temp = 
#line 164
        CC2420ControlP__SpiResource__release();

        {
#line 164
          __nesc_atomic_end(__nesc_atomic); 
#line 164
          return __nesc_temp;
        }
      }
    }
#line 167
    __nesc_atomic_end(__nesc_atomic); }
}

# 149 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__release(uint8_t id)
#line 149
{
  uint8_t i;

#line 151
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    {
      if (CC2420SpiP__m_holder != id) {
          {
            unsigned char __nesc_temp = 
#line 153
            FAIL;

            {
#line 153
              __nesc_atomic_end(__nesc_atomic); 
#line 153
              return __nesc_temp;
            }
          }
        }
#line 156
      CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;
      if (!CC2420SpiP__m_requests) {
          CC2420SpiP__WorkingState__toIdle();
          CC2420SpiP__attemptRelease();
        }
      else {
          for (i = CC2420SpiP__m_holder + 1; ; i++) {
              i %= CC2420SpiP__RESOURCE_COUNT;

              if (CC2420SpiP__m_requests & (1 << i)) {
                  CC2420SpiP__m_holder = i;
                  CC2420SpiP__m_requests &= ~(1 << i);
                  CC2420SpiP__grant__postTask();
                  {
                    unsigned char __nesc_temp = 
#line 169
                    SUCCESS;

                    {
#line 169
                      __nesc_atomic_end(__nesc_atomic); 
#line 169
                      return __nesc_temp;
                    }
                  }
                }
            }
        }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
#line 175
  return SUCCESS;
}

#line 339
static error_t CC2420SpiP__attemptRelease(void )
#line 339
{


  if ((
#line 340
  CC2420SpiP__m_requests > 0
   || CC2420SpiP__m_holder != CC2420SpiP__NO_HOLDER)
   || !CC2420SpiP__WorkingState__isIdle()) {
      return FAIL;
    }
  /* atomic removed: atomic calls only */
  CC2420SpiP__release = TRUE;
  CC2420SpiP__ChipSpiResource__releasing();
  /* atomic removed: atomic calls only */
#line 348
  {
    if (CC2420SpiP__release) {
        CC2420SpiP__SpiResource__release();
        {
          unsigned char __nesc_temp = 
#line 351
          SUCCESS;

#line 351
          return __nesc_temp;
        }
      }
  }
  return EBUSY;
}

# 247 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static void HplMsp430Usart0P__Usart__disableSpi(void )
#line 247
{
  /* atomic removed: atomic calls only */
#line 248
  {
    HplMsp430Usart0P__ME1 &= ~0x40;
    HplMsp430Usart0P__SIMO__selectIOFunc();
    HplMsp430Usart0P__SOMI__selectIOFunc();
    HplMsp430Usart0P__UCLK__selectIOFunc();
  }
}

# 151 "/opt/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static uint8_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ArbiterInfo__userId(void )
#line 151
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 152
    {
      if (/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state != /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_BUSY) 
        {
          unsigned char __nesc_temp = 
#line 154
          /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__NO_RES;

          {
#line 154
            __nesc_atomic_end(__nesc_atomic); 
#line 154
            return __nesc_temp;
          }
        }
#line 155
      {
        unsigned char __nesc_temp = 
#line 155
        /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId;

        {
#line 155
          __nesc_atomic_end(__nesc_atomic); 
#line 155
          return __nesc_temp;
        }
      }
    }
#line 158
    __nesc_atomic_end(__nesc_atomic); }
}

# 408 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static void DispatchUnslottedCsmaP__UnslottedCsmaCa__transmitDone(ieee154_txframe_t *frame, 
ieee154_csma_t *csma, bool ackPendingFlag, error_t result)
{
  bool done = TRUE;

#line 412
  ;
  DispatchUnslottedCsmaP__m_resume = FALSE;
  switch (result) 
    {
      case SUCCESS: 


        DispatchUnslottedCsmaP__m_txStatus = IEEE154_SUCCESS;
      if (frame->payload[0] == CMD_FRAME_DATA_REQUEST && (
      frame->header->mhr[MHR_INDEX_FC1] & FC1_FRAMETYPE_MASK) == FC1_FRAMETYPE_CMD) {

          DispatchUnslottedCsmaP__m_txStatus = IEEE154_NO_DATA;
          if (ackPendingFlag) {


              DispatchUnslottedCsmaP__m_indirectTxPending = TRUE;
              DispatchUnslottedCsmaP__m_lastFrame = DispatchUnslottedCsmaP__m_currentFrame;
              DispatchUnslottedCsmaP__m_currentFrame = (void *)0;
              while (!(DispatchUnslottedCsmaP__RadioRx__enableRx(0, 0) == SUCCESS)) {
#line 430
                  break;
                }
#line 430
              ;
              return;
            }
        }
      break;
      case FAIL: 


        DispatchUnslottedCsmaP__m_txStatus = IEEE154_CHANNEL_ACCESS_FAILURE;
      break;
      case ENOACK: 



        if (DispatchUnslottedCsmaP__m_macMaxFrameRetries > 0) {

            done = FALSE;
            DispatchUnslottedCsmaP__m_csma.NB = 0;
            DispatchUnslottedCsmaP__m_csma.macMaxCsmaBackoffs = DispatchUnslottedCsmaP__m_macMaxCSMABackoffs;
            DispatchUnslottedCsmaP__m_csma.macMaxBE = DispatchUnslottedCsmaP__m_macMaxBE;
            DispatchUnslottedCsmaP__m_csma.BE = DispatchUnslottedCsmaP__m_BE;
            DispatchUnslottedCsmaP__m_macMaxFrameRetries -= 1;
          }
        else {
#line 453
          DispatchUnslottedCsmaP__m_txStatus = IEEE154_NO_ACK;
          }
#line 454
      break;
      default: 
        while (!0) {
#line 456
            break;
          }
#line 456
      ;
      break;
    }

  if (done) {
      DispatchUnslottedCsmaP__m_lastFrame = DispatchUnslottedCsmaP__m_currentFrame;
      DispatchUnslottedCsmaP__m_currentFrame = (void *)0;
      DispatchUnslottedCsmaP__signalTxDoneTask__postTask();
    }

  DispatchUnslottedCsmaP__m_lock = FALSE;
  DispatchUnslottedCsmaP__updateState();
  ;
}

# 63 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static error_t RadioControlImplP__MacRx__enableRx(uint8_t client, uint32_t t0, uint32_t dt)
{
  if (client == RadioControlImplP__ArbiterInfo__userId()) {
    return RadioControlImplP__PhyRx__enableRx(t0, dt);
    }
  else 
#line 67
    {
      while (!0) {
#line 68
          break;
        }
#line 68
      ;
      return IEEE154_TRANSACTION_OVERFLOW;
    }
}

# 143 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static error_t CC2420ReceiveP__AsyncSplitControl__start(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 145
    {
      if (!CC2420ReceiveP__FIFO__get() && !CC2420ReceiveP__FIFOP__get()) {




          {
            unsigned char __nesc_temp = 
#line 151
            FAIL;

            {
#line 151
              __nesc_atomic_end(__nesc_atomic); 
#line 151
              return __nesc_temp;
            }
          }
        }
#line 153
      while (!(CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED)) {
#line 153
          break;
        }
#line 153
      ;
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
      CC2420ReceiveP__InterruptFIFOP__enableFallingEdge();
    }
#line 157
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 43 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFO__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 514 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static void CC2420ReceiveP__reset_state(void )
#line 514
{
  CC2420ReceiveP__m_bytes_left = CC2420ReceiveP__RXFIFO_SIZE;
  /* atomic removed: atomic calls only */
#line 516
  CC2420ReceiveP__receivingPacket = FALSE;
  CC2420ReceiveP__m_timestamp_head = 0;
  CC2420ReceiveP__m_timestamp_size = 0;
  CC2420ReceiveP__m_missed_packets = 0;
}

# 145 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static error_t CC2420ControlP__Resource__immediateRequest(void )
#line 145
{
  error_t error = CC2420ControlP__SpiResource__immediateRequest();

#line 147
  if (error == SUCCESS) {
    }

  return error;
}

# 126 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id)
#line 126
{
  error_t error;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) != SUCCESS) {
          {
            unsigned char __nesc_temp = 
#line 131
            EBUSY;

            {
#line 131
              __nesc_atomic_end(__nesc_atomic); 
#line 131
              return __nesc_temp;
            }
          }
        }
      if (CC2420SpiP__SpiResource__isOwner()) {
          CC2420SpiP__m_holder = id;
          error = SUCCESS;
        }
      else {
#line 139
        if ((error = CC2420SpiP__SpiResource__immediateRequest()) == SUCCESS) {
            CC2420SpiP__m_holder = id;
          }
        else {
            CC2420SpiP__WorkingState__toIdle();
          }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 146
  return error;
}

# 96 "/opt/tinyos/tos/system/StateImplP.nc"
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState)
#line 96
{
  error_t returnVal = FAIL;

  /* atomic removed: atomic calls only */
#line 98
  {
    if (reqState == StateImplP__S_IDLE || StateImplP__state[id] == StateImplP__S_IDLE) {
        StateImplP__state[id] = reqState;
        returnVal = SUCCESS;
      }
  }
  return returnVal;
}

# 177 "/opt/tinyos/tos/system/ArbiterP.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(uint8_t id)
#line 177
{
  /* atomic removed: atomic calls only */
#line 178
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId == id && /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY) {
        unsigned char __nesc_temp = 
#line 179
        TRUE;

#line 179
        return __nesc_temp;
      }
    else 
#line 180
      {
        unsigned char __nesc_temp = 
#line 180
        FALSE;

#line 180
        return __nesc_temp;
      }
  }
}

#line 133
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 133
{
  /* atomic removed: atomic calls only */
#line 134
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id) {
        if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING) {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask();
            {
              unsigned char __nesc_temp = 
#line 138
              SUCCESS;

#line 138
              return __nesc_temp;
            }
          }
        else {
#line 140
          if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY;
              {
                unsigned char __nesc_temp = 
#line 143
                SUCCESS;

#line 143
                return __nesc_temp;
              }
            }
          }
      }
  }
#line 147
  return FAIL;
}

# 265 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static void HplMsp430Usart0P__Usart__setModeSpi(msp430_spi_union_config_t *config)
#line 265
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 267
    {
      HplMsp430Usart0P__Usart__resetUsart(TRUE);
      HplMsp430Usart0P__HplI2C__clearModeI2C();
      HplMsp430Usart0P__Usart__disableUart();
      HplMsp430Usart0P__configSpi(config);
      HplMsp430Usart0P__Usart__enableSpi();
      HplMsp430Usart0P__Usart__resetUsart(FALSE);
      HplMsp430Usart0P__Usart__clrIntr();
      HplMsp430Usart0P__Usart__disableIntr();
    }
#line 276
    __nesc_atomic_end(__nesc_atomic); }
  return;
}

# 403 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__rxSpiReserved(void )
{
  CC2420TKN154P__m_state = CC2420TKN154P__S_RX_PENDING;
  CC2420TKN154P__CC2420Config__sync();
  CC2420TKN154P__TxControl__stop();
  CC2420TKN154P__TxControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 409
    {
      if (CC2420TKN154P__TimeCalc__hasExpired(CC2420TKN154P__m_t0, CC2420TKN154P__m_dt)) {
        CC2420TKN154P__ReliableWait__waitRxDone();
        }
      else {
#line 413
        CC2420TKN154P__ReliableWait__waitRx(CC2420TKN154P__m_t0, CC2420TKN154P__m_dt);
        }
    }
#line 415
    __nesc_atomic_end(__nesc_atomic); }
}

# 392 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static error_t CC2420ControlP__CC2420Config__sync(void )
#line 392
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 393
    {
      if (!CC2420ControlP__SpiResource__isOwner()) 
        {
          unsigned char __nesc_temp = 
#line 395
          FAIL;

          {
#line 395
            __nesc_atomic_end(__nesc_atomic); 
#line 395
            return __nesc_temp;
          }
        }
#line 396
      if (CC2420ControlP__m_needsSync) {
          CC2420ControlP__CSN__set();
          CC2420ControlP__CSN__clr();
          CC2420ControlP__SRFOFF__strobe();
          CC2420ControlP__CSN__set();
          CC2420ControlP__CSN__clr();
          CC2420ControlP__writeFsctrl();
          CC2420ControlP__writeMdmctrl0();
          CC2420ControlP__writeTxPower();
          CC2420ControlP__CSN__set();
          CC2420ControlP__CSN__clr();
          CC2420ControlP__writeId();
          CC2420ControlP__CSN__set();
          CC2420ControlP__m_needsSync = FALSE;
        }
    }
#line 411
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 461
static void CC2420ControlP__writeFsctrl(void )
#line 461
{
  uint8_t channel;

  /* atomic removed: atomic calls only */
#line 464
  {
    channel = CC2420ControlP__m_channel;
  }

  CC2420ControlP__FSCTRL__write((1 << CC2420_FSCTRL_LOCK_THR) | (((
  channel - 11) * 5 + 357) << CC2420_FSCTRL_FREQ));
}

# 305 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data)
#line 305
{
  /* atomic removed: atomic calls only */
#line 306
  {
    if (CC2420SpiP__WorkingState__isIdle()) {
        {
          unsigned char __nesc_temp = 
#line 308
          0;

#line 308
          return __nesc_temp;
        }
      }
  }
#line 311
  CC2420SpiP__SpiByte__write(addr);
  CC2420SpiP__SpiByte__write(data >> 8);
  return CC2420SpiP__SpiByte__write(data & 0xff);
}

# 475 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static void CC2420ControlP__writeMdmctrl0(void )
#line 475
{
  /* atomic removed: atomic calls only */
#line 476
  {
    uint8_t _acceptReservedFrames = CC2420ControlP__acceptReservedFrames ? 1 : 0;
    uint8_t _panCoord = CC2420ControlP__m_isPanCoord ? 1 : 0;
    uint8_t _addressRecognition = CC2420ControlP__addressRecognition ? 1 : 0;
    uint8_t _autoAck = CC2420ControlP__autoAckEnabled && CC2420ControlP__hwAutoAckDefault ? 1 : 0;

#line 481
    CC2420ControlP__MDMCTRL0__write((((((((_acceptReservedFrames << CC2420_MDMCTRL0_RESERVED_FRAME_MODE) | (
    _panCoord << CC2420_MDMCTRL0_PAN_COORDINATOR)) | (
    _addressRecognition << CC2420_MDMCTRL0_ADR_DECODE)) | (
    2 << CC2420_MDMCTRL0_CCA_HYST)) | (
    CC2420ControlP__m_CCAMode << CC2420_MDMCTRL0_CCA_MOD)) | (
    1 << CC2420_MDMCTRL0_AUTOCRC)) | (
    _autoAck << CC2420_MDMCTRL0_AUTOACK)) | (
    2 << CC2420_MDMCTRL0_PREAMBLE_LENGTH));
  }
}







static void CC2420ControlP__writeId(void )
#line 498
{
  uint16_t bcnAccept = 0;
  nxle_uint16_t id[6];

  /* atomic removed: atomic calls only */
#line 502
  {
    CC2420ControlP__FrameUtility__copyLocalExtendedAddressLE((uint8_t *)&id);
    __nesc_hton_leuint16(id[4].nxdata, CC2420ControlP__m_pan);
    __nesc_hton_leuint16(id[5].nxdata, CC2420ControlP__m_short_addr);
  }
  if (CC2420ControlP__m_pan == 0xFFFF) {
    bcnAccept = 1;
    }

  CC2420ControlP__IOCFG0__write(((bcnAccept << CC2420_IOCFG0_BCN_ACCEPT) | (
  1 << CC2420_IOCFG0_FIFOP_POLARITY)) | (
  127 << CC2420_IOCFG0_FIFOP_THR));

  CC2420ControlP__IEEEADR__write(0, (uint8_t *)&id, sizeof id);
}

# 1020 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static void PibP__FrameUtility__convertToLE(uint8_t *destLE, const uint64_t *src)
{
  uint8_t i;
  uint64_t srcCopy = *src;

#line 1024
  for (i = 0; i < 8; i++) {
      destLE[i] = srcCopy;
      srcCopy >>= 8;
    }
}

# 130 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static error_t CC2420TransmitP__AsyncStdControl__start(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_STARTED) 
        {
          unsigned char __nesc_temp = 
#line 133
          EALREADY;

          {
#line 133
            __nesc_atomic_end(__nesc_atomic); 
#line 133
            return __nesc_temp;
          }
        }
#line 134
      CC2420TransmitP__CaptureSFD__captureRisingEdge();
      CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
      CC2420TransmitP__m_receiving = FALSE;
    }
#line 137
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 49 "/opt/tinyos/tos/chips/msp430/timer/GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(uint8_t mode)
#line 49
{
  /* atomic removed: atomic calls only */
#line 50
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(mode);
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents();
  }
  return SUCCESS;
}

# 549 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static bool PibP__TimeCalc__hasExpired(uint32_t t0, uint32_t dt)
{

  uint32_t now = PibP__LocalTime__get();
#line 552
  uint32_t elapsed;

#line 553
  if (now >= t0) {
    elapsed = now - t0;
    }
  else {
#line 556
    elapsed = ~(t0 - now) + 1;
    }
#line 557
  return elapsed >= dt;
}

# 80 "/opt/tinyos/tos/lib/timer/TransformCounterC.nc"
static /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get(void )
{
  /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type high = /*Counter32khz32C.Transform*/TransformCounterC__0__m_upper;
      /*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type low = /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get();

#line 87
      if (/*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type high_to = high;
        /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type low_to = low >> /*Counter32khz32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*Counter32khz32C.Transform*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 62 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void )
{




  if (1) {
      /* atomic removed: atomic calls only */
#line 69
      {
        uint16_t t0;
        uint16_t t1 = * (volatile uint16_t * )400U;

#line 72
        do {
#line 72
            t0 = t1;
#line 72
            t1 = * (volatile uint16_t * )400U;
          }
        while (
#line 72
        t0 != t1);
        {
          unsigned int __nesc_temp = 
#line 73
          t1;

#line 73
          return __nesc_temp;
        }
      }
    }
  else 
#line 76
    {
      return * (volatile uint16_t * )400U;
    }
}

# 417 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__ReliableWait__waitRxDone(void )
{
  error_t result;

  /* atomic removed: atomic calls only */
#line 420
  {
    CC2420TKN154P__m_state = CC2420TKN154P__S_RECEIVING;
    result = CC2420TKN154P__CC2420Power__rxOn();
  }
  while (!(result == SUCCESS)) {
#line 424
      break;
    }
#line 424
  ;
  CC2420TKN154P__CC2420Tx__lockChipSpi();
  CC2420TKN154P__SpiResource__release();
  CC2420TKN154P__RadioRx__enableRxDone();
}

# 242 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static error_t CC2420ControlP__CC2420Power__rxOn(void )
#line 242
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 243
    {
      if (!CC2420ControlP__SpiResource__isOwner()) 
        {
          unsigned char __nesc_temp = 
#line 245
          FAIL;

          {
#line 245
            __nesc_atomic_end(__nesc_atomic); 
#line 245
            return __nesc_temp;
          }
        }
#line 246
      CC2420ControlP__CSN__set();
      CC2420ControlP__CSN__clr();
      CC2420ControlP__SRXON__strobe();
      CC2420ControlP__SACKPEND__strobe();
      CC2420ControlP__CSN__set();
    }
#line 251
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 253 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static void DispatchUnslottedCsmaP__updateState(void )
{
  DispatchUnslottedCsmaP__next_state_t next;

#line 256
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 256
    {



      if (DispatchUnslottedCsmaP__m_lock || !DispatchUnslottedCsmaP__RadioToken__isOwner()) {
        {
#line 261
          __nesc_atomic_end(__nesc_atomic); 
#line 261
          return;
        }
        }
#line 262
      DispatchUnslottedCsmaP__m_lock = TRUE;



      if (DispatchUnslottedCsmaP__m_indirectTxPending) {
          next = DispatchUnslottedCsmaP__tryReceive();
        }
      else {

        if (DispatchUnslottedCsmaP__IsRadioTokenRequested__getNow()) {
            if (DispatchUnslottedCsmaP__RadioOff__isOff()) {

                ;
                DispatchUnslottedCsmaP__RadioToken__request();
                DispatchUnslottedCsmaP__m_lock = FALSE;
                DispatchUnslottedCsmaP__RadioToken__release();
                {
#line 278
                  __nesc_atomic_end(__nesc_atomic); 
#line 278
                  return;
                }
              }
            else {
#line 280
              next = DispatchUnslottedCsmaP__SWITCH_OFF;
              }
          }
        else {
          if (DispatchUnslottedCsmaP__m_currentFrame != (void *)0) {
              next = DispatchUnslottedCsmaP__tryTransmit();
            }
          else {

            if (DispatchUnslottedCsmaP__IsRxEnableActive__getNow() || DispatchUnslottedCsmaP__m_macRxOnWhenIdle) {
                next = DispatchUnslottedCsmaP__tryReceive();
                if (next == DispatchUnslottedCsmaP__DO_NOTHING) {


                    DispatchUnslottedCsmaP__wasRxEnabledTask__postTask();
                  }
              }
            else 

              {
                next = DispatchUnslottedCsmaP__trySwitchOff();
                if (next == DispatchUnslottedCsmaP__DO_NOTHING) {

                    DispatchUnslottedCsmaP__m_lock = FALSE;
                    ;
                    DispatchUnslottedCsmaP__RadioToken__release();
                    {
#line 306
                      __nesc_atomic_end(__nesc_atomic); 
#line 306
                      return;
                    }
                  }
              }
            }
          }
        }
#line 311
      if (next == DispatchUnslottedCsmaP__DO_NOTHING) {
        DispatchUnslottedCsmaP__m_lock = FALSE;
        }
    }
#line 314
    __nesc_atomic_end(__nesc_atomic); }

  switch (next) 
    {
      case DispatchUnslottedCsmaP__SWITCH_OFF: while (!(DispatchUnslottedCsmaP__RadioOff__off() == SUCCESS)) {
#line 318
            break;
          }
#line 318
      ;
#line 318
      break;
      case DispatchUnslottedCsmaP__WAIT_FOR_RXDONE: break;
      case DispatchUnslottedCsmaP__WAIT_FOR_TXDONE: break;
      case DispatchUnslottedCsmaP__DO_NOTHING: break;
    }
}

# 162 "/opt/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static bool /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__isOwner(uint8_t id)
#line 162
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 163
    {
      if (/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId == id && /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state == /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_BUSY) {
          unsigned char __nesc_temp = 
#line 164
          TRUE;

          {
#line 164
            __nesc_atomic_end(__nesc_atomic); 
#line 164
            return __nesc_temp;
          }
        }
      else 
#line 165
        {
          unsigned char __nesc_temp = 
#line 165
          FALSE;

          {
#line 165
            __nesc_atomic_end(__nesc_atomic); 
#line 165
            return __nesc_temp;
          }
        }
    }
#line 168
    __nesc_atomic_end(__nesc_atomic); }
}

# 341 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static DispatchUnslottedCsmaP__next_state_t DispatchUnslottedCsmaP__tryReceive(void )
{
  DispatchUnslottedCsmaP__next_state_t next;

#line 344
  if (DispatchUnslottedCsmaP__RadioRx__isReceiving()) {
    next = DispatchUnslottedCsmaP__DO_NOTHING;
    }
  else {
#line 346
    if (!DispatchUnslottedCsmaP__RadioOff__isOff()) {
      next = DispatchUnslottedCsmaP__SWITCH_OFF;
      }
    else 
#line 348
      {
        DispatchUnslottedCsmaP__RadioRx__enableRx(0, 0);
        next = DispatchUnslottedCsmaP__WAIT_FOR_RXDONE;
      }
    }
#line 352
  return next;
}

# 206 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static bool RadioControlImplP__MacRadioOff__isOff(uint8_t client)
{
  if (client == RadioControlImplP__ArbiterInfo__userId()) {
    return RadioControlImplP__PhyRadioOff__isOff();
    }
  else {
#line 211
    return EBUSY;
    }
}

# 72 "/opt/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__request(uint8_t id)
#line 72
{
  /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceRequested__requested(/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 74
    {
      if (/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state == /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_IDLE) {
          /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_GRANTING;
          /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__reqResId = id;
          /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 79
            SUCCESS;

            {
#line 79
              __nesc_atomic_end(__nesc_atomic); 
#line 79
              return __nesc_temp;
            }
          }
        }
#line 81
      {
        unsigned char __nesc_temp = 
#line 81
        /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__enqueue(id);

        {
#line 81
          __nesc_atomic_end(__nesc_atomic); 
#line 81
          return __nesc_temp;
        }
      }
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
}

# 75 "/opt/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static bool /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 75
{
  return /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] & (1 << id % 8);
}

# 98 "/opt/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__release(uint8_t id)
#line 98
{
  bool released = FALSE;

#line 100
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 100
    {
      if (/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state == /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_BUSY && /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId == id) {
          if (/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__isEmpty() == FALSE) {
              /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__reqResId = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__dequeue();
              /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_GRANTING;
              /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__postTask();
            }
          else {
              /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__NO_RES;
              /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_IDLE;
            }
          released = TRUE;
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
  if (released == TRUE) {
      /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 730 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__txSpiReserved(void )
{
  error_t result;

#line 733
  CC2420TKN154P__CC2420Config__sync();
  CC2420TKN154P__TxControl__start();
  result = CC2420TKN154P__CC2420Tx__loadTXFIFO(CC2420TKN154P__m_txframe);
  while (!(result == SUCCESS)) {
#line 736
      break;
    }
#line 736
  ;
}

# 214 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 215
{

  uint8_t status = 0;

  /* atomic removed: atomic calls only */
#line 219
  {
    if (CC2420SpiP__WorkingState__isIdle()) {
        {
          unsigned char __nesc_temp = 
#line 221
          status;

#line 221
          return __nesc_temp;
        }
      }
  }
  CC2420SpiP__m_addr = addr;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__SpiPacket__send(data, (void *)0, len);

  return status;
}

# 205 "/opt/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(uint8_t id, uint8_t *tx_buf, 
uint8_t *rx_buf, 
uint16_t len)
#line 207
{

  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_client = id;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf = tx_buf;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf = rx_buf;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len = len;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos = 0;

  if (len) {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__enableRxIntr();
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp();
    }
  else {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__postTask();
    }

  return SUCCESS;
}

#line 182
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp(void )
#line 182
{

  uint8_t end;
  uint8_t tmp;

  /* atomic removed: atomic calls only */
#line 187
  {
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf ? /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos] : 0);

    end = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos + /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SPI_ATOMIC_SIZE;
    if (end > /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len) {
      end = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len;
      }
    while (++/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos < end) {
        while (!/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending()) ;
        tmp = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx();
        if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf) {
          /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos - 1] = tmp;
          }
#line 199
        /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf ? /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos] : 0);
      }
  }
}

# 107 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__request(uint8_t id)
#line 107
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) == SUCCESS) {
          CC2420SpiP__m_holder = id;
          if (CC2420SpiP__SpiResource__isOwner()) {
              CC2420SpiP__grant__postTask();
            }
          else {
              CC2420SpiP__SpiResource__request();
            }
        }
      else {
          CC2420SpiP__m_requests |= 1 << id;
        }
    }
#line 122
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 190 "/opt/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static error_t RadioControlImplP__MacRadioOff__off(uint8_t client)
{
  if (client == RadioControlImplP__ArbiterInfo__userId()) {
    return RadioControlImplP__PhyRadioOff__off();
    }
  else 
#line 194
    {
      while (!0) {
#line 195
          break;
        }
#line 195
      ;
      return EBUSY;
    }
}

# 64 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__startAt(uint32_t t0, uint32_t dt)
#line 64
{
  /* atomic removed: atomic calls only */
  {
    uint32_t now = /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__getNow();
#line 67
    uint32_t elapsed;

#line 68
    if (t0 < now) {
      elapsed = now - t0;
      }
    else {
#line 71
      elapsed = ~(t0 - now) + 1;
      }
#line 72
    if (elapsed > dt) {
      dt = elapsed;
      }
#line 74
    dt -= elapsed;
    /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__start(dt);
  }
}

# 107 "/opt/tinyos/tos/lib/timer/TransformAlarmC.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__set_alarm(void )
{
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type now = /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__get();
#line 109
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type expires;
#line 109
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type remaining;




  expires = /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_t0 + /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_dt;


  remaining = (/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type )(expires - now);


  if (/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_t0 <= now) 
    {
      if (expires >= /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__MAX_DELAY) 
    {
      /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_t0 = now + /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__MAX_DELAY;
      /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_dt = remaining - /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__MAX_DELAY;
      remaining = /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__MAX_DELAY;
    }
  else 
    {
      /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_t0 += /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_dt;
      /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_dt = 0;
    }
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__startAt((/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__from_size_type )now << 0, 
  (/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__from_size_type )remaining << 0);
}

#line 107
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm(void )
{
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type now = /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get();
#line 109
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type expires;
#line 109
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type remaining;




  expires = /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 + /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt;


  remaining = (/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 <= now) 
    {
      if (expires >= /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 = now + /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY;
      /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt = remaining - /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 += /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt;
      /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt = 0;
    }
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt((/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type )now << 0, 
  (/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type )remaining << 0);
}

# 436 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static void CC2420ControlP__StartupAlarm__fired(void )
#line 436
{
  if (CC2420ControlP__m_state == CC2420ControlP__S_VREG_STARTING) {
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTED;
      CC2420ControlP__RSTN__clr();
      CC2420ControlP__RSTN__set();
      CC2420ControlP__CC2420Power__startVRegDone();
    }
}

# 57 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )29U &= ~(0x01 << 6);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

#line 56
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )29U |= 0x01 << 6;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 87 "/opt/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__setNextAlarm(void )
#line 87
{
  if (! /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.is_signaling) {








      const /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type now = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow();
      const /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__alarm_t *pEnd = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm + /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__NUM_ALARMS;
      bool isset = FALSE;
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__alarm_t *p = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm;
      bool *pset = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset;
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt = (/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type )0 - (/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type )1;

      for (; p != pEnd; p++, pset++) {
          if (*pset) {
              /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type elapsed = now - p->t0;

#line 107
              if (p->dt <= elapsed) {
                  p->t0 += p->dt;
                  p->dt = 0;
                }
              else {
                  p->t0 = now;
                  p->dt -= elapsed;
                }

              if (p->dt <= dt) {
                  dt = p->dt;
                  isset = TRUE;
                }
            }
        }

      if (isset) {




          if (dt & ((/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type )1 << (8 * sizeof(/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type ) - 1))) {
            dt >>= 1;
            }
          /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__startAt(now, dt);
        }
      else {
          /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__stop();
        }
    }
}

# 107 "/opt/tinyos/tos/lib/timer/TransformAlarmC.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__set_alarm(void )
{
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type now = /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__get();
#line 109
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type expires;
#line 109
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type remaining;




  expires = /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 + /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt;


  remaining = (/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type )(expires - now);


  if (/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 <= now) 
    {
      if (expires >= /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY) 
    {
      /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 = now + /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY;
      /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt = remaining - /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY;
      remaining = /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY;
    }
  else 
    {
      /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 += /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt;
      /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt = 0;
    }
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt((/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type )now << 0, 
  (/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type )remaining << 0);
}

# 476 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__ReliableWait__waitTxDone(void )
{
  error_t result;

#line 479
  while (!(CC2420TKN154P__m_state == CC2420TKN154P__S_TX_PENDING)) {
#line 479
      break;
    }
#line 479
  ;
  /* atomic removed: atomic calls only */
#line 480
  {
    CC2420TKN154P__m_state = CC2420TKN154P__S_TX_ACTIVE_NO_CSMA;
    result = CC2420TKN154P__CC2420Tx__send(FALSE);
    CC2420TKN154P__checkEnableRxForACK();
  }
  while (!(result == SUCCESS)) {
#line 485
      break;
    }
#line 485
  ;
}

# 190 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static error_t CC2420TransmitP__CC2420Tx__send(bool cca)
{
  cc2420_status_t status;
  bool congestion = TRUE;

  /* atomic removed: atomic calls only */
#line 195
  {
    if (CC2420TransmitP__m_state != CC2420TransmitP__S_READY_TX) 
      {
        unsigned char __nesc_temp = 
#line 197
        EOFF;

#line 197
        return __nesc_temp;
      }
#line 198
    CC2420TransmitP__CSN__set();
    CC2420TransmitP__CSN__clr();



    status = cca ? CC2420TransmitP__STXONCCA__strobe() : CC2420TransmitP__STXON__strobe();






    if (!(status & CC2420_STATUS_TX_ACTIVE)) {
        status = CC2420TransmitP__SNOP__strobe();
        if (status & CC2420_STATUS_TX_ACTIVE) {
            congestion = FALSE;
          }
      }

    CC2420TransmitP__CSN__set();



    if (congestion) {
        {
          unsigned char __nesc_temp = 
#line 222
          FAIL;

#line 222
          return __nesc_temp;
        }
      }
    else 
#line 223
      {
        CC2420TransmitP__m_state = CC2420TransmitP__S_SFD;
        __nesc_hton_uint32(CC2420TransmitP__m_frame->metadata->timestamp.nxdata, 0xffffffff);
        CC2420TransmitP__BackoffAlarm__start(CC2420TransmitP__CC2420_ABORT_PERIOD);
        {
          unsigned char __nesc_temp = 
#line 227
          SUCCESS;

#line 227
          return __nesc_temp;
        }
      }
  }
}

# 752 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__checkEnableRxForACK(void )
{


  bool ackRequest = CC2420TKN154P__m_txframe->header->mhr[MHR_INDEX_FC1] & FC1_ACK_REQUEST ? TRUE : FALSE;
  error_t result = SUCCESS;

  if (ackRequest) {


      CC2420TKN154P__SpiResource__release();
      result = CC2420TKN154P__RxControl__start();
    }
  while (!(result == SUCCESS)) {
#line 765
      break;
    }
#line 765
  ;
}

# 417 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static error_t CC2420ControlP__CC2420Power__rssi(int8_t *rssi)
#line 417
{
  uint16_t data;
  cc2420_status_t status;

#line 420
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 420
    {
      if (!CC2420ControlP__SpiResource__isOwner()) 
        {
          unsigned char __nesc_temp = 
#line 422
          FAIL;

          {
#line 422
            __nesc_atomic_end(__nesc_atomic); 
#line 422
            return __nesc_temp;
          }
        }
#line 423
      CC2420ControlP__CSN__set();
      CC2420ControlP__CSN__clr();
      status = CC2420ControlP__RSSI__read(&data);
      CC2420ControlP__CSN__set();
      if (status & 0x02) {
          *rssi = data & 0x00FF;
          {
            unsigned char __nesc_temp = 
#line 429
            SUCCESS;

            {
#line 429
              __nesc_atomic_end(__nesc_atomic); 
#line 429
              return __nesc_temp;
            }
          }
        }
      else 
#line 431
        {
          unsigned char __nesc_temp = 
#line 431
          FAIL;

          {
#line 431
            __nesc_atomic_end(__nesc_atomic); 
#line 431
            return __nesc_temp;
          }
        }
    }
#line 434
    __nesc_atomic_end(__nesc_atomic); }
}

# 607 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__nextIterationSlottedCsma(void )
{
  uint32_t dtTxTarget;
  uint16_t backoff;
  ieee154_txframe_t *frame = (void *)0;
  ieee154_csma_t *csma = (void *)0;

  /* atomic removed: atomic calls only */
#line 614
  {
    if (CC2420TKN154P__m_resume) {
        backoff = CC2420TKN154P__m_remainingBackoff;
        CC2420TKN154P__m_resume = FALSE;
      }
    else {
#line 619
      backoff = CC2420TKN154P__getRandomBackoff(CC2420TKN154P__m_csma->BE);
      }
#line 620
    dtTxTarget = CC2420TKN154P__TimeCalc__timeElapsed(CC2420TKN154P__m_t0, CC2420TKN154P__LocalTime__get());
    dtTxTarget += backoff;
    if (dtTxTarget > CC2420TKN154P__m_dt) {

        uint32_t overlap = dtTxTarget - CC2420TKN154P__m_dt;

#line 625
        overlap = overlap + (IEEE154_aUnitBackoffPeriod - overlap % IEEE154_aUnitBackoffPeriod);
        backoff = overlap;
        frame = CC2420TKN154P__m_txframe;
        csma = CC2420TKN154P__m_csma;
      }
    else 
#line 629
      {

        CC2420TKN154P__m_state = CC2420TKN154P__S_TX_BACKOFF_SLOTTED;
        CC2420TKN154P__ReliableWait__waitBackoff(backoff);
      }
  }
  if (frame != (void *)0) {
      CC2420TKN154P__CC2420Tx__unlockChipSpi();
      CC2420TKN154P__TxControl__stop();
      CC2420TKN154P__SpiResource__release();
      CC2420TKN154P__m_state = CC2420TKN154P__S_RADIO_OFF;
      CC2420TKN154P__SlottedCsmaCa__transmitDone(frame, csma, FALSE, backoff, ERETRY);
    }
}

#line 210
static uint16_t CC2420TKN154P__getRandomBackoff(uint8_t BE)
{
  uint16_t res = CC2420TKN154P__Random__rand16();
  uint16_t mask = 0xFFFF;

#line 214
  mask <<= BE;
  mask = ~mask;
  res &= mask;
  return res * IEEE154_aUnitBackoffPeriod;
}

# 69 "/opt/tinyos/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC__seed = mlcg;
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 540 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static uint32_t PibP__TimeCalc__timeElapsed(uint32_t t0, uint32_t t1)
{

  if (t0 <= t1) {
    return t1 - t0;
    }
  else {
#line 546
    return ~(t0 - t1) + 1;
    }
}

# 61 "/opt/tinyos/tos/lib/timer/LocalTime.nc"
static uint32_t CC2420TKN154P__LocalTime__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = LocalTime62500hzP__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 110 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
static void TKN154TimingP__ReliableWait__waitBackoff(uint32_t dt)
{
  if (TKN154TimingP__m_state != TKN154TimingP__S_WAIT_OFF) {
      while (!0) {
#line 113
          break;
        }
#line 113
      ;
      return;
    }
  TKN154TimingP__m_state = TKN154TimingP__S_WAIT_BACKOFF;
  TKN154TimingP__SymbolAlarm__start(dt);
}

# 513 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__nextIterationUnslottedCsma(void )
{

  uint16_t backoff = CC2420TKN154P__getRandomBackoff(CC2420TKN154P__m_csma->BE);

#line 517
  CC2420TKN154P__m_state = CC2420TKN154P__S_TX_BACKOFF_UNSLOTTED;
  CC2420TKN154P__ReliableWait__waitBackoff(backoff);
}

# 14 "/opt/tinyos/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0018)))  void sig_TIMERB1_VECTOR(void )
#line 14
{
#line 14
  Msp430TimerCommonP__VectorTimerB1__fired();
}

# 63 "/opt/tinyos/tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 175 "/opt/tinyos/tos/chips/msp430/timer/Msp430ClockP.nc"
static void Msp430ClockP__set_dco_calib(int calib)
{
  BCSCTL1 = (BCSCTL1 & ~0x07) | ((calib >> 8) & 0x07);
  DCOCTL = calib & 0xff;
}

# 16 "/opt/tinyos/tos/platforms/telosb/MotePlatformC.nc"
static void MotePlatformC__TOSH_FLASH_M25P_DP_bit(bool set)
#line 16
{
  if (set) {
    TOSH_SET_SIMO0_PIN();
    }
  else {
#line 20
    TOSH_CLR_SIMO0_PIN();
    }
#line 21
  TOSH_SET_UCLK0_PIN();
  TOSH_CLR_UCLK0_PIN();
}

# 134 "/opt/tinyos/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x4059ab40){
#line 75
  switch (arg_0x4059ab40) {
#line 75
    case SnifferC__serialSendTask:
#line 75
      SnifferC__serialSendTask__runTask();
#line 75
      break;
#line 75
    case PibP__radioControlStopTask:
#line 75
      PibP__radioControlStopTask__runTask();
#line 75
      break;
#line 75
    case PibP__resetSpinTask:
#line 75
      PibP__resetSpinTask__runTask();
#line 75
      break;
#line 75
    case /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask:
#line 75
      /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case DispatchUnslottedCsmaP__signalTxDoneTask:
#line 75
      DispatchUnslottedCsmaP__signalTxDoneTask__runTask();
#line 75
      break;
#line 75
    case DispatchUnslottedCsmaP__wasRxEnabledTask:
#line 75
      DispatchUnslottedCsmaP__wasRxEnabledTask__runTask();
#line 75
      break;
#line 75
    case DispatchUnslottedCsmaP__startIndirectTxTimerTask:
#line 75
      DispatchUnslottedCsmaP__startIndirectTxTimerTask__runTask();
#line 75
      break;
#line 75
    case DispatchUnslottedCsmaP__signalStartConfirmTask:
#line 75
      DispatchUnslottedCsmaP__signalStartConfirmTask__runTask();
#line 75
      break;
#line 75
    case /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask:
#line 75
      /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask__runTask();
#line 75
      break;
#line 75
    case IndirectTxP__tryCoordCapTxTask:
#line 75
      IndirectTxP__tryCoordCapTxTask__runTask();
#line 75
      break;
#line 75
    case PromiscuousModeP__signalStartDoneTask:
#line 75
      PromiscuousModeP__signalStartDoneTask__runTask();
#line 75
      break;
#line 75
    case PromiscuousModeP__continueStopTask:
#line 75
      PromiscuousModeP__continueStopTask__runTask();
#line 75
      break;
#line 75
    case CC2420TKN154P__energyDetectionTask:
#line 75
      CC2420TKN154P__energyDetectionTask__runTask();
#line 75
      break;
#line 75
    case CC2420TKN154P__startDoneTask:
#line 75
      CC2420TKN154P__startDoneTask__runTask();
#line 75
      break;
#line 75
    case CC2420TKN154P__rxControlStopDoneTask:
#line 75
      CC2420TKN154P__rxControlStopDoneTask__runTask();
#line 75
      break;
#line 75
    case CC2420TKN154P__configSyncTask:
#line 75
      CC2420TKN154P__configSyncTask__runTask();
#line 75
      break;
#line 75
    case CC2420SpiP__grant:
#line 75
      CC2420SpiP__grant__runTask();
#line 75
      break;
#line 75
    case /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task:
#line 75
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask();
#line 75
      break;
#line 75
    case /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case CC2420ReceiveP__stopContinueTask:
#line 75
      CC2420ReceiveP__stopContinueTask__runTask();
#line 75
      break;
#line 75
    case CC2420ReceiveP__receiveDone_task:
#line 75
      CC2420ReceiveP__receiveDone_task__runTask();
#line 75
      break;
#line 75
    case /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case SerialP__RunTx:
#line 75
      SerialP__RunTx__runTask();
#line 75
      break;
#line 75
    case SerialP__startDoneTask:
#line 75
      SerialP__startDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__stopDoneTask:
#line 75
      SerialP__stopDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__defaultSerialFlushTask:
#line 75
      SerialP__defaultSerialFlushTask__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
#line 75
      break;
#line 75
    case /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask:
#line 75
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x4059ab40);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 85 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__configure(uint8_t id)
#line 85
{
  msp430_uart_union_config_t *config = /*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(id);

#line 87
  /*Msp430Uart1P.UartP*/Msp430UartP__0__m_byte_time = config->uartConfig.ubr / 2;
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__setModeUart(config);
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__enableIntr();
}

# 251 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static void HplMsp430Usart1P__Usart__disableSpi(void )
#line 251
{
  /* atomic removed: atomic calls only */
#line 252
  {
    HplMsp430Usart1P__ME2 &= ~0x10;
    HplMsp430Usart1P__SIMO__selectIOFunc();
    HplMsp430Usart1P__SOMI__selectIOFunc();
    HplMsp430Usart1P__UCLK__selectIOFunc();
  }
}

#line 211
static void HplMsp430Usart1P__Usart__disableUart(void )
#line 211
{
  /* atomic removed: atomic calls only */
#line 212
  {
    HplMsp430Usart1P__ME2 &= ~(0x20 | 0x10);
    HplMsp430Usart1P__UTXD__selectIOFunc();
    HplMsp430Usart1P__URXD__selectIOFunc();
  }
}

# 57 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )49U &= ~(0x01 << 4);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 177 "/opt/tinyos/tos/system/ArbiterP.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__Resource__isOwner(uint8_t id)
#line 177
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 178
    {
      if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__resId == id && /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY) {
          unsigned char __nesc_temp = 
#line 179
          TRUE;

          {
#line 179
            __nesc_atomic_end(__nesc_atomic); 
#line 179
            return __nesc_temp;
          }
        }
      else 
#line 180
        {
          unsigned char __nesc_temp = 
#line 180
          FALSE;

          {
#line 180
            __nesc_atomic_end(__nesc_atomic); 
#line 180
            return __nesc_temp;
          }
        }
    }
#line 183
    __nesc_atomic_end(__nesc_atomic); }
}

# 357 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static void SerialP__testOff(void )
#line 357
{
  bool turnOff = FALSE;

  /* atomic removed: atomic calls only */
#line 359
  {
    if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
    SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
        turnOff = TRUE;
      }
  }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      /* atomic removed: atomic calls only */
#line 367
      SerialP__offPending = FALSE;
    }
  else {
      /* atomic removed: atomic calls only */
#line 370
      SerialP__offPending = TRUE;
    }
}

# 98 "/opt/tinyos/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void )
#line 98
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
    }
#line 102
    __nesc_atomic_end(__nesc_atomic); }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 147 "/opt/tinyos/tos/chips/msp430/usart/Msp430UartP.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__send(uint8_t id, uint8_t *buf, uint16_t len)
#line 147
{
  if (/*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__isOwner(id) == FALSE) {
    return FAIL;
    }
#line 150
  if (len == 0) {
    return FAIL;
    }
  else {
#line 152
    if (/*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 154
  /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf = buf;
  /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_len = len;
  /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_pos = 0;
  /*Msp430Uart1P.UartP*/Msp430UartP__0__current_owner = id;
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__tx(buf[/*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_pos++]);
  return SUCCESS;
}

# 518 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static void SerialP__MaybeScheduleTx(void )
#line 518
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 519
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
#line 525
    __nesc_atomic_end(__nesc_atomic); }
}

# 109 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = Alarm32khzTo62500hzTransformC__Alarm__getNow(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID);
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 73 "/opt/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 393 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static void DispatchUnslottedCsmaP__IndirectTxWaitTimer__fired(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 395
    {
      if (DispatchUnslottedCsmaP__m_indirectTxPending) {
          DispatchUnslottedCsmaP__m_indirectTxPending = FALSE;
          DispatchUnslottedCsmaP__signalTxDoneTask__postTask();
        }
    }
#line 400
    __nesc_atomic_end(__nesc_atomic); }
}

# 225 "/opt/tinyos/tos/lib/mac/tkn154/DataP.nc"
static void DataP__finishTxTransaction(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  uint8_t handle = txFrame->handle;
  uint32_t txTime = __nesc_ntoh_uint32(txFrame->metadata->timestamp.nxdata);
  message_t *msg = (message_t *)((uint8_t *)txFrame->header - (unsigned short )& ((message_t *)0)->header);

  DataP__TxFramePool__put(txFrame);
  DataP__MCPS_DATA__confirm(msg, handle, status, txTime);
}

# 103 "/opt/tinyos/tos/system/PoolP.nc"
static error_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(/*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t *newVal)
#line 103
{
  if (/*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__free >= 4) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__index + /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__free;

#line 109
      if (emptyIndex >= 4) {
          emptyIndex -= 4;
        }
      /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__queue[emptyIndex] = newVal;
      /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__free++;
      ;
      return SUCCESS;
    }
}

# 144 "/opt/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 67 "/opt/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static void Alarm32khzTo62500hzTransformC__Alarm__startAt(uint8_t num, uint32_t t0, uint32_t dt)
#line 67
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 69
    {
      uint32_t now = Alarm32khzTo62500hzTransformC__Alarm__getNow(num);
#line 70
      uint32_t elapsed;

#line 71
      if (t0 < now) {
        elapsed = now - t0;
        }
      else {
#line 74
        elapsed = ~(t0 - now) + 1;
        }
#line 75
      if (elapsed > dt) {
        dt = elapsed;
        }
#line 77
      dt -= elapsed;
      Alarm32khzTo62500hzTransformC__Alarm__start(num, dt);
    }
#line 79
    __nesc_atomic_end(__nesc_atomic); }
}

# 183 "/opt/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__startAt(uint8_t id, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type t0, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt)
#line 183
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 184
    {
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].t0 = t0;
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].dt = dt;
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset[id] = TRUE;
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__setNextAlarm();
    }
#line 189
    __nesc_atomic_end(__nesc_atomic); }
}





static /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(uint8_t id)
#line 196
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 197
    {
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type __nesc_temp = 
#line 197
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].t0 + /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].dt;

      {
#line 197
        __nesc_atomic_end(__nesc_atomic); 
#line 197
        return __nesc_temp;
      }
    }
#line 199
    __nesc_atomic_end(__nesc_atomic); }
}

# 91 "SnifferC.nc"
static message_t *SnifferC__MCPS_DATA__indication(message_t *frame)
{


  SnifferC__Leds__led1Toggle();
  if (SnifferC__Queue__enqueue(frame) != SUCCESS) {
      SnifferC__Leds__led0On();
      return frame;
    }
  else 
#line 99
    {
      SnifferC__serialSendTask__postTask();
      return SnifferC__Pool__get();
    }
}

# 728 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static uint8_t PibP__Frame__getHeaderLength(message_t *frame)
{
  uint8_t len;
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;

#line 732
  PibP__FrameUtility__getMHRLength(mhr[0], mhr[1], &len);
  return len;
}

#line 653
static error_t PibP__FrameUtility__getMHRLength(uint8_t fcf1, uint8_t fcf2, uint8_t *len)
{
  uint8_t idCompression;
  uint8_t offset = MHR_INDEX_ADDRESS;

  if (fcf1 & FC1_SECURITY_ENABLED) {
    return FAIL;
    }
#line 660
  idCompression = fcf1 & FC1_PAN_ID_COMPRESSION;
  if (fcf2 & 0x08) {
      offset += 4;
      if (fcf2 & 0x04) {
        offset += 6;
        }
    }
#line 666
  if (fcf2 & 0x80) {
      offset += 2;
      if (!idCompression) {
        offset += 2;
        }
#line 670
      if (fcf2 & 0x40) {
        offset += 6;
        }
    }
#line 673
  *len = offset;
  return SUCCESS;
}

# 79 "/opt/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static ieee154_status_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmit(uint8_t client, ieee154_txframe_t *txFrame)
{
  txFrame->client = client;
  if (/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__isResetPending() || /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__enqueue(txFrame) != SUCCESS) {
    return IEEE154_TRANSACTION_OVERFLOW;
    }
  else 
#line 84
    {
      /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask__postTask();
      return IEEE154_SUCCESS;
    }
}

# 482 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static void CC2420ReceiveP__waitForNextPacket(void )
#line 482
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 483
    {
      if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) {
          CC2420ReceiveP__SpiResource__release();
          {
#line 486
            __nesc_atomic_end(__nesc_atomic); 
#line 486
            return;
          }
        }
#line 488
      CC2420ReceiveP__receivingPacket = FALSE;
      if (CC2420ReceiveP__m_stop) {
          CC2420ReceiveP__continueStop();
          {
#line 491
            __nesc_atomic_end(__nesc_atomic); 
#line 491
            return;
          }
        }
      if ((CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get()) {

          if (CC2420ReceiveP__m_missed_packets) {
              CC2420ReceiveP__m_missed_packets--;
            }

          CC2420ReceiveP__beginReceive();
        }
      else {

          CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
          CC2420ReceiveP__m_missed_packets = 0;
          CC2420ReceiveP__SpiResource__release();
        }
    }
#line 508
    __nesc_atomic_end(__nesc_atomic); }
}

#line 430
static void CC2420ReceiveP__beginReceive(void )
#line 430
{
  /* atomic removed: atomic calls only */
#line 431
  {
    if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED || CC2420ReceiveP__m_stop) {
        return;
      }
    CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
    CC2420ReceiveP__receivingPacket = TRUE;

    if (CC2420ReceiveP__SpiResource__isOwner()) {
        CC2420ReceiveP__receive();
      }
    else {
#line 441
      if (CC2420ReceiveP__SpiResource__immediateRequest() == SUCCESS) {
          CC2420ReceiveP__receive();
        }
      else {
          CC2420ReceiveP__SpiResource__request();
        }
      }
  }
}

#line 470
static void CC2420ReceiveP__receive(void )
#line 470
{
  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__CSN__clr();

  CC2420ReceiveP__RXFIFO__beginRead(& ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->length, 1);
}

# 329 "/opt/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
#line 330
{
  if (CC2420SpiP__m_addr & 0x40) {
      CC2420SpiP__Fifo__readDone(CC2420SpiP__m_addr & ~0x40, rx_buf, len, error);
    }
  else 
#line 333
    {
      CC2420SpiP__Fifo__writeDone(CC2420SpiP__m_addr, tx_buf, len, error);
    }
}

# 453 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static void CC2420ReceiveP__flush(void )
#line 453
{
  CC2420ReceiveP__reset_state();
  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__SpiResource__release();
  CC2420ReceiveP__waitForNextPacket();
}

# 207 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static void PibP__RadioControl__stopDone(error_t result)
{




  if (PibP__RadioToken__isOwner()) {
      while (!(result == SUCCESS)) {
#line 214
          break;
        }
#line 214
      ;
      PibP__DispatchReset__init();
      PibP__DispatchQueueReset__init();
      PibP__MacReset__init();
      PibP__resetSpinTask__postTask();
    }
}

# 127 "/opt/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static error_t DispatchUnslottedCsmaP__Reset__init(void )
{
  if (DispatchUnslottedCsmaP__m_currentFrame) {
    DispatchUnslottedCsmaP__FrameTx__transmitDone(DispatchUnslottedCsmaP__m_currentFrame, IEEE154_TRANSACTION_OVERFLOW);
    }
#line 131
  if (DispatchUnslottedCsmaP__m_lastFrame) {
    DispatchUnslottedCsmaP__FrameTx__transmitDone(DispatchUnslottedCsmaP__m_lastFrame, IEEE154_TRANSACTION_OVERFLOW);
    }
#line 133
  DispatchUnslottedCsmaP__m_currentFrame = DispatchUnslottedCsmaP__m_lastFrame = (void *)0;
  DispatchUnslottedCsmaP__IndirectTxWaitTimer__stop();
  return SUCCESS;
}

# 107 "/opt/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTxCsma__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__resetTxDonePending();
  if (!/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__size()) {
    return;
    }
#line 112
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__dequeue();
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmitDone(txFrame->client, txFrame, status);
  if (FALSE && status == IEEE154_NO_BEACON) {

      while (/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__size()) {
          ieee154_txframe_t *frame = /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__dequeue();

#line 118
          /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmitDone(frame->client, frame, IEEE154_NO_BEACON);
        }
    }
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask__postTask();
}

# 85 "/opt/tinyos/tos/system/QueueC.nc"
static /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__dequeue(void )
#line 85
{
  /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue_t t = /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__head();

#line 87
  ;
  if (!/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__empty()) {
      /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__head++;
      if (/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__head == 4) {
#line 90
        /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__head = 0;
        }
#line 91
      /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__size--;
      /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__printQueue();
    }
  return t;
}

# 132 "/opt/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__default__transmitDone(uint8_t client, ieee154_txframe_t *txFrame, ieee154_status_t status)
#line 132
{
}

# 51 "/opt/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmitDone(uint8_t arg_0x40bcdaf8, ieee154_txframe_t *txFrame, ieee154_status_t status){
#line 51
  switch (arg_0x40bcdaf8) {
#line 51
    case 0U:
#line 51
      NoBeaconRequestRxP__BeaconRequestResponseTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 1U:
#line 51
      NoAssociateP__AssociationRequestTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 2U:
#line 51
      NoDisassociateP__DisassociationDirectTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 3U:
#line 51
      NoDisassociateP__DisassociationToCoord__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 4U:
#line 51
      DataP__DeviceCapTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 5U:
#line 51
      DataP__CoordCapTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 6U:
#line 51
      PollP__PollTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 7U:
#line 51
      IndirectTxP__CoordCapTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 8U:
#line 51
      NoCoordRealignmentP__CoordRealignmentTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    default:
#line 51
      /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__default__transmitDone(arg_0x40bcdaf8, txFrame, status);
#line 51
      break;
#line 51
    }
#line 51
}
#line 51
# 365 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__offSpiReserved(void )
{
  CC2420TKN154P__TxControl__stop();
  CC2420TKN154P__CC2420Power__rfOff();
  CC2420TKN154P__CC2420Power__flushRxFifo();
  CC2420TKN154P__CC2420Tx__unlockChipSpi();
  CC2420TKN154P__SpiResource__release();
  CC2420TKN154P__m_state = CC2420TKN154P__S_RADIO_OFF;
  CC2420TKN154P__RadioOff__offDone();
}

# 138 "/opt/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static void PromiscuousModeP__RadioOff__offDone(void )
{
  if (PromiscuousModeP__m_state == PromiscuousModeP__S_STARTING) {
      PromiscuousModeP__PromiscuousRx__enableRx(0, 0);
    }
  else {
#line 143
    PromiscuousModeP__continueStopTask__postTask();
    }
}

# 296 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static void CC2420ControlP__CC2420Config__setChannel(uint8_t channel)
#line 296
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 297
    {
      CC2420ControlP__m_needsSync = TRUE;
      CC2420ControlP__m_channel = channel;
    }
#line 300
    __nesc_atomic_end(__nesc_atomic); }
}

# 105 "/opt/tinyos/tos/lib/mac/tkn154/PibP.nc"
static void PibP__resetAttributesToDefault(void )
#line 105
{
  PibP__m_pib.phyCurrentChannel = 26;
  PibP__m_pib.phyTransmitPower = IEEE154_TXPOWER_TOLERANCE | (0 & 0x3F);
  PibP__m_pib.phyCCAMode = 3;
  PibP__m_pib.phyCurrentPage = 0;

  PibP__m_pib.macAssociatedPANCoord = FALSE;
  PibP__m_pib.macAssociationPermit = FALSE;
  PibP__m_pib.macAutoRequest = TRUE;
  PibP__m_pib.macBattLifeExt = FALSE;
  PibP__m_pib.macBattLifeExtPeriods = 6;
  PibP__m_pib.macBeaconPayloadLength = 0;
  PibP__m_pib.macBeaconOrder = 15;
  PibP__m_pib.macBeaconTxTime = 0;
  PibP__m_pib.macBSN = 0xFF & PibP__Random__rand16();

  PibP__m_pib.macCoordShortAddress = 0xFFFF;
  PibP__m_pib.macDSN = 0xFF & PibP__Random__rand16();
  PibP__m_pib.macGTSPermit = TRUE;
  PibP__m_pib.macMaxBE = 5;
  PibP__m_pib.macMaxCSMABackoffs = 4;
  PibP__m_pib.macMaxFrameRetries = 3;
  PibP__m_pib.macMinBE = 3;
  PibP__m_pib.macPANId = 0xFFFF;
  PibP__m_pib.macPromiscuousMode = FALSE;
  PibP__m_pib.macResponseWaitTime = 32;
  PibP__m_pib.macRxOnWhenIdle = FALSE;
  PibP__m_pib.macSecurityEnabled = FALSE;
  PibP__m_pib.macShortAddress = 0xFFFF;
  PibP__m_pib.macSuperframeOrder = 15;
  PibP__m_pib.macTransactionPersistenceTime = 0x01F4;
  PibP__m_pib.macPanCoordinator = FALSE;
  PibP__updateMacMaxFrameTotalWaitTime();
}

#line 1063
static void PibP__PIBUpdate__default__notify(uint8_t PIBAttributeID, const void *PIBAttributeValue)
#line 1063
{
}

# 74 "/opt/tinyos/tos/interfaces/Notify.nc"
static void PibP__PIBUpdate__notify(uint8_t arg_0x409d7b80, PibP__PIBUpdate__val_t val){
#line 74
  switch (arg_0x409d7b80) {
#line 74
    case IEEE154_phyCurrentChannel:
#line 74
      CC2420TKN154P__PIBUpdate__notify(IEEE154_phyCurrentChannel, val);
#line 74
      break;
#line 74
    case IEEE154_phyTransmitPower:
#line 74
      CC2420TKN154P__PIBUpdate__notify(IEEE154_phyTransmitPower, val);
#line 74
      break;
#line 74
    case IEEE154_phyCCAMode:
#line 74
      CC2420TKN154P__PIBUpdate__notify(IEEE154_phyCCAMode, val);
#line 74
      break;
#line 74
    case IEEE154_macPANId:
#line 74
      CC2420TKN154P__PIBUpdate__notify(IEEE154_macPANId, val);
#line 74
      break;
#line 74
    case IEEE154_macRxOnWhenIdle:
#line 74
      DispatchUnslottedCsmaP__PIBUpdateMacRxOnWhenIdle__notify(val);
#line 74
      break;
#line 74
    case IEEE154_macShortAddress:
#line 74
      CC2420TKN154P__PIBUpdate__notify(IEEE154_macShortAddress, val);
#line 74
      break;
#line 74
    case IEEE154_macPanCoordinator:
#line 74
      CC2420TKN154P__PIBUpdate__notify(IEEE154_macPanCoordinator, val);
#line 74
      break;
#line 74
    default:
#line 74
      PibP__PIBUpdate__default__notify(arg_0x409d7b80, val);
#line 74
      break;
#line 74
    }
#line 74
}
#line 74
# 244 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__PIBUpdate__notify(uint8_t PIBAttribute, const void *PIBAttributeValue)
{
  uint8_t txpower;

#line 247
  switch (PIBAttribute) 
    {
      case IEEE154_macShortAddress: 
        CC2420TKN154P__CC2420Config__setShortAddr(* (ieee154_macShortAddress_t *)PIBAttributeValue);
      break;
      case IEEE154_macPANId: 
        CC2420TKN154P__CC2420Config__setPanAddr(* (ieee154_macPANId_t *)PIBAttributeValue);
      break;
      case IEEE154_phyCurrentChannel: 
        CC2420TKN154P__CC2420Config__setChannel(* (ieee154_phyCurrentChannel_t *)PIBAttributeValue);
      break;
      case IEEE154_macPanCoordinator: 
        CC2420TKN154P__CC2420Config__setPanCoordinator(* (ieee154_macPanCoordinator_t *)PIBAttributeValue);
      break;
      case IEEE154_phyTransmitPower: 

        txpower = * (ieee154_phyTransmitPower_t *)PIBAttributeValue & 0x3F;
      if (txpower & 0x20) {
        txpower |= 0xC0;
        }
#line 266
      CC2420TKN154P__CC2420Config__setTxPower(CC2420TKN154P__dBmToPA_LEVEL((int8_t )txpower));
      break;
      case IEEE154_phyCCAMode: 
        CC2420TKN154P__CC2420Config__setCCAMode(* (ieee154_phyCCAMode_t *)PIBAttributeValue);
      break;
    }
  if (CC2420TKN154P__m_state == CC2420TKN154P__S_RECEIVING || CC2420TKN154P__m_state == CC2420TKN154P__S_RX_PENDING) {
    CC2420TKN154P__configSyncTask__postTask();
    }
}

# 336 "/opt/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static void CC2420ControlP__CC2420Config__setPromiscuousMode(bool on)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 338
    {
      CC2420ControlP__m_needsSync = TRUE;
      if (on) {
          CC2420ControlP__addressRecognition = FALSE;
          CC2420ControlP__acceptReservedFrames = TRUE;
          CC2420ControlP__autoAckEnabled = FALSE;
        }
      else 
#line 344
        {
          CC2420ControlP__addressRecognition = TRUE;
          CC2420ControlP__acceptReservedFrames = FALSE;
          CC2420ControlP__autoAckEnabled = TRUE;
        }
    }
#line 349
    __nesc_atomic_end(__nesc_atomic); }
}

# 64 "/opt/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0008)))  void sig_PORT1_VECTOR(void )
{
  volatile int n = P1IFG & P1IE;

  if (n & (1 << 0)) {
#line 68
      HplMsp430InterruptP__Port10__fired();
#line 68
      return;
    }
#line 69
  if (n & (1 << 1)) {
#line 69
      HplMsp430InterruptP__Port11__fired();
#line 69
      return;
    }
#line 70
  if (n & (1 << 2)) {
#line 70
      HplMsp430InterruptP__Port12__fired();
#line 70
      return;
    }
#line 71
  if (n & (1 << 3)) {
#line 71
      HplMsp430InterruptP__Port13__fired();
#line 71
      return;
    }
#line 72
  if (n & (1 << 4)) {
#line 72
      HplMsp430InterruptP__Port14__fired();
#line 72
      return;
    }
#line 73
  if (n & (1 << 5)) {
#line 73
      HplMsp430InterruptP__Port15__fired();
#line 73
      return;
    }
#line 74
  if (n & (1 << 6)) {
#line 74
      HplMsp430InterruptP__Port16__fired();
#line 74
      return;
    }
#line 75
  if (n & (1 << 7)) {
#line 75
      HplMsp430InterruptP__Port17__fired();
#line 75
      return;
    }
}

#line 169
__attribute((wakeup)) __attribute((interrupt(0x0002)))  void sig_PORT2_VECTOR(void )
{
  volatile int n = P2IFG & P2IE;

  if (n & (1 << 0)) {
#line 173
      HplMsp430InterruptP__Port20__fired();
#line 173
      return;
    }
#line 174
  if (n & (1 << 1)) {
#line 174
      HplMsp430InterruptP__Port21__fired();
#line 174
      return;
    }
#line 175
  if (n & (1 << 2)) {
#line 175
      HplMsp430InterruptP__Port22__fired();
#line 175
      return;
    }
#line 176
  if (n & (1 << 3)) {
#line 176
      HplMsp430InterruptP__Port23__fired();
#line 176
      return;
    }
#line 177
  if (n & (1 << 4)) {
#line 177
      HplMsp430InterruptP__Port24__fired();
#line 177
      return;
    }
#line 178
  if (n & (1 << 5)) {
#line 178
      HplMsp430InterruptP__Port25__fired();
#line 178
      return;
    }
#line 179
  if (n & (1 << 6)) {
#line 179
      HplMsp430InterruptP__Port26__fired();
#line 179
      return;
    }
#line 180
  if (n & (1 << 7)) {
#line 180
      HplMsp430InterruptP__Port27__fired();
#line 180
      return;
    }
}

# 96 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
__attribute((wakeup)) __attribute((interrupt(0x0012)))  void sig_UART0RX_VECTOR(void )
#line 96
{
  uint8_t temp = U0RXBUF;

#line 98
  HplMsp430Usart0P__Interrupts__rxDone(temp);
}

# 153 "/opt/tinyos/tos/system/ArbiterP.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void )
#line 153
{
  /* atomic removed: atomic calls only */
#line 154
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) 
      {
        unsigned char __nesc_temp = 
#line 156
        FALSE;

#line 156
        return __nesc_temp;
      }
  }
#line 158
  return TRUE;
}






static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void )
#line 166
{
  /* atomic removed: atomic calls only */
#line 167
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state != /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY) 
      {
        unsigned char __nesc_temp = 
#line 169
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__NO_RES;

#line 169
        return __nesc_temp;
      }
#line 170
    {
      unsigned char __nesc_temp = 
#line 170
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId;

#line 170
      return __nesc_temp;
    }
  }
}

# 101 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
__attribute((wakeup)) __attribute((interrupt(0x0010)))  void sig_UART0TX_VECTOR(void )
#line 101
{
  if (HplMsp430Usart0P__HplI2C__isI2C()) {
    HplMsp430Usart0P__I2CInterrupts__fired();
    }
  else {
#line 105
    HplMsp430Usart0P__Interrupts__txDone();
    }
}

# 96 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
__attribute((wakeup)) __attribute((interrupt(0x0006)))  void sig_UART1RX_VECTOR(void )
#line 96
{
  uint8_t temp = U1RXBUF;

#line 98
  HplMsp430Usart1P__Interrupts__rxDone(temp);
}

# 153 "/opt/tinyos/tos/system/ArbiterP.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__inUse(void )
#line 153
{
  /* atomic removed: atomic calls only */
#line 154
  {
    if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED) 
      {
        unsigned char __nesc_temp = 
#line 156
        FALSE;

#line 156
        return __nesc_temp;
      }
  }
#line 158
  return TRUE;
}

# 412 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data)
#line 412
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxCRC = crcByte(SerialP__rxCRC, data);
            SerialP__rxState = SerialP__RXSTATE_TOKEN;
            SerialP__rxProto = data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            if (SerialP__rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        SerialP__ack_queue_push(SerialP__rxSeqno);
                        SerialP__rxInit();
                        SerialP__SerialFrameComm__resetReceive();
                        if (SerialP__offPending) {
                            SerialP__rxState = SerialP__RXSTATE_INACTIVE;
                            SerialP__testOff();
                          }
                        goto done;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

# 91 "/opt/tinyos/tos/system/crc.h"
static uint16_t crcByte(uint16_t crc, uint8_t b)
#line 91
{
  crc = (uint8_t )(crc >> 8) | (crc << 8);
  crc ^= b;
  crc ^= (uint8_t )(crc & 0xff) >> 4;
  crc ^= crc << 12;
  crc ^= (crc & 0xff) << 5;
  return crc;
}

# 296 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
#line 296
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 298
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
#line 308
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

# 166 "/opt/tinyos/tos/system/ArbiterP.nc"
static uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId(void )
#line 166
{
  /* atomic removed: atomic calls only */
#line 167
  {
    if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__state != /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY) 
      {
        unsigned char __nesc_temp = 
#line 169
        /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__NO_RES;

#line 169
        return __nesc_temp;
      }
#line 170
    {
      unsigned char __nesc_temp = 
#line 170
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__1__resId;

#line 170
      return __nesc_temp;
    }
  }
}

# 101 "/opt/tinyos/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
__attribute((wakeup)) __attribute((interrupt(0x0004)))  void sig_UART1TX_VECTOR(void )
#line 101
{
  HplMsp430Usart1P__Interrupts__txDone();
}

# 118 "/opt/tinyos/tos/lib/serial/HdlcTranslateC.nc"
static void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 119
{
  /* atomic removed: atomic calls only */
#line 120
  {
    if (HdlcTranslateC__state.sendEscape) {
        HdlcTranslateC__state.sendEscape = 0;
        HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
        HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
      }
    else {
        HdlcTranslateC__SerialFrameComm__putDone();
      }
  }
}

#line 106
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data)
#line 106
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

