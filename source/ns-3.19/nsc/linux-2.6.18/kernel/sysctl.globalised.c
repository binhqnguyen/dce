# 1 "linux-2.6.18/kernel/sysctl.c"
# 1 "/var/tmp/ns3/nsc//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "linux-2.6.18/include/linux/config.h" 1





# 1 "linux-2.6.18/include/linux/autoconf.h" 1
# 7 "linux-2.6.18/include/linux/config.h" 2
# 1 "<command-line>" 2
# 1 "linux-2.6.18/nsc/nsc_override.h" 1




#include "num_stacks.h"
static inline struct task_struct * get_nsc_task(void)
{
  typedef  struct task_struct   _GLOBAL_0_T; extern  _GLOBAL_0_T  * global_nsc_task[NUM_STACKS];    
  return global_nsc_task[get_stack_id()];
}
# 1 "<command-line>" 2
# 1 "linux-2.6.18/kernel/sysctl.c"
# 21 "linux-2.6.18/kernel/sysctl.c"
# 1 "linux-2.6.18/include/linux/module.h" 1
# 9 "linux-2.6.18/include/linux/module.h"
# 1 "linux-2.6.18/include/linux/sched.h" 1



# 1 "linux-2.6.18/include/linux/auxvec.h" 1



# 1 "linux-2.6.18/include/asm/auxvec.h" 1
# 5 "linux-2.6.18/include/linux/auxvec.h" 2
# 5 "linux-2.6.18/include/linux/sched.h" 2
# 38 "linux-2.6.18/include/linux/sched.h"
struct sched_param {
 int sched_priority;
};

# 1 "linux-2.6.18/include/asm/param.h" 1
# 43 "linux-2.6.18/include/linux/sched.h" 2

# 1 "linux-2.6.18/include/linux/capability.h" 1
# 16 "linux-2.6.18/include/linux/capability.h"
# 1 "linux-2.6.18/include/linux/types.h" 1
# 14 "linux-2.6.18/include/linux/types.h"
# 1 "linux-2.6.18/include/linux/posix_types.h" 1



# 1 "linux-2.6.18/include/linux/stddef.h" 1



# 1 "linux-2.6.18/include/linux/compiler.h" 1
# 42 "linux-2.6.18/include/linux/compiler.h"
# 1 "linux-2.6.18/include/linux/compiler-gcc4.h" 1



# 1 "linux-2.6.18/include/linux/compiler-gcc.h" 1
# 5 "linux-2.6.18/include/linux/compiler-gcc4.h" 2
# 43 "linux-2.6.18/include/linux/compiler.h" 2
# 5 "linux-2.6.18/include/linux/stddef.h" 2
# 5 "linux-2.6.18/include/linux/posix_types.h" 2
# 36 "linux-2.6.18/include/linux/posix_types.h"
typedef struct {
 unsigned long fds_bits [(1024/(8 * sizeof(unsigned long)))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "linux-2.6.18/include/asm/posix_types.h" 1
# 10 "linux-2.6.18/include/asm/posix_types.h"
typedef unsigned long __kernel_ino_t;
typedef unsigned int __kernel_mode_t;
typedef unsigned long __kernel_nlink_t;
typedef long __kernel_off_t;
typedef int __kernel_pid_t;
typedef int __kernel_ipc_pid_t;
typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;
typedef unsigned long __kernel_size_t;
typedef long __kernel_ssize_t;
typedef long __kernel_ptrdiff_t;
typedef long __kernel_time_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef int __kernel_daddr_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;


typedef long long __kernel_loff_t;


typedef struct {
 int val[2];
} __kernel_fsid_t;

typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef __kernel_uid_t __kernel_uid32_t;
typedef __kernel_gid_t __kernel_gid32_t;

typedef unsigned long __kernel_old_dev_t;




static __inline__  __attribute__((always_inline)) void __FD_SET(unsigned long fd, __kernel_fd_set *fdsetp)
{
 unsigned long _tmp = fd / (8 * sizeof(unsigned long));
 unsigned long _rem = fd % (8 * sizeof(unsigned long));
 fdsetp->fds_bits[_tmp] |= (1UL<<_rem);
}


static __inline__  __attribute__((always_inline)) void __FD_CLR(unsigned long fd, __kernel_fd_set *fdsetp)
{
 unsigned long _tmp = fd / (8 * sizeof(unsigned long));
 unsigned long _rem = fd % (8 * sizeof(unsigned long));
 fdsetp->fds_bits[_tmp] &= ~(1UL<<_rem);
}


static __inline__  __attribute__((always_inline)) int __FD_ISSET(unsigned long fd, __const__ __kernel_fd_set *p)
{
 unsigned long _tmp = fd / (8 * sizeof(unsigned long));
 unsigned long _rem = fd % (8 * sizeof(unsigned long));
 return (p->fds_bits[_tmp] & (1UL<<_rem)) != 0;
}






static __inline__  __attribute__((always_inline)) void __FD_ZERO(__kernel_fd_set *p)
{
 unsigned long *tmp = p->fds_bits;
 int i;

 if (__builtin_constant_p((1024/(8 * sizeof(unsigned long))))) {
  switch ((1024/(8 * sizeof(unsigned long)))) {
   case 32:
     tmp[ 0] = 0; tmp[ 1] = 0; tmp[ 2] = 0; tmp[ 3] = 0;
     tmp[ 4] = 0; tmp[ 5] = 0; tmp[ 6] = 0; tmp[ 7] = 0;
     tmp[ 8] = 0; tmp[ 9] = 0; tmp[10] = 0; tmp[11] = 0;
     tmp[12] = 0; tmp[13] = 0; tmp[14] = 0; tmp[15] = 0;
     tmp[16] = 0; tmp[17] = 0; tmp[18] = 0; tmp[19] = 0;
     tmp[20] = 0; tmp[21] = 0; tmp[22] = 0; tmp[23] = 0;
     tmp[24] = 0; tmp[25] = 0; tmp[26] = 0; tmp[27] = 0;
     tmp[28] = 0; tmp[29] = 0; tmp[30] = 0; tmp[31] = 0;
     return;
   case 16:
     tmp[ 0] = 0; tmp[ 1] = 0; tmp[ 2] = 0; tmp[ 3] = 0;
     tmp[ 4] = 0; tmp[ 5] = 0; tmp[ 6] = 0; tmp[ 7] = 0;
     tmp[ 8] = 0; tmp[ 9] = 0; tmp[10] = 0; tmp[11] = 0;
     tmp[12] = 0; tmp[13] = 0; tmp[14] = 0; tmp[15] = 0;
     return;
   case 8:
     tmp[ 0] = 0; tmp[ 1] = 0; tmp[ 2] = 0; tmp[ 3] = 0;
     tmp[ 4] = 0; tmp[ 5] = 0; tmp[ 6] = 0; tmp[ 7] = 0;
     return;
   case 4:
     tmp[ 0] = 0; tmp[ 1] = 0; tmp[ 2] = 0; tmp[ 3] = 0;
     return;
  }
 }
 i = (1024/(8 * sizeof(unsigned long)));
 while (i) {
  i--;
  *tmp = 0;
  tmp++;
 }
}
# 48 "linux-2.6.18/include/linux/posix_types.h" 2
# 15 "linux-2.6.18/include/linux/types.h" 2
# 1 "linux-2.6.18/include/asm/types.h" 1





typedef unsigned short umode_t;






typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;

typedef __signed__ long long __s64;
typedef unsigned long long __u64;
# 36 "linux-2.6.18/include/asm/types.h"
typedef signed char s8;
typedef unsigned char u8;

typedef signed short s16;
typedef unsigned short u16;

typedef signed int s32;
typedef unsigned int u32;

typedef signed long long s64;
typedef unsigned long long u64;

typedef u64 dma64_addr_t;
typedef u64 dma_addr_t;

typedef u64 sector_t;
# 16 "linux-2.6.18/include/linux/types.h" 2



typedef __u32 __kernel_dev_t;

typedef __kernel_fd_set fd_set;
typedef __kernel_dev_t dev_t;
typedef __kernel_ino_t ino_t;
typedef __kernel_mode_t mode_t;
typedef __kernel_nlink_t nlink_t;
typedef __kernel_off_t off_t;
typedef __kernel_pid_t pid_t;
typedef __kernel_daddr_t daddr_t;
typedef __kernel_key_t key_t;
typedef __kernel_suseconds_t suseconds_t;
typedef __kernel_timer_t timer_t;
typedef __kernel_clockid_t clockid_t;
typedef __kernel_mqd_t mqd_t;


typedef __kernel_uid32_t uid_t;
typedef __kernel_gid32_t gid_t;
typedef __kernel_uid16_t uid16_t;
typedef __kernel_gid16_t gid16_t;
# 56 "linux-2.6.18/include/linux/types.h"
typedef __kernel_loff_t loff_t;
# 65 "linux-2.6.18/include/linux/types.h"
typedef __kernel_size_t size_t;




typedef __kernel_ssize_t ssize_t;




typedef __kernel_ptrdiff_t ptrdiff_t;




typedef __kernel_time_t time_t;




typedef __kernel_clock_t clock_t;




typedef __kernel_caddr_t caddr_t;



typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;


typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;




typedef __u8 u_int8_t;
typedef __s8 int8_t;
typedef __u16 u_int16_t;
typedef __s16 int16_t;
typedef __u32 u_int32_t;
typedef __s32 int32_t;



typedef __u8 uint8_t;
typedef __u16 uint16_t;
typedef __u32 uint32_t;


typedef __u64 uint64_t;
typedef __u64 u_int64_t;
typedef __s64 int64_t;
# 140 "linux-2.6.18/include/linux/types.h"
typedef unsigned long blkcnt_t;
# 169 "linux-2.6.18/include/linux/types.h"
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;

typedef __u64 __le64;
typedef __u64 __be64;



typedef unsigned gfp_t;




typedef u32 resource_size_t;




struct ustat {
 __kernel_daddr_t f_tfree;
 __kernel_ino_t f_tinode;
 char f_fname[6];
 char f_fpack[6];
};
# 17 "linux-2.6.18/include/linux/capability.h" 2
# 32 "linux-2.6.18/include/linux/capability.h"
typedef struct __user_cap_header_struct {
 __u32 version;
 int pid;
} *cap_user_header_t;

typedef struct __user_cap_data_struct {
        __u32 effective;
        __u32 permitted;
        __u32 inheritable;
} *cap_user_data_t;



# 1 "linux-2.6.18/include/linux/spinlock.h" 1
# 49 "linux-2.6.18/include/linux/spinlock.h"
# 1 "linux-2.6.18/include/linux/preempt.h" 1
# 9 "linux-2.6.18/include/linux/preempt.h"
# 1 "linux-2.6.18/include/linux/thread_info.h" 1
# 13 "linux-2.6.18/include/linux/thread_info.h"
struct restart_block {
 long (*fn)(struct restart_block *);
 unsigned long arg0, arg1, arg2, arg3;
};

extern long do_no_restart_syscall(struct restart_block *parm);

# 1 "linux-2.6.18/include/linux/bitops.h" 1
# 9 "linux-2.6.18/include/linux/bitops.h"
# 1 "linux-2.6.18/include/asm/bitops.h" 1







# 1 "linux-2.6.18/include/asm/alternative.h" 1






# 1 "linux-2.6.18/include/asm/cpufeature.h" 1
# 8 "linux-2.6.18/include/asm/alternative.h" 2

struct alt_instr {
 u8 *instr;
 u8 *replacement;
 u8 cpuid;
 u8 instrlen;
 u8 replacementlen;
 u8 pad[5];
};

extern void apply_alternatives(struct alt_instr *start, struct alt_instr *end);

struct module;
# 29 "linux-2.6.18/include/asm/alternative.h"
static inline  __attribute__((always_inline)) void alternatives_smp_module_add(struct module *mod, char *name,
     void *locks, void *locks_end,
     void *text, void *text_end) {}
static inline  __attribute__((always_inline)) void alternatives_smp_module_del(struct module *mod) {}
static inline  __attribute__((always_inline)) void alternatives_smp_switch(int smp) {}
# 9 "linux-2.6.18/include/asm/bitops.h" 2
# 22 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) void set_bit(int nr, volatile void * addr)
{
 __asm__ __volatile__( ""
  "btsl %1,%0"
  :"+m" ((*(volatile long *) addr))
  :"dIr" (nr) : "memory");
}
# 39 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) void __set_bit(int nr, volatile void * addr)
{
 __asm__ volatile(
  "btsl %1,%0"
  :"+m" ((*(volatile long *) addr))
  :"dIr" (nr) : "memory");
}
# 57 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) void clear_bit(int nr, volatile void * addr)
{
 __asm__ __volatile__( ""
  "btrl %1,%0"
  :"+m" ((*(volatile long *) addr))
  :"dIr" (nr));
}

static __inline__  __attribute__((always_inline)) void __clear_bit(int nr, volatile void * addr)
{
 __asm__ __volatile__(
  "btrl %1,%0"
  :"+m" ((*(volatile long *) addr))
  :"dIr" (nr));
}
# 85 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) void __change_bit(int nr, volatile void * addr)
{
 __asm__ __volatile__(
  "btcl %1,%0"
  :"+m" ((*(volatile long *) addr))
  :"dIr" (nr));
}
# 102 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) void change_bit(int nr, volatile void * addr)
{
 __asm__ __volatile__( ""
  "btcl %1,%0"
  :"+m" ((*(volatile long *) addr))
  :"dIr" (nr));
}
# 118 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) int test_and_set_bit(int nr, volatile void * addr)
{
 int oldbit;

 __asm__ __volatile__( ""
  "btsl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" ((*(volatile long *) addr))
  :"dIr" (nr) : "memory");
 return oldbit;
}
# 138 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) int __test_and_set_bit(int nr, volatile void * addr)
{
 int oldbit;

 __asm__(
  "btsl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" ((*(volatile long *) addr))
  :"dIr" (nr));
 return oldbit;
}
# 157 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) int test_and_clear_bit(int nr, volatile void * addr)
{
 int oldbit;

 __asm__ __volatile__( ""
  "btrl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" ((*(volatile long *) addr))
  :"dIr" (nr) : "memory");
 return oldbit;
}
# 177 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) int __test_and_clear_bit(int nr, volatile void * addr)
{
 int oldbit;

 __asm__(
  "btrl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" ((*(volatile long *) addr))
  :"dIr" (nr));
 return oldbit;
}


static __inline__  __attribute__((always_inline)) int __test_and_change_bit(int nr, volatile void * addr)
{
 int oldbit;

 __asm__ __volatile__(
  "btcl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" ((*(volatile long *) addr))
  :"dIr" (nr) : "memory");
 return oldbit;
}
# 208 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) int test_and_change_bit(int nr, volatile void * addr)
{
 int oldbit;

 __asm__ __volatile__( ""
  "btcl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" ((*(volatile long *) addr))
  :"dIr" (nr) : "memory");
 return oldbit;
}
# 228 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) int constant_test_bit(int nr, const volatile void * addr)
{
 return ((1UL << (nr & 31)) & (((const volatile unsigned int *) addr)[nr >> 5])) != 0;
}

static __inline__  __attribute__((always_inline)) int variable_test_bit(int nr, volatile const void * addr)
{
 int oldbit;

 __asm__ __volatile__(
  "btl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit)
  :"m" ((*(volatile long *) addr)),"dIr" (nr));
 return oldbit;
}
# 251 "linux-2.6.18/include/asm/bitops.h"
extern long find_first_zero_bit(const unsigned long * addr, unsigned long size);
extern long find_next_zero_bit (const unsigned long * addr, long size, long offset);
extern long find_first_bit(const unsigned long * addr, unsigned long size);
extern long find_next_bit(const unsigned long * addr, long size, long offset);


static inline  __attribute__((always_inline)) unsigned long __scanbit(unsigned long val, unsigned long max)
{
 asm("bsfq %1,%0 ; cmovz %2,%0" : "=&r" (val) : "r" (val), "r" (max));
 return val;
}
# 286 "linux-2.6.18/include/asm/bitops.h"
extern unsigned long
find_next_zero_string(unsigned long *bitmap, long start, long nbits, int len);

static inline  __attribute__((always_inline)) void set_bit_string(unsigned long *bitmap, unsigned long i,
      int len)
{
 unsigned long end = i + len;
 while (i < end) {
  __set_bit(i, bitmap);
  i++;
 }
}

static inline  __attribute__((always_inline)) void __clear_bit_string(unsigned long *bitmap, unsigned long i,
        int len)
{
 unsigned long end = i + len;
 while (i < end) {
  __clear_bit(i, bitmap);
  i++;
 }
}







static __inline__  __attribute__((always_inline)) unsigned long ffz(unsigned long word)
{
 __asm__("bsfq %1,%0"
  :"=r" (word)
  :"r" (~word));
 return word;
}







static __inline__  __attribute__((always_inline)) unsigned long __ffs(unsigned long word)
{
 __asm__("bsfq %1,%0"
  :"=r" (word)
  :"rm" (word));
 return word;
}







static __inline__  __attribute__((always_inline)) unsigned long __fls(unsigned long word)
{
 __asm__("bsrq %1,%0"
  :"=r" (word)
  :"rm" (word));
 return word;
}



# 1 "linux-2.6.18/include/asm-generic/bitops/sched.h" 1
# 13 "linux-2.6.18/include/asm-generic/bitops/sched.h"
static inline  __attribute__((always_inline)) int sched_find_first_bit(const unsigned long *b)
{

 if (__builtin_expect(!!(b[0]), 0))
  return __ffs(b[0]);
 if (__builtin_expect(!!(b[1]), 0))
  return __ffs(b[1]) + 64;
 return __ffs(b[2]) + 128;
# 34 "linux-2.6.18/include/asm-generic/bitops/sched.h"
}
# 354 "linux-2.6.18/include/asm/bitops.h" 2
# 363 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) int ffs(int x)
{
 int r;

 __asm__("bsfl %1,%0\n\t"
  "cmovzl %2,%0"
  : "=r" (r) : "rm" (x), "r" (-1));
 return r+1;
}







static __inline__  __attribute__((always_inline)) int fls64(__u64 x)
{
 if (x == 0)
  return 0;
 return __fls(x) + 1;
}







static __inline__  __attribute__((always_inline)) int fls(int x)
{
 int r;

 __asm__("bsrl %1,%0\n\t"
  "cmovzl %2,%0"
  : "=&r" (r) : "rm" (x), "rm" (-1));
 return r+1;
}

# 1 "linux-2.6.18/include/asm-generic/bitops/hweight.h" 1





extern unsigned int hweight32(unsigned int w);
extern unsigned int hweight16(unsigned int w);
extern unsigned int hweight8(unsigned int w);
extern unsigned long hweight64(__u64 w);
# 403 "linux-2.6.18/include/asm/bitops.h" 2





# 1 "linux-2.6.18/include/asm-generic/bitops/ext2-non-atomic.h" 1



# 1 "linux-2.6.18/include/asm-generic/bitops/le.h" 1




# 1 "linux-2.6.18/include/asm/byteorder.h" 1
# 9 "linux-2.6.18/include/asm/byteorder.h"
static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u64 ___arch__swab64(__u64 x)
{
 __asm__("bswapq %0" : "=r" (x) : "0" (x));
 return x;
}

static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u32 ___arch__swab32(__u32 x)
{
 __asm__("bswapl %0" : "=r" (x) : "0" (x));
 return x;
}
# 31 "linux-2.6.18/include/asm/byteorder.h"
# 1 "linux-2.6.18/include/linux/byteorder/little_endian.h" 1
# 12 "linux-2.6.18/include/linux/byteorder/little_endian.h"
# 1 "linux-2.6.18/include/linux/byteorder/swab.h" 1
# 133 "linux-2.6.18/include/linux/byteorder/swab.h"
static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u16 __fswab16(__u16 x)
{
 return ({ __u16 __tmp = (x) ; ({ __u16 __x = (__tmp); ((__u16)( (((__u16)(__x) & (__u16)0x00ffU) << 8) | (((__u16)(__x) & (__u16)0xff00U) >> 8) )); }); });
}
static __inline__  __attribute__((always_inline)) __u16 __swab16p(const __u16 *x)
{
 return ({ __u16 __tmp = (*(x)) ; ({ __u16 __x = (__tmp); ((__u16)( (((__u16)(__x) & (__u16)0x00ffU) << 8) | (((__u16)(__x) & (__u16)0xff00U) >> 8) )); }); });
}
static __inline__  __attribute__((always_inline)) void __swab16s(__u16 *addr)
{
 do { *(addr) = ({ __u16 __tmp = (*((addr))) ; ({ __u16 __x = (__tmp); ((__u16)( (((__u16)(__x) & (__u16)0x00ffU) << 8) | (((__u16)(__x) & (__u16)0xff00U) >> 8) )); }); }); } while (0);
}

static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u32 __fswab32(__u32 x)
{
 return ___arch__swab32(x);
}
static __inline__  __attribute__((always_inline)) __u32 __swab32p(const __u32 *x)
{
 return ___arch__swab32(*(x));
}
static __inline__  __attribute__((always_inline)) void __swab32s(__u32 *addr)
{
 do { *(addr) = ___arch__swab32(*((addr))); } while (0);
}


static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u64 __fswab64(__u64 x)
{





 return ___arch__swab64(x);

}
static __inline__  __attribute__((always_inline)) __u64 __swab64p(const __u64 *x)
{
 return ___arch__swab64(*(x));
}
static __inline__  __attribute__((always_inline)) void __swab64s(__u64 *addr)
{
 do { *(addr) = ___arch__swab64(*((addr))); } while (0);
}
# 13 "linux-2.6.18/include/linux/byteorder/little_endian.h" 2
# 43 "linux-2.6.18/include/linux/byteorder/little_endian.h"
static inline  __attribute__((always_inline)) __le64 __cpu_to_le64p(const __u64 *p)
{
 return ( __le64)*p;
}
static inline  __attribute__((always_inline)) __u64 __le64_to_cpup(const __le64 *p)
{
 return ( __u64)*p;
}
static inline  __attribute__((always_inline)) __le32 __cpu_to_le32p(const __u32 *p)
{
 return ( __le32)*p;
}
static inline  __attribute__((always_inline)) __u32 __le32_to_cpup(const __le32 *p)
{
 return ( __u32)*p;
}
static inline  __attribute__((always_inline)) __le16 __cpu_to_le16p(const __u16 *p)
{
 return ( __le16)*p;
}
static inline  __attribute__((always_inline)) __u16 __le16_to_cpup(const __le16 *p)
{
 return ( __u16)*p;
}
static inline  __attribute__((always_inline)) __be64 __cpu_to_be64p(const __u64 *p)
{
 return ( __be64)__swab64p(p);
}
static inline  __attribute__((always_inline)) __u64 __be64_to_cpup(const __be64 *p)
{
 return __swab64p((__u64 *)p);
}
static inline  __attribute__((always_inline)) __be32 __cpu_to_be32p(const __u32 *p)
{
 return ( __be32)__swab32p(p);
}
static inline  __attribute__((always_inline)) __u32 __be32_to_cpup(const __be32 *p)
{
 return __swab32p((__u32 *)p);
}
static inline  __attribute__((always_inline)) __be16 __cpu_to_be16p(const __u16 *p)
{
 return ( __be16)__swab16p(p);
}
static inline  __attribute__((always_inline)) __u16 __be16_to_cpup(const __be16 *p)
{
 return __swab16p((__u16 *)p);
}
# 104 "linux-2.6.18/include/linux/byteorder/little_endian.h"
# 1 "linux-2.6.18/include/linux/byteorder/generic.h" 1
# 154 "linux-2.6.18/include/linux/byteorder/generic.h"
extern __u32 ntohl(__be32);
extern __be32 htonl(__u32);
extern __u16 ntohs(__be16);
extern __be16 htons(__u16);
# 105 "linux-2.6.18/include/linux/byteorder/little_endian.h" 2
# 32 "linux-2.6.18/include/asm/byteorder.h" 2
# 6 "linux-2.6.18/include/asm-generic/bitops/le.h" 2
# 5 "linux-2.6.18/include/asm-generic/bitops/ext2-non-atomic.h" 2
# 409 "linux-2.6.18/include/asm/bitops.h" 2






# 1 "linux-2.6.18/include/asm-generic/bitops/minix.h" 1
# 416 "linux-2.6.18/include/asm/bitops.h" 2
# 10 "linux-2.6.18/include/linux/bitops.h" 2

static __inline__  __attribute__((always_inline)) int get_bitmask_order(unsigned int count)
{
 int order;

 order = fls(count);
 return order;
}

static __inline__  __attribute__((always_inline)) int get_count_order(unsigned int count)
{
 int order;

 order = fls(count) - 1;
 if (count & (count - 1))
  order++;
 return order;
}

static inline  __attribute__((always_inline)) unsigned long hweight_long(unsigned long w)
{
 return sizeof(w) == 4 ? hweight32(w) : hweight64(w);
}







static inline  __attribute__((always_inline)) __u32 rol32(__u32 word, unsigned int shift)
{
 return (word << shift) | (word >> (32 - shift));
}







static inline  __attribute__((always_inline)) __u32 ror32(__u32 word, unsigned int shift)
{
 return (word >> shift) | (word << (32 - shift));
}

static inline  __attribute__((always_inline)) unsigned fls_long(unsigned long l)
{
 if (sizeof(l) == 4)
  return fls(l);
 return fls64(l);
}
# 21 "linux-2.6.18/include/linux/thread_info.h" 2
# 1 "linux-2.6.18/include/asm/thread_info.h" 1
# 12 "linux-2.6.18/include/asm/thread_info.h"
# 1 "linux-2.6.18/include/asm/page.h" 1
# 46 "linux-2.6.18/include/asm/page.h"
typedef  unsigned long   _GLOBAL_1_T; extern  _GLOBAL_1_T  global_end_pfn[NUM_STACKS];    

void clear_page(void *);
void copy_page(void *, void *);
# 59 "linux-2.6.18/include/asm/page.h"
typedef struct { unsigned long pte; } pte_t;
typedef struct { unsigned long pmd; } pmd_t;
typedef struct { unsigned long pud; } pud_t;
typedef struct { unsigned long pgd; } pgd_t;


typedef struct { unsigned long pgprot; } pgprot_t;
# 105 "linux-2.6.18/include/asm/page.h"
# 1 "linux-2.6.18/include/asm/bug.h" 1



# 1 "linux-2.6.18/include/linux/stringify.h" 1
# 5 "linux-2.6.18/include/asm/bug.h" 2





struct bug_frame {
 unsigned char ud2[2];
 unsigned char push;
 signed int filename;
 unsigned char ret;
 unsigned short line;
} __attribute__((packed)) ;
# 30 "linux-2.6.18/include/asm/bug.h"
static inline  __attribute__((always_inline)) void out_of_line_bug(void) { }


# 1 "linux-2.6.18/include/asm-generic/bug.h" 1
# 34 "linux-2.6.18/include/asm/bug.h" 2
# 106 "linux-2.6.18/include/asm/page.h" 2
# 138 "linux-2.6.18/include/asm/page.h"
# 1 "linux-2.6.18/include/asm-generic/memory_model.h" 1
# 139 "linux-2.6.18/include/asm/page.h" 2
# 1 "linux-2.6.18/include/asm-generic/page.h" 1
# 10 "linux-2.6.18/include/asm-generic/page.h"
static __inline__   __attribute__((always_inline)) __attribute__((__const__)) int get_order(unsigned long size)
{
 int order;

 size = (size - 1) >> (12 - 1);
 order = -1;
 do {
  size >>= 1;
  order++;
 } while (size);
 return order;
}
# 140 "linux-2.6.18/include/asm/page.h" 2
# 13 "linux-2.6.18/include/asm/thread_info.h" 2

# 1 "linux-2.6.18/include/asm/pda.h" 1






# 1 "linux-2.6.18/include/linux/cache.h" 1



# 1 "linux-2.6.18/include/linux/kernel.h" 1
# 10 "linux-2.6.18/include/linux/kernel.h"
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 102 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 11 "linux-2.6.18/include/linux/kernel.h" 2
# 1 "linux-2.6.18/include/linux/linkage.h" 1



# 1 "linux-2.6.18/include/asm/linkage.h" 1
# 5 "linux-2.6.18/include/linux/linkage.h" 2
# 12 "linux-2.6.18/include/linux/kernel.h" 2







typedef  const char   _GLOBAL_2_T; extern  _GLOBAL_2_T  _GLOBAL_0_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_1_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_2_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_3_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_4_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_5_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_6_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_7_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_8_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_9_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_10_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_11_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_12_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_13_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_14_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_15_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_16_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_17_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_18_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_19_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_20_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_21_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_22_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_23_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_24_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_25_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_26_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_27_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_28_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_29_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_30_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_31_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_32_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_33_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_34_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_35_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_36_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_37_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_38_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_39_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_40_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_41_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_42_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_43_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_44_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_45_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_46_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_47_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_48_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_49_linux_banner_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_linux_banner_I) *_GLOBAL_linux_banner_0_A[NUM_STACKS];   
# 47 "linux-2.6.18/include/linux/kernel.h"
typedef  int  _GLOBAL_3_T; extern  _GLOBAL_3_T  _GLOBAL_0_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_1_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_2_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_3_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_4_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_5_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_6_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_7_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_8_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_9_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_10_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_11_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_12_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_13_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_14_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_15_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_16_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_17_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_18_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_19_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_20_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_21_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_22_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_23_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_24_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_25_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_26_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_27_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_28_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_29_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_30_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_31_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_32_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_33_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_34_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_35_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_36_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_37_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_38_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_39_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_40_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_41_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_42_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_43_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_44_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_45_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_46_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_47_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_48_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_49_console_printk_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_console_printk_I) *_GLOBAL_console_printk_1_A[NUM_STACKS] = { &_GLOBAL_0_console_printk_I, &_GLOBAL_1_console_printk_I, &_GLOBAL_2_console_printk_I, &_GLOBAL_3_console_printk_I, &_GLOBAL_4_console_printk_I, &_GLOBAL_5_console_printk_I, &_GLOBAL_6_console_printk_I, &_GLOBAL_7_console_printk_I, &_GLOBAL_8_console_printk_I, &_GLOBAL_9_console_printk_I, &_GLOBAL_10_console_printk_I, &_GLOBAL_11_console_printk_I, &_GLOBAL_12_console_printk_I, &_GLOBAL_13_console_printk_I, &_GLOBAL_14_console_printk_I, &_GLOBAL_15_console_printk_I, &_GLOBAL_16_console_printk_I, &_GLOBAL_17_console_printk_I, &_GLOBAL_18_console_printk_I, &_GLOBAL_19_console_printk_I, &_GLOBAL_20_console_printk_I, &_GLOBAL_21_console_printk_I, &_GLOBAL_22_console_printk_I, &_GLOBAL_23_console_printk_I, &_GLOBAL_24_console_printk_I, &_GLOBAL_25_console_printk_I, &_GLOBAL_26_console_printk_I, &_GLOBAL_27_console_printk_I, &_GLOBAL_28_console_printk_I, &_GLOBAL_29_console_printk_I, &_GLOBAL_30_console_printk_I, &_GLOBAL_31_console_printk_I, &_GLOBAL_32_console_printk_I, &_GLOBAL_33_console_printk_I, &_GLOBAL_34_console_printk_I, &_GLOBAL_35_console_printk_I, &_GLOBAL_36_console_printk_I, &_GLOBAL_37_console_printk_I, &_GLOBAL_38_console_printk_I, &_GLOBAL_39_console_printk_I, &_GLOBAL_40_console_printk_I, &_GLOBAL_41_console_printk_I, &_GLOBAL_42_console_printk_I, &_GLOBAL_43_console_printk_I, &_GLOBAL_44_console_printk_I, &_GLOBAL_45_console_printk_I, &_GLOBAL_46_console_printk_I, &_GLOBAL_47_console_printk_I, &_GLOBAL_48_console_printk_I, &_GLOBAL_49_console_printk_I, };  






struct completion;
struct pt_regs;
struct user;
# 95 "linux-2.6.18/include/linux/kernel.h"
typedef  struct atomic_notifier_head   _GLOBAL_4_T; extern  _GLOBAL_4_T  _GLOBAL_0_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_1_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_2_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_3_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_4_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_5_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_6_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_7_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_8_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_9_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_10_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_11_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_12_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_13_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_14_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_15_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_16_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_17_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_18_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_19_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_20_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_21_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_22_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_23_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_24_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_25_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_26_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_27_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_28_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_29_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_30_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_31_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_32_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_33_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_34_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_35_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_36_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_37_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_38_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_39_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_40_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_41_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_42_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_43_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_44_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_45_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_46_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_47_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_48_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_49_panic_notifier_list_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_panic_notifier_list_I) *_GLOBAL_panic_notifier_list_2_A[NUM_STACKS];   
typedef  long   ( *_GLOBAL_6_T  )  ( long  time  ) ; extern  _GLOBAL_6_T global_panic_blink[NUM_STACKS];    
 void panic(const char * fmt, ...)
 __attribute__ ((noreturn, format (printf, 1, 2))) ;
extern void oops_enter(void);
extern void oops_exit(void);
extern int oops_may_print(void);
 void do_exit(long error_code)
 __attribute__((noreturn)) ;
 void complete_and_exit(struct completion *, long)
 __attribute__((noreturn)) ;
extern unsigned long simple_strtoul(const char *,char **,unsigned int);
extern long simple_strtol(const char *,char **,unsigned int);
extern unsigned long long simple_strtoull(const char *,char **,unsigned int);
extern long long simple_strtoll(const char *,char **,unsigned int);
extern int sprintf(char * buf, const char * fmt, ...)
 __attribute__ ((format (printf, 2, 3))) ;
extern int vsprintf(char *buf, const char *, va_list)
 __attribute__ ((format (printf, 2, 0))) ;
extern int snprintf(char * buf, size_t size, const char * fmt, ...)
 __attribute__ ((format (printf, 3, 4))) ;
extern int vsnprintf(char *buf, size_t size, const char *fmt, va_list args)
 __attribute__ ((format (printf, 3, 0))) ;
extern int scnprintf(char * buf, size_t size, const char * fmt, ...)
 __attribute__ ((format (printf, 3, 4))) ;
extern int vscnprintf(char *buf, size_t size, const char *fmt, va_list args)
 __attribute__ ((format (printf, 3, 0))) ;
extern char *kasprintf(gfp_t gfp, const char *fmt, ...)
 __attribute__ ((format (printf, 2, 3))) ;

extern int sscanf(const char *, const char *, ...)
 __attribute__ ((format (scanf, 2, 3))) ;
extern int vsscanf(const char *, const char *, va_list)
 __attribute__ ((format (scanf, 2, 0))) ;

extern int get_option(char **str, int *pint);
extern char *get_options(const char *str, int nints, int *ints);
extern unsigned long long memparse(char *ptr, char **retptr);

extern int core_kernel_text(unsigned long addr);
extern int __kernel_text_address(unsigned long addr);
extern int kernel_text_address(unsigned long addr);
extern int session_of_pgrp(int pgrp);

extern void dump_thread(struct pt_regs *regs, struct user *dump);







static inline  __attribute__((always_inline)) int vprintk(const char *s, va_list args)
 __attribute__ ((format (printf, 1, 0))) ;
static inline  __attribute__((always_inline)) int vprintk(const char *s, va_list args) { return 0; }
static inline  __attribute__((always_inline)) int printk(const char *s, ...)
 __attribute__ ((format (printf, 1, 2))) ;
static inline  __attribute__((always_inline)) int printk(const char *s, ...) { return 0; }


unsigned long int_sqrt(unsigned long);

static inline  __attribute__((always_inline)) int  __attribute__((pure)) long_log2(unsigned long x)
{
 int r = 0;
 for (x >>= 1; x > 0; x >>= 1)
  r++;
 return r;
}

static inline  __attribute__((always_inline)) unsigned long
 __attribute__((__const__)) roundup_pow_of_two(unsigned long x)
{
 return 1UL << fls_long(x - 1);
}

extern int printk_ratelimit(void);
extern int __printk_ratelimit(int ratelimit_jiffies, int ratelimit_burst);

static inline  __attribute__((always_inline)) void console_silent(void)
{
 ((*_GLOBAL_console_printk_1_A[get_stack_id()])[0]) = 0;
}

static inline  __attribute__((always_inline)) void console_verbose(void)
{
 if (((*_GLOBAL_console_printk_1_A[get_stack_id()])[0]))
  ((*_GLOBAL_console_printk_1_A[get_stack_id()])[0]) = 15;
}

extern void bust_spinlocks(int yes);
typedef  int  _GLOBAL_7_T; extern  _GLOBAL_7_T  global_oops_in_progress[NUM_STACKS];   
typedef  int  _GLOBAL_8_T; extern  _GLOBAL_8_T  global_panic_timeout[NUM_STACKS];   
typedef  int  _GLOBAL_9_T; extern  _GLOBAL_9_T  global_panic_on_oops[NUM_STACKS];   
typedef  int  _GLOBAL_10_T; extern  _GLOBAL_10_T  global_tainted[NUM_STACKS];   
extern const char *print_tainted(void);
extern void add_taint(unsigned);


typedef  enum system_states { SYSTEM_BOOTING , SYSTEM_RUNNING  , SYSTEM_HALT  , SYSTEM_POWER_OFF  , SYSTEM_RESTART  , SYSTEM_SUSPEND_DISK  , }   _GLOBAL_11_T; extern  _GLOBAL_11_T  global_system_state[NUM_STACKS];    
 
 
 
 
 
 
 
# 210 "linux-2.6.18/include/linux/kernel.h"
extern void dump_stack(void);
# 322 "linux-2.6.18/include/linux/kernel.h"
struct sysinfo {
 long uptime;
 unsigned long loads[3];
 unsigned long totalram;
 unsigned long freeram;
 unsigned long sharedram;
 unsigned long bufferram;
 unsigned long totalswap;
 unsigned long freeswap;
 unsigned short procs;
 unsigned short pad;
 unsigned long totalhigh;
 unsigned long freehigh;
 unsigned int mem_unit;
 char _f[20-2*sizeof(long)-sizeof(int)];
};
# 5 "linux-2.6.18/include/linux/cache.h" 2
# 1 "linux-2.6.18/include/asm/cache.h" 1
# 6 "linux-2.6.18/include/linux/cache.h" 2
# 8 "linux-2.6.18/include/asm/pda.h" 2



struct x8664_pda {
 struct task_struct *pcurrent;
 unsigned long data_offset;
 unsigned long kernelstack;
 unsigned long oldrsp;

 unsigned long debugstack;

        int irqcount;
 int cpunumber;
 char *irqstackptr;
 int nodenumber;
 unsigned int __softirq_pending;
 unsigned int __nmi_count;
 int mmu_state;
 struct mm_struct *active_mm;
 unsigned apic_timer_irqs;
} ;

typedef  struct x8664_pda   _GLOBAL_12_T; extern  _GLOBAL_12_T  * _GLOBAL_0__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_1__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_2__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_3__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_4__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_5__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_6__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_7__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_8__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_9__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_10__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_11__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_12__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_13__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_14__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_15__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_16__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_17__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_18__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_19__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_20__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_21__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_22__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_23__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_24__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_25__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_26__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_27__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_28__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_29__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_30__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_31__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_32__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_33__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_34__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_35__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_36__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_37__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_38__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_39__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_40__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_41__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_42__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_43__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_44__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_45__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_46__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_47__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_48__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_49__cpu_pda_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__cpu_pda_I) *_GLOBAL__cpu_pda_3_A[NUM_STACKS];   
typedef  struct x8664_pda   _GLOBAL_13_T; extern  _GLOBAL_13_T  _GLOBAL_0_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_1_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_2_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_3_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_4_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_5_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_6_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_7_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_8_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_9_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_10_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_11_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_12_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_13_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_14_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_15_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_16_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_17_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_18_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_19_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_20_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_21_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_22_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_23_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_24_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_25_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_26_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_27_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_28_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_29_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_30_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_31_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_32_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_33_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_34_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_35_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_36_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_37_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_38_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_39_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_40_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_41_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_42_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_43_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_44_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_45_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_46_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_47_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_48_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_49_boot_cpu_pda_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_boot_cpu_pda_I) *_GLOBAL_boot_cpu_pda_4_A[NUM_STACKS];   
# 42 "linux-2.6.18/include/asm/pda.h"
extern void __bad_pda_field(void);
# 15 "linux-2.6.18/include/asm/thread_info.h" 2







struct task_struct;
struct exec_domain;
# 1 "linux-2.6.18/include/asm/mmsegment.h" 1



typedef struct {
 unsigned long seg;
} mm_segment_t;
# 25 "linux-2.6.18/include/asm/thread_info.h" 2

struct thread_info {
 struct task_struct *task;
 struct exec_domain *exec_domain;
 __u32 flags;
 __u32 status;
 __u32 cpu;
 int preempt_count;

 mm_segment_t addr_limit;
 struct restart_block restart_block;
};
# 60 "linux-2.6.18/include/asm/thread_info.h"
static inline  __attribute__((always_inline)) struct thread_info *current_thread_info(void)
{


 extern struct thread_info *nsc_get_current_thread_info(void);
 return nsc_get_current_thread_info();





}


static inline  __attribute__((always_inline)) struct thread_info *stack_thread_info(void)
{
 struct thread_info *ti;
 __asm__("andq %%rsp,%0; ":"=r" (ti) : "0" (~(((1UL << 12) << 1) - 1)));
 return ti;
}
# 22 "linux-2.6.18/include/linux/thread_info.h" 2
# 30 "linux-2.6.18/include/linux/thread_info.h"
static inline  __attribute__((always_inline)) void set_ti_thread_flag(struct thread_info *ti, int flag)
{
 set_bit(flag,&ti->flags);
}

static inline  __attribute__((always_inline)) void clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 clear_bit(flag,&ti->flags);
}

static inline  __attribute__((always_inline)) int test_and_set_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_set_bit(flag,&ti->flags);
}

static inline  __attribute__((always_inline)) int test_and_clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_clear_bit(flag,&ti->flags);
}

static inline  __attribute__((always_inline)) int test_ti_thread_flag(struct thread_info *ti, int flag)
{
 return (__builtin_constant_p(flag) ? constant_test_bit((flag),(&ti->flags)) : variable_test_bit((flag),(&ti->flags)));
}
# 10 "linux-2.6.18/include/linux/preempt.h" 2
# 50 "linux-2.6.18/include/linux/spinlock.h" 2






# 1 "linux-2.6.18/include/asm/system.h" 1




# 1 "linux-2.6.18/include/asm/segment.h" 1
# 6 "linux-2.6.18/include/asm/system.h" 2
# 45 "linux-2.6.18/include/asm/system.h"
extern void load_gs_index(unsigned);
# 72 "linux-2.6.18/include/asm/system.h"
static inline  __attribute__((always_inline)) unsigned long read_cr0(void)
{
 unsigned long cr0;
 asm volatile("movq %%cr0,%0" : "=r" (cr0));
 return cr0;
}

static inline  __attribute__((always_inline)) void write_cr0(unsigned long val)
{
 asm volatile("movq %0,%%cr0" :: "r" (val));
}

static inline  __attribute__((always_inline)) unsigned long read_cr3(void)
{
 unsigned long cr3;
 asm("movq %%cr3,%0" : "=r" (cr3));
 return cr3;
}

static inline  __attribute__((always_inline)) unsigned long read_cr4(void)
{
 unsigned long cr4;
 asm("movq %%cr4,%0" : "=r" (cr4));
 return cr4;
}

static inline  __attribute__((always_inline)) void write_cr4(unsigned long val)
{
 asm volatile("movq %0,%%cr4" :: "r" (val));
}
# 112 "linux-2.6.18/include/asm/system.h"
static inline  __attribute__((always_inline)) void sched_cacheflush(void)
{
 __asm__ __volatile__ ("wbinvd": : :"memory");;
}
# 127 "linux-2.6.18/include/asm/system.h"
static inline  __attribute__((always_inline)) void set_64bit(volatile unsigned long *ptr, unsigned long val)
{
 *ptr = val;
}
# 139 "linux-2.6.18/include/asm/system.h"
static inline  __attribute__((always_inline)) unsigned long __xchg(unsigned long x, volatile void * ptr, int size)
{
 switch (size) {
  case 1:
   __asm__ __volatile__("xchgb %b0,%1"
    :"=q" (x)
    :"m" (*((volatile long *)(ptr))), "0" (x)
    :"memory");
   break;
  case 2:
   __asm__ __volatile__("xchgw %w0,%1"
    :"=r" (x)
    :"m" (*((volatile long *)(ptr))), "0" (x)
    :"memory");
   break;
  case 4:
   __asm__ __volatile__("xchgl %k0,%1"
    :"=r" (x)
    :"m" (*((volatile long *)(ptr))), "0" (x)
    :"memory");
   break;
  case 8:
   __asm__ __volatile__("xchgq %0,%1"
    :"=r" (x)
    :"m" (*((volatile long *)(ptr))), "0" (x)
    :"memory");
   break;
 }
 return x;
}
# 178 "linux-2.6.18/include/asm/system.h"
static inline  __attribute__((always_inline)) unsigned long __cmpxchg(volatile void *ptr, unsigned long old,
          unsigned long new, int size)
{
 unsigned long prev;
 switch (size) {
 case 1:
  __asm__ __volatile__("" "cmpxchgb %b1,%2"
         : "=a"(prev)
         : "q"(new), "m"(*((volatile long *)(ptr))), "0"(old)
         : "memory");
  return prev;
 case 2:
  __asm__ __volatile__("" "cmpxchgw %w1,%2"
         : "=a"(prev)
         : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
         : "memory");
  return prev;
 case 4:
  __asm__ __volatile__("" "cmpxchgl %k1,%2"
         : "=a"(prev)
         : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
         : "memory");
  return prev;
 case 8:
  __asm__ __volatile__("" "cmpxchgq %1,%2"
         : "=a"(prev)
         : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
         : "memory");
  return prev;
 }
 return old;
}
# 246 "linux-2.6.18/include/asm/system.h"
# 1 "linux-2.6.18/include/linux/irqflags.h" 1
# 247 "linux-2.6.18/include/asm/system.h" 2

void cpu_idle_wait(void);

extern unsigned long arch_align_stack(unsigned long sp);
extern void free_init_pages(char *what, unsigned long begin, unsigned long end);
# 57 "linux-2.6.18/include/linux/spinlock.h" 2
# 78 "linux-2.6.18/include/linux/spinlock.h"
# 1 "linux-2.6.18/include/linux/spinlock_types.h" 1
# 12 "linux-2.6.18/include/linux/spinlock_types.h"
# 1 "linux-2.6.18/include/linux/lockdep.h" 1
# 12 "linux-2.6.18/include/linux/lockdep.h"
# 1 "linux-2.6.18/include/linux/list.h" 1






# 1 "linux-2.6.18/include/linux/poison.h" 1
# 8 "linux-2.6.18/include/linux/list.h" 2
# 1 "linux-2.6.18/include/linux/prefetch.h" 1
# 14 "linux-2.6.18/include/linux/prefetch.h"
# 1 "linux-2.6.18/include/asm/processor.h" 1
# 13 "linux-2.6.18/include/asm/processor.h"
# 1 "linux-2.6.18/include/asm/sigcontext.h" 1
# 10 "linux-2.6.18/include/asm/sigcontext.h"
struct _fpstate {
 __u16 cwd;
 __u16 swd;
 __u16 twd;
 __u16 fop;
 __u64 rip;
 __u64 rdp;
 __u32 mxcsr;
 __u32 mxcsr_mask;
 __u32 st_space[32];
 __u32 xmm_space[64];
 __u32 reserved2[24];
};

struct sigcontext {
 unsigned long r8;
 unsigned long r9;
 unsigned long r10;
 unsigned long r11;
 unsigned long r12;
 unsigned long r13;
 unsigned long r14;
 unsigned long r15;
 unsigned long rdi;
 unsigned long rsi;
 unsigned long rbp;
 unsigned long rbx;
 unsigned long rdx;
 unsigned long rax;
 unsigned long rcx;
 unsigned long rsp;
 unsigned long rip;
 unsigned long eflags;
 unsigned short cs;
 unsigned short gs;
 unsigned short fs;
 unsigned short __pad0;
 unsigned long err;
 unsigned long trapno;
 unsigned long oldmask;
 unsigned long cr2;
 struct _fpstate *fpstate;
 unsigned long reserved1[8];
};
# 14 "linux-2.6.18/include/asm/processor.h" 2

# 1 "linux-2.6.18/include/linux/threads.h" 1
# 16 "linux-2.6.18/include/asm/processor.h" 2
# 1 "linux-2.6.18/include/asm/msr.h" 1
# 82 "linux-2.6.18/include/asm/msr.h"
static inline  __attribute__((always_inline)) void cpuid(int op, unsigned int *eax, unsigned int *ebx,
    unsigned int *ecx, unsigned int *edx)
{
 __asm__("cpuid"
  : "=a" (*eax),
    "=b" (*ebx),
    "=c" (*ecx),
    "=d" (*edx)
  : "0" (op));
}


static inline  __attribute__((always_inline)) void cpuid_count(int op, int count, int *eax, int *ebx, int *ecx,
         int *edx)
{
 __asm__("cpuid"
  : "=a" (*eax),
    "=b" (*ebx),
    "=c" (*ecx),
    "=d" (*edx)
  : "0" (op), "c" (count));
}




static inline  __attribute__((always_inline)) unsigned int cpuid_eax(unsigned int op)
{
 unsigned int eax;

 __asm__("cpuid"
  : "=a" (eax)
  : "0" (op)
  : "bx", "cx", "dx");
 return eax;
}
static inline  __attribute__((always_inline)) unsigned int cpuid_ebx(unsigned int op)
{
 unsigned int eax, ebx;

 __asm__("cpuid"
  : "=a" (eax), "=b" (ebx)
  : "0" (op)
  : "cx", "dx" );
 return ebx;
}
static inline  __attribute__((always_inline)) unsigned int cpuid_ecx(unsigned int op)
{
 unsigned int eax, ecx;

 __asm__("cpuid"
  : "=a" (eax), "=c" (ecx)
  : "0" (op)
  : "bx", "dx" );
 return ecx;
}
static inline  __attribute__((always_inline)) unsigned int cpuid_edx(unsigned int op)
{
 unsigned int eax, edx;

 __asm__("cpuid"
  : "=a" (eax), "=d" (edx)
  : "0" (op)
  : "bx", "cx");
 return edx;
}
# 17 "linux-2.6.18/include/asm/processor.h" 2
# 1 "linux-2.6.18/include/asm/current.h" 1




struct task_struct;
# 18 "linux-2.6.18/include/asm/processor.h" 2


# 1 "linux-2.6.18/include/asm/percpu.h" 1
# 21 "linux-2.6.18/include/asm/processor.h" 2
# 1 "linux-2.6.18/include/linux/personality.h" 1







struct exec_domain;
struct pt_regs;

extern int register_exec_domain(struct exec_domain *);
extern int unregister_exec_domain(struct exec_domain *);
extern int __set_personality(unsigned long);






enum {
 ADDR_NO_RANDOMIZE = 0x0040000,
 FDPIC_FUNCPTRS = 0x0080000,


 MMAP_PAGE_ZERO = 0x0100000,
 ADDR_COMPAT_LAYOUT = 0x0200000,
 READ_IMPLIES_EXEC = 0x0400000,
 ADDR_LIMIT_32BIT = 0x0800000,
 SHORT_INODE = 0x1000000,
 WHOLE_SECONDS = 0x2000000,
 STICKY_TIMEOUTS = 0x4000000,
 ADDR_LIMIT_3GB = 0x8000000,
};
# 47 "linux-2.6.18/include/linux/personality.h"
enum {
 PER_LINUX = 0x0000,
 PER_LINUX_32BIT = 0x0000 | ADDR_LIMIT_32BIT,
 PER_LINUX_FDPIC = 0x0000 | FDPIC_FUNCPTRS,
 PER_SVR4 = 0x0001 | STICKY_TIMEOUTS | MMAP_PAGE_ZERO,
 PER_SVR3 = 0x0002 | STICKY_TIMEOUTS | SHORT_INODE,
 PER_SCOSVR3 = 0x0003 | STICKY_TIMEOUTS |
      WHOLE_SECONDS | SHORT_INODE,
 PER_OSR5 = 0x0003 | STICKY_TIMEOUTS | WHOLE_SECONDS,
 PER_WYSEV386 = 0x0004 | STICKY_TIMEOUTS | SHORT_INODE,
 PER_ISCR4 = 0x0005 | STICKY_TIMEOUTS,
 PER_BSD = 0x0006,
 PER_SUNOS = 0x0006 | STICKY_TIMEOUTS,
 PER_XENIX = 0x0007 | STICKY_TIMEOUTS | SHORT_INODE,
 PER_LINUX32 = 0x0008,
 PER_LINUX32_3GB = 0x0008 | ADDR_LIMIT_3GB,
 PER_IRIX32 = 0x0009 | STICKY_TIMEOUTS,
 PER_IRIXN32 = 0x000a | STICKY_TIMEOUTS,
 PER_IRIX64 = 0x000b | STICKY_TIMEOUTS,
 PER_RISCOS = 0x000c,
 PER_SOLARIS = 0x000d | STICKY_TIMEOUTS,
 PER_UW7 = 0x000e | STICKY_TIMEOUTS | MMAP_PAGE_ZERO,
 PER_OSF4 = 0x000f,
 PER_HPUX = 0x0010,
 PER_MASK = 0x00ff,
};
# 81 "linux-2.6.18/include/linux/personality.h"
typedef void (*handler_t)(int, struct pt_regs *);

struct exec_domain {
 const char *name;
 handler_t handler;
 unsigned char pers_low;
 unsigned char pers_high;
 unsigned long *signal_map;
 unsigned long *signal_invmap;
 struct map_segment *err_map;
 struct map_segment *socktype_map;
 struct map_segment *sockopt_map;
 struct map_segment *af_map;
 struct module *module;
 struct exec_domain *next;
};
# 22 "linux-2.6.18/include/asm/processor.h" 2
# 1 "linux-2.6.18/include/linux/cpumask.h" 1
# 86 "linux-2.6.18/include/linux/cpumask.h"
# 1 "linux-2.6.18/include/linux/bitmap.h" 1







# 1 "linux-2.6.18/include/linux/string.h" 1
# 16 "linux-2.6.18/include/linux/string.h"
extern char *strndup_user(const char *, long);




# 1 "linux-2.6.18/include/asm/string.h" 1
# 9 "linux-2.6.18/include/asm/string.h"
static inline   __attribute__((always_inline)) __attribute__((always_inline)) void *
__inline_memcpy(void * to, const void * from, size_t n)
{
unsigned long d0, d1, d2;
__asm__ __volatile__(
 "rep ; movsl\n\t"
 "testb $2,%b4\n\t"
 "je 1f\n\t"
 "movsw\n"
 "1:\ttestb $1,%b4\n\t"
 "je 2f\n\t"
 "movsb\n"
 "2:"
 : "=&c" (d0), "=&D" (d1), "=&S" (d2)
 :"0" (n/4), "q" (n),"1" ((long) to),"2" ((long) from)
 : "memory");
return (to);
}





extern void *__memcpy(void *to, const void *from, size_t len);
# 44 "linux-2.6.18/include/asm/string.h"
void *memset(void *s, int c, size_t n);


void * memmove(void * dest,const void *src,size_t count);

int memcmp(const void * cs,const void * ct,size_t count);
size_t strlen(const char * s);
char *strcpy(char * dest,const char *src);
char *strcat(char * dest, const char * src);
int strcmp(const char * cs,const char * ct);
# 22 "linux-2.6.18/include/linux/string.h" 2


extern char * strcpy(char *,const char *);


extern char * strncpy(char *,const char *, __kernel_size_t);


size_t strlcpy(char *, const char *, size_t);


extern char * strcat(char *, const char *);


extern char * strncat(char *, const char *, __kernel_size_t);


extern size_t strlcat(char *, const char *, __kernel_size_t);


extern int strcmp(const char *,const char *);


extern int strncmp(const char *,const char *,__kernel_size_t);


extern int strnicmp(const char *, const char *, __kernel_size_t);


extern char * strchr(const char *,int);


extern char * strnchr(const char *, size_t, int);


extern char * strrchr(const char *,int);

extern char * strstrip(char *);

extern char * strstr(const char *,const char *);


extern __kernel_size_t strlen(const char *);


extern __kernel_size_t strnlen(const char *,__kernel_size_t);


extern char * strpbrk(const char *,const char *);


extern char * strsep(char **,const char *);


extern __kernel_size_t strspn(const char *,const char *);


extern __kernel_size_t strcspn(const char *,const char *);
# 92 "linux-2.6.18/include/linux/string.h"
extern void * memscan(void *,int,__kernel_size_t);


extern int memcmp(const void *,const void *,__kernel_size_t);


extern void * memchr(const void *,int,__kernel_size_t);


extern char *kstrdup(const char *s, gfp_t gfp);
# 9 "linux-2.6.18/include/linux/bitmap.h" 2
# 83 "linux-2.6.18/include/linux/bitmap.h"
extern int __bitmap_empty(const unsigned long *bitmap, int bits);
extern int __bitmap_full(const unsigned long *bitmap, int bits);
extern int __bitmap_equal(const unsigned long *bitmap1,
                 const unsigned long *bitmap2, int bits);
extern void __bitmap_complement(unsigned long *dst, const unsigned long *src,
   int bits);
extern void __bitmap_shift_right(unsigned long *dst,
                        const unsigned long *src, int shift, int bits);
extern void __bitmap_shift_left(unsigned long *dst,
                        const unsigned long *src, int shift, int bits);
extern void __bitmap_and(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_or(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_xor(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_andnot(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_intersects(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_subset(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_weight(const unsigned long *bitmap, int bits);

extern int bitmap_scnprintf(char *buf, unsigned int len,
   const unsigned long *src, int nbits);
extern int bitmap_parse(const char *ubuf, unsigned int ulen,
   unsigned long *dst, int nbits);
extern int bitmap_scnlistprintf(char *buf, unsigned int len,
   const unsigned long *src, int nbits);
extern int bitmap_parselist(const char *buf, unsigned long *maskp,
   int nmaskbits);
extern void bitmap_remap(unsigned long *dst, const unsigned long *src,
  const unsigned long *old, const unsigned long *new, int bits);
extern int bitmap_bitremap(int oldbit,
  const unsigned long *old, const unsigned long *new, int bits);
extern int bitmap_find_free_region(unsigned long *bitmap, int bits, int order);
extern void bitmap_release_region(unsigned long *bitmap, int pos, int order);
extern int bitmap_allocate_region(unsigned long *bitmap, int pos, int order);







static inline  __attribute__((always_inline)) void bitmap_zero(unsigned long *dst, int nbits)
{
 if (nbits <= 64)
  *dst = 0UL;
 else {
  int len = (((nbits)+64 -1)/64) * sizeof(unsigned long);
  memset(dst, 0, len);
 }
}

static inline  __attribute__((always_inline)) void bitmap_fill(unsigned long *dst, int nbits)
{
 size_t nlongs = (((nbits)+64 -1)/64);
 if (nlongs > 1) {
  int len = (nlongs - 1) * sizeof(unsigned long);
  memset(dst, 0xff, len);
 }
 dst[nlongs - 1] = ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
}

static inline  __attribute__((always_inline)) void bitmap_copy(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if (nbits <= 64)
  *dst = *src;
 else {
  int len = (((nbits)+64 -1)/64) * sizeof(unsigned long);
  ({ size_t __len = (len); void *__ret; if (__builtin_constant_p(len) && __len >= 64) __ret = __memcpy((dst),(src),__len); else __ret = __builtin_memcpy((dst),(src),__len); __ret; });
 }
}

static inline  __attribute__((always_inline)) void bitmap_and(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  *dst = *src1 & *src2;
 else
  __bitmap_and(dst, src1, src2, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_or(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  *dst = *src1 | *src2;
 else
  __bitmap_or(dst, src1, src2, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_xor(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  *dst = *src1 ^ *src2;
 else
  __bitmap_xor(dst, src1, src2, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_andnot(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  *dst = *src1 & ~(*src2);
 else
  __bitmap_andnot(dst, src1, src2, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_complement(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if (nbits <= 64)
  *dst = ~(*src) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
 else
  __bitmap_complement(dst, src, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_equal(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  return ! ((*src1 ^ *src2) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_equal(src1, src2, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_intersects(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  return ((*src1 & *src2) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL )) != 0;
 else
  return __bitmap_intersects(src1, src2, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_subset(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  return ! ((*src1 & ~(*src2)) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_subset(src1, src2, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_empty(const unsigned long *src, int nbits)
{
 if (nbits <= 64)
  return ! (*src & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_empty(src, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_full(const unsigned long *src, int nbits)
{
 if (nbits <= 64)
  return ! (~(*src) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_full(src, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_weight(const unsigned long *src, int nbits)
{
 if (nbits <= 64)
  return hweight_long(*src & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 return __bitmap_weight(src, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_shift_right(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if (nbits <= 64)
  *dst = *src >> n;
 else
  __bitmap_shift_right(dst, src, n, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_shift_left(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if (nbits <= 64)
  *dst = (*src << n) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
 else
  __bitmap_shift_left(dst, src, n, nbits);
}
# 87 "linux-2.6.18/include/linux/cpumask.h" 2

typedef struct { unsigned long bits[(((1)+64 -1)/64)]; } cpumask_t;
typedef  cpumask_t  _GLOBAL_14_T; extern  _GLOBAL_14_T  global__unused_cpumask_arg_[NUM_STACKS];   


static inline  __attribute__((always_inline)) void __cpu_set(int cpu, volatile cpumask_t *dstp)
{
 set_bit(cpu, dstp->bits);
}


static inline  __attribute__((always_inline)) void __cpu_clear(int cpu, volatile cpumask_t *dstp)
{
 clear_bit(cpu, dstp->bits);
}


static inline  __attribute__((always_inline)) void __cpus_setall(cpumask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline  __attribute__((always_inline)) void __cpus_clear(cpumask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}





static inline  __attribute__((always_inline)) int __cpu_test_and_set(int cpu, cpumask_t *addr)
{
 return test_and_set_bit(cpu, addr->bits);
}


static inline  __attribute__((always_inline)) void __cpus_and(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) void __cpus_or(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) void __cpus_xor(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_andnot(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) void __cpus_complement(cpumask_t *dstp,
     const cpumask_t *srcp, int nbits)
{
 bitmap_complement(dstp->bits, srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_equal(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_intersects(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_subset(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_empty(const cpumask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_full(const cpumask_t *srcp, int nbits)
{
 return bitmap_full(srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_weight(const cpumask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_shift_right(cpumask_t *dstp,
     const cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_right(dstp->bits, srcp->bits, n, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_shift_left(cpumask_t *dstp,
     const cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}
# 270 "linux-2.6.18/include/linux/cpumask.h"
static inline  __attribute__((always_inline)) int __cpumask_scnprintf(char *buf, int len,
     const cpumask_t *srcp, int nbits)
{
 return bitmap_scnprintf(buf, len, srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __cpumask_parse(const char *buf, int len,
     cpumask_t *dstp, int nbits)
{
 return bitmap_parse(buf, len, dstp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __cpulist_scnprintf(char *buf, int len,
     const cpumask_t *srcp, int nbits)
{
 return bitmap_scnlistprintf(buf, len, srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpulist_parse(const char *buf, cpumask_t *dstp, int nbits)
{
 return bitmap_parselist(buf, dstp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __cpu_remap(int oldbit,
  const cpumask_t *oldp, const cpumask_t *newp, int nbits)
{
 return bitmap_bitremap(oldbit, oldp->bits, newp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_remap(cpumask_t *dstp, const cpumask_t *srcp,
  const cpumask_t *oldp, const cpumask_t *newp, int nbits)
{
 bitmap_remap(dstp->bits, srcp->bits, oldp->bits, newp->bits, nbits);
}
# 380 "linux-2.6.18/include/linux/cpumask.h"
typedef  cpumask_t  _GLOBAL_15_T; extern  _GLOBAL_15_T  global_cpu_possible_map[NUM_STACKS];   
typedef  cpumask_t  _GLOBAL_16_T; extern  _GLOBAL_16_T  global_cpu_online_map[NUM_STACKS];   
typedef  cpumask_t  _GLOBAL_17_T; extern  _GLOBAL_17_T  global_cpu_present_map[NUM_STACKS];   
# 23 "linux-2.6.18/include/asm/processor.h" 2
# 50 "linux-2.6.18/include/asm/processor.h"
struct cpuinfo_x86 {
 __u8 x86;
 __u8 x86_vendor;
 __u8 x86_model;
 __u8 x86_mask;
 int cpuid_level;
 __u32 x86_capability[7];
 char x86_vendor_id[16];
 char x86_model_id[64];
 int x86_cache_size;
 int x86_clflush_size;
 int x86_cache_alignment;
 int x86_tlbsize;
        __u8 x86_virt_bits, x86_phys_bits;
 __u8 x86_max_cores;
        __u32 x86_power;
 __u32 extended_cpuid_level;
 unsigned long loops_per_jiffy;



 __u8 apicid;





} __attribute__((__aligned__((1 << (7))))) ;
# 98 "linux-2.6.18/include/asm/processor.h"
typedef  char  _GLOBAL_18_T; extern  __attribute__((__aligned__((1 << (7)))))   _GLOBAL_18_T  global_ignore_irq13[NUM_STACKS];   

extern void identify_cpu(struct cpuinfo_x86 *);
extern void print_cpu_info(struct cpuinfo_x86 *);
extern unsigned int init_intel_cacheinfo(struct cpuinfo_x86 *c);
typedef  unsigned short   _GLOBAL_19_T; extern  _GLOBAL_19_T  global_num_cache_leaves[NUM_STACKS];    
# 147 "linux-2.6.18/include/asm/processor.h"
typedef  unsigned long   _GLOBAL_20_T; extern  _GLOBAL_20_T  global_mmu_cr4_features[NUM_STACKS];    

static inline  __attribute__((always_inline)) void set_in_cr4 (unsigned long mask)
{
 global_mmu_cr4_features[get_stack_id()] |= mask;
 __asm__("movq %%cr4,%%rax\n\t"
  "orq %0,%%rax\n\t"
  "movq %%rax,%%cr4\n"
  : : "irg" (mask)
  :"ax");
}

static inline  __attribute__((always_inline)) void clear_in_cr4 (unsigned long mask)
{
 global_mmu_cr4_features[get_stack_id()] &= ~mask;
 __asm__("movq %%cr4,%%rax\n\t"
  "andq %0,%%rax\n\t"
  "movq %%rax,%%cr4\n"
  : : "irg" (~mask)
  :"ax");
}
# 194 "linux-2.6.18/include/asm/processor.h"
struct i387_fxsave_struct {
 u16 cwd;
 u16 swd;
 u16 twd;
 u16 fop;
 u64 rip;
 u64 rdp;
 u32 mxcsr;
 u32 mxcsr_mask;
 u32 st_space[32];
 u32 xmm_space[64];
 u32 padding[24];
} __attribute__ ((aligned (16))) ;

union i387_union {
 struct i387_fxsave_struct fxsave;
};

struct tss_struct {
 u32 reserved1;
 u64 rsp0;
 u64 rsp1;
 u64 rsp2;
 u64 reserved2;
 u64 ist[7];
 u32 reserved3;
 u32 reserved4;
 u16 reserved5;
 u16 io_bitmap_base;
# 232 "linux-2.6.18/include/asm/processor.h"
 unsigned long io_bitmap[((65536/8)/sizeof(long)) + 1];
}  __attribute__((packed)) __attribute__((__aligned__((1 << (7))))) ;


typedef  struct cpuinfo_x86   _GLOBAL_21_T; extern  __attribute__((packed)) __attribute__((__aligned__((1 << (7)))))   _GLOBAL_21_T  global_boot_cpu_data[NUM_STACKS];    
typedef  __typeof__ ( struct tss_struct  )   _GLOBAL_22_T; extern  _GLOBAL_22_T  global_per_cpu__init_tss[NUM_STACKS];    

struct orig_ist {
 unsigned long ist[7];
};
typedef  __typeof__ ( struct orig_ist  )   _GLOBAL_23_T; extern  _GLOBAL_23_T  global_per_cpu__orig_ist[NUM_STACKS];    
# 252 "linux-2.6.18/include/asm/processor.h"
struct thread_struct {
 unsigned long rsp0;
 unsigned long rsp;
 unsigned long userrsp;
 unsigned long fs;
 unsigned long gs;
 unsigned short es, ds, fsindex, gsindex;

 unsigned long debugreg0;
 unsigned long debugreg1;
 unsigned long debugreg2;
 unsigned long debugreg3;
 unsigned long debugreg6;
 unsigned long debugreg7;

 unsigned long cr2, trap_no, error_code;

 union i387_union i387 __attribute__((aligned(16))) ;


 int ioperm;
 unsigned long *io_bitmap_ptr;
 unsigned io_bitmap_max;

 u64 tls_array[3];
} __attribute__((aligned(16))) ;
# 310 "linux-2.6.18/include/asm/processor.h"
struct task_struct;
struct mm_struct;


extern void release_thread(struct task_struct *);


extern void prepare_to_copy(struct task_struct *tsk);




extern long kernel_thread(int (*fn)(void *), void * arg, unsigned long flags);







extern unsigned long get_wchan(struct task_struct *p);





struct microcode_header {
 unsigned int hdrver;
 unsigned int rev;
 unsigned int date;
 unsigned int sig;
 unsigned int cksum;
 unsigned int ldrver;
 unsigned int pf;
 unsigned int datasize;
 unsigned int totalsize;
 unsigned int reserved[3];
};

struct microcode {
 struct microcode_header hdr;
 unsigned int bits[0];
};

typedef struct microcode microcode_t;
typedef struct microcode_header microcode_header_t;


struct extended_signature {
 unsigned int sig;
 unsigned int pf;
 unsigned int cksum;
};

struct extended_sigtable {
 unsigned int count;
 unsigned int cksum;
 unsigned int reserved[3];
 struct extended_signature sigs[0];
};
# 394 "linux-2.6.18/include/asm/processor.h"
static inline  __attribute__((always_inline)) void rep_nop(void)
{
 __asm__ __volatile__("rep;nop": : :"memory");
}


static inline  __attribute__((always_inline)) void sync_core(void)
{
 int tmp;
 asm volatile("cpuid" : "=a" (tmp) : "0" (1) : "ebx","ecx","edx","memory");
}




static inline  __attribute__((always_inline)) void prefetch(void *x)
{
 asm volatile("prefetcht0 %0" :: "m" (*(unsigned long *)x));
}


static inline  __attribute__((always_inline)) void prefetchw(void *x)
{
 asm volatile ("661:\n\t" "prefetcht0 (%1)" "\n662:\n" ".section .altinstructions,\"a\"\n" "  .align 8\n" "  .quad 661b\n" "  .quad 663f\n" "  .byte %c0\n" "  .byte 662b-661b\n" "  .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" "prefetchw (%1)" "\n664:\n" ".previous" :: "i" ((1*32+31)), "r" (x))


             ;
}
# 456 "linux-2.6.18/include/asm/processor.h"
static inline  __attribute__((always_inline)) void serialize_cpu(void)
{
 __asm__ __volatile__ ("cpuid" : : : "ax", "bx", "cx", "dx");
}

static inline  __attribute__((always_inline)) void __monitor(const void *eax, unsigned long ecx,
  unsigned long edx)
{

 asm volatile(
  ".byte 0x0f,0x01,0xc8;"
  : :"a" (eax), "c" (ecx), "d"(edx));
}

static inline  __attribute__((always_inline)) void __mwait(unsigned long eax, unsigned long ecx)
{

 asm volatile(
  ".byte 0x0f,0x01,0xc9;"
  : :"a" (eax), "c" (ecx));
}
# 487 "linux-2.6.18/include/asm/processor.h"
typedef  unsigned long   _GLOBAL_24_T; extern  _GLOBAL_24_T  global_boot_option_idle_override[NUM_STACKS];    

typedef  int  _GLOBAL_25_T; extern  _GLOBAL_25_T  global_bootloader_type[NUM_STACKS];   
# 15 "linux-2.6.18/include/linux/prefetch.h" 2
# 58 "linux-2.6.18/include/linux/prefetch.h"
static inline  __attribute__((always_inline)) void prefetch_range(void *addr, size_t len)
{

 char *cp;
 char *end = addr + len;

 for (cp = addr; cp < end; cp += (4*(1 << (7))))
  prefetch(cp);

}
# 9 "linux-2.6.18/include/linux/list.h" 2
# 21 "linux-2.6.18/include/linux/list.h"
struct list_head {
 struct list_head *next, *prev;
};






static inline  __attribute__((always_inline)) void INIT_LIST_HEAD(struct list_head *list)
{
 list->next = list;
 list->prev = list;
}







static inline  __attribute__((always_inline)) void __list_add(struct list_head *new,
         struct list_head *prev,
         struct list_head *next)
{
 next->prev = new;
 new->next = next;
 new->prev = prev;
 prev->next = new;
}
# 60 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add(struct list_head *new, struct list_head *head)
{
 __list_add(new, head, head->next);
}
# 73 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add_tail(struct list_head *new, struct list_head *head)
{
 __list_add(new, head->prev, head);
}







static inline  __attribute__((always_inline)) void __list_add_rcu(struct list_head * new,
  struct list_head * prev, struct list_head * next)
{
 new->next = next;
 new->prev = prev;
 __asm__ __volatile__("": : :"memory");
 next->prev = new;
 prev->next = new;
}
# 110 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add_rcu(struct list_head *new, struct list_head *head)
{
 __list_add_rcu(new, head, head->next);
}
# 131 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add_tail_rcu(struct list_head *new,
     struct list_head *head)
{
 __list_add_rcu(new, head->prev, head);
}
# 144 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void __list_del(struct list_head * prev, struct list_head * next)
{
 next->prev = prev;
 prev->next = next;
}







static inline  __attribute__((always_inline)) void list_del(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->next = ((void *) 0x00100100);
 entry->prev = ((void *) 0x00200200);
}
# 187 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_del_rcu(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->prev = ((void *) 0x00200200);
}







static inline  __attribute__((always_inline)) void list_replace(struct list_head *old,
    struct list_head *new)
{
 new->next = old->next;
 new->next->prev = new;
 new->prev = old->prev;
 new->prev->next = new;
}

static inline  __attribute__((always_inline)) void list_replace_init(struct list_head *old,
     struct list_head *new)
{
 list_replace(old, new);
 INIT_LIST_HEAD(old);
}
# 223 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_replace_rcu(struct list_head *old,
    struct list_head *new)
{
 new->next = old->next;
 new->prev = old->prev;
 __asm__ __volatile__("": : :"memory");
 new->next->prev = new;
 new->prev->next = new;
 old->prev = ((void *) 0x00200200);
}





static inline  __attribute__((always_inline)) void list_del_init(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 INIT_LIST_HEAD(entry);
}






static inline  __attribute__((always_inline)) void list_move(struct list_head *list, struct list_head *head)
{
        __list_del(list->prev, list->next);
        list_add(list, head);
}






static inline  __attribute__((always_inline)) void list_move_tail(struct list_head *list,
      struct list_head *head)
{
        __list_del(list->prev, list->next);
        list_add_tail(list, head);
}






static inline  __attribute__((always_inline)) int list_is_last(const struct list_head *list,
    const struct list_head *head)
{
 return list->next == head;
}





static inline  __attribute__((always_inline)) int list_empty(const struct list_head *head)
{
 return head->next == head;
}
# 300 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) int list_empty_careful(const struct list_head *head)
{
 struct list_head *next = head->next;
 return (next == head) && (next == head->prev);
}

static inline  __attribute__((always_inline)) void __list_splice(struct list_head *list,
     struct list_head *head)
{
 struct list_head *first = list->next;
 struct list_head *last = list->prev;
 struct list_head *at = head->next;

 first->prev = head;
 head->next = first;

 last->next = at;
 at->prev = last;
}






static inline  __attribute__((always_inline)) void list_splice(struct list_head *list, struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head);
}
# 338 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_splice_init(struct list_head *list,
        struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head);
  INIT_LIST_HEAD(list);
 }
}
# 592 "linux-2.6.18/include/linux/list.h"
struct hlist_head {
 struct hlist_node *first;
};

struct hlist_node {
 struct hlist_node *next, **pprev;
};




static inline  __attribute__((always_inline)) void INIT_HLIST_NODE(struct hlist_node *h)
{
 h->next = ((void *)0);
 h->pprev = ((void *)0);
}

static inline  __attribute__((always_inline)) int hlist_unhashed(const struct hlist_node *h)
{
 return !h->pprev;
}

static inline  __attribute__((always_inline)) int hlist_empty(const struct hlist_head *h)
{
 return !h->first;
}

static inline  __attribute__((always_inline)) void __hlist_del(struct hlist_node *n)
{
 struct hlist_node *next = n->next;
 struct hlist_node **pprev = n->pprev;
 *pprev = next;
 if (next)
  next->pprev = pprev;
}

static inline  __attribute__((always_inline)) void hlist_del(struct hlist_node *n)
{
 __hlist_del(n);
 n->next = ((void *) 0x00100100);
 n->pprev = ((void *) 0x00200200);
}
# 654 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_del_rcu(struct hlist_node *n)
{
 __hlist_del(n);
 n->pprev = ((void *) 0x00200200);
}

static inline  __attribute__((always_inline)) void hlist_del_init(struct hlist_node *n)
{
 if (!hlist_unhashed(n)) {
  __hlist_del(n);
  INIT_HLIST_NODE(n);
 }
}
# 675 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_replace_rcu(struct hlist_node *old,
     struct hlist_node *new)
{
 struct hlist_node *next = old->next;

 new->next = next;
 new->pprev = old->pprev;
 __asm__ __volatile__("": : :"memory");
 if (next)
  new->next->pprev = &new->next;
 *new->pprev = new;
 old->pprev = ((void *) 0x00200200);
}

static inline  __attribute__((always_inline)) void hlist_add_head(struct hlist_node *n, struct hlist_head *h)
{
 struct hlist_node *first = h->first;
 n->next = first;
 if (first)
  first->pprev = &n->next;
 h->first = n;
 n->pprev = &h->first;
}
# 719 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_add_head_rcu(struct hlist_node *n,
     struct hlist_head *h)
{
 struct hlist_node *first = h->first;
 n->next = first;
 n->pprev = &h->first;
 __asm__ __volatile__("": : :"memory");
 if (first)
  first->pprev = &n->next;
 h->first = n;
}


static inline  __attribute__((always_inline)) void hlist_add_before(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 next->pprev = &n->next;
 *(n->pprev) = n;
}

static inline  __attribute__((always_inline)) void hlist_add_after(struct hlist_node *n,
     struct hlist_node *next)
{
 next->next = n->next;
 n->next = next;
 next->pprev = &n->next;

 if(next->next)
  next->next->pprev = &next->next;
}
# 770 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_add_before_rcu(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 __asm__ __volatile__("": : :"memory");
 next->pprev = &n->next;
 *(n->pprev) = n;
}
# 798 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_add_after_rcu(struct hlist_node *prev,
           struct hlist_node *n)
{
 n->next = prev->next;
 n->pprev = &prev->next;
 __asm__ __volatile__("": : :"memory");
 prev->next = n;
 if (n->next)
  n->next->pprev = &n->next;
}
# 13 "linux-2.6.18/include/linux/lockdep.h" 2
# 1 "linux-2.6.18/include/linux/debug_locks.h" 1



struct task_struct;

typedef  int  _GLOBAL_26_T; extern  _GLOBAL_26_T  global_debug_locks[NUM_STACKS];   
typedef  int  _GLOBAL_27_T; extern  _GLOBAL_27_T  global_debug_locks_silent[NUM_STACKS];   




extern int debug_locks_off(void);
# 52 "linux-2.6.18/include/linux/debug_locks.h"
static inline  __attribute__((always_inline)) void debug_show_all_locks(void)
{
}

static inline  __attribute__((always_inline)) void debug_show_held_locks(struct task_struct *task)
{
}

static inline  __attribute__((always_inline)) void
debug_check_no_locks_freed(const void *from, unsigned long len)
{
}

static inline  __attribute__((always_inline)) void
debug_check_no_locks_held(struct task_struct *task)
{
}
# 14 "linux-2.6.18/include/linux/lockdep.h" 2
# 1 "linux-2.6.18/include/linux/stacktrace.h" 1
# 15 "linux-2.6.18/include/linux/lockdep.h" 2
# 243 "linux-2.6.18/include/linux/lockdep.h"
static inline  __attribute__((always_inline)) void lockdep_off(void)
{
}

static inline  __attribute__((always_inline)) void lockdep_on(void)
{
}

static inline  __attribute__((always_inline)) int lockdep_internal(void)
{
 return 0;
}
# 270 "linux-2.6.18/include/linux/lockdep.h"
struct lock_class_key { };
# 13 "linux-2.6.18/include/linux/spinlock_types.h" 2




# 1 "linux-2.6.18/include/linux/spinlock_types_up.h" 1
# 29 "linux-2.6.18/include/linux/spinlock_types_up.h"
typedef struct { } raw_spinlock_t;





typedef struct {




} raw_rwlock_t;
# 18 "linux-2.6.18/include/linux/spinlock_types.h" 2


typedef struct {
 raw_spinlock_t raw_lock;
# 32 "linux-2.6.18/include/linux/spinlock_types.h"
} spinlock_t;



typedef struct {
 raw_rwlock_t raw_lock;
# 48 "linux-2.6.18/include/linux/spinlock_types.h"
} rwlock_t;
# 79 "linux-2.6.18/include/linux/spinlock.h" 2

extern int  __attribute__((section(".spinlock.text"))) generic__raw_read_trylock(raw_rwlock_t *lock);







# 1 "linux-2.6.18/include/linux/spinlock_up.h" 1
# 89 "linux-2.6.18/include/linux/spinlock.h" 2
# 134 "linux-2.6.18/include/linux/spinlock.h"
# 1 "linux-2.6.18/include/linux/spinlock_api_up.h" 1
# 135 "linux-2.6.18/include/linux/spinlock.h" 2
# 259 "linux-2.6.18/include/linux/spinlock.h"
# 1 "linux-2.6.18/include/asm/atomic.h" 1
# 24 "linux-2.6.18/include/asm/atomic.h"
typedef struct { volatile int counter; } atomic_t;
# 52 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) void atomic_add(int i, atomic_t *v)
{
 __asm__ __volatile__(
  "" "addl %1,%0"
  :"=m" (v->counter)
  :"ir" (i), "m" (v->counter));
}
# 67 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) void atomic_sub(int i, atomic_t *v)
{
 __asm__ __volatile__(
  "" "subl %1,%0"
  :"=m" (v->counter)
  :"ir" (i), "m" (v->counter));
}
# 84 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic_sub_and_test(int i, atomic_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "subl %2,%0; sete %1"
  :"=m" (v->counter), "=qm" (c)
  :"ir" (i), "m" (v->counter) : "memory");
 return c;
}







static __inline__  __attribute__((always_inline)) void atomic_inc(atomic_t *v)
{
 __asm__ __volatile__(
  "" "incl %0"
  :"=m" (v->counter)
  :"m" (v->counter));
}







static __inline__  __attribute__((always_inline)) void atomic_dec(atomic_t *v)
{
 __asm__ __volatile__(
  "" "decl %0"
  :"=m" (v->counter)
  :"m" (v->counter));
}
# 131 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic_dec_and_test(atomic_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "decl %0; sete %1"
  :"=m" (v->counter), "=qm" (c)
  :"m" (v->counter) : "memory");
 return c != 0;
}
# 150 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic_inc_and_test(atomic_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "incl %0; sete %1"
  :"=m" (v->counter), "=qm" (c)
  :"m" (v->counter) : "memory");
 return c != 0;
}
# 170 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic_add_negative(int i, atomic_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "addl %2,%0; sets %1"
  :"=m" (v->counter), "=qm" (c)
  :"ir" (i), "m" (v->counter) : "memory");
 return c;
}
# 188 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic_add_return(int i, atomic_t *v)
{
 int __i = i;
 __asm__ __volatile__(
  "" "xaddl %0, %1;"
  :"=r"(i)
  :"m"(v->counter), "0"(i));
 return i + __i;
}

static __inline__  __attribute__((always_inline)) int atomic_sub_return(int i, atomic_t *v)
{
 return atomic_add_return(-i,v);
}






typedef struct { volatile long counter; } atomic64_t;
# 237 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) void atomic64_add(long i, atomic64_t *v)
{
 __asm__ __volatile__(
  "" "addq %1,%0"
  :"=m" (v->counter)
  :"ir" (i), "m" (v->counter));
}
# 252 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) void atomic64_sub(long i, atomic64_t *v)
{
 __asm__ __volatile__(
  "" "subq %1,%0"
  :"=m" (v->counter)
  :"ir" (i), "m" (v->counter));
}
# 269 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic64_sub_and_test(long i, atomic64_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "subq %2,%0; sete %1"
  :"=m" (v->counter), "=qm" (c)
  :"ir" (i), "m" (v->counter) : "memory");
 return c;
}







static __inline__  __attribute__((always_inline)) void atomic64_inc(atomic64_t *v)
{
 __asm__ __volatile__(
  "" "incq %0"
  :"=m" (v->counter)
  :"m" (v->counter));
}







static __inline__  __attribute__((always_inline)) void atomic64_dec(atomic64_t *v)
{
 __asm__ __volatile__(
  "" "decq %0"
  :"=m" (v->counter)
  :"m" (v->counter));
}
# 316 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic64_dec_and_test(atomic64_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "decq %0; sete %1"
  :"=m" (v->counter), "=qm" (c)
  :"m" (v->counter) : "memory");
 return c != 0;
}
# 335 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic64_inc_and_test(atomic64_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "incq %0; sete %1"
  :"=m" (v->counter), "=qm" (c)
  :"m" (v->counter) : "memory");
 return c != 0;
}
# 355 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic64_add_negative(long i, atomic64_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "addq %2,%0; sets %1"
  :"=m" (v->counter), "=qm" (c)
  :"ir" (i), "m" (v->counter) : "memory");
 return c;
}
# 373 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) long atomic64_add_return(long i, atomic64_t *v)
{
 long __i = i;
 __asm__ __volatile__(
  "" "xaddq %0, %1;"
  :"=r"(i)
  :"m"(v->counter), "0"(i));
 return i + __i;
}

static __inline__  __attribute__((always_inline)) long atomic64_sub_return(long i, atomic64_t *v)
{
 return atomic64_add_return(-i,v);
}
# 434 "linux-2.6.18/include/asm/atomic.h"
# 1 "linux-2.6.18/include/asm-generic/atomic.h" 1
# 23 "linux-2.6.18/include/asm-generic/atomic.h"
typedef atomic64_t atomic_long_t;



static inline  __attribute__((always_inline)) long atomic_long_read(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)((v)->counter);
}

static inline  __attribute__((always_inline)) void atomic_long_set(atomic_long_t *l, long i)
{
 atomic64_t *v = (atomic64_t *)l;

 (((v)->counter) = (i));
}

static inline  __attribute__((always_inline)) void atomic_long_inc(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_inc(v);
}

static inline  __attribute__((always_inline)) void atomic_long_dec(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_dec(v);
}

static inline  __attribute__((always_inline)) void atomic_long_add(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_add(i, v);
}

static inline  __attribute__((always_inline)) void atomic_long_sub(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_sub(i, v);
}
# 435 "linux-2.6.18/include/asm/atomic.h" 2
# 260 "linux-2.6.18/include/linux/spinlock.h" 2





extern int _atomic_dec_and_lock(atomic_t *atomic, spinlock_t *lock);
# 46 "linux-2.6.18/include/linux/capability.h" 2
# 58 "linux-2.6.18/include/linux/capability.h"
typedef __u32 kernel_cap_t;
# 295 "linux-2.6.18/include/linux/capability.h"
typedef  kernel_cap_t  _GLOBAL_28_T; extern  _GLOBAL_28_T  global_cap_bset[NUM_STACKS];   
# 323 "linux-2.6.18/include/linux/capability.h"
static inline  __attribute__((always_inline)) kernel_cap_t cap_combine(kernel_cap_t a, kernel_cap_t b)
{
     kernel_cap_t dest;
     (dest) = (a) | (b);
     return dest;
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_intersect(kernel_cap_t a, kernel_cap_t b)
{
     kernel_cap_t dest;
     (dest) = (a) & (b);
     return dest;
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_drop(kernel_cap_t a, kernel_cap_t drop)
{
     kernel_cap_t dest;
     (dest) = (a) & ~(drop);
     return dest;
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_invert(kernel_cap_t c)
{
     kernel_cap_t dest;
     (dest) = ~(c);
     return dest;
}
# 360 "linux-2.6.18/include/linux/capability.h"
int capable(int cap);
int __capable(struct task_struct *t, int cap);
# 45 "linux-2.6.18/include/linux/sched.h" 2



# 1 "linux-2.6.18/include/linux/timex.h" 1
# 57 "linux-2.6.18/include/linux/timex.h"
# 1 "linux-2.6.18/include/linux/time.h" 1






# 1 "linux-2.6.18/include/linux/seqlock.h" 1
# 32 "linux-2.6.18/include/linux/seqlock.h"
typedef struct {
 unsigned sequence;
 spinlock_t lock;
} seqlock_t;
# 57 "linux-2.6.18/include/linux/seqlock.h"
static inline  __attribute__((always_inline)) void write_seqlock(seqlock_t *sl)
{
 do { do { } while (0); (void)0; (void)(&sl->lock); } while (0);
 ++sl->sequence;
 __asm__ __volatile__("": : :"memory");
}

static inline  __attribute__((always_inline)) void write_sequnlock(seqlock_t *sl)
{
 __asm__ __volatile__("": : :"memory");
 sl->sequence++;
 do { do { } while (0); (void)0; (void)(&sl->lock); } while (0);
}

static inline  __attribute__((always_inline)) int write_tryseqlock(seqlock_t *sl)
{
 int ret = (({ do { do { } while (0); (void)0; (void)(&sl->lock); } while (0); 1; }));

 if (ret) {
  ++sl->sequence;
  __asm__ __volatile__("": : :"memory");
 }
 return ret;
}


static inline   __attribute__((always_inline)) __attribute__((always_inline)) unsigned read_seqbegin(const seqlock_t *sl)
{
 unsigned ret = sl->sequence;
 __asm__ __volatile__("": : :"memory");
 return ret;
}
# 98 "linux-2.6.18/include/linux/seqlock.h"
static inline   __attribute__((always_inline)) __attribute__((always_inline)) int read_seqretry(const seqlock_t *sl, unsigned iv)
{
 __asm__ __volatile__("": : :"memory");
 return (iv & 1) | (sl->sequence ^ iv);
}
# 112 "linux-2.6.18/include/linux/seqlock.h"
typedef struct seqcount {
 unsigned sequence;
} seqcount_t;





static inline  __attribute__((always_inline)) unsigned read_seqcount_begin(const seqcount_t *s)
{
 unsigned ret = s->sequence;
 __asm__ __volatile__("": : :"memory");
 return ret;
}






static inline  __attribute__((always_inline)) int read_seqcount_retry(const seqcount_t *s, unsigned iv)
{
 __asm__ __volatile__("": : :"memory");
 return (iv & 1) | (s->sequence ^ iv);
}






static inline  __attribute__((always_inline)) void write_seqcount_begin(seqcount_t *s)
{
 s->sequence++;
 __asm__ __volatile__("": : :"memory");
}

static inline  __attribute__((always_inline)) void write_seqcount_end(seqcount_t *s)
{
 __asm__ __volatile__("": : :"memory");
 s->sequence++;
}
# 8 "linux-2.6.18/include/linux/time.h" 2




struct timespec {
 time_t tv_sec;
 long tv_nsec;
};


struct timeval {
 time_t tv_sec;
 suseconds_t tv_usec;
};

struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 39 "linux-2.6.18/include/linux/time.h"
static inline  __attribute__((always_inline)) int timespec_equal(struct timespec *a, struct timespec *b)
{
 return (a->tv_sec == b->tv_sec) && (a->tv_nsec == b->tv_nsec);
}






static inline  __attribute__((always_inline)) int timespec_compare(struct timespec *lhs, struct timespec *rhs)
{
 if (lhs->tv_sec < rhs->tv_sec)
  return -1;
 if (lhs->tv_sec > rhs->tv_sec)
  return 1;
 return lhs->tv_nsec - rhs->tv_nsec;
}

static inline  __attribute__((always_inline)) int timeval_compare(struct timeval *lhs, struct timeval *rhs)
{
 if (lhs->tv_sec < rhs->tv_sec)
  return -1;
 if (lhs->tv_sec > rhs->tv_sec)
  return 1;
 return lhs->tv_usec - rhs->tv_usec;
}

extern unsigned long mktime(const unsigned int year, const unsigned int mon,
       const unsigned int day, const unsigned int hour,
       const unsigned int min, const unsigned int sec);

extern void set_normalized_timespec(struct timespec *ts, time_t sec, long nsec);




static inline  __attribute__((always_inline)) struct timespec timespec_sub(struct timespec lhs,
      struct timespec rhs)
{
 struct timespec ts_delta;
 set_normalized_timespec(&ts_delta, lhs.tv_sec - rhs.tv_sec,
    lhs.tv_nsec - rhs.tv_nsec);
 return ts_delta;
}







typedef  struct timespec   _GLOBAL_29_T; extern  _GLOBAL_29_T  global_xtime[NUM_STACKS];    
typedef  struct timespec   _GLOBAL_30_T; extern  _GLOBAL_30_T  global_wall_to_monotonic[NUM_STACKS];    
typedef  seqlock_t  _GLOBAL_31_T; extern  _GLOBAL_31_T  global_xtime_lock[NUM_STACKS];   

void timekeeping_init(void);

static inline  __attribute__((always_inline)) unsigned long get_seconds(void)
{
 return global_xtime[get_stack_id()].tv_sec;
}

struct timespec current_kernel_time(void);




extern void do_gettimeofday(struct timeval *tv);
extern int do_settimeofday(struct timespec *tv);
extern int do_sys_settimeofday(struct timespec *tv, struct timezone *tz);

extern long do_utimes(int dfd, char *filename, struct timeval *times);
struct itimerval;
extern int do_setitimer(int which, struct itimerval *value,
   struct itimerval *ovalue);
extern unsigned int alarm_setitimer(unsigned int seconds);
extern int do_getitimer(int which, struct itimerval *value);
extern void getnstimeofday(struct timespec *tv);

extern struct timespec timespec_trunc(struct timespec t, unsigned gran);
extern int timekeeping_is_continuous(void);
# 129 "linux-2.6.18/include/linux/time.h"
static inline  __attribute__((always_inline)) s64 timespec_to_ns(const struct timespec *ts)
{
 return ((s64) ts->tv_sec * 1000000000L) + ts->tv_nsec;
}
# 141 "linux-2.6.18/include/linux/time.h"
static inline  __attribute__((always_inline)) s64 timeval_to_ns(const struct timeval *tv)
{
 return ((s64) tv->tv_sec * 1000000000L) +
  tv->tv_usec * 1000L;
}







extern struct timespec ns_to_timespec(const s64 nsec);







extern struct timeval ns_to_timeval(const s64 nsec);






static inline  __attribute__((always_inline)) void timespec_add_ns(struct timespec *a, u64 ns)
{
 ns += a->tv_nsec;
 while(__builtin_expect(!!(ns >= 1000000000L), 0)) {
  ns -= 1000000000L;
  a->tv_sec++;
 }
 a->tv_nsec = ns;
}
# 195 "linux-2.6.18/include/linux/time.h"
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};

struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 58 "linux-2.6.18/include/linux/timex.h" 2
# 106 "linux-2.6.18/include/linux/timex.h"
struct timex {
 unsigned int modes;
 long offset;
 long freq;
 long maxerror;
 long esterror;
 int status;
 long constant;
 long precision;
 long tolerance;


 struct timeval time;
 long tick;

 long ppsfreq;
 long jitter;
 int shift;
 long stabil;
 long jitcnt;
 long calcnt;
 long errcnt;
 long stbcnt;

 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32; int :32;
};
# 193 "linux-2.6.18/include/linux/timex.h"
# 1 "linux-2.6.18/include/asm/timex.h" 1
# 9 "linux-2.6.18/include/asm/timex.h"
# 1 "linux-2.6.18/include/asm/8253pit.h" 1
# 10 "linux-2.6.18/include/asm/timex.h" 2

# 1 "linux-2.6.18/include/asm/vsyscall.h" 1



enum vsyscall_num {
 __NR_vgettimeofday,
 __NR_vtime,
};
# 29 "linux-2.6.18/include/asm/vsyscall.h"
struct vxtime_data {
 long hpet_address;
 int last;
 unsigned long last_tsc;
 long quot;
 long tsc_quot;
 int mode;
};





typedef  struct vxtime_data   _GLOBAL_32_T; extern  _GLOBAL_32_T  global___vxtime[NUM_STACKS];    
typedef  struct timespec   _GLOBAL_33_T; extern  _GLOBAL_33_T  global___xtime[NUM_STACKS];    
typedef  unsigned long    _GLOBAL_34_T; extern volatile  _GLOBAL_34_T  global___jiffies[NUM_STACKS];     
typedef  unsigned long   _GLOBAL_35_T; extern  _GLOBAL_35_T  global___wall_jiffies[NUM_STACKS];    
typedef  struct timezone   _GLOBAL_36_T; extern  _GLOBAL_36_T  global___sys_tz[NUM_STACKS];    
typedef  seqlock_t  _GLOBAL_37_T; extern  _GLOBAL_37_T  global___xtime_lock[NUM_STACKS];   


typedef  struct vxtime_data   _GLOBAL_38_T; extern  _GLOBAL_38_T  global_vxtime[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_39_T; extern  _GLOBAL_39_T  global_wall_jiffies[NUM_STACKS];    
typedef  struct timezone   _GLOBAL_40_T; extern  _GLOBAL_40_T  global_sys_tz[NUM_STACKS];    
typedef  int  _GLOBAL_41_T; extern  _GLOBAL_41_T  global_sysctl_vsyscall[NUM_STACKS];   
typedef  seqlock_t  _GLOBAL_42_T; extern  _GLOBAL_42_T  global_xtime_lock[NUM_STACKS];   

typedef  int  _GLOBAL_43_T; extern  _GLOBAL_43_T  global_sysctl_vsyscall[NUM_STACKS];   
# 12 "linux-2.6.18/include/asm/timex.h" 2
# 1 "linux-2.6.18/include/asm/hpet.h" 1
# 56 "linux-2.6.18/include/asm/hpet.h"
extern int is_hpet_enabled(void);
extern int hpet_rtc_timer_init(void);
extern int apic_is_clustered_box(void);

typedef  int  _GLOBAL_44_T; extern  _GLOBAL_44_T  global_hpet_use_timer[NUM_STACKS];   
# 13 "linux-2.6.18/include/asm/timex.h" 2






typedef unsigned long long cycles_t;

static inline  __attribute__((always_inline)) cycles_t get_cycles (void)
{
 unsigned long long ret;

 do { unsigned int __a,__d; asm volatile("rdtsc" : "=a" (__a), "=d" (__d)); (ret) = ((unsigned long)__a) | (((unsigned long)__d)<<32); } while(0);
 return ret;
}


static inline   __attribute__((always_inline)) __attribute__((always_inline)) cycles_t get_cycles_sync(void)
{
 unsigned long long ret;
 unsigned eax;


 asm volatile ("661:\n\t" "cpuid" "\n662:\n" ".section .altinstructions,\"a\"\n" "  .align 8\n" "  .quad 661b\n" "  .quad 663f\n" "  .byte %c[feat]\n" "  .byte 662b-661b\n" "  .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" ".byte 0x66,0x90\n" "\n664:\n" ".previous" : "=a" (eax) : [feat] "i" ((3*32+6)), "0" (1) : "ebx","ecx","edx","memory")
                                                      ;
 do { unsigned int __a,__d; asm volatile("rdtsc" : "=a" (__a), "=d" (__d)); (ret) = ((unsigned long)__a) | (((unsigned long)__d)<<32); } while(0);
 return ret;
}

typedef  unsigned int   _GLOBAL_45_T; extern  _GLOBAL_45_T  global_cpu_khz[NUM_STACKS];    

extern int read_current_timer(unsigned long *timer_value);


typedef  struct vxtime_data   _GLOBAL_46_T; extern  _GLOBAL_46_T  global_vxtime[NUM_STACKS];    
# 194 "linux-2.6.18/include/linux/timex.h" 2






typedef  unsigned long   _GLOBAL_47_T; extern  _GLOBAL_47_T  global_tick_usec[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_48_T; extern  _GLOBAL_48_T  global_tick_nsec[NUM_STACKS];    
typedef  int  _GLOBAL_49_T; extern  _GLOBAL_49_T  global_tickadj[NUM_STACKS];   




typedef  int  _GLOBAL_50_T; extern  _GLOBAL_50_T  global_time_state[NUM_STACKS];   
typedef  int  _GLOBAL_51_T; extern  _GLOBAL_51_T  global_time_status[NUM_STACKS];   
typedef  long  _GLOBAL_52_T; extern  _GLOBAL_52_T  global_time_offset[NUM_STACKS];   
typedef  long  _GLOBAL_53_T; extern  _GLOBAL_53_T  global_time_constant[NUM_STACKS];   
typedef  long  _GLOBAL_54_T; extern  _GLOBAL_54_T  global_time_tolerance[NUM_STACKS];   
typedef  long  _GLOBAL_55_T; extern  _GLOBAL_55_T  global_time_precision[NUM_STACKS];   
typedef  long  _GLOBAL_56_T; extern  _GLOBAL_56_T  global_time_maxerror[NUM_STACKS];   
typedef  long  _GLOBAL_57_T; extern  _GLOBAL_57_T  global_time_esterror[NUM_STACKS];   

typedef  long  _GLOBAL_58_T; extern  _GLOBAL_58_T  global_time_freq[NUM_STACKS];   
typedef  long  _GLOBAL_59_T; extern  _GLOBAL_59_T  global_time_reftime[NUM_STACKS];   

typedef  long  _GLOBAL_60_T; extern  _GLOBAL_60_T  global_time_adjust[NUM_STACKS];   
typedef  long  _GLOBAL_61_T; extern  _GLOBAL_61_T  global_time_next_adjust[NUM_STACKS];   






static inline  __attribute__((always_inline)) void ntp_clear(void)
{
 global_time_adjust[get_stack_id()] = 0;
 global_time_status[get_stack_id()] |= 0x0040;
 global_time_maxerror[get_stack_id()] = (512000L << 5);
 global_time_esterror[get_stack_id()] = (512000L << 5);
}





static inline  __attribute__((always_inline)) int ntp_synced(void)
{
 return !(global_time_status[get_stack_id()] & 0x0040);
}
# 300 "linux-2.6.18/include/linux/timex.h"
static inline  __attribute__((always_inline)) void
time_interpolator_reset(void)
{
}






extern u64 current_tick_length(void);

extern int do_adjtimex(struct timex *);
# 49 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/jiffies.h" 1



# 1 "linux-2.6.18/include/linux/calc64.h" 1




# 1 "linux-2.6.18/include/asm/div64.h" 1
# 1 "linux-2.6.18/include/asm-generic/div64.h" 1
# 1 "linux-2.6.18/include/asm/div64.h" 2
# 6 "linux-2.6.18/include/linux/calc64.h" 2
# 20 "linux-2.6.18/include/linux/calc64.h"
static inline  __attribute__((always_inline)) unsigned long do_div_llr(const long long dividend,
           const long divisor, long *remainder)
{
 u64 result = dividend;

 *(remainder) = ({ uint32_t __base = (divisor); uint32_t __rem; __rem = ((uint64_t)(result)) % __base; (result) = ((uint64_t)(result)) / __base; __rem; });
 return (unsigned long) result;
}







static inline  __attribute__((always_inline)) long div_long_long_rem_signed(const long long dividend,
         const long divisor, long *remainder)
{
 long res;

 if (__builtin_expect(!!(dividend < 0), 0)) {
  res = -do_div_llr((-dividend), divisor, remainder);
  *remainder = -(*remainder);
 } else
  res = do_div_llr((dividend), divisor, remainder);

 return res;
}
# 5 "linux-2.6.18/include/linux/jiffies.h" 2
# 81 "linux-2.6.18/include/linux/jiffies.h"
typedef  u64   _GLOBAL_62_T; extern  __attribute__((section(".data")))   _GLOBAL_62_T  global_jiffies_64[NUM_STACKS];    
typedef  unsigned long    _GLOBAL_63_T; extern volatile  __attribute__((section(".data")))   _GLOBAL_63_T  global_jiffies[NUM_STACKS];      




static inline  __attribute__((always_inline)) u64 get_jiffies_64(void)
{
 return (u64)global_jiffies[get_stack_id()];
}
# 252 "linux-2.6.18/include/linux/jiffies.h"
static inline  __attribute__((always_inline)) unsigned int jiffies_to_msecs(const unsigned long j)
{

 return (1000L / 1000) * j;





}

static inline  __attribute__((always_inline)) unsigned int jiffies_to_usecs(const unsigned long j)
{

 return (1000000L / 1000) * j;





}

static inline  __attribute__((always_inline)) unsigned long msecs_to_jiffies(const unsigned int m)
{
 if (m > jiffies_to_msecs(((~0UL >> 1)-1)))
  return ((~0UL >> 1)-1);

 return (m + (1000L / 1000) - 1) / (1000L / 1000);





}

static inline  __attribute__((always_inline)) unsigned long usecs_to_jiffies(const unsigned int u)
{
 if (u > jiffies_to_usecs(((~0UL >> 1)-1)))
  return ((~0UL >> 1)-1);

 return (u + (1000000L / 1000) - 1) / (1000000L / 1000);





}
# 311 "linux-2.6.18/include/linux/jiffies.h"
static __inline__  __attribute__((always_inline)) unsigned long
timespec_to_jiffies(const struct timespec *value)
{
 unsigned long sec = value->tv_sec;
 long nsec = value->tv_nsec + (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))))) - 1;

 if (sec >= (( ((((((~0UL >> 1)-1) >> (32 - 10)) * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))) / (1000000000L)) << (1)) + (((((((~0UL >> 1)-1) >> (32 - 10)) * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))) % (1000000000L)) << (1)) + (1000000000L) / 2) / (1000000000L)) - 1)){
  sec = (( ((((((~0UL >> 1)-1) >> (32 - 10)) * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))) / (1000000000L)) << (1)) + (((((((~0UL >> 1)-1) >> (32 - 10)) * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))) % (1000000000L)) << (1)) + (1000000000L) / 2) / (1000000000L)) - 1);
  nsec = 0;
 }
 return (((u64)sec * ((unsigned long)((((u64)1000000000L << (32 - 10)) + (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))))) -1) / (u64)(( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))))) +
  (((u64)nsec * ((unsigned long)((((u64)1 << ((32 - 10) + 29)) + (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))))) -1) / (u64)(( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))))) >>
   (((32 - 10) + 29) - (32 - 10)))) >> (32 - 10);

}

static __inline__  __attribute__((always_inline)) void
jiffies_to_timespec(const unsigned long jiffies, struct timespec *value)
{




 u64 nsec = (u64)jiffies * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))));
 value->tv_sec = do_div_llr((nsec), 1000000000L, &value->tv_nsec);
}
# 350 "linux-2.6.18/include/linux/jiffies.h"
static __inline__  __attribute__((always_inline)) unsigned long
timeval_to_jiffies(const struct timeval *value)
{
 unsigned long sec = value->tv_sec;
 long usec = value->tv_usec;

 if (sec >= (( ((((((~0UL >> 1)-1) >> (32 - 10)) * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))) / (1000000000L)) << (1)) + (((((((~0UL >> 1)-1) >> (32 - 10)) * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))) % (1000000000L)) << (1)) + (1000000000L) / 2) / (1000000000L)) - 1)){
  sec = (( ((((((~0UL >> 1)-1) >> (32 - 10)) * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))) / (1000000000L)) << (1)) + (((((((~0UL >> 1)-1) >> (32 - 10)) * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))) % (1000000000L)) << (1)) + (1000000000L) / 2) / (1000000000L)) - 1);
  usec = 0;
 }
 return (((u64)sec * ((unsigned long)((((u64)1000000000L << (32 - 10)) + (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))))) -1) / (u64)(( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))))) +
  (((u64)usec * ((unsigned long)((((u64)1000L << ((32 - 10) + 19)) + (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))))) -1) / (u64)(( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))))))) + (u64)(((u64)1 << ((32 - 10) + 19)) - 1)) >>
   (((32 - 10) + 19) - (32 - 10)))) >> (32 - 10);
}

static __inline__  __attribute__((always_inline)) void
jiffies_to_timeval(const unsigned long jiffies, struct timeval *value)
{




 u64 nsec = (u64)jiffies * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))));
 long tv_usec;

 value->tv_sec = do_div_llr((nsec), 1000000000L, &tv_usec);
 tv_usec /= 1000L;
 value->tv_usec = tv_usec;
}




static inline  __attribute__((always_inline)) clock_t jiffies_to_clock_t(long x)
{



 u64 tmp = (u64)x * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))));
 ({ uint32_t __base = ((1000000000L / 100)); uint32_t __rem; __rem = ((uint64_t)(tmp)) % __base; (tmp) = ((uint64_t)(tmp)) / __base; __rem; });
 return (long)tmp;

}

static inline  __attribute__((always_inline)) unsigned long clock_t_to_jiffies(unsigned long x)
{

 if (x >= ~0UL / (1000 / 100))
  return ~0UL;
 return x * (1000 / 100);
# 412 "linux-2.6.18/include/linux/jiffies.h"
}

static inline  __attribute__((always_inline)) u64 jiffies_64_to_clock_t(u64 x)
{
# 424 "linux-2.6.18/include/linux/jiffies.h"
 x *= (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))));
 ({ uint32_t __base = ((1000000000L / 100)); uint32_t __rem; __rem = ((uint64_t)(x)) % __base; (x) = ((uint64_t)(x)) / __base; __rem; });

 return x;
}

static inline  __attribute__((always_inline)) u64 nsec_to_clock_t(u64 x)
{

 ({ uint32_t __base = ((1000000000L / 100)); uint32_t __rem; __rem = ((uint64_t)(x)) % __base; (x) = ((uint64_t)(x)) / __base; __rem; });
# 447 "linux-2.6.18/include/linux/jiffies.h"
 return x;
}
# 50 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/rbtree.h" 1
# 100 "linux-2.6.18/include/linux/rbtree.h"
struct rb_node
{
 unsigned long rb_parent_color;


 struct rb_node *rb_right;
 struct rb_node *rb_left;
} __attribute__((aligned(sizeof(long)))) ;


struct rb_root
{
 struct rb_node *rb_node;
};
# 123 "linux-2.6.18/include/linux/rbtree.h"
static inline  __attribute__((always_inline)) void rb_set_parent(struct rb_node *rb, struct rb_node *p)
{
 rb->rb_parent_color = (rb->rb_parent_color & 3) | (unsigned long)p;
}
static inline  __attribute__((always_inline)) void rb_set_color(struct rb_node *rb, int color)
{
 rb->rb_parent_color = (rb->rb_parent_color & ~1) | color;
}
# 139 "linux-2.6.18/include/linux/rbtree.h"
extern void rb_insert_color(struct rb_node *, struct rb_root *);
extern void rb_erase(struct rb_node *, struct rb_root *);


extern struct rb_node *rb_next(struct rb_node *);
extern struct rb_node *rb_prev(struct rb_node *);
extern struct rb_node *rb_first(struct rb_root *);
extern struct rb_node *rb_last(struct rb_root *);


extern void rb_replace_node(struct rb_node *victim, struct rb_node *new,
       struct rb_root *root);

static inline  __attribute__((always_inline)) void rb_link_node(struct rb_node * node, struct rb_node * parent,
    struct rb_node ** rb_link)
{
 node->rb_parent_color = (unsigned long )parent;
 node->rb_left = node->rb_right = ((void *)0);

 *rb_link = node;
}
# 51 "linux-2.6.18/include/linux/sched.h" 2


# 1 "linux-2.6.18/include/linux/errno.h" 1



# 1 "linux-2.6.18/include/asm/errno.h" 1



# 1 "linux-2.6.18/include/asm-generic/errno.h" 1



# 1 "linux-2.6.18/include/asm-generic/errno-base.h" 1
# 5 "linux-2.6.18/include/asm-generic/errno.h" 2
# 5 "linux-2.6.18/include/asm/errno.h" 2
# 5 "linux-2.6.18/include/linux/errno.h" 2
# 54 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/nodemask.h" 1
# 86 "linux-2.6.18/include/linux/nodemask.h"
# 1 "linux-2.6.18/include/linux/numa.h" 1
# 87 "linux-2.6.18/include/linux/nodemask.h" 2

typedef struct { unsigned long bits[((((1 << 0))+64 -1)/64)]; } nodemask_t;
typedef  nodemask_t  _GLOBAL_64_T; extern  _GLOBAL_64_T  global__unused_nodemask_arg_[NUM_STACKS];   


static inline  __attribute__((always_inline)) void __node_set(int node, volatile nodemask_t *dstp)
{
 set_bit(node, dstp->bits);
}


static inline  __attribute__((always_inline)) void __node_clear(int node, volatile nodemask_t *dstp)
{
 clear_bit(node, dstp->bits);
}


static inline  __attribute__((always_inline)) void __nodes_setall(nodemask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline  __attribute__((always_inline)) void __nodes_clear(nodemask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}






static inline  __attribute__((always_inline)) int __node_test_and_set(int node, nodemask_t *addr)
{
 return test_and_set_bit(node, addr->bits);
}



static inline  __attribute__((always_inline)) void __nodes_and(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_or(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_xor(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_andnot(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_complement(nodemask_t *dstp,
     const nodemask_t *srcp, int nbits)
{
 bitmap_complement(dstp->bits, srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __nodes_equal(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) int __nodes_intersects(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) int __nodes_subset(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) int __nodes_empty(const nodemask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __nodes_full(const nodemask_t *srcp, int nbits)
{
 return bitmap_full(srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __nodes_weight(const nodemask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_shift_right(nodemask_t *dstp,
     const nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_right(dstp->bits, srcp->bits, n, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_shift_left(nodemask_t *dstp,
     const nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}





static inline  __attribute__((always_inline)) int __first_node(const nodemask_t *srcp)
{
 return ({ int __x = ((1 << 0)); int __y = (((__builtin_constant_p((1 << 0)) && ((1 << 0)) <= 64 ? (__scanbit(*(unsigned long *)srcp->bits,((1 << 0)))) : find_first_bit(srcp->bits,(1 << 0))))); __x < __y ? __x: __y; });
}


static inline  __attribute__((always_inline)) int __next_node(int n, const nodemask_t *srcp)
{
 return ({ int __x = ((1 << 0)); int __y = (((__builtin_constant_p((1 << 0)) && ((1 << 0)) <= 64 ? ((n+1) + (__scanbit((*(unsigned long *)srcp->bits) >> (n+1),((1 << 0))-(n+1)))) : find_next_bit(srcp->bits,(1 << 0),n+1)))); __x < __y ? __x: __y; });
}
# 251 "linux-2.6.18/include/linux/nodemask.h"
static inline  __attribute__((always_inline)) int __first_unset_node(const nodemask_t *maskp)
{
 return ({ int __x = ((1 << 0)); int __y = (((__builtin_constant_p((1 << 0)) && ((1 << 0)) <= 64 ? (__scanbit(~*(unsigned long *)maskp->bits,((1 << 0)))) : find_first_zero_bit(maskp->bits,(1 << 0))))); __x < __y ? __x: __y; })
                                                  ;
}
# 285 "linux-2.6.18/include/linux/nodemask.h"
static inline  __attribute__((always_inline)) int __nodemask_scnprintf(char *buf, int len,
     const nodemask_t *srcp, int nbits)
{
 return bitmap_scnprintf(buf, len, srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __nodemask_parse(const char *buf, int len,
     nodemask_t *dstp, int nbits)
{
 return bitmap_parse(buf, len, dstp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __nodelist_scnprintf(char *buf, int len,
     const nodemask_t *srcp, int nbits)
{
 return bitmap_scnlistprintf(buf, len, srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __nodelist_parse(const char *buf, nodemask_t *dstp, int nbits)
{
 return bitmap_parselist(buf, dstp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __node_remap(int oldbit,
  const nodemask_t *oldp, const nodemask_t *newp, int nbits)
{
 return bitmap_bitremap(oldbit, oldp->bits, newp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_remap(nodemask_t *dstp, const nodemask_t *srcp,
  const nodemask_t *oldp, const nodemask_t *newp, int nbits)
{
 bitmap_remap(dstp->bits, srcp->bits, oldp->bits, newp->bits, nbits);
}
# 345 "linux-2.6.18/include/linux/nodemask.h"
typedef  nodemask_t  _GLOBAL_65_T; extern  _GLOBAL_65_T  global_node_online_map[NUM_STACKS];   
typedef  nodemask_t  _GLOBAL_66_T; extern  _GLOBAL_66_T  global_node_possible_map[NUM_STACKS];   
# 55 "linux-2.6.18/include/linux/sched.h" 2


# 1 "linux-2.6.18/include/asm/semaphore.h" 1
# 41 "linux-2.6.18/include/asm/semaphore.h"
# 1 "linux-2.6.18/include/asm/rwlock.h" 1
# 42 "linux-2.6.18/include/asm/semaphore.h" 2
# 1 "linux-2.6.18/include/linux/wait.h" 1
# 28 "linux-2.6.18/include/linux/wait.h"
typedef struct __wait_queue wait_queue_t;
typedef int (*wait_queue_func_t)(wait_queue_t *wait, unsigned mode, int sync, void *key);
int default_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);

struct __wait_queue {
 unsigned int flags;

 void *private;
 wait_queue_func_t func;
 struct list_head task_list;
};

struct wait_bit_key {
 void *flags;
 int bit_nr;
};

struct wait_bit_queue {
 struct wait_bit_key key;
 wait_queue_t wait;
};

struct __wait_queue_head {
 spinlock_t lock;
 struct list_head task_list;
};
typedef struct __wait_queue_head wait_queue_head_t;

struct task_struct;
# 80 "linux-2.6.18/include/linux/wait.h"
extern void init_waitqueue_head(wait_queue_head_t *q);

static inline  __attribute__((always_inline)) void init_waitqueue_entry(wait_queue_t *q, struct task_struct *p)
{
 q->flags = 0;
 q->private = p;
 q->func = default_wake_function;
}

static inline  __attribute__((always_inline)) void init_waitqueue_func_entry(wait_queue_t *q,
     wait_queue_func_t func)
{
 q->flags = 0;
 q->private = ((void *)0);
 q->func = func;
}

static inline  __attribute__((always_inline)) int waitqueue_active(wait_queue_head_t *q)
{
 return !list_empty(&q->task_list);
}
# 111 "linux-2.6.18/include/linux/wait.h"
extern void add_wait_queue(wait_queue_head_t *q, wait_queue_t * wait);
extern void add_wait_queue_exclusive(wait_queue_head_t *q, wait_queue_t * wait);
extern void remove_wait_queue(wait_queue_head_t *q, wait_queue_t * wait);

static inline  __attribute__((always_inline)) void __add_wait_queue(wait_queue_head_t *head, wait_queue_t *new)
{
 list_add(&new->task_list, &head->task_list);
}




static inline  __attribute__((always_inline)) void __add_wait_queue_tail(wait_queue_head_t *head,
      wait_queue_t *new)
{
 list_add_tail(&new->task_list, &head->task_list);
}

static inline  __attribute__((always_inline)) void __remove_wait_queue(wait_queue_head_t *head,
       wait_queue_t *old)
{
 list_del(&old->task_list);
}

void __wake_up(wait_queue_head_t *q, unsigned int mode, int nr, void *key);
extern void __wake_up_locked(wait_queue_head_t *q, unsigned int mode);
extern void __wake_up_sync(wait_queue_head_t *q, unsigned int mode, int nr);
void __wake_up_bit(wait_queue_head_t *, void *, int);
int __wait_on_bit(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
int __wait_on_bit_lock(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
void wake_up_bit(void *, int);
int out_of_line_wait_on_bit(void *, int, int (*)(void *), unsigned);
int out_of_line_wait_on_bit_lock(void *, int, int (*)(void *), unsigned);
wait_queue_head_t *bit_waitqueue(void *, int);
# 342 "linux-2.6.18/include/linux/wait.h"
static inline  __attribute__((always_inline)) void add_wait_queue_exclusive_locked(wait_queue_head_t *q,
         wait_queue_t * wait)
{
 wait->flags |= 0x01;
 __add_wait_queue_tail(q, wait);
}




static inline  __attribute__((always_inline)) void remove_wait_queue_locked(wait_queue_head_t *q,
         wait_queue_t * wait)
{
 __remove_wait_queue(q, wait);
}






extern void sleep_on(wait_queue_head_t *q);
extern long sleep_on_timeout(wait_queue_head_t *q, signed long timeout)
                               ;
extern void interruptible_sleep_on(wait_queue_head_t *q);
extern long interruptible_sleep_on_timeout(wait_queue_head_t *q, signed long timeout)
                               ;




void prepare_to_wait(wait_queue_head_t *q, wait_queue_t *wait, int state)
                                   ;
void prepare_to_wait_exclusive(wait_queue_head_t *q, wait_queue_t *wait, int state)
                                   ;
void finish_wait(wait_queue_head_t *q, wait_queue_t *wait);
int autoremove_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
int wake_bit_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
# 420 "linux-2.6.18/include/linux/wait.h"
static inline  __attribute__((always_inline)) int wait_on_bit(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!(__builtin_constant_p(bit) ? constant_test_bit((bit),(word)) : variable_test_bit((bit),(word))))
  return 0;
 return out_of_line_wait_on_bit(word, bit, action, mode);
}
# 444 "linux-2.6.18/include/linux/wait.h"
static inline  __attribute__((always_inline)) int wait_on_bit_lock(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!test_and_set_bit(bit, word))
  return 0;
 return out_of_line_wait_on_bit_lock(word, bit, action, mode);
}
# 43 "linux-2.6.18/include/asm/semaphore.h" 2
# 1 "linux-2.6.18/include/linux/rwsem.h" 1
# 19 "linux-2.6.18/include/linux/rwsem.h"
struct rw_semaphore;


# 1 "linux-2.6.18/include/linux/rwsem-spinlock.h" 1
# 22 "linux-2.6.18/include/linux/rwsem-spinlock.h"
struct rwsem_waiter;
# 31 "linux-2.6.18/include/linux/rwsem-spinlock.h"
struct rw_semaphore {
 __s32 activity;
 spinlock_t wait_lock;
 struct list_head wait_list;



};
# 52 "linux-2.6.18/include/linux/rwsem-spinlock.h"
extern void __init_rwsem(struct rw_semaphore *sem, const char *name,
    struct lock_class_key *key);
# 62 "linux-2.6.18/include/linux/rwsem-spinlock.h"
extern void __down_read(struct rw_semaphore *sem);
extern int __down_read_trylock(struct rw_semaphore *sem);
extern void __down_write(struct rw_semaphore *sem);
extern void __down_write_nested(struct rw_semaphore *sem, int subclass);
extern int __down_write_trylock(struct rw_semaphore *sem);
extern void __up_read(struct rw_semaphore *sem);
extern void __up_write(struct rw_semaphore *sem);
extern void __downgrade_write(struct rw_semaphore *sem);

static inline  __attribute__((always_inline)) int rwsem_is_locked(struct rw_semaphore *sem)
{
 return (sem->activity != 0);
}
# 23 "linux-2.6.18/include/linux/rwsem.h" 2







extern void down_read(struct rw_semaphore *sem);




extern int down_read_trylock(struct rw_semaphore *sem);




extern void down_write(struct rw_semaphore *sem);




extern int down_write_trylock(struct rw_semaphore *sem);




extern void up_read(struct rw_semaphore *sem);




extern void up_write(struct rw_semaphore *sem);




extern void downgrade_write(struct rw_semaphore *sem);
# 44 "linux-2.6.18/include/asm/semaphore.h" 2


struct semaphore {
 atomic_t count;
 int sleepers;
 wait_queue_head_t wait;
};
# 65 "linux-2.6.18/include/asm/semaphore.h"
static inline  __attribute__((always_inline)) void sema_init (struct semaphore *sem, int val)
{






 (((&sem->count)->counter) = (val));
 sem->sleepers = 0;
 init_waitqueue_head(&sem->wait);
}

static inline  __attribute__((always_inline)) void init_MUTEX (struct semaphore *sem)
{
 sema_init(sem, 1);
}

static inline  __attribute__((always_inline)) void init_MUTEX_LOCKED (struct semaphore *sem)
{
 sema_init(sem, 0);
}

 void __down_failed(void );
 int __down_failed_interruptible(void );
 int __down_failed_trylock(void );
 void __up_wakeup(void );

 void __down(struct semaphore * sem);
 int __down_interruptible(struct semaphore * sem);
 int __down_trylock(struct semaphore * sem);
 void __up(struct semaphore * sem);






static inline  __attribute__((always_inline)) void down(struct semaphore * sem)
{
 do { do { } while (0); } while (0);

 __asm__ __volatile__(
  "# atomic down operation\n\t"
  "" "decl %0\n\t"
  "js 2f\n"
  "1:\n"
  ".subsection 1\n\t" "" ".ifndef " ".text.lock.""clnt" "\n\t" ".text.lock.""clnt" ":\n\t" ".endif\n"
  "2:\tcall __down_failed\n\t"
  "jmp 1b\n"
  ".previous\n\t"
  :"=m" (sem->count)
  :"D" (sem)
  :"memory");
}





static inline  __attribute__((always_inline)) int down_interruptible(struct semaphore * sem)
{
 int result;

 do { do { } while (0); } while (0);

 __asm__ __volatile__(
  "# atomic interruptible down operation\n\t"
  "" "decl %1\n\t"
  "js 2f\n\t"
  "xorl %0,%0\n"
  "1:\n"
  ".subsection 1\n\t" "" ".ifndef " ".text.lock.""clnt" "\n\t" ".text.lock.""clnt" ":\n\t" ".endif\n"
  "2:\tcall __down_failed_interruptible\n\t"
  "jmp 1b\n"
  ".previous\n\t"
  :"=a" (result), "=m" (sem->count)
  :"D" (sem)
  :"memory");
 return result;
}





static inline  __attribute__((always_inline)) int down_trylock(struct semaphore * sem)
{
 int result;

 __asm__ __volatile__(
  "# atomic interruptible down operation\n\t"
  "" "decl %1\n\t"
  "js 2f\n\t"
  "xorl %0,%0\n"
  "1:\n"
  ".subsection 1\n\t" "" ".ifndef " ".text.lock.""clnt" "\n\t" ".text.lock.""clnt" ":\n\t" ".endif\n"
  "2:\tcall __down_failed_trylock\n\t"
  "jmp 1b\n"
  ".previous\n\t"
  :"=a" (result), "=m" (sem->count)
  :"D" (sem)
  :"memory","cc");
 return result;
}







static inline  __attribute__((always_inline)) void up(struct semaphore * sem)
{
 __asm__ __volatile__(
  "# atomic up operation\n\t"
  "" "incl %0\n\t"
  "jle 2f\n"
  "1:\n"
  ".subsection 1\n\t" "" ".ifndef " ".text.lock.""clnt" "\n\t" ".text.lock.""clnt" ":\n\t" ".endif\n"
  "2:\tcall __up_wakeup\n\t"
  "jmp 1b\n"
  ".previous\n\t"
  :"=m" (sem->count)
  :"D" (sem)
  :"memory");
}
# 58 "linux-2.6.18/include/linux/sched.h" 2

# 1 "linux-2.6.18/include/asm/ptrace.h" 1
# 39 "linux-2.6.18/include/asm/ptrace.h"
struct pt_regs {
 unsigned long r15;
 unsigned long r14;
 unsigned long r13;
 unsigned long r12;
 unsigned long rbp;
 unsigned long rbx;

  unsigned long r11;
 unsigned long r10;
 unsigned long r9;
 unsigned long r8;
 unsigned long rax;
 unsigned long rcx;
 unsigned long rdx;
 unsigned long rsi;
 unsigned long rdi;
 unsigned long orig_rax;


 unsigned long rip;
 unsigned long cs;
 unsigned long eflags;
 unsigned long rsp;
 unsigned long ss;

};
# 87 "linux-2.6.18/include/asm/ptrace.h"
extern unsigned long profile_pc(struct pt_regs *regs);
void signal_fault(struct pt_regs *regs, void *frame, char *where);

struct task_struct;

extern unsigned long
convert_rip_to_linear(struct task_struct *child, struct pt_regs *regs);

enum {
        EF_CF = 0x00000001,
        EF_PF = 0x00000004,
        EF_AF = 0x00000010,
        EF_ZF = 0x00000040,
        EF_SF = 0x00000080,
        EF_TF = 0x00000100,
        EF_IE = 0x00000200,
        EF_DF = 0x00000400,
        EF_OF = 0x00000800,
        EF_IOPL = 0x00003000,
        EF_IOPL_RING0 = 0x00000000,
        EF_IOPL_RING1 = 0x00001000,
        EF_IOPL_RING2 = 0x00002000,
        EF_NT = 0x00004000,
        EF_RF = 0x00010000,
        EF_VM = 0x00020000,
        EF_AC = 0x00040000,
        EF_VIF = 0x00080000,
        EF_VIP = 0x00100000,
        EF_ID = 0x00200000,
};
# 60 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/asm/mmu.h" 1
# 13 "linux-2.6.18/include/asm/mmu.h"
typedef struct {
 void *ldt;
 rwlock_t ldtlock;
 int size;
 struct semaphore sem;
} mm_context_t;
# 61 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/asm/cputime.h" 1



# 1 "linux-2.6.18/include/asm-generic/cputime.h" 1






typedef unsigned long cputime_t;
# 23 "linux-2.6.18/include/asm-generic/cputime.h"
typedef u64 cputime64_t;
# 5 "linux-2.6.18/include/asm/cputime.h" 2
# 62 "linux-2.6.18/include/linux/sched.h" 2

# 1 "linux-2.6.18/include/linux/smp.h" 1
# 10 "linux-2.6.18/include/linux/smp.h"
extern void cpu_idle(void);
# 84 "linux-2.6.18/include/linux/smp.h"
static inline  __attribute__((always_inline)) int up_smp_call_function(void)
{
 return 0;
}
# 96 "linux-2.6.18/include/linux/smp.h"
static inline  __attribute__((always_inline)) void smp_send_reschedule(int cpu) { }
# 128 "linux-2.6.18/include/linux/smp.h"
void smp_setup_processor_id(void);
# 64 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/sem.h" 1



# 1 "linux-2.6.18/include/linux/ipc.h" 1
# 9 "linux-2.6.18/include/linux/ipc.h"
struct ipc_perm
{
 __kernel_key_t key;
 __kernel_uid_t uid;
 __kernel_gid_t gid;
 __kernel_uid_t cuid;
 __kernel_gid_t cgid;
 __kernel_mode_t mode;
 unsigned short seq;
};


# 1 "linux-2.6.18/include/asm/ipcbuf.h" 1
# 14 "linux-2.6.18/include/asm/ipcbuf.h"
struct ipc64_perm
{
 __kernel_key_t key;
 __kernel_uid32_t uid;
 __kernel_gid32_t gid;
 __kernel_uid32_t cuid;
 __kernel_gid32_t cgid;
 __kernel_mode_t mode;
 unsigned short __pad1;
 unsigned short seq;
 unsigned short __pad2;
 unsigned long __unused1;
 unsigned long __unused2;
};
# 22 "linux-2.6.18/include/linux/ipc.h" 2
# 57 "linux-2.6.18/include/linux/ipc.h"
struct kern_ipc_perm
{
 spinlock_t lock;
 int deleted;
 key_t key;
 uid_t uid;
 gid_t gid;
 uid_t cuid;
 gid_t cgid;
 mode_t mode;
 unsigned long seq;
 void *security;
};
# 5 "linux-2.6.18/include/linux/sem.h" 2
# 23 "linux-2.6.18/include/linux/sem.h"
struct semid_ds {
 struct ipc_perm sem_perm;
 __kernel_time_t sem_otime;
 __kernel_time_t sem_ctime;
 struct sem *sem_base;
 struct sem_queue *sem_pending;
 struct sem_queue **sem_pending_last;
 struct sem_undo *undo;
 unsigned short sem_nsems;
};


# 1 "linux-2.6.18/include/asm/sembuf.h" 1
# 14 "linux-2.6.18/include/asm/sembuf.h"
struct semid64_ds {
 struct ipc64_perm sem_perm;
 __kernel_time_t sem_otime;
 unsigned long __unused1;
 __kernel_time_t sem_ctime;
 unsigned long __unused2;
 unsigned long sem_nsems;
 unsigned long __unused3;
 unsigned long __unused4;
};
# 36 "linux-2.6.18/include/linux/sem.h" 2


struct sembuf {
 unsigned short sem_num;
 short sem_op;
 short sem_flg;
};


union semun {
 int val;
 struct semid_ds *buf;
 unsigned short *array;
 struct seminfo *__buf;
 void *__pad;
};

struct seminfo {
 int semmap;
 int semmni;
 int semmns;
 int semmnu;
 int semmsl;
 int semopm;
 int semume;
 int semusz;
 int semvmx;
 int semaem;
};
# 82 "linux-2.6.18/include/linux/sem.h"
struct task_struct;


struct sem {
 int semval;
 int sempid;
};


struct sem_array {
 struct kern_ipc_perm sem_perm;
 int sem_id;
 time_t sem_otime;
 time_t sem_ctime;
 struct sem *sem_base;
 struct sem_queue *sem_pending;
 struct sem_queue **sem_pending_last;
 struct sem_undo *undo;
 unsigned long sem_nsems;
};


struct sem_queue {
 struct sem_queue * next;
 struct sem_queue ** prev;
 struct task_struct* sleeper;
 struct sem_undo * undo;
 int pid;
 int status;
 struct sem_array * sma;
 int id;
 struct sembuf * sops;
 int nsops;
 int alter;
};




struct sem_undo {
 struct sem_undo * proc_next;
 struct sem_undo * id_next;
 int semid;
 short * semadj;
};




struct sem_undo_list {
 atomic_t refcnt;
 spinlock_t lock;
 struct sem_undo *proc_list;
};

struct sysv_sem {
 struct sem_undo_list *undo_list;
};



extern int copy_semundo(unsigned long clone_flags, struct task_struct *tsk);
extern void exit_sem(struct task_struct *tsk);
# 65 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/signal.h" 1



# 1 "linux-2.6.18/include/asm/signal.h" 1
# 9 "linux-2.6.18/include/asm/signal.h"
struct siginfo;
# 20 "linux-2.6.18/include/asm/signal.h"
typedef unsigned long old_sigset_t;

typedef struct {
 unsigned long sig[(64 / 64)];
} sigset_t;


struct pt_regs;
 int do_signal(struct pt_regs *regs, sigset_t *oldset);
# 117 "linux-2.6.18/include/asm/signal.h"
# 1 "linux-2.6.18/include/asm-generic/signal.h" 1
# 17 "linux-2.6.18/include/asm-generic/signal.h"
typedef void __signalfn_t(int);
typedef __signalfn_t *__sighandler_t;

typedef void __restorefn_t(void);
typedef __restorefn_t *__sigrestore_t;
# 118 "linux-2.6.18/include/asm/signal.h" 2



struct sigaction {
 __sighandler_t sa_handler;
 unsigned long sa_flags;
 __sigrestore_t sa_restorer;
 sigset_t sa_mask;
};

struct k_sigaction {
 struct sigaction sa;
};

typedef struct sigaltstack {
 void *ss_sp;
 int ss_flags;
 size_t ss_size;
} stack_t;
# 5 "linux-2.6.18/include/linux/signal.h" 2
# 1 "linux-2.6.18/include/asm/siginfo.h" 1





# 1 "linux-2.6.18/include/asm-generic/siginfo.h" 1






typedef union sigval {
 int sival_int;
 void *sival_ptr;
} sigval_t;
# 40 "linux-2.6.18/include/asm-generic/siginfo.h"
typedef struct siginfo {
 int si_signo;
 int si_errno;
 int si_code;

 union {
  int _pad[((128 - (4 * sizeof(int))) / sizeof(int))];


  struct {
   pid_t _pid;
   uid_t _uid;
  } _kill;


  struct {
   timer_t _tid;
   int _overrun;
   char _pad[sizeof( uid_t) - sizeof(int)];
   sigval_t _sigval;
   int _sys_private;
  } _timer;


  struct {
   pid_t _pid;
   uid_t _uid;
   sigval_t _sigval;
  } _rt;


  struct {
   pid_t _pid;
   uid_t _uid;
   int _status;
   clock_t _utime;
   clock_t _stime;
  } _sigchld;


  struct {
   void *_addr;



  } _sigfault;


  struct {
   long _band;
   int _fd;
  } _sigpoll;
 } _sifields;
} siginfo_t;
# 251 "linux-2.6.18/include/asm-generic/siginfo.h"
typedef struct sigevent {
 sigval_t sigev_value;
 int sigev_signo;
 int sigev_notify;
 union {
  int _pad[((64 - (sizeof(int) * 2 + sizeof(sigval_t))) / sizeof(int))];
   int _tid;

  struct {
   void (*_function)(sigval_t);
   void *_attribute;
  } _sigev_thread;
 } _sigev_un;
} sigevent_t;







struct siginfo;
void do_schedule_next_timer(struct siginfo *info);





static inline  __attribute__((always_inline)) void copy_siginfo(struct siginfo *to, struct siginfo *from)
{
 if (from->si_code < 0)
  ({ size_t __len = (sizeof(*to)); void *__ret; if (__builtin_constant_p(sizeof(*to)) && __len >= 64) __ret = __memcpy((to),(from),__len); else __ret = __builtin_memcpy((to),(from),__len); __ret; });
 else

  ({ size_t __len = ((4 * sizeof(int)) + sizeof(from->_sifields._sigchld)); void *__ret; if (__builtin_constant_p((4 * sizeof(int)) + sizeof(from->_sifields._sigchld)) && __len >= 64) __ret = __memcpy((to),(from),__len); else __ret = __builtin_memcpy((to),(from),__len); __ret; });
}



extern int copy_siginfo_to_user(struct siginfo *to, struct siginfo *from);
# 7 "linux-2.6.18/include/asm/siginfo.h" 2
# 6 "linux-2.6.18/include/linux/signal.h" 2
# 15 "linux-2.6.18/include/linux/signal.h"
struct sigqueue {
 struct list_head list;
 int flags;
 siginfo_t info;
 struct user_struct *user;
};




struct sigpending {
 struct list_head list;
 sigset_t signal;
};
# 39 "linux-2.6.18/include/linux/signal.h"
static inline  __attribute__((always_inline)) void sigaddset(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((64 / 64) == 1)
  set->sig[0] |= 1UL << sig;
 else
  set->sig[sig / 64] |= 1UL << (sig % 64);
}

static inline  __attribute__((always_inline)) void sigdelset(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((64 / 64) == 1)
  set->sig[0] &= ~(1UL << sig);
 else
  set->sig[sig / 64] &= ~(1UL << (sig % 64));
}

static inline  __attribute__((always_inline)) int sigismember(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((64 / 64) == 1)
  return 1 & (set->sig[0] >> sig);
 else
  return 1 & (set->sig[sig / 64] >> (sig % 64));
}

static inline  __attribute__((always_inline)) int sigfindinword(unsigned long word)
{
 return ffz(~word);
}



static inline  __attribute__((always_inline)) int sigisemptyset(sigset_t *set)
{
 extern void _NSIG_WORDS_is_unsupported_size(void);
 switch ((64 / 64)) {
 case 4:
  return (set->sig[3] | set->sig[2] |
   set->sig[1] | set->sig[0]) == 0;
 case 2:
  return (set->sig[1] | set->sig[0]) == 0;
 case 1:
  return set->sig[0] == 0;
 default:
  _NSIG_WORDS_is_unsupported_size();
  return 0;
 }
}
# 120 "linux-2.6.18/include/linux/signal.h"
static inline  __attribute__((always_inline)) void sigorsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 64)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) | (b3)); r->sig[2] = ((a2) | (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) | (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) | (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline  __attribute__((always_inline)) void sigandsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 64)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & (b3)); r->sig[2] = ((a2) & (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline  __attribute__((always_inline)) void signandsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 64)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & ~(b3)); r->sig[2] = ((a2) & ~(b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & ~(b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & ~(b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }
# 150 "linux-2.6.18/include/linux/signal.h"
static inline  __attribute__((always_inline)) void signotset(sigset_t *set) { extern void _NSIG_WORDS_is_unsupported_size(void); switch ((64 / 64)) { case 4: set->sig[3] = (~(set->sig[3])); set->sig[2] = (~(set->sig[2])); case 2: set->sig[1] = (~(set->sig[1])); case 1: set->sig[0] = (~(set->sig[0])); break; default: _NSIG_WORDS_is_unsupported_size(); } }




static inline  __attribute__((always_inline)) void sigemptyset(sigset_t *set)
{
 switch ((64 / 64)) {
 default:
  memset(set, 0, sizeof(sigset_t));
  break;
 case 2: set->sig[1] = 0;
 case 1: set->sig[0] = 0;
  break;
 }
}

static inline  __attribute__((always_inline)) void sigfillset(sigset_t *set)
{
 switch ((64 / 64)) {
 default:
  memset(set, -1, sizeof(sigset_t));
  break;
 case 2: set->sig[1] = -1;
 case 1: set->sig[0] = -1;
  break;
 }
}



static inline  __attribute__((always_inline)) void sigaddsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] |= mask;
}

static inline  __attribute__((always_inline)) void sigdelsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] &= ~mask;
}

static inline  __attribute__((always_inline)) int sigtestsetmask(sigset_t *set, unsigned long mask)
{
 return (set->sig[0] & mask) != 0;
}

static inline  __attribute__((always_inline)) void siginitset(sigset_t *set, unsigned long mask)
{
 set->sig[0] = mask;
 switch ((64 / 64)) {
 default:
  memset(&set->sig[1], 0, sizeof(long)*((64 / 64)-1));
  break;
 case 2: set->sig[1] = 0;
 case 1: ;
 }
}

static inline  __attribute__((always_inline)) void siginitsetinv(sigset_t *set, unsigned long mask)
{
 set->sig[0] = ~mask;
 switch ((64 / 64)) {
 default:
  memset(&set->sig[1], -1, sizeof(long)*((64 / 64)-1));
  break;
 case 2: set->sig[1] = -1;
 case 1: ;
 }
}



static inline  __attribute__((always_inline)) void init_sigpending(struct sigpending *sig)
{
 sigemptyset(&sig->signal);
 INIT_LIST_HEAD(&sig->list);
}

extern void flush_sigqueue(struct sigpending *queue);


static inline  __attribute__((always_inline)) int valid_signal(unsigned long sig)
{
 return sig <= 64 ? 1 : 0;
}

extern int group_send_sig_info(int sig, struct siginfo *info, struct task_struct *p);
extern int __group_send_sig_info(int, struct siginfo *, struct task_struct *);
extern long do_sigpending(void *, unsigned long);
extern int sigprocmask(int, sigset_t *, sigset_t *);

struct pt_regs;
extern int get_signal_to_deliver(siginfo_t *info, struct k_sigaction *return_ka, struct pt_regs *regs, void *cookie);
# 66 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/securebits.h" 1





typedef  unsigned  _GLOBAL_67_T; extern  _GLOBAL_67_T  global_securebits[NUM_STACKS];   
# 67 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/fs_struct.h" 1



struct dentry;
struct vfsmount;

struct fs_struct {
 atomic_t count;
 rwlock_t lock;
 int umask;
 struct dentry * root, * pwd, * altroot;
 struct vfsmount * rootmnt, * pwdmnt, * altrootmnt;
};







extern void exit_fs(struct task_struct *);
extern void set_fs_altroot(void);
extern void set_fs_root(struct fs_struct *, struct vfsmount *, struct dentry *);
extern void set_fs_pwd(struct fs_struct *, struct vfsmount *, struct dentry *);
extern struct fs_struct *copy_fs_struct(struct fs_struct *);
extern void put_fs_struct(struct fs_struct *);
# 68 "linux-2.6.18/include/linux/sched.h" 2

# 1 "linux-2.6.18/include/linux/completion.h" 1
# 13 "linux-2.6.18/include/linux/completion.h"
struct completion {
 unsigned int done;
 wait_queue_head_t wait;
};
# 39 "linux-2.6.18/include/linux/completion.h"
static inline  __attribute__((always_inline)) void init_completion(struct completion *x)
{
 x->done = 0;
 init_waitqueue_head(&x->wait);
}

extern void wait_for_completion(struct completion *);
extern int wait_for_completion_interruptible(struct completion *x);
extern unsigned long wait_for_completion_timeout(struct completion *x, unsigned long timeout)
                                ;
extern unsigned long wait_for_completion_interruptible_timeout( struct completion *x, unsigned long timeout)
                                                ;

extern void complete(struct completion *);
extern void complete_all(struct completion *);
# 70 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/pid.h" 1



# 1 "linux-2.6.18/include/linux/rcupdate.h" 1
# 41 "linux-2.6.18/include/linux/rcupdate.h"
# 1 "linux-2.6.18/include/linux/percpu.h" 1



# 1 "linux-2.6.18/include/linux/slab.h" 1
# 12 "linux-2.6.18/include/linux/slab.h"
typedef struct kmem_cache kmem_cache_t;

# 1 "linux-2.6.18/include/linux/gfp.h" 1



# 1 "linux-2.6.18/include/linux/mmzone.h" 1
# 13 "linux-2.6.18/include/linux/mmzone.h"
# 1 "linux-2.6.18/include/linux/init.h" 1
# 63 "linux-2.6.18/include/linux/init.h"
typedef int (*initcall_t)(void);
typedef void (*exitcall_t)(void);

extern initcall_t __con_initcall_start[], __con_initcall_end[];
typedef  initcall_t  _GLOBAL_68_T; extern  _GLOBAL_68_T  _GLOBAL_0___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_1___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_2___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_3___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_4___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_5___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_6___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_7___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_8___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_9___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_10___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_11___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_12___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_13___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_14___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_15___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_16___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_17___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_18___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_19___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_20___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_21___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_22___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_23___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_24___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_25___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_26___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_27___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_28___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_29___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_30___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_31___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_32___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_33___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_34___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_35___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_36___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_37___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_38___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_39___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_40___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_41___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_42___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_43___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_44___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_45___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_46___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_47___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_48___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_49___security_initcall_start_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___security_initcall_start_I) *_GLOBAL___security_initcall_start_5_A[NUM_STACKS];extern  _GLOBAL_68_T  _GLOBAL_0___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_1___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_2___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_3___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_4___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_5___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_6___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_7___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_8___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_9___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_10___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_11___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_12___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_13___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_14___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_15___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_16___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_17___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_18___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_19___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_20___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_21___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_22___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_23___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_24___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_25___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_26___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_27___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_28___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_29___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_30___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_31___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_32___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_33___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_34___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_35___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_36___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_37___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_38___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_39___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_40___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_41___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_42___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_43___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_44___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_45___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_46___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_47___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_48___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_49___security_initcall_end_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___security_initcall_end_I) *_GLOBAL___security_initcall_end_6_A[NUM_STACKS];   


typedef  char  _GLOBAL_69_T; extern  _GLOBAL_69_T  _GLOBAL_0_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_1_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_2_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_3_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_4_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_5_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_6_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_7_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_8_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_9_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_10_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_11_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_12_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_13_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_14_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_15_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_16_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_17_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_18_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_19_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_20_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_21_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_22_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_23_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_24_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_25_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_26_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_27_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_28_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_29_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_30_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_31_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_32_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_33_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_34_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_35_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_36_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_37_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_38_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_39_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_40_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_41_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_42_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_43_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_44_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_45_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_46_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_47_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_48_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_49_saved_command_line_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_saved_command_line_I) *_GLOBAL_saved_command_line_7_A[NUM_STACKS];  


extern void setup_arch(char **);
# 113 "linux-2.6.18/include/linux/init.h"
struct obs_kernel_param {
 const char *str;
 int (*setup_func)(char *);
 int early;
};
# 148 "linux-2.6.18/include/linux/init.h"
void  __attribute__ ((__section__ (".init.text"))) parse_early_param(void);
# 14 "linux-2.6.18/include/linux/mmzone.h" 2
# 27 "linux-2.6.18/include/linux/mmzone.h"
struct free_area {
 struct list_head free_list;
 unsigned long nr_free;
};

struct pglist_data;
# 49 "linux-2.6.18/include/linux/mmzone.h"
enum zone_stat_item {
 NR_ANON_PAGES,
 NR_FILE_MAPPED,

 NR_FILE_PAGES,
 NR_SLAB,
 NR_PAGETABLE,
 NR_FILE_DIRTY,
 NR_WRITEBACK,
 NR_UNSTABLE_NFS,
 NR_BOUNCE,
# 68 "linux-2.6.18/include/linux/mmzone.h"
 NR_VM_ZONE_STAT_ITEMS };

struct per_cpu_pages {
 int count;
 int high;
 int batch;
 struct list_head list;
};

struct per_cpu_pageset {
 struct per_cpu_pages pcp[2];




} ;
# 139 "linux-2.6.18/include/linux/mmzone.h"
struct zone {

 unsigned long free_pages;
 unsigned long pages_min, pages_low, pages_high;
# 151 "linux-2.6.18/include/linux/mmzone.h"
 unsigned long lowmem_reserve[4];
# 160 "linux-2.6.18/include/linux/mmzone.h"
 struct per_cpu_pageset pageset[1];




 spinlock_t lock;




 struct free_area free_area[11];





 spinlock_t lru_lock;
 struct list_head active_list;
 struct list_head inactive_list;
 unsigned long nr_scan_active;
 unsigned long nr_scan_inactive;
 unsigned long nr_active;
 unsigned long nr_inactive;
 unsigned long pages_scanned;
 int all_unreclaimable;


 atomic_t reclaim_in_progress;


 atomic_long_t vm_stat[NR_VM_ZONE_STAT_ITEMS];
# 208 "linux-2.6.18/include/linux/mmzone.h"
 int temp_priority;
 int prev_priority;



# 239 "linux-2.6.18/include/linux/mmzone.h"
 wait_queue_head_t * wait_table;
 unsigned long wait_table_hash_nr_entries;
 unsigned long wait_table_bits;




 struct pglist_data *zone_pgdat;

 unsigned long zone_start_pfn;
# 260 "linux-2.6.18/include/linux/mmzone.h"
 unsigned long spanned_pages;
 unsigned long present_pages;




 char *name;
} ;
# 288 "linux-2.6.18/include/linux/mmzone.h"
struct zonelist {
 struct zone *zones[(1 << 0) * 4 + 1];
};
# 304 "linux-2.6.18/include/linux/mmzone.h"
struct bootmem_data;
typedef struct pglist_data {
 struct zone node_zones[4];
 struct zonelist node_zonelists[((0x07 + 1) / 2 + 1)];
 int nr_zones;



 struct bootmem_data *bdata;
# 323 "linux-2.6.18/include/linux/mmzone.h"
 unsigned long node_start_pfn;
 unsigned long node_present_pages;
 unsigned long node_spanned_pages;

 int node_id;
 wait_queue_head_t kswapd_wait;
 struct task_struct *kswapd;
 int kswapd_max_order;
} pg_data_t;
# 342 "linux-2.6.18/include/linux/mmzone.h"
# 1 "linux-2.6.18/include/linux/memory_hotplug.h" 1



# 1 "linux-2.6.18/include/linux/mmzone.h" 1
# 5 "linux-2.6.18/include/linux/memory_hotplug.h" 2


# 1 "linux-2.6.18/include/linux/notifier.h" 1
# 13 "linux-2.6.18/include/linux/notifier.h"
# 1 "linux-2.6.18/include/linux/mutex.h" 1
# 47 "linux-2.6.18/include/linux/mutex.h"
struct mutex {

 atomic_t count;
 spinlock_t wait_lock;
 struct list_head wait_list;
# 60 "linux-2.6.18/include/linux/mutex.h"
};





struct mutex_waiter {
 struct list_head list;
 struct task_struct *task;




};
# 105 "linux-2.6.18/include/linux/mutex.h"
extern void __mutex_init(struct mutex *lock, const char *name,
    struct lock_class_key *key);







static inline  __attribute__((always_inline)) int mutex_is_locked(struct mutex *lock)
{
 return ((&lock->count)->counter) != 1;
}





extern void mutex_lock(struct mutex *lock);
extern int mutex_lock_interruptible(struct mutex *lock);
# 136 "linux-2.6.18/include/linux/mutex.h"
extern int mutex_trylock(struct mutex *lock);
extern void mutex_unlock(struct mutex *lock);
# 14 "linux-2.6.18/include/linux/notifier.h" 2
# 35 "linux-2.6.18/include/linux/notifier.h"
struct notifier_block {
 int (*notifier_call)(struct notifier_block *, unsigned long, void *);
 struct notifier_block *next;
 int priority;
};

struct atomic_notifier_head {
 spinlock_t lock;
 struct notifier_block *head;
};

struct blocking_notifier_head {
 struct rw_semaphore rwsem;
 struct notifier_block *head;
};

struct raw_notifier_head {
 struct notifier_block *head;
};
# 88 "linux-2.6.18/include/linux/notifier.h"
extern int atomic_notifier_chain_register(struct atomic_notifier_head *,
  struct notifier_block *);
extern int blocking_notifier_chain_register(struct blocking_notifier_head *,
  struct notifier_block *);
extern int raw_notifier_chain_register(struct raw_notifier_head *,
  struct notifier_block *);

extern int atomic_notifier_chain_unregister(struct atomic_notifier_head *,
  struct notifier_block *);
extern int blocking_notifier_chain_unregister(struct blocking_notifier_head *,
  struct notifier_block *);
extern int raw_notifier_chain_unregister(struct raw_notifier_head *,
  struct notifier_block *);

extern int atomic_notifier_call_chain(struct atomic_notifier_head *,
  unsigned long val, void *v);
extern int blocking_notifier_call_chain(struct blocking_notifier_head *,
  unsigned long val, void *v);
extern int raw_notifier_call_chain(struct raw_notifier_head *,
  unsigned long val, void *v);
# 8 "linux-2.6.18/include/linux/memory_hotplug.h" 2

struct page;
struct zone;
struct pglist_data;
# 140 "linux-2.6.18/include/linux/memory_hotplug.h"
static inline  __attribute__((always_inline)) void pgdat_resize_lock(struct pglist_data *p, unsigned long *f) {}
static inline  __attribute__((always_inline)) void pgdat_resize_unlock(struct pglist_data *p, unsigned long *f) {}
static inline  __attribute__((always_inline)) void pgdat_resize_init(struct pglist_data *pgdat) {}

static inline  __attribute__((always_inline)) unsigned zone_span_seqbegin(struct zone *zone)
{
 return 0;
}
static inline  __attribute__((always_inline)) int zone_span_seqretry(struct zone *zone, unsigned iv)
{
 return 0;
}
static inline  __attribute__((always_inline)) void zone_span_writelock(struct zone *zone) {}
static inline  __attribute__((always_inline)) void zone_span_writeunlock(struct zone *zone) {}
static inline  __attribute__((always_inline)) void zone_seqlock_init(struct zone *zone) {}

static inline  __attribute__((always_inline)) int mhp_notimplemented(const char *func)
{
 printk("<4>" "%s() called, with CONFIG_MEMORY_HOTPLUG disabled\n", func);
 dump_stack();
 return -38;
}


static inline  __attribute__((always_inline)) int __remove_pages(struct zone *zone, unsigned long start_pfn,
 unsigned long nr_pages)
{
 printk("<4>" "%s() called, not yet supported\n", (__func__));
 dump_stack();
 return -38;
}

extern int add_memory(int nid, u64 start, u64 size);
extern int arch_add_memory(int nid, u64 start, u64 size);
extern int remove_memory(u64 start, u64 size);
# 343 "linux-2.6.18/include/linux/mmzone.h" 2

void __get_zone_counts(unsigned long *active, unsigned long *inactive,
   unsigned long *free, struct pglist_data *pgdat);
void get_zone_counts(unsigned long *active, unsigned long *inactive,
   unsigned long *free);
void build_all_zonelists(void);
void wakeup_kswapd(struct zone *zone, int order);
int zone_watermark_ok(struct zone *z, int order, unsigned long mark,
  int classzone_idx, int alloc_flags);

extern int init_currently_empty_zone(struct zone *zone, unsigned long start_pfn,
         unsigned long size);




static inline  __attribute__((always_inline)) void memory_present(int nid, unsigned long start, unsigned long end) {}
# 371 "linux-2.6.18/include/linux/mmzone.h"
static inline  __attribute__((always_inline)) int populated_zone(struct zone *zone)
{
 return (!!zone->present_pages);
}

static inline  __attribute__((always_inline)) int is_highmem_idx(int idx)
{
 return (idx == 3);
}

static inline  __attribute__((always_inline)) int is_normal_idx(int idx)
{
 return (idx == 2);
}







static inline  __attribute__((always_inline)) int is_highmem(struct zone *zone)
{
 return zone == zone->zone_pgdat->node_zones + 3;
}

static inline  __attribute__((always_inline)) int is_normal(struct zone *zone)
{
 return zone == zone->zone_pgdat->node_zones + 2;
}

static inline  __attribute__((always_inline)) int is_dma32(struct zone *zone)
{
 return zone == zone->zone_pgdat->node_zones + 1;
}

static inline  __attribute__((always_inline)) int is_dma(struct zone *zone)
{
 return zone == zone->zone_pgdat->node_zones + 0;
}


struct ctl_table;
struct file;
int min_free_kbytes_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
typedef  int  _GLOBAL_70_T; extern  _GLOBAL_70_T  _GLOBAL_0_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_1_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_2_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_3_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_4_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_5_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_6_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_7_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_8_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_9_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_10_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_11_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_12_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_13_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_14_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_15_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_16_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_17_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_18_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_19_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_20_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_21_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_22_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_23_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_24_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_25_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_26_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_27_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_28_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_29_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_30_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_31_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_32_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_33_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_34_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_35_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_36_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_37_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_38_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_39_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_40_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_41_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_42_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_43_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_44_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_45_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_46_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_47_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_48_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_49_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sysctl_lowmem_reserve_ratio_I) *_GLOBAL_sysctl_lowmem_reserve_ratio_8_A[NUM_STACKS] = { &_GLOBAL_0_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_1_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_2_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_3_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_4_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_5_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_6_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_7_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_8_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_9_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_10_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_11_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_12_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_13_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_14_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_15_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_16_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_17_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_18_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_19_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_20_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_21_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_22_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_23_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_24_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_25_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_26_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_27_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_28_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_29_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_30_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_31_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_32_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_33_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_34_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_35_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_36_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_37_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_38_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_39_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_40_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_41_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_42_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_43_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_44_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_45_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_46_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_47_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_48_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_49_sysctl_lowmem_reserve_ratio_I, };   
int lowmem_reserve_ratio_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
int percpu_pagelist_fraction_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
int sysctl_min_unmapped_ratio_sysctl_handler(struct ctl_table *, int,
   struct file *, void *, size_t *, loff_t *);

# 1 "linux-2.6.18/include/linux/topology.h" 1
# 34 "linux-2.6.18/include/linux/topology.h"
# 1 "linux-2.6.18/include/asm/topology.h" 1
# 66 "linux-2.6.18/include/asm/topology.h"
# 1 "linux-2.6.18/include/asm-generic/topology.h" 1
# 67 "linux-2.6.18/include/asm/topology.h" 2

extern cpumask_t cpu_coregroup_map(int cpu);
# 35 "linux-2.6.18/include/linux/topology.h" 2
# 426 "linux-2.6.18/include/linux/mmzone.h" 2







typedef  struct pglist_data   _GLOBAL_71_T; extern  _GLOBAL_71_T  global_contig_page_data[NUM_STACKS];    
# 444 "linux-2.6.18/include/linux/mmzone.h"
extern struct pglist_data *first_online_pgdat(void);
extern struct pglist_data *next_online_pgdat(struct pglist_data *pgdat);
extern struct zone *next_zone(struct zone *zone);
# 636 "linux-2.6.18/include/linux/mmzone.h"
void memory_present(int nid, unsigned long start, unsigned long end);
unsigned long  __attribute__ ((__section__ (".init.text"))) node_memmap_size_bytes(int, unsigned long, unsigned long);
# 5 "linux-2.6.18/include/linux/gfp.h" 2



struct vm_area_struct;
# 79 "linux-2.6.18/include/linux/gfp.h"
static inline  __attribute__((always_inline)) int gfp_zone(gfp_t gfp)
{
 int zone = 0x07 & ( int) gfp;
 do { if (zone >= ((0x07 + 1) / 2 + 1)) ; } while(0);
 return zone;
}
# 102 "linux-2.6.18/include/linux/gfp.h"
static inline  __attribute__((always_inline)) void arch_free_page(struct page *page, int order) { }


extern struct page *
__alloc_pages(gfp_t, unsigned int, struct zonelist *);

static inline  __attribute__((always_inline)) struct page *alloc_pages_node(int nid, gfp_t gfp_mask,
      unsigned int order)
{
 if (__builtin_expect(!!(order >= 11), 0))
  return ((void *)0);


 if (nid < 0)
  nid = ((0));

 return __alloc_pages(gfp_mask, order,
  (&global_contig_page_data[get_stack_id()])->node_zonelists + gfp_zone(gfp_mask));
}
# 142 "linux-2.6.18/include/linux/gfp.h"
extern unsigned long __get_free_pages(gfp_t gfp_mask, unsigned int order);
extern unsigned long get_zeroed_page(gfp_t gfp_mask);







extern void __free_pages(struct page *page, unsigned int order);
extern void free_pages(unsigned long addr, unsigned int order);
extern void free_hot_page(struct page *page);
extern void free_cold_page(struct page *page);




void page_alloc_init(void);



static inline  __attribute__((always_inline)) void drain_node_pages(int node) { };
# 15 "linux-2.6.18/include/linux/slab.h" 2
# 58 "linux-2.6.18/include/linux/slab.h"
extern void  __attribute__ ((__section__ (".init.text"))) kmem_cache_init(void);

extern kmem_cache_t *kmem_cache_create(const char *, size_t, size_t, unsigned long,
           void (*)(void *, kmem_cache_t *, unsigned long),
           void (*)(void *, kmem_cache_t *, unsigned long));
extern int kmem_cache_destroy(kmem_cache_t *);
extern int kmem_cache_shrink(kmem_cache_t *);
extern void *kmem_cache_alloc(kmem_cache_t *, gfp_t);
extern void *kmem_cache_zalloc(struct kmem_cache *, gfp_t);
extern void kmem_cache_free(kmem_cache_t *, void *);
extern unsigned int kmem_cache_size(kmem_cache_t *);
extern const char *kmem_cache_name(kmem_cache_t *);
extern kmem_cache_t *kmem_find_general_cachep(size_t size, gfp_t gfpflags);


struct cache_sizes {
 size_t cs_size;
 kmem_cache_t *cs_cachep;
 kmem_cache_t *cs_dmacachep;
};
typedef  struct cache_sizes   _GLOBAL_72_T; extern  _GLOBAL_72_T  _GLOBAL_0_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_1_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_2_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_3_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_4_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_5_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_6_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_7_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_8_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_9_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_10_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_11_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_12_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_13_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_14_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_15_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_16_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_17_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_18_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_19_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_20_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_21_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_22_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_23_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_24_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_25_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_26_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_27_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_28_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_29_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_30_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_31_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_32_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_33_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_34_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_35_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_36_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_37_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_38_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_39_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_40_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_41_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_42_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_43_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_44_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_45_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_46_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_47_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_48_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_49_malloc_sizes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_malloc_sizes_I) *_GLOBAL_malloc_sizes_9_A[NUM_STACKS] = { &_GLOBAL_0_malloc_sizes_I, &_GLOBAL_1_malloc_sizes_I, &_GLOBAL_2_malloc_sizes_I, &_GLOBAL_3_malloc_sizes_I, &_GLOBAL_4_malloc_sizes_I, &_GLOBAL_5_malloc_sizes_I, &_GLOBAL_6_malloc_sizes_I, &_GLOBAL_7_malloc_sizes_I, &_GLOBAL_8_malloc_sizes_I, &_GLOBAL_9_malloc_sizes_I, &_GLOBAL_10_malloc_sizes_I, &_GLOBAL_11_malloc_sizes_I, &_GLOBAL_12_malloc_sizes_I, &_GLOBAL_13_malloc_sizes_I, &_GLOBAL_14_malloc_sizes_I, &_GLOBAL_15_malloc_sizes_I, &_GLOBAL_16_malloc_sizes_I, &_GLOBAL_17_malloc_sizes_I, &_GLOBAL_18_malloc_sizes_I, &_GLOBAL_19_malloc_sizes_I, &_GLOBAL_20_malloc_sizes_I, &_GLOBAL_21_malloc_sizes_I, &_GLOBAL_22_malloc_sizes_I, &_GLOBAL_23_malloc_sizes_I, &_GLOBAL_24_malloc_sizes_I, &_GLOBAL_25_malloc_sizes_I, &_GLOBAL_26_malloc_sizes_I, &_GLOBAL_27_malloc_sizes_I, &_GLOBAL_28_malloc_sizes_I, &_GLOBAL_29_malloc_sizes_I, &_GLOBAL_30_malloc_sizes_I, &_GLOBAL_31_malloc_sizes_I, &_GLOBAL_32_malloc_sizes_I, &_GLOBAL_33_malloc_sizes_I, &_GLOBAL_34_malloc_sizes_I, &_GLOBAL_35_malloc_sizes_I, &_GLOBAL_36_malloc_sizes_I, &_GLOBAL_37_malloc_sizes_I, &_GLOBAL_38_malloc_sizes_I, &_GLOBAL_39_malloc_sizes_I, &_GLOBAL_40_malloc_sizes_I, &_GLOBAL_41_malloc_sizes_I, &_GLOBAL_42_malloc_sizes_I, &_GLOBAL_43_malloc_sizes_I, &_GLOBAL_44_malloc_sizes_I, &_GLOBAL_45_malloc_sizes_I, &_GLOBAL_46_malloc_sizes_I, &_GLOBAL_47_malloc_sizes_I, &_GLOBAL_48_malloc_sizes_I, &_GLOBAL_49_malloc_sizes_I, };   

extern void *__kmalloc(size_t, gfp_t);
# 134 "linux-2.6.18/include/linux/slab.h"
static inline  __attribute__((always_inline)) void *kmalloc(size_t size, gfp_t flags)
{
 if (__builtin_constant_p(size)) {
  int i = 0;





# 1 "linux-2.6.18/include/linux/kmalloc_sizes.h" 1

 if (size <= 32) goto found; else i++;

 if (size <= 64) goto found; else i++;



 if (size <= 128) goto found; else i++;



 if (size <= 256) goto found; else i++;
 if (size <= 512) goto found; else i++;
 if (size <= 1024) goto found; else i++;
 if (size <= 2048) goto found; else i++;
 if (size <= 4096) goto found; else i++;
 if (size <= 8192) goto found; else i++;
 if (size <= 16384) goto found; else i++;
 if (size <= 32768) goto found; else i++;
 if (size <= 65536) goto found; else i++;
 if (size <= 131072) goto found; else i++;
# 144 "linux-2.6.18/include/linux/slab.h" 2

  {
   extern void __you_cannot_kmalloc_that_much(void);
   __you_cannot_kmalloc_that_much();
  }
found:
  return kmem_cache_alloc((flags & (( gfp_t)0x01u)) ?
   (*_GLOBAL_malloc_sizes_9_A[get_stack_id()])[i].cs_dmacachep :
   (*_GLOBAL_malloc_sizes_9_A[get_stack_id()])[i].cs_cachep, flags);
 }
 return __kmalloc(size, flags);
}

extern void *__kzalloc(size_t, gfp_t);






static inline  __attribute__((always_inline)) void *kzalloc(size_t size, gfp_t flags)
{
 if (__builtin_constant_p(size)) {
  int i = 0;





# 1 "linux-2.6.18/include/linux/kmalloc_sizes.h" 1

 if (size <= 32) goto found; else i++;

 if (size <= 64) goto found; else i++;



 if (size <= 128) goto found; else i++;



 if (size <= 256) goto found; else i++;
 if (size <= 512) goto found; else i++;
 if (size <= 1024) goto found; else i++;
 if (size <= 2048) goto found; else i++;
 if (size <= 4096) goto found; else i++;
 if (size <= 8192) goto found; else i++;
 if (size <= 16384) goto found; else i++;
 if (size <= 32768) goto found; else i++;
 if (size <= 65536) goto found; else i++;
 if (size <= 131072) goto found; else i++;
# 174 "linux-2.6.18/include/linux/slab.h" 2

  {
   extern void __you_cannot_kzalloc_that_much(void);
   __you_cannot_kzalloc_that_much();
  }
found:
  return kmem_cache_zalloc((flags & (( gfp_t)0x01u)) ?
   (*_GLOBAL_malloc_sizes_9_A[get_stack_id()])[i].cs_dmacachep :
   (*_GLOBAL_malloc_sizes_9_A[get_stack_id()])[i].cs_cachep, flags);
 }
 return __kzalloc(size, flags);
}







static inline  __attribute__((always_inline)) void *kcalloc(size_t n, size_t size, gfp_t flags)
{
 if (n != 0 && size > (~0UL) / n)
  return ((void *)0);
 return kzalloc(n * size, flags);
}

extern void kfree(const void *);
extern unsigned int ksize(const void *);
extern int slab_is_available(void);





static inline  __attribute__((always_inline)) void *kmem_cache_alloc_node(kmem_cache_t *cachep, gfp_t flags, int node)
{
 return kmem_cache_alloc(cachep, flags);
}
static inline  __attribute__((always_inline)) void *kmalloc_node(size_t size, gfp_t flags, int node)
{
 return kmalloc(size, flags);
}


extern int kmem_cache_reap(int);
extern int kmem_ptr_validate(kmem_cache_t *cachep, void *ptr);
# 258 "linux-2.6.18/include/linux/slab.h"
typedef  kmem_cache_t  _GLOBAL_73_T; extern  _GLOBAL_73_T  * global_vm_area_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_74_T; extern  _GLOBAL_74_T  * global_names_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_75_T; extern  _GLOBAL_75_T  * global_files_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_76_T; extern  _GLOBAL_76_T  * global_filp_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_77_T; extern  _GLOBAL_77_T  * global_fs_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_78_T; extern  _GLOBAL_78_T  * global_sighand_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_79_T; extern  _GLOBAL_79_T  * global_bio_cachep[NUM_STACKS];   

typedef  atomic_t  _GLOBAL_80_T; extern  _GLOBAL_80_T  global_slab_reclaim_pages[NUM_STACKS];   
# 5 "linux-2.6.18/include/linux/percpu.h" 2
# 42 "linux-2.6.18/include/linux/percpu.h"
static inline  __attribute__((always_inline)) void *__alloc_percpu(size_t size)
{
 void *ret = kmalloc(size, ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)));
 if (ret)
  memset(ret, 0, size);
 return ret;
}
static inline  __attribute__((always_inline)) void free_percpu(const void *ptr)
{
 kfree(ptr);
}
# 42 "linux-2.6.18/include/linux/rcupdate.h" 2
# 50 "linux-2.6.18/include/linux/rcupdate.h"
struct rcu_head {
 struct rcu_head *next;
 void (*func)(struct rcu_head *head);
};
# 64 "linux-2.6.18/include/linux/rcupdate.h"
struct rcu_ctrlblk {
 long cur;
 long completed;
 int next_pending;

 spinlock_t lock ;
 cpumask_t cpumask;

} ;


static inline  __attribute__((always_inline)) int rcu_batch_before(long a, long b)
{
        return (a - b) < 0;
}


static inline  __attribute__((always_inline)) int rcu_batch_after(long a, long b)
{
        return (a - b) > 0;
}






struct rcu_data {

 long quiescbatch;
 int passed_quiesc;
 int qs_pending;


 long batch;
 struct rcu_head *nxtlist;
 struct rcu_head **nxttail;
 long qlen;
 struct rcu_head *curlist;
 struct rcu_head **curtail;
 struct rcu_head *donelist;
 struct rcu_head **donetail;
 long blimit;
 int cpu;
 struct rcu_head barrier;



};

typedef  __typeof__ ( struct rcu_data  )   _GLOBAL_81_T; extern  _GLOBAL_81_T  global_per_cpu__rcu_data[NUM_STACKS];    
typedef  __typeof__ ( struct rcu_data  )   _GLOBAL_82_T; extern  _GLOBAL_82_T  global_per_cpu__rcu_bh_data[NUM_STACKS];    







static inline  __attribute__((always_inline)) void rcu_qsctr_inc(int cpu)
{
 struct rcu_data *rdp = &(*((void)(cpu), &global_per_cpu__rcu_data[get_stack_id()]));
 rdp->passed_quiesc = 1;
}
static inline  __attribute__((always_inline)) void rcu_bh_qsctr_inc(int cpu)
{
 struct rcu_data *rdp = &(*((void)(cpu), &global_per_cpu__rcu_bh_data[get_stack_id()]));
 rdp->passed_quiesc = 1;
}

extern int rcu_pending(int cpu);
extern int rcu_needs_cpu(int cpu);
# 273 "linux-2.6.18/include/linux/rcupdate.h"
extern void rcu_init(void);
extern void rcu_check_callbacks(int cpu, int user);
extern void rcu_restart_cpu(int cpu);
extern long rcu_batches_completed(void);
extern long rcu_batches_completed_bh(void);


extern void call_rcu(struct rcu_head *head, void (*func)(struct rcu_head *head))
                                         ;
extern void call_rcu_bh(struct rcu_head *head, void (*func)(struct rcu_head *head))
                                         ;
extern void synchronize_rcu(void);
void synchronize_idle(void);
extern void rcu_barrier(void);
# 5 "linux-2.6.18/include/linux/pid.h" 2

enum pid_type
{
 PIDTYPE_PID,
 PIDTYPE_PGID,
 PIDTYPE_SID,
 PIDTYPE_MAX
};
# 42 "linux-2.6.18/include/linux/pid.h"
struct pid
{
 atomic_t count;

 int nr;
 struct hlist_node pid_chain;

 struct hlist_head tasks[PIDTYPE_MAX];
 struct rcu_head rcu;
};

struct pid_link
{
 struct hlist_node node;
 struct pid *pid;
};

static inline  __attribute__((always_inline)) struct pid *get_pid(struct pid *pid)
{
 if (pid)
  atomic_inc(&pid->count);
 return pid;
}

extern void put_pid(struct pid *pid);
extern struct task_struct *pid_task(struct pid *pid, enum pid_type);
extern struct task_struct *get_pid_task(struct pid *pid, enum pid_type)
                     ;





extern int attach_pid(struct task_struct *task, enum pid_type type, int nr)
                                ;

extern void detach_pid(struct task_struct *task, enum pid_type);





extern struct pid *find_pid(int nr);




extern struct pid *find_get_pid(int nr);

extern struct pid *alloc_pid(void);
extern void free_pid(struct pid *pid);
# 71 "linux-2.6.18/include/linux/sched.h" 2


# 1 "linux-2.6.18/include/linux/seccomp.h" 1
# 28 "linux-2.6.18/include/linux/seccomp.h"
typedef struct { } seccomp_t;



static inline  __attribute__((always_inline)) int has_secure_computing(struct thread_info *ti)
{
 return 0;
}
# 74 "linux-2.6.18/include/linux/sched.h" 2

# 1 "linux-2.6.18/include/linux/futex.h" 1



# 1 "linux-2.6.18/include/linux/sched.h" 1
# 5 "linux-2.6.18/include/linux/futex.h" 2
# 33 "linux-2.6.18/include/linux/futex.h"
struct robust_list {
 struct robust_list *next;
};
# 45 "linux-2.6.18/include/linux/futex.h"
struct robust_list_head {



 struct robust_list list;







 long futex_offset;
# 69 "linux-2.6.18/include/linux/futex.h"
 struct robust_list *list_op_pending;
};
# 96 "linux-2.6.18/include/linux/futex.h"
long do_futex(u32 *uaddr, int op, u32 val, unsigned long timeout,
       u32 *uaddr2, u32 val2, u32 val3);

extern int
handle_futex_death(u32 *uaddr, struct task_struct *curr, int pi);


extern void exit_robust_list(struct task_struct *curr);
extern void exit_pi_state_list(struct task_struct *curr);
# 76 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/rtmutex.h" 1
# 16 "linux-2.6.18/include/linux/rtmutex.h"
# 1 "linux-2.6.18/include/linux/plist.h" 1
# 80 "linux-2.6.18/include/linux/plist.h"
struct plist_head {
 struct list_head prio_list;
 struct list_head node_list;



};

struct plist_node {
 int prio;
 struct plist_head plist;
};
# 128 "linux-2.6.18/include/linux/plist.h"
static inline  __attribute__((always_inline)) void
plist_head_init(struct plist_head *head, spinlock_t *lock)
{
 INIT_LIST_HEAD(&head->prio_list);
 INIT_LIST_HEAD(&head->node_list);



}







static inline  __attribute__((always_inline)) void plist_node_init(struct plist_node *node, int prio)
{
 node->prio = prio;
 plist_head_init(&node->plist, ((void *)0));
}

extern void plist_add(struct plist_node *node, struct plist_head *head);
extern void plist_del(struct plist_node *node, struct plist_head *head);
# 200 "linux-2.6.18/include/linux/plist.h"
static inline  __attribute__((always_inline)) int plist_head_empty(const struct plist_head *head)
{
 return list_empty(&head->node_list);
}






static inline  __attribute__((always_inline)) int plist_node_empty(const struct plist_node *node)
{
 return plist_head_empty(&node->plist);
}
# 242 "linux-2.6.18/include/linux/plist.h"
static inline  __attribute__((always_inline)) struct plist_node* plist_first(const struct plist_head *head)
{
 return ({ const typeof( ((struct plist_node *)0)->plist.node_list ) *__mptr = (head->node_list.next); (struct plist_node *)( (char *)__mptr - __builtin_offsetof(struct plist_node,plist.node_list) );})
                                        ;
}
# 17 "linux-2.6.18/include/linux/rtmutex.h" 2
# 26 "linux-2.6.18/include/linux/rtmutex.h"
struct rt_mutex {
 spinlock_t wait_lock;
 struct plist_head wait_list;
 struct task_struct *owner;






};

struct rt_mutex_waiter;
struct hrtimer_sleeper;






 static inline  __attribute__((always_inline)) int rt_mutex_debug_check_no_locks_freed(const void *from,
             unsigned long len)
 {
 return 0;
 }
# 80 "linux-2.6.18/include/linux/rtmutex.h"
static inline  __attribute__((always_inline)) int rt_mutex_is_locked(struct rt_mutex *lock)
{
 return lock->owner != ((void *)0);
}

extern void __rt_mutex_init(struct rt_mutex *lock, const char *name);
extern void rt_mutex_destroy(struct rt_mutex *lock);

extern void rt_mutex_lock(struct rt_mutex *lock);
extern int rt_mutex_lock_interruptible(struct rt_mutex *lock,
      int detect_deadlock);
extern int rt_mutex_timed_lock(struct rt_mutex *lock,
     struct hrtimer_sleeper *timeout,
     int detect_deadlock);

extern int rt_mutex_trylock(struct rt_mutex *lock);

extern void rt_mutex_unlock(struct rt_mutex *lock);
# 77 "linux-2.6.18/include/linux/sched.h" 2


# 1 "linux-2.6.18/include/linux/param.h" 1
# 80 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/resource.h" 1





struct task_struct;
# 23 "linux-2.6.18/include/linux/resource.h"
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
 long ru_maxrss;
 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;
};

struct rlimit {
 unsigned long rlim_cur;
 unsigned long rlim_max;
};
# 70 "linux-2.6.18/include/linux/resource.h"
# 1 "linux-2.6.18/include/asm/resource.h" 1



# 1 "linux-2.6.18/include/asm-generic/resource.h" 1
# 5 "linux-2.6.18/include/asm/resource.h" 2
# 71 "linux-2.6.18/include/linux/resource.h" 2

int getrusage(struct task_struct *p, int who, struct rusage *ru);
# 81 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/timer.h" 1







struct tvec_t_base_s;

struct timer_list {
 struct list_head entry;
 unsigned long expires;

 void (*function)(unsigned long);
 unsigned long data;

 struct tvec_t_base_s *base;
};

typedef  struct tvec_t_base_s   _GLOBAL_83_T; extern  _GLOBAL_83_T  _GLOBAL_0_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_1_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_2_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_3_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_4_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_5_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_6_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_7_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_8_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_9_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_10_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_11_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_12_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_13_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_14_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_15_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_16_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_17_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_18_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_19_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_20_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_21_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_22_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_23_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_24_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_25_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_26_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_27_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_28_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_29_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_30_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_31_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_32_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_33_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_34_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_35_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_36_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_37_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_38_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_39_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_40_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_41_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_42_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_43_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_44_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_45_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_46_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_47_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_48_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_49_boot_tvec_bases_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_boot_tvec_bases_I) *_GLOBAL_boot_tvec_bases_10_A[NUM_STACKS];   
# 33 "linux-2.6.18/include/linux/timer.h"
void init_timer(struct timer_list * timer);

static inline  __attribute__((always_inline)) void setup_timer(struct timer_list * timer,
    void (*function)(unsigned long),
    unsigned long data)
{
 timer->function = function;
 timer->data = data;
 init_timer(timer);
}
# 54 "linux-2.6.18/include/linux/timer.h"
static inline  __attribute__((always_inline)) int timer_pending(const struct timer_list * timer)
{
 return timer->entry.next != ((void *)0);
}

extern void add_timer_on(struct timer_list *timer, int cpu);
extern int del_timer(struct timer_list * timer);
extern int __mod_timer(struct timer_list *timer, unsigned long expires);
extern int mod_timer(struct timer_list *timer, unsigned long expires);

extern unsigned long next_timer_interrupt(void);
# 80 "linux-2.6.18/include/linux/timer.h"
static inline  __attribute__((always_inline)) void add_timer(struct timer_list *timer)
{
 do { if (timer_pending(timer)) ; } while(0);
 __mod_timer(timer, timer->expires);
}
# 96 "linux-2.6.18/include/linux/timer.h"
extern void init_timers(void);
extern void run_local_timers(void);
struct hrtimer;
extern int it_real_fn(struct hrtimer *);
# 82 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/hrtimer.h" 1
# 19 "linux-2.6.18/include/linux/hrtimer.h"
# 1 "linux-2.6.18/include/linux/ktime.h" 1
# 46 "linux-2.6.18/include/linux/ktime.h"
typedef union {
 s64 tv64;
# 57 "linux-2.6.18/include/linux/ktime.h"
} ktime_t;
# 75 "linux-2.6.18/include/linux/ktime.h"
static inline  __attribute__((always_inline)) ktime_t ktime_set(const long secs, const unsigned long nsecs)
{

 if (__builtin_expect(!!(secs >= (((s64)~((u64)1 << 63)) / 1000000000L)), 0))
  return (ktime_t){ .tv64 = ((s64)~((u64)1 << 63)) };

 return (ktime_t) { .tv64 = (s64)secs * 1000000000L + (s64)nsecs };
}
# 100 "linux-2.6.18/include/linux/ktime.h"
static inline  __attribute__((always_inline)) ktime_t timespec_to_ktime(struct timespec ts)
{
 return ktime_set(ts.tv_sec, ts.tv_nsec);
}


static inline  __attribute__((always_inline)) ktime_t timeval_to_ktime(struct timeval tv)
{
 return ktime_set(tv.tv_sec, tv.tv_usec * 1000L);
}
# 268 "linux-2.6.18/include/linux/ktime.h"
extern void ktime_get_ts(struct timespec *ts);
# 20 "linux-2.6.18/include/linux/hrtimer.h" 2







enum hrtimer_mode {
 HRTIMER_ABS,
 HRTIMER_REL,
};

enum hrtimer_restart {
 HRTIMER_NORESTART,
 HRTIMER_RESTART,
};



struct hrtimer_base;
# 52 "linux-2.6.18/include/linux/hrtimer.h"
struct hrtimer {
 struct rb_node node;
 ktime_t expires;
 int (*function)(struct hrtimer *);
 struct hrtimer_base *base;
};
# 66 "linux-2.6.18/include/linux/hrtimer.h"
struct hrtimer_sleeper {
 struct hrtimer timer;
 struct task_struct *task;
};
# 85 "linux-2.6.18/include/linux/hrtimer.h"
struct hrtimer_base {
 clockid_t index;
 spinlock_t lock;
 struct rb_root active;
 struct rb_node *first;
 ktime_t resolution;
 ktime_t (*get_time)(void);
 ktime_t (*get_softirq_time)(void);
 struct hrtimer *curr_timer;
 ktime_t softirq_time;
 struct lock_class_key lock_key;
};
# 108 "linux-2.6.18/include/linux/hrtimer.h"
extern void hrtimer_init(struct hrtimer *timer, clockid_t which_clock,
    enum hrtimer_mode mode);


extern int hrtimer_start(struct hrtimer *timer, ktime_t tim,
    const enum hrtimer_mode mode);
extern int hrtimer_cancel(struct hrtimer *timer);
extern int hrtimer_try_to_cancel(struct hrtimer *timer);




extern ktime_t hrtimer_get_remaining(const struct hrtimer *timer);
extern int hrtimer_get_res(const clockid_t which_clock, struct timespec *tp);





static inline  __attribute__((always_inline)) int hrtimer_active(const struct hrtimer *timer)
{
 return ((struct rb_node *)((&timer->node)->rb_parent_color & ~3)) != &timer->node;
}


extern unsigned long
hrtimer_forward(struct hrtimer *timer, ktime_t now, ktime_t interval);


extern long hrtimer_nanosleep(struct timespec *rqtp,
         struct timespec *rmtp,
         const enum hrtimer_mode mode,
         const clockid_t clockid);

extern void hrtimer_init_sleeper(struct hrtimer_sleeper *sl,
     struct task_struct *tsk);


extern void hrtimer_run_queues(void);


extern void  __attribute__ ((__section__ (".init.text"))) hrtimers_init(void);
# 83 "linux-2.6.18/include/linux/sched.h" 2



struct exec_domain;
struct futex_pi_state;
# 105 "linux-2.6.18/include/linux/sched.h"
typedef  unsigned long   _GLOBAL_84_T; extern  _GLOBAL_84_T  _GLOBAL_0_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_1_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_2_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_3_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_4_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_5_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_6_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_7_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_8_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_9_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_10_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_11_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_12_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_13_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_14_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_15_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_16_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_17_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_18_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_19_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_20_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_21_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_22_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_23_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_24_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_25_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_26_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_27_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_28_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_29_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_30_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_31_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_32_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_33_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_34_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_35_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_36_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_37_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_38_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_39_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_40_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_41_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_42_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_43_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_44_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_45_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_46_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_47_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_48_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_49_avenrun_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_avenrun_I) *_GLOBAL_avenrun_11_A[NUM_STACKS];   
# 119 "linux-2.6.18/include/linux/sched.h"
typedef  unsigned long   _GLOBAL_85_T; extern  _GLOBAL_85_T  global_total_forks[NUM_STACKS];    
typedef  int  _GLOBAL_86_T; extern  _GLOBAL_86_T  global_nr_threads[NUM_STACKS];   
typedef  int  _GLOBAL_87_T; extern  _GLOBAL_87_T  global_last_pid[NUM_STACKS];   
typedef  __typeof__ ( unsigned long  )   _GLOBAL_88_T; extern  _GLOBAL_88_T  global_per_cpu__process_counts[NUM_STACKS];    
extern int nr_processes(void);
extern unsigned long nr_running(void);
extern unsigned long nr_uninterruptible(void);
extern unsigned long nr_active(void);
extern unsigned long nr_iowait(void);
extern unsigned long weighted_cpuload(const int cpu);
# 184 "linux-2.6.18/include/linux/sched.h"
typedef  rwlock_t  _GLOBAL_89_T; extern  _GLOBAL_89_T  global_tasklist_lock[NUM_STACKS];   
typedef  spinlock_t  _GLOBAL_90_T; extern  _GLOBAL_90_T  global_mmlist_lock[NUM_STACKS];   

struct task_struct;

extern void sched_init(void);
extern void sched_init_smp(void);
extern void init_idle(struct task_struct *idle, int cpu);

typedef  cpumask_t  _GLOBAL_91_T; extern  _GLOBAL_91_T  global_nohz_cpu_mask[NUM_STACKS];   

extern void show_state(void);
extern void show_regs(struct pt_regs *);






extern void show_stack(struct task_struct *task, unsigned long *sp);

void io_schedule(void);
long io_schedule_timeout(long timeout);

extern void cpu_init (void);
extern void trap_init(void);
extern void update_process_times(int user);
extern void scheduler_tick(void);


extern void softlockup_tick(void);
extern void spawn_softlockup_task(void);
extern void touch_softlockup_watchdog(void);
# 233 "linux-2.6.18/include/linux/sched.h"
extern int in_sched_functions(unsigned long addr);


extern signed long schedule_timeout(signed long timeout);
extern signed long schedule_timeout_interruptible(signed long timeout);
extern signed long schedule_timeout_uninterruptible(signed long timeout);
 void schedule(void);

struct namespace;




typedef  int  _GLOBAL_92_T; extern  _GLOBAL_92_T  global_sysctl_max_map_count[NUM_STACKS];   

# 1 "linux-2.6.18/include/linux/aio.h" 1




# 1 "linux-2.6.18/include/linux/workqueue.h" 1
# 12 "linux-2.6.18/include/linux/workqueue.h"
struct workqueue_struct;

struct work_struct {
 unsigned long pending;
 struct list_head entry;
 void (*func)(void *);
 void *data;
 void *wq_data;
 struct timer_list timer;
};

struct execute_work {
 struct work_struct work;
};
# 57 "linux-2.6.18/include/linux/workqueue.h"
extern struct workqueue_struct *__create_workqueue(const char *name,
          int singlethread);



extern void destroy_workqueue(struct workqueue_struct *wq);

extern int queue_work(struct workqueue_struct *wq, struct work_struct *work);
extern int queue_delayed_work(struct workqueue_struct *wq, struct work_struct *work, unsigned long delay);
extern int queue_delayed_work_on(int cpu, struct workqueue_struct *wq,
 struct work_struct *work, unsigned long delay);
extern void flush_workqueue(struct workqueue_struct *wq);

extern int schedule_work(struct work_struct *work);
extern int schedule_delayed_work(struct work_struct *work, unsigned long delay);

extern int schedule_delayed_work_on(int cpu, struct work_struct *work, unsigned long delay);
extern int schedule_on_each_cpu(void (*func)(void *info), void *info);
extern void flush_scheduled_work(void);
extern int current_is_keventd(void);
extern int keventd_up(void);

extern void init_workqueues(void);
void cancel_rearming_delayed_work(struct work_struct *work);
void cancel_rearming_delayed_workqueue(struct workqueue_struct *,
           struct work_struct *);
int execute_in_process_context(void (*fn)(void *), void *,
          struct execute_work *);






static inline  __attribute__((always_inline)) int cancel_delayed_work(struct work_struct *work)
{
 int ret;

 ret = del_timer(&work->timer);
 if (ret)
  clear_bit(0, &work->pending);
 return ret;
}
# 6 "linux-2.6.18/include/linux/aio.h" 2
# 1 "linux-2.6.18/include/linux/aio_abi.h" 1
# 32 "linux-2.6.18/include/linux/aio_abi.h"
typedef unsigned long aio_context_t;

enum {
 IOCB_CMD_PREAD = 0,
 IOCB_CMD_PWRITE = 1,
 IOCB_CMD_FSYNC = 2,
 IOCB_CMD_FDSYNC = 3,




 IOCB_CMD_NOOP = 6,
};


struct io_event {
 __u64 data;
 __u64 obj;
 __s64 res;
 __s64 res2;
};
# 68 "linux-2.6.18/include/linux/aio_abi.h"
struct iocb {

 __u64 aio_data;
 __u32 aio_key, aio_reserved1;



 __u16 aio_lio_opcode;
 __s16 aio_reqprio;
 __u32 aio_fildes;

 __u64 aio_buf;
 __u64 aio_nbytes;
 __s64 aio_offset;


 __u64 aio_reserved2;
 __u64 aio_reserved3;
};
# 7 "linux-2.6.18/include/linux/aio.h" 2






struct kioctx;
# 85 "linux-2.6.18/include/linux/aio.h"
struct kiocb {
 struct list_head ki_run_list;
 long ki_flags;
 int ki_users;
 unsigned ki_key;

 struct file *ki_filp;
 struct kioctx *ki_ctx;
 int (*ki_cancel)(struct kiocb *, struct io_event *);
 ssize_t (*ki_retry)(struct kiocb *);
 void (*ki_dtor)(struct kiocb *);

 union {
  void *user;
  struct task_struct *tsk;
 } ki_obj;

 __u64 ki_user_data;
 wait_queue_t ki_wait;
 loff_t ki_pos;

 void *private;

 unsigned short ki_opcode;
 size_t ki_nbytes;
 char *ki_buf;
 size_t ki_left;
 long ki_retried;
 long ki_kicked;
 long ki_queued;

 struct list_head ki_list;

};
# 140 "linux-2.6.18/include/linux/aio.h"
struct aio_ring {
 unsigned id;
 unsigned nr;
 unsigned head;
 unsigned tail;

 unsigned magic;
 unsigned compat_features;
 unsigned incompat_features;
 unsigned header_length;


 struct io_event io_events[0];
};




struct aio_ring_info {
 unsigned long mmap_base;
 unsigned long mmap_size;

 struct page **ring_pages;
 spinlock_t ring_lock;
 long nr_pages;

 unsigned nr, tail;

 struct page *internal_pages[8];
};

struct kioctx {
 atomic_t users;
 int dead;
 struct mm_struct *mm;


 unsigned long user_id;
 struct kioctx *next;

 wait_queue_head_t wait;

 spinlock_t ctx_lock;

 int reqs_active;
 struct list_head active_reqs;
 struct list_head run_list;


 unsigned max_reqs;

 struct aio_ring_info ring_info;

 struct work_struct wq;
};


typedef  unsigned  _GLOBAL_93_T; extern  _GLOBAL_93_T  global_aio_max_size[NUM_STACKS];   

extern ssize_t wait_on_sync_kiocb(struct kiocb *iocb);
extern int aio_put_req(struct kiocb *iocb);
extern void kick_iocb(struct kiocb *iocb);
extern int aio_complete(struct kiocb *iocb, long res, long res2);
extern void __put_ioctx(struct kioctx *ctx);
struct mm_struct;
extern void exit_aio(struct mm_struct *mm);
extern struct kioctx *lookup_ioctx(unsigned long ctx_id);
extern int io_submit_one(struct kioctx *ctx, struct iocb *user_iocb, struct iocb *iocb)
                                                     ;


struct kioctx *lookup_ioctx(unsigned long ctx_id);
int io_submit_one(struct kioctx *ctx, struct iocb *user_iocb, struct iocb *iocb)
                         ;
# 241 "linux-2.6.18/include/linux/aio.h"
static inline  __attribute__((always_inline)) struct kiocb *list_kiocb(struct list_head *h)
{
 return ({ const typeof( ((struct kiocb *)0)->ki_list ) *__mptr = (h); (struct kiocb *)( (char *)__mptr - __builtin_offsetof(struct kiocb,ki_list) );});
}


typedef  unsigned long   _GLOBAL_94_T; extern  _GLOBAL_94_T  global_aio_nr[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_95_T; extern  _GLOBAL_95_T  global_aio_max_nr[NUM_STACKS];    
# 249 "linux-2.6.18/include/linux/sched.h" 2

extern unsigned long
arch_get_unmapped_area(struct file *, unsigned long, unsigned long,
         unsigned long, unsigned long);
extern unsigned long
arch_get_unmapped_area_topdown(struct file *filp, unsigned long addr,
     unsigned long len, unsigned long pgoff,
     unsigned long flags);
extern void arch_unmap_area(struct mm_struct *, unsigned long);
extern void arch_unmap_area_topdown(struct mm_struct *, unsigned long);
# 270 "linux-2.6.18/include/linux/sched.h"
typedef atomic_long_t mm_counter_t;
# 298 "linux-2.6.18/include/linux/sched.h"
struct mm_struct {
 struct vm_area_struct * mmap;
 struct rb_root mm_rb;
 struct vm_area_struct * mmap_cache;
 unsigned long (*get_unmapped_area) (struct file *filp,
    unsigned long addr, unsigned long len,
    unsigned long pgoff, unsigned long flags);
 void (*unmap_area) (struct mm_struct *mm, unsigned long addr);
 unsigned long mmap_base;
 unsigned long task_size;
 unsigned long cached_hole_size;
 unsigned long free_area_cache;
 pgd_t * pgd;
 atomic_t mm_users;
 atomic_t mm_count;
 int map_count;
 struct rw_semaphore mmap_sem;
 spinlock_t page_table_lock;

 struct list_head mmlist;







 mm_counter_t _file_rss;
 mm_counter_t _anon_rss;

 unsigned long hiwater_rss;
 unsigned long hiwater_vm;

 unsigned long total_vm, locked_vm, shared_vm, exec_vm;
 unsigned long stack_vm, reserved_vm, def_flags, nr_ptes;
 unsigned long start_code, end_code, start_data, end_data;
 unsigned long start_brk, brk, start_stack;
 unsigned long arg_start, arg_end, env_start, env_end;

 unsigned long saved_auxv[44];

 unsigned dumpable:2;
 cpumask_t cpu_vm_mask;


 mm_context_t context;


 unsigned long swap_token_time;
 char recent_pagein;


 int core_waiters;
 struct completion *core_startup_done, core_done;


 rwlock_t ioctx_list_lock;
 struct kioctx *ioctx_list;
};

struct sighand_struct {
 atomic_t count;
 struct k_sigaction action[64];
 spinlock_t siglock;
};

struct pacct_struct {
 int ac_flag;
 long ac_exitcode;
 unsigned long ac_mem;
 cputime_t ac_utime, ac_stime;
 unsigned long ac_minflt, ac_majflt;
};
# 379 "linux-2.6.18/include/linux/sched.h"
struct signal_struct {
 atomic_t count;
 atomic_t live;

 wait_queue_head_t wait_chldexit;


 struct task_struct *curr_target;


 struct sigpending shared_pending;


 int group_exit_code;





 struct task_struct *group_exit_task;
 int notify_count;


 int group_stop_count;
 unsigned int flags;


 struct list_head posix_timers;


 struct hrtimer real_timer;
 struct task_struct *tsk;
 ktime_t it_real_incr;


 cputime_t it_prof_expires, it_virt_expires;
 cputime_t it_prof_incr, it_virt_incr;


 pid_t pgrp;
 pid_t tty_old_pgrp;
 pid_t session;

 int leader;

 struct tty_struct *tty;







 cputime_t utime, stime, cutime, cstime;
 unsigned long nvcsw, nivcsw, cnvcsw, cnivcsw;
 unsigned long min_flt, maj_flt, cmin_flt, cmaj_flt;







 unsigned long long sched_time;
# 453 "linux-2.6.18/include/linux/sched.h"
 struct rlimit rlim[15];

 struct list_head cpu_timers[3];
# 470 "linux-2.6.18/include/linux/sched.h"
};
# 513 "linux-2.6.18/include/linux/sched.h"
struct user_struct {
 atomic_t __count;
 atomic_t processes;
 atomic_t files;
 atomic_t sigpending;





 unsigned long mq_bytes;
 unsigned long locked_shm;







 struct list_head uidhash_list;
 uid_t uid;
};

extern struct user_struct *find_user(uid_t);

typedef  struct user_struct   _GLOBAL_96_T; extern  _GLOBAL_96_T  global_root_user[NUM_STACKS];    


struct backing_dev_info;
struct reclaim_state;
# 591 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) int sched_info_on(void)
{






 return 0;

}

enum idle_type
{
 SCHED_IDLE,
 NOT_IDLE,
 NEWLY_IDLE,
 MAX_IDLE_TYPES
};
# 711 "linux-2.6.18/include/linux/sched.h"
struct io_context;
void exit_io_context(void);
struct cpuset;



struct group_info {
 int ngroups;
 atomic_t usage;
 gid_t small_block[32];
 int nblocks;
 gid_t *blocks[0];
};
# 740 "linux-2.6.18/include/linux/sched.h"
extern struct group_info *groups_alloc(int gidsetsize);
extern void groups_free(struct group_info *group_info);
extern int set_current_groups(struct group_info *group_info);
extern int groups_search(struct group_info *group_info, gid_t grp);







static inline  __attribute__((always_inline)) void prefetch_stack(struct task_struct *t) { }


struct audit_context;
struct mempolicy;
struct pipe_inode_info;

enum sleep_type {
 SLEEP_NORMAL,
 SLEEP_NONINTERACTIVE,
 SLEEP_INTERACTIVE,
 SLEEP_INTERRUPTED,
};

struct prio_array;

struct task_struct {
 volatile long state;
 struct thread_info *thread_info;
 atomic_t usage;
 unsigned long flags;
 unsigned long ptrace;

 int lock_depth;






 int load_weight;
 int prio, static_prio, normal_prio;
 struct list_head run_list;
 struct prio_array *array;

 unsigned short ioprio;
 unsigned int btrace_seq;

 unsigned long sleep_avg;
 unsigned long long timestamp, last_ran;
 unsigned long long sched_time;
 enum sleep_type sleep_type;

 unsigned long policy;
 cpumask_t cpus_allowed;
 unsigned int time_slice, first_time_slice;





 struct list_head tasks;




 struct list_head ptrace_children;
 struct list_head ptrace_list;

 struct mm_struct *mm, *active_mm;


 struct linux_binfmt *binfmt;
 long exit_state;
 int exit_code, exit_signal;
 int pdeath_signal;

 unsigned long personality;
 unsigned did_exec:1;
 pid_t pid;
 pid_t tgid;





 struct task_struct *real_parent;
 struct task_struct *parent;




 struct list_head children;
 struct list_head sibling;
 struct task_struct *group_leader;


 struct pid_link pids[PIDTYPE_MAX];
 struct list_head thread_group;

 struct completion *vfork_done;
 int *set_child_tid;
 int *clear_child_tid;

 unsigned long rt_priority;
 cputime_t utime, stime;
 unsigned long nvcsw, nivcsw;
 struct timespec start_time;

 unsigned long min_flt, maj_flt;

   cputime_t it_prof_expires, it_virt_expires;
 unsigned long long it_sched_expires;
 struct list_head cpu_timers[3];


 uid_t uid,euid,suid,fsuid;
 gid_t gid,egid,sgid,fsgid;
 struct group_info *group_info;
 kernel_cap_t cap_effective, cap_inheritable, cap_permitted;
 unsigned keep_capabilities:1;
 struct user_struct *user;





 int oomkilladj;
 char comm[16];




 int link_count, total_link_count;

 struct sysv_sem sysvsem;

 struct thread_struct thread;

 struct fs_struct *fs;

 struct files_struct *files;

 struct namespace *namespace;

 struct signal_struct *signal;
 struct sighand_struct *sighand;

 sigset_t blocked, real_blocked;
 sigset_t saved_sigmask;
 struct sigpending pending;

 unsigned long sas_ss_sp;
 size_t sas_ss_size;
 int (*notifier)(void *priv);
 void *notifier_data;
 sigset_t *notifier_mask;

 void *security;
 struct audit_context *audit_context;
 seccomp_t seccomp;


    u32 parent_exec_id;
    u32 self_exec_id;

 spinlock_t alloc_lock;


 spinlock_t pi_lock;
# 947 "linux-2.6.18/include/linux/sched.h"
 void *journal_info;


 struct reclaim_state *reclaim_state;

 struct backing_dev_info *backing_dev_info;

 struct io_context *io_context;

 unsigned long ptrace_message;
 siginfo_t *last_siginfo;






 wait_queue_t *io_wait;

 u64 rchar, wchar, syscr, syscw;
# 977 "linux-2.6.18/include/linux/sched.h"
 struct cpuset *cpuset;
 nodemask_t mems_allowed;
 int cpuset_mems_generation;
 int cpuset_mem_spread_rotor;

 struct robust_list_head *robust_list;



 struct list_head pi_state_list;
 struct futex_pi_state *pi_state_cache;

 atomic_t fs_excl;
 struct rcu_head rcu;




 struct pipe_inode_info *splice_pipe;



};

static inline  __attribute__((always_inline)) pid_t process_group(struct task_struct *tsk)
{
 return tsk->signal->pgrp;
}
# 1014 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) int pid_alive(struct task_struct *p)
{
 return p->pids[PIDTYPE_PID].pid != ((void *)0);
}

extern void free_task(struct task_struct *tsk);


extern void __put_task_struct(struct task_struct *t);

static inline  __attribute__((always_inline)) void put_task_struct(struct task_struct *t)
{
 if (atomic_dec_and_test(&t->usage))
  __put_task_struct(t);
}
# 1088 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) int set_cpus_allowed(struct task_struct *p, cpumask_t new_mask)
{
 if (!(__builtin_constant_p((0)) ? constant_test_bit(((0)),((new_mask).bits)) : variable_test_bit(((0)),((new_mask).bits))))
  return -22;
 return 0;
}


extern unsigned long long sched_clock(void);
extern unsigned long long
current_sched_time(const struct task_struct *current_task);
# 1110 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) void idle_task_exit(void) {}


extern void sched_idle_next(void);






static inline  __attribute__((always_inline)) int rt_mutex_getprio(struct task_struct *p)
{
 return p->normal_prio;
}



extern void set_user_nice(struct task_struct *p, long nice);
extern int task_prio(const struct task_struct *p);
extern int task_nice(const struct task_struct *p);
extern int can_nice(const struct task_struct *p, const int nice);
extern int task_curr(const struct task_struct *p);
extern int idle_cpu(int cpu);
extern int sched_setscheduler(struct task_struct *, int, struct sched_param *);
extern struct task_struct *idle_task(int cpu);
extern struct task_struct *curr_task(int cpu);
extern void set_curr_task(int cpu, struct task_struct *p);

void yield(void);




typedef  struct exec_domain   _GLOBAL_97_T; extern  _GLOBAL_97_T  global_default_exec_domain[NUM_STACKS];    

union thread_union {
 struct thread_info thread_info;
 unsigned long stack[((1UL << 12) << 1)/sizeof(long)];
};


static inline  __attribute__((always_inline)) int kstack_end(void *addr)
{



 return !(((unsigned long)addr+sizeof(void*)-1) & (((1UL << 12) << 1)-sizeof(void*)));
}


typedef  union thread_union   _GLOBAL_98_T; extern  _GLOBAL_98_T  global_init_thread_union[NUM_STACKS];    
typedef  struct task_struct   _GLOBAL_99_T; extern  _GLOBAL_99_T  global_init_task[NUM_STACKS];    

typedef  struct mm_struct   _GLOBAL_100_T; extern  _GLOBAL_100_T  global_init_mm[NUM_STACKS];    


extern struct task_struct *find_task_by_pid_type(int type, int pid);
extern void set_special_pids(pid_t session, pid_t pgrp);
extern void __set_special_pids(pid_t session, pid_t pgrp);


extern struct user_struct * alloc_uid(uid_t);
static inline  __attribute__((always_inline)) struct user_struct *get_uid(struct user_struct *u)
{
 atomic_inc(&u->__count);
 return u;
}
extern void free_uid(struct user_struct *);
extern void switch_uid(struct user_struct *);



extern void do_timer(struct pt_regs *);

extern int wake_up_state(struct task_struct * tsk, unsigned int state);
extern int wake_up_process(struct task_struct * tsk);
extern void wake_up_new_task(struct task_struct * tsk, unsigned long clone_flags)
                                 ;



 static inline  __attribute__((always_inline)) void kick_process(struct task_struct *tsk) { }

extern void sched_fork(struct task_struct * p, int clone_flags);
extern void sched_exit(struct task_struct * p);

extern int in_group_p(gid_t);
extern int in_egroup_p(gid_t);

extern void proc_caches_init(void);
extern void flush_signals(struct task_struct *);
extern void flush_signal_handlers(struct task_struct *, int force_default);
extern int dequeue_signal(struct task_struct *tsk, sigset_t *mask, siginfo_t *info);

static inline  __attribute__((always_inline)) int dequeue_signal_lock(struct task_struct *tsk, sigset_t *mask, siginfo_t *info)
{
 unsigned long flags;
 int ret;

 do { (void)(flags); do { do { } while (0); (void)0; (void)(&tsk->sighand->siglock); } while (0); } while (0);
 ret = dequeue_signal(tsk, mask, info);
 do { (void)(flags); do { do { } while (0); (void)0; (void)(&tsk->sighand->siglock); } while (0); } while (0);

 return ret;
}

extern void block_all_signals(int (*notifier)(void *priv), void *priv,
         sigset_t *mask);
extern void unblock_all_signals(void);
extern void release_task(struct task_struct * p);
extern int send_sig_info(int, struct siginfo *, struct task_struct *);
extern int send_group_sig_info(int, struct siginfo *, struct task_struct *);
extern int force_sigsegv(int, struct task_struct *);
extern int force_sig_info(int, struct siginfo *, struct task_struct *);
extern int __kill_pg_info(int sig, struct siginfo *info, pid_t pgrp);
extern int kill_pg_info(int, struct siginfo *, pid_t);
extern int kill_proc_info(int, struct siginfo *, pid_t);
extern int kill_proc_info_as_uid(int, struct siginfo *, pid_t, uid_t, uid_t, u32);
extern void do_notify_parent(struct task_struct *, int);
extern void force_sig(int, struct task_struct *);
extern void force_sig_specific(int, struct task_struct *);
extern int send_sig(int, struct task_struct *, int);
extern void zap_other_threads(struct task_struct *p);
extern int kill_pg(pid_t, int, int);
extern int kill_proc(pid_t, int, int);
extern struct sigqueue *sigqueue_alloc(void);
extern void sigqueue_free(struct sigqueue *);
extern int send_sigqueue(int, struct sigqueue *, struct task_struct *);
extern int send_group_sigqueue(int, struct sigqueue *, struct task_struct *);
extern int do_sigaction(int, struct k_sigaction *, struct k_sigaction *);
extern int do_sigaltstack(const stack_t *, stack_t *, unsigned long);






static inline  __attribute__((always_inline)) int is_si_special(const struct siginfo *info)
{
 return info <= ((struct siginfo *) 2);
}



static inline  __attribute__((always_inline)) int on_sig_stack(unsigned long sp)
{
 return (sp - get_nsc_task()->sas_ss_sp < get_nsc_task()->sas_ss_size);
}

static inline  __attribute__((always_inline)) int sas_ss_flags(unsigned long sp)
{
 return (get_nsc_task()->sas_ss_size == 0 ? 2
  : on_sig_stack(sp) ? 1 : 0);
}




extern struct mm_struct * mm_alloc(void);


extern void __mmdrop(struct mm_struct *);
static inline  __attribute__((always_inline)) void mmdrop(struct mm_struct * mm)
{
 if (atomic_dec_and_test(&mm->mm_count))
  __mmdrop(mm);
}


extern void mmput(struct mm_struct *);

extern struct mm_struct *get_task_mm(struct task_struct *task);

extern void mm_release(struct task_struct *, struct mm_struct *);

extern int copy_thread(int, unsigned long, unsigned long, unsigned long, struct task_struct *, struct pt_regs *);
extern void flush_thread(void);
extern void exit_thread(void);

extern void exit_files(struct task_struct *);
extern void __cleanup_signal(struct signal_struct *);
extern void __cleanup_sighand(struct sighand_struct *);
extern void exit_itimers(struct signal_struct *);

extern void do_group_exit(int);

extern void daemonize(const char *, ...);
extern int allow_signal(int);
extern int disallow_signal(int);
typedef  struct task_struct   _GLOBAL_101_T; extern  _GLOBAL_101_T  * global_child_reaper[NUM_STACKS];    

extern int do_execve(char *, char * *, char * *, struct pt_regs *);
extern long do_fork(unsigned long, unsigned long, struct pt_regs *, unsigned long, int *, int *);
struct task_struct *fork_idle(int);

extern void set_task_comm(struct task_struct *tsk, char *from);
extern void get_task_comm(char *to, struct task_struct *tsk);
# 1335 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) struct task_struct *next_thread(const struct task_struct *p)
{
 return ({ const typeof( ((struct task_struct *)0)->thread_group ) *__mptr = (({ typeof(p->thread_group.next) _________p1 = p->thread_group.next; do {} while(0); (_________p1); })); (struct task_struct *)( (char *)__mptr - __builtin_offsetof(struct task_struct,thread_group) );})
                                      ;
}

static inline  __attribute__((always_inline)) int thread_group_empty(struct task_struct *p)
{
 return list_empty(&p->thread_group);
}
# 1358 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) void task_lock(struct task_struct *p)
{
 do { do { } while (0); (void)0; (void)(&p->alloc_lock); } while (0);
}

static inline  __attribute__((always_inline)) void task_unlock(struct task_struct *p)
{
 do { do { } while (0); (void)0; (void)(&p->alloc_lock); } while (0);
}

extern struct sighand_struct *lock_task_sighand(struct task_struct *tsk,
       unsigned long *flags);

static inline  __attribute__((always_inline)) void unlock_task_sighand(struct task_struct *tsk,
      unsigned long *flags)
{
 do { (void)(*flags); do { do { } while (0); (void)0; (void)(&tsk->sighand->siglock); } while (0); } while (0);
}






static inline  __attribute__((always_inline)) void setup_thread_stack(struct task_struct *p, struct task_struct *org)
{
 *(p)->thread_info = *(org)->thread_info;
 (p)->thread_info->task = p;
}

static inline  __attribute__((always_inline)) unsigned long *end_of_stack(struct task_struct *p)
{
 return (unsigned long *)(p->thread_info + 1);
}






static inline  __attribute__((always_inline)) void set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 set_ti_thread_flag((tsk)->thread_info, flag);
}

static inline  __attribute__((always_inline)) void clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 clear_ti_thread_flag((tsk)->thread_info, flag);
}

static inline  __attribute__((always_inline)) int test_and_set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_set_ti_thread_flag((tsk)->thread_info, flag);
}

static inline  __attribute__((always_inline)) int test_and_clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_clear_ti_thread_flag((tsk)->thread_info, flag);
}

static inline  __attribute__((always_inline)) int test_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_ti_thread_flag((tsk)->thread_info, flag);
}

static inline  __attribute__((always_inline)) void set_tsk_need_resched(struct task_struct *tsk)
{
 set_tsk_thread_flag(tsk,3);
}

static inline  __attribute__((always_inline)) void clear_tsk_need_resched(struct task_struct *tsk)
{
 clear_tsk_thread_flag(tsk,3);
}

static inline  __attribute__((always_inline)) int signal_pending(struct task_struct *p)
{
 return __builtin_expect(!!(test_tsk_thread_flag(p,2)), 0);
}

static inline  __attribute__((always_inline)) int need_resched(void)
{
 return __builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 3)), 0);
}
# 1450 "linux-2.6.18/include/linux/sched.h"
extern int cond_resched(void);
extern int cond_resched_lock(spinlock_t * lock);
extern int cond_resched_softirq(void);
# 1468 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) int lock_need_resched(spinlock_t *lock)
{
 if (0 || need_resched())
  return 1;
 return 0;
}





extern void recalc_sigpending_tsk(struct task_struct *t);
extern void recalc_sigpending(void);

extern void signal_wake_up(struct task_struct *t, int resume_stopped);
# 1501 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) unsigned int task_cpu(const struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) void set_task_cpu(struct task_struct *p, unsigned int cpu)
{
}




extern void arch_pick_mmap_layout(struct mm_struct *mm);
# 1523 "linux-2.6.18/include/linux/sched.h"
extern long sched_setaffinity(pid_t pid, cpumask_t new_mask);
extern long sched_getaffinity(pid_t pid, cpumask_t *mask);

# 1 "linux-2.6.18/include/linux/sysdev.h" 1
# 24 "linux-2.6.18/include/linux/sysdev.h"
# 1 "linux-2.6.18/include/linux/kobject.h" 1
# 22 "linux-2.6.18/include/linux/kobject.h"
# 1 "linux-2.6.18/include/linux/sysfs.h" 1
# 15 "linux-2.6.18/include/linux/sysfs.h"
struct kobject;
struct module;

struct attribute {
 const char * name;
 struct module * owner;
 mode_t mode;
};

struct attribute_group {
 const char * name;
 struct attribute ** attrs;
};
# 51 "linux-2.6.18/include/linux/sysfs.h"
struct vm_area_struct;

struct bin_attribute {
 struct attribute attr;
 size_t size;
 void *private;
 ssize_t (*read)(struct kobject *, char *, loff_t, size_t);
 ssize_t (*write)(struct kobject *, char *, loff_t, size_t);
 int (*mmap)(struct kobject *, struct bin_attribute *attr,
      struct vm_area_struct *vma);
};

struct sysfs_ops {
 ssize_t (*show)(struct kobject *, struct attribute *,char *);
 ssize_t (*store)(struct kobject *,struct attribute *,const char *, size_t);
};

struct sysfs_dirent {
 atomic_t s_count;
 struct list_head s_sibling;
 struct list_head s_children;
 void * s_element;
 int s_type;
 umode_t s_mode;
 struct dentry * s_dentry;
 struct iattr * s_iattr;
 atomic_t s_event;
};
# 125 "linux-2.6.18/include/linux/sysfs.h"
static inline  __attribute__((always_inline)) int sysfs_create_dir(struct kobject * k)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_dir(struct kobject * k)
{
 ;
}

static inline  __attribute__((always_inline)) int sysfs_rename_dir(struct kobject * k, const char *new_name)
{
 return 0;
}

static inline  __attribute__((always_inline)) int sysfs_create_file(struct kobject * k, const struct attribute * a)
{
 return 0;
}

static inline  __attribute__((always_inline)) int sysfs_update_file(struct kobject * k, const struct attribute * a)
{
 return 0;
}
static inline  __attribute__((always_inline)) int sysfs_chmod_file(struct kobject *kobj, struct attribute *attr, mode_t mode)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_file(struct kobject * k, const struct attribute * a)
{
 ;
}

static inline  __attribute__((always_inline)) int sysfs_create_link(struct kobject * k, struct kobject * t, const char * n)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_link(struct kobject * k, const char * name)
{
 ;
}


static inline  __attribute__((always_inline)) int sysfs_create_bin_file(struct kobject * k, struct bin_attribute * a)
{
 return 0;
}

static inline  __attribute__((always_inline)) int sysfs_remove_bin_file(struct kobject * k, struct bin_attribute * a)
{
 return 0;
}

static inline  __attribute__((always_inline)) int sysfs_create_group(struct kobject * k, const struct attribute_group *g)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_group(struct kobject * k, const struct attribute_group * g)
{
 ;
}

static inline  __attribute__((always_inline)) void sysfs_notify(struct kobject * k, char *dir, char *attr)
{
}
# 23 "linux-2.6.18/include/linux/kobject.h" 2


# 1 "linux-2.6.18/include/linux/kref.h" 1
# 23 "linux-2.6.18/include/linux/kref.h"
struct kref {
 atomic_t refcount;
};

void kref_init(struct kref *kref);
void kref_get(struct kref *kref);
int kref_put(struct kref *kref, void (*release) (struct kref *kref));
# 26 "linux-2.6.18/include/linux/kobject.h" 2
# 34 "linux-2.6.18/include/linux/kobject.h"
typedef  char  _GLOBAL_102_T; extern  _GLOBAL_102_T  _GLOBAL_0_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_1_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_2_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_3_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_4_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_5_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_6_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_7_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_8_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_9_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_10_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_11_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_12_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_13_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_14_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_15_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_16_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_17_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_18_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_19_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_20_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_21_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_22_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_23_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_24_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_25_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_26_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_27_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_28_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_29_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_30_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_31_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_32_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_33_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_34_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_35_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_36_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_37_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_38_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_39_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_40_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_41_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_42_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_43_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_44_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_45_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_46_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_47_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_48_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_49_uevent_helper_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_uevent_helper_I) *_GLOBAL_uevent_helper_12_A[NUM_STACKS] = { &_GLOBAL_0_uevent_helper_I, &_GLOBAL_1_uevent_helper_I, &_GLOBAL_2_uevent_helper_I, &_GLOBAL_3_uevent_helper_I, &_GLOBAL_4_uevent_helper_I, &_GLOBAL_5_uevent_helper_I, &_GLOBAL_6_uevent_helper_I, &_GLOBAL_7_uevent_helper_I, &_GLOBAL_8_uevent_helper_I, &_GLOBAL_9_uevent_helper_I, &_GLOBAL_10_uevent_helper_I, &_GLOBAL_11_uevent_helper_I, &_GLOBAL_12_uevent_helper_I, &_GLOBAL_13_uevent_helper_I, &_GLOBAL_14_uevent_helper_I, &_GLOBAL_15_uevent_helper_I, &_GLOBAL_16_uevent_helper_I, &_GLOBAL_17_uevent_helper_I, &_GLOBAL_18_uevent_helper_I, &_GLOBAL_19_uevent_helper_I, &_GLOBAL_20_uevent_helper_I, &_GLOBAL_21_uevent_helper_I, &_GLOBAL_22_uevent_helper_I, &_GLOBAL_23_uevent_helper_I, &_GLOBAL_24_uevent_helper_I, &_GLOBAL_25_uevent_helper_I, &_GLOBAL_26_uevent_helper_I, &_GLOBAL_27_uevent_helper_I, &_GLOBAL_28_uevent_helper_I, &_GLOBAL_29_uevent_helper_I, &_GLOBAL_30_uevent_helper_I, &_GLOBAL_31_uevent_helper_I, &_GLOBAL_32_uevent_helper_I, &_GLOBAL_33_uevent_helper_I, &_GLOBAL_34_uevent_helper_I, &_GLOBAL_35_uevent_helper_I, &_GLOBAL_36_uevent_helper_I, &_GLOBAL_37_uevent_helper_I, &_GLOBAL_38_uevent_helper_I, &_GLOBAL_39_uevent_helper_I, &_GLOBAL_40_uevent_helper_I, &_GLOBAL_41_uevent_helper_I, &_GLOBAL_42_uevent_helper_I, &_GLOBAL_43_uevent_helper_I, &_GLOBAL_44_uevent_helper_I, &_GLOBAL_45_uevent_helper_I, &_GLOBAL_46_uevent_helper_I, &_GLOBAL_47_uevent_helper_I, &_GLOBAL_48_uevent_helper_I, &_GLOBAL_49_uevent_helper_I, };  


typedef  u64  _GLOBAL_103_T; extern  _GLOBAL_103_T  global_uevent_seqnum[NUM_STACKS];   


typedef int kobject_action_t;
enum kobject_action {
 KOBJ_ADD = ( kobject_action_t) 0x01,
 KOBJ_REMOVE = ( kobject_action_t) 0x02,
 KOBJ_CHANGE = ( kobject_action_t) 0x03,
 KOBJ_MOUNT = ( kobject_action_t) 0x04,
 KOBJ_UMOUNT = ( kobject_action_t) 0x05,
 KOBJ_OFFLINE = ( kobject_action_t) 0x06,
 KOBJ_ONLINE = ( kobject_action_t) 0x07,
};

struct kobject {
 const char * k_name;
 char name[20];
 struct kref kref;
 struct list_head entry;
 struct kobject * parent;
 struct kset * kset;
 struct kobj_type * ktype;
 struct dentry * dentry;
 wait_queue_head_t poll;
};

extern int kobject_set_name(struct kobject *, const char *, ...)
 __attribute__((format(printf,2,3))) ;

static inline  __attribute__((always_inline)) const char * kobject_name(const struct kobject * kobj)
{
 return kobj->k_name;
}

extern void kobject_init(struct kobject *);
extern void kobject_cleanup(struct kobject *);

extern int kobject_add(struct kobject *);
extern void kobject_del(struct kobject *);

extern int kobject_rename(struct kobject *, const char *new_name);

extern int kobject_register(struct kobject *);
extern void kobject_unregister(struct kobject *);

extern struct kobject * kobject_get(struct kobject *);
extern void kobject_put(struct kobject *);

extern struct kobject *kobject_add_dir(struct kobject *, const char *);

extern char * kobject_get_path(struct kobject *, gfp_t);

struct kobj_type {
 void (*release)(struct kobject *);
 struct sysfs_ops * sysfs_ops;
 struct attribute ** default_attrs;
};
# 113 "linux-2.6.18/include/linux/kobject.h"
struct kset_uevent_ops {
 int (*filter)(struct kset *kset, struct kobject *kobj);
 const char *(*name)(struct kset *kset, struct kobject *kobj);
 int (*uevent)(struct kset *kset, struct kobject *kobj, char **envp,
   int num_envp, char *buffer, int buffer_size);
};

struct kset {
 struct subsystem * subsys;
 struct kobj_type * ktype;
 struct list_head list;
 spinlock_t list_lock;
 struct kobject kobj;
 struct kset_uevent_ops * uevent_ops;
};


extern void kset_init(struct kset * k);
extern int kset_add(struct kset * k);
extern int kset_register(struct kset * k);
extern void kset_unregister(struct kset * k);

static inline  __attribute__((always_inline)) struct kset * to_kset(struct kobject * kobj)
{
 return kobj ? ({ const typeof( ((struct kset *)0)->kobj ) *__mptr = (kobj); (struct kset *)( (char *)__mptr - __builtin_offsetof(struct kset,kobj) );}) : ((void *)0);
}

static inline  __attribute__((always_inline)) struct kset * kset_get(struct kset * k)
{
 return k ? to_kset(kobject_get(&k->kobj)) : ((void *)0);
}

static inline  __attribute__((always_inline)) void kset_put(struct kset * k)
{
 kobject_put(&k->kobj);
}

static inline  __attribute__((always_inline)) struct kobj_type * get_ktype(struct kobject * k)
{
 if (k->kset && k->kset->ktype)
  return k->kset->ktype;
 else
  return k->ktype;
}

extern struct kobject * kset_find_obj(struct kset *, const char *);
# 169 "linux-2.6.18/include/linux/kobject.h"
struct subsystem {
 struct kset kset;
 struct rw_semaphore rwsem;
};
# 192 "linux-2.6.18/include/linux/kobject.h"
typedef  struct subsystem   _GLOBAL_104_T; extern  _GLOBAL_104_T  global_kernel_subsys[NUM_STACKS];    

typedef  struct subsystem   _GLOBAL_105_T; extern  _GLOBAL_105_T  global_hypervisor_subsys[NUM_STACKS];    
# 241 "linux-2.6.18/include/linux/kobject.h"
extern void subsystem_init(struct subsystem *);
extern int subsystem_register(struct subsystem *);
extern void subsystem_unregister(struct subsystem *);

static inline  __attribute__((always_inline)) struct subsystem * subsys_get(struct subsystem * s)
{
 return s ? ({ const typeof( ((struct subsystem *)0)->kset ) *__mptr = (kset_get(&s->kset)); (struct subsystem *)( (char *)__mptr - __builtin_offsetof(struct subsystem,kset) );}) : ((void *)0);
}

static inline  __attribute__((always_inline)) void subsys_put(struct subsystem * s)
{
 kset_put(&s->kset);
}

struct subsys_attribute {
 struct attribute attr;
 ssize_t (*show)(struct subsystem *, char *);
 ssize_t (*store)(struct subsystem *, const char *, size_t);
};

extern int subsys_create_file(struct subsystem * , struct subsys_attribute *);


void kobject_uevent(struct kobject *kobj, enum kobject_action action);

int add_uevent_var(char **envp, int num_envp, int *cur_index,
   char *buffer, int buffer_size, int *cur_len,
   const char *format, ...)
 __attribute__((format (printf, 7, 8))) ;
# 25 "linux-2.6.18/include/linux/sysdev.h" 2
# 1 "linux-2.6.18/include/linux/pm.h" 1
# 34 "linux-2.6.18/include/linux/pm.h"
typedef int pm_request_t;
# 43 "linux-2.6.18/include/linux/pm.h"
typedef int pm_dev_t;
# 56 "linux-2.6.18/include/linux/pm.h"
enum
{
 PM_SYS_UNKNOWN = 0x00000000,
 PM_SYS_KBC = 0x41d00303,
 PM_SYS_COM = 0x41d00500,
 PM_SYS_IRDA = 0x41d00510,
 PM_SYS_FDC = 0x41d00700,
 PM_SYS_VGA = 0x41d00900,
 PM_SYS_PCMCIA = 0x41d00e00,
};
# 75 "linux-2.6.18/include/linux/pm.h"
struct pm_dev;

typedef int (*pm_callback)(struct pm_dev *dev, pm_request_t rqst, void *data);




struct pm_dev
{
 pm_dev_t type;
 unsigned long id;
 pm_callback callback;
 void *data;

 unsigned long flags;
 unsigned long state;
 unsigned long prev_state;

 struct list_head entry;
};







typedef  void   ( *_GLOBAL_107_T  )  ( void  ) ; extern  _GLOBAL_107_T global_pm_idle[NUM_STACKS];   
typedef  void   ( *_GLOBAL_109_T  )  ( void  ) ; extern  _GLOBAL_109_T global_pm_power_off[NUM_STACKS];   

typedef int suspend_state_t;







typedef int suspend_disk_method_t;







struct pm_ops {
 suspend_disk_method_t pm_disk_mode;
 int (*valid)(suspend_state_t state);
 int (*prepare)(suspend_state_t state);
 int (*enter)(suspend_state_t state);
 int (*finish)(suspend_state_t state);
};

extern void pm_set_ops(struct pm_ops *);
typedef  struct pm_ops   _GLOBAL_110_T; extern  _GLOBAL_110_T  * global_pm_ops[NUM_STACKS];    
extern int pm_suspend(suspend_state_t state);






struct device;

typedef struct pm_message {
 int event;
} pm_message_t;
# 171 "linux-2.6.18/include/linux/pm.h"
struct dev_pm_info {
 pm_message_t power_state;
 unsigned can_wakeup:1;

 unsigned should_wakeup:1;
 pm_message_t prev_state;
 void * saved_state;
 struct device * pm_parent;
 struct list_head entry;

};

extern void device_pm_set_parent(struct device * dev, struct device * parent);

extern int device_power_down(pm_message_t state);
extern void device_power_up(void);
extern void device_resume(void);


typedef  suspend_disk_method_t  _GLOBAL_111_T; extern  _GLOBAL_111_T  global_pm_disk_mode[NUM_STACKS];   

extern int device_suspend(pm_message_t state);






extern int dpm_runtime_suspend(struct device *, pm_message_t);
extern void dpm_runtime_resume(struct device *);
extern void __suspend_report_result(const char *function, void *fn, int ret);
# 26 "linux-2.6.18/include/linux/sysdev.h" 2


struct sys_device;

struct sysdev_class {
 struct list_head drivers;


 int (*shutdown)(struct sys_device *);
 int (*suspend)(struct sys_device *, pm_message_t state);
 int (*resume)(struct sys_device *);
 struct kset kset;
};

struct sysdev_class_attribute {
 struct attribute attr;
 ssize_t (*show)(struct sysdev_class *, char *);
 ssize_t (*store)(struct sysdev_class *, const char *, size_t);
};
# 54 "linux-2.6.18/include/linux/sysdev.h"
extern int sysdev_class_register(struct sysdev_class *);
extern void sysdev_class_unregister(struct sysdev_class *);

extern int sysdev_class_create_file(struct sysdev_class *,
 struct sysdev_class_attribute *);
extern void sysdev_class_remove_file(struct sysdev_class *,
 struct sysdev_class_attribute *);




struct sysdev_driver {
 struct list_head entry;
 int (*add)(struct sys_device *);
 int (*remove)(struct sys_device *);
 int (*shutdown)(struct sys_device *);
 int (*suspend)(struct sys_device *, pm_message_t state);
 int (*resume)(struct sys_device *);
};


extern int sysdev_driver_register(struct sysdev_class *, struct sysdev_driver *);
extern void sysdev_driver_unregister(struct sysdev_class *, struct sysdev_driver *);







struct sys_device {
 u32 id;
 struct sysdev_class * cls;
 struct kobject kobj;
};

extern int sysdev_register(struct sys_device *);
extern void sysdev_unregister(struct sys_device *);


struct sysdev_attribute {
 struct attribute attr;
 ssize_t (*show)(struct sys_device *, char *);
 ssize_t (*store)(struct sys_device *, const char *, size_t);
};
# 108 "linux-2.6.18/include/linux/sysdev.h"
extern int sysdev_create_file(struct sys_device *, struct sysdev_attribute *);
extern void sysdev_remove_file(struct sys_device *, struct sysdev_attribute *);
# 1527 "linux-2.6.18/include/linux/sched.h" 2
typedef  int  _GLOBAL_112_T; extern  _GLOBAL_112_T  global_sched_mc_power_savings[NUM_STACKS]; extern  _GLOBAL_112_T  global_sched_smt_power_savings[NUM_STACKS];    
typedef  struct sysdev_attribute   _GLOBAL_113_T; extern  _GLOBAL_113_T  global_attr_sched_mc_power_savings[NUM_STACKS]; extern  _GLOBAL_113_T  global_attr_sched_smt_power_savings[NUM_STACKS];     
extern int sched_create_sysfs_power_savings_entries(struct sysdev_class *cls);

extern void normalize_rt_tasks(void);





static inline  __attribute__((always_inline)) int frozen(struct task_struct *p)
{
 return p->flags & 0x00010000;
}




static inline  __attribute__((always_inline)) int freezing(struct task_struct *p)
{
 return p->flags & 0x00004000;
}





static inline  __attribute__((always_inline)) void freeze(struct task_struct *p)
{
 p->flags |= 0x00004000;
}




static inline  __attribute__((always_inline)) void do_not_freeze(struct task_struct *p)
{
 p->flags &= ~0x00004000;
}




static inline  __attribute__((always_inline)) int thaw_process(struct task_struct *p)
{
 if (frozen(p)) {
  p->flags &= ~0x00010000;
  wake_up_process(p);
  return 1;
 }
 return 0;
}




static inline  __attribute__((always_inline)) void frozen_process(struct task_struct *p)
{
 p->flags = (p->flags & ~0x00004000) | 0x00010000;
}

extern void refrigerator(void);
extern int freeze_processes(void);
extern void thaw_processes(void);

static inline  __attribute__((always_inline)) int try_to_freeze(void)
{
 if (freezing(get_nsc_task())) {
  refrigerator();
  return 1;
 } else
  return 0;
}
# 10 "linux-2.6.18/include/linux/module.h" 2


# 1 "linux-2.6.18/include/linux/stat.h" 1





# 1 "linux-2.6.18/include/asm/stat.h" 1





struct stat {
 unsigned long st_dev;
 unsigned long st_ino;
 unsigned long st_nlink;

 unsigned int st_mode;
 unsigned int st_uid;
 unsigned int st_gid;
 unsigned int __pad0;
 unsigned long st_rdev;
 long st_size;
 long st_blksize;
 long st_blocks;

 unsigned long st_atime;
 unsigned long st_atime_nsec;
 unsigned long st_mtime;
 unsigned long st_mtime_nsec;
 unsigned long st_ctime;
 unsigned long st_ctime_nsec;
   long __unused[3];
};


struct __old_kernel_stat {
 unsigned short st_dev;
 unsigned short st_ino;
 unsigned short st_mode;
 unsigned short st_nlink;
 unsigned short st_uid;
 unsigned short st_gid;
 unsigned short st_rdev;
 unsigned int st_size;
 unsigned int st_atime;
 unsigned int st_mtime;
 unsigned int st_ctime;
};
# 7 "linux-2.6.18/include/linux/stat.h" 2
# 59 "linux-2.6.18/include/linux/stat.h"
struct kstat {
 unsigned long ino;
 dev_t dev;
 umode_t mode;
 unsigned int nlink;
 uid_t uid;
 gid_t gid;
 dev_t rdev;
 loff_t size;
 struct timespec atime;
 struct timespec mtime;
 struct timespec ctime;
 unsigned long blksize;
 unsigned long long blocks;
};
# 13 "linux-2.6.18/include/linux/module.h" 2


# 1 "linux-2.6.18/include/linux/kmod.h" 1
# 33 "linux-2.6.18/include/linux/kmod.h"
static inline  __attribute__((always_inline)) int request_module(const char * name, ...) { return -38; }




struct key;
extern int call_usermodehelper_keys(char *path, char *argv[], char *envp[],
        struct key *session_keyring, int wait);

static inline  __attribute__((always_inline)) int
call_usermodehelper(char *path, char **argv, char **envp, int wait)
{
 return call_usermodehelper_keys(path, argv, envp, ((void *)0), wait);
}

extern void usermodehelper_init(void);
# 16 "linux-2.6.18/include/linux/module.h" 2
# 1 "linux-2.6.18/include/linux/elf.h" 1





# 1 "linux-2.6.18/include/linux/elf-em.h" 1
# 7 "linux-2.6.18/include/linux/elf.h" 2
# 1 "linux-2.6.18/include/asm/elf.h" 1
# 9 "linux-2.6.18/include/asm/elf.h"
# 1 "linux-2.6.18/include/asm/user.h" 1
# 50 "linux-2.6.18/include/asm/user.h"
struct user_i387_struct {
 unsigned short cwd;
 unsigned short swd;
 unsigned short twd;
 unsigned short fop;
 __u64 rip;
 __u64 rdp;
 __u32 mxcsr;
 __u32 mxcsr_mask;
 __u32 st_space[32];
 __u32 xmm_space[64];
 __u32 padding[24];
};




struct user_regs_struct {
 unsigned long r15,r14,r13,r12,rbp,rbx,r11,r10;
 unsigned long r9,r8,rax,rcx,rdx,rsi,rdi,orig_rax;
 unsigned long rip,cs,eflags;
 unsigned long rsp,ss;
   unsigned long fs_base, gs_base;
 unsigned long ds,es,fs,gs;
};




struct user{


  struct user_regs_struct regs;

  int u_fpvalid;

  int pad0;
  struct user_i387_struct i387;

  unsigned long int u_tsize;
  unsigned long int u_dsize;
  unsigned long int u_ssize;
  unsigned long start_code;
  unsigned long start_stack;



  long int signal;
  int reserved;
  int pad1;
  struct user_pt_regs * u_ar0;

  struct user_i387_struct* u_fpstate;
  unsigned long magic;
  char u_comm[32];
  unsigned long u_debugreg[8];
  unsigned long error_code;
  unsigned long fault_address;
};
# 10 "linux-2.6.18/include/asm/elf.h" 2
# 32 "linux-2.6.18/include/asm/elf.h"
typedef unsigned long elf_greg_t;


typedef elf_greg_t elf_gregset_t[(sizeof (struct user_regs_struct) / sizeof(elf_greg_t))];

typedef struct user_i387_struct elf_fpregset_t;
# 48 "linux-2.6.18/include/asm/elf.h"
# 1 "linux-2.6.18/include/asm/compat.h" 1
# 12 "linux-2.6.18/include/asm/compat.h"
typedef u32 compat_size_t;
typedef s32 compat_ssize_t;
typedef s32 compat_time_t;
typedef s32 compat_clock_t;
typedef s32 compat_pid_t;
typedef u16 __compat_uid_t;
typedef u16 __compat_gid_t;
typedef u32 __compat_uid32_t;
typedef u32 __compat_gid32_t;
typedef u16 compat_mode_t;
typedef u32 compat_ino_t;
typedef u16 compat_dev_t;
typedef s32 compat_off_t;
typedef s64 compat_loff_t;
typedef u16 compat_nlink_t;
typedef u16 compat_ipc_pid_t;
typedef s32 compat_daddr_t;
typedef u32 compat_caddr_t;
typedef __kernel_fsid_t compat_fsid_t;
typedef s32 compat_timer_t;
typedef s32 compat_key_t;

typedef s32 compat_int_t;
typedef s32 compat_long_t;
typedef u32 compat_uint_t;
typedef u32 compat_ulong_t;

struct compat_timespec {
 compat_time_t tv_sec;
 s32 tv_nsec;
};

struct compat_timeval {
 compat_time_t tv_sec;
 s32 tv_usec;
};

struct compat_stat {
 compat_dev_t st_dev;
 u16 __pad1;
 compat_ino_t st_ino;
 compat_mode_t st_mode;
 compat_nlink_t st_nlink;
 __compat_uid_t st_uid;
 __compat_gid_t st_gid;
 compat_dev_t st_rdev;
 u16 __pad2;
 u32 st_size;
 u32 st_blksize;
 u32 st_blocks;
 u32 st_atime;
 u32 st_atime_nsec;
 u32 st_mtime;
 u32 st_mtime_nsec;
 u32 st_ctime;
 u32 st_ctime_nsec;
 u32 __unused4;
 u32 __unused5;
};

struct compat_flock {
 short l_type;
 short l_whence;
 compat_off_t l_start;
 compat_off_t l_len;
 compat_pid_t l_pid;
};
# 88 "linux-2.6.18/include/asm/compat.h"
struct compat_flock64 {
 short l_type;
 short l_whence;
 compat_loff_t l_start;
 compat_loff_t l_len;
 compat_pid_t l_pid;
} __attribute__((packed)) ;

struct compat_statfs {
 int f_type;
 int f_bsize;
 int f_blocks;
 int f_bfree;
 int f_bavail;
 int f_files;
 int f_ffree;
 compat_fsid_t f_fsid;
 int f_namelen;
 int f_frsize;
 int f_spare[5];
};




typedef u32 compat_old_sigset_t;




typedef u32 compat_sigset_word;




struct compat_ipc64_perm {
 compat_key_t key;
 __compat_uid32_t uid;
 __compat_gid32_t gid;
 __compat_uid32_t cuid;
 __compat_gid32_t cgid;
 unsigned short mode;
 unsigned short __pad1;
 unsigned short seq;
 unsigned short __pad2;
 compat_ulong_t unused1;
 compat_ulong_t unused2;
};

struct compat_semid64_ds {
 struct compat_ipc64_perm sem_perm;
 compat_time_t sem_otime;
 compat_ulong_t __unused1;
 compat_time_t sem_ctime;
 compat_ulong_t __unused2;
 compat_ulong_t sem_nsems;
 compat_ulong_t __unused3;
 compat_ulong_t __unused4;
};

struct compat_msqid64_ds {
 struct compat_ipc64_perm msg_perm;
 compat_time_t msg_stime;
 compat_ulong_t __unused1;
 compat_time_t msg_rtime;
 compat_ulong_t __unused2;
 compat_time_t msg_ctime;
 compat_ulong_t __unused3;
 compat_ulong_t msg_cbytes;
 compat_ulong_t msg_qnum;
 compat_ulong_t msg_qbytes;
 compat_pid_t msg_lspid;
 compat_pid_t msg_lrpid;
 compat_ulong_t __unused4;
 compat_ulong_t __unused5;
};

struct compat_shmid64_ds {
 struct compat_ipc64_perm shm_perm;
 compat_size_t shm_segsz;
 compat_time_t shm_atime;
 compat_ulong_t __unused1;
 compat_time_t shm_dtime;
 compat_ulong_t __unused2;
 compat_time_t shm_ctime;
 compat_ulong_t __unused3;
 compat_pid_t shm_cpid;
 compat_pid_t shm_lpid;
 compat_ulong_t shm_nattch;
 compat_ulong_t __unused4;
 compat_ulong_t __unused5;
};







typedef u32 compat_uptr_t;

static inline  __attribute__((always_inline)) void *compat_ptr(compat_uptr_t uptr)
{
 return (void *)(unsigned long)uptr;
}

static inline  __attribute__((always_inline)) compat_uptr_t ptr_to_compat(void *uptr)
{
 return (u32)(unsigned long)uptr;
}

static __inline__  __attribute__((always_inline)) void *compat_alloc_user_space(long len)
{
 struct pt_regs *regs = ((struct pt_regs *)(get_nsc_task())->thread.rsp0 - 1);
 return (void *)regs->rsp - len;
}

static inline  __attribute__((always_inline)) int is_compat_task(void)
{
 return current_thread_info()->status & 0x0002;
}
# 49 "linux-2.6.18/include/asm/elf.h" 2
# 147 "linux-2.6.18/include/asm/elf.h"
extern void set_personality_64bit(void);







struct task_struct;

extern int dump_task_regs (struct task_struct *, elf_gregset_t *);
extern int dump_task_fpu (struct task_struct *, elf_fpregset_t *);
# 8 "linux-2.6.18/include/linux/elf.h" 2
# 17 "linux-2.6.18/include/linux/elf.h"
typedef __u32 Elf32_Addr;
typedef __u16 Elf32_Half;
typedef __u32 Elf32_Off;
typedef __s32 Elf32_Sword;
typedef __u32 Elf32_Word;


typedef __u64 Elf64_Addr;
typedef __u16 Elf64_Half;
typedef __s16 Elf64_SHalf;
typedef __u64 Elf64_Off;
typedef __s32 Elf64_Sword;
typedef __u32 Elf64_Word;
typedef __u64 Elf64_Xword;
typedef __s64 Elf64_Sxword;
# 107 "linux-2.6.18/include/linux/elf.h"
typedef struct dynamic{
  Elf32_Sword d_tag;
  union{
    Elf32_Sword d_val;
    Elf32_Addr d_ptr;
  } d_un;
} Elf32_Dyn;

typedef struct {
  Elf64_Sxword d_tag;
  union {
    Elf64_Xword d_val;
    Elf64_Addr d_ptr;
  } d_un;
} Elf64_Dyn;
# 130 "linux-2.6.18/include/linux/elf.h"
typedef struct elf32_rel {
  Elf32_Addr r_offset;
  Elf32_Word r_info;
} Elf32_Rel;

typedef struct elf64_rel {
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
} Elf64_Rel;

typedef struct elf32_rela{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
  Elf32_Sword r_addend;
} Elf32_Rela;

typedef struct elf64_rela {
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
  Elf64_Sxword r_addend;
} Elf64_Rela;

typedef struct elf32_sym{
  Elf32_Word st_name;
  Elf32_Addr st_value;
  Elf32_Word st_size;
  unsigned char st_info;
  unsigned char st_other;
  Elf32_Half st_shndx;
} Elf32_Sym;

typedef struct elf64_sym {
  Elf64_Word st_name;
  unsigned char st_info;
  unsigned char st_other;
  Elf64_Half st_shndx;
  Elf64_Addr st_value;
  Elf64_Xword st_size;
} Elf64_Sym;




typedef struct elf32_hdr{
  unsigned char e_ident[16];
  Elf32_Half e_type;
  Elf32_Half e_machine;
  Elf32_Word e_version;
  Elf32_Addr e_entry;
  Elf32_Off e_phoff;
  Elf32_Off e_shoff;
  Elf32_Word e_flags;
  Elf32_Half e_ehsize;
  Elf32_Half e_phentsize;
  Elf32_Half e_phnum;
  Elf32_Half e_shentsize;
  Elf32_Half e_shnum;
  Elf32_Half e_shstrndx;
} Elf32_Ehdr;

typedef struct elf64_hdr {
  unsigned char e_ident[16];
  Elf64_Half e_type;
  Elf64_Half e_machine;
  Elf64_Word e_version;
  Elf64_Addr e_entry;
  Elf64_Off e_phoff;
  Elf64_Off e_shoff;
  Elf64_Word e_flags;
  Elf64_Half e_ehsize;
  Elf64_Half e_phentsize;
  Elf64_Half e_phnum;
  Elf64_Half e_shentsize;
  Elf64_Half e_shnum;
  Elf64_Half e_shstrndx;
} Elf64_Ehdr;







typedef struct elf32_phdr{
  Elf32_Word p_type;
  Elf32_Off p_offset;
  Elf32_Addr p_vaddr;
  Elf32_Addr p_paddr;
  Elf32_Word p_filesz;
  Elf32_Word p_memsz;
  Elf32_Word p_flags;
  Elf32_Word p_align;
} Elf32_Phdr;

typedef struct elf64_phdr {
  Elf64_Word p_type;
  Elf64_Word p_flags;
  Elf64_Off p_offset;
  Elf64_Addr p_vaddr;
  Elf64_Addr p_paddr;
  Elf64_Xword p_filesz;
  Elf64_Xword p_memsz;
  Elf64_Xword p_align;
} Elf64_Phdr;
# 269 "linux-2.6.18/include/linux/elf.h"
typedef struct {
  Elf32_Word sh_name;
  Elf32_Word sh_type;
  Elf32_Word sh_flags;
  Elf32_Addr sh_addr;
  Elf32_Off sh_offset;
  Elf32_Word sh_size;
  Elf32_Word sh_link;
  Elf32_Word sh_info;
  Elf32_Word sh_addralign;
  Elf32_Word sh_entsize;
} Elf32_Shdr;

typedef struct elf64_shdr {
  Elf64_Word sh_name;
  Elf64_Word sh_type;
  Elf64_Xword sh_flags;
  Elf64_Addr sh_addr;
  Elf64_Off sh_offset;
  Elf64_Xword sh_size;
  Elf64_Word sh_link;
  Elf64_Word sh_info;
  Elf64_Xword sh_addralign;
  Elf64_Xword sh_entsize;
} Elf64_Shdr;
# 342 "linux-2.6.18/include/linux/elf.h"
typedef struct elf32_note {
  Elf32_Word n_namesz;
  Elf32_Word n_descsz;
  Elf32_Word n_type;
} Elf32_Nhdr;


typedef struct elf64_note {
  Elf64_Word n_namesz;
  Elf64_Word n_descsz;
  Elf64_Word n_type;
} Elf64_Nhdr;
# 364 "linux-2.6.18/include/linux/elf.h"
typedef  Elf64_Dyn  _GLOBAL_114_T; extern  _GLOBAL_114_T  _GLOBAL_0__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_1__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_2__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_3__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_4__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_5__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_6__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_7__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_8__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_9__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_10__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_11__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_12__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_13__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_14__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_15__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_16__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_17__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_18__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_19__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_20__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_21__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_22__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_23__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_24__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_25__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_26__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_27__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_28__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_29__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_30__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_31__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_32__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_33__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_34__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_35__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_36__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_37__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_38__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_39__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_40__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_41__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_42__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_43__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_44__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_45__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_46__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_47__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_48__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_49__DYNAMIC_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__DYNAMIC_I) *_GLOBAL__DYNAMIC_13_A[NUM_STACKS];   
# 17 "linux-2.6.18/include/linux/module.h" 2


# 1 "linux-2.6.18/include/linux/moduleparam.h" 1
# 29 "linux-2.6.18/include/linux/moduleparam.h"
struct kernel_param;


typedef int (*param_set_fn)(const char *val, struct kernel_param *kp);

typedef int (*param_get_fn)(char *buffer, struct kernel_param *kp);

struct kernel_param {
 const char *name;
 unsigned int perm;
 param_set_fn set;
 param_get_fn get;
 void *arg;
};


struct kparam_string {
 unsigned int maxlen;
 char *string;
};


struct kparam_array
{
 unsigned int max;
 unsigned int *num;
 param_set_fn set;
 param_get_fn get;
 unsigned int elemsize;
 void *elem;
};
# 95 "linux-2.6.18/include/linux/moduleparam.h"
extern int parse_args(const char *name,
        char *args,
        struct kernel_param *params,
        unsigned num,
        int (*unknown)(char *param, char *val));







extern int param_set_byte(const char *val, struct kernel_param *kp);
extern int param_get_byte(char *buffer, struct kernel_param *kp);


extern int param_set_short(const char *val, struct kernel_param *kp);
extern int param_get_short(char *buffer, struct kernel_param *kp);


extern int param_set_ushort(const char *val, struct kernel_param *kp);
extern int param_get_ushort(char *buffer, struct kernel_param *kp);


extern int param_set_int(const char *val, struct kernel_param *kp);
extern int param_get_int(char *buffer, struct kernel_param *kp);


extern int param_set_uint(const char *val, struct kernel_param *kp);
extern int param_get_uint(char *buffer, struct kernel_param *kp);


extern int param_set_long(const char *val, struct kernel_param *kp);
extern int param_get_long(char *buffer, struct kernel_param *kp);


extern int param_set_ulong(const char *val, struct kernel_param *kp);
extern int param_get_ulong(char *buffer, struct kernel_param *kp);


extern int param_set_charp(const char *val, struct kernel_param *kp);
extern int param_get_charp(char *buffer, struct kernel_param *kp);


extern int param_set_bool(const char *val, struct kernel_param *kp);
extern int param_get_bool(char *buffer, struct kernel_param *kp);


extern int param_set_invbool(const char *val, struct kernel_param *kp);
extern int param_get_invbool(char *buffer, struct kernel_param *kp);
# 159 "linux-2.6.18/include/linux/moduleparam.h"
extern int param_array_set(const char *val, struct kernel_param *kp);
extern int param_array_get(char *buffer, struct kernel_param *kp);

extern int param_set_copystring(const char *val, struct kernel_param *kp);
extern int param_get_string(char *buffer, struct kernel_param *kp);



struct module;

extern int module_param_sysfs_setup(struct module *mod,
        struct kernel_param *kparam,
        unsigned int num_params);

extern void module_param_sysfs_remove(struct module *mod);
# 20 "linux-2.6.18/include/linux/module.h" 2
# 1 "linux-2.6.18/include/asm/local.h" 1





typedef struct
{
 volatile long counter;
} local_t;






static inline  __attribute__((always_inline)) void local_inc(local_t *v)
{
 __asm__ __volatile__(
  "incq %0"
  :"=m" (v->counter)
  :"m" (v->counter));
}

static inline  __attribute__((always_inline)) void local_dec(local_t *v)
{
 __asm__ __volatile__(
  "decq %0"
  :"=m" (v->counter)
  :"m" (v->counter));
}

static inline  __attribute__((always_inline)) void local_add(long i, local_t *v)
{
 __asm__ __volatile__(
  "addq %1,%0"
  :"=m" (v->counter)
  :"ir" (i), "m" (v->counter));
}

static inline  __attribute__((always_inline)) void local_sub(long i, local_t *v)
{
 __asm__ __volatile__(
  "subq %1,%0"
  :"=m" (v->counter)
  :"ir" (i), "m" (v->counter));
}
# 21 "linux-2.6.18/include/linux/module.h" 2

# 1 "linux-2.6.18/include/asm/module.h" 1



struct mod_arch_specific {};
# 23 "linux-2.6.18/include/linux/module.h" 2
# 34 "linux-2.6.18/include/linux/module.h"
struct kernel_symbol
{
 unsigned long value;
 const char *name;
};

struct modversion_info
{
 unsigned long crc;
 char name[(64 - sizeof(unsigned long))];
};

struct module;

struct module_attribute {
        struct attribute attr;
        ssize_t (*show)(struct module_attribute *, struct module *, char *);
        ssize_t (*store)(struct module_attribute *, struct module *,
    const char *, size_t count);
 void (*setup)(struct module *, const char *);
 int (*test)(struct module *);
 void (*free)(struct module *);
};

struct module_kobject
{
 struct kobject kobj;
 struct module *mod;
};


extern int init_module(void);
extern void cleanup_module(void);


struct exception_table_entry;

const struct exception_table_entry *
search_extable(const struct exception_table_entry *first,
        const struct exception_table_entry *last,
        unsigned long value);
void sort_extable(struct exception_table_entry *start,
    struct exception_table_entry *finish);
void sort_main_extable(void);

typedef  struct subsystem   _GLOBAL_115_T; extern  _GLOBAL_115_T  global_module_subsys[NUM_STACKS];    
# 160 "linux-2.6.18/include/linux/module.h"
const struct exception_table_entry *search_exception_tables(unsigned long add);

struct notifier_block;
# 480 "linux-2.6.18/include/linux/module.h"
static inline  __attribute__((always_inline)) const struct exception_table_entry *
search_module_extables(unsigned long addr)
{
 return ((void *)0);
}


static inline  __attribute__((always_inline)) struct module *module_text_address(unsigned long addr)
{
 return ((void *)0);
}


static inline  __attribute__((always_inline)) struct module *__module_text_address(unsigned long addr)
{
 return ((void *)0);
}

static inline  __attribute__((always_inline)) int is_module_address(unsigned long addr)
{
 return 0;
}






static inline  __attribute__((always_inline)) void __module_get(struct module *module)
{
}

static inline  __attribute__((always_inline)) int try_module_get(struct module *module)
{
 return 1;
}

static inline  __attribute__((always_inline)) void module_put(struct module *module)
{
}






static inline  __attribute__((always_inline)) const char *module_address_lookup(unsigned long addr,
      unsigned long *symbolsize,
      unsigned long *offset,
      char **modname)
{
 return ((void *)0);
}

static inline  __attribute__((always_inline)) struct module *module_get_kallsym(unsigned int symnum,
      unsigned long *value,
      char *type, char *name,
      size_t namelen)
{
 return ((void *)0);
}

static inline  __attribute__((always_inline)) unsigned long module_kallsyms_lookup_name(const char *name)
{
 return 0;
}

static inline  __attribute__((always_inline)) int is_exported(const char *name, const struct module *mod)
{
 return 0;
}

static inline  __attribute__((always_inline)) int register_module_notifier(struct notifier_block * nb)
{

 return 0;
}

static inline  __attribute__((always_inline)) int unregister_module_notifier(struct notifier_block * nb)
{
 return 0;
}



static inline  __attribute__((always_inline)) void print_modules(void)
{
}

struct device_driver;
struct module;

static inline  __attribute__((always_inline)) void module_add_driver(struct module *module, struct device_driver *driver)
{
}

static inline  __attribute__((always_inline)) void module_remove_driver(struct device_driver *driver)
{
}
# 22 "linux-2.6.18/kernel/sysctl.c" 2
# 1 "linux-2.6.18/include/linux/mm.h" 1
# 14 "linux-2.6.18/include/linux/mm.h"
# 1 "linux-2.6.18/include/linux/prio_tree.h" 1
# 14 "linux-2.6.18/include/linux/prio_tree.h"
struct raw_prio_tree_node {
 struct prio_tree_node *left;
 struct prio_tree_node *right;
 struct prio_tree_node *parent;
};

struct prio_tree_node {
 struct prio_tree_node *left;
 struct prio_tree_node *right;
 struct prio_tree_node *parent;
 unsigned long start;
 unsigned long last;
};

struct prio_tree_root {
 struct prio_tree_node *prio_tree_node;
 unsigned short index_bits;
 unsigned short raw;




};

struct prio_tree_iter {
 struct prio_tree_node *cur;
 unsigned long mask;
 unsigned long value;
 int size_level;

 struct prio_tree_root *root;
 unsigned long r_index;
 unsigned long h_index;
};

static inline  __attribute__((always_inline)) void prio_tree_iter_init(struct prio_tree_iter *iter,
  struct prio_tree_root *root, unsigned long r_index, unsigned long h_index)
{
 iter->root = root;
 iter->r_index = r_index;
 iter->h_index = h_index;
 iter->cur = ((void *)0);
}
# 84 "linux-2.6.18/include/linux/prio_tree.h"
static inline  __attribute__((always_inline)) int prio_tree_empty(const struct prio_tree_root *root)
{
 return root->prio_tree_node == ((void *)0);
}

static inline  __attribute__((always_inline)) int prio_tree_root(const struct prio_tree_node *node)
{
 return node->parent == node;
}

static inline  __attribute__((always_inline)) int prio_tree_left_empty(const struct prio_tree_node *node)
{
 return node->left == node;
}

static inline  __attribute__((always_inline)) int prio_tree_right_empty(const struct prio_tree_node *node)
{
 return node->right == node;
}


struct prio_tree_node *prio_tree_replace(struct prio_tree_root *root,
                struct prio_tree_node *old, struct prio_tree_node *node);
struct prio_tree_node *prio_tree_insert(struct prio_tree_root *root,
                struct prio_tree_node *node);
void prio_tree_remove(struct prio_tree_root *root, struct prio_tree_node *node);
struct prio_tree_node *prio_tree_next(struct prio_tree_iter *iter);
# 15 "linux-2.6.18/include/linux/mm.h" 2
# 1 "linux-2.6.18/include/linux/fs.h" 1
# 9 "linux-2.6.18/include/linux/fs.h"
# 1 "linux-2.6.18/include/linux/limits.h" 1
# 10 "linux-2.6.18/include/linux/fs.h" 2
# 1 "linux-2.6.18/include/linux/ioctl.h" 1



# 1 "linux-2.6.18/include/asm/ioctl.h" 1
# 1 "linux-2.6.18/include/asm-generic/ioctl.h" 1
# 51 "linux-2.6.18/include/asm-generic/ioctl.h"
typedef  unsigned int   _GLOBAL_116_T; extern  _GLOBAL_116_T  global___invalid_size_argument_for_IOC[NUM_STACKS];    
# 1 "linux-2.6.18/include/asm/ioctl.h" 2
# 5 "linux-2.6.18/include/linux/ioctl.h" 2
# 11 "linux-2.6.18/include/linux/fs.h" 2
# 35 "linux-2.6.18/include/linux/fs.h"
struct files_stat_struct {
 int nr_files;
 int nr_free_files;
 int max_files;
};
typedef  struct files_stat_struct   _GLOBAL_117_T; extern  _GLOBAL_117_T  global_files_stat[NUM_STACKS];    
extern int get_max_files(void);

struct inodes_stat_t {
 int nr_inodes;
 int nr_unused;
 int dummy[5];
};
typedef  struct inodes_stat_t   _GLOBAL_118_T; extern  _GLOBAL_118_T  global_inodes_stat[NUM_STACKS];    

typedef  int  _GLOBAL_119_T; extern  _GLOBAL_119_T  global_leases_enable[NUM_STACKS]; extern  _GLOBAL_119_T  global_lease_break_time[NUM_STACKS];    
# 228 "linux-2.6.18/include/linux/fs.h"
# 1 "linux-2.6.18/include/linux/kdev_t.h" 1
# 21 "linux-2.6.18/include/linux/kdev_t.h"
static inline  __attribute__((always_inline)) int old_valid_dev(dev_t dev)
{
 return ((unsigned int) ((dev) >> 20)) < 256 && ((unsigned int) ((dev) & ((1U << 20) - 1))) < 256;
}

static inline  __attribute__((always_inline)) u16 old_encode_dev(dev_t dev)
{
 return (((unsigned int) ((dev) >> 20)) << 8) | ((unsigned int) ((dev) & ((1U << 20) - 1)));
}

static inline  __attribute__((always_inline)) dev_t old_decode_dev(u16 val)
{
 return ((((val >> 8) & 255) << 20) | (val & 255));
}

static inline  __attribute__((always_inline)) int new_valid_dev(dev_t dev)
{
 return 1;
}

static inline  __attribute__((always_inline)) u32 new_encode_dev(dev_t dev)
{
 unsigned major = ((unsigned int) ((dev) >> 20));
 unsigned minor = ((unsigned int) ((dev) & ((1U << 20) - 1)));
 return (minor & 0xff) | (major << 8) | ((minor & ~0xff) << 12);
}

static inline  __attribute__((always_inline)) dev_t new_decode_dev(u32 dev)
{
 unsigned major = (dev & 0xfff00) >> 8;
 unsigned minor = (dev & 0xff) | ((dev >> 12) & 0xfff00);
 return (((major) << 20) | (minor));
}

static inline  __attribute__((always_inline)) int huge_valid_dev(dev_t dev)
{
 return 1;
}

static inline  __attribute__((always_inline)) u64 huge_encode_dev(dev_t dev)
{
 return new_encode_dev(dev);
}

static inline  __attribute__((always_inline)) dev_t huge_decode_dev(u64 dev)
{
 return new_decode_dev(dev);
}

static inline  __attribute__((always_inline)) int sysv_valid_dev(dev_t dev)
{
 return ((unsigned int) ((dev) >> 20)) < (1<<14) && ((unsigned int) ((dev) & ((1U << 20) - 1))) < (1<<18);
}

static inline  __attribute__((always_inline)) u32 sysv_encode_dev(dev_t dev)
{
 return ((unsigned int) ((dev) & ((1U << 20) - 1))) | (((unsigned int) ((dev) >> 20)) << 18);
}

static inline  __attribute__((always_inline)) unsigned sysv_major(u32 dev)
{
 return (dev >> 18) & 0x3fff;
}

static inline  __attribute__((always_inline)) unsigned sysv_minor(u32 dev)
{
 return dev & 0x3ffff;
}
# 229 "linux-2.6.18/include/linux/fs.h" 2
# 1 "linux-2.6.18/include/linux/dcache.h" 1
# 12 "linux-2.6.18/include/linux/dcache.h"
struct nameidata;
struct vfsmount;
# 33 "linux-2.6.18/include/linux/dcache.h"
struct qstr {
 unsigned int hash;
 unsigned int len;
 const unsigned char *name;
};

struct dentry_stat_t {
 int nr_dentry;
 int nr_unused;
 int age_limit;
 int want_pages;
 int dummy[2];
};
typedef  struct dentry_stat_t   _GLOBAL_120_T; extern  _GLOBAL_120_T  global_dentry_stat[NUM_STACKS];    






static inline  __attribute__((always_inline)) unsigned long
partial_name_hash(unsigned long c, unsigned long prevhash)
{
 return (prevhash + (c << 4) + (c >> 4)) * 11;
}





static inline  __attribute__((always_inline)) unsigned long end_name_hash(unsigned long hash)
{
 return (unsigned int) hash;
}


static inline  __attribute__((always_inline)) unsigned int
full_name_hash(const unsigned char *name, unsigned int len)
{
 unsigned long hash = 0;
 while (len--)
  hash = partial_name_hash(*name++, hash);
 return end_name_hash(hash);
}

struct dcookie_struct;



struct dentry {
 atomic_t d_count;
 unsigned int d_flags;
 spinlock_t d_lock;
 struct inode *d_inode;





 struct hlist_node d_hash;
 struct dentry *d_parent;
 struct qstr d_name;

 struct list_head d_lru;



 union {
  struct list_head d_child;
   struct rcu_head d_rcu;
 } d_u;
 struct list_head d_subdirs;
 struct list_head d_alias;
 unsigned long d_time;
 struct dentry_operations *d_op;
 struct super_block *d_sb;
 void *d_fsdata;

 struct dcookie_struct *d_cookie;

 int d_mounted;
 unsigned char d_iname[36];
};







enum dentry_d_lock_class
{
 DENTRY_D_LOCK_NORMAL,
 DENTRY_D_LOCK_NESTED
};

struct dentry_operations {
 int (*d_revalidate)(struct dentry *, struct nameidata *);
 int (*d_hash) (struct dentry *, struct qstr *);
 int (*d_compare) (struct dentry *, struct qstr *, struct qstr *);
 int (*d_delete)(struct dentry *);
 void (*d_release)(struct dentry *);
 void (*d_iput)(struct dentry *, struct inode *);
};
# 179 "linux-2.6.18/include/linux/dcache.h"
typedef  spinlock_t  _GLOBAL_121_T; extern  _GLOBAL_121_T  global_dcache_lock[NUM_STACKS];   
# 197 "linux-2.6.18/include/linux/dcache.h"
static inline  __attribute__((always_inline)) void __d_drop(struct dentry *dentry)
{
 if (!(dentry->d_flags & 0x0010)) {
  dentry->d_flags |= 0x0010;
  hlist_del_rcu(&dentry->d_hash);
 }
}

static inline  __attribute__((always_inline)) void d_drop(struct dentry *dentry)
{
 do { do { } while (0); (void)0; (void)(&global_dcache_lock[get_stack_id()]); } while (0);
 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
  __d_drop(dentry);
 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 do { do { } while (0); (void)0; (void)(&global_dcache_lock[get_stack_id()]); } while (0);
}

static inline  __attribute__((always_inline)) int dname_external(struct dentry *dentry)
{
 return dentry->d_name.name != dentry->d_iname;
}




extern void d_instantiate(struct dentry *, struct inode *);
extern struct dentry * d_instantiate_unique(struct dentry *, struct inode *);
extern void d_delete(struct dentry *);


extern struct dentry * d_alloc(struct dentry *, const struct qstr *);
extern struct dentry * d_alloc_anon(struct inode *);
extern struct dentry * d_splice_alias(struct inode *, struct dentry *);
extern void shrink_dcache_sb(struct super_block *);
extern void shrink_dcache_parent(struct dentry *);
extern int d_invalidate(struct dentry *);


extern struct dentry * d_alloc_root(struct inode *);


extern void d_genocide(struct dentry *);

extern struct dentry *d_find_alias(struct inode *);
extern void d_prune_aliases(struct inode *);


extern int have_submounts(struct dentry *);




extern void d_rehash(struct dentry *);
# 260 "linux-2.6.18/include/linux/dcache.h"
static inline  __attribute__((always_inline)) void d_add(struct dentry *entry, struct inode *inode)
{
 d_instantiate(entry, inode);
 d_rehash(entry);
}
# 274 "linux-2.6.18/include/linux/dcache.h"
static inline  __attribute__((always_inline)) struct dentry *d_add_unique(struct dentry *entry, struct inode *inode)
{
 struct dentry *res;

 res = d_instantiate_unique(entry, inode);
 d_rehash(res != ((void *)0) ? res : entry);
 return res;
}


extern void d_move(struct dentry *, struct dentry *);


extern struct dentry * d_lookup(struct dentry *, struct qstr *);
extern struct dentry * __d_lookup(struct dentry *, struct qstr *);
extern struct dentry * d_hash_and_lookup(struct dentry *, struct qstr *);


extern int d_validate(struct dentry *, struct dentry *);

extern char * d_path(struct dentry *, struct vfsmount *, char *, int);
# 311 "linux-2.6.18/include/linux/dcache.h"
static inline  __attribute__((always_inline)) struct dentry *dget(struct dentry *dentry)
{
 if (dentry) {
  do { if (!((&dentry->d_count)->counter)) ; } while(0);
  atomic_inc(&dentry->d_count);
 }
 return dentry;
}

extern struct dentry * dget_locked(struct dentry *);
# 329 "linux-2.6.18/include/linux/dcache.h"
static inline  __attribute__((always_inline)) int d_unhashed(struct dentry *dentry)
{
 return (dentry->d_flags & 0x0010);
}

static inline  __attribute__((always_inline)) struct dentry *dget_parent(struct dentry *dentry)
{
 struct dentry *ret;

 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 ret = dget(dentry->d_parent);
 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 return ret;
}

extern void dput(struct dentry *);

static inline  __attribute__((always_inline)) int d_mountpoint(struct dentry *dentry)
{
 return dentry->d_mounted;
}

extern struct vfsmount *lookup_mnt(struct vfsmount *, struct dentry *);
extern struct vfsmount *__lookup_mnt(struct vfsmount *, struct dentry *, int);
extern struct dentry *lookup_create(struct nameidata *nd, int is_dir);

typedef  int  _GLOBAL_122_T; extern  _GLOBAL_122_T  global_sysctl_vfs_cache_pressure[NUM_STACKS];   
# 230 "linux-2.6.18/include/linux/fs.h" 2




# 1 "linux-2.6.18/include/linux/radix-tree.h" 1
# 29 "linux-2.6.18/include/linux/radix-tree.h"
struct radix_tree_root {
 unsigned int height;
 gfp_t gfp_mask;
 struct radix_tree_node *rnode;
};
# 51 "linux-2.6.18/include/linux/radix-tree.h"
int radix_tree_insert(struct radix_tree_root *, unsigned long, void *);
void *radix_tree_lookup(struct radix_tree_root *, unsigned long);
void **radix_tree_lookup_slot(struct radix_tree_root *, unsigned long);
void *radix_tree_delete(struct radix_tree_root *, unsigned long);
unsigned int
radix_tree_gang_lookup(struct radix_tree_root *root, void **results,
   unsigned long first_index, unsigned int max_items);
int radix_tree_preload(gfp_t gfp_mask);
void radix_tree_init(void);
void *radix_tree_tag_set(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
void *radix_tree_tag_clear(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
int radix_tree_tag_get(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
unsigned int
radix_tree_gang_lookup_tag(struct radix_tree_root *root, void **results,
  unsigned long first_index, unsigned int max_items,
  unsigned int tag);
int radix_tree_tagged(struct radix_tree_root *root, unsigned int tag);

static inline  __attribute__((always_inline)) void radix_tree_preload_end(void)
{
 do { } while (0);
}
# 235 "linux-2.6.18/include/linux/fs.h" 2
# 244 "linux-2.6.18/include/linux/fs.h"
struct hd_geometry;
struct iovec;
struct nameidata;
struct kiocb;
struct pipe_inode_info;
struct poll_table_struct;
struct kstatfs;
struct vm_area_struct;
struct vfsmount;

extern void  __attribute__ ((__section__ (".init.text"))) inode_init(unsigned long);
extern void  __attribute__ ((__section__ (".init.text"))) inode_init_early(void);
extern void  __attribute__ ((__section__ (".init.text"))) mnt_init(unsigned long);
extern void  __attribute__ ((__section__ (".init.text"))) files_init(unsigned long);

struct buffer_head;
typedef int (get_block_t)(struct inode *inode, sector_t iblock,
   struct buffer_head *bh_result, int create);
typedef void (dio_iodone_t)(struct kiocb *iocb, loff_t offset,
   ssize_t bytes, void *private);
# 293 "linux-2.6.18/include/linux/fs.h"
struct iattr {
 unsigned int ia_valid;
 umode_t ia_mode;
 uid_t ia_uid;
 gid_t ia_gid;
 loff_t ia_size;
 struct timespec ia_atime;
 struct timespec ia_mtime;
 struct timespec ia_ctime;






 struct file *ia_file;
};




# 1 "linux-2.6.18/include/linux/quota.h" 1
# 44 "linux-2.6.18/include/linux/quota.h"
typedef __kernel_uid32_t qid_t;
typedef __u64 qsize_t;

typedef  spinlock_t  _GLOBAL_123_T; extern  _GLOBAL_123_T  global_dq_data_lock[NUM_STACKS];   
# 105 "linux-2.6.18/include/linux/quota.h"
struct if_dqblk {
 __u64 dqb_bhardlimit;
 __u64 dqb_bsoftlimit;
 __u64 dqb_curspace;
 __u64 dqb_ihardlimit;
 __u64 dqb_isoftlimit;
 __u64 dqb_curinodes;
 __u64 dqb_btime;
 __u64 dqb_itime;
 __u32 dqb_valid;
};
# 126 "linux-2.6.18/include/linux/quota.h"
struct if_dqinfo {
 __u64 dqi_bgrace;
 __u64 dqi_igrace;
 __u32 dqi_flags;
 __u32 dqi_valid;
};





# 1 "linux-2.6.18/include/linux/dqblk_xfs.h" 1
# 50 "linux-2.6.18/include/linux/dqblk_xfs.h"
typedef struct fs_disk_quota {
 __s8 d_version;
 __s8 d_flags;
 __u16 d_fieldmask;
 __u32 d_id;
 __u64 d_blk_hardlimit;
 __u64 d_blk_softlimit;
 __u64 d_ino_hardlimit;
 __u64 d_ino_softlimit;
 __u64 d_bcount;
 __u64 d_icount;
 __s32 d_itimer;

 __s32 d_btimer;
 __u16 d_iwarns;
 __u16 d_bwarns;
 __s32 d_padding2;
 __u64 d_rtb_hardlimit;
 __u64 d_rtb_softlimit;
 __u64 d_rtbcount;
 __s32 d_rtbtimer;
 __u16 d_rtbwarns;
 __s16 d_padding3;
 char d_padding4[8];
} fs_disk_quota_t;
# 137 "linux-2.6.18/include/linux/dqblk_xfs.h"
typedef struct fs_qfilestat {
 __u64 qfs_ino;
 __u64 qfs_nblks;
 __u32 qfs_nextents;
} fs_qfilestat_t;

typedef struct fs_quota_stat {
 __s8 qs_version;
 __u16 qs_flags;
 __s8 qs_pad;
 fs_qfilestat_t qs_uquota;
 fs_qfilestat_t qs_gquota;
 __u32 qs_incoredqs;
 __s32 qs_btimelimit;
 __s32 qs_itimelimit;
 __s32 qs_rtbtimelimit;
 __u16 qs_bwarnlimit;
 __u16 qs_iwarnlimit;
} fs_quota_stat_t;
# 138 "linux-2.6.18/include/linux/quota.h" 2
# 1 "linux-2.6.18/include/linux/dqblk_v1.h" 1
# 21 "linux-2.6.18/include/linux/dqblk_v1.h"
struct v1_mem_dqinfo {
};
# 139 "linux-2.6.18/include/linux/quota.h" 2
# 1 "linux-2.6.18/include/linux/dqblk_v2.h" 1
# 20 "linux-2.6.18/include/linux/dqblk_v2.h"
struct v2_mem_dqinfo {
 unsigned int dqi_blocks;
 unsigned int dqi_free_blk;
 unsigned int dqi_free_entry;
};
# 140 "linux-2.6.18/include/linux/quota.h" 2
# 151 "linux-2.6.18/include/linux/quota.h"
struct mem_dqblk {
 __u32 dqb_bhardlimit;
 __u32 dqb_bsoftlimit;
 qsize_t dqb_curspace;
 __u32 dqb_ihardlimit;
 __u32 dqb_isoftlimit;
 __u32 dqb_curinodes;
 time_t dqb_btime;
 time_t dqb_itime;
};




struct quota_format_type;

struct mem_dqinfo {
 struct quota_format_type *dqi_format;
 struct list_head dqi_dirty_list;
 unsigned long dqi_flags;
 unsigned int dqi_bgrace;
 unsigned int dqi_igrace;
 union {
  struct v1_mem_dqinfo v1_i;
  struct v2_mem_dqinfo v2_i;
 } u;
};

struct super_block;





extern void mark_info_dirty(struct super_block *sb, int type);







struct dqstats {
 int lookups;
 int drops;
 int reads;
 int writes;
 int cache_hits;
 int allocated_dquots;
 int free_dquots;
 int syncs;
};

typedef  struct dqstats   _GLOBAL_124_T; extern  _GLOBAL_124_T  global_dqstats[NUM_STACKS];    
# 213 "linux-2.6.18/include/linux/quota.h"
struct dquot {
 struct hlist_node dq_hash;
 struct list_head dq_inuse;
 struct list_head dq_free;
 struct list_head dq_dirty;
 struct mutex dq_lock;
 atomic_t dq_count;
 wait_queue_head_t dq_wait_unused;
 struct super_block *dq_sb;
 unsigned int dq_id;
 loff_t dq_off;
 unsigned long dq_flags;
 short dq_type;
 struct mem_dqblk dq_dqb;
};







struct quota_format_ops {
 int (*check_quota_file)(struct super_block *sb, int type);
 int (*read_file_info)(struct super_block *sb, int type);
 int (*write_file_info)(struct super_block *sb, int type);
 int (*free_file_info)(struct super_block *sb, int type);
 int (*read_dqblk)(struct dquot *dquot);
 int (*commit_dqblk)(struct dquot *dquot);
 int (*release_dqblk)(struct dquot *dquot);
};


struct dquot_operations {
 int (*initialize) (struct inode *, int);
 int (*drop) (struct inode *);
 int (*alloc_space) (struct inode *, qsize_t, int);
 int (*alloc_inode) (const struct inode *, unsigned long);
 int (*free_space) (struct inode *, qsize_t);
 int (*free_inode) (const struct inode *, unsigned long);
 int (*transfer) (struct inode *, struct iattr *);
 int (*write_dquot) (struct dquot *);
 int (*acquire_dquot) (struct dquot *);
 int (*release_dquot) (struct dquot *);
 int (*mark_dirty) (struct dquot *);
 int (*write_info) (struct super_block *, int);
};


struct quotactl_ops {
 int (*quota_on)(struct super_block *, int, int, char *);
 int (*quota_off)(struct super_block *, int);
 int (*quota_sync)(struct super_block *, int);
 int (*get_info)(struct super_block *, int, struct if_dqinfo *);
 int (*set_info)(struct super_block *, int, struct if_dqinfo *);
 int (*get_dqblk)(struct super_block *, int, qid_t, struct if_dqblk *);
 int (*set_dqblk)(struct super_block *, int, qid_t, struct if_dqblk *);
 int (*get_xstate)(struct super_block *, struct fs_quota_stat *);
 int (*set_xstate)(struct super_block *, unsigned int, int);
 int (*get_xquota)(struct super_block *, int, qid_t, struct fs_disk_quota *);
 int (*set_xquota)(struct super_block *, int, qid_t, struct fs_disk_quota *);
};

struct quota_format_type {
 int qf_fmt_id;
 struct quota_format_ops *qf_ops;
 struct module *qf_owner;
 struct quota_format_type *qf_next;
};




struct quota_info {
 unsigned int flags;
 struct mutex dqio_mutex;
 struct mutex dqonoff_mutex;
 struct rw_semaphore dqptr_sem;
 struct inode *files[2];
 struct mem_dqinfo info[2];
 struct quota_format_ops *ops[2];
};


int mark_dquot_dirty(struct dquot *dquot);
# 307 "linux-2.6.18/include/linux/quota.h"
int register_quota_format(struct quota_format_type *fmt);
void unregister_quota_format(struct quota_format_type *fmt);

struct quota_module_name {
 int qm_fmt_id;
 char *qm_mod_name;
};
# 315 "linux-2.6.18/include/linux/fs.h" 2
# 342 "linux-2.6.18/include/linux/fs.h"
enum positive_aop_returns {
 AOP_WRITEPAGE_ACTIVATE = 0x80000,
 AOP_TRUNCATED_PAGE = 0x80001,
};




struct page;
struct address_space;
struct writeback_control;

struct address_space_operations {
 int (*writepage)(struct page *page, struct writeback_control *wbc);
 int (*readpage)(struct file *, struct page *);
 void (*sync_page)(struct page *);


 int (*writepages)(struct address_space *, struct writeback_control *);


 int (*set_page_dirty)(struct page *page);

 int (*readpages)(struct file *filp, struct address_space *mapping,
   struct list_head *pages, unsigned nr_pages);





 int (*prepare_write)(struct file *, struct page *, unsigned, unsigned);
 int (*commit_write)(struct file *, struct page *, unsigned, unsigned);

 sector_t (*bmap)(struct address_space *, sector_t);
 void (*invalidatepage) (struct page *, unsigned long);
 int (*releasepage) (struct page *, gfp_t);
 ssize_t (*direct_IO)(int, struct kiocb *, const struct iovec *iov,
   loff_t offset, unsigned long nr_segs);
 struct page* (*get_xip_page)(struct address_space *, sector_t,
   int);

 int (*migratepage) (struct address_space *,
   struct page *, struct page *);
};

struct backing_dev_info;
struct address_space {
 struct inode *host;
 struct radix_tree_root page_tree;
 rwlock_t tree_lock;
 unsigned int i_mmap_writable;
 struct prio_tree_root i_mmap;
 struct list_head i_mmap_nonlinear;
 spinlock_t i_mmap_lock;
 unsigned int truncate_count;
 unsigned long nrpages;
 unsigned long writeback_index;
 const struct address_space_operations *a_ops;
 unsigned long flags;
 struct backing_dev_info *backing_dev_info;
 spinlock_t private_lock;
 struct list_head private_list;
 struct address_space *assoc_mapping;
} __attribute__((aligned(sizeof(long)))) ;






struct block_device {
 dev_t bd_dev;
 struct inode * bd_inode;
 int bd_openers;
 struct mutex bd_mutex;
 struct mutex bd_mount_mutex;
 struct list_head bd_inodes;
 void * bd_holder;
 int bd_holders;



 struct block_device * bd_contains;
 unsigned bd_block_size;
 struct hd_struct * bd_part;

 unsigned bd_part_count;
 int bd_invalidated;
 struct gendisk * bd_disk;
 struct list_head bd_list;
 struct backing_dev_info *bd_inode_backing_dev_info;






 unsigned long bd_private;
};
# 449 "linux-2.6.18/include/linux/fs.h"
enum bdev_bd_mutex_lock_class
{
 BD_MUTEX_NORMAL,
 BD_MUTEX_WHOLE,
 BD_MUTEX_PARTITION
};
# 464 "linux-2.6.18/include/linux/fs.h"
int mapping_tagged(struct address_space *mapping, int tag);




static inline  __attribute__((always_inline)) int mapping_mapped(struct address_space *mapping)
{
 return !prio_tree_empty(&mapping->i_mmap) ||
  !list_empty(&mapping->i_mmap_nonlinear);
}







static inline  __attribute__((always_inline)) int mapping_writably_mapped(struct address_space *mapping)
{
 return mapping->i_mmap_writable != 0;
}
# 497 "linux-2.6.18/include/linux/fs.h"
struct inode {
 struct hlist_node i_hash;
 struct list_head i_list;
 struct list_head i_sb_list;
 struct list_head i_dentry;
 unsigned long i_ino;
 atomic_t i_count;
 umode_t i_mode;
 unsigned int i_nlink;
 uid_t i_uid;
 gid_t i_gid;
 dev_t i_rdev;
 loff_t i_size;
 struct timespec i_atime;
 struct timespec i_mtime;
 struct timespec i_ctime;
 unsigned int i_blkbits;
 unsigned long i_blksize;
 unsigned long i_version;
 blkcnt_t i_blocks;
 unsigned short i_bytes;
 spinlock_t i_lock;
 struct mutex i_mutex;
 struct rw_semaphore i_alloc_sem;
 struct inode_operations *i_op;
 const struct file_operations *i_fop;
 struct super_block *i_sb;
 struct file_lock *i_flock;
 struct address_space *i_mapping;
 struct address_space i_data;




 struct list_head i_devices;
 struct pipe_inode_info *i_pipe;
 struct block_device *i_bdev;
 struct cdev *i_cdev;
 int i_cindex;

 __u32 i_generation;
# 549 "linux-2.6.18/include/linux/fs.h"
 unsigned long i_state;
 unsigned long dirtied_when;

 unsigned int i_flags;

 atomic_t i_writecount;
 void *i_security;
 union {
  void *generic_ip;
 } u;



};
# 575 "linux-2.6.18/include/linux/fs.h"
enum inode_i_mutex_lock_class
{
 I_MUTEX_NORMAL,
 I_MUTEX_PARENT,
 I_MUTEX_CHILD,
 I_MUTEX_XATTR,
 I_MUTEX_QUOTA
};
# 594 "linux-2.6.18/include/linux/fs.h"
static inline  __attribute__((always_inline)) loff_t i_size_read(struct inode *inode)
{
# 613 "linux-2.6.18/include/linux/fs.h"
 return inode->i_size;

}


static inline  __attribute__((always_inline)) void i_size_write(struct inode *inode, loff_t i_size)
{
# 629 "linux-2.6.18/include/linux/fs.h"
 inode->i_size = i_size;

}

static inline  __attribute__((always_inline)) unsigned iminor(struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) & ((1U << 20) - 1)));
}

static inline  __attribute__((always_inline)) unsigned imajor(struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) >> 20));
}

extern struct block_device *I_BDEV(struct inode *inode);

struct fown_struct {
 rwlock_t lock;
 int pid;
 uid_t uid, euid;
 void *security;
 int signum;
};




struct file_ra_state {
 unsigned long start;
 unsigned long size;
 unsigned long flags;
 unsigned long cache_hit;
 unsigned long prev_page;
 unsigned long ahead_start;
 unsigned long ahead_size;
 unsigned long ra_pages;
 unsigned long mmap_hit;
 unsigned long mmap_miss;
};



struct file {




 union {
  struct list_head fu_list;
  struct rcu_head fu_rcuhead;
 } f_u;
 struct dentry *f_dentry;
 struct vfsmount *f_vfsmnt;
 const struct file_operations *f_op;
 atomic_t f_count;
 unsigned int f_flags;
 mode_t f_mode;
 loff_t f_pos;
 struct fown_struct f_owner;
 unsigned int f_uid, f_gid;
 struct file_ra_state f_ra;

 unsigned long f_version;
 void *f_security;


 void *private_data;



 struct list_head f_ep_links;
 spinlock_t f_ep_lock;

 struct address_space *f_mapping;
};
typedef  spinlock_t  _GLOBAL_125_T; extern  _GLOBAL_125_T  global_files_lock[NUM_STACKS];   
# 736 "linux-2.6.18/include/linux/fs.h"
typedef struct files_struct *fl_owner_t;

struct file_lock_operations {
 void (*fl_insert)(struct file_lock *);
 void (*fl_remove)(struct file_lock *);
 void (*fl_copy_lock)(struct file_lock *, struct file_lock *);
 void (*fl_release_private)(struct file_lock *);
};

struct lock_manager_operations {
 int (*fl_compare_owner)(struct file_lock *, struct file_lock *);
 void (*fl_notify)(struct file_lock *);
 void (*fl_copy_lock)(struct file_lock *, struct file_lock *);
 void (*fl_release_private)(struct file_lock *);
 void (*fl_break)(struct file_lock *);
 int (*fl_mylease)(struct file_lock *, struct file_lock *);
 int (*fl_change)(struct file_lock **, int);
};


# 1 "linux-2.6.18/include/linux/nfs_fs_i.h" 1





# 1 "linux-2.6.18/include/linux/nfs.h" 1
# 39 "linux-2.6.18/include/linux/nfs.h"
 enum nfs_stat {
 NFS_OK = 0,
 NFSERR_PERM = 1,
 NFSERR_NOENT = 2,
 NFSERR_IO = 5,
 NFSERR_NXIO = 6,
 NFSERR_EAGAIN = 11,
 NFSERR_ACCES = 13,
 NFSERR_EXIST = 17,
 NFSERR_XDEV = 18,
 NFSERR_NODEV = 19,
 NFSERR_NOTDIR = 20,
 NFSERR_ISDIR = 21,
 NFSERR_INVAL = 22,
 NFSERR_FBIG = 27,
 NFSERR_NOSPC = 28,
 NFSERR_ROFS = 30,
 NFSERR_MLINK = 31,
 NFSERR_OPNOTSUPP = 45,
 NFSERR_NAMETOOLONG = 63,
 NFSERR_NOTEMPTY = 66,
 NFSERR_DQUOT = 69,
 NFSERR_STALE = 70,
 NFSERR_REMOTE = 71,
 NFSERR_WFLUSH = 99,
 NFSERR_BADHANDLE = 10001,
 NFSERR_NOT_SYNC = 10002,
 NFSERR_BAD_COOKIE = 10003,
 NFSERR_NOTSUPP = 10004,
 NFSERR_TOOSMALL = 10005,
 NFSERR_SERVERFAULT = 10006,
 NFSERR_BADTYPE = 10007,
 NFSERR_JUKEBOX = 10008,
 NFSERR_SAME = 10009,
 NFSERR_DENIED = 10010,
 NFSERR_EXPIRED = 10011,
 NFSERR_LOCKED = 10012,
 NFSERR_GRACE = 10013,
 NFSERR_FHEXPIRED = 10014,
 NFSERR_SHARE_DENIED = 10015,
 NFSERR_WRONGSEC = 10016,
 NFSERR_CLID_INUSE = 10017,
 NFSERR_RESOURCE = 10018,
 NFSERR_MOVED = 10019,
 NFSERR_NOFILEHANDLE = 10020,
 NFSERR_MINOR_VERS_MISMATCH = 10021,
 NFSERR_STALE_CLIENTID = 10022,
 NFSERR_STALE_STATEID = 10023,
 NFSERR_OLD_STATEID = 10024,
 NFSERR_BAD_STATEID = 10025,
 NFSERR_BAD_SEQID = 10026,
 NFSERR_NOT_SAME = 10027,
 NFSERR_LOCK_RANGE = 10028,
 NFSERR_SYMLINK = 10029,
 NFSERR_RESTOREFH = 10030,
 NFSERR_LEASE_MOVED = 10031,
 NFSERR_ATTRNOTSUPP = 10032,
 NFSERR_NO_GRACE = 10033,
 NFSERR_RECLAIM_BAD = 10034,
 NFSERR_RECLAIM_CONFLICT = 10035,
 NFSERR_BAD_XDR = 10036,
 NFSERR_LOCKS_HELD = 10037,
 NFSERR_OPENMODE = 10038,
 NFSERR_BADOWNER = 10039,
 NFSERR_BADCHAR = 10040,
 NFSERR_BADNAME = 10041,
 NFSERR_BAD_RANGE = 10042,
 NFSERR_LOCK_NOTSUPP = 10043,
 NFSERR_OP_ILLEGAL = 10044,
 NFSERR_DEADLOCK = 10045,
 NFSERR_FILE_OPEN = 10046,
 NFSERR_ADMIN_REVOKED = 10047,
 NFSERR_CB_PATH_DOWN = 10048,
 NFSERR_REPLAY_ME = 10049
};



enum nfs_ftype {
 NFNON = 0,
 NFREG = 1,
 NFDIR = 2,
 NFBLK = 3,
 NFCHR = 4,
 NFLNK = 5,
 NFSOCK = 6,
 NFBAD = 7,
 NFFIFO = 8
};


# 1 "linux-2.6.18/include/linux/sunrpc/msg_prot.h" 1
# 15 "linux-2.6.18/include/linux/sunrpc/msg_prot.h"
typedef u32 rpc_authflavor_t;

enum rpc_auth_flavors {
 RPC_AUTH_NULL = 0,
 RPC_AUTH_UNIX = 1,
 RPC_AUTH_SHORT = 2,
 RPC_AUTH_DES = 3,
 RPC_AUTH_KRB = 4,
 RPC_AUTH_GSS = 6,
 RPC_AUTH_MAXFLAVOR = 8,

 RPC_AUTH_GSS_KRB5 = 390003,
 RPC_AUTH_GSS_KRB5I = 390004,
 RPC_AUTH_GSS_KRB5P = 390005,
 RPC_AUTH_GSS_LKEY = 390006,
 RPC_AUTH_GSS_LKEYI = 390007,
 RPC_AUTH_GSS_LKEYP = 390008,
 RPC_AUTH_GSS_SPKM = 390009,
 RPC_AUTH_GSS_SPKMI = 390010,
 RPC_AUTH_GSS_SPKMP = 390011,
};

enum rpc_msg_type {
 RPC_CALL = 0,
 RPC_REPLY = 1
};

enum rpc_reply_stat {
 RPC_MSG_ACCEPTED = 0,
 RPC_MSG_DENIED = 1
};

enum rpc_accept_stat {
 RPC_SUCCESS = 0,
 RPC_PROG_UNAVAIL = 1,
 RPC_PROG_MISMATCH = 2,
 RPC_PROC_UNAVAIL = 3,
 RPC_GARBAGE_ARGS = 4,
 RPC_SYSTEM_ERR = 5
};

enum rpc_reject_stat {
 RPC_MISMATCH = 0,
 RPC_AUTH_ERROR = 1
};

enum rpc_auth_stat {
 RPC_AUTH_OK = 0,
 RPC_AUTH_BADCRED = 1,
 RPC_AUTH_REJECTEDCRED = 2,
 RPC_AUTH_BADVERF = 3,
 RPC_AUTH_REJECTEDVERF = 4,
 RPC_AUTH_TOOWEAK = 5,

 RPCSEC_GSS_CREDPROBLEM = 13,
 RPCSEC_GSS_CTXPROBLEM = 14
};
# 98 "linux-2.6.18/include/linux/sunrpc/msg_prot.h"
typedef u32 rpc_fraghdr;
# 131 "linux-2.6.18/include/linux/nfs.h" 2






struct nfs_fh {
 unsigned short size;
 unsigned char data[128];
};





static inline  __attribute__((always_inline)) int nfs_compare_fh(const struct nfs_fh *a, const struct nfs_fh *b)
{
 return a->size != b->size || memcmp(a->data, b->data, a->size) != 0;
}

static inline  __attribute__((always_inline)) void nfs_copy_fh(struct nfs_fh *target, const struct nfs_fh *source)
{
 target->size = source->size;
 ({ size_t __len = (source->size); void *__ret; if (__builtin_constant_p(source->size) && __len >= 64) __ret = __memcpy((target->data),(source->data),__len); else __ret = __builtin_memcpy((target->data),(source->data),__len); __ret; });
}
# 165 "linux-2.6.18/include/linux/nfs.h"
enum nfs3_stable_how {
 NFS_UNSTABLE = 0,
 NFS_DATA_SYNC = 1,
 NFS_FILE_SYNC = 2
};
# 7 "linux-2.6.18/include/linux/nfs_fs_i.h" 2

struct nlm_lockowner;




struct nfs_lock_info {
 u32 state;
 struct nlm_lockowner *owner;
 struct list_head list;
};

struct nfs4_lock_state;
struct nfs4_lock_info {
 struct nfs4_lock_state *owner;
};
# 757 "linux-2.6.18/include/linux/fs.h" 2

struct file_lock {
 struct file_lock *fl_next;
 struct list_head fl_link;
 struct list_head fl_block;
 fl_owner_t fl_owner;
 unsigned int fl_pid;
 wait_queue_head_t fl_wait;
 struct file *fl_file;
 unsigned char fl_flags;
 unsigned char fl_type;
 loff_t fl_start;
 loff_t fl_end;

 struct fasync_struct * fl_fasync;
 unsigned long fl_break_time;

 struct file_lock_operations *fl_ops;
 struct lock_manager_operations *fl_lmops;
 union {
  struct nfs_lock_info nfs_fl;
  struct nfs4_lock_info nfs4_fl;
 } fl_u;
};
# 789 "linux-2.6.18/include/linux/fs.h"
# 1 "linux-2.6.18/include/linux/fcntl.h" 1



# 1 "linux-2.6.18/include/asm/fcntl.h" 1
# 1 "linux-2.6.18/include/asm-generic/fcntl.h" 1
# 114 "linux-2.6.18/include/asm-generic/fcntl.h"
struct flock {
 short l_type;
 short l_whence;
 off_t l_start;
 off_t l_len;
 pid_t l_pid;

};
# 137 "linux-2.6.18/include/asm-generic/fcntl.h"
struct flock64 {
 short l_type;
 short l_whence;
 loff_t l_start;
 loff_t l_len;
 pid_t l_pid;

};
# 1 "linux-2.6.18/include/asm/fcntl.h" 2
# 5 "linux-2.6.18/include/linux/fcntl.h" 2
# 790 "linux-2.6.18/include/linux/fs.h" 2

extern int fcntl_getlk(struct file *, struct flock *);
extern int fcntl_setlk(unsigned int, struct file *, unsigned int,
   struct flock *);







extern void send_sigio(struct fown_struct *fown, int fd, int band);
extern int fcntl_setlease(unsigned int fd, struct file *filp, long arg);
extern int fcntl_getlease(struct file *filp);


extern int do_sync_file_range(struct file *file, loff_t offset, loff_t endbyte,
   unsigned int flags);


extern void locks_init_lock(struct file_lock *);
extern void locks_copy_lock(struct file_lock *, struct file_lock *);
extern void locks_remove_posix(struct file *, fl_owner_t);
extern void locks_remove_flock(struct file *);
extern int posix_test_lock(struct file *, struct file_lock *, struct file_lock *);
extern int posix_lock_file_conf(struct file *, struct file_lock *, struct file_lock *);
extern int posix_lock_file(struct file *, struct file_lock *);
extern int posix_lock_file_wait(struct file *, struct file_lock *);
extern int posix_unblock_lock(struct file *, struct file_lock *);
extern int flock_lock_file_wait(struct file *filp, struct file_lock *fl);
extern int __break_lease(struct inode *inode, unsigned int flags);
extern void lease_get_mtime(struct inode *, struct timespec *time);
extern int setlease(struct file *, long, struct file_lock **);
extern int lease_modify(struct file_lock **, int);
extern int lock_may_read(struct inode *, loff_t start, unsigned long count);
extern int lock_may_write(struct inode *, loff_t start, unsigned long count);

struct fasync_struct {
 int magic;
 int fa_fd;
 struct fasync_struct *fa_next;
 struct file *fa_file;
};




extern int fasync_helper(int, struct file *, int, struct fasync_struct **);

extern void kill_fasync(struct fasync_struct **, int, int);

extern void __kill_fasync(struct fasync_struct *, int, int);

extern int f_setown(struct file *filp, unsigned long arg, int force);
extern void f_delown(struct file *filp);
extern int send_sigurg(struct fown_struct *fown);
# 855 "linux-2.6.18/include/linux/fs.h"
typedef  struct list_head   _GLOBAL_126_T; extern  _GLOBAL_126_T  global_super_blocks[NUM_STACKS];    
typedef  spinlock_t  _GLOBAL_127_T; extern  _GLOBAL_127_T  global_sb_lock[NUM_STACKS];   



struct super_block {
 struct list_head s_list;
 dev_t s_dev;
 unsigned long s_blocksize;
 unsigned char s_blocksize_bits;
 unsigned char s_dirt;
 unsigned long long s_maxbytes;
 struct file_system_type *s_type;
 struct super_operations *s_op;
 struct dquot_operations *dq_op;
  struct quotactl_ops *s_qcop;
 struct export_operations *s_export_op;
 unsigned long s_flags;
 unsigned long s_magic;
 struct dentry *s_root;
 struct rw_semaphore s_umount;
 struct mutex s_lock;
 int s_count;
 int s_syncing;
 int s_need_sync_fs;
 atomic_t s_active;
 void *s_security;
 struct xattr_handler **s_xattr;

 struct list_head s_inodes;
 struct list_head s_dirty;
 struct list_head s_io;
 struct hlist_head s_anon;
 struct list_head s_files;

 struct block_device *s_bdev;
 struct list_head s_instances;
 struct quota_info s_dquot;

 int s_frozen;
 wait_queue_head_t s_wait_unfrozen;

 char s_id[32];

 void *s_fs_info;





 struct mutex s_vfs_rename_mutex;



 u32 s_time_gran;
};

extern struct timespec current_fs_time(struct super_block *sb);




enum {
 SB_UNFROZEN = 0,
 SB_FREEZE_WRITE = 1,
 SB_FREEZE_TRANS = 2,
};




static inline  __attribute__((always_inline)) void get_fs_excl(void)
{
 atomic_inc(&get_nsc_task()->fs_excl);
}

static inline  __attribute__((always_inline)) void put_fs_excl(void)
{
 atomic_dec(&get_nsc_task()->fs_excl);
}

static inline  __attribute__((always_inline)) int has_fs_excl(void)
{
 return ((&get_nsc_task()->fs_excl)->counter);
}





static inline  __attribute__((always_inline)) void lock_super(struct super_block * sb)
{
 get_fs_excl();
 mutex_lock(&sb->s_lock);
}

static inline  __attribute__((always_inline)) void unlock_super(struct super_block * sb)
{
 put_fs_excl();
 mutex_unlock(&sb->s_lock);
}




extern int vfs_permission(struct nameidata *, int);
extern int vfs_create(struct inode *, struct dentry *, int, struct nameidata *);
extern int vfs_mkdir(struct inode *, struct dentry *, int);
extern int vfs_mknod(struct inode *, struct dentry *, int, dev_t);
extern int vfs_symlink(struct inode *, struct dentry *, const char *, int);
extern int vfs_link(struct dentry *, struct inode *, struct dentry *);
extern int vfs_rmdir(struct inode *, struct dentry *);
extern int vfs_unlink(struct inode *, struct dentry *);
extern int vfs_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);




extern void dentry_unhash(struct dentry *dentry);




extern int file_permission(struct file *, int);
# 999 "linux-2.6.18/include/linux/fs.h"
int generic_osync_inode(struct inode *, struct address_space *, int);







typedef int (*filldir_t)(void *, const char *, int, loff_t, ino_t, unsigned);

struct block_device_operations {
 int (*open) (struct inode *, struct file *);
 int (*release) (struct inode *, struct file *);
 int (*ioctl) (struct inode *, struct file *, unsigned, unsigned long);
 long (*unlocked_ioctl) (struct file *, unsigned, unsigned long);
 long (*compat_ioctl) (struct file *, unsigned, unsigned long);
 int (*direct_access) (struct block_device *, sector_t, unsigned long *);
 int (*media_changed) (struct gendisk *);
 int (*revalidate_disk) (struct gendisk *);
 int (*getgeo)(struct block_device *, struct hd_geometry *);
 struct module *owner;
};
# 1031 "linux-2.6.18/include/linux/fs.h"
typedef struct {
 size_t written;
 size_t count;
 union {
  char * buf;
  void *data;
 } arg;
 int error;
} read_descriptor_t;

typedef int (*read_actor_t)(read_descriptor_t *, struct page *, unsigned long, unsigned long);
# 1054 "linux-2.6.18/include/linux/fs.h"
struct file_operations {
 struct module *owner;
 loff_t (*llseek) (struct file *, loff_t, int);
 ssize_t (*read) (struct file *, char *, size_t, loff_t *);
 ssize_t (*aio_read) (struct kiocb *, char *, size_t, loff_t);
 ssize_t (*write) (struct file *, const char *, size_t, loff_t *);
 ssize_t (*aio_write) (struct kiocb *, const char *, size_t, loff_t);
 int (*readdir) (struct file *, void *, filldir_t);
 unsigned int (*poll) (struct file *, struct poll_table_struct *);
 int (*ioctl) (struct inode *, struct file *, unsigned int, unsigned long);
 long (*unlocked_ioctl) (struct file *, unsigned int, unsigned long);
 long (*compat_ioctl) (struct file *, unsigned int, unsigned long);
 int (*mmap) (struct file *, struct vm_area_struct *);
 int (*open) (struct inode *, struct file *);
 int (*flush) (struct file *, fl_owner_t id);
 int (*release) (struct inode *, struct file *);
 int (*fsync) (struct file *, struct dentry *, int datasync);
 int (*aio_fsync) (struct kiocb *, int datasync);
 int (*fasync) (int, struct file *, int);
 int (*lock) (struct file *, int, struct file_lock *);
 ssize_t (*readv) (struct file *, const struct iovec *, unsigned long, loff_t *);
 ssize_t (*writev) (struct file *, const struct iovec *, unsigned long, loff_t *);
 ssize_t (*sendfile) (struct file *, loff_t *, size_t, read_actor_t, void *);
 ssize_t (*sendpage) (struct file *, struct page *, int, size_t, loff_t *, int);
 unsigned long (*get_unmapped_area)(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);
 int (*check_flags)(int);
 int (*dir_notify)(struct file *filp, unsigned long arg);
 int (*flock) (struct file *, int, struct file_lock *);
 ssize_t (*splice_write)(struct pipe_inode_info *, struct file *, loff_t *, size_t, unsigned int);
 ssize_t (*splice_read)(struct file *, loff_t *, struct pipe_inode_info *, size_t, unsigned int);
};

struct inode_operations {
 int (*create) (struct inode *,struct dentry *,int, struct nameidata *);
 struct dentry * (*lookup) (struct inode *,struct dentry *, struct nameidata *);
 int (*link) (struct dentry *,struct inode *,struct dentry *);
 int (*unlink) (struct inode *,struct dentry *);
 int (*symlink) (struct inode *,struct dentry *,const char *);
 int (*mkdir) (struct inode *,struct dentry *,int);
 int (*rmdir) (struct inode *,struct dentry *);
 int (*mknod) (struct inode *,struct dentry *,int,dev_t);
 int (*rename) (struct inode *, struct dentry *,
   struct inode *, struct dentry *);
 int (*readlink) (struct dentry *, char *,int);
 void * (*follow_link) (struct dentry *, struct nameidata *);
 void (*put_link) (struct dentry *, struct nameidata *, void *);
 void (*truncate) (struct inode *);
 int (*permission) (struct inode *, int, struct nameidata *);
 int (*setattr) (struct dentry *, struct iattr *);
 int (*getattr) (struct vfsmount *mnt, struct dentry *, struct kstat *);
 int (*setxattr) (struct dentry *, const char *,const void *,size_t,int);
 ssize_t (*getxattr) (struct dentry *, const char *, void *, size_t);
 ssize_t (*listxattr) (struct dentry *, char *, size_t);
 int (*removexattr) (struct dentry *, const char *);
 void (*truncate_range)(struct inode *, loff_t, loff_t);
};

struct seq_file;

extern ssize_t vfs_read(struct file *, char *, size_t, loff_t *);
extern ssize_t vfs_write(struct file *, const char *, size_t, loff_t *);
extern ssize_t vfs_readv(struct file *, const struct iovec *,
  unsigned long, loff_t *);
extern ssize_t vfs_writev(struct file *, const struct iovec *,
  unsigned long, loff_t *);





struct super_operations {
    struct inode *(*alloc_inode)(struct super_block *sb);
 void (*destroy_inode)(struct inode *);

 void (*read_inode) (struct inode *);

    void (*dirty_inode) (struct inode *);
 int (*write_inode) (struct inode *, int);
 void (*put_inode) (struct inode *);
 void (*drop_inode) (struct inode *);
 void (*delete_inode) (struct inode *);
 void (*put_super) (struct super_block *);
 void (*write_super) (struct super_block *);
 int (*sync_fs)(struct super_block *sb, int wait);
 void (*write_super_lockfs) (struct super_block *);
 void (*unlockfs) (struct super_block *);
 int (*statfs) (struct dentry *, struct kstatfs *);
 int (*remount_fs) (struct super_block *, int *, char *);
 void (*clear_inode) (struct inode *);
 void (*umount_begin) (struct vfsmount *, int);

 int (*show_options)(struct seq_file *, struct vfsmount *);
 int (*show_stats)(struct seq_file *, struct vfsmount *);

 ssize_t (*quota_read)(struct super_block *, int, char *, size_t, loff_t);
 ssize_t (*quota_write)(struct super_block *, int, const char *, size_t, loff_t);
};
# 1165 "linux-2.6.18/include/linux/fs.h"
extern void __mark_inode_dirty(struct inode *, int);
static inline  __attribute__((always_inline)) void mark_inode_dirty(struct inode *inode)
{
 __mark_inode_dirty(inode, (1 | 2 | 4));
}

static inline  __attribute__((always_inline)) void mark_inode_dirty_sync(struct inode *inode)
{
 __mark_inode_dirty(inode, 1);
}

static inline  __attribute__((always_inline)) void inode_inc_link_count(struct inode *inode)
{
 inode->i_nlink++;
 mark_inode_dirty(inode);
}

static inline  __attribute__((always_inline)) void inode_dec_link_count(struct inode *inode)
{
 inode->i_nlink--;
 mark_inode_dirty(inode);
}

extern void touch_atime(struct vfsmount *mnt, struct dentry *dentry);
static inline  __attribute__((always_inline)) void file_accessed(struct file *file)
{
 if (!(file->f_flags & 01000000))
  touch_atime(file->f_vfsmnt, file->f_dentry);
}

int sync_inode(struct inode *inode, struct writeback_control *wbc);
# 1283 "linux-2.6.18/include/linux/fs.h"
struct export_operations {
 struct dentry *(*decode_fh)(struct super_block *sb, __u32 *fh, int fh_len, int fh_type,
    int (*acceptable)(void *context, struct dentry *de),
    void *context);
 int (*encode_fh)(struct dentry *de, __u32 *fh, int *max_len,
    int connectable);


 int (*get_name)(struct dentry *parent, char *name,
   struct dentry *child);
 struct dentry * (*get_parent)(struct dentry *child);
 struct dentry * (*get_dentry)(struct super_block *sb, void *inump);


 struct dentry * (*find_exported_dentry)(
  struct super_block *sb, void *obj, void *parent,
  int (*acceptable)(void *context, struct dentry *de),
  void *context);


};

extern struct dentry *
find_exported_dentry(struct super_block *sb, void *obj, void *parent,
       int (*acceptable)(void *context, struct dentry *de),
       void *context);

struct file_system_type {
 const char *name;
 int fs_flags;
 int (*get_sb) (struct file_system_type *, int,
         const char *, void *, struct vfsmount *);
 void (*kill_sb) (struct super_block *);
 struct module *owner;
 struct file_system_type * next;
 struct list_head fs_supers;
 struct lock_class_key s_lock_key;
 struct lock_class_key s_umount_key;
};

extern int get_sb_bdev(struct file_system_type *fs_type,
 int flags, const char *dev_name, void *data,
 int (*fill_super)(struct super_block *, void *, int),
 struct vfsmount *mnt);
extern int get_sb_single(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int),
 struct vfsmount *mnt);
extern int get_sb_nodev(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int),
 struct vfsmount *mnt);
void generic_shutdown_super(struct super_block *sb);
void kill_block_super(struct super_block *sb);
void kill_anon_super(struct super_block *sb);
void kill_litter_super(struct super_block *sb);
void deactivate_super(struct super_block *sb);
int set_anon_super(struct super_block *s, void *data);
struct super_block *sget(struct file_system_type *type,
   int (*test)(struct super_block *,void *),
   int (*set)(struct super_block *,void *),
   void *data);
extern int get_sb_pseudo(struct file_system_type *, char *,
 struct super_operations *ops, unsigned long,
 struct vfsmount *mnt);
extern int simple_set_mnt(struct vfsmount *mnt, struct super_block *sb);
int __put_super(struct super_block *sb);
int __put_super_and_need_restart(struct super_block *sb);
void unnamed_dev_init(void);







extern int register_filesystem(struct file_system_type *);
extern int unregister_filesystem(struct file_system_type *);
extern struct vfsmount *kern_mount(struct file_system_type *);
extern int may_umount_tree(struct vfsmount *);
extern int may_umount(struct vfsmount *);
extern void umount_tree(struct vfsmount *, int, struct list_head *);
extern void release_mounts(struct list_head *);
extern long do_mount(char *, char *, char *, unsigned long, void *);
extern struct vfsmount *copy_tree(struct vfsmount *, struct dentry *, int);
extern void mnt_set_mountpoint(struct vfsmount *, struct dentry *,
      struct vfsmount *);

extern int vfs_statfs(struct dentry *, struct kstatfs *);


typedef  struct subsystem   _GLOBAL_128_T; extern  _GLOBAL_128_T  global_fs_subsys[NUM_STACKS];    




extern int locks_mandatory_locked(struct inode *);
extern int locks_mandatory_area(int, struct inode *, struct file *, loff_t, size_t);
# 1389 "linux-2.6.18/include/linux/fs.h"
static inline  __attribute__((always_inline)) int locks_verify_locked(struct inode *inode)
{
 if ((((inode)->i_sb->s_flags & (64)) && ((inode)->i_mode & (0002000 | 00010)) == 0002000))
  return locks_mandatory_locked(inode);
 return 0;
}

extern int rw_verify_area(int, struct file *, loff_t *, size_t);

static inline  __attribute__((always_inline)) int locks_verify_truncate(struct inode *inode,
        struct file *filp,
        loff_t size)
{
 if (inode->i_flock && (((inode)->i_sb->s_flags & (64)) && ((inode)->i_mode & (0002000 | 00010)) == 0002000))
  return locks_mandatory_area(
   2, inode, filp,
   size < inode->i_size ? size : inode->i_size,
   (size < inode->i_size ? inode->i_size - size
    : size - inode->i_size)
  );
 return 0;
}

static inline  __attribute__((always_inline)) int break_lease(struct inode *inode, unsigned int mode)
{
 if (inode->i_flock)
  return __break_lease(inode, mode);
 return 0;
}



extern int do_truncate(struct dentry *, loff_t start, unsigned int time_attrs,
         struct file *filp);
extern long do_sys_open(int fdf, const char *filename, int flags,
   int mode);
extern struct file *filp_open(const char *, int, int);
extern struct file * dentry_open(struct dentry *, struct vfsmount *, int);
extern int filp_close(struct file *, fl_owner_t id);
extern char * getname(const char *);


extern void  __attribute__ ((__section__ (".init.text"))) vfs_caches_init_early(void);
extern void  __attribute__ ((__section__ (".init.text"))) vfs_caches_init(unsigned long);
# 1442 "linux-2.6.18/include/linux/fs.h"
extern int register_blkdev(unsigned int, const char *);
extern int unregister_blkdev(unsigned int, const char *);
extern struct block_device *bdget(dev_t);
extern void bd_set_size(struct block_device *, loff_t size);
extern void bd_forget(struct inode *inode);
extern void bdput(struct block_device *);
extern struct block_device *open_by_devnum(dev_t, unsigned);
extern struct block_device *open_partition_by_devnum(dev_t, unsigned);
typedef  const struct file_operations    _GLOBAL_129_T; extern  _GLOBAL_129_T  global_def_blk_fops[NUM_STACKS];     
typedef  const struct address_space_operations    _GLOBAL_130_T; extern  _GLOBAL_130_T  global_def_blk_aops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_131_T; extern  _GLOBAL_131_T  global_def_chr_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_132_T; extern  _GLOBAL_132_T  global_bad_sock_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_133_T; extern  _GLOBAL_133_T  global_def_fifo_fops[NUM_STACKS];     
extern int ioctl_by_bdev(struct block_device *, unsigned, unsigned long);
extern int blkdev_ioctl(struct inode *, struct file *, unsigned, unsigned long);
extern long compat_blkdev_ioctl(struct file *, unsigned, unsigned long);
extern int blkdev_get(struct block_device *, mode_t, unsigned);
extern int blkdev_put(struct block_device *);
extern int blkdev_put_partition(struct block_device *);
extern int bd_claim(struct block_device *, void *);
extern void bd_release(struct block_device *);
# 1473 "linux-2.6.18/include/linux/fs.h"
extern int alloc_chrdev_region(dev_t *, unsigned, unsigned, const char *);
extern int register_chrdev_region(dev_t, unsigned, const char *);
extern int register_chrdev(unsigned int, const char *,
      const struct file_operations *);
extern int unregister_chrdev(unsigned int, const char *);
extern void unregister_chrdev_region(dev_t, unsigned);
extern int chrdev_open(struct inode *, struct file *);
extern void chrdev_show(struct seq_file *,off_t);




extern const char *__bdevname(dev_t, char *buffer);
extern const char *bdevname(struct block_device *bdev, char *buffer);
extern struct block_device *lookup_bdev(const char *);
extern struct block_device *open_bdev_excl(const char *, int, void *);
extern void close_bdev_excl(struct block_device *);
extern void blkdev_show(struct seq_file *,off_t);

extern void init_special_inode(struct inode *, umode_t, dev_t);


extern void make_bad_inode(struct inode *);
extern int is_bad_inode(struct inode *);

typedef  const struct file_operations    _GLOBAL_134_T; extern  _GLOBAL_134_T  global_read_fifo_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_135_T; extern  _GLOBAL_135_T  global_write_fifo_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_136_T; extern  _GLOBAL_136_T  global_rdwr_fifo_fops[NUM_STACKS];     

extern int fs_may_remount_ro(struct super_block *);
# 1514 "linux-2.6.18/include/linux/fs.h"
extern int check_disk_change(struct block_device *);
extern int invalidate_inodes(struct super_block *);
extern int __invalidate_device(struct block_device *);
extern int invalidate_partition(struct gendisk *, int);
unsigned long invalidate_mapping_pages(struct address_space *mapping,
     unsigned long start, unsigned long end);
unsigned long invalidate_inode_pages(struct address_space *mapping);
static inline  __attribute__((always_inline)) void invalidate_remote_inode(struct inode *inode)
{
 if ((((inode->i_mode) & 00170000) == 0100000) || (((inode->i_mode) & 00170000) == 0040000) ||
     (((inode->i_mode) & 00170000) == 0120000))
  invalidate_inode_pages(inode->i_mapping);
}
extern int invalidate_inode_pages2(struct address_space *mapping);
extern int invalidate_inode_pages2_range(struct address_space *mapping,
      unsigned long start, unsigned long end);
extern int write_inode_now(struct inode *, int);
extern int filemap_fdatawrite(struct address_space *);
extern int filemap_flush(struct address_space *);
extern int filemap_fdatawait(struct address_space *);
extern int filemap_write_and_wait(struct address_space *mapping);
extern int filemap_write_and_wait_range(struct address_space *mapping,
            loff_t lstart, loff_t lend);
extern int wait_on_page_writeback_range(struct address_space *mapping,
    unsigned long start, unsigned long end);
extern int __filemap_fdatawrite_range(struct address_space *mapping,
    loff_t start, loff_t end, int sync_mode);

extern long do_fsync(struct file *file, int datasync);
extern void sync_supers(void);
extern void sync_filesystems(int wait);
extern void emergency_sync(void);
extern void emergency_remount(void);
extern int do_remount_sb(struct super_block *sb, int flags,
    void *data, int force);
extern sector_t bmap(struct inode *, sector_t);
extern int notify_change(struct dentry *, struct iattr *);
extern int permission(struct inode *, int, struct nameidata *);
extern int generic_permission(struct inode *, int,
  int (*check_acl)(struct inode *, int));

extern int get_write_access(struct inode *);
extern int deny_write_access(struct file *);
static inline  __attribute__((always_inline)) void put_write_access(struct inode * inode)
{
 atomic_dec(&inode->i_writecount);
}
static inline  __attribute__((always_inline)) void allow_write_access(struct file *file)
{
 if (file)
  atomic_inc(&file->f_dentry->d_inode->i_writecount);
}
extern int do_pipe(int *);

extern int open_namei(int dfd, const char *, int, int, struct nameidata *);
extern int may_open(struct nameidata *, int, int);

extern int kernel_read(struct file *, unsigned long, char *, unsigned long);
extern struct file * open_exec(const char *);


extern int is_subdir(struct dentry *, struct dentry *);
extern ino_t find_inode_number(struct dentry *, struct qstr *);

# 1 "linux-2.6.18/include/linux/err.h" 1
# 20 "linux-2.6.18/include/linux/err.h"
static inline  __attribute__((always_inline)) void *ERR_PTR(long error)
{
 return (void *) error;
}

static inline  __attribute__((always_inline)) long PTR_ERR(const void *ptr)
{
 return (long) ptr;
}

static inline  __attribute__((always_inline)) long IS_ERR(const void *ptr)
{
 return __builtin_expect(!!(((unsigned long)ptr) >= (unsigned long)-4095), 0);
}
# 1579 "linux-2.6.18/include/linux/fs.h" 2


extern loff_t default_llseek(struct file *file, loff_t offset, int origin);

extern loff_t vfs_llseek(struct file *file, loff_t offset, int origin);

extern void inode_init_once(struct inode *);
extern void iput(struct inode *);
extern struct inode * igrab(struct inode *);
extern ino_t iunique(struct super_block *, ino_t);
extern int inode_needs_sync(struct inode *inode);
extern void generic_delete_inode(struct inode *inode);
extern void generic_drop_inode(struct inode *inode);

extern struct inode *ilookup5_nowait(struct super_block *sb,
  unsigned long hashval, int (*test)(struct inode *, void *),
  void *data);
extern struct inode *ilookup5(struct super_block *sb, unsigned long hashval,
  int (*test)(struct inode *, void *), void *data);
extern struct inode *ilookup(struct super_block *sb, unsigned long ino);

extern struct inode * iget5_locked(struct super_block *, unsigned long, int (*test)(struct inode *, void *), int (*set)(struct inode *, void *), void *);
extern struct inode * iget_locked(struct super_block *, unsigned long);
extern void unlock_new_inode(struct inode *);

static inline  __attribute__((always_inline)) struct inode *iget(struct super_block *sb, unsigned long ino)
{
 struct inode *inode = iget_locked(sb, ino);

 if (inode && (inode->i_state & 64)) {
  sb->s_op->read_inode(inode);
  unlock_new_inode(inode);
 }

 return inode;
}

extern void __iget(struct inode * inode);
extern void clear_inode(struct inode *);
extern void destroy_inode(struct inode *);
extern struct inode *new_inode(struct super_block *);
extern int remove_suid(struct dentry *);
extern void remove_dquot_ref(struct super_block *, int, struct list_head *);

extern void __insert_inode_hash(struct inode *, unsigned long hashval);
extern void remove_inode_hash(struct inode *);
static inline  __attribute__((always_inline)) void insert_inode_hash(struct inode *inode) {
 __insert_inode_hash(inode, inode->i_ino);
}

extern struct file * get_empty_filp(void);
extern void file_move(struct file *f, struct list_head *list);
extern void file_kill(struct file *f);
struct bio;
extern void submit_bio(int, struct bio *);
extern int bdev_read_only(struct block_device *);
extern int set_blocksize(struct block_device *, int);
extern int sb_set_blocksize(struct super_block *, int);
extern int sb_min_blocksize(struct super_block *, int);

extern int generic_file_mmap(struct file *, struct vm_area_struct *);
extern int generic_file_readonly_mmap(struct file *, struct vm_area_struct *);
extern int file_read_actor(read_descriptor_t * desc, struct page *page, unsigned long offset, unsigned long size);
extern int file_send_actor(read_descriptor_t * desc, struct page *page, unsigned long offset, unsigned long size);
extern ssize_t generic_file_read(struct file *, char *, size_t, loff_t *);
int generic_write_checks(struct file *file, loff_t *pos, size_t *count, int isblk);
extern ssize_t generic_file_write(struct file *, const char *, size_t, loff_t *);
extern ssize_t generic_file_aio_read(struct kiocb *, char *, size_t, loff_t);
extern ssize_t __generic_file_aio_read(struct kiocb *, const struct iovec *, unsigned long, loff_t *);
extern ssize_t generic_file_aio_write(struct kiocb *, const char *, size_t, loff_t);
extern ssize_t generic_file_aio_write_nolock(struct kiocb *, const struct iovec *,
  unsigned long, loff_t *);
extern ssize_t generic_file_direct_write(struct kiocb *, const struct iovec *,
  unsigned long *, loff_t, loff_t *, size_t, size_t);
extern ssize_t generic_file_buffered_write(struct kiocb *, const struct iovec *,
  unsigned long, loff_t, loff_t *, size_t, ssize_t);
extern ssize_t do_sync_read(struct file *filp, char *buf, size_t len, loff_t *ppos);
extern ssize_t do_sync_write(struct file *filp, const char *buf, size_t len, loff_t *ppos);
ssize_t generic_file_write_nolock(struct file *file, const struct iovec *iov,
    unsigned long nr_segs, loff_t *ppos);
extern ssize_t generic_file_sendfile(struct file *, loff_t *, size_t, read_actor_t, void *);
extern void do_generic_mapping_read(struct address_space *mapping,
        struct file_ra_state *, struct file *,
        loff_t *, read_descriptor_t *, read_actor_t);


extern ssize_t generic_file_splice_read(struct file *, loff_t *,
  struct pipe_inode_info *, size_t, unsigned int);
extern ssize_t generic_file_splice_write(struct pipe_inode_info *,
  struct file *, loff_t *, size_t, unsigned int);
extern ssize_t generic_splice_sendpage(struct pipe_inode_info *pipe,
  struct file *out, loff_t *, size_t len, unsigned int flags);
extern long do_splice_direct(struct file *in, loff_t *ppos, struct file *out,
  size_t len, unsigned int flags);

extern void
file_ra_state_init(struct file_ra_state *ra, struct address_space *mapping);
extern ssize_t generic_file_readv(struct file *filp, const struct iovec *iov,
 unsigned long nr_segs, loff_t *ppos);
ssize_t generic_file_writev(struct file *filp, const struct iovec *iov,
   unsigned long nr_segs, loff_t *ppos);
extern loff_t no_llseek(struct file *file, loff_t offset, int origin);
extern loff_t generic_file_llseek(struct file *file, loff_t offset, int origin);
extern loff_t remote_llseek(struct file *file, loff_t offset, int origin);
extern int generic_file_open(struct inode * inode, struct file * filp);
extern int nonseekable_open(struct inode * inode, struct file * filp);
# 1697 "linux-2.6.18/include/linux/fs.h"
static inline  __attribute__((always_inline)) int xip_truncate_page(struct address_space *mapping, loff_t from)
{
 return 0;
}


static inline  __attribute__((always_inline)) void do_generic_file_read(struct file * filp, loff_t *ppos,
     read_descriptor_t * desc,
     read_actor_t actor)
{
 do_generic_mapping_read(filp->f_mapping,
    &filp->f_ra,
    filp,
    ppos,
    desc,
    actor);
}

ssize_t __blockdev_direct_IO(int rw, struct kiocb *iocb, struct inode *inode,
 struct block_device *bdev, const struct iovec *iov, loff_t offset,
 unsigned long nr_segs, get_block_t get_block, dio_iodone_t end_io,
 int lock_type);

enum {
 DIO_LOCKING = 1,
 DIO_NO_LOCKING,
 DIO_OWN_LOCKING,
};

static inline  __attribute__((always_inline)) ssize_t blockdev_direct_IO(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, const struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_block_t get_block,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_block, end_io, DIO_LOCKING);
}

static inline  __attribute__((always_inline)) ssize_t blockdev_direct_IO_no_locking(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, const struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_block_t get_block,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_block, end_io, DIO_NO_LOCKING);
}

static inline  __attribute__((always_inline)) ssize_t blockdev_direct_IO_own_locking(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, const struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_block_t get_block,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_block, end_io, DIO_OWN_LOCKING);
}

typedef  const struct file_operations    _GLOBAL_137_T; extern  _GLOBAL_137_T  global_generic_ro_fops[NUM_STACKS];     



extern int vfs_readlink(struct dentry *, char *, int, const char *);
extern int vfs_follow_link(struct nameidata *, const char *);
extern int page_readlink(struct dentry *, char *, int);
extern void *page_follow_link_light(struct dentry *, struct nameidata *);
extern void page_put_link(struct dentry *, struct nameidata *, void *);
extern int __page_symlink(struct inode *inode, const char *symname, int len,
  gfp_t gfp_mask);
extern int page_symlink(struct inode *inode, const char *symname, int len);
typedef  struct inode_operations   _GLOBAL_138_T; extern  _GLOBAL_138_T  global_page_symlink_inode_operations[NUM_STACKS];    
extern int generic_readlink(struct dentry *, char *, int);
extern void generic_fillattr(struct inode *, struct kstat *);
extern int vfs_getattr(struct vfsmount *, struct dentry *, struct kstat *);
void inode_add_bytes(struct inode *inode, loff_t bytes);
void inode_sub_bytes(struct inode *inode, loff_t bytes);
loff_t inode_get_bytes(struct inode *inode);
void inode_set_bytes(struct inode *inode, loff_t bytes);

extern int vfs_readdir(struct file *, filldir_t, void *);

extern int vfs_stat(char *, struct kstat *);
extern int vfs_lstat(char *, struct kstat *);
extern int vfs_stat_fd(int dfd, char *, struct kstat *);
extern int vfs_lstat_fd(int dfd, char *, struct kstat *);
extern int vfs_fstat(unsigned int, struct kstat *);

extern int vfs_ioctl(struct file *, unsigned int, unsigned int, unsigned long);

extern struct file_system_type *get_fs_type(const char *name);
extern struct super_block *get_super(struct block_device *);
extern struct super_block *user_get_super(dev_t);
extern void drop_super(struct super_block *sb);

extern int dcache_dir_open(struct inode *, struct file *);
extern int dcache_dir_close(struct inode *, struct file *);
extern loff_t dcache_dir_lseek(struct file *, loff_t, int);
extern int dcache_readdir(struct file *, void *, filldir_t);
extern int simple_getattr(struct vfsmount *, struct dentry *, struct kstat *);
extern int simple_statfs(struct dentry *, struct kstatfs *);
extern int simple_link(struct dentry *, struct inode *, struct dentry *);
extern int simple_unlink(struct inode *, struct dentry *);
extern int simple_rmdir(struct inode *, struct dentry *);
extern int simple_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);
extern int simple_sync_file(struct file *, struct dentry *, int);
extern int simple_empty(struct dentry *);
extern int simple_readpage(struct file *file, struct page *page);
extern int simple_prepare_write(struct file *file, struct page *page,
   unsigned offset, unsigned to);
extern int simple_commit_write(struct file *file, struct page *page,
    unsigned offset, unsigned to);

extern struct dentry *simple_lookup(struct inode *, struct dentry *, struct nameidata *);
extern ssize_t generic_read_dir(struct file *, char *, size_t, loff_t *);
typedef  const struct file_operations    _GLOBAL_139_T; extern  _GLOBAL_139_T  global_simple_dir_operations[NUM_STACKS];     
typedef  struct inode_operations   _GLOBAL_140_T; extern  _GLOBAL_140_T  global_simple_dir_inode_operations[NUM_STACKS];    
struct tree_descr { char *name; const struct file_operations *ops; int mode; };
struct dentry *d_alloc_name(struct dentry *, const char *);
extern int simple_fill_super(struct super_block *, int, struct tree_descr *);
extern int simple_pin_fs(struct file_system_type *, struct vfsmount **mount, int *count);
extern void simple_release_fs(struct vfsmount **mount, int *count);

extern ssize_t simple_read_from_buffer(void *, size_t, loff_t *, const void *, size_t);
# 1826 "linux-2.6.18/include/linux/fs.h"
extern int inode_change_ok(struct inode *, struct iattr *);
extern int  __attribute__((warn_unused_result)) inode_setattr(struct inode *, struct iattr *);

extern void file_update_time(struct file *file);

static inline  __attribute__((always_inline)) ino_t parent_ino(struct dentry *dentry)
{
 ino_t res;

 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 res = dentry->d_parent->d_inode->i_ino;
 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 return res;
}


extern int unshare_files(void);







struct simple_transaction_argresp {
 ssize_t size;
 char data[0];
};



char *simple_transaction_get(struct file *file, const char *buf,
    size_t size);
ssize_t simple_transaction_read(struct file *file, char *buf,
    size_t size, loff_t *pos);
int simple_transaction_release(struct inode *inode, struct file *file);

static inline  __attribute__((always_inline)) void simple_transaction_set(struct file *file, size_t n)
{
 struct simple_transaction_argresp *ar = file->private_data;

 do { if (n > ((1UL << 12) - sizeof(struct simple_transaction_argresp))) ; } while(0);





 __asm__ __volatile__("": : :"memory");
 ar->size = n;
}
# 1907 "linux-2.6.18/include/linux/fs.h"
static inline  __attribute__((always_inline)) void 
__attribute__((format(printf, 1, 2))) __simple_attr_check_format(const char *fmt, ...)
{

}

int simple_attr_open(struct inode *inode, struct file *file,
       u64 (*get)(void *), void (*set)(void *, u64),
       const char *fmt);
int simple_attr_close(struct inode *inode, struct file *file);
ssize_t simple_attr_read(struct file *file, char *buf,
    size_t len, loff_t *ppos);
ssize_t simple_attr_write(struct file *file, const char *buf,
     size_t len, loff_t *ppos);
# 1934 "linux-2.6.18/include/linux/fs.h"
static inline  __attribute__((always_inline)) char *alloc_secdata(void)
{
 return (char *)1;
}

static inline  __attribute__((always_inline)) void free_secdata(void *secdata)
{ }
# 16 "linux-2.6.18/include/linux/mm.h" 2



struct mempolicy;
struct anon_vma;


typedef  unsigned long   _GLOBAL_141_T; extern  _GLOBAL_141_T  global_max_mapnr[NUM_STACKS];    


typedef  unsigned long   _GLOBAL_142_T; extern  _GLOBAL_142_T  global_num_physpages[NUM_STACKS];    
typedef  void  _GLOBAL_143_T; extern  _GLOBAL_143_T  * global_high_memory[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_144_T; extern  _GLOBAL_144_T  global_vmalloc_earlyreserve[NUM_STACKS];    
typedef  int  _GLOBAL_145_T; extern  _GLOBAL_145_T  global_page_cluster[NUM_STACKS];   


typedef  int  _GLOBAL_146_T; extern  _GLOBAL_146_T  global_sysctl_legacy_va_layout[NUM_STACKS];   





# 1 "linux-2.6.18/include/asm/pgtable.h" 1
# 9 "linux-2.6.18/include/asm/pgtable.h"
# 1 "linux-2.6.18/include/asm/fixmap.h" 1
# 15 "linux-2.6.18/include/asm/fixmap.h"
# 1 "linux-2.6.18/include/asm/apicdef.h" 1
# 140 "linux-2.6.18/include/asm/apicdef.h"
struct local_apic {

        struct { unsigned int __reserved[4]; } __reserved_01;

        struct { unsigned int __reserved[4]; } __reserved_02;

        struct {
  unsigned int __reserved_1 : 24,
   phys_apic_id : 4,
   __reserved_2 : 4;
  unsigned int __reserved[3];
 } id;

        const
 struct {
  unsigned int version : 8,
   __reserved_1 : 8,
   max_lvt : 8,
   __reserved_2 : 8;
  unsigned int __reserved[3];
 } version;

        struct { unsigned int __reserved[4]; } __reserved_03;

        struct { unsigned int __reserved[4]; } __reserved_04;

        struct { unsigned int __reserved[4]; } __reserved_05;

        struct { unsigned int __reserved[4]; } __reserved_06;

        struct {
  unsigned int priority : 8,
   __reserved_1 : 24;
  unsigned int __reserved_2[3];
 } tpr;

        const
 struct {
  unsigned int priority : 8,
   __reserved_1 : 24;
  unsigned int __reserved_2[3];
 } apr;

        const
 struct {
  unsigned int priority : 8,
   __reserved_1 : 24;
  unsigned int __reserved_2[3];
 } ppr;

        struct {
  unsigned int eoi;
  unsigned int __reserved[3];
 } eoi;

        struct { unsigned int __reserved[4]; } __reserved_07;

        struct {
  unsigned int __reserved_1 : 24,
   logical_dest : 8;
  unsigned int __reserved_2[3];
 } ldr;

        struct {
  unsigned int __reserved_1 : 28,
   model : 4;
  unsigned int __reserved_2[3];
 } dfr;

        struct {
  unsigned int spurious_vector : 8,
   apic_enabled : 1,
   focus_cpu : 1,
   __reserved_2 : 22;
  unsigned int __reserved_3[3];
 } svr;

        struct {
         unsigned int bitfield;
  unsigned int __reserved[3];
 } isr [8];

        struct {
         unsigned int bitfield;
  unsigned int __reserved[3];
 } tmr [8];

        struct {
         unsigned int bitfield;
  unsigned int __reserved[3];
 } irr [8];

        union {
  struct {
   unsigned int send_cs_error : 1,
    receive_cs_error : 1,
    send_accept_error : 1,
    receive_accept_error : 1,
    __reserved_1 : 1,
    send_illegal_vector : 1,
    receive_illegal_vector : 1,
    illegal_register_address : 1,
    __reserved_2 : 24;
   unsigned int __reserved_3[3];
  } error_bits;
  struct {
   unsigned int errors;
   unsigned int __reserved_3[3];
  } all_errors;
 } esr;

        struct { unsigned int __reserved[4]; } __reserved_08;

        struct { unsigned int __reserved[4]; } __reserved_09;

        struct { unsigned int __reserved[4]; } __reserved_10;

        struct { unsigned int __reserved[4]; } __reserved_11;

        struct { unsigned int __reserved[4]; } __reserved_12;

        struct { unsigned int __reserved[4]; } __reserved_13;

        struct { unsigned int __reserved[4]; } __reserved_14;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   destination_mode : 1,
   delivery_status : 1,
   __reserved_1 : 1,
   level : 1,
   trigger : 1,
   __reserved_2 : 2,
   shorthand : 2,
   __reserved_3 : 12;
  unsigned int __reserved_4[3];
 } icr1;

        struct {
  union {
   unsigned int __reserved_1 : 24,
    phys_dest : 4,
    __reserved_2 : 4;
   unsigned int __reserved_3 : 24,
    logical_dest : 8;
  } dest;
  unsigned int __reserved_4[3];
 } icr2;

        struct {
  unsigned int vector : 8,
   __reserved_1 : 4,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   timer_mode : 1,
   __reserved_3 : 14;
  unsigned int __reserved_4[3];
 } lvt_timer;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   __reserved_3 : 15;
  unsigned int __reserved_4[3];
 } lvt_thermal;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   __reserved_3 : 15;
  unsigned int __reserved_4[3];
 } lvt_pc;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   polarity : 1,
   remote_irr : 1,
   trigger : 1,
   mask : 1,
   __reserved_2 : 15;
  unsigned int __reserved_3[3];
 } lvt_lint0;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   polarity : 1,
   remote_irr : 1,
   trigger : 1,
   mask : 1,
   __reserved_2 : 15;
  unsigned int __reserved_3[3];
 } lvt_lint1;

        struct {
  unsigned int vector : 8,
   __reserved_1 : 4,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   __reserved_3 : 15;
  unsigned int __reserved_4[3];
 } lvt_error;

        struct {
  unsigned int initial_count;
  unsigned int __reserved_2[3];
 } timer_icr;

        const
 struct {
  unsigned int curr_count;
  unsigned int __reserved_2[3];
 } timer_ccr;

        struct { unsigned int __reserved[4]; } __reserved_16;

        struct { unsigned int __reserved[4]; } __reserved_17;

        struct { unsigned int __reserved[4]; } __reserved_18;

        struct { unsigned int __reserved[4]; } __reserved_19;

        struct {
  unsigned int divisor : 4,
   __reserved_1 : 28;
  unsigned int __reserved_2[3];
 } timer_dcr;

        struct { unsigned int __reserved[4]; } __reserved_20;

} __attribute__ ((packed)) ;
# 16 "linux-2.6.18/include/asm/fixmap.h" 2


# 1 "linux-2.6.18/include/asm/vsyscall32.h" 1
# 19 "linux-2.6.18/include/asm/fixmap.h" 2
# 35 "linux-2.6.18/include/asm/fixmap.h"
enum fixed_addresses {
 VSYSCALL_LAST_PAGE,
 VSYSCALL_FIRST_PAGE = VSYSCALL_LAST_PAGE + (((-2UL << 20)-(-10UL << 20)) >> 12) - 1,
 VSYSCALL_HPET,
 FIX_HPET_BASE,

 FIX_APIC_BASE,


 FIX_IO_APIC_BASE_0,
 FIX_IO_APIC_BASE_END = FIX_IO_APIC_BASE_0 + 128 -1,

 __end_of_fixed_addresses
};

extern void __set_fixmap (enum fixed_addresses idx,
     unsigned long phys, pgprot_t flags);
# 71 "linux-2.6.18/include/asm/fixmap.h"
extern void __this_fixmap_does_not_exist(void);






static inline   __attribute__((always_inline)) __attribute__((always_inline)) unsigned long fix_to_virt(const unsigned int idx)
{
# 89 "linux-2.6.18/include/asm/fixmap.h"
 if (idx >= __end_of_fixed_addresses)
  __this_fixmap_does_not_exist();

        return (((-2UL << 20)-(1UL << 12)) - ((idx) << 12));
}
# 10 "linux-2.6.18/include/asm/pgtable.h" 2




typedef  pud_t  _GLOBAL_147_T; extern  _GLOBAL_147_T  _GLOBAL_0_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_1_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_2_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_3_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_4_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_5_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_6_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_7_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_8_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_9_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_10_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_11_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_12_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_13_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_14_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_15_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_16_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_17_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_18_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_19_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_20_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_21_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_22_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_23_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_24_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_25_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_26_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_27_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_28_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_29_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_30_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_31_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_32_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_33_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_34_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_35_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_36_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_37_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_38_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_39_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_40_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_41_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_42_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_43_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_44_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_45_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_46_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_47_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_48_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_147_T  _GLOBAL_49_level3_kernel_pgt_I [ 512 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_level3_kernel_pgt_I) *_GLOBAL_level3_kernel_pgt_14_A[NUM_STACKS];  
typedef  pud_t  _GLOBAL_148_T; extern  _GLOBAL_148_T  _GLOBAL_0_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_1_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_2_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_3_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_4_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_5_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_6_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_7_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_8_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_9_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_10_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_11_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_12_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_13_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_14_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_15_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_16_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_17_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_18_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_19_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_20_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_21_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_22_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_23_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_24_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_25_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_26_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_27_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_28_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_29_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_30_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_31_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_32_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_33_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_34_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_35_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_36_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_37_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_38_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_39_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_40_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_41_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_42_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_43_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_44_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_45_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_46_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_47_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_48_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_148_T  _GLOBAL_49_level3_physmem_pgt_I [ 512 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_level3_physmem_pgt_I) *_GLOBAL_level3_physmem_pgt_15_A[NUM_STACKS];  
typedef  pud_t  _GLOBAL_149_T; extern  _GLOBAL_149_T  _GLOBAL_0_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_1_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_2_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_3_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_4_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_5_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_6_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_7_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_8_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_9_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_10_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_11_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_12_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_13_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_14_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_15_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_16_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_17_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_18_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_19_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_20_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_21_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_22_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_23_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_24_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_25_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_26_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_27_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_28_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_29_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_30_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_31_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_32_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_33_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_34_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_35_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_36_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_37_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_38_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_39_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_40_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_41_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_42_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_43_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_44_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_45_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_46_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_47_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_48_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_49_level3_ident_pgt_I [ 512 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_level3_ident_pgt_I) *_GLOBAL_level3_ident_pgt_16_A[NUM_STACKS];  
typedef  pmd_t  _GLOBAL_150_T; extern  _GLOBAL_150_T  _GLOBAL_0_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_1_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_2_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_3_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_4_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_5_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_6_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_7_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_8_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_9_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_10_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_11_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_12_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_13_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_14_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_15_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_16_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_17_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_18_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_19_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_20_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_21_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_22_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_23_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_24_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_25_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_26_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_27_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_28_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_29_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_30_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_31_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_32_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_33_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_34_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_35_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_36_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_37_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_38_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_39_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_40_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_41_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_42_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_43_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_44_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_45_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_46_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_47_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_48_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_49_level2_kernel_pgt_I [ 512 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_level2_kernel_pgt_I) *_GLOBAL_level2_kernel_pgt_17_A[NUM_STACKS];  
typedef  pgd_t  _GLOBAL_151_T; extern  _GLOBAL_151_T  _GLOBAL_0_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_1_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_2_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_3_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_4_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_5_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_6_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_7_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_8_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_9_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_10_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_11_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_12_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_13_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_14_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_15_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_16_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_17_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_18_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_19_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_20_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_21_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_22_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_23_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_24_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_25_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_26_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_27_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_28_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_29_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_30_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_31_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_32_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_33_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_34_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_35_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_36_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_37_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_38_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_39_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_40_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_41_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_42_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_43_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_44_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_45_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_46_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_47_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_48_init_level4_pgt_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_49_init_level4_pgt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_init_level4_pgt_I) *_GLOBAL_init_level4_pgt_18_A[NUM_STACKS];  
typedef  pgd_t  _GLOBAL_152_T; extern  _GLOBAL_152_T  _GLOBAL_0_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_1_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_2_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_3_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_4_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_5_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_6_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_7_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_8_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_9_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_10_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_11_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_12_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_13_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_14_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_15_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_16_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_17_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_18_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_19_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_20_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_21_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_22_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_23_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_24_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_25_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_26_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_27_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_28_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_29_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_30_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_31_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_32_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_33_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_34_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_35_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_36_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_37_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_38_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_39_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_40_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_41_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_42_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_43_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_44_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_45_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_46_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_47_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_48_boot_level4_pgt_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_49_boot_level4_pgt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_boot_level4_pgt_I) *_GLOBAL_boot_level4_pgt_19_A[NUM_STACKS];  
typedef  unsigned long   _GLOBAL_153_T; extern  _GLOBAL_153_T  global___supported_pte_mask[NUM_STACKS];    



extern int nonx_setup(char *str);
extern void paging_init(void);
extern void clear_kernel_mapping(unsigned long addr, unsigned long size);

typedef  unsigned long   _GLOBAL_154_T; extern  _GLOBAL_154_T  global_pgkern_mask[NUM_STACKS];    





typedef  unsigned long   _GLOBAL_155_T; extern  _GLOBAL_155_T  _GLOBAL_0_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_1_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_2_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_3_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_4_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_5_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_6_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_7_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_8_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_9_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_10_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_11_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_12_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_13_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_14_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_15_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_16_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_17_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_18_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_19_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_20_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_21_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_22_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_23_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_24_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_25_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_26_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_27_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_28_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_29_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_30_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_31_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_32_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_33_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_34_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_35_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_36_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_37_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_38_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_39_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_40_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_41_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_42_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_43_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_44_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_45_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_46_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_47_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_48_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_155_T  _GLOBAL_49_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_empty_zero_page_I) *_GLOBAL_empty_zero_page_20_A[NUM_STACKS];      
# 73 "linux-2.6.18/include/asm/pgtable.h"
static inline  __attribute__((always_inline)) void set_pte(pte_t *dst, pte_t val)
{
 ((*dst).pte) = ((val).pte);
}


static inline  __attribute__((always_inline)) void set_pmd(pmd_t *dst, pmd_t val)
{
        ((*dst).pmd) = ((val).pmd);
}

static inline  __attribute__((always_inline)) void set_pud(pud_t *dst, pud_t val)
{
 ((*dst).pud) = ((val).pud);
}

static inline  __attribute__((always_inline)) void pud_clear (pud_t *pud)
{
 set_pud(pud, ((pud_t) { (0) } ));
}

static inline  __attribute__((always_inline)) void set_pgd(pgd_t *dst, pgd_t val)
{
 ((*dst).pgd) = ((val).pgd);
}

static inline  __attribute__((always_inline)) void pgd_clear (pgd_t * pgd)
{
 set_pgd(pgd, ((pgd_t) { (0) } ));
}






struct mm_struct;

static inline  __attribute__((always_inline)) pte_t ptep_get_and_clear_full(struct mm_struct *mm, unsigned long addr, pte_t *ptep, int full)
{
 pte_t pte;
 if (full) {
  pte = *ptep;
  *ptep = ((pte_t) { (0) } );
 } else {
  pte = ((pte_t) { (((__typeof__(*(&(ptep)->pte)))__xchg((unsigned long)(0),(&(ptep)->pte),sizeof(*(&(ptep)->pte))))) } );
 }
 return pte;
}
# 230 "linux-2.6.18/include/asm/pgtable.h"
static inline  __attribute__((always_inline)) unsigned long pgd_bad(pgd_t pgd)
{
       unsigned long val = ((pgd).pgd);
       val &= ~(~((1UL << 12)-1) & ((1UL << 46) - 1));
       val &= ~(0x004 | 0x040);
       return val & ~(0x001 | 0x002 | 0x020);
}

static inline  __attribute__((always_inline)) unsigned long pud_bad(pud_t pud)
{
       unsigned long val = ((pud).pud);
       val &= ~(~((1UL << 12)-1) & ((1UL << 46) - 1));
       val &= ~(0x004 | 0x040);
       return val & ~(0x001 | 0x002 | 0x020);
}
# 255 "linux-2.6.18/include/asm/pgtable.h"
static inline  __attribute__((always_inline)) pte_t pfn_pte(unsigned long page_nr, pgprot_t pgprot)
{
 pte_t pte;
 ((pte).pte) = (page_nr << 12);
 ((pte).pte) |= ((pgprot).pgprot);
 ((pte).pte) &= global___supported_pte_mask[get_stack_id()];
 return pte;
}






static inline  __attribute__((always_inline)) int pte_user(pte_t pte) { return ((pte).pte) & 0x004; }
static inline  __attribute__((always_inline)) int pte_read(pte_t pte) { return ((pte).pte) & 0x004; }
static inline  __attribute__((always_inline)) int pte_exec(pte_t pte) { return ((pte).pte) & 0x004; }
static inline  __attribute__((always_inline)) int pte_dirty(pte_t pte) { return ((pte).pte) & 0x040; }
static inline  __attribute__((always_inline)) int pte_young(pte_t pte) { return ((pte).pte) & 0x020; }
static inline  __attribute__((always_inline)) int pte_write(pte_t pte) { return ((pte).pte) & 0x002; }
static inline  __attribute__((always_inline)) int pte_file(pte_t pte) { return ((pte).pte) & 0x040; }
static inline  __attribute__((always_inline)) int pte_huge(pte_t pte) { return ((pte).pte) & 0x080; }

static inline  __attribute__((always_inline)) pte_t pte_rdprotect(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) & ~0x004) } )); return pte; }
static inline  __attribute__((always_inline)) pte_t pte_exprotect(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) & ~0x004) } )); return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkclean(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) & ~0x040) } )); return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkold(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) & ~0x020) } )); return pte; }
static inline  __attribute__((always_inline)) pte_t pte_wrprotect(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) & ~0x002) } )); return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkread(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) | 0x004) } )); return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkexec(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) | 0x004) } )); return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkdirty(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) | 0x040) } )); return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkyoung(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) | 0x020) } )); return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkwrite(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) | 0x002) } )); return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkhuge(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) | 0x080) } )); return pte; }

struct vm_area_struct;

static inline  __attribute__((always_inline)) int ptep_test_and_clear_dirty(struct vm_area_struct *vma, unsigned long addr, pte_t *ptep)
{
 if (!pte_dirty(*ptep))
  return 0;
 return test_and_clear_bit(6, &ptep->pte);
}

static inline  __attribute__((always_inline)) int ptep_test_and_clear_young(struct vm_area_struct *vma, unsigned long addr, pte_t *ptep)
{
 if (!pte_young(*ptep))
  return 0;
 return test_and_clear_bit(5, &ptep->pte);
}

static inline  __attribute__((always_inline)) void ptep_set_wrprotect(struct mm_struct *mm, unsigned long addr, pte_t *ptep)
{
 clear_bit(1, &ptep->pte);
}






static inline  __attribute__((always_inline)) int pmd_large(pmd_t pte) {
 return (((pte).pmd) & (0x080|0x001)) == (0x080|0x001);
}
# 367 "linux-2.6.18/include/asm/pgtable.h"
static inline  __attribute__((always_inline)) pte_t mk_pte_phys(unsigned long physpage, pgprot_t pgprot)
{
 pte_t pte;
 ((pte).pte) = physpage | ((pgprot).pgprot);
 return pte;
}


static inline  __attribute__((always_inline)) pte_t pte_modify(pte_t pte, pgprot_t newprot)
{
 ((pte).pte) &= ((~((1UL << 12)-1) & ((1UL << 46) - 1)) | 0x020 | 0x040);
 ((pte).pte) |= ((newprot).pgprot);
 ((pte).pte) &= global___supported_pte_mask[get_stack_id()];
       return pte;
}
# 417 "linux-2.6.18/include/asm/pgtable.h"
typedef  spinlock_t  _GLOBAL_156_T; extern  _GLOBAL_156_T  global_pgd_lock[NUM_STACKS];   
typedef  struct page   _GLOBAL_157_T; extern  _GLOBAL_157_T  * global_pgd_list[NUM_STACKS];    
void vmalloc_sync_all(void);



extern int kern_addr_valid(unsigned long addr);
# 451 "linux-2.6.18/include/asm/pgtable.h"
# 1 "linux-2.6.18/include/asm-generic/pgtable.h" 1
# 197 "linux-2.6.18/include/asm-generic/pgtable.h"
void pgd_clear_bad(pgd_t *);
void pud_clear_bad(pud_t *);
void pmd_clear_bad(pmd_t *);

static inline  __attribute__((always_inline)) int pgd_none_or_clear_bad(pgd_t *pgd)
{
 if ((!((*pgd).pgd)))
  return 1;
 if (__builtin_expect(!!(pgd_bad(*pgd)), 0)) {
  pgd_clear_bad(pgd);
  return 1;
 }
 return 0;
}

static inline  __attribute__((always_inline)) int pud_none_or_clear_bad(pud_t *pud)
{
 if ((!((*pud).pud)))
  return 1;
 if (__builtin_expect(!!(pud_bad(*pud)), 0)) {
  pud_clear_bad(pud);
  return 1;
 }
 return 0;
}

static inline  __attribute__((always_inline)) int pmd_none_or_clear_bad(pmd_t *pmd)
{
 if ((!((*pmd).pmd)))
  return 1;
 if (__builtin_expect(!!(((((*pmd).pmd) & (~(~((1UL << 12)-1) & ((1UL << 46) - 1)) & ~0x004)) != (0x001 | 0x002 | 0x020 | 0x040) )), 0)) {
  pmd_clear_bad(pmd);
  return 1;
 }
 return 0;
}
# 452 "linux-2.6.18/include/asm/pgtable.h" 2
# 39 "linux-2.6.18/include/linux/mm.h" 2
# 58 "linux-2.6.18/include/linux/mm.h"
struct vm_area_struct {
 struct mm_struct * vm_mm;
 unsigned long vm_start;
 unsigned long vm_end;



 struct vm_area_struct *vm_next;

 pgprot_t vm_page_prot;
 unsigned long vm_flags;

 struct rb_node vm_rb;







 union {
  struct {
   struct list_head list;
   void *parent;
   struct vm_area_struct *head;
  } vm_set;

  struct raw_prio_tree_node prio_tree_node;
 } shared;







 struct list_head anon_vma_node;
 struct anon_vma *anon_vma;


 struct vm_operations_struct * vm_ops;


 unsigned long vm_pgoff;

 struct file * vm_file;
 void * vm_private_data;
 unsigned long vm_truncate_count;







};






struct vm_list_struct {
 struct vm_list_struct *next;
 struct vm_area_struct *vma;
};
# 188 "linux-2.6.18/include/linux/mm.h"
typedef  pgprot_t  _GLOBAL_158_T; extern  _GLOBAL_158_T  _GLOBAL_0_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_1_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_2_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_3_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_4_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_5_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_6_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_7_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_8_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_9_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_10_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_11_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_12_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_13_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_14_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_15_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_16_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_17_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_18_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_19_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_20_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_21_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_22_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_23_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_24_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_25_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_26_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_27_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_28_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_29_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_30_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_31_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_32_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_33_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_34_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_35_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_36_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_37_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_38_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_39_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_40_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_41_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_42_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_43_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_44_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_45_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_46_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_47_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_48_protection_map_I [ 16 ] ; extern  _GLOBAL_158_T  _GLOBAL_49_protection_map_I [ 16 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_protection_map_I) *_GLOBAL_protection_map_21_A[NUM_STACKS];  







struct vm_operations_struct {
 void (*open)(struct vm_area_struct * area);
 void (*close)(struct vm_area_struct * area);
 struct page * (*nopage)(struct vm_area_struct * area, unsigned long address, int *type);
 int (*populate)(struct vm_area_struct * area, unsigned long address, unsigned long len, pgprot_t prot, unsigned long pgoff, int nonblock);



 int (*page_mkwrite)(struct vm_area_struct *vma, struct page *page);







};

struct mmu_gather;
struct inode;







struct page {
 unsigned long flags;

 atomic_t _count;
 atomic_t _mapcount;



 union {
     struct {
  unsigned long private;






  struct address_space *mapping;






     };

     spinlock_t ptl;

 };
 unsigned long index;
 struct list_head lru;
# 270 "linux-2.6.18/include/linux/mm.h"
};
# 279 "linux-2.6.18/include/linux/mm.h"
# 1 "linux-2.6.18/include/linux/page-flags.h" 1
# 250 "linux-2.6.18/include/linux/page-flags.h"
struct page;

int test_clear_page_dirty(struct page *page);
int test_clear_page_writeback(struct page *page);
int test_set_page_writeback(struct page *page);

static inline  __attribute__((always_inline)) void clear_page_dirty(struct page *page)
{
 test_clear_page_dirty(page);
}

static inline  __attribute__((always_inline)) void set_page_writeback(struct page *page)
{
 test_set_page_writeback(page);
}
# 280 "linux-2.6.18/include/linux/mm.h" 2
# 298 "linux-2.6.18/include/linux/mm.h"
static inline  __attribute__((always_inline)) int put_page_testzero(struct page *page)
{
 do { if (((&page->_count)->counter) == 0) ; } while(0);
 return atomic_dec_and_test(&page->_count);
}





static inline  __attribute__((always_inline)) int get_page_unless_zero(struct page *page)
{
 return ({ int c, old; c = (((&page->_count))->counter); for (;;) { if (__builtin_expect(!!(c == (0)), 0)) break; old = ((int)((__typeof__(*(&((((&page->_count)))->counter))))__cmpxchg((&((((&page->_count)))->counter)),(unsigned long)(c), (unsigned long)(c + (1)),sizeof(*(&((((&page->_count)))->counter)))))); if (__builtin_expect(!!(old == c), 1)) break; c = old; } c != (0); });
}

extern void __page_cache_release(struct page *);

static inline  __attribute__((always_inline)) int page_count(struct page *page)
{
 if (__builtin_expect(!!((__builtin_constant_p(14) ? constant_test_bit((14),(&(page)->flags)) : variable_test_bit((14),(&(page)->flags)))), 0))
  page = (struct page *)((page)->private);
 return ((&page->_count)->counter);
}

static inline  __attribute__((always_inline)) void get_page(struct page *page)
{
 if (__builtin_expect(!!((__builtin_constant_p(14) ? constant_test_bit((14),(&(page)->flags)) : variable_test_bit((14),(&(page)->flags)))), 0))
  page = (struct page *)((page)->private);
 atomic_inc(&page->_count);
}





static inline  __attribute__((always_inline)) void init_page_count(struct page *page)
{
 (((&page->_count)->counter) = (1));
}

void put_page(struct page *page);
void put_pages_list(struct list_head *pages);

void split_page(struct page *page, unsigned int order);
# 466 "linux-2.6.18/include/linux/mm.h"
static inline  __attribute__((always_inline)) unsigned long page_zonenum(struct page *page)
{
 return (page->flags >> (((((sizeof(unsigned long)*8) - 0) - 0) - 2) * (2 != 0))) & ((1UL << 2) - 1);
}

struct zone;
extern struct zone *zone_table[];

static inline  __attribute__((always_inline)) int page_zone_id(struct page *page)
{
 return (page->flags >> (((((sizeof(unsigned long)*8) - 0) - 0) - 2) * (2 != 0))) & ((1UL << (0 + 2)) - 1);
}
static inline  __attribute__((always_inline)) struct zone *page_zone(struct page *page)
{
 return zone_table[page_zone_id(page)];
}

static inline  __attribute__((always_inline)) unsigned long page_to_nid(struct page *page)
{
 if ((0 > 0 || 0 == 0))
  return (page->flags >> ((((sizeof(unsigned long)*8) - 0) - 0) * (0 != 0))) & ((1UL << 0) - 1);
 else
  return page_zone(page)->zone_pgdat->node_id;
}
static inline  __attribute__((always_inline)) unsigned long page_to_section(struct page *page)
{
 return (page->flags >> (((sizeof(unsigned long)*8) - 0) * (0 != 0))) & ((1UL << 0) - 1);
}

static inline  __attribute__((always_inline)) void set_page_zone(struct page *page, unsigned long zone)
{
 page->flags &= ~(((1UL << 2) - 1) << (((((sizeof(unsigned long)*8) - 0) - 0) - 2) * (2 != 0)));
 page->flags |= (zone & ((1UL << 2) - 1)) << (((((sizeof(unsigned long)*8) - 0) - 0) - 2) * (2 != 0));
}
static inline  __attribute__((always_inline)) void set_page_node(struct page *page, unsigned long node)
{
 page->flags &= ~(((1UL << 0) - 1) << ((((sizeof(unsigned long)*8) - 0) - 0) * (0 != 0)));
 page->flags |= (node & ((1UL << 0) - 1)) << ((((sizeof(unsigned long)*8) - 0) - 0) * (0 != 0));
}
static inline  __attribute__((always_inline)) void set_page_section(struct page *page, unsigned long section)
{
 page->flags &= ~(((1UL << 0) - 1) << (((sizeof(unsigned long)*8) - 0) * (0 != 0)));
 page->flags |= (section & ((1UL << 0) - 1)) << (((sizeof(unsigned long)*8) - 0) * (0 != 0));
}

static inline  __attribute__((always_inline)) void set_page_links(struct page *page, unsigned long zone,
 unsigned long node, unsigned long pfn)
{
 set_page_zone(page, zone);
 set_page_node(page, node);
 set_page_section(page, ((pfn) >> 0));
}




# 1 "linux-2.6.18/include/linux/vmstat.h" 1
# 85 "linux-2.6.18/include/linux/vmstat.h"
typedef  atomic_long_t  _GLOBAL_159_T; extern  _GLOBAL_159_T  vm_stat [ NR_VM_ZONE_STAT_ITEMS ] ;   

static inline  __attribute__((always_inline)) void zone_page_state_add(long x, struct zone *zone,
     enum zone_stat_item item)
{
 atomic_long_add(x, &zone->vm_stat[item]);
 atomic_long_add(x, &vm_stat[item]);
}

static inline  __attribute__((always_inline)) unsigned long global_page_state(enum zone_stat_item item)
{
 long x = atomic_long_read(&vm_stat[item]);




 return x;
}

static inline  __attribute__((always_inline)) unsigned long zone_page_state(struct zone *zone,
     enum zone_stat_item item)
{
 long x = atomic_long_read(&zone->vm_stat[item]);




 return x;
}
# 156 "linux-2.6.18/include/linux/vmstat.h"
static inline  __attribute__((always_inline)) void zap_zone_vm_stats(struct zone *zone)
{
 memset(zone->vm_stat, 0, sizeof(zone->vm_stat));
}

extern void inc_zone_state(struct zone *, enum zone_stat_item);
# 183 "linux-2.6.18/include/linux/vmstat.h"
static inline  __attribute__((always_inline)) void __mod_zone_page_state(struct zone *zone,
   enum zone_stat_item item, int delta)
{
 zone_page_state_add(delta, zone, item);
}

static inline  __attribute__((always_inline)) void __inc_zone_state(struct zone *zone, enum zone_stat_item item)
{
 atomic_long_inc(&zone->vm_stat[item]);
 atomic_long_inc(&vm_stat[item]);
}

static inline  __attribute__((always_inline)) void __inc_zone_page_state(struct page *page,
   enum zone_stat_item item)
{
 __inc_zone_state(page_zone(page), item);
}

static inline  __attribute__((always_inline)) void __dec_zone_page_state(struct page *page,
   enum zone_stat_item item)
{
 atomic_long_dec(&page_zone(page)->vm_stat[item]);
 atomic_long_dec(&vm_stat[item]);
}
# 216 "linux-2.6.18/include/linux/vmstat.h"
static inline  __attribute__((always_inline)) void refresh_cpu_vm_stats(int cpu) { }
static inline  __attribute__((always_inline)) void refresh_vm_stats(void) { }
# 523 "linux-2.6.18/include/linux/mm.h" 2



typedef  struct page   _GLOBAL_160_T; extern  _GLOBAL_160_T  * global_mem_map[NUM_STACKS];    


static inline   __attribute__((always_inline)) __attribute__((always_inline)) void *lowmem_page_address(struct page *page)
{
 return ((void *)((unsigned long)(((unsigned long)((page) - global_mem_map[get_stack_id()]) + (0UL)) << 12)+((unsigned long)0xffff810000000000UL)));
}
# 570 "linux-2.6.18/include/linux/mm.h"
typedef  struct address_space   _GLOBAL_161_T; extern  _GLOBAL_161_T  global_swapper_space[NUM_STACKS];    
static inline  __attribute__((always_inline)) struct address_space *page_mapping(struct page *page)
{
 struct address_space *mapping = page->mapping;

 if (__builtin_expect(!!((__builtin_constant_p(15) ? constant_test_bit((15),(&(page)->flags)) : variable_test_bit((15),(&(page)->flags)))), 0))
  mapping = &global_swapper_space[get_stack_id()];
 else if (__builtin_expect(!!((unsigned long)mapping & 1), 0))
  mapping = ((void *)0);
 return mapping;
}

static inline  __attribute__((always_inline)) int PageAnon(struct page *page)
{
 return ((unsigned long)page->mapping & 1) != 0;
}





static inline  __attribute__((always_inline)) unsigned long page_index(struct page *page)
{
 if (__builtin_expect(!!((__builtin_constant_p(15) ? constant_test_bit((15),(&(page)->flags)) : variable_test_bit((15),(&(page)->flags)))), 0))
  return ((page)->private);
 return page->index;
}






static inline  __attribute__((always_inline)) void reset_page_mapcount(struct page *page)
{
 (((&(page)->_mapcount)->counter) = (-1));
}

static inline  __attribute__((always_inline)) int page_mapcount(struct page *page)
{
 return ((&(page)->_mapcount)->counter) + 1;
}




static inline  __attribute__((always_inline)) int page_mapped(struct page *page)
{
 return ((&(page)->_mapcount)->counter) >= 0;
}
# 645 "linux-2.6.18/include/linux/mm.h"
extern void show_free_areas(void);


struct page *shmem_nopage(struct vm_area_struct *vma,
   unsigned long address, int *type);
int shmem_set_policy(struct vm_area_struct *vma, struct mempolicy *new);
struct mempolicy *shmem_get_policy(struct vm_area_struct *vma,
     unsigned long addr);
int shmem_lock(struct file *file, int lock, struct user_struct *user);
# 675 "linux-2.6.18/include/linux/mm.h"
struct file *shmem_file_setup(char *name, loff_t size, unsigned long flags);
extern int shmem_mmap(struct file *file, struct vm_area_struct *vma);

int shmem_zero_setup(struct vm_area_struct *);
# 688 "linux-2.6.18/include/linux/mm.h"
static inline  __attribute__((always_inline)) int can_do_mlock(void)
{
 if (capable(14))
  return 1;
 if (get_nsc_task()->signal->rlim[8].rlim_cur != 0)
  return 1;
 return 0;
}
extern int user_shm_lock(size_t, struct user_struct *);
extern void user_shm_unlock(size_t, struct user_struct *);




struct zap_details {
 struct vm_area_struct *nonlinear_vma;
 struct address_space *check_mapping;
 unsigned long first_index;
 unsigned long last_index;
 spinlock_t *i_mmap_lock;
 unsigned long truncate_count;
};

struct page *vm_normal_page(struct vm_area_struct *, unsigned long, pte_t);
unsigned long zap_page_range(struct vm_area_struct *vma, unsigned long address,
  unsigned long size, struct zap_details *);
unsigned long unmap_vmas(struct mmu_gather **tlb,
  struct vm_area_struct *start_vma, unsigned long start_addr,
  unsigned long end_addr, unsigned long *nr_accounted,
  struct zap_details *);
void free_pgd_range(struct mmu_gather **tlb, unsigned long addr,
  unsigned long end, unsigned long floor, unsigned long ceiling);
void free_pgtables(struct mmu_gather **tlb, struct vm_area_struct *start_vma,
  unsigned long floor, unsigned long ceiling);
int copy_page_range(struct mm_struct *dst, struct mm_struct *src,
   struct vm_area_struct *vma);
int zeromap_page_range(struct vm_area_struct *vma, unsigned long from,
   unsigned long size, pgprot_t prot);
void unmap_mapping_range(struct address_space *mapping,
  loff_t const holebegin, loff_t const holelen, int even_cows);

static inline  __attribute__((always_inline)) void unmap_shared_mapping_range(struct address_space *mapping,
  loff_t const holebegin, loff_t const holelen)
{
 unmap_mapping_range(mapping, holebegin, holelen, 0);
}

extern int vmtruncate(struct inode * inode, loff_t offset);
extern int vmtruncate_range(struct inode * inode, loff_t offset, loff_t end);
extern int install_page(struct mm_struct *mm, struct vm_area_struct *vma, unsigned long addr, struct page *page, pgprot_t prot);
extern int install_file_pte(struct mm_struct *mm, struct vm_area_struct *vma, unsigned long addr, unsigned long pgoff, pgprot_t prot);


extern int __handle_mm_fault(struct mm_struct *mm,struct vm_area_struct *vma,
   unsigned long address, int write_access);

static inline  __attribute__((always_inline)) int handle_mm_fault(struct mm_struct *mm,
   struct vm_area_struct *vma, unsigned long address,
   int write_access)
{
 return __handle_mm_fault(mm, vma, address, write_access) &
    (~0x10);
}
# 762 "linux-2.6.18/include/linux/mm.h"
extern int make_pages_present(unsigned long addr, unsigned long end);
extern int access_process_vm(struct task_struct *tsk, unsigned long addr, void *buf, int len, int write);
void install_arg_page(struct vm_area_struct *, struct page *, unsigned long);

int get_user_pages(struct task_struct *tsk, struct mm_struct *mm, unsigned long start,
  int len, int write, int force, struct page **pages, struct vm_area_struct **vmas);
void print_bad_pte(struct vm_area_struct *, pte_t, unsigned long);

int __set_page_dirty_buffers(struct page *page);
int __set_page_dirty_nobuffers(struct page *page);
int redirty_page_for_writepage(struct writeback_control *wbc,
    struct page *page);
int set_page_dirty(struct page *page);
int set_page_dirty_lock(struct page *page);
int clear_page_dirty_for_io(struct page *page);

extern unsigned long do_mremap(unsigned long addr,
          unsigned long old_len, unsigned long new_len,
          unsigned long flags, unsigned long new_addr);
# 793 "linux-2.6.18/include/linux/mm.h"
typedef int (*shrinker_t)(int nr_to_scan, gfp_t gfp_mask);







struct shrinker;
extern struct shrinker *set_shrinker(int, shrinker_t);
extern void remove_shrinker(struct shrinker *shrinker);

extern pte_t *get_locked_pte(struct mm_struct *mm, unsigned long addr, spinlock_t **ptl);

int __pud_alloc(struct mm_struct *mm, pgd_t *pgd, unsigned long address);
int __pmd_alloc(struct mm_struct *mm, pud_t *pud, unsigned long address);
int __pte_alloc(struct mm_struct *mm, pmd_t *pmd, unsigned long address);
int __pte_alloc_kernel(pmd_t *pmd, unsigned long address);






static inline  __attribute__((always_inline)) pud_t *pud_alloc(struct mm_struct *mm, pgd_t *pgd, unsigned long address)
{
 return (__builtin_expect(!!((!((*pgd).pgd))), 0) && __pud_alloc(mm, pgd, address))?
  ((void *)0): ((pud_t *) ((unsigned long) ((void *)((unsigned long)((unsigned long)((*(pgd)).pgd) & (~((1UL << 12)-1) & ((1UL << 46) - 1)))+((unsigned long)0xffff810000000000UL)))) + (((address) >> 30) & (512 -1)));
}

static inline  __attribute__((always_inline)) pmd_t *pmd_alloc(struct mm_struct *mm, pud_t *pud, unsigned long address)
{
 return (__builtin_expect(!!((!((*pud).pud))), 0) && __pmd_alloc(mm, pud, address))?
  ((void *)0): ((pmd_t *) ((unsigned long) ((void *)((unsigned long)(((*(pud)).pud) & (~((1UL << 12)-1) & ((1UL << 46) - 1)))+((unsigned long)0xffff810000000000UL)))) + (((address) >> 21) & (512 -1)));
}
# 878 "linux-2.6.18/include/linux/mm.h"
extern void free_area_init(unsigned long * zones_size);
extern void free_area_init_node(int nid, pg_data_t *pgdat,
 unsigned long * zones_size, unsigned long zone_start_pfn,
 unsigned long *zholes_size);
extern void memmap_init_zone(unsigned long, int, unsigned long, unsigned long);
extern void setup_per_zone_pages_min(void);
extern void mem_init(void);
extern void show_mem(void);
extern void si_meminfo(struct sysinfo * val);
extern void si_meminfo_node(struct sysinfo *val, int nid);




static inline  __attribute__((always_inline)) void setup_per_cpu_pageset(void) {}



void vma_prio_tree_add(struct vm_area_struct *, struct vm_area_struct *old);
void vma_prio_tree_insert(struct vm_area_struct *, struct prio_tree_root *);
void vma_prio_tree_remove(struct vm_area_struct *, struct prio_tree_root *);
struct vm_area_struct *vma_prio_tree_next(struct vm_area_struct *vma,
 struct prio_tree_iter *iter);





static inline  __attribute__((always_inline)) void vma_nonlinear_insert(struct vm_area_struct *vma,
     struct list_head *list)
{
 vma->shared.vm_set.parent = ((void *)0);
 list_add_tail(&vma->shared.vm_set.list, list);
}


extern int __vm_enough_memory(long pages, int cap_sys_admin);
extern void vma_adjust(struct vm_area_struct *vma, unsigned long start,
 unsigned long end, unsigned long pgoff, struct vm_area_struct *insert);
extern struct vm_area_struct *vma_merge(struct mm_struct *,
 struct vm_area_struct *prev, unsigned long addr, unsigned long end,
 unsigned long vm_flags, struct anon_vma *, struct file *, unsigned long,
 struct mempolicy *);
extern struct anon_vma *find_mergeable_anon_vma(struct vm_area_struct *);
extern int split_vma(struct mm_struct *,
 struct vm_area_struct *, unsigned long addr, int new_below);
extern int insert_vm_struct(struct mm_struct *, struct vm_area_struct *);
extern void __vma_link_rb(struct mm_struct *, struct vm_area_struct *,
 struct rb_node **, struct rb_node *);
extern void unlink_file_vma(struct vm_area_struct *);
extern struct vm_area_struct *copy_vma(struct vm_area_struct **,
 unsigned long addr, unsigned long len, unsigned long pgoff);
extern void exit_mmap(struct mm_struct *);
extern int may_expand_vm(struct mm_struct *mm, unsigned long npages);

extern unsigned long get_unmapped_area(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);

extern unsigned long do_mmap_pgoff(struct file *file, unsigned long addr,
 unsigned long len, unsigned long prot,
 unsigned long flag, unsigned long pgoff);

static inline  __attribute__((always_inline)) unsigned long do_mmap(struct file *file, unsigned long addr,
 unsigned long len, unsigned long prot,
 unsigned long flag, unsigned long offset)
{
 unsigned long ret = -22;
 if ((offset + (((len)+(1UL << 12)-1)&(~((1UL << 12)-1)))) < offset)
  goto out;
 if (!(offset & ~(~((1UL << 12)-1))))
  ret = do_mmap_pgoff(file, addr, len, prot, flag, offset >> 12);
out:
 return ret;
}

extern int do_munmap(struct mm_struct *, unsigned long, size_t);

extern unsigned long do_brk(unsigned long, unsigned long);


extern unsigned long page_unuse(struct page *);
extern void truncate_inode_pages(struct address_space *, loff_t);
extern void truncate_inode_pages_range(struct address_space *,
           loff_t lstart, loff_t lend);


extern struct page *filemap_nopage(struct vm_area_struct *, unsigned long, int *);
extern int filemap_populate(struct vm_area_struct *, unsigned long,
  unsigned long, pgprot_t, unsigned long, int);


int write_one_page(struct page *page, int wait);







int do_page_cache_readahead(struct address_space *mapping, struct file *filp,
   unsigned long offset, unsigned long nr_to_read);
int force_page_cache_readahead(struct address_space *mapping, struct file *filp,
   unsigned long offset, unsigned long nr_to_read);
unsigned long page_cache_readahead(struct address_space *mapping,
     struct file_ra_state *ra,
     struct file *filp,
     unsigned long offset,
     unsigned long size);
void handle_ra_miss(struct address_space *mapping,
      struct file_ra_state *ra, unsigned long offset);
unsigned long max_sane_readahead(unsigned long nr);


extern int expand_stack(struct vm_area_struct *vma, unsigned long address);





extern struct vm_area_struct * find_vma(struct mm_struct * mm, unsigned long addr);
extern struct vm_area_struct * find_vma_prev(struct mm_struct * mm, unsigned long addr,
          struct vm_area_struct **pprev);



static inline  __attribute__((always_inline)) struct vm_area_struct * find_vma_intersection(struct mm_struct * mm, unsigned long start_addr, unsigned long end_addr)
{
 struct vm_area_struct * vma = find_vma(mm,start_addr);

 if (vma && end_addr <= vma->vm_start)
  vma = ((void *)0);
 return vma;
}

static inline  __attribute__((always_inline)) unsigned long vma_pages(struct vm_area_struct *vma)
{
 return (vma->vm_end - vma->vm_start) >> 12;
}

struct vm_area_struct *find_extend_vma(struct mm_struct *, unsigned long addr);
struct page *vmalloc_to_page(void *addr);
unsigned long vmalloc_to_pfn(void *addr);
int remap_pfn_range(struct vm_area_struct *, unsigned long addr,
   unsigned long pfn, unsigned long size, pgprot_t);
int vm_insert_page(struct vm_area_struct *, unsigned long addr, struct page *);

struct page *follow_page(struct vm_area_struct *, unsigned long address,
   unsigned int foll_flags);






void vm_stat_account(struct mm_struct *, unsigned long, struct file *, long);
# 1040 "linux-2.6.18/include/linux/mm.h"
static inline  __attribute__((always_inline)) void
kernel_map_pages(struct page *page, int numpages, int enable)
{
 if (!0 && !enable)
  debug_check_no_locks_freed(lowmem_page_address(page),
        numpages * (1UL << 12));
}


extern struct vm_area_struct *get_gate_vma(struct task_struct *tsk);

int in_gate_area_no_task(unsigned long addr);
int in_gate_area(struct task_struct *task, unsigned long addr);
# 1061 "linux-2.6.18/include/linux/mm.h"
int drop_caches_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
unsigned long shrink_slab(unsigned long scanned, gfp_t gfp_mask,
   unsigned long lru_pages);
void drop_pagecache(void);
void drop_slab(void);




typedef  int  _GLOBAL_162_T; extern  _GLOBAL_162_T  global_randomize_va_space[NUM_STACKS];   


const char *arch_vma_name(struct vm_area_struct *vma);
# 23 "linux-2.6.18/kernel/sysctl.c" 2
# 1 "linux-2.6.18/include/linux/swap.h" 1
# 17 "linux-2.6.18/include/linux/swap.h"
static inline  __attribute__((always_inline)) int current_is_kswapd(void)
{
 return get_nsc_task()->flags & 0x00040000;
}
# 52 "linux-2.6.18/include/linux/swap.h"
union swap_header {
 struct {
  char reserved[(1UL << 12) - 10];
  char magic[10];
 } magic;
 struct {
  char bootbits[1024];
  __u32 version;
  __u32 last_page;
  __u32 nr_badpages;
  unsigned char sws_uuid[16];
  unsigned char sws_volume[16];
  __u32 padding[117];
  __u32 badpages[1];
 } info;
};





typedef struct {
 unsigned long val;
} swp_entry_t;





struct reclaim_state {
 unsigned long reclaimed_slab;
};



struct address_space;
struct sysinfo;
struct writeback_control;
struct zone;
# 100 "linux-2.6.18/include/linux/swap.h"
struct swap_extent {
 struct list_head list;
 unsigned long start_page;
 unsigned long nr_pages;
 sector_t start_block;
};
# 114 "linux-2.6.18/include/linux/swap.h"
enum {
 SWP_USED = (1 << 0),
 SWP_WRITEOK = (1 << 1),
 SWP_ACTIVE = (SWP_USED | SWP_WRITEOK),

 SWP_SCANNING = (1 << 8),
};
# 130 "linux-2.6.18/include/linux/swap.h"
struct swap_info_struct {
 unsigned int flags;
 int prio;
 struct file *swap_file;
 struct block_device *bdev;
 struct list_head extent_list;
 struct swap_extent *curr_swap_extent;
 unsigned old_block_size;
 unsigned short * swap_map;
 unsigned int lowest_bit;
 unsigned int highest_bit;
 unsigned int cluster_next;
 unsigned int cluster_nr;
 unsigned int pages;
 unsigned int max;
 unsigned int inuse_pages;
 int next;
};

struct swap_list_t {
 int head;
 int next;
};





extern void out_of_memory(struct zonelist *zonelist, gfp_t gfp_mask, int order);


extern void swapin_readahead(swp_entry_t, unsigned long, struct vm_area_struct *);


typedef  unsigned long   _GLOBAL_163_T; extern  _GLOBAL_163_T  global_totalram_pages[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_164_T; extern  _GLOBAL_164_T  global_totalhigh_pages[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_165_T; extern  _GLOBAL_165_T  global_totalreserve_pages[NUM_STACKS];    
typedef  long  _GLOBAL_166_T; extern  _GLOBAL_166_T  global_nr_swap_pages[NUM_STACKS];   
extern unsigned int nr_free_pages(void);
extern unsigned int nr_free_pages_pgdat(pg_data_t *pgdat);
extern unsigned int nr_free_buffer_pages(void);
extern unsigned int nr_free_pagecache_pages(void);


extern void lru_cache_add(struct page *);
extern void lru_cache_add_active(struct page *);
extern void activate_page(struct page *);
extern void mark_page_accessed(struct page *);
extern void lru_add_drain(void);
extern int lru_add_drain_all(void);
extern int rotate_reclaimable_page(struct page *page);
extern void swap_setup(void);


extern unsigned long try_to_free_pages(struct zone **, gfp_t);
extern unsigned long shrink_all_memory(unsigned long nr_pages);
typedef  int  _GLOBAL_167_T; extern  _GLOBAL_167_T  global_vm_swappiness[NUM_STACKS];   
extern int remove_mapping(struct address_space *mapping, struct page *page);
typedef  long  _GLOBAL_168_T; extern  _GLOBAL_168_T  global_vm_total_pages[NUM_STACKS];   







static inline  __attribute__((always_inline)) int zone_reclaim(struct zone *z, gfp_t mask, unsigned int order)
{
 return 0;
}


extern int kswapd_run(int nid);



extern int shmem_unuse(swp_entry_t entry, struct page *page);


extern void swap_unplug_io_fn(struct backing_dev_info *, struct page *);



extern int swap_readpage(struct file *, struct page *);
extern int swap_writepage(struct page *page, struct writeback_control *wbc);
extern int rw_swap_page_sync(int, swp_entry_t, struct page *);


typedef  struct address_space   _GLOBAL_169_T; extern  _GLOBAL_169_T  global_swapper_space[NUM_STACKS];    

extern void show_swap_cache_info(void);
extern int add_to_swap(struct page *, gfp_t);
extern void __delete_from_swap_cache(struct page *);
extern void delete_from_swap_cache(struct page *);
extern int move_to_swap_cache(struct page *, swp_entry_t);
extern int move_from_swap_cache(struct page *, unsigned long,
  struct address_space *);
extern void free_page_and_swap_cache(struct page *);
extern void free_pages_and_swap_cache(struct page **, int);
extern struct page * lookup_swap_cache(swp_entry_t);
extern struct page * read_swap_cache_async(swp_entry_t, struct vm_area_struct *vma,
        unsigned long addr);

typedef  long  _GLOBAL_170_T; extern  _GLOBAL_170_T  global_total_swap_pages[NUM_STACKS];   
typedef  unsigned int   _GLOBAL_171_T; extern  _GLOBAL_171_T  global_nr_swapfiles[NUM_STACKS];    
extern void si_swapinfo(struct sysinfo *);
extern swp_entry_t get_swap_page(void);
extern swp_entry_t get_swap_page_of_type(int);
extern int swap_duplicate(swp_entry_t);
extern int valid_swaphandles(swp_entry_t, unsigned long *);
extern void swap_free(swp_entry_t);
extern void free_swap_and_cache(swp_entry_t);
extern int swap_type_of(dev_t);
extern unsigned int count_swap_pages(int, int);
extern sector_t map_swap_page(struct swap_info_struct *, unsigned long);
extern struct swap_info_struct *get_swap_info_struct(unsigned);
extern int can_share_swap_page(struct page *);
extern int remove_exclusive_swap_page(struct page *);
struct backing_dev_info;

typedef  spinlock_t  _GLOBAL_172_T; extern  _GLOBAL_172_T  global_swap_lock[NUM_STACKS];   


typedef  struct mm_struct   _GLOBAL_173_T; extern  _GLOBAL_173_T  * global_swap_token_mm[NUM_STACKS];     
typedef  unsigned long   _GLOBAL_174_T; extern  _GLOBAL_174_T  global_swap_token_default_timeout[NUM_STACKS];    
extern void grab_swap_token(void);
extern void __put_swap_token(struct mm_struct *);

static inline  __attribute__((always_inline)) int has_swap_token(struct mm_struct *mm)
{
 return (mm == global_swap_token_mm[get_stack_id()]);
}

static inline  __attribute__((always_inline)) void put_swap_token(struct mm_struct *mm)
{
 if (has_swap_token(mm))
  __put_swap_token(mm);
}

static inline  __attribute__((always_inline)) void disable_swap_token(void)
{
 put_swap_token(global_swap_token_mm[get_stack_id()]);
}
# 24 "linux-2.6.18/kernel/sysctl.c" 2

# 1 "linux-2.6.18/include/linux/sysctl.h" 1
# 25 "linux-2.6.18/include/linux/sysctl.h"
struct file;
struct completion;






struct __sysctl_args {
 int *name;
 int nlen;
 void *oldval;
 size_t *oldlenp;
 void *newval;
 size_t newlen;
 unsigned long __unused[4];
};
# 53 "linux-2.6.18/include/linux/sysctl.h"
enum
{
 CTL_KERN=1,
 CTL_VM=2,
 CTL_NET=3,

 CTL_FS=5,
 CTL_DEBUG=6,
 CTL_DEV=7,
 CTL_BUS=8,
 CTL_ABI=9,
 CTL_CPU=10
};


enum
{
 CTL_BUS_ISA=1
};


enum
{
 INOTIFY_MAX_USER_INSTANCES=1,
 INOTIFY_MAX_USER_WATCHES=2,
 INOTIFY_MAX_QUEUED_EVENTS=3
};


enum
{
 KERN_OSTYPE=1,
 KERN_OSRELEASE=2,
 KERN_OSREV=3,
 KERN_VERSION=4,
 KERN_SECUREMASK=5,
 KERN_PROF=6,
 KERN_NODENAME=7,
 KERN_DOMAINNAME=8,

 KERN_CAP_BSET=14,
 KERN_PANIC=15,
 KERN_REALROOTDEV=16,

 KERN_SPARC_REBOOT=21,
 KERN_CTLALTDEL=22,
 KERN_PRINTK=23,
 KERN_NAMETRANS=24,
 KERN_PPC_HTABRECLAIM=25,
 KERN_PPC_ZEROPAGED=26,
 KERN_PPC_POWERSAVE_NAP=27,
 KERN_MODPROBE=28,
 KERN_SG_BIG_BUFF=29,
 KERN_ACCT=30,
 KERN_PPC_L2CR=31,

 KERN_RTSIGNR=32,
 KERN_RTSIGMAX=33,

 KERN_SHMMAX=34,
 KERN_MSGMAX=35,
 KERN_MSGMNB=36,
 KERN_MSGPOOL=37,
 KERN_SYSRQ=38,
 KERN_MAX_THREADS=39,
  KERN_RANDOM=40,
  KERN_SHMALL=41,
  KERN_MSGMNI=42,
  KERN_SEM=43,
  KERN_SPARC_STOP_A=44,
  KERN_SHMMNI=45,
 KERN_OVERFLOWUID=46,
 KERN_OVERFLOWGID=47,
 KERN_SHMPATH=48,
 KERN_HOTPLUG=49,
 KERN_IEEE_EMULATION_WARNINGS=50,
 KERN_S390_USER_DEBUG_LOGGING=51,
 KERN_CORE_USES_PID=52,
 KERN_TAINTED=53,
 KERN_CADPID=54,
 KERN_PIDMAX=55,
   KERN_CORE_PATTERN=56,
 KERN_PANIC_ON_OOPS=57,
 KERN_HPPA_PWRSW=58,
 KERN_HPPA_UNALIGNED=59,
 KERN_PRINTK_RATELIMIT=60,
 KERN_PRINTK_RATELIMIT_BURST=61,
 KERN_PTY=62,
 KERN_NGROUPS_MAX=63,
 KERN_SPARC_SCONS_PWROFF=64,
 KERN_HZ_TIMER=65,
 KERN_UNKNOWN_NMI_PANIC=66,
 KERN_BOOTLOADER_TYPE=67,
 KERN_RANDOMIZE=68,
 KERN_SETUID_DUMPABLE=69,
 KERN_SPIN_RETRY=70,
 KERN_ACPI_VIDEO_FLAGS=71,
 KERN_IA64_UNALIGNED=72,
 KERN_COMPAT_LOG=73,
 KERN_MAX_LOCK_DEPTH=74,
};




enum
{
 VM_UNUSED1=1,
 VM_UNUSED2=2,
 VM_UNUSED3=3,
 VM_UNUSED4=4,
 VM_OVERCOMMIT_MEMORY=5,
 VM_UNUSED5=6,
 VM_UNUSED7=7,
 VM_UNUSED8=8,
 VM_UNUSED9=9,
 VM_PAGE_CLUSTER=10,
 VM_DIRTY_BACKGROUND=11,
 VM_DIRTY_RATIO=12,
 VM_DIRTY_WB_CS=13,
 VM_DIRTY_EXPIRE_CS=14,
 VM_NR_PDFLUSH_THREADS=15,
 VM_OVERCOMMIT_RATIO=16,
 VM_PAGEBUF=17,
 VM_HUGETLB_PAGES=18,
 VM_SWAPPINESS=19,
 VM_LOWMEM_RESERVE_RATIO=20,
 VM_MIN_FREE_KBYTES=21,
 VM_MAX_MAP_COUNT=22,
 VM_LAPTOP_MODE=23,
 VM_BLOCK_DUMP=24,
 VM_HUGETLB_GROUP=25,
 VM_VFS_CACHE_PRESSURE=26,
 VM_LEGACY_VA_LAYOUT=27,
 VM_SWAP_TOKEN_TIMEOUT=28,
 VM_DROP_PAGECACHE=29,
 VM_PERCPU_PAGELIST_FRACTION=30,
 VM_ZONE_RECLAIM_MODE=31,
 VM_MIN_UNMAPPED=32,
 VM_PANIC_ON_OOM=33,
 VM_VDSO_ENABLED=34,
};



enum
{
 NET_CORE=1,
 NET_ETHER=2,
 NET_802=3,
 NET_UNIX=4,
 NET_IPV4=5,
 NET_IPX=6,
 NET_ATALK=7,
 NET_NETROM=8,
 NET_AX25=9,
 NET_BRIDGE=10,
 NET_ROSE=11,
 NET_IPV6=12,
 NET_X25=13,
 NET_TR=14,
 NET_DECNET=15,
 NET_ECONET=16,
 NET_SCTP=17,
 NET_LLC=18,
 NET_NETFILTER=19,
 NET_DCCP=20,
};


enum
{
 RANDOM_POOLSIZE=1,
 RANDOM_ENTROPY_COUNT=2,
 RANDOM_READ_THRESH=3,
 RANDOM_WRITE_THRESH=4,
 RANDOM_BOOT_ID=5,
 RANDOM_UUID=6
};


enum
{
 PTY_MAX=1,
 PTY_NR=2
};


enum
{
 BUS_ISA_MEM_BASE=1,
 BUS_ISA_PORT_BASE=2,
 BUS_ISA_PORT_SHIFT=3
};


enum
{
 NET_CORE_WMEM_MAX=1,
 NET_CORE_RMEM_MAX=2,
 NET_CORE_WMEM_DEFAULT=3,
 NET_CORE_RMEM_DEFAULT=4,

 NET_CORE_MAX_BACKLOG=6,
 NET_CORE_FASTROUTE=7,
 NET_CORE_MSG_COST=8,
 NET_CORE_MSG_BURST=9,
 NET_CORE_OPTMEM_MAX=10,
 NET_CORE_HOT_LIST_LENGTH=11,
 NET_CORE_DIVERT_VERSION=12,
 NET_CORE_NO_CONG_THRESH=13,
 NET_CORE_NO_CONG=14,
 NET_CORE_LO_CONG=15,
 NET_CORE_MOD_CONG=16,
 NET_CORE_DEV_WEIGHT=17,
 NET_CORE_SOMAXCONN=18,
 NET_CORE_BUDGET=19,
 NET_CORE_AEVENT_ETIME=20,
 NET_CORE_AEVENT_RSEQTH=21,
};







enum
{
 NET_UNIX_DESTROY_DELAY=1,
 NET_UNIX_DELETE_DELAY=2,
 NET_UNIX_MAX_DGRAM_QLEN=3,
};


enum
{
 NET_NF_CONNTRACK_MAX=1,
 NET_NF_CONNTRACK_TCP_TIMEOUT_SYN_SENT=2,
 NET_NF_CONNTRACK_TCP_TIMEOUT_SYN_RECV=3,
 NET_NF_CONNTRACK_TCP_TIMEOUT_ESTABLISHED=4,
 NET_NF_CONNTRACK_TCP_TIMEOUT_FIN_WAIT=5,
 NET_NF_CONNTRACK_TCP_TIMEOUT_CLOSE_WAIT=6,
 NET_NF_CONNTRACK_TCP_TIMEOUT_LAST_ACK=7,
 NET_NF_CONNTRACK_TCP_TIMEOUT_TIME_WAIT=8,
 NET_NF_CONNTRACK_TCP_TIMEOUT_CLOSE=9,
 NET_NF_CONNTRACK_UDP_TIMEOUT=10,
 NET_NF_CONNTRACK_UDP_TIMEOUT_STREAM=11,
 NET_NF_CONNTRACK_ICMP_TIMEOUT=12,
 NET_NF_CONNTRACK_GENERIC_TIMEOUT=13,
 NET_NF_CONNTRACK_BUCKETS=14,
 NET_NF_CONNTRACK_LOG_INVALID=15,
 NET_NF_CONNTRACK_TCP_TIMEOUT_MAX_RETRANS=16,
 NET_NF_CONNTRACK_TCP_LOOSE=17,
 NET_NF_CONNTRACK_TCP_BE_LIBERAL=18,
 NET_NF_CONNTRACK_TCP_MAX_RETRANS=19,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_CLOSED=20,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_WAIT=21,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_ECHOED=22,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_ESTABLISHED=23,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_SENT=24,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_RECD=25,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_ACK_SENT=26,
 NET_NF_CONNTRACK_COUNT=27,
 NET_NF_CONNTRACK_ICMPV6_TIMEOUT=28,
 NET_NF_CONNTRACK_FRAG6_TIMEOUT=29,
 NET_NF_CONNTRACK_FRAG6_LOW_THRESH=30,
 NET_NF_CONNTRACK_FRAG6_HIGH_THRESH=31,
 NET_NF_CONNTRACK_CHECKSUM=32,
};


enum
{

 NET_IPV4_FORWARD=8,
 NET_IPV4_DYNADDR=9,

 NET_IPV4_CONF=16,
 NET_IPV4_NEIGH=17,
 NET_IPV4_ROUTE=18,
 NET_IPV4_FIB_HASH=19,
 NET_IPV4_NETFILTER=20,

 NET_IPV4_TCP_TIMESTAMPS=33,
 NET_IPV4_TCP_WINDOW_SCALING=34,
 NET_IPV4_TCP_SACK=35,
 NET_IPV4_TCP_RETRANS_COLLAPSE=36,
 NET_IPV4_DEFAULT_TTL=37,
 NET_IPV4_AUTOCONFIG=38,
 NET_IPV4_NO_PMTU_DISC=39,
 NET_IPV4_TCP_SYN_RETRIES=40,
 NET_IPV4_IPFRAG_HIGH_THRESH=41,
 NET_IPV4_IPFRAG_LOW_THRESH=42,
 NET_IPV4_IPFRAG_TIME=43,
 NET_IPV4_TCP_MAX_KA_PROBES=44,
 NET_IPV4_TCP_KEEPALIVE_TIME=45,
 NET_IPV4_TCP_KEEPALIVE_PROBES=46,
 NET_IPV4_TCP_RETRIES1=47,
 NET_IPV4_TCP_RETRIES2=48,
 NET_IPV4_TCP_FIN_TIMEOUT=49,
 NET_IPV4_IP_MASQ_DEBUG=50,
 NET_TCP_SYNCOOKIES=51,
 NET_TCP_STDURG=52,
 NET_TCP_RFC1337=53,
 NET_TCP_SYN_TAILDROP=54,
 NET_TCP_MAX_SYN_BACKLOG=55,
 NET_IPV4_LOCAL_PORT_RANGE=56,
 NET_IPV4_ICMP_ECHO_IGNORE_ALL=57,
 NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS=58,
 NET_IPV4_ICMP_SOURCEQUENCH_RATE=59,
 NET_IPV4_ICMP_DESTUNREACH_RATE=60,
 NET_IPV4_ICMP_TIMEEXCEED_RATE=61,
 NET_IPV4_ICMP_PARAMPROB_RATE=62,
 NET_IPV4_ICMP_ECHOREPLY_RATE=63,
 NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES=64,
 NET_IPV4_IGMP_MAX_MEMBERSHIPS=65,
 NET_TCP_TW_RECYCLE=66,
 NET_IPV4_ALWAYS_DEFRAG=67,
 NET_IPV4_TCP_KEEPALIVE_INTVL=68,
 NET_IPV4_INET_PEER_THRESHOLD=69,
 NET_IPV4_INET_PEER_MINTTL=70,
 NET_IPV4_INET_PEER_MAXTTL=71,
 NET_IPV4_INET_PEER_GC_MINTIME=72,
 NET_IPV4_INET_PEER_GC_MAXTIME=73,
 NET_TCP_ORPHAN_RETRIES=74,
 NET_TCP_ABORT_ON_OVERFLOW=75,
 NET_TCP_SYNACK_RETRIES=76,
 NET_TCP_MAX_ORPHANS=77,
 NET_TCP_MAX_TW_BUCKETS=78,
 NET_TCP_FACK=79,
 NET_TCP_REORDERING=80,
 NET_TCP_ECN=81,
 NET_TCP_DSACK=82,
 NET_TCP_MEM=83,
 NET_TCP_WMEM=84,
 NET_TCP_RMEM=85,
 NET_TCP_APP_WIN=86,
 NET_TCP_ADV_WIN_SCALE=87,
 NET_IPV4_NONLOCAL_BIND=88,
 NET_IPV4_ICMP_RATELIMIT=89,
 NET_IPV4_ICMP_RATEMASK=90,
 NET_TCP_TW_REUSE=91,
 NET_TCP_FRTO=92,
 NET_TCP_LOW_LATENCY=93,
 NET_IPV4_IPFRAG_SECRET_INTERVAL=94,
 NET_IPV4_IGMP_MAX_MSF=96,
 NET_TCP_NO_METRICS_SAVE=97,
 NET_TCP_DEFAULT_WIN_SCALE=105,
 NET_TCP_MODERATE_RCVBUF=106,
 NET_TCP_TSO_WIN_DIVISOR=107,
 NET_TCP_BIC_BETA=108,
 NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR=109,
 NET_TCP_CONG_CONTROL=110,
 NET_TCP_ABC=111,
 NET_IPV4_IPFRAG_MAX_DIST=112,
  NET_TCP_MTU_PROBING=113,
 NET_TCP_BASE_MSS=114,
 NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS=115,
 NET_TCP_DMA_COPYBREAK=116,
 NET_TCP_SLOW_START_AFTER_IDLE=117,
};

enum {
 NET_IPV4_ROUTE_FLUSH=1,
 NET_IPV4_ROUTE_MIN_DELAY=2,
 NET_IPV4_ROUTE_MAX_DELAY=3,
 NET_IPV4_ROUTE_GC_THRESH=4,
 NET_IPV4_ROUTE_MAX_SIZE=5,
 NET_IPV4_ROUTE_GC_MIN_INTERVAL=6,
 NET_IPV4_ROUTE_GC_TIMEOUT=7,
 NET_IPV4_ROUTE_GC_INTERVAL=8,
 NET_IPV4_ROUTE_REDIRECT_LOAD=9,
 NET_IPV4_ROUTE_REDIRECT_NUMBER=10,
 NET_IPV4_ROUTE_REDIRECT_SILENCE=11,
 NET_IPV4_ROUTE_ERROR_COST=12,
 NET_IPV4_ROUTE_ERROR_BURST=13,
 NET_IPV4_ROUTE_GC_ELASTICITY=14,
 NET_IPV4_ROUTE_MTU_EXPIRES=15,
 NET_IPV4_ROUTE_MIN_PMTU=16,
 NET_IPV4_ROUTE_MIN_ADVMSS=17,
 NET_IPV4_ROUTE_SECRET_INTERVAL=18,
 NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS=19,
};

enum
{
 NET_PROTO_CONF_ALL=-2,
 NET_PROTO_CONF_DEFAULT=-3


};

enum
{
 NET_IPV4_CONF_FORWARDING=1,
 NET_IPV4_CONF_MC_FORWARDING=2,
 NET_IPV4_CONF_PROXY_ARP=3,
 NET_IPV4_CONF_ACCEPT_REDIRECTS=4,
 NET_IPV4_CONF_SECURE_REDIRECTS=5,
 NET_IPV4_CONF_SEND_REDIRECTS=6,
 NET_IPV4_CONF_SHARED_MEDIA=7,
 NET_IPV4_CONF_RP_FILTER=8,
 NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE=9,
 NET_IPV4_CONF_BOOTP_RELAY=10,
 NET_IPV4_CONF_LOG_MARTIANS=11,
 NET_IPV4_CONF_TAG=12,
 NET_IPV4_CONF_ARPFILTER=13,
 NET_IPV4_CONF_MEDIUM_ID=14,
 NET_IPV4_CONF_NOXFRM=15,
 NET_IPV4_CONF_NOPOLICY=16,
 NET_IPV4_CONF_FORCE_IGMP_VERSION=17,
 NET_IPV4_CONF_ARP_ANNOUNCE=18,
 NET_IPV4_CONF_ARP_IGNORE=19,
 NET_IPV4_CONF_PROMOTE_SECONDARIES=20,
 NET_IPV4_CONF_ARP_ACCEPT=21,
 __NET_IPV4_CONF_MAX
};


enum
{
 NET_IPV4_NF_CONNTRACK_MAX=1,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_SYN_SENT=2,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_SYN_RECV=3,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_ESTABLISHED=4,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_FIN_WAIT=5,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_CLOSE_WAIT=6,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_LAST_ACK=7,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_TIME_WAIT=8,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_CLOSE=9,
 NET_IPV4_NF_CONNTRACK_UDP_TIMEOUT=10,
 NET_IPV4_NF_CONNTRACK_UDP_TIMEOUT_STREAM=11,
 NET_IPV4_NF_CONNTRACK_ICMP_TIMEOUT=12,
 NET_IPV4_NF_CONNTRACK_GENERIC_TIMEOUT=13,
 NET_IPV4_NF_CONNTRACK_BUCKETS=14,
 NET_IPV4_NF_CONNTRACK_LOG_INVALID=15,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_MAX_RETRANS=16,
 NET_IPV4_NF_CONNTRACK_TCP_LOOSE=17,
 NET_IPV4_NF_CONNTRACK_TCP_BE_LIBERAL=18,
 NET_IPV4_NF_CONNTRACK_TCP_MAX_RETRANS=19,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_CLOSED=20,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_WAIT=21,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_ECHOED=22,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_ESTABLISHED=23,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_SENT=24,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_RECD=25,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_ACK_SENT=26,
 NET_IPV4_NF_CONNTRACK_COUNT=27,
 NET_IPV4_NF_CONNTRACK_CHECKSUM=28,
};


enum {
 NET_IPV6_CONF=16,
 NET_IPV6_NEIGH=17,
 NET_IPV6_ROUTE=18,
 NET_IPV6_ICMP=19,
 NET_IPV6_BINDV6ONLY=20,
 NET_IPV6_IP6FRAG_HIGH_THRESH=21,
 NET_IPV6_IP6FRAG_LOW_THRESH=22,
 NET_IPV6_IP6FRAG_TIME=23,
 NET_IPV6_IP6FRAG_SECRET_INTERVAL=24,
 NET_IPV6_MLD_MAX_MSF=25,
};

enum {
 NET_IPV6_ROUTE_FLUSH=1,
 NET_IPV6_ROUTE_GC_THRESH=2,
 NET_IPV6_ROUTE_MAX_SIZE=3,
 NET_IPV6_ROUTE_GC_MIN_INTERVAL=4,
 NET_IPV6_ROUTE_GC_TIMEOUT=5,
 NET_IPV6_ROUTE_GC_INTERVAL=6,
 NET_IPV6_ROUTE_GC_ELASTICITY=7,
 NET_IPV6_ROUTE_MTU_EXPIRES=8,
 NET_IPV6_ROUTE_MIN_ADVMSS=9,
 NET_IPV6_ROUTE_GC_MIN_INTERVAL_MS=10
};

enum {
 NET_IPV6_FORWARDING=1,
 NET_IPV6_HOP_LIMIT=2,
 NET_IPV6_MTU=3,
 NET_IPV6_ACCEPT_RA=4,
 NET_IPV6_ACCEPT_REDIRECTS=5,
 NET_IPV6_AUTOCONF=6,
 NET_IPV6_DAD_TRANSMITS=7,
 NET_IPV6_RTR_SOLICITS=8,
 NET_IPV6_RTR_SOLICIT_INTERVAL=9,
 NET_IPV6_RTR_SOLICIT_DELAY=10,
 NET_IPV6_USE_TEMPADDR=11,
 NET_IPV6_TEMP_VALID_LFT=12,
 NET_IPV6_TEMP_PREFERED_LFT=13,
 NET_IPV6_REGEN_MAX_RETRY=14,
 NET_IPV6_MAX_DESYNC_FACTOR=15,
 NET_IPV6_MAX_ADDRESSES=16,
 NET_IPV6_FORCE_MLD_VERSION=17,
 NET_IPV6_ACCEPT_RA_DEFRTR=18,
 NET_IPV6_ACCEPT_RA_PINFO=19,
 NET_IPV6_ACCEPT_RA_RTR_PREF=20,
 NET_IPV6_RTR_PROBE_INTERVAL=21,
 NET_IPV6_ACCEPT_RA_RT_INFO_MAX_PLEN=22,
 __NET_IPV6_MAX
};


enum {
 NET_IPV6_ICMP_RATELIMIT=1
};


enum {
 NET_NEIGH_MCAST_SOLICIT=1,
 NET_NEIGH_UCAST_SOLICIT=2,
 NET_NEIGH_APP_SOLICIT=3,
 NET_NEIGH_RETRANS_TIME=4,
 NET_NEIGH_REACHABLE_TIME=5,
 NET_NEIGH_DELAY_PROBE_TIME=6,
 NET_NEIGH_GC_STALE_TIME=7,
 NET_NEIGH_UNRES_QLEN=8,
 NET_NEIGH_PROXY_QLEN=9,
 NET_NEIGH_ANYCAST_DELAY=10,
 NET_NEIGH_PROXY_DELAY=11,
 NET_NEIGH_LOCKTIME=12,
 NET_NEIGH_GC_INTERVAL=13,
 NET_NEIGH_GC_THRESH1=14,
 NET_NEIGH_GC_THRESH2=15,
 NET_NEIGH_GC_THRESH3=16,
 NET_NEIGH_RETRANS_TIME_MS=17,
 NET_NEIGH_REACHABLE_TIME_MS=18,
 __NET_NEIGH_MAX
};


enum {
 NET_DCCP_DEFAULT=1,
};


enum {
 NET_DCCP_DEFAULT_SEQ_WINDOW = 1,
 NET_DCCP_DEFAULT_RX_CCID = 2,
 NET_DCCP_DEFAULT_TX_CCID = 3,
 NET_DCCP_DEFAULT_ACK_RATIO = 4,
 NET_DCCP_DEFAULT_SEND_ACKVEC = 5,
 NET_DCCP_DEFAULT_SEND_NDP = 6,
};


enum {
 NET_IPX_PPROP_BROADCASTING=1,
 NET_IPX_FORWARDING=2
};


enum {
 NET_LLC2=1,
 NET_LLC_STATION=2,
};


enum {
 NET_LLC2_TIMEOUT=1,
};


enum {
 NET_LLC_STATION_ACK_TIMEOUT=1,
};


enum {
 NET_LLC2_ACK_TIMEOUT=1,
 NET_LLC2_P_TIMEOUT=2,
 NET_LLC2_REJ_TIMEOUT=3,
 NET_LLC2_BUSY_TIMEOUT=4,
};


enum {
 NET_ATALK_AARP_EXPIRY_TIME=1,
 NET_ATALK_AARP_TICK_TIME=2,
 NET_ATALK_AARP_RETRANSMIT_LIMIT=3,
 NET_ATALK_AARP_RESOLVE_TIME=4
};



enum {
 NET_NETROM_DEFAULT_PATH_QUALITY=1,
 NET_NETROM_OBSOLESCENCE_COUNT_INITIALISER=2,
 NET_NETROM_NETWORK_TTL_INITIALISER=3,
 NET_NETROM_TRANSPORT_TIMEOUT=4,
 NET_NETROM_TRANSPORT_MAXIMUM_TRIES=5,
 NET_NETROM_TRANSPORT_ACKNOWLEDGE_DELAY=6,
 NET_NETROM_TRANSPORT_BUSY_DELAY=7,
 NET_NETROM_TRANSPORT_REQUESTED_WINDOW_SIZE=8,
 NET_NETROM_TRANSPORT_NO_ACTIVITY_TIMEOUT=9,
 NET_NETROM_ROUTING_CONTROL=10,
 NET_NETROM_LINK_FAILS_COUNT=11,
 NET_NETROM_RESET=12
};


enum {
 NET_AX25_IP_DEFAULT_MODE=1,
 NET_AX25_DEFAULT_MODE=2,
 NET_AX25_BACKOFF_TYPE=3,
 NET_AX25_CONNECT_MODE=4,
 NET_AX25_STANDARD_WINDOW=5,
 NET_AX25_EXTENDED_WINDOW=6,
 NET_AX25_T1_TIMEOUT=7,
 NET_AX25_T2_TIMEOUT=8,
 NET_AX25_T3_TIMEOUT=9,
 NET_AX25_IDLE_TIMEOUT=10,
 NET_AX25_N2=11,
 NET_AX25_PACLEN=12,
 NET_AX25_PROTOCOL=13,
 NET_AX25_DAMA_SLAVE_TIMEOUT=14
};


enum {
 NET_ROSE_RESTART_REQUEST_TIMEOUT=1,
 NET_ROSE_CALL_REQUEST_TIMEOUT=2,
 NET_ROSE_RESET_REQUEST_TIMEOUT=3,
 NET_ROSE_CLEAR_REQUEST_TIMEOUT=4,
 NET_ROSE_ACK_HOLD_BACK_TIMEOUT=5,
 NET_ROSE_ROUTING_CONTROL=6,
 NET_ROSE_LINK_FAIL_TIMEOUT=7,
 NET_ROSE_MAX_VCS=8,
 NET_ROSE_WINDOW_SIZE=9,
 NET_ROSE_NO_ACTIVITY_TIMEOUT=10
};


enum {
 NET_X25_RESTART_REQUEST_TIMEOUT=1,
 NET_X25_CALL_REQUEST_TIMEOUT=2,
 NET_X25_RESET_REQUEST_TIMEOUT=3,
 NET_X25_CLEAR_REQUEST_TIMEOUT=4,
 NET_X25_ACK_HOLD_BACK_TIMEOUT=5
};


enum
{
 NET_TR_RIF_TIMEOUT=1
};


enum {
 NET_DECNET_NODE_TYPE = 1,
 NET_DECNET_NODE_ADDRESS = 2,
 NET_DECNET_NODE_NAME = 3,
 NET_DECNET_DEFAULT_DEVICE = 4,
 NET_DECNET_TIME_WAIT = 5,
 NET_DECNET_DN_COUNT = 6,
 NET_DECNET_DI_COUNT = 7,
 NET_DECNET_DR_COUNT = 8,
 NET_DECNET_DST_GC_INTERVAL = 9,
 NET_DECNET_CONF = 10,
 NET_DECNET_NO_FC_MAX_CWND = 11,
 NET_DECNET_MEM = 12,
 NET_DECNET_RMEM = 13,
 NET_DECNET_WMEM = 14,
 NET_DECNET_DEBUG_LEVEL = 255
};


enum {
 NET_DECNET_CONF_LOOPBACK = -2,
 NET_DECNET_CONF_DDCMP = -3,
 NET_DECNET_CONF_PPP = -4,
 NET_DECNET_CONF_X25 = -5,
 NET_DECNET_CONF_GRE = -6,
 NET_DECNET_CONF_ETHER = -7


};


enum {
 NET_DECNET_CONF_DEV_PRIORITY = 1,
 NET_DECNET_CONF_DEV_T1 = 2,
 NET_DECNET_CONF_DEV_T2 = 3,
 NET_DECNET_CONF_DEV_T3 = 4,
 NET_DECNET_CONF_DEV_FORWARDING = 5,
 NET_DECNET_CONF_DEV_BLKSIZE = 6,
 NET_DECNET_CONF_DEV_STATE = 7
};


enum {
 NET_SCTP_RTO_INITIAL = 1,
 NET_SCTP_RTO_MIN = 2,
 NET_SCTP_RTO_MAX = 3,
 NET_SCTP_RTO_ALPHA = 4,
 NET_SCTP_RTO_BETA = 5,
 NET_SCTP_VALID_COOKIE_LIFE = 6,
 NET_SCTP_ASSOCIATION_MAX_RETRANS = 7,
 NET_SCTP_PATH_MAX_RETRANS = 8,
 NET_SCTP_MAX_INIT_RETRANSMITS = 9,
 NET_SCTP_HB_INTERVAL = 10,
 NET_SCTP_PRESERVE_ENABLE = 11,
 NET_SCTP_MAX_BURST = 12,
 NET_SCTP_ADDIP_ENABLE = 13,
 NET_SCTP_PRSCTP_ENABLE = 14,
 NET_SCTP_SNDBUF_POLICY = 15,
 NET_SCTP_SACK_TIMEOUT = 16,
 NET_SCTP_RCVBUF_POLICY = 17,
};


enum {
 NET_BRIDGE_NF_CALL_ARPTABLES = 1,
 NET_BRIDGE_NF_CALL_IPTABLES = 2,
 NET_BRIDGE_NF_CALL_IP6TABLES = 3,
 NET_BRIDGE_NF_FILTER_VLAN_TAGGED = 4,
};


enum
{
 FS_NRINODE=1,
 FS_STATINODE=2,
 FS_MAXINODE=3,
 FS_NRDQUOT=4,
 FS_MAXDQUOT=5,
 FS_NRFILE=6,
 FS_MAXFILE=7,
 FS_DENTRY=8,
 FS_NRSUPER=9,
 FS_MAXSUPER=10,
 FS_OVERFLOWUID=11,
 FS_OVERFLOWGID=12,
 FS_LEASES=13,
 FS_DIR_NOTIFY=14,
 FS_LEASE_TIME=15,
 FS_DQSTATS=16,
 FS_XFS=17,
 FS_AIO_NR=18,
 FS_AIO_MAX_NR=19,
 FS_INOTIFY=20,
};


enum {
 FS_DQ_LOOKUPS = 1,
 FS_DQ_DROPS = 2,
 FS_DQ_READS = 3,
 FS_DQ_WRITES = 4,
 FS_DQ_CACHE_HITS = 5,
 FS_DQ_ALLOCATED = 6,
 FS_DQ_FREE = 7,
 FS_DQ_SYNCS = 8,
 FS_DQ_WARNINGS = 9,
};




enum {
 DEV_CDROM=1,
 DEV_HWMON=2,
 DEV_PARPORT=3,
 DEV_RAID=4,
 DEV_MAC_HID=5,
 DEV_SCSI=6,
 DEV_IPMI=7,
};


enum {
 DEV_CDROM_INFO=1,
 DEV_CDROM_AUTOCLOSE=2,
 DEV_CDROM_AUTOEJECT=3,
 DEV_CDROM_DEBUG=4,
 DEV_CDROM_LOCK=5,
 DEV_CDROM_CHECK_MEDIA=6
};


enum {
 DEV_PARPORT_DEFAULT=-3
};


enum {
 DEV_RAID_SPEED_LIMIT_MIN=1,
 DEV_RAID_SPEED_LIMIT_MAX=2
};


enum {
 DEV_PARPORT_DEFAULT_TIMESLICE=1,
 DEV_PARPORT_DEFAULT_SPINTIME=2
};


enum {
 DEV_PARPORT_SPINTIME=1,
 DEV_PARPORT_BASE_ADDR=2,
 DEV_PARPORT_IRQ=3,
 DEV_PARPORT_DMA=4,
 DEV_PARPORT_MODES=5,
 DEV_PARPORT_DEVICES=6,
 DEV_PARPORT_AUTOPROBE=16
};


enum {
 DEV_PARPORT_DEVICES_ACTIVE=-3,
};


enum {
 DEV_PARPORT_DEVICE_TIMESLICE=1,
};


enum {
 DEV_MAC_HID_KEYBOARD_SENDS_LINUX_KEYCODES=1,
 DEV_MAC_HID_KEYBOARD_LOCK_KEYCODES=2,
 DEV_MAC_HID_MOUSE_BUTTON_EMULATION=3,
 DEV_MAC_HID_MOUSE_BUTTON2_KEYCODE=4,
 DEV_MAC_HID_MOUSE_BUTTON3_KEYCODE=5,
 DEV_MAC_HID_ADB_MOUSE_SENDS_KEYCODES=6
};


enum {
 DEV_SCSI_LOGGING_LEVEL=1,
};


enum {
 DEV_IPMI_POWEROFF_POWERCYCLE=1,
};


enum
{
 ABI_DEFHANDLER_COFF=1,
 ABI_DEFHANDLER_ELF=2,
 ABI_DEFHANDLER_LCALL7=3,
 ABI_DEFHANDLER_LIBCSO=4,
 ABI_TRACE=5,
 ABI_FAKE_UTSNAME=6,
};




extern void sysctl_init(void);

typedef struct ctl_table ctl_table;

typedef int ctl_handler (ctl_table *table, int *name, int nlen,
    void *oldval, size_t *oldlenp,
    void *newval, size_t newlen,
    void **context);

typedef int proc_handler (ctl_table *ctl, int write, struct file * filp,
     void *buffer, size_t *lenp, loff_t *ppos);

extern int proc_dostring(ctl_table *, int, struct file *,
    void *, size_t *, loff_t *);
extern int proc_dointvec(ctl_table *, int, struct file *,
    void *, size_t *, loff_t *);
extern int proc_dointvec_bset(ctl_table *, int, struct file *,
         void *, size_t *, loff_t *);
extern int proc_dointvec_minmax(ctl_table *, int, struct file *,
    void *, size_t *, loff_t *);
extern int proc_dointvec_jiffies(ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
extern int proc_dointvec_userhz_jiffies(ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
extern int proc_dointvec_ms_jiffies(ctl_table *, int, struct file *,
        void *, size_t *, loff_t *);
extern int proc_doulongvec_minmax(ctl_table *, int, struct file *,
      void *, size_t *, loff_t *);
extern int proc_doulongvec_ms_jiffies_minmax(ctl_table *table, int,
          struct file *, void *, size_t *, loff_t *);

extern int do_sysctl (int *name, int nlen,
        void *oldval, size_t *oldlenp,
        void *newval, size_t newlen);

extern int do_sysctl_strategy (ctl_table *table,
          int *name, int nlen,
          void *oldval, size_t *oldlenp,
          void *newval, size_t newlen, void ** context);

extern ctl_handler sysctl_string;
extern ctl_handler sysctl_intvec;
extern ctl_handler sysctl_jiffies;
extern ctl_handler sysctl_ms_jiffies;
# 991 "linux-2.6.18/include/linux/sysctl.h"
struct ctl_table
{
 int ctl_name;
 const char *procname;
 void *data;
 int maxlen;
 mode_t mode;
 ctl_table *child;
 proc_handler *proc_handler;
 ctl_handler *strategy;
 struct proc_dir_entry *de;
 void *extra1;
 void *extra2;
};



struct ctl_table_header
{
 ctl_table *ctl_table;
 struct list_head ctl_entry;
 int used;
 struct completion *unregistering;
};

struct ctl_table_header * register_sysctl_table(ctl_table * table,
      int insert_at_head);
void unregister_sysctl_table(struct ctl_table_header * table);
# 26 "linux-2.6.18/kernel/sysctl.c" 2
# 1 "linux-2.6.18/include/linux/proc_fs.h" 1
# 23 "linux-2.6.18/include/linux/proc_fs.h"
enum {
 PROC_ROOT_INO = 1,
};
# 44 "linux-2.6.18/include/linux/proc_fs.h"
typedef int (read_proc_t)(char *page, char **start, off_t off,
     int count, int *eof, void *data);
typedef int (write_proc_t)(struct file *file, const char *buffer,
      unsigned long count, void *data);
typedef int (get_info_t)(char *, char **, off_t, int);

struct proc_dir_entry {
 unsigned int low_ino;
 unsigned short namelen;
 const char *name;
 mode_t mode;
 nlink_t nlink;
 uid_t uid;
 gid_t gid;
 loff_t size;
 struct inode_operations * proc_iops;
 const struct file_operations * proc_fops;
 get_info_t *get_info;
 struct module *owner;
 struct proc_dir_entry *next, *parent, *subdir;
 void *data;
 read_proc_t *read_proc;
 write_proc_t *write_proc;
 atomic_t count;
 int deleted;
 void *set;
};

struct kcore_list {
 struct kcore_list *next;
 unsigned long addr;
 size_t size;
};

struct vmcore {
 struct list_head list;
 unsigned long long paddr;
 unsigned long long size;
 loff_t offset;
};



typedef  struct proc_dir_entry   _GLOBAL_175_T; extern  _GLOBAL_175_T  global_proc_root[NUM_STACKS];    
typedef  struct proc_dir_entry   _GLOBAL_176_T; extern  _GLOBAL_176_T  * global_proc_root_fs[NUM_STACKS];    
typedef  struct proc_dir_entry   _GLOBAL_177_T; extern  _GLOBAL_177_T  * global_proc_net[NUM_STACKS];    
typedef  struct proc_dir_entry   _GLOBAL_178_T; extern  _GLOBAL_178_T  * global_proc_net_stat[NUM_STACKS];    
typedef  struct proc_dir_entry   _GLOBAL_179_T; extern  _GLOBAL_179_T  * global_proc_bus[NUM_STACKS];    
typedef  struct proc_dir_entry   _GLOBAL_180_T; extern  _GLOBAL_180_T  * global_proc_root_driver[NUM_STACKS];    
typedef  struct proc_dir_entry   _GLOBAL_181_T; extern  _GLOBAL_181_T  * global_proc_root_kcore[NUM_STACKS];    

typedef  spinlock_t  _GLOBAL_182_T; extern  _GLOBAL_182_T  global_proc_subdir_lock[NUM_STACKS];   

extern void proc_root_init(void);
extern void proc_misc_init(void);

struct mm_struct;

void proc_flush_task(struct task_struct *task);
struct dentry *proc_pid_lookup(struct inode *dir, struct dentry * dentry, struct nameidata *);
int proc_pid_readdir(struct file * filp, void * dirent, filldir_t filldir);
unsigned long task_vsize(struct mm_struct *);
int task_statm(struct mm_struct *, int *, int *, int *, int *);
char *task_mem(struct mm_struct *, char *);

extern struct proc_dir_entry *create_proc_entry(const char *name, mode_t mode,
      struct proc_dir_entry *parent);
extern void remove_proc_entry(const char *name, struct proc_dir_entry *parent);

typedef  struct vfsmount   _GLOBAL_183_T; extern  _GLOBAL_183_T  * global_proc_mnt[NUM_STACKS];    
extern int proc_fill_super(struct super_block *,void *,int);
extern struct inode *proc_get_inode(struct super_block *, unsigned int, struct proc_dir_entry *);

extern int proc_match(int, const char *,struct proc_dir_entry *);
# 126 "linux-2.6.18/include/linux/proc_fs.h"
extern int proc_readdir(struct file *, void *, filldir_t);
extern struct dentry *proc_lookup(struct inode *, struct dentry *, struct nameidata *);

typedef  const struct file_operations    _GLOBAL_184_T; extern  _GLOBAL_184_T  global_proc_kcore_operations[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_185_T; extern  _GLOBAL_185_T  global_proc_kmsg_operations[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_186_T; extern  _GLOBAL_186_T  global_ppc_htab_operations[NUM_STACKS];     




struct tty_driver;
extern void proc_tty_init(void);
extern void proc_tty_register_driver(struct tty_driver *driver);
extern void proc_tty_unregister_driver(struct tty_driver *driver);
# 157 "linux-2.6.18/include/linux/proc_fs.h"
extern struct proc_dir_entry *proc_symlink(const char *,
  struct proc_dir_entry *, const char *);
extern struct proc_dir_entry *proc_mkdir(const char *,struct proc_dir_entry *);
extern struct proc_dir_entry *proc_mkdir_mode(const char *name, mode_t mode,
   struct proc_dir_entry *parent);

static inline  __attribute__((always_inline)) struct proc_dir_entry *create_proc_read_entry(const char *name,
 mode_t mode, struct proc_dir_entry *base,
 read_proc_t *read_proc, void * data)
{
 struct proc_dir_entry *res=create_proc_entry(name,mode,base);
 if (res) {
  res->read_proc=read_proc;
  res->data=data;
 }
 return res;
}

static inline  __attribute__((always_inline)) struct proc_dir_entry *create_proc_info_entry(const char *name,
 mode_t mode, struct proc_dir_entry *base, get_info_t *get_info)
{
 struct proc_dir_entry *res=create_proc_entry(name,mode,base);
 if (res) res->get_info=get_info;
 return res;
}

static inline  __attribute__((always_inline)) struct proc_dir_entry *proc_net_create(const char *name,
 mode_t mode, get_info_t *get_info)
{
 return create_proc_info_entry(name,mode,global_proc_net[get_stack_id()],get_info);
}

static inline  __attribute__((always_inline)) struct proc_dir_entry *proc_net_fops_create(const char *name,
 mode_t mode, const struct file_operations *fops)
{
 struct proc_dir_entry *res = create_proc_entry(name, mode, global_proc_net[get_stack_id()]);
 if (res)
  res->proc_fops = fops;
 return res;
}

static inline  __attribute__((always_inline)) void proc_net_remove(const char *name)
{
 remove_proc_entry(name,global_proc_net[get_stack_id()]);
}
# 245 "linux-2.6.18/include/linux/proc_fs.h"
extern void kclist_add(struct kcore_list *, void *, size_t);


struct proc_inode {
 struct pid *pid;
 int fd;
 union {
  int (*proc_get_link)(struct inode *, struct dentry **, struct vfsmount **);
  int (*proc_read)(struct task_struct *task, char *page);
 } op;
 struct proc_dir_entry *pde;
 struct inode vfs_inode;
};

static inline  __attribute__((always_inline)) struct proc_inode *PROC_I(const struct inode *inode)
{
 return ({ const typeof( ((struct proc_inode *)0)->vfs_inode ) *__mptr = (inode); (struct proc_inode *)( (char *)__mptr - __builtin_offsetof(struct proc_inode,vfs_inode) );});
}

static inline  __attribute__((always_inline)) struct proc_dir_entry *PDE(const struct inode *inode)
{
 return PROC_I(inode)->pde;
}

struct proc_maps_private {
 struct pid *pid;
 struct task_struct *task;
 struct vm_area_struct *tail_vma;
};
# 27 "linux-2.6.18/kernel/sysctl.c" 2

# 1 "linux-2.6.18/include/linux/ctype.h" 1
# 18 "linux-2.6.18/include/linux/ctype.h"
typedef  unsigned char   _GLOBAL_187_T; extern  _GLOBAL_187_T  _GLOBAL_0__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_1__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_2__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_3__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_4__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_5__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_6__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_7__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_8__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_9__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_10__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_11__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_12__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_13__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_14__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_15__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_16__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_17__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_18__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_19__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_20__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_21__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_22__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_23__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_24__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_25__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_26__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_27__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_28__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_29__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_30__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_31__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_32__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_33__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_34__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_35__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_36__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_37__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_38__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_39__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_40__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_41__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_42__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_43__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_44__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_45__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_46__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_47__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_48__ctype_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_49__ctype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__ctype_I) *_GLOBAL__ctype_22_A[NUM_STACKS] = { &_GLOBAL_0__ctype_I, &_GLOBAL_1__ctype_I, &_GLOBAL_2__ctype_I, &_GLOBAL_3__ctype_I, &_GLOBAL_4__ctype_I, &_GLOBAL_5__ctype_I, &_GLOBAL_6__ctype_I, &_GLOBAL_7__ctype_I, &_GLOBAL_8__ctype_I, &_GLOBAL_9__ctype_I, &_GLOBAL_10__ctype_I, &_GLOBAL_11__ctype_I, &_GLOBAL_12__ctype_I, &_GLOBAL_13__ctype_I, &_GLOBAL_14__ctype_I, &_GLOBAL_15__ctype_I, &_GLOBAL_16__ctype_I, &_GLOBAL_17__ctype_I, &_GLOBAL_18__ctype_I, &_GLOBAL_19__ctype_I, &_GLOBAL_20__ctype_I, &_GLOBAL_21__ctype_I, &_GLOBAL_22__ctype_I, &_GLOBAL_23__ctype_I, &_GLOBAL_24__ctype_I, &_GLOBAL_25__ctype_I, &_GLOBAL_26__ctype_I, &_GLOBAL_27__ctype_I, &_GLOBAL_28__ctype_I, &_GLOBAL_29__ctype_I, &_GLOBAL_30__ctype_I, &_GLOBAL_31__ctype_I, &_GLOBAL_32__ctype_I, &_GLOBAL_33__ctype_I, &_GLOBAL_34__ctype_I, &_GLOBAL_35__ctype_I, &_GLOBAL_36__ctype_I, &_GLOBAL_37__ctype_I, &_GLOBAL_38__ctype_I, &_GLOBAL_39__ctype_I, &_GLOBAL_40__ctype_I, &_GLOBAL_41__ctype_I, &_GLOBAL_42__ctype_I, &_GLOBAL_43__ctype_I, &_GLOBAL_44__ctype_I, &_GLOBAL_45__ctype_I, &_GLOBAL_46__ctype_I, &_GLOBAL_47__ctype_I, &_GLOBAL_48__ctype_I, &_GLOBAL_49__ctype_I, };   
# 37 "linux-2.6.18/include/linux/ctype.h"
static inline  __attribute__((always_inline)) unsigned char __tolower(unsigned char c)
{
 if (((((*_GLOBAL__ctype_22_A[get_stack_id()])[(int)(unsigned char)(c)])&(0x01)) != 0))
  c -= 'A'-'a';
 return c;
}

static inline  __attribute__((always_inline)) unsigned char __toupper(unsigned char c)
{
 if (((((*_GLOBAL__ctype_22_A[get_stack_id()])[(int)(unsigned char)(c)])&(0x02)) != 0))
  c -= 'a'-'A';
 return c;
}
# 29 "linux-2.6.18/kernel/sysctl.c" 2
# 1 "linux-2.6.18/include/linux/utsname.h" 1





struct oldold_utsname {
 char sysname[9];
 char nodename[9];
 char release[9];
 char version[9];
 char machine[9];
};



struct old_utsname {
 char sysname[65];
 char nodename[65];
 char release[65];
 char version[65];
 char machine[65];
};

struct new_utsname {
 char sysname[65];
 char nodename[65];
 char release[65];
 char version[65];
 char machine[65];
 char domainname[65];
};

typedef  struct new_utsname   _GLOBAL_188_T; extern  _GLOBAL_188_T  global_system_utsname[NUM_STACKS];    

typedef  struct rw_semaphore   _GLOBAL_189_T; extern  _GLOBAL_189_T  global_uts_sem[NUM_STACKS];    
# 30 "linux-2.6.18/kernel/sysctl.c" 2

# 1 "linux-2.6.18/include/linux/smp_lock.h" 1
# 32 "linux-2.6.18/kernel/sysctl.c" 2



# 1 "linux-2.6.18/include/linux/net.h" 1
# 22 "linux-2.6.18/include/linux/net.h"
# 1 "linux-2.6.18/include/asm/socket.h" 1



# 1 "linux-2.6.18/include/asm/sockios.h" 1
# 5 "linux-2.6.18/include/asm/socket.h" 2
# 23 "linux-2.6.18/include/linux/net.h" 2

struct poll_table_struct;
struct inode;
# 47 "linux-2.6.18/include/linux/net.h"
typedef enum {
 SS_FREE = 0,
 SS_UNCONNECTED,
 SS_CONNECTING,
 SS_CONNECTED,
 SS_DISCONNECTING
} socket_state;
# 82 "linux-2.6.18/include/linux/net.h"
enum sock_type {
 SOCK_STREAM = 1,
 SOCK_DGRAM = 2,
 SOCK_RAW = 3,
 SOCK_RDM = 4,
 SOCK_SEQPACKET = 5,
 SOCK_DCCP = 6,
 SOCK_PACKET = 10,
};
# 107 "linux-2.6.18/include/linux/net.h"
struct socket {
 socket_state state;
 unsigned long flags;
 const struct proto_ops *ops;
 struct fasync_struct *fasync_list;
 struct file *file;
 struct sock *sk;
 wait_queue_head_t wait;
 short type;
};

struct vm_area_struct;
struct page;
struct kiocb;
struct sockaddr;
struct msghdr;
struct module;

struct proto_ops {
 int family;
 struct module *owner;
 int (*release) (struct socket *sock);
 int (*bind) (struct socket *sock,
          struct sockaddr *myaddr,
          int sockaddr_len);
 int (*connect) (struct socket *sock,
          struct sockaddr *vaddr,
          int sockaddr_len, int flags);
 int (*socketpair)(struct socket *sock1,
          struct socket *sock2);
 int (*accept) (struct socket *sock,
          struct socket *newsock, int flags);
 int (*getname) (struct socket *sock,
          struct sockaddr *addr,
          int *sockaddr_len, int peer);
 unsigned int (*poll) (struct file *file, struct socket *sock,
          struct poll_table_struct *wait);
 int (*ioctl) (struct socket *sock, unsigned int cmd,
          unsigned long arg);
 int (*compat_ioctl) (struct socket *sock, unsigned int cmd,
          unsigned long arg);
 int (*listen) (struct socket *sock, int len);
 int (*shutdown) (struct socket *sock, int flags);
 int (*setsockopt)(struct socket *sock, int level,
          int optname, char *optval, int optlen);
 int (*getsockopt)(struct socket *sock, int level,
          int optname, char *optval, int *optlen);
 int (*compat_setsockopt)(struct socket *sock, int level,
          int optname, char *optval, int optlen);
 int (*compat_getsockopt)(struct socket *sock, int level,
          int optname, char *optval, int *optlen);
 int (*sendmsg) (struct kiocb *iocb, struct socket *sock,
          struct msghdr *m, size_t total_len);
 int (*recvmsg) (struct kiocb *iocb, struct socket *sock,
          struct msghdr *m, size_t total_len,
          int flags);
 int (*mmap) (struct file *file, struct socket *sock,
          struct vm_area_struct * vma);
 ssize_t (*sendpage) (struct socket *sock, struct page *page,
          int offset, size_t size, int flags);
};

struct net_proto_family {
 int family;
 int (*create)(struct socket *sock, int protocol);


 short authentication;
 short encryption;
 short encrypt_net;
 struct module *owner;
};

struct iovec;
struct kvec;

extern int sock_wake_async(struct socket *sk, int how, int band);
extern int sock_register(struct net_proto_family *fam);
extern int sock_unregister(int family);
extern int sock_create(int family, int type, int proto,
     struct socket **res);
extern int sock_create_kern(int family, int type, int proto,
          struct socket **res);
extern int sock_create_lite(int family, int type, int proto,
          struct socket **res);
extern void sock_release(struct socket *sock);
extern int sock_sendmsg(struct socket *sock, struct msghdr *msg,
      size_t len);
extern int sock_recvmsg(struct socket *sock, struct msghdr *msg,
      size_t size, int flags);
extern int sock_map_fd(struct socket *sock);
extern struct socket *sockfd_lookup(int fd, int *err);

extern int net_ratelimit(void);
extern unsigned long net_random(void);
extern void net_srandom(unsigned long);
extern void net_random_init(void);

extern int kernel_sendmsg(struct socket *sock, struct msghdr *msg,
        struct kvec *vec, size_t num, size_t len);
extern int kernel_recvmsg(struct socket *sock, struct msghdr *msg,
        struct kvec *vec, size_t num,
        size_t len, int flags);
# 302 "linux-2.6.18/include/linux/net.h"
typedef  ctl_table  _GLOBAL_190_T; extern  _GLOBAL_190_T  _GLOBAL_0_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_1_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_2_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_3_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_4_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_5_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_6_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_7_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_8_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_9_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_10_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_11_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_12_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_13_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_14_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_15_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_16_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_17_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_18_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_19_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_20_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_21_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_22_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_23_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_24_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_25_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_26_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_27_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_28_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_29_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_30_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_31_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_32_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_33_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_34_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_35_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_36_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_37_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_38_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_39_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_40_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_41_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_42_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_43_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_44_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_45_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_46_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_47_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_48_net_table_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_49_net_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_net_table_I) *_GLOBAL_net_table_23_A[NUM_STACKS] = { &_GLOBAL_0_net_table_I, &_GLOBAL_1_net_table_I, &_GLOBAL_2_net_table_I, &_GLOBAL_3_net_table_I, &_GLOBAL_4_net_table_I, &_GLOBAL_5_net_table_I, &_GLOBAL_6_net_table_I, &_GLOBAL_7_net_table_I, &_GLOBAL_8_net_table_I, &_GLOBAL_9_net_table_I, &_GLOBAL_10_net_table_I, &_GLOBAL_11_net_table_I, &_GLOBAL_12_net_table_I, &_GLOBAL_13_net_table_I, &_GLOBAL_14_net_table_I, &_GLOBAL_15_net_table_I, &_GLOBAL_16_net_table_I, &_GLOBAL_17_net_table_I, &_GLOBAL_18_net_table_I, &_GLOBAL_19_net_table_I, &_GLOBAL_20_net_table_I, &_GLOBAL_21_net_table_I, &_GLOBAL_22_net_table_I, &_GLOBAL_23_net_table_I, &_GLOBAL_24_net_table_I, &_GLOBAL_25_net_table_I, &_GLOBAL_26_net_table_I, &_GLOBAL_27_net_table_I, &_GLOBAL_28_net_table_I, &_GLOBAL_29_net_table_I, &_GLOBAL_30_net_table_I, &_GLOBAL_31_net_table_I, &_GLOBAL_32_net_table_I, &_GLOBAL_33_net_table_I, &_GLOBAL_34_net_table_I, &_GLOBAL_35_net_table_I, &_GLOBAL_36_net_table_I, &_GLOBAL_37_net_table_I, &_GLOBAL_38_net_table_I, &_GLOBAL_39_net_table_I, &_GLOBAL_40_net_table_I, &_GLOBAL_41_net_table_I, &_GLOBAL_42_net_table_I, &_GLOBAL_43_net_table_I, &_GLOBAL_44_net_table_I, &_GLOBAL_45_net_table_I, &_GLOBAL_46_net_table_I, &_GLOBAL_47_net_table_I, &_GLOBAL_48_net_table_I, &_GLOBAL_49_net_table_I, };  
typedef  int  _GLOBAL_191_T; extern  _GLOBAL_191_T  global_net_msg_cost[NUM_STACKS];   
typedef  int  _GLOBAL_192_T; extern  _GLOBAL_192_T  global_net_msg_burst[NUM_STACKS];   
# 36 "linux-2.6.18/kernel/sysctl.c" 2
# 1 "linux-2.6.18/include/linux/sysrq.h" 1
# 15 "linux-2.6.18/include/linux/sysrq.h"
struct pt_regs;
struct tty_struct;
# 29 "linux-2.6.18/include/linux/sysrq.h"
struct sysrq_key_op {
 void (*handler)(int, struct pt_regs *, struct tty_struct *);
 char *help_msg;
 char *action_msg;
 int enable_mask;
};
# 51 "linux-2.6.18/include/linux/sysrq.h"
static inline  __attribute__((always_inline)) int __reterr(void)
{
 return -22;
}
# 37 "linux-2.6.18/kernel/sysctl.c" 2
# 1 "linux-2.6.18/include/linux/highuid.h" 1
# 34 "linux-2.6.18/include/linux/highuid.h"
typedef  int  _GLOBAL_193_T; extern  _GLOBAL_193_T  global_overflowuid[NUM_STACKS];   
typedef  int  _GLOBAL_194_T; extern  _GLOBAL_194_T  global_overflowgid[NUM_STACKS];   

extern void __bad_uid(void);
extern void __bad_gid(void);
# 81 "linux-2.6.18/include/linux/highuid.h"
typedef  int  _GLOBAL_195_T; extern  _GLOBAL_195_T  global_fs_overflowuid[NUM_STACKS];   
typedef  int  _GLOBAL_196_T; extern  _GLOBAL_196_T  global_fs_overflowgid[NUM_STACKS];   
# 38 "linux-2.6.18/kernel/sysctl.c" 2
# 1 "linux-2.6.18/include/linux/writeback.h" 1






struct backing_dev_info;

typedef  spinlock_t  _GLOBAL_197_T; extern  _GLOBAL_197_T  global_inode_lock[NUM_STACKS];   
typedef  struct list_head   _GLOBAL_198_T; extern  _GLOBAL_198_T  global_inode_in_use[NUM_STACKS];    
typedef  struct list_head   _GLOBAL_199_T; extern  _GLOBAL_199_T  global_inode_unused[NUM_STACKS];    





static inline  __attribute__((always_inline)) int task_is_pdflush(struct task_struct *task)
{
 return task->flags & 0x00001000;
}






enum writeback_sync_modes {
 WB_SYNC_NONE,
 WB_SYNC_ALL,
 WB_SYNC_HOLD,
};






struct writeback_control {
 struct backing_dev_info *bdi;

 enum writeback_sync_modes sync_mode;
 unsigned long *older_than_this;

 long nr_to_write;

 long pages_skipped;






 loff_t range_start;
 loff_t range_end;

 unsigned nonblocking:1;
 unsigned encountered_congestion:1;
 unsigned for_kupdate:1;
 unsigned for_reclaim:1;
 unsigned for_writepages:1;
 unsigned range_cyclic:1;
};




void writeback_inodes(struct writeback_control *wbc);
void wake_up_inode(struct inode *inode);
int inode_wait(void *);
void sync_inodes_sb(struct super_block *, int wait);
void sync_inodes(int wait);


static inline  __attribute__((always_inline)) void wait_on_inode(struct inode *inode)
{
 do { do { } while (0); } while (0);
 wait_on_bit(&inode->i_state, 3, inode_wait,
       2);
}




int wakeup_pdflush(long nr_pages);
void laptop_io_completion(void);
void laptop_sync_completion(void);
void throttle_vm_writeout(void);


typedef  int  _GLOBAL_200_T; extern  _GLOBAL_200_T  global_dirty_background_ratio[NUM_STACKS];   
typedef  int  _GLOBAL_201_T; extern  _GLOBAL_201_T  global_vm_dirty_ratio[NUM_STACKS];   
typedef  int  _GLOBAL_202_T; extern  _GLOBAL_202_T  global_dirty_writeback_interval[NUM_STACKS];   
typedef  int  _GLOBAL_203_T; extern  _GLOBAL_203_T  global_dirty_expire_interval[NUM_STACKS];   
typedef  int  _GLOBAL_204_T; extern  _GLOBAL_204_T  global_block_dump[NUM_STACKS];   
typedef  int  _GLOBAL_205_T; extern  _GLOBAL_205_T  global_laptop_mode[NUM_STACKS];   

struct ctl_table;
struct file;
int dirty_writeback_centisecs_handler(struct ctl_table *, int, struct file *,
          void *, size_t *, loff_t *);

void page_writeback_init(void);
void balance_dirty_pages_ratelimited_nr(struct address_space *mapping,
     unsigned long nr_pages_dirtied);

static inline  __attribute__((always_inline)) void
balance_dirty_pages_ratelimited(struct address_space *mapping)
{
 balance_dirty_pages_ratelimited_nr(mapping, 1);
}

int pdflush_operation(void (*fn)(unsigned long), unsigned long arg0);
int do_writepages(struct address_space *mapping, struct writeback_control *wbc);
int sync_page_range(struct inode *inode, struct address_space *mapping,
   loff_t pos, loff_t count);
int sync_page_range_nolock(struct inode *inode, struct address_space *mapping,
      loff_t pos, loff_t count);


typedef  int  _GLOBAL_206_T; extern  _GLOBAL_206_T  global_nr_pdflush_threads[NUM_STACKS];   
# 39 "linux-2.6.18/kernel/sysctl.c" 2
# 1 "linux-2.6.18/include/linux/hugetlb.h" 1
# 92 "linux-2.6.18/include/linux/hugetlb.h"
static inline  __attribute__((always_inline)) int is_vm_hugetlb_page(struct vm_area_struct *vma)
{
 return 0;
}
static inline  __attribute__((always_inline)) unsigned long hugetlb_total_pages(void)
{
 return 0;
}
# 40 "linux-2.6.18/kernel/sysctl.c" 2
# 1 "linux-2.6.18/include/linux/security.h" 1
# 26 "linux-2.6.18/include/linux/security.h"
# 1 "linux-2.6.18/include/linux/binfmts.h" 1





struct pt_regs;
# 23 "linux-2.6.18/include/linux/binfmts.h"
struct linux_binprm{
 char buf[128];
 struct page *page[32];
 struct mm_struct *mm;
 unsigned long p;
 int sh_bang;
 struct file * file;
 int e_uid, e_gid;
 kernel_cap_t cap_inheritable, cap_permitted, cap_effective;
 void *security;
 int argc, envc;
 char * filename;
 char * interp;


 unsigned interp_flags;
 unsigned interp_data;
 unsigned long loader, exec;
};
# 55 "linux-2.6.18/include/linux/binfmts.h"
struct linux_binfmt {
 struct linux_binfmt * next;
 struct module *module;
 int (*load_binary)(struct linux_binprm *, struct pt_regs * regs);
 int (*load_shlib)(struct file *);
 int (*core_dump)(long signr, struct pt_regs * regs, struct file * file);
 unsigned long min_coredump;
};

extern int register_binfmt(struct linux_binfmt *);
extern int unregister_binfmt(struct linux_binfmt *);

extern int prepare_binprm(struct linux_binprm *);
extern void remove_arg_zero(struct linux_binprm *);
extern int search_binary_handler(struct linux_binprm *,struct pt_regs *);
extern int flush_old_exec(struct linux_binprm * bprm);

typedef  int  _GLOBAL_207_T; extern  _GLOBAL_207_T  global_suid_dumpable[NUM_STACKS];   
# 82 "linux-2.6.18/include/linux/binfmts.h"
extern int setup_arg_pages(struct linux_binprm * bprm,
      unsigned long stack_top,
      int executable_stack);
extern int copy_strings_kernel(int argc,char ** argv,struct linux_binprm *bprm);
extern void compute_creds(struct linux_binprm *binprm);
extern int do_coredump(long signr, int exit_code, struct pt_regs * regs);
extern int set_binfmt(struct linux_binfmt *new);
# 27 "linux-2.6.18/include/linux/security.h" 2



# 1 "linux-2.6.18/include/linux/shm.h" 1
# 19 "linux-2.6.18/include/linux/shm.h"
# 1 "linux-2.6.18/include/asm/shmparam.h" 1
# 20 "linux-2.6.18/include/linux/shm.h" 2


struct shmid_ds {
 struct ipc_perm shm_perm;
 int shm_segsz;
 __kernel_time_t shm_atime;
 __kernel_time_t shm_dtime;
 __kernel_time_t shm_ctime;
 __kernel_ipc_pid_t shm_cpid;
 __kernel_ipc_pid_t shm_lpid;
 unsigned short shm_nattch;
 unsigned short shm_unused;
 void *shm_unused2;
 void *shm_unused3;
};


# 1 "linux-2.6.18/include/asm/shmbuf.h" 1
# 13 "linux-2.6.18/include/asm/shmbuf.h"
struct shmid64_ds {
 struct ipc64_perm shm_perm;
 size_t shm_segsz;
 __kernel_time_t shm_atime;
 __kernel_time_t shm_dtime;
 __kernel_time_t shm_ctime;
 __kernel_pid_t shm_cpid;
 __kernel_pid_t shm_lpid;
 unsigned long shm_nattch;
 unsigned long __unused4;
 unsigned long __unused5;
};

struct shminfo64 {
 unsigned long shmmax;
 unsigned long shmmin;
 unsigned long shmmni;
 unsigned long shmseg;
 unsigned long shmall;
 unsigned long __unused1;
 unsigned long __unused2;
 unsigned long __unused3;
 unsigned long __unused4;
};
# 38 "linux-2.6.18/include/linux/shm.h" 2
# 58 "linux-2.6.18/include/linux/shm.h"
struct shminfo {
 int shmmax;
 int shmmin;
 int shmmni;
 int shmseg;
 int shmall;
};

struct shm_info {
 int used_ids;
 unsigned long shm_tot;
 unsigned long shm_rss;
 unsigned long shm_swp;
 unsigned long swap_attempts;
 unsigned long swap_successes;
};


struct shmid_kernel
{
 struct kern_ipc_perm shm_perm;
 struct file * shm_file;
 int id;
 unsigned long shm_nattch;
 unsigned long shm_segsz;
 time_t shm_atim;
 time_t shm_dtim;
 time_t shm_ctim;
 pid_t shm_cprid;
 pid_t shm_lprid;
 struct user_struct *mlock_user;
};
# 98 "linux-2.6.18/include/linux/shm.h"
long do_shmat(int shmid, char *shmaddr, int shmflg, unsigned long *addr);
# 31 "linux-2.6.18/include/linux/security.h" 2
# 1 "linux-2.6.18/include/linux/msg.h" 1
# 15 "linux-2.6.18/include/linux/msg.h"
struct msqid_ds {
 struct ipc_perm msg_perm;
 struct msg *msg_first;
 struct msg *msg_last;
 __kernel_time_t msg_stime;
 __kernel_time_t msg_rtime;
 __kernel_time_t msg_ctime;
 unsigned long msg_lcbytes;
 unsigned long msg_lqbytes;
 unsigned short msg_cbytes;
 unsigned short msg_qnum;
 unsigned short msg_qbytes;
 __kernel_ipc_pid_t msg_lspid;
 __kernel_ipc_pid_t msg_lrpid;
};


# 1 "linux-2.6.18/include/asm/msgbuf.h" 1
# 13 "linux-2.6.18/include/asm/msgbuf.h"
struct msqid64_ds {
 struct ipc64_perm msg_perm;
 __kernel_time_t msg_stime;
 __kernel_time_t msg_rtime;
 __kernel_time_t msg_ctime;
 unsigned long msg_cbytes;
 unsigned long msg_qnum;
 unsigned long msg_qbytes;
 __kernel_pid_t msg_lspid;
 __kernel_pid_t msg_lrpid;
 unsigned long __unused4;
 unsigned long __unused5;
};
# 33 "linux-2.6.18/include/linux/msg.h" 2


struct msgbuf {
 long mtype;
 char mtext[1];
};


struct msginfo {
 int msgpool;
 int msgmap;
 int msgmax;
 int msgmnb;
 int msgmni;
 int msgssz;
 int msgtql;
 unsigned short msgseg;
};
# 68 "linux-2.6.18/include/linux/msg.h"
struct msg_msg {
 struct list_head m_list;
 long m_type;
 int m_ts;
 struct msg_msgseg* next;
 void *security;

};


struct msg_queue {
 struct kern_ipc_perm q_perm;
 int q_id;
 time_t q_stime;
 time_t q_rtime;
 time_t q_ctime;
 unsigned long q_cbytes;
 unsigned long q_qnum;
 unsigned long q_qbytes;
 pid_t q_lspid;
 pid_t q_lrpid;

 struct list_head q_messages;
 struct list_head q_receivers;
 struct list_head q_senders;
};
# 32 "linux-2.6.18/include/linux/security.h" 2

# 1 "linux-2.6.18/include/linux/key.h" 1
# 27 "linux-2.6.18/include/linux/key.h"
typedef int32_t key_serial_t;


typedef uint32_t key_perm_t;

struct key;
# 381 "linux-2.6.18/include/linux/key.h"
typedef  struct key   _GLOBAL_208_T; extern  _GLOBAL_208_T  _GLOBAL_0_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_1_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_2_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_3_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_4_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_5_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_6_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_7_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_8_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_9_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_10_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_11_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_12_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_13_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_14_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_15_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_16_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_17_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_18_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_19_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_20_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_21_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_22_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_23_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_24_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_25_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_26_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_27_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_28_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_29_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_30_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_31_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_32_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_33_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_34_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_35_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_36_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_37_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_38_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_39_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_40_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_41_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_42_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_43_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_44_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_45_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_46_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_47_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_48_root_user_keyring_I; extern  _GLOBAL_208_T  _GLOBAL_49_root_user_keyring_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_root_user_keyring_I) *_GLOBAL_root_user_keyring_24_A[NUM_STACKS];   
typedef  struct key   _GLOBAL_209_T; extern  _GLOBAL_209_T  _GLOBAL_0_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_1_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_2_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_3_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_4_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_5_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_6_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_7_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_8_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_9_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_10_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_11_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_12_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_13_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_14_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_15_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_16_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_17_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_18_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_19_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_20_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_21_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_22_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_23_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_24_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_25_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_26_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_27_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_28_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_29_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_30_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_31_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_32_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_33_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_34_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_35_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_36_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_37_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_38_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_39_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_40_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_41_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_42_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_43_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_44_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_45_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_46_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_47_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_48_root_session_keyring_I; extern  _GLOBAL_209_T  _GLOBAL_49_root_session_keyring_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_root_session_keyring_I) *_GLOBAL_root_session_keyring_25_A[NUM_STACKS];   
# 34 "linux-2.6.18/include/linux/security.h" 2

struct ctl_table;





extern int cap_capable (struct task_struct *tsk, int cap);
extern int cap_settime (struct timespec *ts, struct timezone *tz);
extern int cap_ptrace (struct task_struct *parent, struct task_struct *child);
extern int cap_capget (struct task_struct *target, kernel_cap_t *effective, kernel_cap_t *inheritable, kernel_cap_t *permitted);
extern int cap_capset_check (struct task_struct *target, kernel_cap_t *effective, kernel_cap_t *inheritable, kernel_cap_t *permitted);
extern void cap_capset_set (struct task_struct *target, kernel_cap_t *effective, kernel_cap_t *inheritable, kernel_cap_t *permitted);
extern int cap_bprm_set_security (struct linux_binprm *bprm);
extern void cap_bprm_apply_creds (struct linux_binprm *bprm, int unsafe);
extern int cap_bprm_secureexec(struct linux_binprm *bprm);
extern int cap_inode_setxattr(struct dentry *dentry, char *name, void *value, size_t size, int flags);
extern int cap_inode_removexattr(struct dentry *dentry, char *name);
extern int cap_task_post_setuid (uid_t old_ruid, uid_t old_euid, uid_t old_suid, int flags);
extern void cap_task_reparent_to_init (struct task_struct *p);
extern int cap_syslog (int type);
extern int cap_vm_enough_memory (long pages);

struct msghdr;
struct sk_buff;
struct sock;
struct sockaddr;
struct socket;
struct flowi;
struct dst_entry;
struct xfrm_selector;
struct xfrm_policy;
struct xfrm_state;
struct xfrm_user_sec_ctx;

extern int cap_netlink_send(struct sock *sk, struct sk_buff *skb);
extern int cap_netlink_recv(struct sk_buff *skb, int cap);
# 88 "linux-2.6.18/include/linux/security.h"
struct nfsctl_arg;
struct sched_param;
struct swap_info_struct;
# 2104 "linux-2.6.18/include/linux/security.h"
static inline  __attribute__((always_inline)) int security_init(void)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_ptrace (struct task_struct *parent, struct task_struct * child)
{
 return cap_ptrace (parent, child);
}

static inline  __attribute__((always_inline)) int security_capget (struct task_struct *target,
       kernel_cap_t *effective,
       kernel_cap_t *inheritable,
       kernel_cap_t *permitted)
{
 return cap_capget (target, effective, inheritable, permitted);
}

static inline  __attribute__((always_inline)) int security_capset_check (struct task_struct *target,
      kernel_cap_t *effective,
      kernel_cap_t *inheritable,
      kernel_cap_t *permitted)
{
 return cap_capset_check (target, effective, inheritable, permitted);
}

static inline  __attribute__((always_inline)) void security_capset_set (struct task_struct *target,
     kernel_cap_t *effective,
     kernel_cap_t *inheritable,
     kernel_cap_t *permitted)
{
 cap_capset_set (target, effective, inheritable, permitted);
}

static inline  __attribute__((always_inline)) int security_capable(struct task_struct *tsk, int cap)
{
 return cap_capable(tsk, cap);
}

static inline  __attribute__((always_inline)) int security_acct (struct file *file)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sysctl(struct ctl_table *table, int op)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_quotactl (int cmds, int type, int id,
         struct super_block * sb)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_quota_on (struct dentry * dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_syslog(int type)
{
 return cap_syslog(type);
}

static inline  __attribute__((always_inline)) int security_settime(struct timespec *ts, struct timezone *tz)
{
 return cap_settime(ts, tz);
}

static inline  __attribute__((always_inline)) int security_vm_enough_memory(long pages)
{
 return cap_vm_enough_memory(pages);
}

static inline  __attribute__((always_inline)) int security_bprm_alloc (struct linux_binprm *bprm)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_bprm_free (struct linux_binprm *bprm)
{ }

static inline  __attribute__((always_inline)) void security_bprm_apply_creds (struct linux_binprm *bprm, int unsafe)
{
 cap_bprm_apply_creds (bprm, unsafe);
}

static inline  __attribute__((always_inline)) void security_bprm_post_apply_creds (struct linux_binprm *bprm)
{
 return;
}

static inline  __attribute__((always_inline)) int security_bprm_set (struct linux_binprm *bprm)
{
 return cap_bprm_set_security (bprm);
}

static inline  __attribute__((always_inline)) int security_bprm_check (struct linux_binprm *bprm)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_bprm_secureexec (struct linux_binprm *bprm)
{
 return cap_bprm_secureexec(bprm);
}

static inline  __attribute__((always_inline)) int security_sb_alloc (struct super_block *sb)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_sb_free (struct super_block *sb)
{ }

static inline  __attribute__((always_inline)) int security_sb_copy_data (struct file_system_type *type,
      void *orig, void *copy)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_kern_mount (struct super_block *sb, void *data)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_statfs (struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_mount (char *dev_name, struct nameidata *nd,
        char *type, unsigned long flags,
        void *data)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_check_sb (struct vfsmount *mnt,
     struct nameidata *nd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_umount (struct vfsmount *mnt, int flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_sb_umount_close (struct vfsmount *mnt)
{ }

static inline  __attribute__((always_inline)) void security_sb_umount_busy (struct vfsmount *mnt)
{ }

static inline  __attribute__((always_inline)) void security_sb_post_remount (struct vfsmount *mnt,
          unsigned long flags, void *data)
{ }

static inline  __attribute__((always_inline)) void security_sb_post_mountroot (void)
{ }

static inline  __attribute__((always_inline)) void security_sb_post_addmount (struct vfsmount *mnt,
           struct nameidata *mountpoint_nd)
{ }

static inline  __attribute__((always_inline)) int security_sb_pivotroot (struct nameidata *old_nd,
      struct nameidata *new_nd)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_sb_post_pivotroot (struct nameidata *old_nd,
            struct nameidata *new_nd)
{ }

static inline  __attribute__((always_inline)) int security_inode_alloc (struct inode *inode)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_inode_free (struct inode *inode)
{ }

static inline  __attribute__((always_inline)) int security_inode_init_security (struct inode *inode,
      struct inode *dir,
      char **name,
      void **value,
      size_t *len)
{
 return -95;
}

static inline  __attribute__((always_inline)) int security_inode_create (struct inode *dir,
      struct dentry *dentry,
      int mode)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_link (struct dentry *old_dentry,
           struct inode *dir,
           struct dentry *new_dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_unlink (struct inode *dir,
      struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_symlink (struct inode *dir,
       struct dentry *dentry,
       const char *old_name)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_mkdir (struct inode *dir,
     struct dentry *dentry,
     int mode)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_rmdir (struct inode *dir,
     struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_mknod (struct inode *dir,
     struct dentry *dentry,
     int mode, dev_t dev)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_rename (struct inode *old_dir,
      struct dentry *old_dentry,
      struct inode *new_dir,
      struct dentry *new_dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_readlink (struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_follow_link (struct dentry *dentry,
           struct nameidata *nd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_permission (struct inode *inode, int mask,
          struct nameidata *nd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_setattr (struct dentry *dentry,
       struct iattr *attr)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_getattr (struct vfsmount *mnt,
       struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_inode_delete (struct inode *inode)
{ }

static inline  __attribute__((always_inline)) int security_inode_setxattr (struct dentry *dentry, char *name,
        void *value, size_t size, int flags)
{
 return cap_inode_setxattr(dentry, name, value, size, flags);
}

static inline  __attribute__((always_inline)) void security_inode_post_setxattr (struct dentry *dentry, char *name,
       void *value, size_t size, int flags)
{ }

static inline  __attribute__((always_inline)) int security_inode_getxattr (struct dentry *dentry, char *name)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_listxattr (struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_removexattr (struct dentry *dentry, char *name)
{
 return cap_inode_removexattr(dentry, name);
}

static inline  __attribute__((always_inline)) const char *security_inode_xattr_getsuffix (void)
{
 return ((void *)0) ;
}

static inline  __attribute__((always_inline)) int security_inode_getsecurity(const struct inode *inode, const char *name, void *buffer, size_t size, int err)
{
 return -95;
}

static inline  __attribute__((always_inline)) int security_inode_setsecurity(struct inode *inode, const char *name, const void *value, size_t size, int flags)
{
 return -95;
}

static inline  __attribute__((always_inline)) int security_inode_listsecurity(struct inode *inode, char *buffer, size_t buffer_size)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_permission (struct file *file, int mask)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_alloc (struct file *file)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_file_free (struct file *file)
{ }

static inline  __attribute__((always_inline)) int security_file_ioctl (struct file *file, unsigned int cmd,
           unsigned long arg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_mmap (struct file *file, unsigned long reqprot,
          unsigned long prot,
          unsigned long flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_mprotect (struct vm_area_struct *vma,
       unsigned long reqprot,
       unsigned long prot)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_lock (struct file *file, unsigned int cmd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_fcntl (struct file *file, unsigned int cmd,
           unsigned long arg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_set_fowner (struct file *file)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_send_sigiotask (struct task_struct *tsk,
      struct fown_struct *fown,
      int sig)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_receive (struct file *file)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_create (unsigned long clone_flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_alloc (struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_task_free (struct task_struct *p)
{ }

static inline  __attribute__((always_inline)) int security_task_setuid (uid_t id0, uid_t id1, uid_t id2,
     int flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_post_setuid (uid_t old_ruid, uid_t old_euid,
          uid_t old_suid, int flags)
{
 return cap_task_post_setuid (old_ruid, old_euid, old_suid, flags);
}

static inline  __attribute__((always_inline)) int security_task_setgid (gid_t id0, gid_t id1, gid_t id2,
     int flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_setpgid (struct task_struct *p, pid_t pgid)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_getpgid (struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_getsid (struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_task_getsecid (struct task_struct *p, u32 *secid)
{ }

static inline  __attribute__((always_inline)) int security_task_setgroups (struct group_info *group_info)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_setnice (struct task_struct *p, int nice)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_setioprio (struct task_struct *p, int ioprio)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_getioprio (struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_setrlimit (unsigned int resource,
        struct rlimit *new_rlim)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_setscheduler (struct task_struct *p,
           int policy,
           struct sched_param *lp)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_getscheduler (struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_movememory (struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_kill (struct task_struct *p,
          struct siginfo *info, int sig,
          u32 secid)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_wait (struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_prctl (int option, unsigned long arg2,
           unsigned long arg3,
           unsigned long arg4,
           unsigned long arg5)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_task_reparent_to_init (struct task_struct *p)
{
 cap_task_reparent_to_init (p);
}

static inline  __attribute__((always_inline)) void security_task_to_inode(struct task_struct *p, struct inode *inode)
{ }

static inline  __attribute__((always_inline)) int security_ipc_permission (struct kern_ipc_perm *ipcp,
        short flag)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_msg_msg_alloc (struct msg_msg * msg)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_msg_msg_free (struct msg_msg * msg)
{ }

static inline  __attribute__((always_inline)) int security_msg_queue_alloc (struct msg_queue *msq)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_msg_queue_free (struct msg_queue *msq)
{ }

static inline  __attribute__((always_inline)) int security_msg_queue_associate (struct msg_queue * msq,
      int msqflg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_msg_queue_msgctl (struct msg_queue * msq, int cmd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_msg_queue_msgsnd (struct msg_queue * msq,
          struct msg_msg * msg, int msqflg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_msg_queue_msgrcv (struct msg_queue * msq,
          struct msg_msg * msg,
          struct task_struct * target,
          long type, int mode)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_shm_alloc (struct shmid_kernel *shp)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_shm_free (struct shmid_kernel *shp)
{ }

static inline  __attribute__((always_inline)) int security_shm_associate (struct shmid_kernel * shp,
       int shmflg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_shm_shmctl (struct shmid_kernel * shp, int cmd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_shm_shmat (struct shmid_kernel * shp,
          char *shmaddr, int shmflg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sem_alloc (struct sem_array *sma)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_sem_free (struct sem_array *sma)
{ }

static inline  __attribute__((always_inline)) int security_sem_associate (struct sem_array * sma, int semflg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sem_semctl (struct sem_array * sma, int cmd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sem_semop (struct sem_array * sma,
          struct sembuf * sops, unsigned nsops,
          int alter)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_d_instantiate (struct dentry *dentry, struct inode *inode)
{ }

static inline  __attribute__((always_inline)) int security_getprocattr(struct task_struct *p, char *name, void *value, size_t size)
{
 return -22;
}

static inline  __attribute__((always_inline)) int security_setprocattr(struct task_struct *p, char *name, void *value, size_t size)
{
 return -22;
}

static inline  __attribute__((always_inline)) int security_netlink_send (struct sock *sk, struct sk_buff *skb)
{
 return cap_netlink_send (sk, skb);
}

static inline  __attribute__((always_inline)) int security_netlink_recv (struct sk_buff *skb, int cap)
{
 return cap_netlink_recv (skb, cap);
}

static inline  __attribute__((always_inline)) struct dentry *securityfs_create_dir(const char *name,
     struct dentry *parent)
{
 return ERR_PTR(-19);
}

static inline  __attribute__((always_inline)) struct dentry *securityfs_create_file(const char *name,
      mode_t mode,
      struct dentry *parent,
      void *data,
      struct file_operations *fops)
{
 return ERR_PTR(-19);
}

static inline  __attribute__((always_inline)) void securityfs_remove(struct dentry *dentry)
{
}

static inline  __attribute__((always_inline)) int security_secid_to_secctx(u32 secid, char **secdata, u32 *seclen)
{
 return -95;
}

static inline  __attribute__((always_inline)) void security_release_secctx(char *secdata, u32 seclen)
{
}
# 2893 "linux-2.6.18/include/linux/security.h"
static inline  __attribute__((always_inline)) int security_unix_stream_connect(struct socket * sock,
            struct socket * other,
            struct sock * newsk)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_unix_may_send(struct socket * sock,
      struct socket * other)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_create (int family, int type,
       int protocol, int kern)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_socket_post_create(struct socket * sock,
            int family,
            int type,
            int protocol, int kern)
{
}

static inline  __attribute__((always_inline)) int security_socket_bind(struct socket * sock,
           struct sockaddr * address,
           int addrlen)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_connect(struct socket * sock,
       struct sockaddr * address,
       int addrlen)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_listen(struct socket * sock, int backlog)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_accept(struct socket * sock,
      struct socket * newsock)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_socket_post_accept(struct socket * sock,
            struct socket * newsock)
{
}

static inline  __attribute__((always_inline)) int security_socket_sendmsg(struct socket * sock,
       struct msghdr * msg, int size)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_recvmsg(struct socket * sock,
       struct msghdr * msg, int size,
       int flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_getsockname(struct socket * sock)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_getpeername(struct socket * sock)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_getsockopt(struct socket * sock,
          int level, int optname)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_setsockopt(struct socket * sock,
          int level, int optname)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_shutdown(struct socket * sock, int how)
{
 return 0;
}
static inline  __attribute__((always_inline)) int security_sock_rcv_skb (struct sock * sk,
      struct sk_buff * skb)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_getpeersec_stream(struct socket *sock, char *optval,
          int *optlen, unsigned len)
{
 return -92;
}

static inline  __attribute__((always_inline)) int security_socket_getpeersec_dgram(struct socket *sock, struct sk_buff *skb, u32 *secid)
{
 return -92;
}

static inline  __attribute__((always_inline)) int security_sk_alloc(struct sock *sk, int family, gfp_t priority)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_sk_free(struct sock *sk)
{
}

static inline  __attribute__((always_inline)) unsigned int security_sk_sid(struct sock *sk, struct flowi *fl, u8 dir)
{
 return 0;
}
# 3061 "linux-2.6.18/include/linux/security.h"
static inline  __attribute__((always_inline)) int security_xfrm_policy_alloc(struct xfrm_policy *xp, struct xfrm_user_sec_ctx *sec_ctx)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_xfrm_policy_clone(struct xfrm_policy *old, struct xfrm_policy *new)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_xfrm_policy_free(struct xfrm_policy *xp)
{
}

static inline  __attribute__((always_inline)) int security_xfrm_policy_delete(struct xfrm_policy *xp)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_xfrm_state_alloc(struct xfrm_state *x, struct xfrm_user_sec_ctx *sec_ctx)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_xfrm_state_free(struct xfrm_state *x)
{
}

static inline  __attribute__((always_inline)) int security_xfrm_state_delete(struct xfrm_state *x)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_xfrm_policy_lookup(struct xfrm_policy *xp, u32 sk_sid, u8 dir)
{
 return 0;
}
# 41 "linux-2.6.18/kernel/sysctl.c" 2
# 1 "linux-2.6.18/include/linux/initrd.h" 1




typedef  int  _GLOBAL_210_T; extern  _GLOBAL_210_T  global_rd_doload[NUM_STACKS];   


typedef  int  _GLOBAL_211_T; extern  _GLOBAL_211_T  global_rd_prompt[NUM_STACKS];   


typedef  int  _GLOBAL_212_T; extern  _GLOBAL_212_T  global_rd_image_start[NUM_STACKS];   


typedef  int  _GLOBAL_213_T; extern  _GLOBAL_213_T  global_initrd_below_start_ok[NUM_STACKS];   


typedef  unsigned long   _GLOBAL_214_T; extern  _GLOBAL_214_T  global_initrd_start[NUM_STACKS]; extern  _GLOBAL_214_T  global_initrd_end[NUM_STACKS];     
extern void free_initrd_mem(unsigned long, unsigned long);

typedef  unsigned int   _GLOBAL_215_T; extern  _GLOBAL_215_T  global_real_root_dev[NUM_STACKS];    
# 42 "linux-2.6.18/kernel/sysctl.c" 2
# 1 "linux-2.6.18/include/linux/times.h" 1





struct tms {
 clock_t tms_utime;
 clock_t tms_stime;
 clock_t tms_cutime;
 clock_t tms_cstime;
};
# 43 "linux-2.6.18/kernel/sysctl.c" 2


# 1 "linux-2.6.18/include/linux/syscalls.h" 1
# 14 "linux-2.6.18/include/linux/syscalls.h"
struct epoll_event;
struct iattr;
struct inode;
struct iocb;
struct io_event;
struct iovec;
struct itimerspec;
struct itimerval;
struct kexec_segment;
struct linux_dirent;
struct linux_dirent64;
struct list_head;
struct msgbuf;
struct msghdr;
struct msqid_ds;
struct new_utsname;
struct nfsctl_arg;
struct __old_kernel_stat;
struct pollfd;
struct rlimit;
struct rusage;
struct sched_param;
struct semaphore;
struct sembuf;
struct shmid_ds;
struct sockaddr;
struct stat;
struct stat64;
struct statfs;
struct statfs64;
struct __sysctl_args;
struct sysinfo;
struct timespec;
struct timeval;
struct timex;
struct timezone;
struct tms;
struct utimbuf;
struct mq_attr;
struct compat_stat;
struct compat_timeval;
struct robust_list_head;
# 68 "linux-2.6.18/include/linux/syscalls.h"
 long sys_time(time_t *tloc);
 long sys_stime(time_t *tptr);
 long sys_gettimeofday(struct timeval *tv,
    struct timezone *tz);
 long sys_settimeofday(struct timeval *tv,
    struct timezone *tz);
 long sys_adjtimex(struct timex *txc_p);

 long sys_times(struct tms *tbuf);

 long sys_gettid(void);
 long sys_nanosleep(struct timespec *rqtp, struct timespec *rmtp);
 unsigned long sys_alarm(unsigned int seconds);
 long sys_getpid(void);
 long sys_getppid(void);
 long sys_getuid(void);
 long sys_geteuid(void);
 long sys_getgid(void);
 long sys_getegid(void);
 long sys_getresuid(uid_t *ruid, uid_t *euid, uid_t *suid);
 long sys_getresgid(gid_t *rgid, gid_t *egid, gid_t *sgid);
 long sys_getpgid(pid_t pid);
 long sys_getpgrp(void);
 long sys_getsid(pid_t pid);
 long sys_getgroups(int gidsetsize, gid_t *grouplist);

 long sys_setregid(gid_t rgid, gid_t egid);
 long sys_setgid(gid_t gid);
 long sys_setreuid(uid_t ruid, uid_t euid);
 long sys_setuid(uid_t uid);
 long sys_setresuid(uid_t ruid, uid_t euid, uid_t suid);
 long sys_setresgid(gid_t rgid, gid_t egid, gid_t sgid);
 long sys_setfsuid(uid_t uid);
 long sys_setfsgid(gid_t gid);
 long sys_setpgid(pid_t pid, pid_t pgid);
 long sys_setsid(void);
 long sys_setgroups(int gidsetsize, gid_t *grouplist);

 long sys_acct(const char *name);
 long sys_capget(cap_user_header_t header,
    cap_user_data_t dataptr);
 long sys_capset(cap_user_header_t header,
    const cap_user_data_t data);
 long sys_personality(u_long personality);

 long sys_sigpending(old_sigset_t *set);
 long sys_sigprocmask(int how, old_sigset_t *set,
    old_sigset_t *oset);
 long sys_getitimer(int which, struct itimerval *value);
 long sys_setitimer(int which,
    struct itimerval *value,
    struct itimerval *ovalue);
 long sys_timer_create(clockid_t which_clock,
     struct sigevent *timer_event_spec,
     timer_t * created_timer_id);
 long sys_timer_gettime(timer_t timer_id,
    struct itimerspec *setting);
 long sys_timer_getoverrun(timer_t timer_id);
 long sys_timer_settime(timer_t timer_id, int flags,
    const struct itimerspec *new_setting,
    struct itimerspec *old_setting);
 long sys_timer_delete(timer_t timer_id);
 long sys_clock_settime(clockid_t which_clock,
    const struct timespec *tp);
 long sys_clock_gettime(clockid_t which_clock,
    struct timespec *tp);
 long sys_clock_getres(clockid_t which_clock,
    struct timespec *tp);
 long sys_clock_nanosleep(clockid_t which_clock, int flags,
    const struct timespec *rqtp,
    struct timespec *rmtp);

 long sys_nice(int increment);
 long sys_sched_setscheduler(pid_t pid, int policy,
     struct sched_param *param);
 long sys_sched_setparam(pid_t pid,
     struct sched_param *param);
 long sys_sched_getscheduler(pid_t pid);
 long sys_sched_getparam(pid_t pid,
     struct sched_param *param);
 long sys_sched_setaffinity(pid_t pid, unsigned int len,
     unsigned long *user_mask_ptr);
 long sys_sched_getaffinity(pid_t pid, unsigned int len,
     unsigned long *user_mask_ptr);
 long sys_sched_yield(void);
 long sys_sched_get_priority_max(int policy);
 long sys_sched_get_priority_min(int policy);
 long sys_sched_rr_get_interval(pid_t pid,
     struct timespec *interval);
 long sys_setpriority(int which, int who, int niceval);
 long sys_getpriority(int which, int who);

 long sys_shutdown(int, int);
 long sys_reboot(int magic1, int magic2, unsigned int cmd,
    void *arg);
 long sys_restart_syscall(void);
 long sys_kexec_load(unsigned long entry, unsigned long nr_segments,
    struct kexec_segment *segments,
    unsigned long flags);

 long sys_exit(int error_code);
 void sys_exit_group(int error_code);
 long sys_wait4(pid_t pid, int *stat_addr,
    int options, struct rusage *ru);
 long sys_waitid(int which, pid_t pid,
      struct siginfo *infop,
      int options, struct rusage *ru);
 long sys_waitpid(pid_t pid, int *stat_addr, int options);
 long sys_set_tid_address(int *tidptr);
 long sys_futex(u32 *uaddr, int op, u32 val,
   struct timespec *utime, u32 *uaddr2,
   u32 val3);

 long sys_init_module(void *umod, unsigned long len,
    const char *uargs);
 long sys_delete_module(const char *name_user,
    unsigned int flags);

 long sys_rt_sigprocmask(int how, sigset_t *set,
    sigset_t *oset, size_t sigsetsize);
 long sys_rt_sigpending(sigset_t *set, size_t sigsetsize);
 long sys_rt_sigtimedwait(const sigset_t *uthese,
    siginfo_t *uinfo,
    const struct timespec *uts,
    size_t sigsetsize);
 long sys_kill(int pid, int sig);
 long sys_tgkill(int tgid, int pid, int sig);
 long sys_tkill(int pid, int sig);
 long sys_rt_sigqueueinfo(int pid, int sig, siginfo_t *uinfo);
 long sys_sgetmask(void);
 long sys_ssetmask(int newmask);
 unsigned long sys_signal(int sig, __sighandler_t handler);
 long sys_pause(void);

 long sys_sync(void);
 long sys_fsync(unsigned int fd);
 long sys_fdatasync(unsigned int fd);
 long sys_bdflush(int func, long data);
 long sys_mount(char *dev_name, char *dir_name,
    char *type, unsigned long flags,
    void *data);
 long sys_umount(char *name, int flags);
 long sys_oldumount(char *name);
 long sys_truncate(const char *path,
    unsigned long length);
 long sys_ftruncate(unsigned int fd, unsigned long length);
 long sys_stat(char *filename,
   struct __old_kernel_stat *statbuf);
 long sys_statfs(const char * path,
    struct statfs *buf);
 long sys_statfs64(const char *path, size_t sz,
    struct statfs64 *buf);
 long sys_fstatfs(unsigned int fd, struct statfs *buf);
 long sys_fstatfs64(unsigned int fd, size_t sz,
    struct statfs64 *buf);
 long sys_lstat(char *filename,
   struct __old_kernel_stat *statbuf);
 long sys_fstat(unsigned int fd,
   struct __old_kernel_stat *statbuf);
 long sys_newstat(char *filename,
    struct stat *statbuf);
 long sys_newlstat(char *filename,
    struct stat *statbuf);
 long sys_newfstat(unsigned int fd, struct stat *statbuf);
 long sys_ustat(unsigned dev, struct ustat *ubuf);
# 243 "linux-2.6.18/include/linux/syscalls.h"
 long sys_setxattr(char *path, char *name,
    void *value, size_t size, int flags);
 long sys_lsetxattr(char *path, char *name,
    void *value, size_t size, int flags);
 long sys_fsetxattr(int fd, char *name, void *value,
    size_t size, int flags);
 ssize_t sys_getxattr(char *path, char *name,
    void *value, size_t size);
 ssize_t sys_lgetxattr(char *path, char *name,
    void *value, size_t size);
 ssize_t sys_fgetxattr(int fd, char *name,
    void *value, size_t size);
 ssize_t sys_listxattr(char *path, char *list,
    size_t size);
 ssize_t sys_llistxattr(char *path, char *list,
    size_t size);
 ssize_t sys_flistxattr(int fd, char *list, size_t size);
 long sys_removexattr(char *path, char *name);
 long sys_lremovexattr(char *path, char *name);
 long sys_fremovexattr(int fd, char *name);

 unsigned long sys_brk(unsigned long brk);
 long sys_mprotect(unsigned long start, size_t len,
    unsigned long prot);
 unsigned long sys_mremap(unsigned long addr,
    unsigned long old_len, unsigned long new_len,
    unsigned long flags, unsigned long new_addr);
 long sys_remap_file_pages(unsigned long start, unsigned long size,
   unsigned long prot, unsigned long pgoff,
   unsigned long flags);
 long sys_msync(unsigned long start, size_t len, int flags);
 long sys_fadvise64(int fd, loff_t offset, size_t len, int advice);
 long sys_fadvise64_64(int fd, loff_t offset, loff_t len, int advice);
 long sys_munmap(unsigned long addr, size_t len);
 long sys_mlock(unsigned long start, size_t len);
 long sys_munlock(unsigned long start, size_t len);
 long sys_mlockall(int flags);
 long sys_munlockall(void);
 long sys_madvise(unsigned long start, size_t len, int behavior);
 long sys_mincore(unsigned long start, size_t len,
    unsigned char * vec);

 long sys_pivot_root(const char *new_root,
    const char *put_old);
 long sys_chroot(const char *filename);
 long sys_mknod(const char *filename, int mode,
    unsigned dev);
 long sys_link(const char *oldname,
    const char *newname);
 long sys_symlink(const char *old, const char *new);
 long sys_unlink(const char *pathname);
 long sys_rename(const char *oldname,
    const char *newname);
 long sys_chmod(const char *filename, mode_t mode);
 long sys_fchmod(unsigned int fd, mode_t mode);

 long sys_fcntl(unsigned int fd, unsigned int cmd, unsigned long arg);




 long sys_dup(unsigned int fildes);
 long sys_dup2(unsigned int oldfd, unsigned int newfd);
 long sys_ioperm(unsigned long from, unsigned long num, int on);
 long sys_ioctl(unsigned int fd, unsigned int cmd,
    unsigned long arg);
 long sys_flock(unsigned int fd, unsigned int cmd);
 long sys_io_setup(unsigned nr_reqs, aio_context_t *ctx);
 long sys_io_destroy(aio_context_t ctx);
 long sys_io_getevents(aio_context_t ctx_id,
    long min_nr,
    long nr,
    struct io_event *events,
    struct timespec *timeout);
 long sys_io_submit(aio_context_t, long,
    struct iocb * *);
 long sys_io_cancel(aio_context_t ctx_id, struct iocb *iocb,
         struct io_event *result);
 ssize_t sys_sendfile(int out_fd, int in_fd,
    off_t *offset, size_t count);
 ssize_t sys_sendfile64(int out_fd, int in_fd,
    loff_t *offset, size_t count);
 long sys_readlink(const char *path,
    char *buf, int bufsiz);
 long sys_creat(const char *pathname, int mode);
 long sys_open(const char *filename,
    int flags, int mode);
 long sys_close(unsigned int fd);
 long sys_access(const char *filename, int mode);
 long sys_vhangup(void);
 long sys_chown(const char *filename,
    uid_t user, gid_t group);
 long sys_lchown(const char *filename,
    uid_t user, gid_t group);
 long sys_fchown(unsigned int fd, uid_t user, gid_t group);
# 364 "linux-2.6.18/include/linux/syscalls.h"
 long sys_utime(char *filename,
    struct utimbuf *times);
 long sys_utimes(char *filename,
    struct timeval *utimes);
 off_t sys_lseek(unsigned int fd, off_t offset,
    unsigned int origin);
 long sys_llseek(unsigned int fd, unsigned long offset_high,
   unsigned long offset_low, loff_t *result,
   unsigned int origin);
 ssize_t sys_read(unsigned int fd, char *buf,
    size_t count);
 ssize_t sys_readahead(int fd, loff_t offset, size_t count);
 ssize_t sys_readv(unsigned long fd,
    const struct iovec *vec,
    unsigned long vlen);
 ssize_t sys_write(unsigned int fd, const char *buf,
    size_t count);
 ssize_t sys_writev(unsigned long fd,
    const struct iovec *vec,
    unsigned long vlen);
 ssize_t sys_pread64(unsigned int fd, char *buf,
    size_t count, loff_t pos);
 ssize_t sys_pwrite64(unsigned int fd, const char *buf,
    size_t count, loff_t pos);
 long sys_getcwd(char *buf, unsigned long size);
 long sys_mkdir(const char *pathname, int mode);
 long sys_chdir(const char *filename);
 long sys_fchdir(unsigned int fd);
 long sys_rmdir(const char *pathname);
 long sys_lookup_dcookie(u64 cookie64, char *buf, size_t len);
 long sys_quotactl(unsigned int cmd, const char *special,
    qid_t id, void *addr);
 long sys_getdents(unsigned int fd,
    struct linux_dirent *dirent,
    unsigned int count);
 long sys_getdents64(unsigned int fd,
    struct linux_dirent64 *dirent,
    unsigned int count);

 long sys_setsockopt(int fd, int level, int optname,
    char *optval, int optlen);
 long sys_getsockopt(int fd, int level, int optname,
    char *optval, int *optlen);
 long sys_bind(int, struct sockaddr *, int);
 long sys_connect(int, struct sockaddr *, int);
 long sys_accept(int, struct sockaddr *, int *);
 long sys_getsockname(int, struct sockaddr *, int *);
 long sys_getpeername(int, struct sockaddr *, int *);
 long sys_send(int, void *, size_t, unsigned);
 long sys_sendto(int, void *, size_t, unsigned,
    struct sockaddr *, int);
 long sys_sendmsg(int fd, struct msghdr *msg, unsigned flags);
 long sys_recv(int, void *, size_t, unsigned);
 long sys_recvfrom(int, void *, size_t, unsigned,
    struct sockaddr *, int *);
 long sys_recvmsg(int fd, struct msghdr *msg, unsigned flags);
 long sys_socket(int, int, int);
 long sys_socketpair(int, int, int, int *);
 long sys_socketcall(int call, unsigned long *args);
 long sys_listen(int, int);
 long sys_poll(struct pollfd *ufds, unsigned int nfds,
    long timeout);
 long sys_select(int n, fd_set *inp, fd_set *outp,
   fd_set *exp, struct timeval *tvp);
 long sys_epoll_create(int size);
 long sys_epoll_ctl(int epfd, int op, int fd,
    struct epoll_event *event);
 long sys_epoll_wait(int epfd, struct epoll_event *events,
    int maxevents, int timeout);
 long sys_gethostname(char *name, int len);
 long sys_sethostname(char *name, int len);
 long sys_setdomainname(char *name, int len);
 long sys_newuname(struct new_utsname *name);

 long sys_getrlimit(unsigned int resource,
    struct rlimit *rlim);

 long sys_old_getrlimit(unsigned int resource, struct rlimit *rlim);

 long sys_setrlimit(unsigned int resource,
    struct rlimit *rlim);
 long sys_getrusage(int who, struct rusage *ru);
 long sys_umask(int mask);

 long sys_msgget(key_t key, int msgflg);
 long sys_msgsnd(int msqid, struct msgbuf *msgp,
    size_t msgsz, int msgflg);
 long sys_msgrcv(int msqid, struct msgbuf *msgp,
    size_t msgsz, long msgtyp, int msgflg);
 long sys_msgctl(int msqid, int cmd, struct msqid_ds *buf);

 long sys_semget(key_t key, int nsems, int semflg);
 long sys_semop(int semid, struct sembuf *sops,
    unsigned nsops);
 long sys_semctl(int semid, int semnum, int cmd, union semun arg);
 long sys_semtimedop(int semid, struct sembuf *sops,
    unsigned nsops,
    const struct timespec *timeout);
 long sys_shmat(int shmid, char *shmaddr, int shmflg);
 long sys_shmget(key_t key, size_t size, int flag);
 long sys_shmdt(char *shmaddr);
 long sys_shmctl(int shmid, int cmd, struct shmid_ds *buf);

 long sys_mq_open(const char *name, int oflag, mode_t mode, struct mq_attr *attr);
 long sys_mq_unlink(const char *name);
 long sys_mq_timedsend(mqd_t mqdes, const char *msg_ptr, size_t msg_len, unsigned int msg_prio, const struct timespec *abs_timeout);
 ssize_t sys_mq_timedreceive(mqd_t mqdes, char *msg_ptr, size_t msg_len, unsigned int *msg_prio, const struct timespec *abs_timeout);
 long sys_mq_notify(mqd_t mqdes, const struct sigevent *notification);
 long sys_mq_getsetattr(mqd_t mqdes, const struct mq_attr *mqstat, struct mq_attr *omqstat);

 long sys_pciconfig_iobase(long which, unsigned long bus, unsigned long devfn);
 long sys_pciconfig_read(unsigned long bus, unsigned long dfn,
    unsigned long off, unsigned long len,
    void *buf);
 long sys_pciconfig_write(unsigned long bus, unsigned long dfn,
    unsigned long off, unsigned long len,
    void *buf);

 long sys_prctl(int option, unsigned long arg2, unsigned long arg3,
   unsigned long arg4, unsigned long arg5);
 long sys_swapon(const char *specialfile, int swap_flags);
 long sys_swapoff(const char *specialfile);
 long sys_sysctl(struct __sysctl_args *args);
 long sys_sysinfo(struct sysinfo *info);
 long sys_sysfs(int option,
    unsigned long arg1, unsigned long arg2);
 long sys_nfsservctl(int cmd,
    struct nfsctl_arg *arg,
    void *res);
 long sys_syslog(int type, char *buf, int len);
 long sys_uselib(const char *library);
 long sys_ni_syscall(void);
 long sys_ptrace(long request, long pid, long addr, long data);

 long sys_add_key(const char *_type,
       const char *_description,
       const void *_payload,
       size_t plen,
       key_serial_t destringid);

 long sys_request_key(const char *_type,
    const char *_description,
    const char *_callout_info,
    key_serial_t destringid);

 long sys_keyctl(int cmd, unsigned long arg2, unsigned long arg3,
      unsigned long arg4, unsigned long arg5);

 long sys_ioprio_set(int which, int who, int ioprio);
 long sys_ioprio_get(int which, int who);
 long sys_set_mempolicy(int mode, unsigned long *nmask,
    unsigned long maxnode);
 long sys_migrate_pages(pid_t pid, unsigned long maxnode,
    const unsigned long *from,
    const unsigned long *to);
 long sys_move_pages(pid_t pid, unsigned long nr_pages,
    const void * *pages,
    const int *nodes,
    int *status,
    int flags);
 long compat_sys_move_pages(pid_t pid, unsigned long nr_page,
    __u32 *pages,
    const int *nodes,
    int *status,
    int flags);
 long sys_mbind(unsigned long start, unsigned long len,
    unsigned long mode,
    unsigned long *nmask,
    unsigned long maxnode,
    unsigned flags);
 long sys_get_mempolicy(int *policy,
    unsigned long *nmask,
    unsigned long maxnode,
    unsigned long addr, unsigned long flags);

 long sys_inotify_init(void);
 long sys_inotify_add_watch(int fd, const char *path,
     u32 mask);
 long sys_inotify_rm_watch(int fd, u32 wd);

 long sys_spu_run(int fd, __u32 *unpc,
     __u32 *ustatus);
 long sys_spu_create(const char *name,
  unsigned int flags, mode_t mode);

 long sys_mknodat(int dfd, const char * filename, int mode,
       unsigned dev);
 long sys_mkdirat(int dfd, const char * pathname, int mode);
 long sys_unlinkat(int dfd, const char * pathname, int flag);
 long sys_symlinkat(const char * oldname,
         int newdfd, const char * newname);
 long sys_linkat(int olddfd, const char *oldname,
      int newdfd, const char *newname, int flags);
 long sys_renameat(int olddfd, const char * oldname,
        int newdfd, const char * newname);
 long sys_futimesat(int dfd, char *filename,
         struct timeval *utimes);
 long sys_faccessat(int dfd, const char *filename, int mode);
 long sys_fchmodat(int dfd, const char * filename,
        mode_t mode);
 long sys_fchownat(int dfd, const char *filename, uid_t user,
        gid_t group, int flag);
 long sys_openat(int dfd, const char *filename, int flags,
      int mode);
 long sys_newfstatat(int dfd, char *filename,
          struct stat *statbuf, int flag);
 long sys_fstatat64(int dfd, char *filename,
          struct stat64 *statbuf, int flag);
 long sys_readlinkat(int dfd, const char *path, char *buf,
          int bufsiz);
 long compat_sys_futimesat(unsigned int dfd, char *filename,
         struct compat_timeval *t);
 long compat_sys_newfstatat(unsigned int dfd, char * filename,
          struct compat_stat *statbuf,
          int flag);
 long compat_sys_openat(unsigned int dfd, const char *filename,
       int flags, int mode);
 long sys_unshare(unsigned long unshare_flags);

 long sys_splice(int fd_in, loff_t *off_in,
      int fd_out, loff_t *off_out,
      size_t len, unsigned int flags);

 long sys_vmsplice(int fd, const struct iovec *iov,
        unsigned long nr_segs, unsigned int flags);

 long sys_tee(int fdin, int fdout, size_t len, unsigned int flags);

 long sys_sync_file_range(int fd, loff_t offset, loff_t nbytes,
     unsigned int flags);
 long sys_get_robust_list(int pid,
        struct robust_list_head **head_ptr,
        size_t *len_ptr);
 long sys_set_robust_list(struct robust_list_head *head,
        size_t len);
# 46 "linux-2.6.18/kernel/sysctl.c" 2
# 1 "linux-2.6.18/include/linux/nfs_fs.h" 1
# 42 "linux-2.6.18/include/linux/nfs_fs.h"
# 1 "linux-2.6.18/include/linux/in.h" 1
# 22 "linux-2.6.18/include/linux/in.h"
# 1 "linux-2.6.18/include/linux/socket.h" 1
# 11 "linux-2.6.18/include/linux/socket.h"
struct __kernel_sockaddr_storage {
 unsigned short ss_family;

 char __data[128 - sizeof(unsigned short)];


} __attribute__ ((aligned((__alignof__ (struct sockaddr *))))) ;




# 1 "linux-2.6.18/include/linux/sockios.h" 1
# 23 "linux-2.6.18/include/linux/socket.h" 2
# 1 "linux-2.6.18/include/linux/uio.h" 1
# 20 "linux-2.6.18/include/linux/uio.h"
struct iovec
{
 void *iov_base;
 __kernel_size_t iov_len;
};



struct kvec {
 void *iov_base;
 size_t iov_len;
};
# 54 "linux-2.6.18/include/linux/uio.h"
static inline  __attribute__((always_inline)) size_t iov_length(const struct iovec *iov, unsigned long nr_segs)
{
 unsigned long seg;
 size_t ret = 0;

 for (seg = 0; seg < nr_segs; seg++)
  ret += iov[seg].iov_len;
 return ret;
}

unsigned long iov_shorten(struct iovec *iov, unsigned long nr_segs, size_t to);
# 24 "linux-2.6.18/include/linux/socket.h" 2



typedef  int  _GLOBAL_216_T; extern  _GLOBAL_216_T  global_sysctl_somaxconn[NUM_STACKS];   

struct seq_file;
extern void socket_seq_show(struct seq_file *seq);


typedef unsigned short sa_family_t;





struct sockaddr {
 sa_family_t sa_family;
 char sa_data[14];
};

struct linger {
 int l_onoff;
 int l_linger;
};
# 57 "linux-2.6.18/include/linux/socket.h"
struct msghdr {
 void * msg_name;
 int msg_namelen;
 struct iovec * msg_iov;
 __kernel_size_t msg_iovlen;
 void * msg_control;
 __kernel_size_t msg_controllen;
 unsigned msg_flags;
};







struct cmsghdr {
 __kernel_size_t cmsg_len;
        int cmsg_level;
        int cmsg_type;
};
# 130 "linux-2.6.18/include/linux/socket.h"
static inline  __attribute__((always_inline)) struct cmsghdr * __cmsg_nxthdr(void *__ctl, __kernel_size_t __size,
            struct cmsghdr *__cmsg)
{
 struct cmsghdr * __ptr;

 __ptr = (struct cmsghdr*)(((unsigned char *) __cmsg) + ( ((__cmsg->cmsg_len)+sizeof(long)-1) & ~(sizeof(long)-1) ));
 if ((unsigned long)((char*)(__ptr+1) - (char *) __ctl) > __size)
  return (struct cmsghdr *)0;

 return __ptr;
}

static inline  __attribute__((always_inline)) struct cmsghdr * cmsg_nxthdr (struct msghdr *__msg, struct cmsghdr *__cmsg)
{
 return __cmsg_nxthdr(__msg->msg_control, __msg->msg_controllen, __cmsg);
}







struct ucred {
 __u32 pid;
 __u32 uid;
 __u32 gid;
};
# 289 "linux-2.6.18/include/linux/socket.h"
extern int memcpy_fromiovec(unsigned char *kdata, struct iovec *iov, int len);
extern int memcpy_fromiovecend(unsigned char *kdata, struct iovec *iov,
    int offset, int len);
extern int csum_partial_copy_fromiovecend(unsigned char *kdata,
       struct iovec *iov,
       int offset,
       unsigned int len, int *csump);

extern int verify_iovec(struct msghdr *m, struct iovec *iov, char *address, int mode);
extern int memcpy_toiovec(struct iovec *v, unsigned char *kdata, int len);
extern int move_addr_to_user(void *kaddr, int klen, void *uaddr, int *ulen);
extern int move_addr_to_kernel(void *uaddr, int ulen, void *kaddr);
extern int put_cmsg(struct msghdr*, int level, int type, int len, void *data);
# 23 "linux-2.6.18/include/linux/in.h" 2


enum {
  IPPROTO_IP = 0,
  IPPROTO_ICMP = 1,
  IPPROTO_IGMP = 2,
  IPPROTO_IPIP = 4,
  IPPROTO_TCP = 6,
  IPPROTO_EGP = 8,
  IPPROTO_PUP = 12,
  IPPROTO_UDP = 17,
  IPPROTO_IDP = 22,
  IPPROTO_DCCP = 33,
  IPPROTO_RSVP = 46,
  IPPROTO_GRE = 47,

  IPPROTO_IPV6 = 41,

  IPPROTO_ESP = 50,
  IPPROTO_AH = 51,
  IPPROTO_PIM = 103,

  IPPROTO_COMP = 108,
  IPPROTO_SCTP = 132,

  IPPROTO_RAW = 255,
  IPPROTO_MAX
};



struct in_addr {
 __u32 s_addr;
};
# 112 "linux-2.6.18/include/linux/in.h"
struct ip_mreq
{
 struct in_addr imr_multiaddr;
 struct in_addr imr_interface;
};

struct ip_mreqn
{
 struct in_addr imr_multiaddr;
 struct in_addr imr_address;
 int imr_ifindex;
};

struct ip_mreq_source {
 __u32 imr_multiaddr;
 __u32 imr_interface;
 __u32 imr_sourceaddr;
};

struct ip_msfilter {
 __u32 imsf_multiaddr;
 __u32 imsf_interface;
 __u32 imsf_fmode;
 __u32 imsf_numsrc;
 __u32 imsf_slist[1];
};





struct group_req
{
 __u32 gr_interface;
 struct __kernel_sockaddr_storage gr_group;
};

struct group_source_req
{
 __u32 gsr_interface;
 struct __kernel_sockaddr_storage gsr_group;
 struct __kernel_sockaddr_storage gsr_source;
};

struct group_filter
{
 __u32 gf_interface;
 struct __kernel_sockaddr_storage gf_group;
 __u32 gf_fmode;
 __u32 gf_numsrc;
 struct __kernel_sockaddr_storage gf_slist[1];
};





struct in_pktinfo
{
 int ipi_ifindex;
 struct in_addr ipi_spec_dst;
 struct in_addr ipi_addr;
};



struct sockaddr_in {
  sa_family_t sin_family;
  unsigned short int sin_port;
  struct in_addr sin_addr;


  unsigned char __pad[16 - sizeof(short int) -
   sizeof(unsigned short int) - sizeof(struct in_addr)];
};
# 43 "linux-2.6.18/include/linux/nfs_fs.h" 2

# 1 "linux-2.6.18/include/linux/pagemap.h" 1
# 10 "linux-2.6.18/include/linux/pagemap.h"
# 1 "linux-2.6.18/include/linux/highmem.h" 1






# 1 "linux-2.6.18/include/asm/cacheflush.h" 1
# 26 "linux-2.6.18/include/asm/cacheflush.h"
void global_flush_tlb(void);
int change_page_attr(struct page *page, int numpages, pgprot_t prot);
int change_page_attr_addr(unsigned long addr, int numpages, pgprot_t prot);
# 8 "linux-2.6.18/include/linux/highmem.h" 2


static inline  __attribute__((always_inline)) void flush_anon_page(struct page *page, unsigned long vmaddr)
{
}



static inline  __attribute__((always_inline)) void flush_kernel_dcache_page(struct page *page)
{
}
# 30 "linux-2.6.18/include/linux/highmem.h"
static inline  __attribute__((always_inline)) unsigned int nr_free_highpages(void) { return 0; }

static inline  __attribute__((always_inline)) void *kmap(struct page *page)
{
 do { do { } while (0); } while (0);
 return lowmem_page_address(page);
}
# 48 "linux-2.6.18/include/linux/highmem.h"
static inline  __attribute__((always_inline)) void clear_user_highpage(struct page *page, unsigned long vaddr)
{
 void *addr = lowmem_page_address(page);
 clear_page(addr);
 do { } while (0);

 __asm__ __volatile__("": : :"memory");
}
# 70 "linux-2.6.18/include/linux/highmem.h"
static inline  __attribute__((always_inline)) void clear_highpage(struct page *page)
{
 void *kaddr = lowmem_page_address(page);
 clear_page(kaddr);
 do { } while (0);
}




static inline  __attribute__((always_inline)) void memclear_highpage_flush(struct page *page, unsigned int offset, unsigned int size)
{
 void *kaddr;

 do { if (offset + size > (1UL << 12)) ; } while(0);

 kaddr = lowmem_page_address(page);
 memset((char *)kaddr + offset, 0, size);
 do { } while (0);
 do { } while (0);
}

static inline  __attribute__((always_inline)) void copy_user_highpage(struct page *to, struct page *from, unsigned long vaddr)
{
 char *vfrom, *vto;

 vfrom = lowmem_page_address(from);
 vto = lowmem_page_address(to);
 copy_page(vto, vfrom);
 do { } while (0);
 do { } while (0);

 __asm__ __volatile__("": : :"memory");
}

static inline  __attribute__((always_inline)) void copy_highpage(struct page *to, struct page *from)
{
 char *vfrom, *vto;

 vfrom = lowmem_page_address(from);
 vto = lowmem_page_address(to);
 copy_page(vto, vfrom);
 do { } while (0);
 do { } while (0);
}
# 11 "linux-2.6.18/include/linux/pagemap.h" 2

# 1 "linux-2.6.18/include/asm/uaccess.h" 1
# 68 "linux-2.6.18/include/asm/uaccess.h"
struct exception_table_entry
{
 unsigned long insn, fixup;
};
# 116 "linux-2.6.18/include/asm/uaccess.h"
extern void __put_user_1(void);
extern void __put_user_2(void);
extern void __put_user_4(void);
extern void __put_user_8(void);
extern void __put_user_bad(void);
# 179 "linux-2.6.18/include/asm/uaccess.h"
struct __large_struct { unsigned long buf[100]; };
# 212 "linux-2.6.18/include/asm/uaccess.h"
extern int __get_user_1(void);
extern int __get_user_2(void);
extern int __get_user_4(void);
extern int __get_user_8(void);
extern int __get_user_bad(void);
# 252 "linux-2.6.18/include/asm/uaccess.h"
extern unsigned long copy_user_generic(void *to, const void *from, unsigned len);

extern unsigned long copy_to_user(void *to, const void *from, unsigned len);
extern unsigned long copy_from_user(void *to, const void *from, unsigned len);
extern unsigned long copy_in_user(void *to, const void *from, unsigned len);

static inline   __attribute__((always_inline)) __attribute__((always_inline)) int __copy_from_user(void *dst, const void *src, unsigned size)
{
       int ret = 0;
 if (!__builtin_constant_p(size))
  return copy_user_generic(dst,( void *)src,size);
 switch (size) {
 case 1:__asm__ __volatile__( "1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=q" (*(u8*)dst) : "m"((*(struct __large_struct *)((u8 *)src))), "i"(1), "0"(ret));
  return ret;
 case 2:__asm__ __volatile__( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u16*)dst) : "m"((*(struct __large_struct *)((u16 *)src))), "i"(2), "0"(ret));
  return ret;
 case 4:__asm__ __volatile__( "1:	mov""l"" %2,%""k""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u32*)dst) : "m"((*(struct __large_struct *)((u32 *)src))), "i"(4), "0"(ret));
  return ret;
 case 8:__asm__ __volatile__( "1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u64*)dst) : "m"((*(struct __large_struct *)((u64 *)src))), "i"(8), "0"(ret));
  return ret;
 case 10:
         __asm__ __volatile__( "1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u64*)dst) : "m"((*(struct __large_struct *)((u64 *)src))), "i"(16), "0"(ret));
  if (__builtin_expect(!!(ret), 0)) return ret;
  __asm__ __volatile__( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u16*)(8+(char*)dst)) : "m"((*(struct __large_struct *)((u16 *)(8+(char *)src)))), "i"(2), "0"(ret));
  return ret;
 case 16:
  __asm__ __volatile__( "1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u64*)dst) : "m"((*(struct __large_struct *)((u64 *)src))), "i"(16), "0"(ret));
  if (__builtin_expect(!!(ret), 0)) return ret;
  __asm__ __volatile__( "1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u64*)(8+(char*)dst)) : "m"((*(struct __large_struct *)((u64 *)(8+(char *)src)))), "i"(8), "0"(ret));
  return ret;
 default:
  return copy_user_generic(dst,( void *)src,size);
 }
}

static inline   __attribute__((always_inline)) __attribute__((always_inline)) int __copy_to_user(void *dst, const void *src, unsigned size)
{
       int ret = 0;
 if (!__builtin_constant_p(size))
  return copy_user_generic(( void *)dst,src,size);
 switch (size) {
 case 1:__asm__ __volatile__( "1:	mov""b"" %""b""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "iq" (*(u8*)src), "m"((*(struct __large_struct *)((u8 *)dst))), "i"(1), "0"(ret));
  return ret;
 case 2:__asm__ __volatile__( "1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (*(u16*)src), "m"((*(struct __large_struct *)((u16 *)dst))), "i"(2), "0"(ret));
  return ret;
 case 4:__asm__ __volatile__( "1:	mov""l"" %""k""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (*(u32*)src), "m"((*(struct __large_struct *)((u32 *)dst))), "i"(4), "0"(ret));
  return ret;
 case 8:__asm__ __volatile__( "1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (*(u64*)src), "m"((*(struct __large_struct *)((u64 *)dst))), "i"(8), "0"(ret));
  return ret;
 case 10:
  __asm__ __volatile__( "1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (*(u64*)src), "m"((*(struct __large_struct *)((u64 *)dst))), "i"(10), "0"(ret));
  if (__builtin_expect(!!(ret), 0)) return ret;
  asm("":::"memory");
  __asm__ __volatile__( "1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (4[(u16*)src]), "m"((*(struct __large_struct *)(4+(u16 *)dst))), "i"(2), "0"(ret));
  return ret;
 case 16:
  __asm__ __volatile__( "1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (*(u64*)src), "m"((*(struct __large_struct *)((u64 *)dst))), "i"(16), "0"(ret));
  if (__builtin_expect(!!(ret), 0)) return ret;
  asm("":::"memory");
  __asm__ __volatile__( "1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (1[(u64*)src]), "m"((*(struct __large_struct *)(1+(u64 *)dst))), "i"(8), "0"(ret));
  return ret;
 default:
  return copy_user_generic(( void *)dst,src,size);
 }
}


static inline   __attribute__((always_inline)) __attribute__((always_inline)) int __copy_in_user(void *dst, const void *src, unsigned size)
{
       int ret = 0;
 if (!__builtin_constant_p(size))
  return copy_user_generic(( void *)dst,( void *)src,size);
 switch (size) {
 case 1: {
  u8 tmp;
  __asm__ __volatile__( "1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=q" (tmp) : "m"((*(struct __large_struct *)((u8 *)src))), "i"(1), "0"(ret));
  if (__builtin_expect(!!(!ret), 1))
   __asm__ __volatile__( "1:	mov""b"" %""b""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "iq" (tmp), "m"((*(struct __large_struct *)((u8 *)dst))), "i"(1), "0"(ret));
  return ret;
 }
 case 2: {
  u16 tmp;
  __asm__ __volatile__( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (tmp) : "m"((*(struct __large_struct *)((u16 *)src))), "i"(2), "0"(ret));
  if (__builtin_expect(!!(!ret), 1))
   __asm__ __volatile__( "1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (tmp), "m"((*(struct __large_struct *)((u16 *)dst))), "i"(2), "0"(ret));
  return ret;
 }

 case 4: {
  u32 tmp;
  __asm__ __volatile__( "1:	mov""l"" %2,%""k""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (tmp) : "m"((*(struct __large_struct *)((u32 *)src))), "i"(4), "0"(ret));
  if (__builtin_expect(!!(!ret), 1))
   __asm__ __volatile__( "1:	mov""l"" %""k""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (tmp), "m"((*(struct __large_struct *)((u32 *)dst))), "i"(4), "0"(ret));
  return ret;
 }
 case 8: {
  u64 tmp;
  __asm__ __volatile__( "1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (tmp) : "m"((*(struct __large_struct *)((u64 *)src))), "i"(8), "0"(ret));
  if (__builtin_expect(!!(!ret), 1))
   __asm__ __volatile__( "1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (tmp), "m"((*(struct __large_struct *)((u64 *)dst))), "i"(8), "0"(ret));
  return ret;
 }
 default:
  return copy_user_generic(( void *)dst,( void *)src,size);
 }
}

long strncpy_from_user(char *dst, const char *src, long count);
long __strncpy_from_user(char *dst, const char *src, long count);
long strnlen_user(const char *str, long n);
long __strnlen_user(const char *str, long n);
long strlen_user(const char *str);
unsigned long clear_user(void *mem, unsigned long len);
unsigned long __clear_user(void *mem, unsigned long len);
# 13 "linux-2.6.18/include/linux/pagemap.h" 2
# 22 "linux-2.6.18/include/linux/pagemap.h"
static inline  __attribute__((always_inline)) gfp_t mapping_gfp_mask(struct address_space * mapping)
{
 return ( gfp_t)mapping->flags & (( gfp_t)((1 << 20) - 1));
}





static inline  __attribute__((always_inline)) void mapping_set_gfp_mask(struct address_space *m, gfp_t mask)
{
 m->flags = (m->flags & ~( unsigned long)(( gfp_t)((1 << 20) - 1))) |
    ( unsigned long)mask;
}
# 52 "linux-2.6.18/include/linux/pagemap.h"
void release_pages(struct page **pages, int nr, int cold);





static inline  __attribute__((always_inline)) struct page *page_cache_alloc(struct address_space *x)
{
 return alloc_pages_node(((0)), mapping_gfp_mask(x), 0);
}

static inline  __attribute__((always_inline)) struct page *page_cache_alloc_cold(struct address_space *x)
{
 return alloc_pages_node(((0)), mapping_gfp_mask(x)|(( gfp_t)0x100u), 0);
}


typedef int filler_t(void *, struct page *);

extern struct page * find_get_page(struct address_space *mapping,
    unsigned long index);
extern struct page * find_lock_page(struct address_space *mapping,
    unsigned long index);
extern struct page * find_trylock_page(
   struct address_space *mapping, unsigned long index);
extern struct page * find_or_create_page(struct address_space *mapping,
    unsigned long index, gfp_t gfp_mask);
unsigned find_get_pages(struct address_space *mapping, unsigned long start,
   unsigned int nr_pages, struct page **pages);
unsigned find_get_pages_contig(struct address_space *mapping, unsigned long start,
          unsigned int nr_pages, struct page **pages);
unsigned find_get_pages_tag(struct address_space *mapping, unsigned long *index,
   int tag, unsigned int nr_pages, struct page **pages);




static inline  __attribute__((always_inline)) struct page *grab_cache_page(struct address_space *mapping, unsigned long index)
{
 return find_or_create_page(mapping, index, mapping_gfp_mask(mapping));
}

extern struct page * grab_cache_page_nowait(struct address_space *mapping,
    unsigned long index);
extern struct page * read_cache_page(struct address_space *mapping,
    unsigned long index, filler_t *filler,
    void *data);
extern int read_cache_pages(struct address_space *mapping,
  struct list_head *pages, filler_t *filler, void *data);

static inline  __attribute__((always_inline)) struct page *read_mapping_page(struct address_space *mapping,
          unsigned long index, void *data)
{
 filler_t *filler = (filler_t *)mapping->a_ops->readpage;
 return read_cache_page(mapping, index, filler, data);
}

int add_to_page_cache(struct page *page, struct address_space *mapping,
    unsigned long index, gfp_t gfp_mask);
int add_to_page_cache_lru(struct page *page, struct address_space *mapping,
    unsigned long index, gfp_t gfp_mask);
extern void remove_from_page_cache(struct page *page);
extern void __remove_from_page_cache(struct page *page);




static inline  __attribute__((always_inline)) loff_t page_offset(struct page *page)
{
 return ((loff_t)page->index) << 12;
}

static inline  __attribute__((always_inline)) unsigned long linear_page_index(struct vm_area_struct *vma,
     unsigned long address)
{
 unsigned long pgoff = (address - vma->vm_start) >> 12;
 pgoff += vma->vm_pgoff;
 return pgoff >> (12 - 12);
}

extern void __lock_page(struct page *page);
extern void unlock_page(struct page *page);

static inline  __attribute__((always_inline)) void lock_page(struct page *page)
{
 do { do { } while (0); } while (0);
 if (test_and_set_bit(0, &(page)->flags))
  __lock_page(page);
}





extern void wait_on_page_bit(struct page *page, int bit_nr);
# 155 "linux-2.6.18/include/linux/pagemap.h"
static inline  __attribute__((always_inline)) void wait_on_page_locked(struct page *page)
{
 if ((__builtin_constant_p(0) ? constant_test_bit((0),(&(page)->flags)) : variable_test_bit((0),(&(page)->flags))))
  wait_on_page_bit(page, 0);
}




static inline  __attribute__((always_inline)) void wait_on_page_writeback(struct page *page)
{
 if ((__builtin_constant_p(12) ? constant_test_bit((12),(&(page)->flags)) : variable_test_bit((12),(&(page)->flags))))
  wait_on_page_bit(page, 12);
}

extern void end_page_writeback(struct page *page);







static inline  __attribute__((always_inline)) int fault_in_pages_writeable(char *uaddr, int size)
{
 int ret;





 ret = ({ int __pu_err; do { __pu_err = 0; (void)0; switch ((sizeof(*(uaddr)))) { case 1: __asm__ __volatile__( "1:	mov""b"" %""b""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__pu_err) : "iq" (((__typeof__(*(uaddr)))(0))), "m"((*(struct __large_struct *)(((uaddr))))), "i"(-14), "0"(__pu_err)); break; case 2: __asm__ __volatile__( "1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__pu_err) : "ir" (((__typeof__(*(uaddr)))(0))), "m"((*(struct __large_struct *)(((uaddr))))), "i"(-14), "0"(__pu_err)); break; case 4: __asm__ __volatile__( "1:	mov""l"" %""k""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__pu_err) : "ir" (((__typeof__(*(uaddr)))(0))), "m"((*(struct __large_struct *)(((uaddr))))), "i"(-14), "0"(__pu_err)); break; case 8: __asm__ __volatile__( "1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__pu_err) : "ir" (((__typeof__(*(uaddr)))(0))), "m"((*(struct __large_struct *)(((uaddr))))), "i"(-14), "0"(__pu_err)); break; default: __put_user_bad(); } } while (0); __pu_err; });
 if (ret == 0) {
  char *end = uaddr + size - 1;





  if (((unsigned long)uaddr & (~((1UL << 12)-1))) !=
    ((unsigned long)end & (~((1UL << 12)-1))))
    ret = ({ int __pu_err; do { __pu_err = 0; (void)0; switch ((sizeof(*(end)))) { case 1: __asm__ __volatile__( "1:	mov""b"" %""b""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__pu_err) : "iq" (((__typeof__(*(end)))(0))), "m"((*(struct __large_struct *)(((end))))), "i"(-14), "0"(__pu_err)); break; case 2: __asm__ __volatile__( "1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__pu_err) : "ir" (((__typeof__(*(end)))(0))), "m"((*(struct __large_struct *)(((end))))), "i"(-14), "0"(__pu_err)); break; case 4: __asm__ __volatile__( "1:	mov""l"" %""k""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__pu_err) : "ir" (((__typeof__(*(end)))(0))), "m"((*(struct __large_struct *)(((end))))), "i"(-14), "0"(__pu_err)); break; case 8: __asm__ __volatile__( "1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__pu_err) : "ir" (((__typeof__(*(end)))(0))), "m"((*(struct __large_struct *)(((end))))), "i"(-14), "0"(__pu_err)); break; default: __put_user_bad(); } } while (0); __pu_err; });
 }
 return ret;
}

static inline  __attribute__((always_inline)) void fault_in_pages_readable(const char *uaddr, int size)
{
 volatile char c;
 int ret;

 ret = ({ int __gu_err; unsigned long __gu_val; do { __gu_err = 0; (void)0; switch ((sizeof(*(uaddr)))) { case 1: __asm__ __volatile__( "1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__gu_err), "=q" (__gu_val) : "m"((*(struct __large_struct *)(((uaddr))))), "i"(-14), "0"(__gu_err)); break; case 2: __asm__ __volatile__( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__gu_err), "=r" (__gu_val) : "m"((*(struct __large_struct *)(((uaddr))))), "i"(-14), "0"(__gu_err)); break; case 4: __asm__ __volatile__( "1:	mov""l"" %2,%""k""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__gu_err), "=r" (__gu_val) : "m"((*(struct __large_struct *)(((uaddr))))), "i"(-14), "0"(__gu_err)); break; case 8: __asm__ __volatile__( "1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__gu_err), "=r" (__gu_val) : "m"((*(struct __large_struct *)(((uaddr))))), "i"(-14), "0"(__gu_err)); break; default: (__gu_val) = __get_user_bad(); } } while (0); ((c)) = (__typeof__(*((uaddr))))__gu_val; __gu_err; });
 if (ret == 0) {
  const char *end = uaddr + size - 1;

  if (((unsigned long)uaddr & (~((1UL << 12)-1))) !=
    ((unsigned long)end & (~((1UL << 12)-1))))
    ({ int __gu_err; unsigned long __gu_val; do { __gu_err = 0; (void)0; switch ((sizeof(*(end)))) { case 1: __asm__ __volatile__( "1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__gu_err), "=q" (__gu_val) : "m"((*(struct __large_struct *)(((end))))), "i"(-14), "0"(__gu_err)); break; case 2: __asm__ __volatile__( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__gu_err), "=r" (__gu_val) : "m"((*(struct __large_struct *)(((end))))), "i"(-14), "0"(__gu_err)); break; case 4: __asm__ __volatile__( "1:	mov""l"" %2,%""k""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__gu_err), "=r" (__gu_val) : "m"((*(struct __large_struct *)(((end))))), "i"(-14), "0"(__gu_err)); break; case 8: __asm__ __volatile__( "1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__gu_err), "=r" (__gu_val) : "m"((*(struct __large_struct *)(((end))))), "i"(-14), "0"(__gu_err)); break; default: (__gu_val) = __get_user_bad(); } } while (0); ((c)) = (__typeof__(*((end))))__gu_val; __gu_err; });
 }
}
# 45 "linux-2.6.18/include/linux/nfs_fs.h" 2



# 1 "linux-2.6.18/include/linux/sunrpc/debug.h" 1
# 46 "linux-2.6.18/include/linux/sunrpc/debug.h"
typedef  unsigned int   _GLOBAL_217_T; extern  _GLOBAL_217_T  global_rpc_debug[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_218_T; extern  _GLOBAL_218_T  global_nfs_debug[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_219_T; extern  _GLOBAL_219_T  global_nfsd_debug[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_220_T; extern  _GLOBAL_220_T  global_nlm_debug[NUM_STACKS];    
# 75 "linux-2.6.18/include/linux/sunrpc/debug.h"
void rpc_register_sysctl(void);
void rpc_unregister_sysctl(void);
# 89 "linux-2.6.18/include/linux/sunrpc/debug.h"
enum {
 CTL_RPCDEBUG = 1,
 CTL_NFSDEBUG,
 CTL_NFSDDEBUG,
 CTL_NLMDEBUG,
 CTL_SLOTTABLE_UDP,
 CTL_SLOTTABLE_TCP,
 CTL_MIN_RESVPORT,
 CTL_MAX_RESVPORT,
};
# 49 "linux-2.6.18/include/linux/nfs_fs.h" 2
# 1 "linux-2.6.18/include/linux/sunrpc/auth.h" 1
# 14 "linux-2.6.18/include/linux/sunrpc/auth.h"
# 1 "linux-2.6.18/include/linux/sunrpc/sched.h" 1
# 13 "linux-2.6.18/include/linux/sunrpc/sched.h"
# 1 "linux-2.6.18/include/linux/sunrpc/types.h" 1
# 14 "linux-2.6.18/include/linux/sunrpc/sched.h" 2



# 1 "linux-2.6.18/include/linux/sunrpc/xdr.h" 1
# 25 "linux-2.6.18/include/linux/sunrpc/xdr.h"
struct xdr_netobj {
 unsigned int len;
 u8 * data;
};






typedef int (*kxdrproc_t)(void *rqstp, u32 *data, void *obj);
# 50 "linux-2.6.18/include/linux/sunrpc/xdr.h"
struct xdr_buf {
 struct kvec head[1],
   tail[1];

 struct page ** pages;
 unsigned int page_base,
   page_len;

 unsigned int buflen,
   len;

};
# 91 "linux-2.6.18/include/linux/sunrpc/xdr.h"
u32 * xdr_encode_opaque_fixed(u32 *p, const void *ptr, unsigned int len);
u32 * xdr_encode_opaque(u32 *p, const void *ptr, unsigned int len);
u32 * xdr_encode_string(u32 *p, const char *s);
u32 * xdr_decode_string_inplace(u32 *p, char **sp, int *lenp, int maxlen);
u32 * xdr_encode_netobj(u32 *p, const struct xdr_netobj *);
u32 * xdr_decode_netobj(u32 *p, struct xdr_netobj *);

void xdr_encode_pages(struct xdr_buf *, struct page **, unsigned int,
    unsigned int);
void xdr_inline_pages(struct xdr_buf *, unsigned int,
    struct page **, unsigned int, unsigned int);

static inline  __attribute__((always_inline)) u32 *xdr_encode_array(u32 *p, const void *s, unsigned int len)
{
 return xdr_encode_opaque(p, s, len);
}




static inline  __attribute__((always_inline)) u32 *
xdr_encode_hyper(u32 *p, __u64 val)
{
 *p++ = htonl(val >> 32);
 *p++ = htonl(val & 0xFFFFFFFF);
 return p;
}

static inline  __attribute__((always_inline)) u32 *
xdr_decode_hyper(u32 *p, __u64 *valp)
{
 *valp = ((__u64) ntohl(*p++)) << 32;
 *valp |= ntohl(*p++);
 return p;
}




static inline  __attribute__((always_inline)) int
xdr_adjust_iovec(struct kvec *iov, u32 *p)
{
 return iov->iov_len = ((u8 *) p - (u8 *) iov->iov_base);
}




extern void xdr_shift_buf(struct xdr_buf *, size_t);
extern void xdr_buf_from_iov(struct kvec *, struct xdr_buf *);
extern int xdr_buf_subsegment(struct xdr_buf *, struct xdr_buf *, int, int);
extern int xdr_buf_read_netobj(struct xdr_buf *, struct xdr_netobj *, int);
extern int read_bytes_from_xdr_buf(struct xdr_buf *, int, void *, int);
extern int write_bytes_to_xdr_buf(struct xdr_buf *, int, void *, int);




typedef struct {
 struct sk_buff *skb;
 unsigned int offset;
 size_t count;
 unsigned int csum;
} skb_reader_t;

typedef size_t (*skb_read_actor_t)(skb_reader_t *desc, void *to, size_t len);

extern int csum_partial_copy_to_xdr(struct xdr_buf *, struct sk_buff *);
extern ssize_t xdr_partial_copy_from_skb(struct xdr_buf *, unsigned int,
  skb_reader_t *, skb_read_actor_t);

extern int xdr_encode_word(struct xdr_buf *, int, u32);
extern int xdr_decode_word(struct xdr_buf *, int, u32 *);

struct xdr_array2_desc;
typedef int (*xdr_xcode_elem_t)(struct xdr_array2_desc *desc, void *elem);
struct xdr_array2_desc {
 unsigned int elem_size;
 unsigned int array_len;
 unsigned int array_maxlen;
 xdr_xcode_elem_t xcode;
};

extern int xdr_decode_array2(struct xdr_buf *buf, unsigned int base,
                             struct xdr_array2_desc *desc);
extern int xdr_encode_array2(struct xdr_buf *buf, unsigned int base,
        struct xdr_array2_desc *desc);




struct xdr_stream {
 uint32_t *p;
 struct xdr_buf *buf;

 uint32_t *end;
 struct kvec *iov;
};

extern void xdr_init_encode(struct xdr_stream *xdr, struct xdr_buf *buf, uint32_t *p);
extern uint32_t *xdr_reserve_space(struct xdr_stream *xdr, size_t nbytes);
extern void xdr_write_pages(struct xdr_stream *xdr, struct page **pages,
  unsigned int base, unsigned int len);
extern void xdr_init_decode(struct xdr_stream *xdr, struct xdr_buf *buf, uint32_t *p);
extern uint32_t *xdr_inline_decode(struct xdr_stream *xdr, size_t nbytes);
extern void xdr_read_pages(struct xdr_stream *xdr, unsigned int len);
extern void xdr_enter_page(struct xdr_stream *xdr, unsigned int len);
# 18 "linux-2.6.18/include/linux/sunrpc/sched.h" 2




struct rpc_procinfo;
struct rpc_message {
 struct rpc_procinfo * rpc_proc;
 void * rpc_argp;
 void * rpc_resp;
 struct rpc_cred * rpc_cred;
};

struct rpc_call_ops;
struct rpc_wait_queue;
struct rpc_wait {
 struct list_head list;
 struct list_head links;
 struct rpc_wait_queue * rpc_waitq;
};




struct rpc_task {

 unsigned long tk_magic;

 atomic_t tk_count;
 struct list_head tk_task;
 struct rpc_clnt * tk_client;
 struct rpc_rqst * tk_rqstp;
 int tk_status;




 struct rpc_message tk_msg;
 __u8 tk_garb_retry;
 __u8 tk_cred_retry;

 unsigned long tk_cookie;







 void (*tk_timeout_fn)(struct rpc_task *);
 void (*tk_callback)(struct rpc_task *);
 void (*tk_action)(struct rpc_task *);
 const struct rpc_call_ops *tk_ops;
 void * tk_calldata;






 struct timer_list tk_timer;
 unsigned long tk_timeout;
 unsigned short tk_flags;
 unsigned char tk_priority : 2;
 unsigned long tk_runstate;
 struct workqueue_struct *tk_workqueue;


 union {
  struct work_struct tk_work;
  struct rpc_wait tk_wait;
 } u;

 unsigned short tk_timeouts;
 size_t tk_bytes_sent;
 unsigned long tk_start;
 long tk_rtt;


 unsigned short tk_pid;

};
# 116 "linux-2.6.18/include/linux/sunrpc/sched.h"
typedef void (*rpc_action)(struct rpc_task *);

struct rpc_call_ops {
 void (*rpc_call_prepare)(struct rpc_task *, void *);
 void (*rpc_call_done)(struct rpc_task *, void *);
 void (*rpc_release)(void *);
};
# 204 "linux-2.6.18/include/linux/sunrpc/sched.h"
struct rpc_wait_queue {
 spinlock_t lock;
 struct list_head tasks[(2 +1)];
 unsigned long cookie;
 unsigned char maxpriority;
 unsigned char priority;
 unsigned char count;
 unsigned char nr;
 unsigned short qlen;

 const char * name;

};
# 252 "linux-2.6.18/include/linux/sunrpc/sched.h"
struct rpc_task *rpc_new_task(struct rpc_clnt *, int flags,
    const struct rpc_call_ops *ops, void *data);
struct rpc_task *rpc_run_task(struct rpc_clnt *clnt, int flags,
    const struct rpc_call_ops *ops, void *data);
struct rpc_task *rpc_new_child(struct rpc_clnt *, struct rpc_task *parent);
void rpc_init_task(struct rpc_task *task, struct rpc_clnt *clnt,
    int flags, const struct rpc_call_ops *ops,
    void *data);
void rpc_release_task(struct rpc_task *);
void rpc_exit_task(struct rpc_task *);
void rpc_killall_tasks(struct rpc_clnt *);
int rpc_execute(struct rpc_task *);
void rpc_run_child(struct rpc_task *parent, struct rpc_task *child,
     rpc_action action);
void rpc_init_priority_wait_queue(struct rpc_wait_queue *, const char *);
void rpc_init_wait_queue(struct rpc_wait_queue *, const char *);
void rpc_sleep_on(struct rpc_wait_queue *, struct rpc_task *,
     rpc_action action, rpc_action timer);
void rpc_wake_up_task(struct rpc_task *);
void rpc_wake_up(struct rpc_wait_queue *);
struct rpc_task *rpc_wake_up_next(struct rpc_wait_queue *);
void rpc_wake_up_status(struct rpc_wait_queue *, int);
void rpc_delay(struct rpc_task *, unsigned long);
void * rpc_malloc(struct rpc_task *, size_t);
void rpc_free(struct rpc_task *);
int rpciod_up(void);
void rpciod_down(void);
int __rpc_wait_for_completion_task(struct rpc_task *task, int (*)(void *));

void rpc_show_tasks(void);

int rpc_init_mempool(void);
void rpc_destroy_mempool(void);
typedef  struct workqueue_struct   _GLOBAL_221_T; extern  _GLOBAL_221_T  * global_rpciod_workqueue[NUM_STACKS];    

static inline  __attribute__((always_inline)) void rpc_exit(struct rpc_task *task, int status)
{
 task->tk_status = status;
 task->tk_action = rpc_exit_task;
}

static inline  __attribute__((always_inline)) int rpc_wait_for_completion_task(struct rpc_task *task)
{
 return __rpc_wait_for_completion_task(task, ((void *)0));
}


static inline  __attribute__((always_inline)) const char * rpc_qname(struct rpc_wait_queue *q)
{
 return ((q && q->name) ? q->name : "unknown");
}
# 15 "linux-2.6.18/include/linux/sunrpc/auth.h" 2
# 27 "linux-2.6.18/include/linux/sunrpc/auth.h"
struct auth_cred {
 uid_t uid;
 gid_t gid;
 struct group_info *group_info;
};




struct rpc_cred {
 struct hlist_node cr_hash;
 struct rpc_credops * cr_ops;
 unsigned long cr_expire;
 atomic_t cr_count;
 unsigned short cr_flags;

 unsigned long cr_magic;


 uid_t cr_uid;


};
# 60 "linux-2.6.18/include/linux/sunrpc/auth.h"
struct rpc_cred_cache {
 struct hlist_head hashtable[8];
 unsigned long nextgc;
 unsigned long expire;
};

struct rpc_auth {
 unsigned int au_cslack;


 unsigned int au_rslack;

 unsigned int au_verfsize;

 unsigned int au_flags;
 struct rpc_authops * au_ops;
 rpc_authflavor_t au_flavor;



 atomic_t au_count;

 struct rpc_cred_cache * au_credcache;

};
# 93 "linux-2.6.18/include/linux/sunrpc/auth.h"
struct rpc_authops {
 struct module *owner;
 rpc_authflavor_t au_flavor;

 char * au_name;

 struct rpc_auth * (*create)(struct rpc_clnt *, rpc_authflavor_t);
 void (*destroy)(struct rpc_auth *);

 struct rpc_cred * (*lookup_cred)(struct rpc_auth *, struct auth_cred *, int);
 struct rpc_cred * (*crcreate)(struct rpc_auth*, struct auth_cred *, int);
};

struct rpc_credops {
 const char * cr_name;
 int (*cr_init)(struct rpc_auth *, struct rpc_cred *);
 void (*crdestroy)(struct rpc_cred *);

 int (*crmatch)(struct auth_cred *, struct rpc_cred *, int);
 u32 * (*crmarshal)(struct rpc_task *, u32 *);
 int (*crrefresh)(struct rpc_task *);
 u32 * (*crvalidate)(struct rpc_task *, u32 *);
 int (*crwrap_req)(struct rpc_task *, kxdrproc_t,
      void *, u32 *, void *);
 int (*crunwrap_resp)(struct rpc_task *, kxdrproc_t,
      void *, u32 *, void *);
};

typedef  struct rpc_authops   _GLOBAL_222_T; extern  _GLOBAL_222_T  global_authunix_ops[NUM_STACKS];    
typedef  struct rpc_authops   _GLOBAL_223_T; extern  _GLOBAL_223_T  global_authnull_ops[NUM_STACKS];    




int rpcauth_register(struct rpc_authops *);
int rpcauth_unregister(struct rpc_authops *);
struct rpc_auth * rpcauth_create(rpc_authflavor_t, struct rpc_clnt *);
void rpcauth_destroy(struct rpc_auth *);
struct rpc_cred * rpcauth_lookup_credcache(struct rpc_auth *, struct auth_cred *, int);
struct rpc_cred * rpcauth_lookupcred(struct rpc_auth *, int);
struct rpc_cred * rpcauth_bindcred(struct rpc_task *);
void rpcauth_holdcred(struct rpc_task *);
void put_rpccred(struct rpc_cred *);
void rpcauth_unbindcred(struct rpc_task *);
u32 * rpcauth_marshcred(struct rpc_task *, u32 *);
u32 * rpcauth_checkverf(struct rpc_task *, u32 *);
int rpcauth_wrap_req(struct rpc_task *task, kxdrproc_t encode, void *rqstp, u32 *data, void *obj);
int rpcauth_unwrap_resp(struct rpc_task *task, kxdrproc_t decode, void *rqstp, u32 *data, void *obj);
int rpcauth_refreshcred(struct rpc_task *);
void rpcauth_invalcred(struct rpc_task *);
int rpcauth_uptodatecred(struct rpc_task *);
int rpcauth_init_credcache(struct rpc_auth *, unsigned long);
void rpcauth_free_credcache(struct rpc_auth *);

static inline 
__attribute__((always_inline)) struct rpc_cred * get_rpccred(struct rpc_cred *cred)
{
 atomic_inc(&cred->cr_count);
 return cred;
}
# 50 "linux-2.6.18/include/linux/nfs_fs.h" 2
# 1 "linux-2.6.18/include/linux/sunrpc/clnt.h" 1
# 14 "linux-2.6.18/include/linux/sunrpc/clnt.h"
# 1 "linux-2.6.18/include/linux/sunrpc/xprt.h" 1
# 18 "linux-2.6.18/include/linux/sunrpc/xprt.h"
typedef  unsigned int   _GLOBAL_224_T; extern  _GLOBAL_224_T  global_xprt_udp_slot_table_entries[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_225_T; extern  _GLOBAL_225_T  global_xprt_tcp_slot_table_entries[NUM_STACKS];    
# 35 "linux-2.6.18/include/linux/sunrpc/xprt.h"
typedef  unsigned int   _GLOBAL_226_T; extern  _GLOBAL_226_T  global_xprt_min_resvport[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_227_T; extern  _GLOBAL_227_T  global_xprt_max_resvport[NUM_STACKS];    
# 46 "linux-2.6.18/include/linux/sunrpc/xprt.h"
struct rpc_timeout {
 unsigned long to_initval,
    to_maxval,
    to_increment;
 unsigned int to_retries;
 unsigned char to_exponential;
};

struct rpc_task;
struct rpc_xprt;
struct seq_file;




struct rpc_rqst {



 struct rpc_xprt * rq_xprt;
 struct xdr_buf rq_snd_buf;
 struct xdr_buf rq_rcv_buf;




 struct rpc_task * rq_task;
 __u32 rq_xid;
 int rq_cong;
 int rq_received;
 u32 rq_seqno;
 int rq_enc_pages_num;
 struct page **rq_enc_pages;

 void (*rq_release_snd_buf)(struct rpc_rqst *);
 struct list_head rq_list;

 __u32 * rq_buffer;
 size_t rq_bufsize;

 struct xdr_buf rq_private_buf;


 unsigned long rq_majortimeo;
 unsigned long rq_timeout;
 unsigned int rq_retries;




 u32 rq_bytes_sent;

 unsigned long rq_xtime;
 int rq_ntrans;
};



struct rpc_xprt_ops {
 void (*set_buffer_size)(struct rpc_xprt *xprt, size_t sndsize, size_t rcvsize);
 int (*reserve_xprt)(struct rpc_task *task);
 void (*release_xprt)(struct rpc_xprt *xprt, struct rpc_task *task);
 void (*set_port)(struct rpc_xprt *xprt, unsigned short port);
 void (*connect)(struct rpc_task *task);
 void * (*buf_alloc)(struct rpc_task *task, size_t size);
 void (*buf_free)(struct rpc_task *task);
 int (*send_request)(struct rpc_task *task);
 void (*set_retrans_timeout)(struct rpc_task *task);
 void (*timer)(struct rpc_task *task);
 void (*release_request)(struct rpc_task *task);
 void (*close)(struct rpc_xprt *xprt);
 void (*destroy)(struct rpc_xprt *xprt);
 void (*print_stats)(struct rpc_xprt *xprt, struct seq_file *seq);
};

struct rpc_xprt {
 struct rpc_xprt_ops * ops;
 struct socket * sock;
 struct sock * inet;

 struct rpc_timeout timeout;
 struct sockaddr_in addr;
 int prot;

 unsigned long cong;
 unsigned long cwnd;

 size_t rcvsize,
    sndsize;

 size_t max_payload;

 unsigned int tsh_size;


 struct rpc_wait_queue sending;
 struct rpc_wait_queue resend;
 struct rpc_wait_queue pending;
 struct rpc_wait_queue backlog;
 struct list_head free;
 struct rpc_rqst * slot;
 unsigned int max_reqs;
 unsigned long state;
 unsigned char shutdown : 1,
    resvport : 1;




 __u32 xid;




 u32 tcp_recm,
    tcp_xid,
    tcp_reclen,
    tcp_offset;
 unsigned long tcp_copied,
    tcp_flags;



 unsigned long connect_timeout,
    bind_timeout,
    reestablish_timeout;
 struct work_struct connect_worker;
 unsigned short port;




 struct work_struct task_cleanup;
 struct timer_list timer;
 unsigned long last_used,
    idle_timeout;




 spinlock_t transport_lock;
 spinlock_t reserve_lock;
 struct rpc_task * snd_task;

 struct list_head recv;

 struct {
  unsigned long bind_count,
     connect_count,
     connect_start,
     connect_time,
     sends,
     recvs,
     bad_xids;

  unsigned long long req_u,
     bklog_u;
 } stat;

 void (*old_data_ready)(struct sock *, int);
 void (*old_state_change)(struct sock *);
 void (*old_write_space)(struct sock *);
};
# 220 "linux-2.6.18/include/linux/sunrpc/xprt.h"
struct rpc_xprt * xprt_create_proto(int proto, struct sockaddr_in *addr, struct rpc_timeout *to);
void xprt_set_timeout(struct rpc_timeout *to, unsigned int retr, unsigned long incr);




void xprt_connect(struct rpc_task *task);
void xprt_reserve(struct rpc_task *task);
int xprt_reserve_xprt(struct rpc_task *task);
int xprt_reserve_xprt_cong(struct rpc_task *task);
int xprt_prepare_transmit(struct rpc_task *task);
void xprt_transmit(struct rpc_task *task);
void xprt_end_transmit(struct rpc_task *task);
int xprt_adjust_timeout(struct rpc_rqst *req);
void xprt_release_xprt(struct rpc_xprt *xprt, struct rpc_task *task);
void xprt_release_xprt_cong(struct rpc_xprt *xprt, struct rpc_task *task);
void xprt_release(struct rpc_task *task);
int xprt_destroy(struct rpc_xprt *xprt);

static inline  __attribute__((always_inline)) u32 *xprt_skip_transport_header(struct rpc_xprt *xprt, u32 *p)
{
 return p + xprt->tsh_size;
}




void xprt_set_retrans_timeout_def(struct rpc_task *task);
void xprt_set_retrans_timeout_rtt(struct rpc_task *task);
void xprt_wake_pending_tasks(struct rpc_xprt *xprt, int status);
void xprt_wait_for_buffer_space(struct rpc_task *task);
void xprt_write_space(struct rpc_xprt *xprt);
void xprt_update_rtt(struct rpc_task *task);
void xprt_adjust_cwnd(struct rpc_task *task, int result);
struct rpc_rqst * xprt_lookup_rqst(struct rpc_xprt *xprt, u32 xid);
void xprt_complete_rqst(struct rpc_task *task, int copied);
void xprt_release_rqst_cong(struct rpc_task *task);
void xprt_disconnect(struct rpc_xprt *xprt);




int xs_setup_udp(struct rpc_xprt *xprt, struct rpc_timeout *to);
int xs_setup_tcp(struct rpc_xprt *xprt, struct rpc_timeout *to);
# 273 "linux-2.6.18/include/linux/sunrpc/xprt.h"
static inline  __attribute__((always_inline)) void xprt_set_connected(struct rpc_xprt *xprt)
{
 set_bit((1), &xprt->state);
}

static inline  __attribute__((always_inline)) void xprt_clear_connected(struct rpc_xprt *xprt)
{
 clear_bit((1), &xprt->state);
}

static inline  __attribute__((always_inline)) int xprt_connected(struct rpc_xprt *xprt)
{
 return (__builtin_constant_p((1)) ? constant_test_bit(((1)),(&xprt->state)) : variable_test_bit(((1)),(&xprt->state)));
}

static inline  __attribute__((always_inline)) int xprt_test_and_set_connected(struct rpc_xprt *xprt)
{
 return test_and_set_bit((1), &xprt->state);
}

static inline  __attribute__((always_inline)) int xprt_test_and_clear_connected(struct rpc_xprt *xprt)
{
 return test_and_clear_bit((1), &xprt->state);
}

static inline  __attribute__((always_inline)) void xprt_clear_connecting(struct rpc_xprt *xprt)
{
 __asm__ __volatile__("": : :"memory");
 clear_bit((2), &xprt->state);
 __asm__ __volatile__("": : :"memory");
}

static inline  __attribute__((always_inline)) int xprt_connecting(struct rpc_xprt *xprt)
{
 return (__builtin_constant_p((2)) ? constant_test_bit(((2)),(&xprt->state)) : variable_test_bit(((2)),(&xprt->state)));
}

static inline  __attribute__((always_inline)) int xprt_test_and_set_connecting(struct rpc_xprt *xprt)
{
 return test_and_set_bit((2), &xprt->state);
}
# 15 "linux-2.6.18/include/linux/sunrpc/clnt.h" 2

# 1 "linux-2.6.18/include/linux/sunrpc/stats.h" 1
# 14 "linux-2.6.18/include/linux/sunrpc/stats.h"
struct rpc_stat {
 struct rpc_program * program;

 unsigned int netcnt,
    netudpcnt,
    nettcpcnt,
    nettcpconn,
    netreconn;
 unsigned int rpccnt,
    rpcretrans,
    rpcauthrefresh,
    rpcgarbage;
};

struct svc_stat {
 struct svc_program * program;

 unsigned int netcnt,
    netudpcnt,
    nettcpcnt,
    nettcpconn;
 unsigned int rpccnt,
    rpcbadfmt,
    rpcbadauth,
    rpcbadclnt;
};

void rpc_proc_init(void);
void rpc_proc_exit(void);





struct proc_dir_entry * rpc_proc_register(struct rpc_stat *);
void rpc_proc_unregister(const char *);
void rpc_proc_zero(struct rpc_program *);
struct proc_dir_entry * svc_proc_register(struct svc_stat *,
       const struct file_operations *);
void svc_proc_unregister(const char *);

void svc_seq_show(struct seq_file *,
         const struct svc_stat *);

typedef  struct proc_dir_entry   _GLOBAL_228_T; extern  _GLOBAL_228_T  * global_proc_net_rpc[NUM_STACKS];    
# 17 "linux-2.6.18/include/linux/sunrpc/clnt.h" 2

# 1 "linux-2.6.18/include/linux/sunrpc/timer.h" 1
# 14 "linux-2.6.18/include/linux/sunrpc/timer.h"
struct rpc_rtt {
 unsigned long timeo;
 unsigned long srtt[5];
 unsigned long sdrtt[5];
 int ntimeouts[5];
};


extern void rpc_init_rtt(struct rpc_rtt *rt, unsigned long timeo);
extern void rpc_update_rtt(struct rpc_rtt *rt, unsigned timer, long m);
extern unsigned long rpc_calc_rto(struct rpc_rtt *rt, unsigned timer);

static inline  __attribute__((always_inline)) void rpc_set_timeo(struct rpc_rtt *rt, int timer, int ntimeo)
{
 int *t;
 if (!timer)
  return;
 t = &rt->ntimeouts[timer-1];
 if (ntimeo < *t) {
  if (*t > 0)
   (*t)--;
 } else {
  if (ntimeo > 8)
   ntimeo = 8;
  *t = ntimeo;
 }
}

static inline  __attribute__((always_inline)) int rpc_ntimeo(struct rpc_rtt *rt, int timer)
{
 if (!timer)
  return 0;
 return rt->ntimeouts[timer-1];
}
# 19 "linux-2.6.18/include/linux/sunrpc/clnt.h" 2





struct rpc_portmap {
 __u32 pm_prog;
 __u32 pm_vers;
 __u32 pm_prot;
 __u16 pm_port;
 unsigned char pm_binding : 1;
 struct rpc_wait_queue pm_bindwait;
};

struct rpc_inode;




struct rpc_clnt {
 atomic_t cl_count;
 atomic_t cl_users;
 struct rpc_xprt * cl_xprt;
 struct rpc_procinfo * cl_procinfo;
 u32 cl_maxproc;

 char * cl_server;
 char * cl_protname;
 struct rpc_auth * cl_auth;
 struct rpc_stat * cl_stats;
 struct rpc_iostats * cl_metrics;

 unsigned int cl_softrtry : 1,
    cl_intr : 1,
    cl_autobind : 1,
    cl_oneshot : 1,
    cl_dead : 1;

 struct rpc_rtt * cl_rtt;
 struct rpc_portmap * cl_pmap;

 int cl_nodelen;
 char cl_nodename[32];
 char cl_pathname[30];
 struct vfsmount * cl_vfsmnt;
 struct dentry * cl_dentry;
 struct rpc_clnt * cl_parent;
 struct rpc_rtt cl_rtt_default;
 struct rpc_portmap cl_pmap_default;
 char cl_inline_name[32];
};
# 80 "linux-2.6.18/include/linux/sunrpc/clnt.h"
struct rpc_program {
 char * name;
 u32 number;
 unsigned int nrvers;
 struct rpc_version ** version;
 struct rpc_stat * stats;
 char * pipe_dir_name;
};

struct rpc_version {
 u32 number;
 unsigned int nrprocs;
 struct rpc_procinfo * procs;
};




struct rpc_procinfo {
 u32 p_proc;
 kxdrproc_t p_encode;
 kxdrproc_t p_decode;
 unsigned int p_bufsiz;
 unsigned int p_count;
 unsigned int p_timer;
 u32 p_statidx;
 char * p_name;
};






struct rpc_clnt *rpc_create_client(struct rpc_xprt *xprt, char *servname,
    struct rpc_program *info,
    u32 version, rpc_authflavor_t authflavor);
struct rpc_clnt *rpc_new_client(struct rpc_xprt *xprt, char *servname,
    struct rpc_program *info,
    u32 version, rpc_authflavor_t authflavor);
struct rpc_clnt *rpc_bind_new_program(struct rpc_clnt *,
    struct rpc_program *, int);
struct rpc_clnt *rpc_clone_client(struct rpc_clnt *);
int rpc_shutdown_client(struct rpc_clnt *);
int rpc_destroy_client(struct rpc_clnt *);
void rpc_release_client(struct rpc_clnt *);
void rpc_getport(struct rpc_task *, struct rpc_clnt *);
int rpc_register(u32, u32, int, unsigned short, int *);

void rpc_call_setup(struct rpc_task *, struct rpc_message *, int);

int rpc_call_async(struct rpc_clnt *clnt, struct rpc_message *msg,
          int flags, const struct rpc_call_ops *tk_ops,
          void *calldata);
int rpc_call_sync(struct rpc_clnt *clnt, struct rpc_message *msg,
         int flags);
void rpc_restart_call(struct rpc_task *);
void rpc_clnt_sigmask(struct rpc_clnt *clnt, sigset_t *oldset);
void rpc_clnt_sigunmask(struct rpc_clnt *clnt, sigset_t *oldset);
void rpc_setbufsize(struct rpc_clnt *, unsigned int, unsigned int);
size_t rpc_max_payload(struct rpc_clnt *);
void rpc_force_rebind(struct rpc_clnt *);
int rpc_ping(struct rpc_clnt *clnt, int flags);




int rpc_getport_external(struct sockaddr_in *, __u32, __u32, int);
# 51 "linux-2.6.18/include/linux/nfs_fs.h" 2


# 1 "linux-2.6.18/include/linux/nfs2.h" 1
# 28 "linux-2.6.18/include/linux/nfs2.h"
enum nfs2_ftype {
 NF2NON = 0,
 NF2REG = 1,
 NF2DIR = 2,
 NF2BLK = 3,
 NF2CHR = 4,
 NF2LNK = 5,
 NF2SOCK = 6,
 NF2BAD = 7,
 NF2FIFO = 8
};

struct nfs2_fh {
 char data[32];
};
# 54 "linux-2.6.18/include/linux/nfs_fs.h" 2
# 1 "linux-2.6.18/include/linux/nfs3.h" 1
# 34 "linux-2.6.18/include/linux/nfs3.h"
enum nfs3_createmode {
 NFS3_CREATE_UNCHECKED = 0,
 NFS3_CREATE_GUARDED = 1,
 NFS3_CREATE_EXCLUSIVE = 2
};
# 50 "linux-2.6.18/include/linux/nfs3.h"
enum nfs3_ftype {
 NF3NON = 0,
 NF3REG = 1,
 NF3DIR = 2,
 NF3BLK = 3,
 NF3CHR = 4,
 NF3LNK = 5,
 NF3SOCK = 6,
 NF3FIFO = 7,
 NF3BAD = 8
};

struct nfs3_fh {
 unsigned short size;
 unsigned char data[64];
};
# 55 "linux-2.6.18/include/linux/nfs_fs.h" 2
# 1 "linux-2.6.18/include/linux/nfs4.h" 1
# 92 "linux-2.6.18/include/linux/nfs4.h"
enum nfs4_acl_whotype {
 NFS4_ACL_WHO_NAMED = 0,
 NFS4_ACL_WHO_OWNER,
 NFS4_ACL_WHO_GROUP,
 NFS4_ACL_WHO_EVERYONE,
};




struct nfs4_ace {
 uint32_t type;
 uint32_t flag;
 uint32_t access_mask;
 int whotype;
 uid_t who;
 struct list_head l_ace;
};

struct nfs4_acl {
 uint32_t naces;
 struct list_head ace_head;
};

typedef struct { char data[8]; } nfs4_verifier;
typedef struct { char data[16]; } nfs4_stateid;

enum nfs_opnum4 {
 OP_ACCESS = 3,
 OP_CLOSE = 4,
 OP_COMMIT = 5,
 OP_CREATE = 6,
 OP_DELEGPURGE = 7,
 OP_DELEGRETURN = 8,
 OP_GETATTR = 9,
 OP_GETFH = 10,
 OP_LINK = 11,
 OP_LOCK = 12,
 OP_LOCKT = 13,
 OP_LOCKU = 14,
 OP_LOOKUP = 15,
 OP_LOOKUPP = 16,
 OP_NVERIFY = 17,
 OP_OPEN = 18,
 OP_OPENATTR = 19,
 OP_OPEN_CONFIRM = 20,
 OP_OPEN_DOWNGRADE = 21,
 OP_PUTFH = 22,
 OP_PUTPUBFH = 23,
 OP_PUTROOTFH = 24,
 OP_READ = 25,
 OP_READDIR = 26,
 OP_READLINK = 27,
 OP_REMOVE = 28,
 OP_RENAME = 29,
 OP_RENEW = 30,
 OP_RESTOREFH = 31,
 OP_SAVEFH = 32,
 OP_SECINFO = 33,
 OP_SETATTR = 34,
 OP_SETCLIENTID = 35,
 OP_SETCLIENTID_CONFIRM = 36,
 OP_VERIFY = 37,
 OP_WRITE = 38,
 OP_RELEASE_LOCKOWNER = 39,
 OP_ILLEGAL = 10044,
};







enum nfsstat4 {
 NFS4_OK = 0,
 NFS4ERR_PERM = 1,
 NFS4ERR_NOENT = 2,
 NFS4ERR_IO = 5,
 NFS4ERR_NXIO = 6,
 NFS4ERR_ACCESS = 13,
 NFS4ERR_EXIST = 17,
 NFS4ERR_XDEV = 18,

 NFS4ERR_NOTDIR = 20,
 NFS4ERR_ISDIR = 21,
 NFS4ERR_INVAL = 22,
 NFS4ERR_FBIG = 27,
 NFS4ERR_NOSPC = 28,
 NFS4ERR_ROFS = 30,
 NFS4ERR_MLINK = 31,
 NFS4ERR_NAMETOOLONG = 63,
 NFS4ERR_NOTEMPTY = 66,
 NFS4ERR_DQUOT = 69,
 NFS4ERR_STALE = 70,
 NFS4ERR_BADHANDLE = 10001,
 NFS4ERR_BAD_COOKIE = 10003,
 NFS4ERR_NOTSUPP = 10004,
 NFS4ERR_TOOSMALL = 10005,
 NFS4ERR_SERVERFAULT = 10006,
 NFS4ERR_BADTYPE = 10007,
 NFS4ERR_DELAY = 10008,
 NFS4ERR_SAME = 10009,
 NFS4ERR_DENIED = 10010,
 NFS4ERR_EXPIRED = 10011,
 NFS4ERR_LOCKED = 10012,
 NFS4ERR_GRACE = 10013,
 NFS4ERR_FHEXPIRED = 10014,
 NFS4ERR_SHARE_DENIED = 10015,
 NFS4ERR_WRONGSEC = 10016,
 NFS4ERR_CLID_INUSE = 10017,
 NFS4ERR_RESOURCE = 10018,
 NFS4ERR_MOVED = 10019,
 NFS4ERR_NOFILEHANDLE = 10020,
 NFS4ERR_MINOR_VERS_MISMATCH = 10021,
 NFS4ERR_STALE_CLIENTID = 10022,
 NFS4ERR_STALE_STATEID = 10023,
 NFS4ERR_OLD_STATEID = 10024,
 NFS4ERR_BAD_STATEID = 10025,
 NFS4ERR_BAD_SEQID = 10026,
 NFS4ERR_NOT_SAME = 10027,
 NFS4ERR_LOCK_RANGE = 10028,
 NFS4ERR_SYMLINK = 10029,
 NFS4ERR_RESTOREFH = 10030,
 NFS4ERR_LEASE_MOVED = 10031,
 NFS4ERR_ATTRNOTSUPP = 10032,
 NFS4ERR_NO_GRACE = 10033,
 NFS4ERR_RECLAIM_BAD = 10034,
 NFS4ERR_RECLAIM_CONFLICT = 10035,
 NFS4ERR_BADXDR = 10036,
 NFS4ERR_LOCKS_HELD = 10037,
 NFS4ERR_OPENMODE = 10038,
 NFS4ERR_BADOWNER = 10039,
 NFS4ERR_BADCHAR = 10040,
 NFS4ERR_BADNAME = 10041,
 NFS4ERR_BAD_RANGE = 10042,
 NFS4ERR_LOCK_NOTSUPP = 10043,
 NFS4ERR_OP_ILLEGAL = 10044,
 NFS4ERR_DEADLOCK = 10045,
 NFS4ERR_FILE_OPEN = 10046,
 NFS4ERR_ADMIN_REVOKED = 10047,
 NFS4ERR_CB_PATH_DOWN = 10048
};





enum nfs_ftype4 {
 NF4BAD = 0,
        NF4REG = 1,
        NF4DIR = 2,
        NF4BLK = 3,
        NF4CHR = 4,
        NF4LNK = 5,
        NF4SOCK = 6,
        NF4FIFO = 7,
        NF4ATTRDIR = 8,
        NF4NAMEDATTR = 9
};

enum open_claim_type4 {
 NFS4_OPEN_CLAIM_NULL = 0,
 NFS4_OPEN_CLAIM_PREVIOUS = 1,
 NFS4_OPEN_CLAIM_DELEGATE_CUR = 2,
 NFS4_OPEN_CLAIM_DELEGATE_PREV = 3
};

enum opentype4 {
 NFS4_OPEN_NOCREATE = 0,
 NFS4_OPEN_CREATE = 1
};

enum createmode4 {
 NFS4_CREATE_UNCHECKED = 0,
 NFS4_CREATE_GUARDED = 1,
 NFS4_CREATE_EXCLUSIVE = 2
};

enum limit_by4 {
 NFS4_LIMIT_SIZE = 1,
 NFS4_LIMIT_BLOCKS = 2
};

enum open_delegation_type4 {
 NFS4_OPEN_DELEGATE_NONE = 0,
 NFS4_OPEN_DELEGATE_READ = 1,
 NFS4_OPEN_DELEGATE_WRITE = 2
};

enum lock_type4 {
 NFS4_UNLOCK_LT = 0,
 NFS4_READ_LT = 1,
 NFS4_WRITE_LT = 2,
 NFS4_READW_LT = 3,
 NFS4_WRITEW_LT = 4
};
# 358 "linux-2.6.18/include/linux/nfs4.h"
enum {
 NFSPROC4_CLNT_NULL = 0,
 NFSPROC4_CLNT_READ,
 NFSPROC4_CLNT_WRITE,
 NFSPROC4_CLNT_COMMIT,
 NFSPROC4_CLNT_OPEN,
 NFSPROC4_CLNT_OPEN_CONFIRM,
 NFSPROC4_CLNT_OPEN_NOATTR,
 NFSPROC4_CLNT_OPEN_DOWNGRADE,
 NFSPROC4_CLNT_CLOSE,
 NFSPROC4_CLNT_SETATTR,
 NFSPROC4_CLNT_FSINFO,
 NFSPROC4_CLNT_RENEW,
 NFSPROC4_CLNT_SETCLIENTID,
 NFSPROC4_CLNT_SETCLIENTID_CONFIRM,
 NFSPROC4_CLNT_LOCK,
 NFSPROC4_CLNT_LOCKT,
 NFSPROC4_CLNT_LOCKU,
 NFSPROC4_CLNT_ACCESS,
 NFSPROC4_CLNT_GETATTR,
 NFSPROC4_CLNT_LOOKUP,
 NFSPROC4_CLNT_LOOKUP_ROOT,
 NFSPROC4_CLNT_REMOVE,
 NFSPROC4_CLNT_RENAME,
 NFSPROC4_CLNT_LINK,
 NFSPROC4_CLNT_SYMLINK,
 NFSPROC4_CLNT_CREATE,
 NFSPROC4_CLNT_PATHCONF,
 NFSPROC4_CLNT_STATFS,
 NFSPROC4_CLNT_READLINK,
 NFSPROC4_CLNT_READDIR,
 NFSPROC4_CLNT_SERVER_CAPS,
 NFSPROC4_CLNT_DELEGRETURN,
 NFSPROC4_CLNT_GETACL,
 NFSPROC4_CLNT_SETACL,
 NFSPROC4_CLNT_FS_LOCATIONS,
};
# 56 "linux-2.6.18/include/linux/nfs_fs.h" 2
# 1 "linux-2.6.18/include/linux/nfs_xdr.h" 1




# 1 "linux-2.6.18/include/linux/nfsacl.h" 1
# 31 "linux-2.6.18/include/linux/nfsacl.h"
# 1 "linux-2.6.18/include/linux/posix_acl.h" 1
# 34 "linux-2.6.18/include/linux/posix_acl.h"
struct posix_acl_entry {
 short e_tag;
 unsigned short e_perm;
 unsigned int e_id;
};

struct posix_acl {
 atomic_t a_refcount;
 unsigned int a_count;
 struct posix_acl_entry a_entries[0];
};
# 53 "linux-2.6.18/include/linux/posix_acl.h"
static inline  __attribute__((always_inline)) struct posix_acl *
posix_acl_dup(struct posix_acl *acl)
{
 if (acl)
  atomic_inc(&acl->a_refcount);
 return acl;
}




static inline  __attribute__((always_inline)) void
posix_acl_release(struct posix_acl *acl)
{
 if (acl && atomic_dec_and_test(&acl->a_refcount))
  kfree(acl);
}




extern struct posix_acl *posix_acl_alloc(int, gfp_t);
extern struct posix_acl *posix_acl_clone(const struct posix_acl *, gfp_t);
extern int posix_acl_valid(const struct posix_acl *);
extern int posix_acl_permission(struct inode *, const struct posix_acl *, int);
extern struct posix_acl *posix_acl_from_mode(mode_t, gfp_t);
extern int posix_acl_equiv_mode(const struct posix_acl *, mode_t *);
extern int posix_acl_create_masq(struct posix_acl *, mode_t *);
extern int posix_acl_chmod_masq(struct posix_acl *, mode_t);

extern struct posix_acl *get_posix_acl(struct inode *, int);
extern int set_posix_acl(struct inode *, int, struct posix_acl *);
# 32 "linux-2.6.18/include/linux/nfsacl.h" 2
# 40 "linux-2.6.18/include/linux/nfsacl.h"
static inline  __attribute__((always_inline)) unsigned int
nfsacl_size(struct posix_acl *acl_access, struct posix_acl *acl_default)
{
 unsigned int w = 16;
 w += ({ typeof(acl_access ? (int)acl_access->a_count : 3) _x = (acl_access ? (int)acl_access->a_count : 3); typeof(4) _y = (4); (void) (&_x == &_y); _x > _y ? _x : _y; }) * 12;
 if (acl_default)
  w += ({ typeof((int)acl_default->a_count) _x = ((int)acl_default->a_count); typeof(4) _y = (4); (void) (&_x == &_y); _x > _y ? _x : _y; }) * 12;
 return w;
}

extern unsigned int
nfsacl_encode(struct xdr_buf *buf, unsigned int base, struct inode *inode,
       struct posix_acl *acl, int encode_entries, int typeflag);
extern unsigned int
nfsacl_decode(struct xdr_buf *buf, unsigned int base, unsigned int *aclcnt,
       struct posix_acl **pacl);
# 6 "linux-2.6.18/include/linux/nfs_xdr.h" 2
# 17 "linux-2.6.18/include/linux/nfs_xdr.h"
struct nfs_fsid {
 uint64_t major;
 uint64_t minor;
};




static inline  __attribute__((always_inline)) int nfs_fsid_equal(const struct nfs_fsid *a, const struct nfs_fsid *b)
{
 return a->major == b->major && a->minor == b->minor;
}

struct nfs_fattr {
 unsigned short valid;
 __u64 pre_size;
 struct timespec pre_mtime;
 struct timespec pre_ctime;
 enum nfs_ftype type;
 __u32 mode;
 __u32 nlink;
 __u32 uid;
 __u32 gid;
 __u64 size;
 union {
  struct {
   __u32 blocksize;
   __u32 blocks;
  } nfs2;
  struct {
   __u64 used;
  } nfs3;
 } du;
 dev_t rdev;
 struct nfs_fsid fsid;
 __u64 fileid;
 struct timespec atime;
 struct timespec mtime;
 struct timespec ctime;
 __u32 bitmap[2];
 __u64 change_attr;
 __u64 pre_change_attr;
 unsigned long time_start;
};
# 71 "linux-2.6.18/include/linux/nfs_xdr.h"
struct nfs_fsinfo {
 struct nfs_fattr *fattr;
 __u32 rtmax;
 __u32 rtpref;
 __u32 rtmult;
 __u32 wtmax;
 __u32 wtpref;
 __u32 wtmult;
 __u32 dtpref;
 __u64 maxfilesize;
 __u32 lease_time;
};

struct nfs_fsstat {
 struct nfs_fattr *fattr;
 __u64 tbytes;
 __u64 fbytes;
 __u64 abytes;
 __u64 tfiles;
 __u64 ffiles;
 __u64 afiles;
};

struct nfs2_fsstat {
 __u32 tsize;
 __u32 bsize;
 __u32 blocks;
 __u32 bfree;
 __u32 bavail;
};

struct nfs_pathconf {
 struct nfs_fattr *fattr;
 __u32 max_link;
 __u32 max_namelen;
};

struct nfs4_change_info {
 u32 atomic;
 u64 before;
 u64 after;
};

struct nfs_seqid;



struct nfs_openargs {
 const struct nfs_fh * fh;
 struct nfs_seqid * seqid;
 int open_flags;
 __u64 clientid;
 __u32 id;
 union {
  struct iattr * attrs;
  nfs4_verifier verifier;
  nfs4_stateid delegation;
  int delegation_type;
 } u;
 const struct qstr * name;
 const struct nfs_server *server;
 const u32 * bitmask;
 __u32 claim;
};

struct nfs_openres {
 nfs4_stateid stateid;
 struct nfs_fh fh;
 struct nfs4_change_info cinfo;
 __u32 rflags;
 struct nfs_fattr * f_attr;
 struct nfs_fattr * dir_attr;
 const struct nfs_server *server;
 int delegation_type;
 nfs4_stateid delegation;
 __u32 do_recall;
 __u64 maxsize;
};




struct nfs_open_confirmargs {
 const struct nfs_fh * fh;
 nfs4_stateid * stateid;
 struct nfs_seqid * seqid;
};

struct nfs_open_confirmres {
 nfs4_stateid stateid;
};




struct nfs_closeargs {
 struct nfs_fh * fh;
 nfs4_stateid * stateid;
 struct nfs_seqid * seqid;
 int open_flags;
 const u32 * bitmask;
};

struct nfs_closeres {
 nfs4_stateid stateid;
 struct nfs_fattr * fattr;
 const struct nfs_server *server;
};



struct nfs_lowner {
 __u64 clientid;
 u32 id;
};

struct nfs_lock_args {
 struct nfs_fh * fh;
 struct file_lock * fl;
 struct nfs_seqid * lock_seqid;
 nfs4_stateid * lock_stateid;
 struct nfs_seqid * open_seqid;
 nfs4_stateid * open_stateid;
 struct nfs_lowner lock_owner;
 unsigned char block : 1;
 unsigned char reclaim : 1;
 unsigned char new_lock_owner : 1;
};

struct nfs_lock_res {
 nfs4_stateid stateid;
};

struct nfs_locku_args {
 struct nfs_fh * fh;
 struct file_lock * fl;
 struct nfs_seqid * seqid;
 nfs4_stateid * stateid;
};

struct nfs_locku_res {
 nfs4_stateid stateid;
};

struct nfs_lockt_args {
 struct nfs_fh * fh;
 struct file_lock * fl;
 struct nfs_lowner lock_owner;
};

struct nfs_lockt_res {
 struct file_lock * denied;
};

struct nfs4_delegreturnargs {
 const struct nfs_fh *fhandle;
 const nfs4_stateid *stateid;
 const u32 * bitmask;
};

struct nfs4_delegreturnres {
 struct nfs_fattr * fattr;
 const struct nfs_server *server;
};




struct nfs_readargs {
 struct nfs_fh * fh;
 struct nfs_open_context *context;
 __u64 offset;
 __u32 count;
 unsigned int pgbase;
 struct page ** pages;
};

struct nfs_readres {
 struct nfs_fattr * fattr;
 __u32 count;
 int eof;
};




struct nfs_writeargs {
 struct nfs_fh * fh;
 struct nfs_open_context *context;
 __u64 offset;
 __u32 count;
 enum nfs3_stable_how stable;
 unsigned int pgbase;
 struct page ** pages;
 const u32 * bitmask;
};

struct nfs_writeverf {
 enum nfs3_stable_how committed;
 __u32 verifier[2];
};

struct nfs_writeres {
 struct nfs_fattr * fattr;
 struct nfs_writeverf * verf;
 __u32 count;
 const struct nfs_server *server;
};




struct nfs_entry {
 __u64 ino;
 __u64 cookie,
    prev_cookie;
 const char * name;
 unsigned int len;
 int eof;
 struct nfs_fh * fh;
 struct nfs_fattr * fattr;
};




struct nfs_sattrargs {
 struct nfs_fh * fh;
 struct iattr * sattr;
};

struct nfs_diropargs {
 struct nfs_fh * fh;
 const char * name;
 unsigned int len;
};

struct nfs_createargs {
 struct nfs_fh * fh;
 const char * name;
 unsigned int len;
 struct iattr * sattr;
};

struct nfs_renameargs {
 struct nfs_fh * fromfh;
 const char * fromname;
 unsigned int fromlen;
 struct nfs_fh * tofh;
 const char * toname;
 unsigned int tolen;
};

struct nfs_setattrargs {
 struct nfs_fh * fh;
 nfs4_stateid stateid;
 struct iattr * iap;
 const struct nfs_server * server;
 const u32 * bitmask;
};

struct nfs_setaclargs {
 struct nfs_fh * fh;
 size_t acl_len;
 unsigned int acl_pgbase;
 struct page ** acl_pages;
};

struct nfs_getaclargs {
 struct nfs_fh * fh;
 size_t acl_len;
 unsigned int acl_pgbase;
 struct page ** acl_pages;
};

struct nfs_setattrres {
 struct nfs_fattr * fattr;
 const struct nfs_server * server;
};

struct nfs_linkargs {
 struct nfs_fh * fromfh;
 struct nfs_fh * tofh;
 const char * toname;
 unsigned int tolen;
};

struct nfs_symlinkargs {
 struct nfs_fh * fromfh;
 const char * fromname;
 unsigned int fromlen;
 const char * topath;
 unsigned int tolen;
 struct iattr * sattr;
};

struct nfs_readdirargs {
 struct nfs_fh * fh;
 __u32 cookie;
 unsigned int count;
 struct page ** pages;
};

struct nfs3_getaclargs {
 struct nfs_fh * fh;
 int mask;
 struct page ** pages;
};

struct nfs3_setaclargs {
 struct inode * inode;
 int mask;
 struct posix_acl * acl_access;
 struct posix_acl * acl_default;
 struct page ** pages;
};

struct nfs_diropok {
 struct nfs_fh * fh;
 struct nfs_fattr * fattr;
};

struct nfs_readlinkargs {
 struct nfs_fh * fh;
 unsigned int pgbase;
 unsigned int pglen;
 struct page ** pages;
};

struct nfs3_sattrargs {
 struct nfs_fh * fh;
 struct iattr * sattr;
 unsigned int guard;
 struct timespec guardtime;
};

struct nfs3_diropargs {
 struct nfs_fh * fh;
 const char * name;
 unsigned int len;
};

struct nfs3_accessargs {
 struct nfs_fh * fh;
 __u32 access;
};

struct nfs3_createargs {
 struct nfs_fh * fh;
 const char * name;
 unsigned int len;
 struct iattr * sattr;
 enum nfs3_createmode createmode;
 __u32 verifier[2];
};

struct nfs3_mkdirargs {
 struct nfs_fh * fh;
 const char * name;
 unsigned int len;
 struct iattr * sattr;
};

struct nfs3_symlinkargs {
 struct nfs_fh * fromfh;
 const char * fromname;
 unsigned int fromlen;
 const char * topath;
 unsigned int tolen;
 struct iattr * sattr;
};

struct nfs3_mknodargs {
 struct nfs_fh * fh;
 const char * name;
 unsigned int len;
 enum nfs3_ftype type;
 struct iattr * sattr;
 dev_t rdev;
};

struct nfs3_renameargs {
 struct nfs_fh * fromfh;
 const char * fromname;
 unsigned int fromlen;
 struct nfs_fh * tofh;
 const char * toname;
 unsigned int tolen;
};

struct nfs3_linkargs {
 struct nfs_fh * fromfh;
 struct nfs_fh * tofh;
 const char * toname;
 unsigned int tolen;
};

struct nfs3_readdirargs {
 struct nfs_fh * fh;
 __u64 cookie;
 __u32 verf[2];
 int plus;
 unsigned int count;
 struct page ** pages;
};

struct nfs3_diropres {
 struct nfs_fattr * dir_attr;
 struct nfs_fh * fh;
 struct nfs_fattr * fattr;
};

struct nfs3_accessres {
 struct nfs_fattr * fattr;
 __u32 access;
};

struct nfs3_readlinkargs {
 struct nfs_fh * fh;
 unsigned int pgbase;
 unsigned int pglen;
 struct page ** pages;
};

struct nfs3_renameres {
 struct nfs_fattr * fromattr;
 struct nfs_fattr * toattr;
};

struct nfs3_linkres {
 struct nfs_fattr * dir_attr;
 struct nfs_fattr * fattr;
};

struct nfs3_readdirres {
 struct nfs_fattr * dir_attr;
 __u32 * verf;
 int plus;
};

struct nfs3_getaclres {
 struct nfs_fattr * fattr;
 int mask;
 unsigned int acl_access_count;
 unsigned int acl_default_count;
 struct posix_acl * acl_access;
 struct posix_acl * acl_default;
};
# 719 "linux-2.6.18/include/linux/nfs_xdr.h"
struct nfs_page;



struct nfs_read_data {
 int flags;
 struct rpc_task task;
 struct inode *inode;
 struct rpc_cred *cred;
 struct nfs_fattr fattr;
 struct list_head pages;
 struct nfs_page *req;
 struct page **pagevec;
 unsigned int npages;
 struct nfs_readargs args;
 struct nfs_readres res;



 struct page *page_array[(8U)];
};

struct nfs_write_data {
 int flags;
 struct rpc_task task;
 struct inode *inode;
 struct rpc_cred *cred;
 struct nfs_fattr fattr;
 struct nfs_writeverf verf;
 struct list_head pages;
 struct nfs_page *req;
 struct page **pagevec;
 unsigned int npages;
 struct nfs_writeargs args;
 struct nfs_writeres res;



 struct page *page_array[(8U)];
};

struct nfs_access_entry;




struct nfs_rpc_ops {
 int version;
 struct dentry_operations *dentry_ops;
 struct inode_operations *dir_inode_ops;
 struct inode_operations *file_inode_ops;

 int (*getroot) (struct nfs_server *, struct nfs_fh *,
       struct nfs_fsinfo *);
 int (*getattr) (struct nfs_server *, struct nfs_fh *,
       struct nfs_fattr *);
 int (*setattr) (struct dentry *, struct nfs_fattr *,
       struct iattr *);
 int (*lookup) (struct inode *, struct qstr *,
       struct nfs_fh *, struct nfs_fattr *);
 int (*access) (struct inode *, struct nfs_access_entry *);
 int (*readlink)(struct inode *, struct page *, unsigned int,
       unsigned int);
 int (*read) (struct nfs_read_data *);
 int (*write) (struct nfs_write_data *);
 int (*commit) (struct nfs_write_data *);
 int (*create) (struct inode *, struct dentry *,
       struct iattr *, int, struct nameidata *);
 int (*remove) (struct inode *, struct qstr *);
 int (*unlink_setup) (struct rpc_message *,
       struct dentry *, struct qstr *);
 int (*unlink_done) (struct dentry *, struct rpc_task *);
 int (*rename) (struct inode *, struct qstr *,
       struct inode *, struct qstr *);
 int (*link) (struct inode *, struct inode *, struct qstr *);
 int (*symlink) (struct inode *, struct qstr *, struct qstr *,
       struct iattr *, struct nfs_fh *,
       struct nfs_fattr *);
 int (*mkdir) (struct inode *, struct dentry *, struct iattr *);
 int (*rmdir) (struct inode *, struct qstr *);
 int (*readdir) (struct dentry *, struct rpc_cred *,
       u64, struct page *, unsigned int, int);
 int (*mknod) (struct inode *, struct dentry *, struct iattr *,
       dev_t);
 int (*statfs) (struct nfs_server *, struct nfs_fh *,
       struct nfs_fsstat *);
 int (*fsinfo) (struct nfs_server *, struct nfs_fh *,
       struct nfs_fsinfo *);
 int (*pathconf) (struct nfs_server *, struct nfs_fh *,
        struct nfs_pathconf *);
 u32 * (*decode_dirent)(u32 *, struct nfs_entry *, int plus);
 void (*read_setup) (struct nfs_read_data *);
 int (*read_done) (struct rpc_task *, struct nfs_read_data *);
 void (*write_setup) (struct nfs_write_data *, int how);
 int (*write_done) (struct rpc_task *, struct nfs_write_data *);
 void (*commit_setup) (struct nfs_write_data *, int how);
 int (*commit_done) (struct rpc_task *, struct nfs_write_data *);
 int (*file_open) (struct inode *, struct file *);
 int (*file_release) (struct inode *, struct file *);
 int (*lock)(struct file *, int, struct file_lock *);
 void (*clear_acl_cache)(struct inode *);
};
# 832 "linux-2.6.18/include/linux/nfs_xdr.h"
typedef  struct nfs_rpc_ops   _GLOBAL_229_T; extern  _GLOBAL_229_T  global_nfs_v2_clientops[NUM_STACKS];    
typedef  struct nfs_rpc_ops   _GLOBAL_230_T; extern  _GLOBAL_230_T  global_nfs_v3_clientops[NUM_STACKS];    
typedef  struct nfs_rpc_ops   _GLOBAL_231_T; extern  _GLOBAL_231_T  global_nfs_v4_clientops[NUM_STACKS];    
typedef  struct rpc_version   _GLOBAL_232_T; extern  _GLOBAL_232_T  global_nfs_version2[NUM_STACKS];    
typedef  struct rpc_version   _GLOBAL_233_T; extern  _GLOBAL_233_T  global_nfs_version3[NUM_STACKS];    
typedef  struct rpc_version   _GLOBAL_234_T; extern  _GLOBAL_234_T  global_nfs_version4[NUM_STACKS];    

typedef  struct rpc_version   _GLOBAL_235_T; extern  _GLOBAL_235_T  global_nfsacl_version3[NUM_STACKS];    
typedef  struct rpc_program   _GLOBAL_236_T; extern  _GLOBAL_236_T  global_nfsacl_program[NUM_STACKS];    
# 57 "linux-2.6.18/include/linux/nfs_fs.h" 2

# 1 "linux-2.6.18/include/linux/nfs_fs_sb.h" 1




# 1 "linux-2.6.18/include/linux/backing-dev.h" 1
# 16 "linux-2.6.18/include/linux/backing-dev.h"
enum bdi_state {
 BDI_pdflush,
 BDI_write_congested,
 BDI_read_congested,
 BDI_unused,
};

typedef int (congested_fn)(void *, int);

struct backing_dev_info {
 unsigned long ra_pages;
 unsigned long state;
 unsigned int capabilities;
 congested_fn *congested_fn;
 void *congested_data;
 void (*unplug_io_fn)(struct backing_dev_info *, struct page *);
 void *unplug_io_data;
};
# 61 "linux-2.6.18/include/linux/backing-dev.h"
typedef  struct backing_dev_info   _GLOBAL_237_T; extern  _GLOBAL_237_T  global_default_backing_dev_info[NUM_STACKS];    
void default_unplug_io_fn(struct backing_dev_info *bdi, struct page *page);

int writeback_acquire(struct backing_dev_info *bdi);
int writeback_in_progress(struct backing_dev_info *bdi);
void writeback_release(struct backing_dev_info *bdi);

static inline  __attribute__((always_inline)) int bdi_congested(struct backing_dev_info *bdi, int bdi_bits)
{
 if (bdi->congested_fn)
  return bdi->congested_fn(bdi->congested_data, bdi_bits);
 return (bdi->state & bdi_bits);
}

static inline  __attribute__((always_inline)) int bdi_read_congested(struct backing_dev_info *bdi)
{
 return bdi_congested(bdi, 1 << BDI_read_congested);
}

static inline  __attribute__((always_inline)) int bdi_write_congested(struct backing_dev_info *bdi)
{
 return bdi_congested(bdi, 1 << BDI_write_congested);
}

static inline  __attribute__((always_inline)) int bdi_rw_congested(struct backing_dev_info *bdi)
{
 return bdi_congested(bdi, (1 << BDI_read_congested)|
      (1 << BDI_write_congested));
}
# 6 "linux-2.6.18/include/linux/nfs_fs_sb.h" 2

struct nfs_iostats;




struct nfs_server {
 struct rpc_clnt * client;
 struct rpc_clnt * client_sys;
 struct rpc_clnt * client_acl;
 struct nfs_rpc_ops * rpc_ops;
 struct nfs_iostats * io_stats;
 struct backing_dev_info backing_dev_info;
 int flags;
 unsigned int caps;
 unsigned int rsize;
 unsigned int rpages;
 unsigned int wsize;
 unsigned int wpages;
 unsigned int wtmult;
 unsigned int dtsize;
 unsigned int bsize;
 unsigned int acregmin;
 unsigned int acregmax;
 unsigned int acdirmin;
 unsigned int acdirmax;
 unsigned long retrans_timeo;
 unsigned int retrans_count;
 unsigned int namelen;
 char * hostname;
 struct nfs_fh fh;
 struct sockaddr_in addr;
 struct nfs_fsid fsid;
 unsigned long mount_time;
# 57 "linux-2.6.18/include/linux/nfs_fs_sb.h"
};
# 59 "linux-2.6.18/include/linux/nfs_fs.h" 2


# 1 "linux-2.6.18/include/linux/mempool.h" 1
# 9 "linux-2.6.18/include/linux/mempool.h"
struct kmem_cache;

typedef void * (mempool_alloc_t)(gfp_t gfp_mask, void *pool_data);
typedef void (mempool_free_t)(void *element, void *pool_data);

typedef struct mempool_s {
 spinlock_t lock;
 int min_nr;
 int curr_nr;
 void **elements;

 void *pool_data;
 mempool_alloc_t *alloc;
 mempool_free_t *free;
 wait_queue_head_t wait;
} mempool_t;

extern mempool_t *mempool_create(int min_nr, mempool_alloc_t *alloc_fn,
   mempool_free_t *free_fn, void *pool_data);
extern mempool_t *mempool_create_node(int min_nr, mempool_alloc_t *alloc_fn,
   mempool_free_t *free_fn, void *pool_data, int nid);

extern int mempool_resize(mempool_t *pool, int new_min_nr, gfp_t gfp_mask);
extern void mempool_destroy(mempool_t *pool);
extern void * mempool_alloc(mempool_t *pool, gfp_t gfp_mask);
extern void mempool_free(void *element, mempool_t *pool);





void *mempool_alloc_slab(gfp_t gfp_mask, void *pool_data);
void mempool_free_slab(void *element, void *pool_data);
static inline  __attribute__((always_inline)) mempool_t *
mempool_create_slab_pool(int min_nr, struct kmem_cache *kc)
{
 return mempool_create(min_nr, mempool_alloc_slab, mempool_free_slab,
         (void *) kc);
}





void *mempool_kmalloc(gfp_t gfp_mask, void *pool_data);
void *mempool_kzalloc(gfp_t gfp_mask, void *pool_data);
void mempool_kfree(void *element, void *pool_data);
static inline  __attribute__((always_inline)) mempool_t *mempool_create_kmalloc_pool(int min_nr, size_t size)
{
 return mempool_create(min_nr, mempool_kmalloc, mempool_kfree,
         (void *) size);
}
static inline  __attribute__((always_inline)) mempool_t *mempool_create_kzalloc_pool(int min_nr, size_t size)
{
 return mempool_create(min_nr, mempool_kzalloc, mempool_kfree,
         (void *) size);
}





void *mempool_alloc_pages(gfp_t gfp_mask, void *pool_data);
void mempool_free_pages(void *element, void *pool_data);
static inline  __attribute__((always_inline)) mempool_t *mempool_create_page_pool(int min_nr, int order)
{
 return mempool_create(min_nr, mempool_alloc_pages, mempool_free_pages,
         (void *)(long)order);
}
# 62 "linux-2.6.18/include/linux/nfs_fs.h" 2
# 71 "linux-2.6.18/include/linux/nfs_fs.h"
struct nfs_access_entry {
 unsigned long jiffies;
 struct rpc_cred * cred;
 int mask;
};

struct nfs4_state;
struct nfs_open_context {
 atomic_t count;
 struct vfsmount *vfsmnt;
 struct dentry *dentry;
 struct rpc_cred *cred;
 struct nfs4_state *state;
 fl_owner_t lockowner;
 int mode;
 int error;

 struct list_head list;

 __u64 dir_cookie;
};




struct nfs_delegation;

struct posix_acl;




struct nfs_inode {



 __u64 fileid;




 struct nfs_fh fh;




 unsigned long flags;
 unsigned long cache_validity;
# 131 "linux-2.6.18/include/linux/nfs_fs.h"
 unsigned long read_cache_jiffies;
 unsigned long attrtimeo;
 unsigned long attrtimeo_timestamp;
 __u64 change_attr;

 unsigned long last_updated;




 unsigned long cache_change_attribute;




 atomic_t data_updates;

 struct nfs_access_entry cache_access;
# 158 "linux-2.6.18/include/linux/nfs_fs.h"
 __u32 cookieverf[2];




 spinlock_t req_lock;
 struct list_head dirty;
 struct list_head commit;
 struct radix_tree_root nfs_page_tree;

 unsigned int ndirty,
    ncommit,
    npages;


 struct list_head open_files;
# 183 "linux-2.6.18/include/linux/nfs_fs.h"
 struct inode vfs_inode;
};
# 203 "linux-2.6.18/include/linux/nfs_fs.h"
static inline  __attribute__((always_inline)) struct nfs_inode *NFS_I(struct inode *inode)
{
 return ({ const typeof( ((struct nfs_inode *)0)->vfs_inode ) *__mptr = (inode); (struct nfs_inode *)( (char *)__mptr - __builtin_offsetof(struct nfs_inode,vfs_inode) );});
}
# 231 "linux-2.6.18/include/linux/nfs_fs.h"
static inline  __attribute__((always_inline)) int nfs_caches_unstable(struct inode *inode)
{
 return ((&NFS_I(inode)->data_updates)->counter) != 0;
}

static inline  __attribute__((always_inline)) void nfs_mark_for_revalidate(struct inode *inode)
{
 struct nfs_inode *nfsi = NFS_I(inode);

 do { do { } while (0); (void)0; (void)(&inode->i_lock); } while (0);
 nfsi->cache_validity |= 0x0001|0x0008;
 if ((((inode->i_mode) & 00170000) == 0040000))
  nfsi->cache_validity |= 0x0020|0x0002;
 do { do { } while (0); (void)0; (void)(&inode->i_lock); } while (0);
}

static inline  __attribute__((always_inline)) void NFS_CACHEINV(struct inode *inode)
{
 if (!nfs_caches_unstable(inode))
  nfs_mark_for_revalidate(inode);
}

static inline  __attribute__((always_inline)) int nfs_server_capable(struct inode *inode, int cap)
{
 return (((struct nfs_server *)(inode->i_sb->s_fs_info)))->caps & cap;
}

static inline  __attribute__((always_inline)) int NFS_USE_READDIRPLUS(struct inode *inode)
{
 return (__builtin_constant_p((1)) ? constant_test_bit(((1)),(&(NFS_I(inode)->flags))) : variable_test_bit(((1)),(&(NFS_I(inode)->flags))));
}







static inline  __attribute__((always_inline)) long nfs_save_change_attribute(struct inode *inode)
{
 return NFS_I(inode)->cache_change_attribute;
}
# 281 "linux-2.6.18/include/linux/nfs_fs.h"
static inline  __attribute__((always_inline)) int nfs_verify_change_attribute(struct inode *inode, unsigned long chattr)
{
 return !nfs_caches_unstable(inode)
  && (({ unsigned long __dummy; typeof(chattr) __dummy2; (void)(&__dummy == &__dummy2); 1; }) && ({ unsigned long __dummy; typeof(NFS_I(inode)->cache_change_attribute) __dummy2; (void)(&__dummy == &__dummy2); 1; }) && ((long)(chattr) - (long)(NFS_I(inode)->cache_change_attribute) >= 0));
}




extern int nfs_sync_mapping(struct address_space *mapping);
extern void nfs_zap_caches(struct inode *);
extern struct inode *nfs_fhget(struct super_block *, struct nfs_fh *,
    struct nfs_fattr *);
extern int nfs_refresh_inode(struct inode *, struct nfs_fattr *);
extern int nfs_post_op_update_inode(struct inode *inode, struct nfs_fattr *fattr);
extern int nfs_getattr(struct vfsmount *, struct dentry *, struct kstat *);
extern int nfs_permission(struct inode *, int, struct nameidata *);
extern int nfs_access_get_cached(struct inode *, struct rpc_cred *, struct nfs_access_entry *);
extern void nfs_access_add_cache(struct inode *, struct nfs_access_entry *);
extern int nfs_open(struct inode *, struct file *);
extern int nfs_release(struct inode *, struct file *);
extern int nfs_attribute_timeout(struct inode *inode);
extern int nfs_revalidate_inode(struct nfs_server *server, struct inode *inode);
extern int __nfs_revalidate_inode(struct nfs_server *, struct inode *);
extern int nfs_revalidate_mapping(struct inode *inode, struct address_space *mapping);
extern int nfs_setattr(struct dentry *, struct iattr *);
extern void nfs_setattr_update_inode(struct inode *inode, struct iattr *attr);
extern void nfs_begin_attr_update(struct inode *);
extern void nfs_end_attr_update(struct inode *);
extern void nfs_begin_data_update(struct inode *);
extern void nfs_end_data_update(struct inode *);
extern struct nfs_open_context *get_nfs_open_context(struct nfs_open_context *ctx);
extern void put_nfs_open_context(struct nfs_open_context *ctx);
extern struct nfs_open_context *nfs_find_open_context(struct inode *inode, struct rpc_cred *cred, int mode);
extern struct vfsmount *nfs_do_submount(const struct vfsmount *mnt_parent,
     const struct dentry *dentry,
     struct nfs_fh *fh,
     struct nfs_fattr *fattr);


extern u32 root_nfs_parse_addr(char *name);

static inline  __attribute__((always_inline)) void nfs_fattr_init(struct nfs_fattr *fattr)
{
 fattr->valid = 0;
 fattr->time_start = global_jiffies[get_stack_id()];
}




typedef  struct inode_operations   _GLOBAL_238_T; extern  _GLOBAL_238_T  global_nfs_file_inode_operations[NUM_STACKS];    



typedef  const struct file_operations    _GLOBAL_239_T; extern  _GLOBAL_239_T  global_nfs_file_operations[NUM_STACKS];     
typedef  const struct address_space_operations    _GLOBAL_240_T; extern  _GLOBAL_240_T  global_nfs_file_aops[NUM_STACKS];     

static inline  __attribute__((always_inline)) struct rpc_cred *nfs_file_cred(struct file *file)
{
 if (file != ((void *)0)) {
  struct nfs_open_context *ctx;

  ctx = (struct nfs_open_context*)file->private_data;
  return ctx->cred;
 }
 return ((void *)0);
}
# 369 "linux-2.6.18/include/linux/nfs_fs.h"
extern ssize_t nfs_direct_IO(int, struct kiocb *, const struct iovec *, loff_t,
   unsigned long);
extern ssize_t nfs_file_direct_read(struct kiocb *iocb, char *buf,
   size_t count, loff_t pos);
extern ssize_t nfs_file_direct_write(struct kiocb *iocb, const char *buf,
   size_t count, loff_t pos);




typedef  struct inode_operations   _GLOBAL_241_T; extern  _GLOBAL_241_T  global_nfs_dir_inode_operations[NUM_STACKS];    



typedef  const struct file_operations    _GLOBAL_242_T; extern  _GLOBAL_242_T  global_nfs_dir_operations[NUM_STACKS];     
typedef  struct dentry_operations   _GLOBAL_243_T; extern  _GLOBAL_243_T  global_nfs_dentry_operations[NUM_STACKS];    

extern int nfs_instantiate(struct dentry *dentry, struct nfs_fh *fh, struct nfs_fattr *fattr);




typedef  struct inode_operations   _GLOBAL_244_T; extern  _GLOBAL_244_T  global_nfs_symlink_inode_operations[NUM_STACKS];    





extern int nfs_register_sysctl(void);
extern void nfs_unregister_sysctl(void);
# 407 "linux-2.6.18/include/linux/nfs_fs.h"
typedef  struct list_head   _GLOBAL_245_T; extern  _GLOBAL_245_T  global_nfs_automount_list[NUM_STACKS];    
typedef  struct inode_operations   _GLOBAL_246_T; extern  _GLOBAL_246_T  global_nfs_mountpoint_inode_operations[NUM_STACKS];    
typedef  struct inode_operations   _GLOBAL_247_T; extern  _GLOBAL_247_T  global_nfs_referral_inode_operations[NUM_STACKS];    
typedef  int  _GLOBAL_248_T; extern  _GLOBAL_248_T  global_nfs_mountpoint_expiry_timeout[NUM_STACKS];   
extern void nfs_release_automount_timer(void);




extern int nfs_async_unlink(struct dentry *);
extern void nfs_complete_unlink(struct dentry *);




extern int nfs_writepage(struct page *page, struct writeback_control *wbc);
extern int nfs_writepages(struct address_space *, struct writeback_control *);
extern int nfs_flush_incompatible(struct file *file, struct page *page);
extern int nfs_updatepage(struct file *, struct page *, unsigned int, unsigned int);
extern int nfs_writeback_done(struct rpc_task *, struct nfs_write_data *);
extern void nfs_writedata_release(void *);
# 438 "linux-2.6.18/include/linux/nfs_fs.h"
extern int nfs_sync_inode_wait(struct inode *, unsigned long, unsigned int, int);




static inline  __attribute__((always_inline)) int
nfs_commit_inode(struct inode *inode, int how)
{
 return 0;
}


static inline  __attribute__((always_inline)) int
nfs_have_writebacks(struct inode *inode)
{
 return NFS_I(inode)->npages != 0;
}

static inline  __attribute__((always_inline)) int
nfs_wb_all(struct inode *inode)
{
 int error = nfs_sync_inode_wait(inode, 0, 0, 0);
 return (error < 0) ? error : 0;
}




static inline  __attribute__((always_inline)) int nfs_wb_page_priority(struct inode *inode, struct page* page, int how)
{
 int error = nfs_sync_inode_wait(inode, page->index, 1,
   how | 4);
 return (error < 0) ? error : 0;
}

static inline  __attribute__((always_inline)) int nfs_wb_page(struct inode *inode, struct page* page)
{
 return nfs_wb_page_priority(inode, page, 0);
}




extern struct nfs_write_data *nfs_writedata_alloc(size_t len);




extern int nfs_readpage(struct file *, struct page *);
extern int nfs_readpages(struct file *, struct address_space *,
  struct list_head *, unsigned);
extern int nfs_readpage_result(struct rpc_task *, struct nfs_read_data *);
extern void nfs_readdata_release(void *data);




extern struct nfs_read_data *nfs_readdata_alloc(size_t len);
# 508 "linux-2.6.18/include/linux/nfs_fs.h"
static inline  __attribute__((always_inline)) int nfs3_proc_set_default_acl(struct inode *dir,
         struct inode *inode,
         mode_t mode)
{
 return 0;
}

static inline  __attribute__((always_inline)) void nfs3_forget_cached_acls(struct inode *inode)
{
}






extern int nfsroot_mount(struct sockaddr_in *, char *, struct nfs_fh *,
  int, int);





static inline  __attribute__((always_inline)) loff_t
nfs_size_to_loff_t(__u64 size)
{
 loff_t maxsz = (((loff_t) (~0UL)) << 12) + (1UL << 12) - 1;
 if (size > maxsz)
  return maxsz;
 return (loff_t) size;
}

static inline  __attribute__((always_inline)) ino_t
nfs_fileid_to_ino_t(u64 fileid)
{
 ino_t ino = (ino_t) fileid;
 if (sizeof(ino_t) < sizeof(u64))
  ino ^= fileid >> (sizeof(u64)-sizeof(ino_t)) * 8;
 return ino;
}



extern void * nfs_root_data(void);
# 47 "linux-2.6.18/kernel/sysctl.c" 2
# 1 "linux-2.6.18/include/linux/acpi.h" 1
# 37 "linux-2.6.18/include/linux/acpi.h"
# 1 "linux-2.6.18/include/acpi/acpi.h" 1
# 52 "linux-2.6.18/include/acpi/acpi.h"
# 1 "linux-2.6.18/include/acpi/acnames.h" 1
# 53 "linux-2.6.18/include/acpi/acpi.h" 2
# 1 "linux-2.6.18/include/acpi/acconfig.h" 1
# 54 "linux-2.6.18/include/acpi/acpi.h" 2
# 1 "linux-2.6.18/include/acpi/platform/acenv.h" 1
# 140 "linux-2.6.18/include/acpi/platform/acenv.h"
# 1 "linux-2.6.18/include/acpi/platform/aclinux.h" 1
# 58 "linux-2.6.18/include/acpi/platform/aclinux.h"
# 1 "linux-2.6.18/include/asm/div64.h" 1
# 59 "linux-2.6.18/include/acpi/platform/aclinux.h" 2
# 1 "linux-2.6.18/include/asm/acpi.h" 1
# 31 "linux-2.6.18/include/asm/acpi.h"
# 1 "linux-2.6.18/include/acpi/pdc_intel.h" 1
# 32 "linux-2.6.18/include/asm/acpi.h" 2
# 58 "linux-2.6.18/include/asm/acpi.h"
static inline  __attribute__((always_inline)) int
__acpi_acquire_global_lock (unsigned int *lock)
{
 unsigned int old, new, val;
 do {
  old = *lock;
  new = (((old & ~0x3) + 2) + ((old >> 1) & 0x1));
  val = ((__typeof__(*(lock)))__cmpxchg((lock),(unsigned long)(old), (unsigned long)(new),sizeof(*(lock))));
 } while (__builtin_expect(!!(val != old), 0));
 return (new < 3) ? -1 : 0;
}

static inline  __attribute__((always_inline)) int
__acpi_release_global_lock (unsigned int *lock)
{
 unsigned int old, new, val;
 do {
  old = *lock;
  new = old & ~0x3;
  val = ((__typeof__(*(lock)))__cmpxchg((lock),(unsigned long)(old), (unsigned long)(new),sizeof(*(lock))));
 } while (__builtin_expect(!!(val != old), 0));
 return old & 0x1;
}
# 105 "linux-2.6.18/include/asm/acpi.h"
typedef  int  _GLOBAL_249_T; extern  _GLOBAL_249_T  global_acpi_lapic[NUM_STACKS];   
typedef  int  _GLOBAL_250_T; extern  _GLOBAL_250_T  global_acpi_ioapic[NUM_STACKS];   
typedef  int  _GLOBAL_251_T; extern  _GLOBAL_251_T  global_acpi_noirq[NUM_STACKS];   
typedef  int  _GLOBAL_252_T; extern  _GLOBAL_252_T  global_acpi_strict[NUM_STACKS];   
typedef  int  _GLOBAL_253_T; extern  _GLOBAL_253_T  global_acpi_disabled[NUM_STACKS];   
typedef  int  _GLOBAL_254_T; extern  _GLOBAL_254_T  global_acpi_pci_disabled[NUM_STACKS];   
typedef  int  _GLOBAL_255_T; extern  _GLOBAL_255_T  global_acpi_ht[NUM_STACKS];   
static inline  __attribute__((always_inline)) void disable_acpi(void)
{
 global_acpi_disabled[get_stack_id()] = 1;
 global_acpi_ht[get_stack_id()] = 0;
 global_acpi_pci_disabled[get_stack_id()] = 1;
 global_acpi_noirq[get_stack_id()] = 1;
}




extern int acpi_gsi_to_irq(u32 gsi, unsigned int *irq);
static inline  __attribute__((always_inline)) void acpi_noirq_set(void) { global_acpi_noirq[get_stack_id()] = 1; }
static inline  __attribute__((always_inline)) void acpi_disable_pci(void)
{
 global_acpi_pci_disabled[get_stack_id()] = 1;
 acpi_noirq_set();
}
extern int acpi_irq_balance_set(char *str);
# 141 "linux-2.6.18/include/asm/acpi.h"
typedef  int  _GLOBAL_256_T; extern  _GLOBAL_256_T  global_acpi_numa[NUM_STACKS];   
extern int acpi_scan_nodes(unsigned long start, unsigned long end);





extern int acpi_save_state_mem(void);
extern void acpi_restore_state_mem(void);

typedef  unsigned long   _GLOBAL_257_T; extern  _GLOBAL_257_T  global_acpi_wakeup_address[NUM_STACKS];    


extern void acpi_reserve_bootmem(void);





typedef  int  _GLOBAL_258_T; extern  _GLOBAL_258_T  global_acpi_disabled[NUM_STACKS];   
typedef  int  _GLOBAL_259_T; extern  _GLOBAL_259_T  global_acpi_pci_disabled[NUM_STACKS];   

typedef  u8  _GLOBAL_260_T; extern  _GLOBAL_260_T  _GLOBAL_0_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_1_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_2_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_3_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_4_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_5_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_6_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_7_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_8_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_9_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_10_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_11_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_12_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_13_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_14_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_15_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_16_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_17_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_18_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_19_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_20_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_21_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_22_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_23_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_24_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_25_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_26_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_27_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_28_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_29_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_30_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_31_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_32_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_33_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_34_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_35_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_36_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_37_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_38_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_39_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_40_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_41_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_42_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_43_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_44_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_45_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_46_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_47_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_48_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_260_T  _GLOBAL_49_x86_acpiid_to_apicid_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_x86_acpiid_to_apicid_I) *_GLOBAL_x86_acpiid_to_apicid_26_A[NUM_STACKS];  



typedef  int  _GLOBAL_261_T; extern  _GLOBAL_261_T  global_acpi_skip_timer_override[NUM_STACKS];   
# 60 "linux-2.6.18/include/acpi/platform/aclinux.h" 2
# 100 "linux-2.6.18/include/acpi/platform/aclinux.h"
# 1 "linux-2.6.18/include/acpi/platform/acgcc.h" 1
# 101 "linux-2.6.18/include/acpi/platform/aclinux.h" 2





static inline  __attribute__((always_inline)) struct task_struct * acpi_os_get_thread_id(void) { return get_nsc_task(); }







# 1 "linux-2.6.18/include/acpi/actypes.h" 1
# 126 "linux-2.6.18/include/acpi/actypes.h"
typedef unsigned char BOOLEAN;
typedef unsigned char UINT8;
typedef unsigned short UINT16;
typedef unsigned long long UINT64;
typedef long long INT64;
# 144 "linux-2.6.18/include/acpi/actypes.h"
typedef unsigned int UINT32;
typedef int INT32;



typedef u64 acpi_native_uint;
typedef s64 acpi_native_int;

typedef u64 acpi_table_ptr;
typedef u64 acpi_io_address;
typedef u64 acpi_physical_address;
# 240 "linux-2.6.18/include/acpi/actypes.h"
typedef acpi_native_uint acpi_size;
# 318 "linux-2.6.18/include/acpi/actypes.h"
union acpi_pointers {
 acpi_physical_address physical;
 void *logical;
 acpi_table_ptr value;
};

struct acpi_pointer {
 u32 pointer_type;
 union acpi_pointers pointer;
};
# 363 "linux-2.6.18/include/acpi/actypes.h"
typedef u32 acpi_status;
typedef u32 acpi_name;
typedef char *acpi_string;
typedef void *acpi_handle;

struct uint64_struct {
 u32 lo;
 u32 hi;
};

union uint64_overlay {
 u64 full;
 struct uint64_struct part;
};

struct uint32_struct {
 u32 lo;
 u32 hi;
};
# 410 "linux-2.6.18/include/acpi/actypes.h"
typedef u64 acpi_integer;
# 496 "linux-2.6.18/include/acpi/actypes.h"
typedef u32 acpi_table_type;
# 517 "linux-2.6.18/include/acpi/actypes.h"
typedef u32 acpi_object_type;
# 584 "linux-2.6.18/include/acpi/actypes.h"
typedef u32 acpi_event_type;
# 612 "linux-2.6.18/include/acpi/actypes.h"
typedef u32 acpi_event_status;
# 690 "linux-2.6.18/include/acpi/actypes.h"
typedef u8 acpi_adr_space_type;
# 738 "linux-2.6.18/include/acpi/actypes.h"
union acpi_object {
 acpi_object_type type;
 struct {
  acpi_object_type type;
  acpi_integer value;
 } integer;

 struct {
  acpi_object_type type;
  u32 length;
  char *pointer;
 } string;

 struct {
  acpi_object_type type;
  u32 length;
  u8 *pointer;
 } buffer;

 struct {
  acpi_object_type type;
  u32 fill1;
  acpi_handle handle;
 } reference;

 struct {
  acpi_object_type type;
  u32 count;
  union acpi_object *elements;
 } package;

 struct {
  acpi_object_type type;
  u32 proc_id;
  acpi_io_address pblk_address;
  u32 pblk_length;
 } processor;

 struct {
  acpi_object_type type;
  u32 system_level;
  u32 resource_order;
 } power_resource;
};




struct acpi_object_list {
 u32 count;
 union acpi_object *pointer;
};
# 798 "linux-2.6.18/include/acpi/actypes.h"
struct acpi_buffer {
 acpi_size length;
 void *pointer;
};
# 821 "linux-2.6.18/include/acpi/actypes.h"
struct acpi_table_info {
 u32 count;
};




struct acpi_system_info {
 u32 acpi_ca_version;
 u32 flags;
 u32 timer_resolution;
 u32 reserved1;
 u32 reserved2;
 u32 debug_level;
 u32 debug_layer;
 u32 num_table_types;
 struct acpi_table_info table_info[6 + 1];
};




typedef u32( * acpi_osd_handler) (void *context);

typedef void
 ( * acpi_osd_exec_callback) (void *context);




typedef u32(*acpi_event_handler) (void *context);

typedef
void (*acpi_notify_handler) (acpi_handle device, u32 value, void *context);

typedef
void (*acpi_object_handler) (acpi_handle object, u32 function, void *data);

typedef acpi_status(*acpi_init_handler) (acpi_handle object, u32 function);



typedef
acpi_status(*acpi_exception_handler) (acpi_status aml_status,
          acpi_name name,
          u16 opcode,
          u32 aml_offset, void *context);



typedef
acpi_status(*acpi_adr_space_handler) (u32 function,
          acpi_physical_address address,
          u32 bit_width,
          acpi_integer * value,
          void *handler_context,
          void *region_context);



typedef
acpi_status(*acpi_adr_space_setup) (acpi_handle region_handle,
        u32 function,
        void *handler_context,
        void **region_context);




typedef
acpi_status(*acpi_walk_callback) (acpi_handle obj_handle,
      u32 nesting_level,
      void *context, void **return_value);
# 902 "linux-2.6.18/include/acpi/actypes.h"
struct acpi_device_id {
 char value[0x09];
};



struct acpi_compatible_id {
 char value[48];
};

struct acpi_compatible_id_list {
 u32 count;
 u32 size;
 struct acpi_compatible_id id[1];
};
# 940 "linux-2.6.18/include/acpi/actypes.h"
struct acpi_obj_info_header {
 acpi_object_type type; acpi_name name;
};



struct acpi_device_info {
 acpi_object_type type; acpi_name name;

 u32 valid;
 u32 current_status;
 acpi_integer address;
 struct acpi_device_id hardware_id;
 struct acpi_device_id unique_id;
 u8 highest_dstates[4];
 struct acpi_compatible_id_list compatibility_id;
};



struct acpi_pci_id {
 u16 segment;
 u16 bus;
 u16 device;
 u16 function;
};

struct acpi_mem_space_context {
 u32 length;
 acpi_physical_address address;
 acpi_physical_address mapped_physical_address;
 u8 *mapped_logical_address;
 acpi_size mapped_length;
};




typedef u16 acpi_rs_length;
typedef u32 acpi_rsdesc_size;
# 1065 "linux-2.6.18/include/acpi/actypes.h"
#pragma pack(1)




struct acpi_uuid {
 u8 data[16];
};

struct acpi_vendor_uuid {
 u8 subtype;
 u8 data[16];
};




struct acpi_resource_irq {
 u8 triggering;
 u8 polarity;
 u8 sharable;
 u8 interrupt_count;
 u8 interrupts[1];
};

struct acpi_resource_dma {
 u8 type;
 u8 bus_master;
 u8 transfer;
 u8 channel_count;
 u8 channels[1];
};

struct acpi_resource_start_dependent {
 u8 compatibility_priority;
 u8 performance_robustness;
};






struct acpi_resource_io {
 u8 io_decode;
 u8 alignment;
 u8 address_length;
 u16 minimum;
 u16 maximum;
};

struct acpi_resource_fixed_io {
 u16 address;
 u8 address_length;
};

struct acpi_resource_vendor {
 u16 byte_length;
 u8 byte_data[1];
};



struct acpi_resource_vendor_typed {
 u16 byte_length;
 u8 uuid_subtype;
 u8 uuid[16];
 u8 byte_data[1];
};

struct acpi_resource_end_tag {
 u8 checksum;
};

struct acpi_resource_memory24 {
 u8 write_protect;
 u16 minimum;
 u16 maximum;
 u16 alignment;
 u16 address_length;
};

struct acpi_resource_memory32 {
 u8 write_protect;
 u32 minimum;
 u32 maximum;
 u32 alignment;
 u32 address_length;
};

struct acpi_resource_fixed_memory32 {
 u8 write_protect;
 u32 address;
 u32 address_length;
};

struct acpi_memory_attribute {
 u8 write_protect;
 u8 caching;
 u8 range_type;
 u8 translation;
};

struct acpi_io_attribute {
 u8 range_type;
 u8 translation;
 u8 translation_type;
 u8 reserved1;
};

union acpi_resource_attribute {
 struct acpi_memory_attribute mem;
 struct acpi_io_attribute io;



 u8 type_specific;
};

struct acpi_resource_source {
 u8 index;
 u16 string_length;
 char *string_ptr;
};
# 1200 "linux-2.6.18/include/acpi/actypes.h"
struct acpi_resource_address {
u8 resource_type; u8 producer_consumer; u8 decode; u8 min_address_fixed; u8 max_address_fixed; union acpi_resource_attribute info;};

struct acpi_resource_address16 {
 u8 resource_type; u8 producer_consumer; u8 decode; u8 min_address_fixed; u8 max_address_fixed; union acpi_resource_attribute info; u16 granularity;
 u16 minimum;
 u16 maximum;
 u16 translation_offset;
 u16 address_length;
 struct acpi_resource_source resource_source;
};

struct acpi_resource_address32 {
 u8 resource_type; u8 producer_consumer; u8 decode; u8 min_address_fixed; u8 max_address_fixed; union acpi_resource_attribute info; u32 granularity;
 u32 minimum;
 u32 maximum;
 u32 translation_offset;
 u32 address_length;
 struct acpi_resource_source resource_source;
};

struct acpi_resource_address64 {
 u8 resource_type; u8 producer_consumer; u8 decode; u8 min_address_fixed; u8 max_address_fixed; union acpi_resource_attribute info; u64 granularity;
 u64 minimum;
 u64 maximum;
 u64 translation_offset;
 u64 address_length;
 struct acpi_resource_source resource_source;
};

struct acpi_resource_extended_address64 {
 u8 resource_type; u8 producer_consumer; u8 decode; u8 min_address_fixed; u8 max_address_fixed; union acpi_resource_attribute info; u8 revision_iD;
 u64 granularity;
 u64 minimum;
 u64 maximum;
 u64 translation_offset;
 u64 address_length;
 u64 type_specific;
};

struct acpi_resource_extended_irq {
 u8 producer_consumer;
 u8 triggering;
 u8 polarity;
 u8 sharable;
 u8 interrupt_count;
 struct acpi_resource_source resource_source;
 u32 interrupts[1];
};

struct acpi_resource_generic_register {
 u8 space_id;
 u8 bit_width;
 u8 bit_offset;
 u8 access_size;
 u64 address;
};
# 1279 "linux-2.6.18/include/acpi/actypes.h"
union acpi_resource_data {
 struct acpi_resource_irq irq;
 struct acpi_resource_dma dma;
 struct acpi_resource_start_dependent start_dpf;
 struct acpi_resource_io io;
 struct acpi_resource_fixed_io fixed_io;
 struct acpi_resource_vendor vendor;
 struct acpi_resource_vendor_typed vendor_typed;
 struct acpi_resource_end_tag end_tag;
 struct acpi_resource_memory24 memory24;
 struct acpi_resource_memory32 memory32;
 struct acpi_resource_fixed_memory32 fixed_memory32;
 struct acpi_resource_address16 address16;
 struct acpi_resource_address32 address32;
 struct acpi_resource_address64 address64;
 struct acpi_resource_extended_address64 ext_address64;
 struct acpi_resource_extended_irq extended_irq;
 struct acpi_resource_generic_register generic_reg;



 struct acpi_resource_address address;
};

struct acpi_resource {
 u32 type;
 u32 length;
 union acpi_resource_data data;
};



#pragma pack()







struct acpi_pci_routing_table {
 u32 length;
 u32 pin;
 acpi_integer address;
 u32 source_index;
 char source[4];
};
# 115 "linux-2.6.18/include/acpi/platform/aclinux.h" 2
static inline  __attribute__((always_inline)) void *acpi_os_allocate(acpi_size size) {
 return kmalloc(size, (1) ? ((( gfp_t)0x20u)) : ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)));
}
static inline  __attribute__((always_inline)) void *acpi_os_allocate_zeroed(acpi_size size) {
 return kzalloc(size, (1) ? ((( gfp_t)0x20u)) : ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)));
}

static inline  __attribute__((always_inline)) void *acpi_os_acquire_object(kmem_cache_t * cache) {
        return kmem_cache_zalloc(cache, (1) ? ((( gfp_t)0x20u)) : ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)));
}
# 141 "linux-2.6.18/include/acpi/platform/acenv.h" 2
# 55 "linux-2.6.18/include/acpi/acpi.h" 2
# 1 "linux-2.6.18/include/acpi/actypes.h" 1
# 56 "linux-2.6.18/include/acpi/acpi.h" 2
# 1 "linux-2.6.18/include/acpi/acexcep.h" 1
# 57 "linux-2.6.18/include/acpi/acpi.h" 2
# 1 "linux-2.6.18/include/acpi/acmacros.h" 1
# 58 "linux-2.6.18/include/acpi/acpi.h" 2
# 1 "linux-2.6.18/include/acpi/actbl.h" 1
# 65 "linux-2.6.18/include/acpi/actbl.h"
#pragma pack(1)
# 97 "linux-2.6.18/include/acpi/actbl.h"
struct acpi_table_header {
char signature[4]; u32 length; u8 revision; u8 checksum; char oem_id[6]; char oem_table_id[8]; u32 oem_revision; char asl_compiler_id[4]; u32 asl_compiler_revision;};




struct acpi_generic_address {
 u8 address_space_id;
 u8 register_bit_width;
 u8 register_bit_offset;
 u8 access_width;
 u64 address;
};







struct rsdp_descriptor {
 char signature[8];
 u8 checksum;
 char oem_id[6];
 u8 revision;
 u32 rsdt_physical_address;
 u32 length;
 u64 xsdt_physical_address;
 u8 extended_checksum;
 u8 reserved[3];
};
# 137 "linux-2.6.18/include/acpi/actbl.h"
struct rsdt_descriptor {
 char signature[4]; u32 length; u8 revision; u8 checksum; char oem_id[6]; char oem_table_id[8]; u32 oem_revision; char asl_compiler_id[4]; u32 asl_compiler_revision; u32 table_offset_entry[1];
};

struct xsdt_descriptor {
 char signature[4]; u32 length; u8 revision; u8 checksum; char oem_id[6]; char oem_table_id[8]; u32 oem_revision; char asl_compiler_id[4]; u32 asl_compiler_revision; u64 table_offset_entry[1];
};







struct facs_descriptor {
 char signature[4];
 u32 length;
 u32 hardware_signature;
 u32 firmware_waking_vector;
 u32 global_lock;



 u8 S4bios_f:1;
  u8:7;
 u8 reserved1[3];

 u64 xfirmware_waking_vector;
 u8 version;
 u8 reserved[31];
};







struct acpi_common_facs {
 u32 *global_lock;
 u64 *firmware_waking_vector;
 u8 vector_width;
};
# 232 "linux-2.6.18/include/acpi/actbl.h"
struct fadt_descriptor {
 char signature[4]; u32 length; u8 revision; u8 checksum; char oem_id[6]; char oem_table_id[8]; u32 oem_revision; char asl_compiler_id[4]; u32 asl_compiler_revision; u32 V1_firmware_ctrl; u32 V1_dsdt; u8 reserved1; u8 prefer_PM_profile; u16 sci_int; u32 smi_cmd; u8 acpi_enable; u8 acpi_disable; u8 S4bios_req; u8 pstate_cnt; u32 V1_pm1a_evt_blk; u32 V1_pm1b_evt_blk; u32 V1_pm1a_cnt_blk; u32 V1_pm1b_cnt_blk; u32 V1_pm2_cnt_blk; u32 V1_pm_tmr_blk; u32 V1_gpe0_blk; u32 V1_gpe1_blk; u8 pm1_evt_len; u8 pm1_cnt_len; u8 pm2_cnt_len; u8 pm_tm_len; u8 gpe0_blk_len; u8 gpe1_blk_len; u8 gpe1_base; u8 cst_cnt; u16 plvl2_lat; u16 plvl3_lat; u16 flush_size; u16 flush_stride; u8 duty_offset; u8 duty_width; u8 day_alrm; u8 mon_alrm; u8 century; u16 iapc_boot_arch; u8 reserved2;

 u8 wb_invd:1;
 u8 wb_invd_flush:1;
 u8 proc_c1:1;
 u8 plvl2_up:1;
 u8 pwr_button:1;
 u8 sleep_button:1;
 u8 fixed_rTC:1;
 u8 rtcs4:1;
 u8 tmr_val_ext:1;
 u8 dock_cap:1;
 u8 reset_reg_sup:1;
 u8 sealed_case:1;
 u8 headless:1;
 u8 cpu_sw_sleep:1;

 u8 pci_exp_wak:1;
 u8 use_platform_clock:1;
 u8 S4rtc_sts_valid:1;
 u8 remote_power_on_capable:1;
 u8 force_apic_cluster_model:1;
 u8 force_apic_physical_destination_mode:1;
  u8:4;
 u8 reserved3;

 struct acpi_generic_address reset_register;
 u8 reset_value;
 u8 reserved4[3];
 u64 xfirmware_ctrl;
 u64 Xdsdt;
 struct acpi_generic_address xpm1a_evt_blk;
 struct acpi_generic_address xpm1b_evt_blk;
 struct acpi_generic_address xpm1a_cnt_blk;
 struct acpi_generic_address xpm1b_cnt_blk;
 struct acpi_generic_address xpm2_cnt_blk;
 struct acpi_generic_address xpm_tmr_blk;
 struct acpi_generic_address xgpe0_blk;
 struct acpi_generic_address xgpe1_blk;
};





struct fadt_descriptor_rev2_minus {
 char signature[4]; u32 length; u8 revision; u8 checksum; char oem_id[6]; char oem_table_id[8]; u32 oem_revision; char asl_compiler_id[4]; u32 asl_compiler_revision; u32 V1_firmware_ctrl; u32 V1_dsdt; u8 reserved1; u8 prefer_PM_profile; u16 sci_int; u32 smi_cmd; u8 acpi_enable; u8 acpi_disable; u8 S4bios_req; u8 pstate_cnt; u32 V1_pm1a_evt_blk; u32 V1_pm1b_evt_blk; u32 V1_pm1a_cnt_blk; u32 V1_pm1b_cnt_blk; u32 V1_pm2_cnt_blk; u32 V1_pm_tmr_blk; u32 V1_gpe0_blk; u32 V1_gpe1_blk; u8 pm1_evt_len; u8 pm1_cnt_len; u8 pm2_cnt_len; u8 pm_tm_len; u8 gpe0_blk_len; u8 gpe1_blk_len; u8 gpe1_base; u8 cst_cnt; u16 plvl2_lat; u16 plvl3_lat; u16 flush_size; u16 flush_stride; u8 duty_offset; u8 duty_width; u8 day_alrm; u8 mon_alrm; u8 century; u16 iapc_boot_arch; u8 reserved2; u32 flags;
 struct acpi_generic_address reset_register;
 u8 reset_value;
 u8 reserved7[3];
};





struct fadt_descriptor_rev1 {
 char signature[4]; u32 length; u8 revision; u8 checksum; char oem_id[6]; char oem_table_id[8]; u32 oem_revision; char asl_compiler_id[4]; u32 asl_compiler_revision; u32 V1_firmware_ctrl; u32 V1_dsdt; u8 reserved1; u8 prefer_PM_profile; u16 sci_int; u32 smi_cmd; u8 acpi_enable; u8 acpi_disable; u8 S4bios_req; u8 pstate_cnt; u32 V1_pm1a_evt_blk; u32 V1_pm1b_evt_blk; u32 V1_pm1a_cnt_blk; u32 V1_pm1b_cnt_blk; u32 V1_pm2_cnt_blk; u32 V1_pm_tmr_blk; u32 V1_gpe0_blk; u32 V1_gpe1_blk; u8 pm1_evt_len; u8 pm1_cnt_len; u8 pm2_cnt_len; u8 pm_tm_len; u8 gpe0_blk_len; u8 gpe1_blk_len; u8 gpe1_base; u8 cst_cnt; u16 plvl2_lat; u16 plvl3_lat; u16 flush_size; u16 flush_stride; u8 duty_offset; u8 duty_width; u8 day_alrm; u8 mon_alrm; u8 century; u16 iapc_boot_arch; u8 reserved2; u32 flags;
};
# 313 "linux-2.6.18/include/acpi/actbl.h"
#pragma pack()
# 324 "linux-2.6.18/include/acpi/actbl.h"
# 1 "linux-2.6.18/include/acpi/actbl1.h" 1
# 86 "linux-2.6.18/include/acpi/actbl1.h"
#pragma pack(1)
# 100 "linux-2.6.18/include/acpi/actbl1.h"
struct acpi_table_asf {
char signature[4]; u32 length; u8 revision; u8 checksum; char oem_id[6]; char oem_table_id[8]; u32 oem_revision; char asl_compiler_id[4]; u32 asl_compiler_revision;};






struct acpi_asf_header {
u8 type; u8 reserved; u16 length;};
# 126 "linux-2.6.18/include/acpi/actbl1.h"
struct acpi_asf_info {
 u8 type; u8 reserved; u16 length; u8 min_reset_value;
 u8 min_poll_interval;
 u16 system_id;
 u32 mfg_id;
 u8 flags;
 u8 reserved2[3];
};



struct acpi_asf_alert {
 u8 type; u8 reserved; u16 length; u8 assert_mask;
 u8 deassert_mask;
 u8 alerts;
 u8 data_length;
 u8 array[1];
};



struct acpi_asf_remote {
 u8 type; u8 reserved; u16 length; u8 controls;
 u8 data_length;
 u16 reserved2;
 u8 array[1];
};



struct acpi_asf_rmcp {
 u8 type; u8 reserved; u16 length; u8 capabilities[7];
 u8 completion_code;
 u32 enterprise_id;
 u8 command;
 u16 parameter;
 u16 boot_options;
 u16 oem_parameters;
};



struct acpi_asf_address {
 u8 type; u8 reserved; u16 length; u8 eprom_address;
 u8 devices;
 u8 smbus_addresses[1];
};







struct acpi_table_boot {
 char signature[4]; u32 length; u8 revision; u8 checksum; char oem_id[6]; char oem_table_id[8]; u32 oem_revision; char asl_compiler_id[4]; u32 asl_compiler_revision; u8 cmos_index;
 u8 reserved[3];
};







struct acpi_table_cpep {
 char signature[4]; u32 length; u8 revision; u8 checksum; char oem_id[6]; char oem_table_id[8]; u32 oem_revision; char asl_compiler_id[4]; u32 asl_compiler_revision; u64 reserved;
};



struct acpi_cpep_polling {
 u8 type;
 u8 length;
 u8 processor_id;
 u8 processor_eid;
 u32 polling_interval;
};







struct acpi_table_dbgp {
 char signature[4]; u32 length; u8 revision; u8 checksum; char oem_id[6]; char oem_table_id[8]; u32 oem_revision; char asl_compiler_id[4]; u32 asl_compiler_revision; u8 interface_type;
 u8 reserved[3];
 struct acpi_generic_address debug_port;
};







struct ec_boot_resources {
 char signature[4]; u32 length; u8 revision; u8 checksum; char oem_id[6]; char oem_table_id[8]; u32 oem_revision; char asl_compiler_id[4]; u32 asl_compiler_revision; struct acpi_generic_address ec_control;
 struct acpi_generic_address ec_data;
 u32 uid;
 u8 gpe_bit;
 u8 ec_id[1];
};







struct acpi_hpet_table {
 char signature[4]; u32 length; u8 revision; u8 checksum; char oem_id[6]; char oem_table_id[8]; u32 oem_revision; char asl_compiler_id[4]; u32 asl_compiler_revision; u32 hardware_id;
 struct acpi_generic_address base_address;
 u8 hpet_number;
 u16 clock_tick;
 u8 attributes;
};
# 260 "linux-2.6.18/include/acpi/actbl1.h"
struct multiple_apic_table {
 char signature[4]; u32 length; u8 revision; u8 checksum; char oem_id[6]; char oem_table_id[8]; u32 oem_revision; char asl_compiler_id[4]; u32 asl_compiler_revision; u32 local_apic_address;



 u8 PCATcompat:1;
  u8:7;
 u8 reserved1[3];
};
# 281 "linux-2.6.18/include/acpi/actbl1.h"
struct apic_header {
u8 type; u8 length;};
# 328 "linux-2.6.18/include/acpi/actbl1.h"
struct madt_processor_apic {
 u8 type; u8 length; u8 processor_id;
 u8 local_apic_id;
 u8 processor_enabled: 1; u8 : 7; u8 reserved2[3];};



struct madt_io_apic {
 u8 type; u8 length; u8 io_apic_id;
 u8 reserved;
 u32 address;
 u32 interrupt;
};



struct madt_interrupt_override {
 u8 type; u8 length; u8 bus;
 u8 source;
 u32 interrupt;
 u8 polarity : 2; u8 trigger_mode : 2; u8 : 4; u8 reserved1;};



struct madt_nmi_source {
 u8 type; u8 length; u8 polarity : 2; u8 trigger_mode : 2; u8 : 4; u8 reserved1; u32 interrupt;
};



struct madt_local_apic_nmi {
 u8 type; u8 length; u8 processor_id;
 u8 polarity : 2; u8 trigger_mode : 2; u8 : 4; u8 reserved1; u8 lint;
};



struct madt_address_override {
 u8 type; u8 length; u16 reserved;
 u64 address;
};



struct madt_io_sapic {
 u8 type; u8 length; u8 io_sapic_id;
 u8 reserved;
 u32 interrupt_base;
 u64 address;
};



struct madt_local_sapic {
 u8 type; u8 length; u8 processor_id;
 u8 local_sapic_id;
 u8 local_sapic_eid;
 u8 reserved[3];
  u8 processor_enabled: 1; u8 : 7; u8 reserved2[3]; u32 processor_uID;
 char processor_uIDstring[1];
};



struct madt_interrupt_source {
 u8 type; u8 length; u8 polarity : 2; u8 trigger_mode : 2; u8 : 4; u8 reserved1; u8 interrupt_type;
 u8 processor_id;
 u8 processor_eid;
 u8 io_sapic_vector;
 u32 interrupt;
 u32 flags;
};
# 427 "linux-2.6.18/include/acpi/actbl1.h"
struct smart_battery_table {
 char signature[4]; u32 length; u8 revision; u8 checksum; char oem_id[6]; char oem_table_id[8]; u32 oem_revision; char asl_compiler_id[4]; u32 asl_compiler_revision; u32 warning_level;
 u32 low_level;
 u32 critical_level;
};







struct system_locality_info {
 char signature[4]; u32 length; u8 revision; u8 checksum; char oem_id[6]; char oem_table_id[8]; u32 oem_revision; char asl_compiler_id[4]; u32 asl_compiler_revision; u64 locality_count;
 u8 entry[1][1];
};







struct acpi_table_spcr {
 char signature[4]; u32 length; u8 revision; u8 checksum; char oem_id[6]; char oem_table_id[8]; u32 oem_revision; char asl_compiler_id[4]; u32 asl_compiler_revision; u8 interface_type;
 u8 reserved[3];
 struct acpi_generic_address serial_port;
 u8 interrupt_type;
 u8 pc_interrupt;
 u32 interrupt;
 u8 baud_rate;
 u8 parity;
 u8 stop_bits;
 u8 flow_control;
 u8 terminal_type;
 u8 reserved2;
 u16 pci_device_id;
 u16 pci_vendor_id;
 u8 pci_bus;
 u8 pci_device;
 u8 pci_function;
 u32 pci_flags;
 u8 pci_segment;
 u32 reserved3;
};







struct acpi_table_spmi {
 char signature[4]; u32 length; u8 revision; u8 checksum; char oem_id[6]; char oem_table_id[8]; u32 oem_revision; char asl_compiler_id[4]; u32 asl_compiler_revision; u8 reserved;
 u8 interface_type;
 u16 spec_revision;
 u8 interrupt_type;
 u8 gpe_number;
 u8 reserved2;
 u8 pci_device_flag;
 u32 interrupt;
 struct acpi_generic_address ipmi_register;
 u8 pci_segment;
 u8 pci_bus;
 u8 pci_device;
 u8 pci_function;
};







struct system_resource_affinity {
 char signature[4]; u32 length; u8 revision; u8 checksum; char oem_id[6]; char oem_table_id[8]; u32 oem_revision; char asl_compiler_id[4]; u32 asl_compiler_revision; u32 reserved1;
 u64 reserved2;
};
# 520 "linux-2.6.18/include/acpi/actbl1.h"
struct static_resource_alloc {
 u8 type; u8 length; u8 proximity_domain_lo;
 u8 apic_id;



 u8 enabled:1;
  u8:7;
 u8 reserved3[3];

 u8 local_sapic_eid;
 u8 proximity_domain_hi[3];
 u32 reserved4;
};

struct memory_affinity {
 u8 type; u8 length; u32 proximity_domain;
 u16 reserved3;
 u64 base_address;
 u64 address_length;
 u32 reserved4;



 u8 enabled:1;
 u8 hot_pluggable:1;
 u8 non_volatile:1;
  u8:5;
 u8 reserved5[3];

 u64 reserved6;
};







struct acpi_table_tcpa {
 char signature[4]; u32 length; u8 revision; u8 checksum; char oem_id[6]; char oem_table_id[8]; u32 oem_revision; char asl_compiler_id[4]; u32 asl_compiler_revision; u16 reserved;
 u32 max_log_length;
 u64 log_address;
};







struct acpi_table_wdrt {
 char signature[4]; u32 length; u8 revision; u8 checksum; char oem_id[6]; char oem_table_id[8]; u32 oem_revision; char asl_compiler_id[4]; u32 asl_compiler_revision; u32 header_length;
 u8 pci_segment;
 u8 pci_bus;
 u8 pci_device;
 u8 pci_function;
 u32 timer_period;
 u32 max_count;
 u32 min_count;
 u8 flags;
 u8 reserved[3];
 u32 entries;
};
# 640 "linux-2.6.18/include/acpi/actbl1.h"
#pragma pack()
# 325 "linux-2.6.18/include/acpi/actbl.h" 2
# 349 "linux-2.6.18/include/acpi/actbl.h"
struct acpi_table_support {
 char *name;
 char *signature;
 void **global_ptr;
 u8 sig_length;
 u8 flags;
};

typedef  u8  _GLOBAL_262_T; extern  _GLOBAL_262_T  global_acpi_fadt_is_v1[NUM_STACKS];   
# 59 "linux-2.6.18/include/acpi/acpi.h" 2
# 1 "linux-2.6.18/include/acpi/aclocal.h" 1
# 53 "linux-2.6.18/include/acpi/aclocal.h"
typedef u32 acpi_mutex_handle;
# 62 "linux-2.6.18/include/acpi/aclocal.h"
struct acpi_walk_state;
struct acpi_obj_mutex;
union acpi_parse_object;
# 125 "linux-2.6.18/include/acpi/aclocal.h"
typedef u8 acpi_owner_id;
# 134 "linux-2.6.18/include/acpi/aclocal.h"
struct acpi_mutex_info {
 void * mutex;
 u32 use_count;
 struct task_struct * thread_id;
};
# 162 "linux-2.6.18/include/acpi/aclocal.h"
typedef enum {
 ACPI_IMODE_LOAD_PASS1 = 0x01,
 ACPI_IMODE_LOAD_PASS2 = 0x02,
 ACPI_IMODE_EXECUTE = 0x0E
} acpi_interpreter_mode;

union acpi_name_union {
 u32 integer;
 char ascii[4];
};
# 184 "linux-2.6.18/include/acpi/aclocal.h"
struct acpi_namespace_node {
 union acpi_operand_object *object;
 u8 descriptor_type;
 u8 type;
 u8 flags;
 acpi_owner_id owner_id;
 union acpi_name_union name;
 struct acpi_namespace_node *child;
 struct acpi_namespace_node *peer;
# 202 "linux-2.6.18/include/acpi/aclocal.h"
};
# 221 "linux-2.6.18/include/acpi/aclocal.h"
struct acpi_table_desc {
 struct acpi_table_desc *prev;
 struct acpi_table_desc *next;
 struct acpi_table_desc *installed_desc;
 struct acpi_table_header *pointer;
 u8 *aml_start;
 u64 physical_address;
 acpi_size length;
 u32 aml_length;
 acpi_owner_id owner_id;
 u8 type;
 u8 allocation;
 u8 loaded_into_namespace;
};

struct acpi_table_list {
 struct acpi_table_desc *next;
 u32 count;
};

struct acpi_find_context {
 char *search_for;
 acpi_handle *list;
 u32 *count;
};

struct acpi_ns_search_data {
 struct acpi_namespace_node *node;
};




struct acpi_predefined_names {
 char *name;
 u8 type;
 char *val;
};
# 267 "linux-2.6.18/include/acpi/aclocal.h"
struct acpi_namestring_info {
 char *external_name;
 char *next_external_char;
 char *internal_name;
 u32 length;
 u32 num_segments;
 u32 num_carats;
 u8 fully_qualified;
};



struct acpi_create_field_info {
 struct acpi_namespace_node *region_node;
 struct acpi_namespace_node *field_node;
 struct acpi_namespace_node *register_node;
 struct acpi_namespace_node *data_register_node;
 u32 bank_value;
 u32 field_bit_position;
 u32 field_bit_length;
 u8 field_flags;
 u8 attribute;
 u8 field_type;
};

typedef
acpi_status(*ACPI_INTERNAL_METHOD) (struct acpi_walk_state * walk_state);
# 334 "linux-2.6.18/include/acpi/aclocal.h"
struct acpi_handler_info {
 acpi_event_handler address;
 void *context;
 struct acpi_namespace_node *method_node;
};

union acpi_gpe_dispatch_info {
 struct acpi_namespace_node *method_node;
 struct acpi_handler_info *handler;
};





struct acpi_gpe_event_info {
 union acpi_gpe_dispatch_info dispatch;
 struct acpi_gpe_register_info *register_info;
 u8 flags;
 u8 register_bit;
};



struct acpi_gpe_register_info {
 struct acpi_generic_address status_address;
 struct acpi_generic_address enable_address;
 u8 enable_for_wake;
 u8 enable_for_run;
 u8 base_gpe_number;
};





struct acpi_gpe_block_info {
 struct acpi_namespace_node *node;
 struct acpi_gpe_block_info *previous;
 struct acpi_gpe_block_info *next;
 struct acpi_gpe_xrupt_info *xrupt_block;
 struct acpi_gpe_register_info *register_info;
 struct acpi_gpe_event_info *event_info;
 struct acpi_generic_address block_address;
 u32 register_count;
 u8 block_base_number;
};



struct acpi_gpe_xrupt_info {
 struct acpi_gpe_xrupt_info *previous;
 struct acpi_gpe_xrupt_info *next;
 struct acpi_gpe_block_info *gpe_block_list_head;
 u32 interrupt_number;
};

struct acpi_gpe_walk_info {
 struct acpi_namespace_node *gpe_device;
 struct acpi_gpe_block_info *gpe_block;
};

typedef acpi_status(*acpi_gpe_callback) (struct acpi_gpe_xrupt_info *
      gpe_xrupt_info,
      struct acpi_gpe_block_info *
      gpe_block);



struct acpi_fixed_event_handler {
 acpi_event_handler handler;
 void *context;
};

struct acpi_fixed_event_info {
 u8 status_register_id;
 u8 enable_register_id;
 u16 status_bit_mask;
 u16 enable_bit_mask;
};



struct acpi_field_info {
 u8 skip_field;
 u8 field_flag;
 u32 pkg_length;
};
# 444 "linux-2.6.18/include/acpi/aclocal.h"
struct acpi_common_state {
void *next; u8 descriptor_type; u8 flags; u16 value; u16 state;};




struct acpi_update_state {
 void *next; u8 descriptor_type; u8 flags; u16 value; u16 state; union acpi_operand_object *object;
};




struct acpi_pkg_state {
 void *next; u8 descriptor_type; u8 flags; u16 value; u16 state; u16 index;
 union acpi_operand_object *source_object;
 union acpi_operand_object *dest_object;
 struct acpi_walk_state *walk_state;
 void *this_target_obj;
 u32 num_packages;
};





struct acpi_control_state {
 void *next; u8 descriptor_type; u8 flags; u16 value; u16 state; u16 opcode;
 union acpi_parse_object *predicate_op;
 u8 *aml_predicate_start;
 u8 *package_end;
};




struct acpi_scope_state {
 void *next; u8 descriptor_type; u8 flags; u16 value; u16 state; struct acpi_namespace_node *node;
};

struct acpi_pscope_state {
 void *next; u8 descriptor_type; u8 flags; u16 value; u16 state; u32 arg_count;
 union acpi_parse_object *op;
 u8 *arg_end;
 u8 *pkg_end;
 u32 arg_list;
};





struct acpi_thread_state {
 void *next; u8 descriptor_type; u8 flags; u16 value; u16 state; u8 current_sync_level;
 struct acpi_walk_state *walk_state_list;
 union acpi_operand_object *acquired_mutex_list;
 struct task_struct * thread_id;
};





struct acpi_result_values {
 void *next; u8 descriptor_type; u8 flags; u16 value; u16 state; u8 num_results;
 u8 last_insert;
 union acpi_operand_object *obj_desc[8];
};

typedef
acpi_status(*acpi_parse_downwards) (struct acpi_walk_state * walk_state,
        union acpi_parse_object ** out_op);

typedef acpi_status(*acpi_parse_upwards) (struct acpi_walk_state * walk_state);





struct acpi_notify_info {
 void *next; u8 descriptor_type; u8 flags; u16 value; u16 state; struct acpi_namespace_node *node;
 union acpi_operand_object *handler_obj;
};



union acpi_generic_state {
 struct acpi_common_state common;
 struct acpi_control_state control;
 struct acpi_update_state update;
 struct acpi_scope_state scope;
 struct acpi_pscope_state parse_scope;
 struct acpi_pkg_state pkg;
 struct acpi_thread_state thread;
 struct acpi_result_values results;
 struct acpi_notify_info notify;
};







typedef acpi_status(*ACPI_EXECUTE_OP) (struct acpi_walk_state * walk_state);
# 559 "linux-2.6.18/include/acpi/aclocal.h"
struct acpi_opcode_info {



 u32 parse_args;
 u32 runtime_args;
 u16 flags;
 u8 object_type;
 u8 class;
 u8 type;
};

union acpi_parse_value {
 acpi_integer integer;
 struct uint64_struct integer64;
 u32 size;
 char *string;
 u8 *buffer;
 char *name;
 union acpi_parse_object *arg;
};
# 608 "linux-2.6.18/include/acpi/aclocal.h"
struct acpi_parse_obj_common {
union acpi_parse_object *parent; u8 descriptor_type; u8 flags; u16 aml_opcode; u32 aml_offset; union acpi_parse_object *next; struct acpi_namespace_node *node; union acpi_parse_value value; };





struct acpi_parse_obj_named {
 union acpi_parse_object *parent; u8 descriptor_type; u8 flags; u16 aml_opcode; u32 aml_offset; union acpi_parse_object *next; struct acpi_namespace_node *node; union acpi_parse_value value; u8 * path;
 u8 *data;
 u32 length;
 u32 name;
};





struct acpi_parse_obj_asl {
 union acpi_parse_object *parent; u8 descriptor_type; u8 flags; u16 aml_opcode; u32 aml_offset; union acpi_parse_object *next; struct acpi_namespace_node *node; union acpi_parse_value value; union acpi_parse_object *child;
 union acpi_parse_object *parent_method;
 char *filename;
 char *external_name;
 char *namepath;
 char name_seg[4];
 u32 extra_value;
 u32 column;
 u32 line_number;
 u32 logical_line_number;
 u32 logical_byte_offset;
 u32 end_line;
 u32 end_logical_line;
 u32 acpi_btype;
 u32 aml_length;
 u32 aml_subtree_length;
 u32 final_aml_length;
 u32 final_aml_offset;
 u32 compile_flags;
 u16 parse_opcode;
 u8 aml_opcode_length;
 u8 aml_pkg_len_bytes;
 u8 extra;
 char parse_op_name[20];
};

union acpi_parse_object {
 struct acpi_parse_obj_common common;
 struct acpi_parse_obj_named named;
 struct acpi_parse_obj_asl asl;
};





struct acpi_parse_state {
 u8 *aml_start;
 u8 *aml;
 u8 *aml_end;
 u8 *pkg_start;
 u8 *pkg_end;
 union acpi_parse_object *start_op;
 struct acpi_namespace_node *start_node;
 union acpi_generic_state *scope;
 union acpi_parse_object *start_scope;
 u32 aml_size;
};
# 700 "linux-2.6.18/include/acpi/aclocal.h"
struct acpi_bit_register_info {
 u8 parent_register;
 u8 bit_position;
 u16 access_bit_mask;
};
# 857 "linux-2.6.18/include/acpi/aclocal.h"
struct acpi_db_method_info {
 acpi_handle thread_gate;
 char *name;
 char **args;
 u32 flags;
 u32 num_loops;
 char pathname[128];
};

struct acpi_integrity_info {
 u32 nodes;
 u32 objects;
};
# 896 "linux-2.6.18/include/acpi/aclocal.h"
struct acpi_debug_mem_header {
struct acpi_debug_mem_block *previous; struct acpi_debug_mem_block *next; u32 size; u32 component; u32 line; char module[16]; u8 alloc_type;};

struct acpi_debug_mem_block {
 struct acpi_debug_mem_block *previous; struct acpi_debug_mem_block *next; u32 size; u32 component; u32 line; char module[16]; u8 alloc_type; u64 user_space;
};






struct acpi_memory_list {
 char *list_name;
 void *list_head;
 u16 object_size;
 u16 max_depth;
 u16 current_depth;
 u16 link_offset;
# 926 "linux-2.6.18/include/acpi/aclocal.h"
};
# 60 "linux-2.6.18/include/acpi/acpi.h" 2
# 1 "linux-2.6.18/include/acpi/acoutput.h" 1
# 61 "linux-2.6.18/include/acpi/acpi.h" 2
# 1 "linux-2.6.18/include/acpi/acpiosxf.h" 1
# 55 "linux-2.6.18/include/acpi/acpiosxf.h"
typedef enum {
 OSL_GLOBAL_LOCK_HANDLER,
 OSL_NOTIFY_HANDLER,
 OSL_GPE_HANDLER,
 OSL_DEBUGGER_THREAD,
 OSL_EC_POLL_HANDLER,
 OSL_EC_BURST_HANDLER
} acpi_execute_type;
# 72 "linux-2.6.18/include/acpi/acpiosxf.h"
struct acpi_signal_fatal_info {
 u32 type;
 u32 code;
 u32 argument;
};




acpi_status acpi_os_initialize(void);

acpi_status acpi_os_terminate(void);




acpi_status acpi_os_get_root_pointer(u32 flags, struct acpi_pointer *address);

acpi_status
acpi_os_predefined_override(const struct acpi_predefined_names *init_val,
       acpi_string * new_val);

acpi_status
acpi_os_table_override(struct acpi_table_header *existing_table,
         struct acpi_table_header **new_table);




acpi_status acpi_os_create_lock(spinlock_t * * out_handle);

void acpi_os_delete_lock(spinlock_t * handle);

unsigned long acpi_os_acquire_lock(spinlock_t * handle);

void acpi_os_release_lock(spinlock_t * handle, unsigned long flags);




acpi_status
acpi_os_create_semaphore(u32 max_units,
    u32 initial_units, void * * out_handle);

acpi_status acpi_os_delete_semaphore(void * handle);

acpi_status
acpi_os_wait_semaphore(void * handle, u32 units, u16 timeout);

acpi_status acpi_os_signal_semaphore(void * handle, u32 units);




acpi_status acpi_os_create_mutex(void * * out_handle);

void acpi_os_delete_mutex(void * handle);

acpi_status acpi_os_acquire_mutex(void * handle, u16 timeout);

void acpi_os_release_mutex(void * handle);
# 144 "linux-2.6.18/include/acpi/acpiosxf.h"
void *acpi_os_allocate(acpi_size size);

acpi_status
acpi_os_map_memory(acpi_physical_address physical_address,
     acpi_size size, void ** logical_address);

void acpi_os_unmap_memory(void * logical_address, acpi_size size);
# 161 "linux-2.6.18/include/acpi/acpiosxf.h"
acpi_status
acpi_os_create_cache(char *cache_name,
       u16 object_size,
       u16 max_depth, kmem_cache_t ** return_cache);

acpi_status acpi_os_delete_cache(kmem_cache_t * cache);

acpi_status acpi_os_purge_cache(kmem_cache_t * cache);

void *acpi_os_acquire_object(kmem_cache_t * cache);

acpi_status acpi_os_release_object(kmem_cache_t * cache, void *object);




acpi_status
acpi_os_install_interrupt_handler(u32 gsi,
      acpi_osd_handler service_routine,
      void *context);

acpi_status
acpi_os_remove_interrupt_handler(u32 gsi, acpi_osd_handler service_routine);




struct task_struct * acpi_os_get_thread_id(void);

acpi_status
acpi_os_execute(acpi_execute_type type,
  acpi_osd_exec_callback function, void *context);

void acpi_os_wait_events_complete(void *context);

void acpi_os_sleep(acpi_integer milliseconds);

void acpi_os_stall(u32 microseconds);




acpi_status acpi_os_read_port(acpi_io_address address, u32 * value, u32 width);

acpi_status acpi_os_write_port(acpi_io_address address, u32 value, u32 width);




acpi_status
acpi_os_read_memory(acpi_physical_address address, u32 * value, u32 width);

acpi_status
acpi_os_write_memory(acpi_physical_address address, u32 value, u32 width);






acpi_status
acpi_os_read_pci_configuration(struct acpi_pci_id *pci_id,
          u32 reg, void *value, u32 width);

acpi_status
acpi_os_write_pci_configuration(struct acpi_pci_id *pci_id,
    u32 reg, acpi_integer value, u32 width);




void
acpi_os_derive_pci_id(acpi_handle rhandle,
        acpi_handle chandle, struct acpi_pci_id **pci_id);




acpi_status acpi_os_validate_interface(char *interface);

acpi_status
acpi_os_validate_address(u8 space_id,
    acpi_physical_address address, acpi_size length);

u8 acpi_os_readable(void *pointer, acpi_size length);





u64 acpi_os_get_timer(void);

acpi_status acpi_os_signal(u32 function, void *info);




void acpi_os_printf(const char *format, ...);

void acpi_os_vprintf(const char *format, va_list args);

void acpi_os_redirect_output(void *destination);
# 274 "linux-2.6.18/include/acpi/acpiosxf.h"
void *acpi_os_open_directory(char *pathname,
        char *wildcard_spec, char requested_file_type);






char *acpi_os_get_next_filename(void *dir_handle);

void acpi_os_close_directory(void *dir_handle);
# 62 "linux-2.6.18/include/acpi/acpi.h" 2
# 1 "linux-2.6.18/include/acpi/acpixf.h" 1
# 54 "linux-2.6.18/include/acpi/acpixf.h"
acpi_status acpi_initialize_subsystem(void);

acpi_status acpi_enable_subsystem(u32 flags);

acpi_status acpi_initialize_objects(u32 flags);

acpi_status acpi_terminate(void);





acpi_status acpi_enable(void);

acpi_status acpi_disable(void);





const char *acpi_format_exception(acpi_status exception);

acpi_status acpi_purge_cached_objects(void);
# 86 "linux-2.6.18/include/acpi/acpixf.h"
void *acpi_allocate(u32 size);

void *acpi_callocate(u32 size);

void acpi_free(void *address);




acpi_status
acpi_find_root_pointer(u32 flags, struct acpi_pointer *rsdp_address);

acpi_status acpi_load_tables(void);
# 110 "linux-2.6.18/include/acpi/acpixf.h"
acpi_status
acpi_get_table(acpi_table_type table_type,
        u32 instance, struct acpi_buffer *ret_buffer);

acpi_status
acpi_get_firmware_table(acpi_string signature,
   u32 instance,
   u32 flags, struct acpi_table_header **table_pointer);




acpi_status
acpi_walk_namespace(acpi_object_type type,
      acpi_handle start_object,
      u32 max_depth,
      acpi_walk_callback user_function,
      void *context, void **return_value);

acpi_status
acpi_get_devices(char *HID,
   acpi_walk_callback user_function,
   void *context, void **return_value);

acpi_status
acpi_get_name(acpi_handle handle,
       u32 name_type, struct acpi_buffer *ret_path_ptr);

acpi_status
acpi_get_handle(acpi_handle parent,
  acpi_string pathname, acpi_handle * ret_handle);

acpi_status
acpi_attach_data(acpi_handle obj_handle,
   acpi_object_handler handler, void *data);

acpi_status
acpi_detach_data(acpi_handle obj_handle, acpi_object_handler handler);

acpi_status
acpi_get_data(acpi_handle obj_handle, acpi_object_handler handler, void **data);

acpi_status
acpi_debug_trace(char *name, u32 debug_level, u32 debug_layer, u32 flags);




acpi_status
acpi_evaluate_object(acpi_handle object,
       acpi_string pathname,
       struct acpi_object_list *parameter_objects,
       struct acpi_buffer *return_object_buffer);
# 173 "linux-2.6.18/include/acpi/acpixf.h"
acpi_status
acpi_get_object_info(acpi_handle handle, struct acpi_buffer *return_buffer);

acpi_status
acpi_get_next_object(acpi_object_type type,
       acpi_handle parent,
       acpi_handle child, acpi_handle * out_handle);

acpi_status acpi_get_type(acpi_handle object, acpi_object_type * out_type);

acpi_status acpi_get_parent(acpi_handle object, acpi_handle * out_handle);




acpi_status
acpi_install_fixed_event_handler(u32 acpi_event,
     acpi_event_handler handler, void *context);

acpi_status
acpi_remove_fixed_event_handler(u32 acpi_event, acpi_event_handler handler);

acpi_status
acpi_install_notify_handler(acpi_handle device,
       u32 handler_type,
       acpi_notify_handler handler, void *context);

acpi_status
acpi_remove_notify_handler(acpi_handle device,
      u32 handler_type, acpi_notify_handler handler);

acpi_status
acpi_install_address_space_handler(acpi_handle device,
       acpi_adr_space_type space_id,
       acpi_adr_space_handler handler,
       acpi_adr_space_setup setup, void *context);

acpi_status
acpi_remove_address_space_handler(acpi_handle device,
      acpi_adr_space_type space_id,
      acpi_adr_space_handler handler);

acpi_status
acpi_install_gpe_handler(acpi_handle gpe_device,
    u32 gpe_number,
    u32 type, acpi_event_handler address, void *context);
# 227 "linux-2.6.18/include/acpi/acpixf.h"
acpi_status acpi_acquire_global_lock(u16 timeout, u32 * handle);

acpi_status acpi_release_global_lock(u32 handle);

acpi_status
acpi_remove_gpe_handler(acpi_handle gpe_device,
   u32 gpe_number, acpi_event_handler address);

acpi_status acpi_enable_event(u32 event, u32 flags);

acpi_status acpi_disable_event(u32 event, u32 flags);

acpi_status acpi_clear_event(u32 event);





acpi_status acpi_set_gpe_type(acpi_handle gpe_device, u32 gpe_number, u8 type);

acpi_status acpi_enable_gpe(acpi_handle gpe_device, u32 gpe_number, u32 flags);

acpi_status acpi_disable_gpe(acpi_handle gpe_device, u32 gpe_number, u32 flags);

acpi_status acpi_clear_gpe(acpi_handle gpe_device, u32 gpe_number, u32 flags);
# 260 "linux-2.6.18/include/acpi/acpixf.h"
acpi_status
acpi_install_gpe_block(acpi_handle gpe_device,
         struct acpi_generic_address *gpe_block_address,
         u32 register_count, u32 interrupt_number);

acpi_status acpi_remove_gpe_block(acpi_handle gpe_device);




typedef
acpi_status(*acpi_walk_resource_callback) (struct acpi_resource * resource,
        void *context);

acpi_status
acpi_get_vendor_resource(acpi_handle device_handle,
    char *name,
    struct acpi_vendor_uuid *uuid,
    struct acpi_buffer *ret_buffer);

acpi_status
acpi_get_current_resources(acpi_handle device_handle,
      struct acpi_buffer *ret_buffer);







acpi_status
acpi_walk_resources(acpi_handle device_handle,
      char *name,
      acpi_walk_resource_callback user_function, void *context);

acpi_status
acpi_set_current_resources(acpi_handle device_handle,
      struct acpi_buffer *in_buffer);

acpi_status
acpi_get_irq_routing_table(acpi_handle bus_device_handle,
      struct acpi_buffer *ret_buffer);

acpi_status
acpi_resource_to_address64(struct acpi_resource *resource,
      struct acpi_resource_address64 *out);




acpi_status acpi_get_register(u32 register_id, u32 * return_value, u32 flags);

acpi_status acpi_set_register(u32 register_id, u32 value, u32 flags);

acpi_status
acpi_set_firmware_waking_vector(acpi_physical_address physical_address);






acpi_status
acpi_get_sleep_type_data(u8 sleep_state, u8 * slp_typ_a, u8 * slp_typ_b);

acpi_status acpi_enter_sleep_state_prep(u8 sleep_state);

acpi_status acpi_enter_sleep_state(u8 sleep_state);

acpi_status acpi_enter_sleep_state_s4bios(void);

acpi_status acpi_leave_sleep_state(u8 sleep_state);
# 63 "linux-2.6.18/include/acpi/acpi.h" 2
# 1 "linux-2.6.18/include/acpi/acobject.h" 1
# 100 "linux-2.6.18/include/acpi/acobject.h"
struct acpi_object_common {
union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags;};

struct acpi_object_integer {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; acpi_integer value;
};
# 117 "linux-2.6.18/include/acpi/acobject.h"
struct acpi_object_string {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; char *pointer; u32 length;
};

struct acpi_object_buffer {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; u8 *pointer; u32 length;
 u32 aml_length;
 u8 *aml_start;
 struct acpi_namespace_node *node;
};

struct acpi_object_package {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; struct acpi_namespace_node *node;
 union acpi_operand_object **elements;
 u8 *aml_start;
 u32 aml_length;
 u32 count;
};







struct acpi_object_event {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; void * os_semaphore;
};

struct acpi_object_mutex {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; u8 sync_level;
 u16 acquisition_depth;
 struct acpi_thread_state *owner_thread;
 void * os_mutex;
 union acpi_operand_object *prev;
 union acpi_operand_object *next;
 struct acpi_namespace_node *node;
 u8 original_sync_level;
};

struct acpi_object_region {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; u8 space_id;
 struct acpi_namespace_node *node;
 union acpi_operand_object *handler;
 union acpi_operand_object *next;
 acpi_physical_address address;
 u32 length;
};

struct acpi_object_method {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; u8 method_flags;
 u8 param_count;
 u8 sync_level;
 union acpi_operand_object *mutex;
 u8 *aml_start;
 ACPI_INTERNAL_METHOD implementation;
 u32 aml_length;
 u8 thread_count;
 acpi_owner_id owner_id;
};
# 192 "linux-2.6.18/include/acpi/acobject.h"
struct acpi_object_notify_common {
union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; union acpi_operand_object *system_notify; union acpi_operand_object *device_notify; union acpi_operand_object *handler;};

struct acpi_object_device {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags;
     union acpi_operand_object *system_notify; union acpi_operand_object *device_notify; union acpi_operand_object *handler; struct acpi_gpe_block_info *gpe_block;
};

struct acpi_object_power_resource {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; union acpi_operand_object *system_notify; union acpi_operand_object *device_notify; union acpi_operand_object *handler; u32 system_level;
 u32 resource_order;
};

struct acpi_object_processor {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; u8 proc_id;
 u8 length;
  union acpi_operand_object *system_notify; union acpi_operand_object *device_notify; union acpi_operand_object *handler; acpi_io_address address;
};

struct acpi_object_thermal_zone {
union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; union acpi_operand_object *system_notify; union acpi_operand_object *device_notify; union acpi_operand_object *handler;};
# 236 "linux-2.6.18/include/acpi/acobject.h"
struct acpi_object_field_common {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; u8 field_flags; u8 attribute; u8 access_byte_width; struct acpi_namespace_node *node; u32 bit_length; u32 base_byte_offset; u32 value; u8 start_field_bit_offset; u8 access_bit_width; union acpi_operand_object *region_obj;
};

struct acpi_object_region_field {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; u8 field_flags; u8 attribute; u8 access_byte_width; struct acpi_namespace_node *node; u32 bit_length; u32 base_byte_offset; u32 value; u8 start_field_bit_offset; u8 access_bit_width; union acpi_operand_object *region_obj;
};

struct acpi_object_bank_field {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; u8 field_flags; u8 attribute; u8 access_byte_width; struct acpi_namespace_node *node; u32 bit_length; u32 base_byte_offset; u32 value; u8 start_field_bit_offset; u8 access_bit_width; union acpi_operand_object *region_obj;
 union acpi_operand_object *bank_obj;
};

struct acpi_object_index_field {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; u8 field_flags; u8 attribute; u8 access_byte_width; struct acpi_namespace_node *node; u32 bit_length; u32 base_byte_offset; u32 value; u8 start_field_bit_offset; u8 access_bit_width;




 union acpi_operand_object *index_obj;
 union acpi_operand_object *data_obj;
};



struct acpi_object_buffer_field {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; u8 field_flags; u8 attribute; u8 access_byte_width; struct acpi_namespace_node *node; u32 bit_length; u32 base_byte_offset; u32 value; u8 start_field_bit_offset; u8 access_bit_width; union acpi_operand_object *buffer_obj;
};







struct acpi_object_notify_handler {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; struct acpi_namespace_node *node;
 acpi_notify_handler handler;
 void *context;
};

struct acpi_object_addr_handler {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; u8 space_id;
 u8 handler_flags;
 acpi_adr_space_handler handler;
 struct acpi_namespace_node *node;
 void *context;
 acpi_adr_space_setup setup;
 union acpi_operand_object *region_list;
 union acpi_operand_object *next;
};
# 302 "linux-2.6.18/include/acpi/acobject.h"
struct acpi_object_reference {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; u8 target_type;
 u16 opcode;
 void *object;
 struct acpi_namespace_node *node;
 union acpi_operand_object **where;
 u32 offset;
};
# 318 "linux-2.6.18/include/acpi/acobject.h"
struct acpi_object_extra {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; struct acpi_namespace_node *method_REG;
 void *region_context;
 u8 *aml_start;
 u32 aml_length;
};



struct acpi_object_data {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; acpi_object_handler handler;
 void *pointer;
};



struct acpi_object_cache_list {
 union acpi_operand_object *next_object; u8 descriptor_type; u8 type; u16 reference_count; u8 flags; union acpi_operand_object *next;
};







union acpi_operand_object {
 struct acpi_object_common common;
 struct acpi_object_integer integer;
 struct acpi_object_string string;
 struct acpi_object_buffer buffer;
 struct acpi_object_package package;
 struct acpi_object_event event;
 struct acpi_object_method method;
 struct acpi_object_mutex mutex;
 struct acpi_object_region region;
 struct acpi_object_notify_common common_notify;
 struct acpi_object_device device;
 struct acpi_object_power_resource power_resource;
 struct acpi_object_processor processor;
 struct acpi_object_thermal_zone thermal_zone;
 struct acpi_object_field_common common_field;
 struct acpi_object_region_field field;
 struct acpi_object_buffer_field buffer_field;
 struct acpi_object_bank_field bank_field;
 struct acpi_object_index_field index_field;
 struct acpi_object_notify_handler notify;
 struct acpi_object_addr_handler address_space;
 struct acpi_object_reference reference;
 struct acpi_object_extra extra;
 struct acpi_object_data data;
 struct acpi_object_cache_list cache;
};
# 397 "linux-2.6.18/include/acpi/acobject.h"
struct acpi_common_descriptor {
 void *common_pointer;
 u8 descriptor_type;
};

union acpi_descriptor {
 struct acpi_common_descriptor common;
 union acpi_operand_object object;
 struct acpi_namespace_node node;
 union acpi_parse_object op;
};
# 64 "linux-2.6.18/include/acpi/acpi.h" 2
# 1 "linux-2.6.18/include/acpi/acstruct.h" 1
# 76 "linux-2.6.18/include/acpi/acstruct.h"
struct acpi_walk_state {
 struct acpi_walk_state *next;
 u8 descriptor_type;
 u8 walk_type;
 u16 opcode;
 u8 next_op_info;
 u8 num_operands;
 acpi_owner_id owner_id;
 u8 last_predicate;
 u8 current_result;
 u8 return_used;
 u8 scope_depth;
 u8 pass_number;
 u32 aml_offset;
 u32 arg_types;
 u32 method_breakpoint;
 u32 user_breakpoint;
 u32 parse_flags;

 struct acpi_parse_state parser_state;
 u32 prev_arg_types;
 u32 arg_count;

 struct acpi_namespace_node arguments[7];
 struct acpi_namespace_node local_variables[8];
 union acpi_operand_object *operands[8 + 1];
 union acpi_operand_object **params;

 u8 *aml_last_while;
 union acpi_operand_object **caller_return_desc;
 union acpi_generic_state *control_state;
 struct acpi_namespace_node *deferred_node;
 struct acpi_gpe_event_info *gpe_event_info;
 union acpi_operand_object *implicit_return_obj;
 struct acpi_namespace_node *method_call_node;
 union acpi_parse_object *method_call_op;
 union acpi_operand_object *method_desc;
 struct acpi_namespace_node *method_node;
 union acpi_parse_object *op;
 const struct acpi_opcode_info *op_info;
 union acpi_parse_object *origin;
 union acpi_operand_object *result_obj;
 union acpi_generic_state *results;
 union acpi_operand_object *return_desc;
 union acpi_generic_state *scope_info;
 union acpi_parse_object *prev_op;
 union acpi_parse_object *next_op;
 struct acpi_thread_state *thread;
 acpi_parse_downwards descending_callback;
 acpi_parse_upwards ascending_callback;
};



struct acpi_init_walk_info {
 u16 method_count;
 u16 device_count;
 u16 op_region_count;
 u16 field_count;
 u16 buffer_count;
 u16 package_count;
 u16 op_region_init;
 u16 field_init;
 u16 buffer_init;
 u16 package_init;
 u16 object_count;
 struct acpi_table_desc *table_desc;
};

struct acpi_get_devices_info {
 acpi_walk_callback user_function;
 void *context;
 char *hid;
};

union acpi_aml_operands {
 union acpi_operand_object *operands[7];

 struct {
  struct acpi_object_integer *type;
  struct acpi_object_integer *code;
  struct acpi_object_integer *argument;

 } fatal;

 struct {
  union acpi_operand_object *source;
  struct acpi_object_integer *index;
  union acpi_operand_object *target;

 } index;

 struct {
  union acpi_operand_object *source;
  struct acpi_object_integer *index;
  struct acpi_object_integer *length;
  union acpi_operand_object *target;

 } mid;
};





struct acpi_evaluate_info {
 struct acpi_namespace_node *prefix_node;
 char *pathname;
 union acpi_operand_object *obj_desc;
 union acpi_operand_object **parameters;
 struct acpi_namespace_node *resolved_node;
 union acpi_operand_object *return_object;
 u8 pass_number;
 u8 parameter_type;
 u8 return_object_type;
 u8 flags;
};
# 205 "linux-2.6.18/include/acpi/acstruct.h"
struct acpi_device_walk_info {
 u16 device_count;
 u16 num_STA;
 u16 num_INI;
 struct acpi_table_desc *table_desc;
 struct acpi_evaluate_info *evaluate_info;
};



struct acpi_walk_info {
 u32 debug_level;
 u32 count;
 acpi_owner_id owner_id;
 u8 display_type;
};
# 65 "linux-2.6.18/include/acpi/acpi.h" 2
# 1 "linux-2.6.18/include/acpi/acglobal.h" 1
# 65 "linux-2.6.18/include/acpi/acglobal.h"
typedef  struct acpi_generic_address   _GLOBAL_263_T; extern  _GLOBAL_263_T  global_acpi_gbl_xpm1a_enable[NUM_STACKS];    
typedef  struct acpi_generic_address   _GLOBAL_264_T; extern  _GLOBAL_264_T  global_acpi_gbl_xpm1b_enable[NUM_STACKS];    
# 76 "linux-2.6.18/include/acpi/acglobal.h"
typedef  u32  _GLOBAL_265_T; extern  _GLOBAL_265_T  global_acpi_dbg_level[NUM_STACKS];   
typedef  u32  _GLOBAL_266_T; extern  _GLOBAL_266_T  global_acpi_dbg_layer[NUM_STACKS];   



typedef  u32  _GLOBAL_267_T; extern  _GLOBAL_267_T  global_acpi_gbl_nesting_level[NUM_STACKS];   



typedef  u32  _GLOBAL_268_T; extern  _GLOBAL_268_T  global_acpi_gbl_original_dbg_level[NUM_STACKS];   
typedef  u32  _GLOBAL_269_T; extern  _GLOBAL_269_T  global_acpi_gbl_original_dbg_layer[NUM_STACKS];   
typedef  acpi_name  _GLOBAL_270_T; extern  _GLOBAL_270_T  global_acpi_gbl_trace_method_name[NUM_STACKS];   
typedef  u32  _GLOBAL_271_T; extern  _GLOBAL_271_T  global_acpi_gbl_trace_dbg_level[NUM_STACKS];   
typedef  u32  _GLOBAL_272_T; extern  _GLOBAL_272_T  global_acpi_gbl_trace_dbg_layer[NUM_STACKS];   
typedef  u32  _GLOBAL_273_T; extern  _GLOBAL_273_T  global_acpi_gbl_trace_flags[NUM_STACKS];   
# 112 "linux-2.6.18/include/acpi/acglobal.h"
typedef  u8  _GLOBAL_274_T; extern  _GLOBAL_274_T  global_acpi_gbl_enable_interpreter_slack[NUM_STACKS];   







typedef  u8  _GLOBAL_275_T; extern  _GLOBAL_275_T  global_acpi_gbl_all_methods_serialized[NUM_STACKS];   






typedef  u8  _GLOBAL_276_T; extern  _GLOBAL_276_T  global_acpi_gbl_create_osi_method[NUM_STACKS];   






typedef  u8  _GLOBAL_277_T; extern  _GLOBAL_277_T  global_acpi_gbl_leave_wake_gpes_disabled[NUM_STACKS];   
# 150 "linux-2.6.18/include/acpi/acglobal.h"
typedef  u32  _GLOBAL_278_T; extern  _GLOBAL_278_T  global_acpi_gbl_table_flags[NUM_STACKS];   
typedef  u32  _GLOBAL_279_T; extern  _GLOBAL_279_T  global_acpi_gbl_rsdt_table_count[NUM_STACKS];   
typedef  struct rsdp_descriptor   _GLOBAL_280_T; extern  _GLOBAL_280_T  * global_acpi_gbl_RSDP[NUM_STACKS];    
typedef  struct xsdt_descriptor   _GLOBAL_281_T; extern  _GLOBAL_281_T  * global_acpi_gbl_XSDT[NUM_STACKS];    
typedef  struct fadt_descriptor   _GLOBAL_282_T; extern  _GLOBAL_282_T  * global_acpi_gbl_FADT[NUM_STACKS];    
typedef  struct acpi_table_header   _GLOBAL_283_T; extern  _GLOBAL_283_T  * global_acpi_gbl_DSDT[NUM_STACKS];    
typedef  struct facs_descriptor   _GLOBAL_284_T; extern  _GLOBAL_284_T  * global_acpi_gbl_FACS[NUM_STACKS];    
typedef  struct acpi_common_facs   _GLOBAL_285_T; extern  _GLOBAL_285_T  global_acpi_gbl_common_fACS[NUM_STACKS];    







typedef  u8  _GLOBAL_286_T; extern  _GLOBAL_286_T  global_acpi_gbl_root_table_type[NUM_STACKS];   
# 174 "linux-2.6.18/include/acpi/acglobal.h"
typedef  u8  _GLOBAL_287_T; extern  _GLOBAL_287_T  global_acpi_gbl_integer_bit_width[NUM_STACKS];   
typedef  u8  _GLOBAL_288_T; extern  _GLOBAL_288_T  global_acpi_gbl_integer_byte_width[NUM_STACKS];   
typedef  u8  _GLOBAL_289_T; extern  _GLOBAL_289_T  global_acpi_gbl_integer_nybble_width[NUM_STACKS];   




typedef  struct acpi_table_list   _GLOBAL_290_T; extern  _GLOBAL_290_T  _GLOBAL_0_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_1_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_2_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_3_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_4_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_5_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_6_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_7_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_8_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_9_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_10_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_11_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_12_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_13_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_14_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_15_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_16_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_17_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_18_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_19_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_20_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_21_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_22_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_23_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_24_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_25_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_26_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_27_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_28_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_29_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_30_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_31_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_32_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_33_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_34_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_35_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_36_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_37_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_38_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_39_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_40_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_41_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_42_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_43_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_44_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_45_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_46_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_47_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_48_acpi_gbl_table_lists_I [ 6 + 1  ] ; extern  _GLOBAL_290_T  _GLOBAL_49_acpi_gbl_table_lists_I [ 6 + 1  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_acpi_gbl_table_lists_I) *_GLOBAL_acpi_gbl_table_lists_27_A[NUM_STACKS];     
typedef  struct acpi_table_support   _GLOBAL_291_T; extern  _GLOBAL_291_T  _GLOBAL_0_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_1_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_2_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_3_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_4_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_5_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_6_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_7_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_8_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_9_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_10_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_11_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_12_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_13_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_14_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_15_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_16_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_17_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_18_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_19_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_20_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_21_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_22_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_23_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_24_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_25_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_26_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_27_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_28_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_29_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_30_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_31_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_32_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_33_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_34_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_35_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_36_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_37_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_38_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_39_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_40_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_41_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_42_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_43_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_44_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_45_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_46_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_47_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_48_acpi_gbl_table_data_I [ 6 + 1  ] ; extern  _GLOBAL_291_T  _GLOBAL_49_acpi_gbl_table_data_I [ 6 + 1  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_acpi_gbl_table_data_I) *_GLOBAL_acpi_gbl_table_data_28_A[NUM_STACKS];     
# 195 "linux-2.6.18/include/acpi/acglobal.h"
typedef  struct acpi_mutex_info   _GLOBAL_292_T; extern  _GLOBAL_292_T  _GLOBAL_0_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_1_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_2_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_3_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_4_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_5_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_6_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_7_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_8_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_9_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_10_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_11_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_12_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_13_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_14_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_15_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_16_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_17_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_18_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_19_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_20_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_21_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_22_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_23_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_24_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_25_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_26_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_27_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_28_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_29_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_30_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_31_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_32_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_33_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_34_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_35_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_36_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_37_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_38_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_39_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_40_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_41_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_42_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_43_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_44_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_45_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_46_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_47_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_48_acpi_gbl_mutex_info_I [ 7 + 1  ] ; extern  _GLOBAL_292_T  _GLOBAL_49_acpi_gbl_mutex_info_I [ 7 + 1  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_acpi_gbl_mutex_info_I) *_GLOBAL_acpi_gbl_mutex_info_29_A[NUM_STACKS];    




typedef  void  _GLOBAL_293_T; extern  _GLOBAL_293_T  * global_acpi_gbl_global_lock_semaphore[NUM_STACKS];    





typedef  spinlock_t  _GLOBAL_294_T; extern  _GLOBAL_294_T  global__acpi_gbl_gpe_lock[NUM_STACKS];   
typedef  spinlock_t  _GLOBAL_295_T; extern  _GLOBAL_295_T  global__acpi_gbl_hardware_lock[NUM_STACKS];   
# 227 "linux-2.6.18/include/acpi/acglobal.h"
typedef  kmem_cache_t  _GLOBAL_296_T; extern  _GLOBAL_296_T  * global_acpi_gbl_namespace_cache[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_297_T; extern  _GLOBAL_297_T  * global_acpi_gbl_state_cache[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_298_T; extern  _GLOBAL_298_T  * global_acpi_gbl_ps_node_cache[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_299_T; extern  _GLOBAL_299_T  * global_acpi_gbl_ps_node_ext_cache[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_300_T; extern  _GLOBAL_300_T  * global_acpi_gbl_operand_cache[NUM_STACKS];   



typedef  struct acpi_object_notify_handler   _GLOBAL_301_T; extern  _GLOBAL_301_T  global_acpi_gbl_device_notify[NUM_STACKS];    
typedef  struct acpi_object_notify_handler   _GLOBAL_302_T; extern  _GLOBAL_302_T  global_acpi_gbl_system_notify[NUM_STACKS];    
typedef  acpi_exception_handler  _GLOBAL_303_T; extern  _GLOBAL_303_T  global_acpi_gbl_exception_handler[NUM_STACKS];   
typedef  acpi_init_handler  _GLOBAL_304_T; extern  _GLOBAL_304_T  global_acpi_gbl_init_handler[NUM_STACKS];   
typedef  struct acpi_walk_state   _GLOBAL_305_T; extern  _GLOBAL_305_T  * global_acpi_gbl_breakpoint_walk[NUM_STACKS];    



typedef  u32  _GLOBAL_306_T; extern  _GLOBAL_306_T  global_acpi_gbl_global_lock_thread_count[NUM_STACKS];   
typedef  u32  _GLOBAL_307_T; extern  _GLOBAL_307_T  global_acpi_gbl_original_mode[NUM_STACKS];   
typedef  u32  _GLOBAL_308_T; extern  _GLOBAL_308_T  global_acpi_gbl_rsdp_original_location[NUM_STACKS];   
typedef  u32  _GLOBAL_309_T; extern  _GLOBAL_309_T  global_acpi_gbl_ns_lookup_count[NUM_STACKS];   
typedef  u32  _GLOBAL_310_T; extern  _GLOBAL_310_T  global_acpi_gbl_ps_find_count[NUM_STACKS];   
typedef  u32  _GLOBAL_311_T; extern  _GLOBAL_311_T  _GLOBAL_0_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_1_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_2_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_3_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_4_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_5_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_6_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_7_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_8_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_9_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_10_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_11_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_12_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_13_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_14_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_15_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_16_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_17_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_18_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_19_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_20_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_21_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_22_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_23_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_24_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_25_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_26_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_27_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_28_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_29_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_30_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_31_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_32_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_33_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_34_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_35_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_36_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_37_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_38_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_39_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_40_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_41_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_42_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_43_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_44_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_45_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_46_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_47_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_48_acpi_gbl_owner_id_mask_I [ 8 ] ; extern  _GLOBAL_311_T  _GLOBAL_49_acpi_gbl_owner_id_mask_I [ 8 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_acpi_gbl_owner_id_mask_I) *_GLOBAL_acpi_gbl_owner_id_mask_30_A[NUM_STACKS];  
typedef  u16  _GLOBAL_312_T; extern  _GLOBAL_312_T  global_acpi_gbl_pm1_enable_register_save[NUM_STACKS];   
typedef  u16  _GLOBAL_313_T; extern  _GLOBAL_313_T  global_acpi_gbl_global_lock_handle[NUM_STACKS];   
typedef  u8  _GLOBAL_314_T; extern  _GLOBAL_314_T  global_acpi_gbl_last_owner_id_index[NUM_STACKS];   
typedef  u8  _GLOBAL_315_T; extern  _GLOBAL_315_T  global_acpi_gbl_next_owner_id_offset[NUM_STACKS];   
typedef  u8  _GLOBAL_316_T; extern  _GLOBAL_316_T  global_acpi_gbl_debugger_configuration[NUM_STACKS];   
typedef  u8  _GLOBAL_317_T; extern  _GLOBAL_317_T  global_acpi_gbl_global_lock_acquired[NUM_STACKS];   
typedef  u8  _GLOBAL_318_T; extern  _GLOBAL_318_T  global_acpi_gbl_step_to_next_call[NUM_STACKS];   
typedef  u8  _GLOBAL_319_T; extern  _GLOBAL_319_T  global_acpi_gbl_acpi_hardware_present[NUM_STACKS];   
typedef  u8  _GLOBAL_320_T; extern  _GLOBAL_320_T  global_acpi_gbl_global_lock_present[NUM_STACKS];   
typedef  u8  _GLOBAL_321_T; extern  _GLOBAL_321_T  global_acpi_gbl_events_initialized[NUM_STACKS];   
typedef  u8  _GLOBAL_322_T; extern  _GLOBAL_322_T  global_acpi_gbl_system_awake_and_running[NUM_STACKS];   

typedef  u8  _GLOBAL_323_T; extern  _GLOBAL_323_T  global_acpi_gbl_shutdown[NUM_STACKS];   
typedef  u32  _GLOBAL_324_T; extern  _GLOBAL_324_T  global_acpi_gbl_startup_flags[NUM_STACKS];   
typedef  const u8   _GLOBAL_325_T; extern  _GLOBAL_325_T  _GLOBAL_0_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_1_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_2_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_3_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_4_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_5_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_6_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_7_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_8_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_9_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_10_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_11_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_12_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_13_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_14_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_15_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_16_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_17_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_18_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_19_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_20_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_21_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_22_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_23_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_24_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_25_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_26_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_27_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_28_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_29_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_30_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_31_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_32_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_33_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_34_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_35_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_36_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_37_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_38_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_39_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_40_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_41_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_42_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_43_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_44_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_45_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_46_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_47_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_48_acpi_gbl_decode_to8bit_I [ 8 ] ; extern  _GLOBAL_325_T  _GLOBAL_49_acpi_gbl_decode_to8bit_I [ 8 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_acpi_gbl_decode_to8bit_I) *_GLOBAL_acpi_gbl_decode_to8bit_31_A[NUM_STACKS];   
typedef  const char   _GLOBAL_326_T; extern  _GLOBAL_326_T  * _GLOBAL_0_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_1_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_2_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_3_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_4_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_5_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_6_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_7_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_8_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_9_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_10_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_11_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_12_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_13_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_14_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_15_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_16_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_17_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_18_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_19_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_20_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_21_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_22_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_23_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_24_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_25_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_26_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_27_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_28_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_29_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_30_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_31_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_32_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_33_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_34_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_35_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_36_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_37_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_38_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_39_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_40_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_41_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_42_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_43_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_44_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_45_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_46_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_47_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_48_acpi_gbl_sleep_state_names_I [ 6 ]  ; extern  _GLOBAL_326_T  * _GLOBAL_49_acpi_gbl_sleep_state_names_I [ 6 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_acpi_gbl_sleep_state_names_I) *_GLOBAL_acpi_gbl_sleep_state_names_32_A[NUM_STACKS];   
typedef  const char   _GLOBAL_327_T; extern  _GLOBAL_327_T  * _GLOBAL_0_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_1_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_2_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_3_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_4_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_5_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_6_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_7_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_8_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_9_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_10_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_11_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_12_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_13_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_14_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_15_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_16_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_17_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_18_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_19_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_20_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_21_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_22_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_23_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_24_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_25_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_26_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_27_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_28_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_29_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_30_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_31_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_32_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_33_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_34_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_35_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_36_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_37_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_38_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_39_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_40_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_41_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_42_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_43_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_44_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_45_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_46_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_47_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_48_acpi_gbl_highest_dstate_names_I [ 4 ]  ; extern  _GLOBAL_327_T  * _GLOBAL_49_acpi_gbl_highest_dstate_names_I [ 4 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_acpi_gbl_highest_dstate_names_I) *_GLOBAL_acpi_gbl_highest_dstate_names_33_A[NUM_STACKS];   
typedef  const struct acpi_opcode_info    _GLOBAL_328_T; extern  _GLOBAL_328_T  _GLOBAL_0_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_1_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_2_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_3_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_4_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_5_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_6_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_7_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_8_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_9_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_10_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_11_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_12_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_13_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_14_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_15_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_16_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_17_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_18_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_19_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_20_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_21_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_22_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_23_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_24_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_25_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_26_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_27_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_28_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_29_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_30_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_31_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_32_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_33_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_34_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_35_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_36_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_37_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_38_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_39_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_40_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_41_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_42_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_43_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_44_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_45_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_46_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_47_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_48_acpi_gbl_aml_op_info_I [ 0x7F ] ; extern  _GLOBAL_328_T  _GLOBAL_49_acpi_gbl_aml_op_info_I [ 0x7F ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_acpi_gbl_aml_op_info_I) *_GLOBAL_acpi_gbl_aml_op_info_34_A[NUM_STACKS];    
typedef  const char   _GLOBAL_329_T; extern  _GLOBAL_329_T  * _GLOBAL_0_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_1_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_2_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_3_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_4_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_5_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_6_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_7_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_8_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_9_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_10_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_11_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_12_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_13_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_14_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_15_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_16_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_17_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_18_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_19_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_20_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_21_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_22_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_23_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_24_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_25_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_26_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_27_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_28_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_29_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_30_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_31_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_32_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_33_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_34_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_35_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_36_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_37_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_38_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_39_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_40_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_41_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_42_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_43_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_44_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_45_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_46_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_47_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_48_acpi_gbl_region_types_I [ 8 ]  ; extern  _GLOBAL_329_T  * _GLOBAL_49_acpi_gbl_region_types_I [ 8 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_acpi_gbl_region_types_I) *_GLOBAL_acpi_gbl_region_types_35_A[NUM_STACKS];   
# 283 "linux-2.6.18/include/acpi/acglobal.h"
typedef  struct acpi_namespace_node   _GLOBAL_330_T; extern  _GLOBAL_330_T  global_acpi_gbl_root_node_struct[NUM_STACKS];    
typedef  struct acpi_namespace_node   _GLOBAL_331_T; extern  _GLOBAL_331_T  * global_acpi_gbl_root_node[NUM_STACKS];    
typedef  struct acpi_namespace_node   _GLOBAL_332_T; extern  _GLOBAL_332_T  * global_acpi_gbl_fadt_gpe_device[NUM_STACKS];    

typedef  const u8   _GLOBAL_333_T; extern  _GLOBAL_333_T  _GLOBAL_0_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_1_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_2_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_3_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_4_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_5_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_6_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_7_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_8_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_9_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_10_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_11_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_12_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_13_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_14_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_15_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_16_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_17_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_18_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_19_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_20_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_21_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_22_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_23_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_24_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_25_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_26_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_27_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_28_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_29_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_30_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_31_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_32_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_33_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_34_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_35_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_36_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_37_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_38_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_39_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_40_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_41_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_42_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_43_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_44_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_45_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_46_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_47_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_48_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; extern  _GLOBAL_333_T  _GLOBAL_49_acpi_gbl_ns_properties_I [ 0x1E + 1  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_acpi_gbl_ns_properties_I) *_GLOBAL_acpi_gbl_ns_properties_36_A[NUM_STACKS];    
typedef  const struct acpi_predefined_names    _GLOBAL_334_T; extern  _GLOBAL_334_T  _GLOBAL_0_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_1_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_2_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_3_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_4_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_5_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_6_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_7_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_8_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_9_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_10_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_11_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_12_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_13_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_14_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_15_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_16_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_17_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_18_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_19_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_20_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_21_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_22_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_23_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_24_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_25_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_26_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_27_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_28_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_29_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_30_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_31_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_32_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_33_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_34_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_35_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_36_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_37_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_38_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_39_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_40_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_41_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_42_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_43_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_44_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_45_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_46_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_47_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_48_acpi_gbl_pre_defined_names_I [ 10 ] ; extern  _GLOBAL_334_T  _GLOBAL_49_acpi_gbl_pre_defined_names_I [ 10 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_acpi_gbl_pre_defined_names_I) *_GLOBAL_acpi_gbl_pre_defined_names_37_A[NUM_STACKS];   
    
# 306 "linux-2.6.18/include/acpi/acglobal.h"
typedef  struct acpi_thread_state   _GLOBAL_335_T; extern  _GLOBAL_335_T  * global_acpi_gbl_current_walk_list[NUM_STACKS];    



typedef  u8  _GLOBAL_336_T; extern  _GLOBAL_336_T  global_acpi_gbl_cm_single_step[NUM_STACKS];   







typedef  struct acpi_bit_register_info   _GLOBAL_337_T; extern  _GLOBAL_337_T  _GLOBAL_0_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_1_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_2_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_3_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_4_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_5_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_6_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_7_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_8_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_9_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_10_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_11_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_12_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_13_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_14_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_15_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_16_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_17_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_18_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_19_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_20_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_21_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_22_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_23_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_24_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_25_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_26_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_27_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_28_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_29_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_30_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_31_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_32_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_33_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_34_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_35_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_36_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_37_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_38_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_39_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_40_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_41_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_42_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_43_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_44_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_45_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_46_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_47_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_48_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; extern  _GLOBAL_337_T  _GLOBAL_49_acpi_gbl_bit_register_info_I [ 0x15 + 1  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_acpi_gbl_bit_register_info_I) *_GLOBAL_acpi_gbl_bit_register_info_38_A[NUM_STACKS];  
      
typedef  u8  _GLOBAL_338_T; extern  _GLOBAL_338_T  global_acpi_gbl_sleep_type_a[NUM_STACKS];   
typedef  u8  _GLOBAL_339_T; extern  _GLOBAL_339_T  global_acpi_gbl_sleep_type_b[NUM_STACKS];   







typedef  struct acpi_fixed_event_info   _GLOBAL_340_T; extern  _GLOBAL_340_T  _GLOBAL_0_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_1_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_2_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_3_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_4_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_5_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_6_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_7_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_8_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_9_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_10_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_11_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_12_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_13_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_14_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_15_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_16_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_17_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_18_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_19_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_20_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_21_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_22_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_23_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_24_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_25_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_26_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_27_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_28_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_29_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_30_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_31_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_32_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_33_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_34_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_35_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_36_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_37_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_38_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_39_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_40_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_41_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_42_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_43_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_44_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_45_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_46_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_47_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_48_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; extern  _GLOBAL_340_T  _GLOBAL_49_acpi_gbl_fixed_event_info_I [ 4 + 1  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_acpi_gbl_fixed_event_info_I) *_GLOBAL_acpi_gbl_fixed_event_info_39_A[NUM_STACKS];  
      
typedef  struct acpi_fixed_event_handler   _GLOBAL_341_T; extern  _GLOBAL_341_T  _GLOBAL_0_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_1_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_2_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_3_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_4_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_5_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_6_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_7_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_8_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_9_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_10_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_11_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_12_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_13_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_14_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_15_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_16_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_17_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_18_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_19_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_20_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_21_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_22_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_23_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_24_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_25_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_26_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_27_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_28_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_29_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_30_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_31_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_32_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_33_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_34_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_35_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_36_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_37_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_38_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_39_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_40_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_41_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_42_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_43_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_44_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_45_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_46_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_47_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_48_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; extern  _GLOBAL_341_T  _GLOBAL_49_acpi_gbl_fixed_event_handlers_I [ 4 + 1  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_acpi_gbl_fixed_event_handlers_I) *_GLOBAL_acpi_gbl_fixed_event_handlers_40_A[NUM_STACKS];  
      
typedef  struct acpi_gpe_xrupt_info   _GLOBAL_342_T; extern  _GLOBAL_342_T  * global_acpi_gbl_gpe_xrupt_list_head[NUM_STACKS];    
typedef  struct acpi_gpe_block_info   _GLOBAL_343_T; extern  _GLOBAL_343_T  * _GLOBAL_0_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_1_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_2_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_3_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_4_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_5_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_6_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_7_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_8_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_9_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_10_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_11_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_12_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_13_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_14_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_15_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_16_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_17_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_18_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_19_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_20_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_21_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_22_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_23_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_24_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_25_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_26_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_27_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_28_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_29_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_30_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_31_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_32_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_33_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_34_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_35_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_36_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_37_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_38_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_39_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_40_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_41_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_42_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_43_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_44_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_45_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_46_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_47_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_48_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; extern  _GLOBAL_343_T  * _GLOBAL_49_acpi_gbl_gpe_fadt_blocks_I [ 2 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_acpi_gbl_gpe_fadt_blocks_I) *_GLOBAL_acpi_gbl_gpe_fadt_blocks_41_A[NUM_STACKS];  
    







typedef  u8  _GLOBAL_344_T; extern  _GLOBAL_344_T  global_acpi_gbl_db_output_flags[NUM_STACKS];   
# 66 "linux-2.6.18/include/acpi/acpi.h" 2
# 1 "linux-2.6.18/include/acpi/achware.h" 1
# 64 "linux-2.6.18/include/acpi/achware.h"
acpi_status acpi_hw_initialize(void);

acpi_status acpi_hw_set_mode(u32 mode);

u32 acpi_hw_get_mode(void);




struct acpi_bit_register_info *acpi_hw_get_bit_register_info(u32 register_id);

acpi_status
acpi_hw_register_read(u8 use_lock, u32 register_id, u32 * return_value);

acpi_status acpi_hw_register_write(u8 use_lock, u32 register_id, u32 value);

acpi_status
acpi_hw_low_level_read(u32 width,
         u32 * value, struct acpi_generic_address *reg);

acpi_status
acpi_hw_low_level_write(u32 width, u32 value, struct acpi_generic_address *reg);

acpi_status acpi_hw_clear_acpi_status(u32 flags);




acpi_status
acpi_hw_write_gpe_enable_reg(struct acpi_gpe_event_info *gpe_event_info);

acpi_status
acpi_hw_disable_gpe_block(struct acpi_gpe_xrupt_info *gpe_xrupt_info,
     struct acpi_gpe_block_info *gpe_block);

acpi_status acpi_hw_clear_gpe(struct acpi_gpe_event_info *gpe_event_info);

acpi_status
acpi_hw_clear_gpe_block(struct acpi_gpe_xrupt_info *gpe_xrupt_info,
   struct acpi_gpe_block_info *gpe_block);







acpi_status acpi_hw_disable_all_gpes(void);

acpi_status acpi_hw_enable_all_runtime_gpes(void);

acpi_status acpi_hw_enable_all_wakeup_gpes(void);

acpi_status
acpi_hw_enable_runtime_gpe_block(struct acpi_gpe_xrupt_info *gpe_xrupt_info,
     struct acpi_gpe_block_info *gpe_block);
# 67 "linux-2.6.18/include/acpi/acpi.h" 2
# 1 "linux-2.6.18/include/acpi/acutils.h" 1
# 47 "linux-2.6.18/include/acpi/acutils.h"
typedef  const u8   _GLOBAL_345_T; extern  _GLOBAL_345_T  _GLOBAL_0_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_1_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_2_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_3_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_4_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_5_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_6_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_7_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_8_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_9_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_10_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_11_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_12_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_13_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_14_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_15_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_16_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_17_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_18_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_19_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_20_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_21_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_22_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_23_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_24_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_25_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_26_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_27_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_28_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_29_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_30_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_31_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_32_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_33_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_34_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_35_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_36_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_37_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_38_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_39_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_40_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_41_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_42_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_43_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_44_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_45_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_46_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_47_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_48_acpi_gbl_resource_aml_sizes_I [ ] ; extern  _GLOBAL_345_T  _GLOBAL_49_acpi_gbl_resource_aml_sizes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_acpi_gbl_resource_aml_sizes_I) *_GLOBAL_acpi_gbl_resource_aml_sizes_42_A[NUM_STACKS];   
# 80 "linux-2.6.18/include/acpi/acutils.h"
typedef
acpi_status(*acpi_walk_aml_callback) (u8 * aml,
          u32 length,
          u32 offset,
          u8 resource_index, void **context);

typedef
acpi_status(*acpi_pkg_callback) (u8 object_type,
     union acpi_operand_object * source_object,
     union acpi_generic_state * state,
     void *context);

struct acpi_pkg_info {
 u8 *free_space;
 acpi_size length;
 u32 object_space;
 u32 num_packages;
};
# 113 "linux-2.6.18/include/acpi/acutils.h"
void acpi_ut_init_globals(void);







char *acpi_ut_get_type_name(acpi_object_type type);

char *acpi_ut_get_node_name(void *object);

char *acpi_ut_get_descriptor_name(void *object);

char *acpi_ut_get_object_type_name(union acpi_operand_object *obj_desc);

char *acpi_ut_get_region_name(u8 space_id);

char *acpi_ut_get_event_name(u32 event_id);

char acpi_ut_hex_to_ascii_char(acpi_integer integer, u32 position);

u8 acpi_ut_valid_object_type(acpi_object_type type);




acpi_status acpi_ut_hardware_initialize(void);

void acpi_ut_subsystem_shutdown(void);

acpi_status acpi_ut_validate_fadt(void);
# 207 "linux-2.6.18/include/acpi/acutils.h"
acpi_status
acpi_ut_build_simple_object(union acpi_operand_object *obj,
       union acpi_object *user_obj,
       u8 * data_space, u32 * buffer_space_used);

acpi_status
acpi_ut_build_package_object(union acpi_operand_object *obj,
        u8 * buffer, u32 * space_used);

acpi_status
acpi_ut_copy_iobject_to_eobject(union acpi_operand_object *obj,
    struct acpi_buffer *ret_buffer);

acpi_status
acpi_ut_copy_eobject_to_iobject(union acpi_object *obj,
    union acpi_operand_object **internal_obj);

acpi_status
acpi_ut_copy_isimple_to_isimple(union acpi_operand_object *source_obj,
    union acpi_operand_object *dest_obj);

acpi_status
acpi_ut_copy_iobject_to_iobject(union acpi_operand_object *source_desc,
    union acpi_operand_object **dest_desc,
    struct acpi_walk_state *walk_state);




acpi_status
acpi_ut_update_object_reference(union acpi_operand_object *object, u16 action);




void acpi_ut_init_stack_ptr_trace(void);

void acpi_ut_track_stack_ptr(void);

void
acpi_ut_trace(u32 line_number,
       const char *function_name, char *module_name, u32 component_id);

void
acpi_ut_trace_ptr(u32 line_number,
    const char *function_name,
    char *module_name, u32 component_id, void *pointer);

void
acpi_ut_trace_u32(u32 line_number,
    const char *function_name,
    char *module_name, u32 component_id, u32 integer);

void
acpi_ut_trace_str(u32 line_number,
    const char *function_name,
    char *module_name, u32 component_id, char *string);

void
acpi_ut_exit(u32 line_number,
      const char *function_name, char *module_name, u32 component_id);

void
acpi_ut_status_exit(u32 line_number,
      const char *function_name,
      char *module_name, u32 component_id, acpi_status status);

void
acpi_ut_value_exit(u32 line_number,
     const char *function_name,
     char *module_name, u32 component_id, acpi_integer value);

void
acpi_ut_ptr_exit(u32 line_number,
   const char *function_name,
   char *module_name, u32 component_id, u8 * ptr);

void acpi_ut_dump_buffer(u8 * buffer, u32 count, u32 display, u32 component_id);

void acpi_ut_dump_buffer2(u8 * buffer, u32 count, u32 display);

void acpi_ut_report_error(char *module_name, u32 line_number);

void acpi_ut_report_info(char *module_name, u32 line_number);

void acpi_ut_report_warning(char *module_name, u32 line_number);



void
acpi_ut_debug_print(u32 requested_debug_level,
      u32 line_number,
      const char *function_name,
      char *module_name,
      u32 component_id, char *format, ...) __attribute__ ((__format__ (__printf__, 6, 6 +1))) ;

void
acpi_ut_debug_print_raw(u32 requested_debug_level,
   u32 line_number,
   const char *function_name,
   char *module_name,
   u32 component_id,
   char *format, ...) __attribute__ ((__format__ (__printf__, 6, 6 +1))) ;

void
acpi_ut_error(char *module_name,
       u32 line_number, char *format, ...) __attribute__ ((__format__ (__printf__, 3, 3 +1))) ;

void
acpi_ut_exception(char *module_name,
    u32 line_number,
    acpi_status status, char *format, ...) __attribute__ ((__format__ (__printf__, 4, 4 +1))) ;

void
acpi_ut_warning(char *module_name,
  u32 line_number, char *format, ...) __attribute__ ((__format__ (__printf__, 3, 3 +1))) ;

void
acpi_ut_info(char *module_name,
      u32 line_number, char *format, ...) __attribute__ ((__format__ (__printf__, 3, 3 +1))) ;




void acpi_ut_add_reference(union acpi_operand_object *object);

void acpi_ut_remove_reference(union acpi_operand_object *object);

void acpi_ut_delete_internal_package_object(union acpi_operand_object *object);

void acpi_ut_delete_internal_simple_object(union acpi_operand_object *object);

void acpi_ut_delete_internal_object_list(union acpi_operand_object **obj_list);




acpi_status acpi_ut_osi_implementation(struct acpi_walk_state *walk_state);

acpi_status
acpi_ut_evaluate_object(struct acpi_namespace_node *prefix_node,
   char *path,
   u32 expected_return_btypes,
   union acpi_operand_object **return_desc);

acpi_status
acpi_ut_evaluate_numeric_object(char *object_name,
    struct acpi_namespace_node *device_node,
    acpi_integer * address);

acpi_status
acpi_ut_execute_HID(struct acpi_namespace_node *device_node,
      struct acpi_device_id *hid);

acpi_status
acpi_ut_execute_CID(struct acpi_namespace_node *device_node,
      struct acpi_compatible_id_list **return_cid_list);

acpi_status
acpi_ut_execute_STA(struct acpi_namespace_node *device_node,
      u32 * status_flags);

acpi_status
acpi_ut_execute_UID(struct acpi_namespace_node *device_node,
      struct acpi_device_id *uid);

acpi_status
acpi_ut_execute_sxds(struct acpi_namespace_node *device_node, u8 * highest);




union acpi_operand_object *acpi_ut_create_internal_object_dbg(char *module_name,
             u32 line_number,
             u32 component_id,
             acpi_object_type
             type);

void *acpi_ut_allocate_object_desc_dbg(char *module_name,
           u32 line_number, u32 component_id);




void acpi_ut_delete_object_desc(union acpi_operand_object *object);

u8 acpi_ut_valid_internal_object(void *object);

union acpi_operand_object *acpi_ut_create_buffer_object(acpi_size buffer_size);

union acpi_operand_object *acpi_ut_create_string_object(acpi_size string_size);

acpi_status
acpi_ut_get_object_size(union acpi_operand_object *obj, acpi_size * obj_length);




void
acpi_ut_push_generic_state(union acpi_generic_state **list_head,
      union acpi_generic_state *state);

union acpi_generic_state *acpi_ut_pop_generic_state(union acpi_generic_state
          **list_head);

union acpi_generic_state *acpi_ut_create_generic_state(void);

struct acpi_thread_state *acpi_ut_create_thread_state(void);

union acpi_generic_state *acpi_ut_create_update_state(union acpi_operand_object
            *object, u16 action);

union acpi_generic_state *acpi_ut_create_pkg_state(void *internal_object,
         void *external_object,
         u16 index);

acpi_status
acpi_ut_create_update_state_and_push(union acpi_operand_object *object,
         u16 action,
         union acpi_generic_state **state_list);
# 436 "linux-2.6.18/include/acpi/acutils.h"
union acpi_generic_state *acpi_ut_create_control_state(void);

void acpi_ut_delete_generic_state(union acpi_generic_state *state);




acpi_status
acpi_ut_divide(acpi_integer in_dividend,
        acpi_integer in_divisor,
        acpi_integer * out_quotient, acpi_integer * out_remainder);

acpi_status
acpi_ut_short_divide(acpi_integer in_dividend,
       u32 divisor,
       acpi_integer * out_quotient, u32 * out_remainder);




u8 acpi_ut_is_aml_table(struct acpi_table_header *table);

acpi_status acpi_ut_allocate_owner_id(acpi_owner_id * owner_id);

void acpi_ut_release_owner_id(acpi_owner_id * owner_id);

acpi_status
acpi_ut_walk_package_tree(union acpi_operand_object *source_object,
     void *target_object,
     acpi_pkg_callback walk_callback, void *context);

void acpi_ut_strupr(char *src_string);

void acpi_ut_print_string(char *string, u8 max_length);

u8 acpi_ut_valid_acpi_name(u32 name);

acpi_name acpi_ut_repair_name(acpi_name name);

u8 acpi_ut_valid_acpi_char(char character, acpi_native_uint position);

acpi_status
acpi_ut_strtoul64(char *string, u32 base, acpi_integer * ret_integer);





u32 acpi_ut_dword_byte_swap(u32 value);

void acpi_ut_set_integer_width(u8 revision);
# 498 "linux-2.6.18/include/acpi/acutils.h"
acpi_status
acpi_ut_walk_aml_resources(u8 * aml,
      acpi_size aml_length,
      acpi_walk_aml_callback user_function, void **context);

acpi_status acpi_ut_validate_resource(void *aml, u8 * return_index);

u32 acpi_ut_get_descriptor_length(void *aml);

u16 acpi_ut_get_resource_length(void *aml);

u8 acpi_ut_get_resource_header_length(void *aml);

u8 acpi_ut_get_resource_type(void *aml);

acpi_status
acpi_ut_get_resource_end_tag(union acpi_operand_object *obj_desc,
        u8 ** end_tag);




acpi_status acpi_ut_mutex_initialize(void);

void acpi_ut_mutex_terminate(void);

acpi_status acpi_ut_acquire_mutex(acpi_mutex_handle mutex_id);

acpi_status acpi_ut_release_mutex(acpi_mutex_handle mutex_id);




acpi_status acpi_ut_create_caches(void);

acpi_status acpi_ut_delete_caches(void);

acpi_status acpi_ut_validate_buffer(struct acpi_buffer *buffer);

acpi_status
acpi_ut_initialize_buffer(struct acpi_buffer *buffer,
     acpi_size required_length);

void *acpi_ut_allocate(acpi_size size, u32 component, char *module, u32 line);

void *acpi_ut_allocate_zeroed(acpi_size size,
         u32 component, char *module, u32 line);
# 68 "linux-2.6.18/include/acpi/acpi.h" 2
# 38 "linux-2.6.18/include/linux/acpi.h" 2
# 1 "linux-2.6.18/include/acpi/acpi_bus.h" 1
# 29 "linux-2.6.18/include/acpi/acpi_bus.h"
# 1 "linux-2.6.18/include/linux/device.h" 1
# 14 "linux-2.6.18/include/linux/device.h"
# 1 "linux-2.6.18/include/linux/ioport.h" 1
# 17 "linux-2.6.18/include/linux/ioport.h"
struct resource {
 resource_size_t start;
 resource_size_t end;
 const char *name;
 unsigned long flags;
 struct resource *parent, *sibling, *child;
};

struct resource_list {
 struct resource_list *next;
 struct resource *res;
 struct pci_dev *dev;
};
# 94 "linux-2.6.18/include/linux/ioport.h"
typedef  struct resource   _GLOBAL_346_T; extern  _GLOBAL_346_T  global_ioport_resource[NUM_STACKS];    
typedef  struct resource   _GLOBAL_347_T; extern  _GLOBAL_347_T  global_iomem_resource[NUM_STACKS];    

extern int request_resource(struct resource *root, struct resource *new);
extern struct resource * ____request_resource(struct resource *root, struct resource *new);
extern int release_resource(struct resource *new);
extern int insert_resource(struct resource *parent, struct resource *new);
extern int allocate_resource(struct resource *root, struct resource *new,
        resource_size_t size, resource_size_t min,
        resource_size_t max, resource_size_t align,
        void (*alignf)(void *, struct resource *,
         resource_size_t, resource_size_t),
        void *alignf_data);
int adjust_resource(struct resource *res, resource_size_t start,
      resource_size_t size);


extern int find_next_system_ram(struct resource *res);






extern struct resource * __request_region(struct resource *,
     resource_size_t start,
     resource_size_t n, const char *name);






extern int __check_region(struct resource *, resource_size_t, resource_size_t);
extern void __release_region(struct resource *, resource_size_t,
    resource_size_t);

static inline  __attribute__((always_inline)) int  __attribute__((deprecated)) check_region(resource_size_t s,
      resource_size_t n)
{
 return __check_region(&global_ioport_resource[get_stack_id()], s, n);
}
# 15 "linux-2.6.18/include/linux/device.h" 2

# 1 "linux-2.6.18/include/linux/klist.h" 1
# 20 "linux-2.6.18/include/linux/klist.h"
struct klist_node;
struct klist {
 spinlock_t k_lock;
 struct list_head k_list;
 void (*get)(struct klist_node *);
 void (*put)(struct klist_node *);
};


extern void klist_init(struct klist * k, void (*get)(struct klist_node *),
         void (*put)(struct klist_node *));

struct klist_node {
 struct klist * n_klist;
 struct list_head n_node;
 struct kref n_ref;
 struct completion n_removed;
};

extern void klist_add_tail(struct klist_node * n, struct klist * k);
extern void klist_add_head(struct klist_node * n, struct klist * k);

extern void klist_del(struct klist_node * n);
extern void klist_remove(struct klist_node * n);

extern int klist_node_attached(struct klist_node * n);


struct klist_iter {
 struct klist * i_klist;
 struct list_head * i_head;
 struct klist_node * i_cur;
};


extern void klist_iter_init(struct klist * k, struct klist_iter * i);
extern void klist_iter_init_node(struct klist * k, struct klist_iter * i,
     struct klist_node * n);
extern void klist_iter_exit(struct klist_iter * i);
extern struct klist_node * klist_next(struct klist_iter * i);
# 17 "linux-2.6.18/include/linux/device.h" 2
# 30 "linux-2.6.18/include/linux/device.h"
struct device;
struct device_driver;
struct class;
struct class_device;

struct bus_type {
 const char * name;

 struct subsystem subsys;
 struct kset drivers;
 struct kset devices;
 struct klist klist_devices;
 struct klist klist_drivers;

 struct bus_attribute * bus_attrs;
 struct device_attribute * dev_attrs;
 struct driver_attribute * drv_attrs;

 int (*match)(struct device * dev, struct device_driver * drv);
 int (*uevent)(struct device *dev, char **envp,
      int num_envp, char *buffer, int buffer_size);
 int (*probe)(struct device * dev);
 int (*remove)(struct device * dev);
 void (*shutdown)(struct device * dev);
 int (*suspend)(struct device * dev, pm_message_t state);
 int (*resume)(struct device * dev);
};

extern int bus_register(struct bus_type * bus);
extern void bus_unregister(struct bus_type * bus);

extern void bus_rescan_devices(struct bus_type * bus);



int bus_for_each_dev(struct bus_type * bus, struct device * start, void * data,
       int (*fn)(struct device *, void *));
struct device * bus_find_device(struct bus_type *bus, struct device *start,
    void *data, int (*match)(struct device *, void *));

int bus_for_each_drv(struct bus_type * bus, struct device_driver * start,
       void * data, int (*fn)(struct device_driver *, void *));




struct bus_attribute {
 struct attribute attr;
 ssize_t (*show)(struct bus_type *, char * buf);
 ssize_t (*store)(struct bus_type *, const char * buf, size_t count);
};




extern int bus_create_file(struct bus_type *, struct bus_attribute *);
extern void bus_remove_file(struct bus_type *, struct bus_attribute *);

struct device_driver {
 const char * name;
 struct bus_type * bus;

 struct completion unloaded;
 struct kobject kobj;
 struct klist klist_devices;
 struct klist_node knode_bus;

 struct module * owner;

 int (*probe) (struct device * dev);
 int (*remove) (struct device * dev);
 void (*shutdown) (struct device * dev);
 int (*suspend) (struct device * dev, pm_message_t state);
 int (*resume) (struct device * dev);
};


extern int driver_register(struct device_driver * drv);
extern void driver_unregister(struct device_driver * drv);

extern struct device_driver * get_driver(struct device_driver * drv);
extern void put_driver(struct device_driver * drv);
extern struct device_driver *driver_find(const char *name, struct bus_type *bus);




struct driver_attribute {
 struct attribute attr;
 ssize_t (*show)(struct device_driver *, char * buf);
 ssize_t (*store)(struct device_driver *, const char * buf, size_t count);
};




extern int driver_create_file(struct device_driver *, struct driver_attribute *);
extern void driver_remove_file(struct device_driver *, struct driver_attribute *);

extern int driver_for_each_device(struct device_driver * drv, struct device * start,
      void * data, int (*fn)(struct device *, void *));
struct device * driver_find_device(struct device_driver *drv,
       struct device *start, void *data,
       int (*match)(struct device *, void *));





struct class {
 const char * name;
 struct module * owner;

 struct subsystem subsys;
 struct list_head children;
 struct list_head devices;
 struct list_head interfaces;
 struct semaphore sem;

 struct class_attribute * class_attrs;
 struct class_device_attribute * class_dev_attrs;

 int (*uevent)(struct class_device *dev, char **envp,
      int num_envp, char *buffer, int buffer_size);

 void (*release)(struct class_device *dev);
 void (*class_release)(struct class *class);
};

extern int class_register(struct class *);
extern void class_unregister(struct class *);


struct class_attribute {
 struct attribute attr;
 ssize_t (*show)(struct class *, char * buf);
 ssize_t (*store)(struct class *, const char * buf, size_t count);
};




extern int class_create_file(struct class *, const struct class_attribute *);
extern void class_remove_file(struct class *, const struct class_attribute *);

struct class_device_attribute {
 struct attribute attr;
 ssize_t (*show)(struct class_device *, char * buf);
 ssize_t (*store)(struct class_device *, const char * buf, size_t count);
};





extern int class_device_create_file(struct class_device *,
        const struct class_device_attribute *);
# 213 "linux-2.6.18/include/linux/device.h"
struct class_device {
 struct list_head node;

 struct kobject kobj;
 struct class * class;
 dev_t devt;
 struct class_device_attribute *devt_attr;
 struct class_device_attribute uevent_attr;
 struct device * dev;
 void * class_data;
 struct class_device *parent;
 struct attribute_group ** groups;

 void (*release)(struct class_device *dev);
 int (*uevent)(struct class_device *dev, char **envp,
      int num_envp, char *buffer, int buffer_size);
 char class_id[20];
};

static inline  __attribute__((always_inline)) void *
class_get_devdata (struct class_device *dev)
{
 return dev->class_data;
}

static inline  __attribute__((always_inline)) void
class_set_devdata (struct class_device *dev, void *data)
{
 dev->class_data = data;
}


extern int class_device_register(struct class_device *);
extern void class_device_unregister(struct class_device *);
extern void class_device_initialize(struct class_device *);
extern int class_device_add(struct class_device *);
extern void class_device_del(struct class_device *);

extern int class_device_rename(struct class_device *, char *);

extern struct class_device * class_device_get(struct class_device *);
extern void class_device_put(struct class_device *);

extern void class_device_remove_file(struct class_device *,
         const struct class_device_attribute *);
extern int class_device_create_bin_file(struct class_device *,
     struct bin_attribute *);
extern void class_device_remove_bin_file(struct class_device *,
      struct bin_attribute *);

struct class_interface {
 struct list_head node;
 struct class *class;

 int (*add) (struct class_device *, struct class_interface *);
 void (*remove) (struct class_device *, struct class_interface *);
};

extern int class_interface_register(struct class_interface *);
extern void class_interface_unregister(struct class_interface *);

extern struct class *class_create(struct module *owner, char *name);
extern void class_destroy(struct class *cls);
extern struct class_device *class_device_create(struct class *cls,
      struct class_device *parent,
      dev_t devt,
      struct device *device,
      char *fmt, ...)
     __attribute__((format(printf,5,6))) ;
extern void class_device_destroy(struct class *cls, dev_t devt);



struct device_attribute {
 struct attribute attr;
 ssize_t (*show)(struct device *dev, struct device_attribute *attr,
   char *buf);
 ssize_t (*store)(struct device *dev, struct device_attribute *attr,
    const char *buf, size_t count);
};




extern int device_create_file(struct device *device, struct device_attribute * entry);
extern void device_remove_file(struct device * dev, struct device_attribute * attr);
struct device {
 struct klist klist_children;
 struct klist_node knode_parent;
 struct klist_node knode_driver;
 struct klist_node knode_bus;
 struct device * parent;

 struct kobject kobj;
 char bus_id[20];
 struct device_attribute uevent_attr;
 struct device_attribute *devt_attr;

 struct semaphore sem;



 struct bus_type * bus;
 struct device_driver *driver;

 void *driver_data;
 void *platform_data;

 void *firmware_data;

 struct dev_pm_info power;

 u64 *dma_mask;
 u64 coherent_dma_mask;





 struct list_head dma_pools;

 struct dma_coherent_mem *dma_mem;



 struct list_head node;
 struct class *class;
 dev_t devt;

 void (*release)(struct device * dev);
};

static inline  __attribute__((always_inline)) void *
dev_get_drvdata (struct device *dev)
{
 return dev->driver_data;
}

static inline  __attribute__((always_inline)) void
dev_set_drvdata (struct device *dev, void *data)
{
 dev->driver_data = data;
}

static inline  __attribute__((always_inline)) int device_is_registered(struct device *dev)
{
 return klist_node_attached(&dev->knode_bus);
}




extern int device_register(struct device * dev);
extern void device_unregister(struct device * dev);
extern void device_initialize(struct device * dev);
extern int device_add(struct device * dev);
extern void device_del(struct device * dev);
extern int device_for_each_child(struct device *, void *,
       int (*fn)(struct device *, void *));





extern void device_bind_driver(struct device * dev);
extern void device_release_driver(struct device * dev);
extern int device_attach(struct device * dev);
extern void driver_attach(struct device_driver * drv);
extern void device_reprobe(struct device *dev);




extern struct device *device_create(struct class *cls, struct device *parent,
        dev_t devt, char *fmt, ...)
        __attribute__((format(printf,4,5))) ;
extern void device_destroy(struct class *cls, dev_t devt);







typedef  int   ( *_GLOBAL_349_T  )  ( struct device   * dev   ) ; extern  _GLOBAL_349_T global_platform_notify[NUM_STACKS];      

typedef  int   ( *_GLOBAL_351_T  )  ( struct device   * dev   ) ; extern  _GLOBAL_351_T global_platform_notify_remove[NUM_STACKS];      






extern struct device * get_device(struct device * dev);
extern void put_device(struct device * dev);



extern void device_shutdown(void);



extern int firmware_register(struct subsystem *);
extern void firmware_unregister(struct subsystem *);


extern const char *dev_driver_string(struct device *dev);
# 30 "linux-2.6.18/include/acpi/acpi_bus.h" 2







struct acpi_handle_list {
 u32 count;
 acpi_handle handles[10];
};


acpi_status
acpi_extract_package(union acpi_object *package,
       struct acpi_buffer *format, struct acpi_buffer *buffer);
acpi_status
acpi_evaluate_integer(acpi_handle handle,
        acpi_string pathname,
        struct acpi_object_list *arguments, unsigned long *data);
acpi_status
acpi_evaluate_reference(acpi_handle handle,
   acpi_string pathname,
   struct acpi_object_list *arguments,
   struct acpi_handle_list *list);






typedef  struct proc_dir_entry   _GLOBAL_352_T; extern  _GLOBAL_352_T  * global_acpi_root_dir[NUM_STACKS];    
typedef  struct fadt_descriptor   _GLOBAL_353_T; extern  _GLOBAL_353_T  global_acpi_fadt[NUM_STACKS];    

enum acpi_bus_removal_type {
 ACPI_BUS_REMOVAL_NORMAL = 0,
 ACPI_BUS_REMOVAL_EJECT,
 ACPI_BUS_REMOVAL_SUPRISE,
 ACPI_BUS_REMOVAL_TYPE_COUNT
};

enum acpi_bus_device_type {
 ACPI_BUS_TYPE_DEVICE = 0,
 ACPI_BUS_TYPE_POWER,
 ACPI_BUS_TYPE_PROCESSOR,
 ACPI_BUS_TYPE_THERMAL,
 ACPI_BUS_TYPE_SYSTEM,
 ACPI_BUS_TYPE_POWER_BUTTON,
 ACPI_BUS_TYPE_SLEEP_BUTTON,
 ACPI_BUS_DEVICE_TYPE_COUNT
};

struct acpi_driver;
struct acpi_device;






typedef int (*acpi_op_add) (struct acpi_device * device);
typedef int (*acpi_op_remove) (struct acpi_device * device, int type);
typedef int (*acpi_op_lock) (struct acpi_device * device, int type);
typedef int (*acpi_op_start) (struct acpi_device * device);
typedef int (*acpi_op_stop) (struct acpi_device * device, int type);
typedef int (*acpi_op_suspend) (struct acpi_device * device, int state);
typedef int (*acpi_op_resume) (struct acpi_device * device, int state);
typedef int (*acpi_op_scan) (struct acpi_device * device);
typedef int (*acpi_op_bind) (struct acpi_device * device);
typedef int (*acpi_op_unbind) (struct acpi_device * device);
typedef int (*acpi_op_match) (struct acpi_device * device,
         struct acpi_driver * driver);

struct acpi_bus_ops {
 u32 acpi_op_add:1;
 u32 acpi_op_remove:1;
 u32 acpi_op_lock:1;
 u32 acpi_op_start:1;
 u32 acpi_op_stop:1;
 u32 acpi_op_suspend:1;
 u32 acpi_op_resume:1;
 u32 acpi_op_scan:1;
 u32 acpi_op_bind:1;
 u32 acpi_op_unbind:1;
 u32 acpi_op_match:1;
 u32 reserved:21;
};

struct acpi_device_ops {
 acpi_op_add add;
 acpi_op_remove remove;
 acpi_op_lock lock;
 acpi_op_start start;
 acpi_op_stop stop;
 acpi_op_suspend suspend;
 acpi_op_resume resume;
 acpi_op_scan scan;
 acpi_op_bind bind;
 acpi_op_unbind unbind;
 acpi_op_match match;
};

struct acpi_driver {
 struct list_head node;
 char name[80];
 char class[80];
 atomic_t references;
 char *ids;
 struct acpi_device_ops ops;
};
# 148 "linux-2.6.18/include/acpi/acpi_bus.h"
struct acpi_device_status {
 u32 present:1;
 u32 enabled:1;
 u32 show_in_ui:1;
 u32 functional:1;
 u32 battery_present:1;
 u32 reserved:27;
};



struct acpi_device_flags {
 u32 dynamic_status:1;
 u32 hardware_id:1;
 u32 compatible_ids:1;
 u32 bus_address:1;
 u32 unique_id:1;
 u32 removable:1;
 u32 ejectable:1;
 u32 lockable:1;
 u32 suprise_removal_ok:1;
 u32 power_manageable:1;
 u32 performance_manageable:1;
 u32 wake_capable:1;
 u32 force_power_state:1;
 u32 reserved:19;
};



struct acpi_device_dir {
 struct proc_dir_entry *entry;
};





typedef char acpi_bus_id[5];
typedef unsigned long acpi_bus_address;
typedef char acpi_hardware_id[9];
typedef char acpi_unique_id[9];
typedef char acpi_device_name[40];
typedef char acpi_device_class[20];

struct acpi_device_pnp {
 acpi_bus_id bus_id;
 acpi_bus_address bus_address;
 acpi_hardware_id hardware_id;
 struct acpi_compatible_id_list *cid_list;
 acpi_unique_id unique_id;
 acpi_device_name device_name;
 acpi_device_class device_class;
};
# 212 "linux-2.6.18/include/acpi/acpi_bus.h"
struct acpi_device_power_flags {
 u32 explicit_get:1;
 u32 power_resources:1;
 u32 inrush_current:1;
 u32 power_removed:1;
 u32 reserved:28;
};

struct acpi_device_power_state {
 struct {
  u8 valid:1;
  u8 explicit_set:1;
  u8 reserved:6;
 } flags;
 int power;
 int latency;
 struct acpi_handle_list resources;
};

struct acpi_device_power {
 int state;
 struct acpi_device_power_flags flags;
 struct acpi_device_power_state states[4];
};



struct acpi_device_perf_flags {
 u8 reserved:8;
};

struct acpi_device_perf_state {
 struct {
  u8 valid:1;
  u8 reserved:7;
 } flags;
 u8 power;
 u8 performance;
 int latency;
};

struct acpi_device_perf {
 int state;
 struct acpi_device_perf_flags flags;
 int state_count;
 struct acpi_device_perf_state *states;
};


struct acpi_device_wakeup_flags {
 u8 valid:1;
 u8 run_wake:1;
};

struct acpi_device_wakeup_state {
 u8 enabled:1;
 u8 active:1;
};

struct acpi_device_wakeup {
 acpi_handle gpe_device;
 acpi_integer gpe_number;
 acpi_integer sleep_state;
 struct acpi_handle_list resources;
 struct acpi_device_wakeup_state state;
 struct acpi_device_wakeup_flags flags;
};



struct acpi_device {
 acpi_handle handle;
 struct acpi_device *parent;
 struct list_head children;
 struct list_head node;
 struct list_head wakeup_list;
 struct list_head g_list;
 struct acpi_device_status status;
 struct acpi_device_flags flags;
 struct acpi_device_pnp pnp;
 struct acpi_device_power power;
 struct acpi_device_wakeup wakeup;
 struct acpi_device_perf performance;
 struct acpi_device_dir dir;
 struct acpi_device_ops ops;
 struct acpi_driver *driver;
 void *driver_data;
 struct kobject kobj;
 struct device dev;
};
# 310 "linux-2.6.18/include/acpi/acpi_bus.h"
struct acpi_bus_event {
 struct list_head node;
 acpi_device_class device_class;
 acpi_bus_id bus_id;
 u32 type;
 u32 data;
};

typedef  struct subsystem   _GLOBAL_354_T; extern  _GLOBAL_354_T  global_acpi_subsys[NUM_STACKS];    





int acpi_bus_get_device(acpi_handle handle, struct acpi_device **device);
void acpi_bus_data_handler(acpi_handle handle, u32 function, void *context);
int acpi_bus_get_status(struct acpi_device *device);
int acpi_bus_get_power(acpi_handle handle, int *state);
int acpi_bus_set_power(acpi_handle handle, int state);
int acpi_bus_generate_event(struct acpi_device *device, u8 type, int data);
int acpi_bus_receive_event(struct acpi_bus_event *event);
int acpi_bus_register_driver(struct acpi_driver *driver);
void acpi_bus_unregister_driver(struct acpi_driver *driver);
int acpi_bus_add(struct acpi_device **child, struct acpi_device *parent,
   acpi_handle handle, int type);
int acpi_bus_trim(struct acpi_device *start, int rmdevice);
int acpi_bus_start(struct acpi_device *device);
acpi_status acpi_bus_get_ejd(acpi_handle handle, acpi_handle *ejd);
int acpi_match_ids(struct acpi_device *device, char *ids);
int acpi_create_dir(struct acpi_device *);
void acpi_remove_dir(struct acpi_device *);





struct acpi_bus_type {
 struct list_head list;
 struct bus_type *bus;

 int (*find_device) (struct device *, acpi_handle *);

 int (*find_bridge) (struct device *, acpi_handle *);
};
int register_acpi_bus_type(struct acpi_bus_type *);
int unregister_acpi_bus_type(struct acpi_bus_type *);
struct device *acpi_get_physical_device(acpi_handle);

acpi_handle acpi_get_child(acpi_handle, acpi_integer);
acpi_handle acpi_get_pci_rootbridge_handle(unsigned int, unsigned int);
# 39 "linux-2.6.18/include/linux/acpi.h" 2
# 1 "linux-2.6.18/include/acpi/acpi_drivers.h" 1
# 29 "linux-2.6.18/include/acpi/acpi_drivers.h"
# 1 "linux-2.6.18/include/linux/acpi.h" 1
# 30 "linux-2.6.18/include/acpi/acpi_drivers.h" 2
# 54 "linux-2.6.18/include/acpi/acpi_drivers.h"
int acpi_irq_penalty_init(void);
int acpi_pci_link_allocate_irq(acpi_handle handle, int index, int *triggering,
          int *polarity, char **name);
int acpi_pci_link_free_irq(acpi_handle handle);



int acpi_pci_irq_add_prt(acpi_handle handle, int segment, int bus);
void acpi_pci_irq_del_prt(int segment, int bus);



struct pci_bus;

acpi_status acpi_get_pci_id(acpi_handle handle, struct acpi_pci_id *id);
int acpi_pci_bind(struct acpi_device *device);
int acpi_pci_unbind(struct acpi_device *device);
int acpi_pci_bind_root(struct acpi_device *device, struct acpi_pci_id *id,
         struct pci_bus *bus);



struct pci_bus *pci_acpi_scan_root(struct acpi_device *device, int domain,
       int bus);






int acpi_enable_wakeup_device_power(struct acpi_device *dev);
int acpi_disable_wakeup_device_power(struct acpi_device *dev);
int acpi_power_get_inferred_state(struct acpi_device *device);
int acpi_power_transition(struct acpi_device *device, int state);






int acpi_ec_ecdt_probe(void);
# 105 "linux-2.6.18/include/acpi/acpi_drivers.h"
int acpi_processor_set_thermal_limit(acpi_handle handle, int type);





typedef  int  _GLOBAL_355_T; extern  _GLOBAL_355_T  global_acpi_specific_hotkey_enabled[NUM_STACKS];   
# 40 "linux-2.6.18/include/linux/acpi.h" 2
# 1 "linux-2.6.18/include/acpi/acpi_numa.h" 1
# 41 "linux-2.6.18/include/linux/acpi.h" 2





enum acpi_irq_model_id {
 ACPI_IRQ_MODEL_PIC = 0,
 ACPI_IRQ_MODEL_IOAPIC,
 ACPI_IRQ_MODEL_IOSAPIC,
 ACPI_IRQ_MODEL_COUNT
};

typedef  enum acpi_irq_model_id   _GLOBAL_356_T; extern  _GLOBAL_356_T  global_acpi_irq_model[NUM_STACKS];    




struct acpi_table_rsdp {
 char signature[8];
 u8 checksum;
 char oem_id[6];
 u8 revision;
 u32 rsdt_address;
} __attribute__ ((packed)) ;

struct acpi20_table_rsdp {
 char signature[8];
 u8 checksum;
 char oem_id[6];
 u8 revision;
 u32 rsdt_address;
 u32 length;
 u64 xsdt_address;
 u8 ext_checksum;
 u8 reserved[3];
} __attribute__ ((packed)) ;

typedef struct {
 u8 type;
 u8 length;
}  __attribute__ ((packed)) acpi_table_entry_header;



struct acpi_table_rsdt {
 struct acpi_table_header header;
 u32 entry[8];
} __attribute__ ((packed)) ;



struct acpi_table_xsdt {
 struct acpi_table_header header;
 u64 entry[1];
} __attribute__ ((packed)) ;



struct acpi_table_fadt {
 struct acpi_table_header header;
 u32 facs_addr;
 u32 dsdt_addr;

} __attribute__ ((packed)) ;



struct acpi_table_madt {
 struct acpi_table_header header;
 u32 lapic_address;
 struct {
  u32 pcat_compat:1;
  u32 reserved:31;
 } flags;
} __attribute__ ((packed)) ;

enum acpi_madt_entry_id {
 ACPI_MADT_LAPIC = 0,
 ACPI_MADT_IOAPIC,
 ACPI_MADT_INT_SRC_OVR,
 ACPI_MADT_NMI_SRC,
 ACPI_MADT_LAPIC_NMI,
 ACPI_MADT_LAPIC_ADDR_OVR,
 ACPI_MADT_IOSAPIC,
 ACPI_MADT_LSAPIC,
 ACPI_MADT_PLAT_INT_SRC,
 ACPI_MADT_ENTRY_COUNT
};

typedef struct {
 u16 polarity:2;
 u16 trigger:2;
 u16 reserved:12;
}  __attribute__ ((packed)) acpi_interrupt_flags;

struct acpi_table_lapic {
 acpi_table_entry_header header;
 u8 acpi_id;
 u8 id;
 struct {
  u32 enabled:1;
  u32 reserved:31;
 } flags;
} __attribute__ ((packed)) ;

struct acpi_table_ioapic {
 acpi_table_entry_header header;
 u8 id;
 u8 reserved;
 u32 address;
 u32 global_irq_base;
} __attribute__ ((packed)) ;

struct acpi_table_int_src_ovr {
 acpi_table_entry_header header;
 u8 bus;
 u8 bus_irq;
 u32 global_irq;
 acpi_interrupt_flags flags;
} __attribute__ ((packed)) ;

struct acpi_table_nmi_src {
 acpi_table_entry_header header;
 acpi_interrupt_flags flags;
 u32 global_irq;
} __attribute__ ((packed)) ;

struct acpi_table_lapic_nmi {
 acpi_table_entry_header header;
 u8 acpi_id;
 acpi_interrupt_flags flags;
 u8 lint;
} __attribute__ ((packed)) ;

struct acpi_table_lapic_addr_ovr {
 acpi_table_entry_header header;
 u8 reserved[2];
 u64 address;
} __attribute__ ((packed)) ;

struct acpi_table_iosapic {
 acpi_table_entry_header header;
 u8 id;
 u8 reserved;
 u32 global_irq_base;
 u64 address;
} __attribute__ ((packed)) ;

struct acpi_table_lsapic {
 acpi_table_entry_header header;
 u8 acpi_id;
 u8 id;
 u8 eid;
 u8 reserved[3];
 struct {
  u32 enabled:1;
  u32 reserved:31;
 } flags;
} __attribute__ ((packed)) ;

struct acpi_table_plat_int_src {
 acpi_table_entry_header header;
 acpi_interrupt_flags flags;
 u8 type;
 u8 id;
 u8 eid;
 u8 iosapic_vector;
 u32 global_irq;
 struct {
  u32 cpei_override_flag:1;
  u32 reserved:31;
 } plint_flags;
} __attribute__ ((packed)) ;

enum acpi_interrupt_id {
 ACPI_INTERRUPT_PMI = 1,
 ACPI_INTERRUPT_INIT,
 ACPI_INTERRUPT_CPEI,
 ACPI_INTERRUPT_COUNT
};



struct acpi_gen_regaddr {
 u8 space_id;
 u8 bit_width;
 u8 bit_offset;
 u8 resv;
 u32 addrl;
 u32 addrh;
} __attribute__ ((packed)) ;

struct acpi_table_hpet {
 struct acpi_table_header header;
 u32 id;
 struct acpi_gen_regaddr addr;
 u8 number;
 u16 min_tick;
 u8 page_protect;
} __attribute__ ((packed)) ;





struct acpi_table_sbf
{
 u8 sbf_signature[4];
 u32 sbf_len;
 u8 sbf_revision;
 u8 sbf_csum;
 u8 sbf_oemid[6];
 u8 sbf_oemtable[8];
 u8 sbf_revdata[4];
 u8 sbf_creator[4];
 u8 sbf_crearev[4];
 u8 sbf_cmos;
 u8 sbf_spare[3];
} __attribute__ ((packed)) ;






struct acpi_table_srat {
 struct acpi_table_header header;
 u32 table_revision;
 u64 reserved;
} __attribute__ ((packed)) ;

enum acpi_srat_entry_id {
 ACPI_SRAT_PROCESSOR_AFFINITY = 0,
 ACPI_SRAT_MEMORY_AFFINITY,
 ACPI_SRAT_ENTRY_COUNT
};

struct acpi_table_processor_affinity {
 acpi_table_entry_header header;
 u8 proximity_domain;
 u8 apic_id;
 struct {
  u32 enabled:1;
  u32 reserved:31;
 } flags;
 u8 lsapic_eid;
 u8 reserved[7];
} __attribute__ ((packed)) ;

struct acpi_table_memory_affinity {
 acpi_table_entry_header header;
 u8 proximity_domain;
 u8 reserved1[5];
 u32 base_addr_lo;
 u32 base_addr_hi;
 u32 length_lo;
 u32 length_hi;
 u32 memory_type;
 struct {
  u32 enabled:1;
  u32 hot_pluggable:1;
  u32 reserved:30;
 } flags;
 u64 reserved2;
} __attribute__ ((packed)) ;

enum acpi_address_range_id {
 ACPI_ADDRESS_RANGE_MEMORY = 1,
 ACPI_ADDRESS_RANGE_RESERVED = 2,
 ACPI_ADDRESS_RANGE_ACPI = 3,
 ACPI_ADDRESS_RANGE_NVS = 4,
 ACPI_ADDRESS_RANGE_COUNT
};






struct acpi_table_slit {
 struct acpi_table_header header;
 u64 localities;
 u8 entry[1];
} __attribute__ ((packed)) ;



struct acpi_table_sbst {
 struct acpi_table_header header;
 u32 warning;
 u32 low;
 u32 critical;
} __attribute__ ((packed)) ;



struct acpi_table_ecdt {
 struct acpi_table_header header;
 struct acpi_generic_address ec_control;
 struct acpi_generic_address ec_data;
 u32 uid;
 u8 gpe_bit;
 char ec_id[0];
} __attribute__ ((packed)) ;




struct acpi_table_mcfg_config {
 u32 base_address;
 u32 base_reserved;
 u16 pci_segment_group_number;
 u8 start_bus_number;
 u8 end_bus_number;
 u8 reserved[4];
} __attribute__ ((packed)) ;
struct acpi_table_mcfg {
 struct acpi_table_header header;
 u8 reserved[8];
 struct acpi_table_mcfg_config config[0];
} __attribute__ ((packed)) ;



enum acpi_table_id {
 ACPI_TABLE_UNKNOWN = 0,
 ACPI_APIC,
 ACPI_BOOT,
 ACPI_DBGP,
 ACPI_DSDT,
 ACPI_ECDT,
 ACPI_ETDT,
 ACPI_FADT,
 ACPI_FACS,
 ACPI_OEMX,
 ACPI_PSDT,
 ACPI_SBST,
 ACPI_SLIT,
 ACPI_SPCR,
 ACPI_SRAT,
 ACPI_SSDT,
 ACPI_SPMI,
 ACPI_HPET,
 ACPI_MCFG,
 ACPI_TABLE_COUNT
};

typedef int (*acpi_table_handler) (unsigned long phys_addr, unsigned long size);

typedef  acpi_table_handler  _GLOBAL_357_T; extern  _GLOBAL_357_T  _GLOBAL_0_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_1_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_2_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_3_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_4_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_5_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_6_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_7_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_8_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_9_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_10_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_11_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_12_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_13_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_14_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_15_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_16_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_17_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_18_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_19_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_20_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_21_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_22_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_23_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_24_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_25_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_26_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_27_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_28_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_29_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_30_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_31_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_32_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_33_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_34_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_35_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_36_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_37_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_38_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_39_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_40_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_41_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_42_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_43_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_44_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_45_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_46_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_47_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_48_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; extern  _GLOBAL_357_T  _GLOBAL_49_acpi_table_ops_I [ ACPI_TABLE_COUNT ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_acpi_table_ops_I) *_GLOBAL_acpi_table_ops_43_A[NUM_STACKS];  

typedef int (*acpi_madt_entry_handler) (acpi_table_entry_header *header, const unsigned long end);

char * __acpi_map_table (unsigned long phys_addr, unsigned long size);
unsigned long acpi_find_rsdp (void);
int acpi_boot_init (void);
int acpi_boot_table_init (void);
int acpi_numa_init (void);

int acpi_table_init (void);
int acpi_table_parse (enum acpi_table_id id, acpi_table_handler handler);
int acpi_get_table_header_early (enum acpi_table_id id, struct acpi_table_header **header);
int acpi_table_parse_madt (enum acpi_madt_entry_id id, acpi_madt_entry_handler handler, unsigned int max_entries);
int acpi_table_parse_srat (enum acpi_srat_entry_id id, acpi_madt_entry_handler handler, unsigned int max_entries);
int acpi_parse_mcfg (unsigned long phys_addr, unsigned long size);
void acpi_table_print (struct acpi_table_header *header, unsigned long phys_addr);
void acpi_table_print_madt_entry (acpi_table_entry_header *madt);
void acpi_table_print_srat_entry (acpi_table_entry_header *srat);
# 418 "linux-2.6.18/include/linux/acpi.h"
void acpi_numa_slit_init (struct acpi_table_slit *slit);
void acpi_numa_processor_affinity_init (struct acpi_table_processor_affinity *pa);
void acpi_numa_memory_affinity_init (struct acpi_table_memory_affinity *ma);
void acpi_numa_arch_fixup(void);
# 430 "linux-2.6.18/include/linux/acpi.h"
int acpi_register_ioapic(acpi_handle handle, u64 phys_addr, u32 gsi_base);
int acpi_unregister_ioapic(acpi_handle handle, u32 gsi_base);

typedef  int  _GLOBAL_358_T; extern  _GLOBAL_358_T  global_acpi_mp_config[NUM_STACKS];   

typedef  struct acpi_table_mcfg_config   _GLOBAL_359_T; extern  _GLOBAL_359_T  * global_pci_mmcfg_config[NUM_STACKS];    
typedef  int  _GLOBAL_360_T; extern  _GLOBAL_360_T  global_pci_mmcfg_config_num[NUM_STACKS];   

typedef  int  _GLOBAL_361_T; extern  _GLOBAL_361_T  global_sbf_port[NUM_STACKS];   
typedef  unsigned long   _GLOBAL_362_T; extern  _GLOBAL_362_T  global_acpi_video_flags[NUM_STACKS];    







int acpi_register_gsi (u32 gsi, int triggering, int polarity);
int acpi_gsi_to_irq (u32 gsi, unsigned int *irq);






void acpi_unregister_gsi (u32 gsi);



struct acpi_prt_entry {
 struct list_head node;
 struct acpi_pci_id id;
 u8 pin;
 struct {
  acpi_handle handle;
  u32 index;
 } link;
 u32 irq;
};

struct acpi_prt_list {
 int count;
 struct list_head entries;
};

struct pci_dev;

int acpi_pci_irq_enable (struct pci_dev *dev);
void acpi_penalize_isa_irq(int irq, int active);

void acpi_pci_irq_disable (struct pci_dev *dev);

struct acpi_pci_driver {
 struct acpi_pci_driver *next;
 int (*add)(acpi_handle handle);
 void (*remove)(acpi_handle handle);
};

int acpi_pci_register_driver(struct acpi_pci_driver *driver);
void acpi_pci_unregister_driver(struct acpi_pci_driver *driver);





extern int ec_read(u8 addr, u8 *val);
extern int ec_write(u8 addr, u8 val);



extern int acpi_blacklisted(void);
extern void acpi_bios_year(char *s);
# 513 "linux-2.6.18/include/linux/acpi.h"
typedef  unsigned int   _GLOBAL_363_T; extern  _GLOBAL_363_T  global_max_cstate[NUM_STACKS];    

static inline  __attribute__((always_inline)) unsigned int acpi_get_cstate_limit(void)
{
 return global_max_cstate[get_stack_id()];
}
static inline  __attribute__((always_inline)) void acpi_set_cstate_limit(unsigned int new_limit)
{
 global_max_cstate[get_stack_id()] = new_limit;
 return;
}
# 533 "linux-2.6.18/include/linux/acpi.h"
static inline  __attribute__((always_inline)) int acpi_get_pxm(acpi_handle handle)
{
 return 0;
}
static inline  __attribute__((always_inline)) int acpi_get_node(acpi_handle *handle)
{
 return 0;
}

extern int acpi_paddr_to_node(u64 start_addr, u64 size);

typedef  int  _GLOBAL_364_T; extern  _GLOBAL_364_T  global_pnpacpi_disabled[NUM_STACKS];   
# 48 "linux-2.6.18/kernel/sysctl.c" 2




extern int proc_nr_files(ctl_table *table, int write, struct file *filp,
                     void *buffer, size_t *lenp, loff_t *ppos);




typedef  int  _GLOBAL_365_T; extern  _GLOBAL_365_T  global_C_A_D[NUM_STACKS];   
typedef  int  _GLOBAL_366_T; extern  _GLOBAL_366_T  global_sysctl_overcommit_memory[NUM_STACKS];   
typedef  int  _GLOBAL_367_T; extern  _GLOBAL_367_T  global_sysctl_overcommit_ratio[NUM_STACKS];   
typedef  int  _GLOBAL_368_T; extern  _GLOBAL_368_T  global_sysctl_panic_on_oom[NUM_STACKS];   
typedef  int  _GLOBAL_369_T; extern  _GLOBAL_369_T  global_max_threads[NUM_STACKS];   
typedef  int  _GLOBAL_370_T; extern  _GLOBAL_370_T  global_sysrq_enabled[NUM_STACKS];   
typedef  int  _GLOBAL_371_T; extern  _GLOBAL_371_T  global_core_uses_pid[NUM_STACKS];   
typedef  int  _GLOBAL_372_T; extern  _GLOBAL_372_T  global_suid_dumpable[NUM_STACKS];   
typedef  char  _GLOBAL_373_T; extern  _GLOBAL_373_T  _GLOBAL_0_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_1_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_2_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_3_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_4_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_5_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_6_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_7_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_8_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_9_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_10_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_11_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_12_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_13_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_14_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_15_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_16_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_17_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_18_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_19_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_20_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_21_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_22_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_23_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_24_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_25_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_26_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_27_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_28_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_29_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_30_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_31_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_32_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_33_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_34_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_35_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_36_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_37_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_38_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_39_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_40_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_41_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_42_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_43_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_44_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_45_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_46_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_47_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_48_core_pattern_I [ ] ; extern  _GLOBAL_373_T  _GLOBAL_49_core_pattern_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_core_pattern_I) *_GLOBAL_core_pattern_44_A[NUM_STACKS] = { &_GLOBAL_0_core_pattern_I, &_GLOBAL_1_core_pattern_I, &_GLOBAL_2_core_pattern_I, &_GLOBAL_3_core_pattern_I, &_GLOBAL_4_core_pattern_I, &_GLOBAL_5_core_pattern_I, &_GLOBAL_6_core_pattern_I, &_GLOBAL_7_core_pattern_I, &_GLOBAL_8_core_pattern_I, &_GLOBAL_9_core_pattern_I, &_GLOBAL_10_core_pattern_I, &_GLOBAL_11_core_pattern_I, &_GLOBAL_12_core_pattern_I, &_GLOBAL_13_core_pattern_I, &_GLOBAL_14_core_pattern_I, &_GLOBAL_15_core_pattern_I, &_GLOBAL_16_core_pattern_I, &_GLOBAL_17_core_pattern_I, &_GLOBAL_18_core_pattern_I, &_GLOBAL_19_core_pattern_I, &_GLOBAL_20_core_pattern_I, &_GLOBAL_21_core_pattern_I, &_GLOBAL_22_core_pattern_I, &_GLOBAL_23_core_pattern_I, &_GLOBAL_24_core_pattern_I, &_GLOBAL_25_core_pattern_I, &_GLOBAL_26_core_pattern_I, &_GLOBAL_27_core_pattern_I, &_GLOBAL_28_core_pattern_I, &_GLOBAL_29_core_pattern_I, &_GLOBAL_30_core_pattern_I, &_GLOBAL_31_core_pattern_I, &_GLOBAL_32_core_pattern_I, &_GLOBAL_33_core_pattern_I, &_GLOBAL_34_core_pattern_I, &_GLOBAL_35_core_pattern_I, &_GLOBAL_36_core_pattern_I, &_GLOBAL_37_core_pattern_I, &_GLOBAL_38_core_pattern_I, &_GLOBAL_39_core_pattern_I, &_GLOBAL_40_core_pattern_I, &_GLOBAL_41_core_pattern_I, &_GLOBAL_42_core_pattern_I, &_GLOBAL_43_core_pattern_I, &_GLOBAL_44_core_pattern_I, &_GLOBAL_45_core_pattern_I, &_GLOBAL_46_core_pattern_I, &_GLOBAL_47_core_pattern_I, &_GLOBAL_48_core_pattern_I, &_GLOBAL_49_core_pattern_I, };  
typedef  int  _GLOBAL_374_T; extern  _GLOBAL_374_T  global_cad_pid[NUM_STACKS];   
typedef  int  _GLOBAL_375_T; extern  _GLOBAL_375_T  global_pid_max[NUM_STACKS];   
typedef  int  _GLOBAL_376_T; extern  _GLOBAL_376_T  global_min_free_kbytes[NUM_STACKS];   
typedef  int  _GLOBAL_377_T; extern  _GLOBAL_377_T  global_printk_ratelimit_jiffies[NUM_STACKS];   
typedef  int  _GLOBAL_378_T; extern  _GLOBAL_378_T  global_printk_ratelimit_burst[NUM_STACKS];   
typedef  int  _GLOBAL_379_T; extern  _GLOBAL_379_T  global_pid_max_min[NUM_STACKS]; extern  _GLOBAL_379_T  global_pid_max_max[NUM_STACKS];    
typedef  int  _GLOBAL_380_T; extern  _GLOBAL_380_T  global_sysctl_drop_caches[NUM_STACKS];   
typedef  int  _GLOBAL_381_T; extern  _GLOBAL_381_T  global_percpu_pagelist_fraction[NUM_STACKS];   
typedef  int  _GLOBAL_382_T; extern  _GLOBAL_382_T  global_compat_log[NUM_STACKS];   


typedef  int _GLOBAL_383_T;  _GLOBAL_383_T  global_unknown_nmi_panic[NUM_STACKS];  
extern int proc_unknown_nmi_panic(ctl_table *, int, struct file *,
      void *, size_t *, loff_t *);



typedef  int  _GLOBAL_384_T; static  _GLOBAL_384_T  global_maxolduid[NUM_STACKS] = {  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  };     
typedef  int  _GLOBAL_385_T; static  _GLOBAL_385_T  global_minolduid[NUM_STACKS];   
typedef  int  _GLOBAL_386_T; static  _GLOBAL_386_T  global_min_percpu_pagelist_fract[NUM_STACKS] = {  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  };     

typedef  int  _GLOBAL_387_T; static  _GLOBAL_387_T  global_ngroups_max[NUM_STACKS] = {  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  };     





typedef  int  _GLOBAL_388_T; extern  _GLOBAL_388_T  global_sg_big_buff[NUM_STACKS];   


typedef  size_t  _GLOBAL_389_T; extern  _GLOBAL_389_T  global_shm_ctlmax[NUM_STACKS];   
typedef  size_t  _GLOBAL_390_T; extern  _GLOBAL_390_T  global_shm_ctlall[NUM_STACKS];   
typedef  int  _GLOBAL_391_T; extern  _GLOBAL_391_T  global_shm_ctlmni[NUM_STACKS];   
typedef  int  _GLOBAL_392_T; extern  _GLOBAL_392_T  global_msg_ctlmax[NUM_STACKS];   
typedef  int  _GLOBAL_393_T; extern  _GLOBAL_393_T  global_msg_ctlmnb[NUM_STACKS];   
typedef  int  _GLOBAL_394_T; extern  _GLOBAL_394_T  global_msg_ctlmni[NUM_STACKS];   
typedef  int  _GLOBAL_395_T; extern  _GLOBAL_395_T  _GLOBAL_0_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_1_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_2_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_3_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_4_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_5_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_6_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_7_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_8_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_9_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_10_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_11_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_12_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_13_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_14_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_15_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_16_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_17_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_18_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_19_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_20_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_21_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_22_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_23_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_24_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_25_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_26_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_27_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_28_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_29_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_30_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_31_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_32_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_33_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_34_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_35_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_36_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_37_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_38_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_39_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_40_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_41_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_42_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_43_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_44_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_45_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_46_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_47_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_48_sem_ctls_I [ ] ; extern  _GLOBAL_395_T  _GLOBAL_49_sem_ctls_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sem_ctls_I) *_GLOBAL_sem_ctls_45_A[NUM_STACKS] = { &_GLOBAL_0_sem_ctls_I, &_GLOBAL_1_sem_ctls_I, &_GLOBAL_2_sem_ctls_I, &_GLOBAL_3_sem_ctls_I, &_GLOBAL_4_sem_ctls_I, &_GLOBAL_5_sem_ctls_I, &_GLOBAL_6_sem_ctls_I, &_GLOBAL_7_sem_ctls_I, &_GLOBAL_8_sem_ctls_I, &_GLOBAL_9_sem_ctls_I, &_GLOBAL_10_sem_ctls_I, &_GLOBAL_11_sem_ctls_I, &_GLOBAL_12_sem_ctls_I, &_GLOBAL_13_sem_ctls_I, &_GLOBAL_14_sem_ctls_I, &_GLOBAL_15_sem_ctls_I, &_GLOBAL_16_sem_ctls_I, &_GLOBAL_17_sem_ctls_I, &_GLOBAL_18_sem_ctls_I, &_GLOBAL_19_sem_ctls_I, &_GLOBAL_20_sem_ctls_I, &_GLOBAL_21_sem_ctls_I, &_GLOBAL_22_sem_ctls_I, &_GLOBAL_23_sem_ctls_I, &_GLOBAL_24_sem_ctls_I, &_GLOBAL_25_sem_ctls_I, &_GLOBAL_26_sem_ctls_I, &_GLOBAL_27_sem_ctls_I, &_GLOBAL_28_sem_ctls_I, &_GLOBAL_29_sem_ctls_I, &_GLOBAL_30_sem_ctls_I, &_GLOBAL_31_sem_ctls_I, &_GLOBAL_32_sem_ctls_I, &_GLOBAL_33_sem_ctls_I, &_GLOBAL_34_sem_ctls_I, &_GLOBAL_35_sem_ctls_I, &_GLOBAL_36_sem_ctls_I, &_GLOBAL_37_sem_ctls_I, &_GLOBAL_38_sem_ctls_I, &_GLOBAL_39_sem_ctls_I, &_GLOBAL_40_sem_ctls_I, &_GLOBAL_41_sem_ctls_I, &_GLOBAL_42_sem_ctls_I, &_GLOBAL_43_sem_ctls_I, &_GLOBAL_44_sem_ctls_I, &_GLOBAL_45_sem_ctls_I, &_GLOBAL_46_sem_ctls_I, &_GLOBAL_47_sem_ctls_I, &_GLOBAL_48_sem_ctls_I, &_GLOBAL_49_sem_ctls_I, };  
# 125 "linux-2.6.18/kernel/sysctl.c"
typedef  int  _GLOBAL_396_T; extern  _GLOBAL_396_T  global_sysctl_hz_timer[NUM_STACKS];   
# 139 "linux-2.6.18/kernel/sysctl.c"
static int parse_table(int *, int, void *, size_t *, void *, size_t,
         ctl_table *, void **);
static int proc_doutsstring(ctl_table *table, int write, struct file *filp,
    void *buffer, size_t *lenp, loff_t *ppos);

typedef  ctl_table  _GLOBAL_397_T; static  _GLOBAL_397_T  _GLOBAL_0_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_1_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_2_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_3_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_4_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_5_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_6_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_7_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_8_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_9_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_10_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_11_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_12_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_13_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_14_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_15_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_16_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_17_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_18_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_19_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_20_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_21_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_22_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_23_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_24_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_25_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_26_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_27_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_28_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_29_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_30_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_31_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_32_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_33_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_34_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_35_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_36_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_37_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_38_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_39_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_40_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_41_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_42_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_43_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_44_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_45_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_46_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_47_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_48_root_table_I [ ] ; static  _GLOBAL_397_T  _GLOBAL_49_root_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_root_table_I) *_GLOBAL_root_table_46_A[NUM_STACKS] = { &_GLOBAL_0_root_table_I, &_GLOBAL_1_root_table_I, &_GLOBAL_2_root_table_I, &_GLOBAL_3_root_table_I, &_GLOBAL_4_root_table_I, &_GLOBAL_5_root_table_I, &_GLOBAL_6_root_table_I, &_GLOBAL_7_root_table_I, &_GLOBAL_8_root_table_I, &_GLOBAL_9_root_table_I, &_GLOBAL_10_root_table_I, &_GLOBAL_11_root_table_I, &_GLOBAL_12_root_table_I, &_GLOBAL_13_root_table_I, &_GLOBAL_14_root_table_I, &_GLOBAL_15_root_table_I, &_GLOBAL_16_root_table_I, &_GLOBAL_17_root_table_I, &_GLOBAL_18_root_table_I, &_GLOBAL_19_root_table_I, &_GLOBAL_20_root_table_I, &_GLOBAL_21_root_table_I, &_GLOBAL_22_root_table_I, &_GLOBAL_23_root_table_I, &_GLOBAL_24_root_table_I, &_GLOBAL_25_root_table_I, &_GLOBAL_26_root_table_I, &_GLOBAL_27_root_table_I, &_GLOBAL_28_root_table_I, &_GLOBAL_29_root_table_I, &_GLOBAL_30_root_table_I, &_GLOBAL_31_root_table_I, &_GLOBAL_32_root_table_I, &_GLOBAL_33_root_table_I, &_GLOBAL_34_root_table_I, &_GLOBAL_35_root_table_I, &_GLOBAL_36_root_table_I, &_GLOBAL_37_root_table_I, &_GLOBAL_38_root_table_I, &_GLOBAL_39_root_table_I, &_GLOBAL_40_root_table_I, &_GLOBAL_41_root_table_I, &_GLOBAL_42_root_table_I, &_GLOBAL_43_root_table_I, &_GLOBAL_44_root_table_I, &_GLOBAL_45_root_table_I, &_GLOBAL_46_root_table_I, &_GLOBAL_47_root_table_I, &_GLOBAL_48_root_table_I, &_GLOBAL_49_root_table_I, };  
typedef  struct ctl_table_header   _GLOBAL_398_T; static  _GLOBAL_398_T  global_root_table_header[NUM_STACKS] = {  { _GLOBAL_0_root_table_I , { & ( global_root_table_header[0] . ctl_entry  )   , & ( global_root_table_header[0] . ctl_entry  )    }   } ,  { _GLOBAL_1_root_table_I , { & ( global_root_table_header[1] . ctl_entry  )   , & ( global_root_table_header[1] . ctl_entry  )    }   } ,  { _GLOBAL_2_root_table_I , { & ( global_root_table_header[2] . ctl_entry  )   , & ( global_root_table_header[2] . ctl_entry  )    }   } ,  { _GLOBAL_3_root_table_I , { & ( global_root_table_header[3] . ctl_entry  )   , & ( global_root_table_header[3] . ctl_entry  )    }   } ,  { _GLOBAL_4_root_table_I , { & ( global_root_table_header[4] . ctl_entry  )   , & ( global_root_table_header[4] . ctl_entry  )    }   } ,  { _GLOBAL_5_root_table_I , { & ( global_root_table_header[5] . ctl_entry  )   , & ( global_root_table_header[5] . ctl_entry  )    }   } ,  { _GLOBAL_6_root_table_I , { & ( global_root_table_header[6] . ctl_entry  )   , & ( global_root_table_header[6] . ctl_entry  )    }   } ,  { _GLOBAL_7_root_table_I , { & ( global_root_table_header[7] . ctl_entry  )   , & ( global_root_table_header[7] . ctl_entry  )    }   } ,  { _GLOBAL_8_root_table_I , { & ( global_root_table_header[8] . ctl_entry  )   , & ( global_root_table_header[8] . ctl_entry  )    }   } ,  { _GLOBAL_9_root_table_I , { & ( global_root_table_header[9] . ctl_entry  )   , & ( global_root_table_header[9] . ctl_entry  )    }   } ,  { _GLOBAL_10_root_table_I , { & ( global_root_table_header[10] . ctl_entry  )   , & ( global_root_table_header[10] . ctl_entry  )    }   } ,  { _GLOBAL_11_root_table_I , { & ( global_root_table_header[11] . ctl_entry  )   , & ( global_root_table_header[11] . ctl_entry  )    }   } ,  { _GLOBAL_12_root_table_I , { & ( global_root_table_header[12] . ctl_entry  )   , & ( global_root_table_header[12] . ctl_entry  )    }   } ,  { _GLOBAL_13_root_table_I , { & ( global_root_table_header[13] . ctl_entry  )   , & ( global_root_table_header[13] . ctl_entry  )    }   } ,  { _GLOBAL_14_root_table_I , { & ( global_root_table_header[14] . ctl_entry  )   , & ( global_root_table_header[14] . ctl_entry  )    }   } ,  { _GLOBAL_15_root_table_I , { & ( global_root_table_header[15] . ctl_entry  )   , & ( global_root_table_header[15] . ctl_entry  )    }   } ,  { _GLOBAL_16_root_table_I , { & ( global_root_table_header[16] . ctl_entry  )   , & ( global_root_table_header[16] . ctl_entry  )    }   } ,  { _GLOBAL_17_root_table_I , { & ( global_root_table_header[17] . ctl_entry  )   , & ( global_root_table_header[17] . ctl_entry  )    }   } ,  { _GLOBAL_18_root_table_I , { & ( global_root_table_header[18] . ctl_entry  )   , & ( global_root_table_header[18] . ctl_entry  )    }   } ,  { _GLOBAL_19_root_table_I , { & ( global_root_table_header[19] . ctl_entry  )   , & ( global_root_table_header[19] . ctl_entry  )    }   } ,  { _GLOBAL_20_root_table_I , { & ( global_root_table_header[20] . ctl_entry  )   , & ( global_root_table_header[20] . ctl_entry  )    }   } ,  { _GLOBAL_21_root_table_I , { & ( global_root_table_header[21] . ctl_entry  )   , & ( global_root_table_header[21] . ctl_entry  )    }   } ,  { _GLOBAL_22_root_table_I , { & ( global_root_table_header[22] . ctl_entry  )   , & ( global_root_table_header[22] . ctl_entry  )    }   } ,  { _GLOBAL_23_root_table_I , { & ( global_root_table_header[23] . ctl_entry  )   , & ( global_root_table_header[23] . ctl_entry  )    }   } ,  { _GLOBAL_24_root_table_I , { & ( global_root_table_header[24] . ctl_entry  )   , & ( global_root_table_header[24] . ctl_entry  )    }   } ,  { _GLOBAL_25_root_table_I , { & ( global_root_table_header[25] . ctl_entry  )   , & ( global_root_table_header[25] . ctl_entry  )    }   } ,  { _GLOBAL_26_root_table_I , { & ( global_root_table_header[26] . ctl_entry  )   , & ( global_root_table_header[26] . ctl_entry  )    }   } ,  { _GLOBAL_27_root_table_I , { & ( global_root_table_header[27] . ctl_entry  )   , & ( global_root_table_header[27] . ctl_entry  )    }   } ,  { _GLOBAL_28_root_table_I , { & ( global_root_table_header[28] . ctl_entry  )   , & ( global_root_table_header[28] . ctl_entry  )    }   } ,  { _GLOBAL_29_root_table_I , { & ( global_root_table_header[29] . ctl_entry  )   , & ( global_root_table_header[29] . ctl_entry  )    }   } ,  { _GLOBAL_30_root_table_I , { & ( global_root_table_header[30] . ctl_entry  )   , & ( global_root_table_header[30] . ctl_entry  )    }   } ,  { _GLOBAL_31_root_table_I , { & ( global_root_table_header[31] . ctl_entry  )   , & ( global_root_table_header[31] . ctl_entry  )    }   } ,  { _GLOBAL_32_root_table_I , { & ( global_root_table_header[32] . ctl_entry  )   , & ( global_root_table_header[32] . ctl_entry  )    }   } ,  { _GLOBAL_33_root_table_I , { & ( global_root_table_header[33] . ctl_entry  )   , & ( global_root_table_header[33] . ctl_entry  )    }   } ,  { _GLOBAL_34_root_table_I , { & ( global_root_table_header[34] . ctl_entry  )   , & ( global_root_table_header[34] . ctl_entry  )    }   } ,  { _GLOBAL_35_root_table_I , { & ( global_root_table_header[35] . ctl_entry  )   , & ( global_root_table_header[35] . ctl_entry  )    }   } ,  { _GLOBAL_36_root_table_I , { & ( global_root_table_header[36] . ctl_entry  )   , & ( global_root_table_header[36] . ctl_entry  )    }   } ,  { _GLOBAL_37_root_table_I , { & ( global_root_table_header[37] . ctl_entry  )   , & ( global_root_table_header[37] . ctl_entry  )    }   } ,  { _GLOBAL_38_root_table_I , { & ( global_root_table_header[38] . ctl_entry  )   , & ( global_root_table_header[38] . ctl_entry  )    }   } ,  { _GLOBAL_39_root_table_I , { & ( global_root_table_header[39] . ctl_entry  )   , & ( global_root_table_header[39] . ctl_entry  )    }   } ,  { _GLOBAL_40_root_table_I , { & ( global_root_table_header[40] . ctl_entry  )   , & ( global_root_table_header[40] . ctl_entry  )    }   } ,  { _GLOBAL_41_root_table_I , { & ( global_root_table_header[41] . ctl_entry  )   , & ( global_root_table_header[41] . ctl_entry  )    }   } ,  { _GLOBAL_42_root_table_I , { & ( global_root_table_header[42] . ctl_entry  )   , & ( global_root_table_header[42] . ctl_entry  )    }   } ,  { _GLOBAL_43_root_table_I , { & ( global_root_table_header[43] . ctl_entry  )   , & ( global_root_table_header[43] . ctl_entry  )    }   } ,  { _GLOBAL_44_root_table_I , { & ( global_root_table_header[44] . ctl_entry  )   , & ( global_root_table_header[44] . ctl_entry  )    }   } ,  { _GLOBAL_45_root_table_I , { & ( global_root_table_header[45] . ctl_entry  )   , & ( global_root_table_header[45] . ctl_entry  )    }   } ,  { _GLOBAL_46_root_table_I , { & ( global_root_table_header[46] . ctl_entry  )   , & ( global_root_table_header[46] . ctl_entry  )    }   } ,  { _GLOBAL_47_root_table_I , { & ( global_root_table_header[47] . ctl_entry  )   , & ( global_root_table_header[47] . ctl_entry  )    }   } ,  { _GLOBAL_48_root_table_I , { & ( global_root_table_header[48] . ctl_entry  )   , & ( global_root_table_header[48] . ctl_entry  )    }   } ,  { _GLOBAL_49_root_table_I , { & ( global_root_table_header[49] . ctl_entry  )   , & ( global_root_table_header[49] . ctl_entry  )    }   } ,  };     
       

typedef  ctl_table  _GLOBAL_399_T; static  _GLOBAL_399_T  _GLOBAL_0_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_1_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_2_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_3_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_4_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_5_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_6_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_7_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_8_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_9_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_10_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_11_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_12_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_13_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_14_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_15_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_16_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_17_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_18_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_19_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_20_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_21_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_22_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_23_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_24_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_25_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_26_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_27_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_28_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_29_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_30_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_31_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_32_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_33_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_34_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_35_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_36_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_37_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_38_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_39_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_40_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_41_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_42_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_43_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_44_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_45_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_46_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_47_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_48_kern_table_I [ ] ; static  _GLOBAL_399_T  _GLOBAL_49_kern_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kern_table_I) *_GLOBAL_kern_table_47_A[NUM_STACKS] = { &_GLOBAL_0_kern_table_I, &_GLOBAL_1_kern_table_I, &_GLOBAL_2_kern_table_I, &_GLOBAL_3_kern_table_I, &_GLOBAL_4_kern_table_I, &_GLOBAL_5_kern_table_I, &_GLOBAL_6_kern_table_I, &_GLOBAL_7_kern_table_I, &_GLOBAL_8_kern_table_I, &_GLOBAL_9_kern_table_I, &_GLOBAL_10_kern_table_I, &_GLOBAL_11_kern_table_I, &_GLOBAL_12_kern_table_I, &_GLOBAL_13_kern_table_I, &_GLOBAL_14_kern_table_I, &_GLOBAL_15_kern_table_I, &_GLOBAL_16_kern_table_I, &_GLOBAL_17_kern_table_I, &_GLOBAL_18_kern_table_I, &_GLOBAL_19_kern_table_I, &_GLOBAL_20_kern_table_I, &_GLOBAL_21_kern_table_I, &_GLOBAL_22_kern_table_I, &_GLOBAL_23_kern_table_I, &_GLOBAL_24_kern_table_I, &_GLOBAL_25_kern_table_I, &_GLOBAL_26_kern_table_I, &_GLOBAL_27_kern_table_I, &_GLOBAL_28_kern_table_I, &_GLOBAL_29_kern_table_I, &_GLOBAL_30_kern_table_I, &_GLOBAL_31_kern_table_I, &_GLOBAL_32_kern_table_I, &_GLOBAL_33_kern_table_I, &_GLOBAL_34_kern_table_I, &_GLOBAL_35_kern_table_I, &_GLOBAL_36_kern_table_I, &_GLOBAL_37_kern_table_I, &_GLOBAL_38_kern_table_I, &_GLOBAL_39_kern_table_I, &_GLOBAL_40_kern_table_I, &_GLOBAL_41_kern_table_I, &_GLOBAL_42_kern_table_I, &_GLOBAL_43_kern_table_I, &_GLOBAL_44_kern_table_I, &_GLOBAL_45_kern_table_I, &_GLOBAL_46_kern_table_I, &_GLOBAL_47_kern_table_I, &_GLOBAL_48_kern_table_I, &_GLOBAL_49_kern_table_I, };  
typedef  ctl_table  _GLOBAL_400_T; static  _GLOBAL_400_T  _GLOBAL_0_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_1_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_2_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_3_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_4_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_5_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_6_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_7_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_8_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_9_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_10_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_11_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_12_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_13_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_14_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_15_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_16_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_17_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_18_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_19_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_20_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_21_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_22_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_23_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_24_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_25_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_26_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_27_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_28_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_29_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_30_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_31_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_32_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_33_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_34_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_35_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_36_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_37_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_38_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_39_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_40_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_41_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_42_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_43_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_44_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_45_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_46_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_47_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_48_vm_table_I [ ] ; static  _GLOBAL_400_T  _GLOBAL_49_vm_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vm_table_I) *_GLOBAL_vm_table_48_A[NUM_STACKS] = { &_GLOBAL_0_vm_table_I, &_GLOBAL_1_vm_table_I, &_GLOBAL_2_vm_table_I, &_GLOBAL_3_vm_table_I, &_GLOBAL_4_vm_table_I, &_GLOBAL_5_vm_table_I, &_GLOBAL_6_vm_table_I, &_GLOBAL_7_vm_table_I, &_GLOBAL_8_vm_table_I, &_GLOBAL_9_vm_table_I, &_GLOBAL_10_vm_table_I, &_GLOBAL_11_vm_table_I, &_GLOBAL_12_vm_table_I, &_GLOBAL_13_vm_table_I, &_GLOBAL_14_vm_table_I, &_GLOBAL_15_vm_table_I, &_GLOBAL_16_vm_table_I, &_GLOBAL_17_vm_table_I, &_GLOBAL_18_vm_table_I, &_GLOBAL_19_vm_table_I, &_GLOBAL_20_vm_table_I, &_GLOBAL_21_vm_table_I, &_GLOBAL_22_vm_table_I, &_GLOBAL_23_vm_table_I, &_GLOBAL_24_vm_table_I, &_GLOBAL_25_vm_table_I, &_GLOBAL_26_vm_table_I, &_GLOBAL_27_vm_table_I, &_GLOBAL_28_vm_table_I, &_GLOBAL_29_vm_table_I, &_GLOBAL_30_vm_table_I, &_GLOBAL_31_vm_table_I, &_GLOBAL_32_vm_table_I, &_GLOBAL_33_vm_table_I, &_GLOBAL_34_vm_table_I, &_GLOBAL_35_vm_table_I, &_GLOBAL_36_vm_table_I, &_GLOBAL_37_vm_table_I, &_GLOBAL_38_vm_table_I, &_GLOBAL_39_vm_table_I, &_GLOBAL_40_vm_table_I, &_GLOBAL_41_vm_table_I, &_GLOBAL_42_vm_table_I, &_GLOBAL_43_vm_table_I, &_GLOBAL_44_vm_table_I, &_GLOBAL_45_vm_table_I, &_GLOBAL_46_vm_table_I, &_GLOBAL_47_vm_table_I, &_GLOBAL_48_vm_table_I, &_GLOBAL_49_vm_table_I, };  
typedef  ctl_table  _GLOBAL_401_T; static  _GLOBAL_401_T  _GLOBAL_0_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_1_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_2_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_3_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_4_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_5_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_6_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_7_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_8_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_9_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_10_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_11_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_12_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_13_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_14_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_15_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_16_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_17_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_18_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_19_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_20_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_21_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_22_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_23_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_24_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_25_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_26_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_27_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_28_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_29_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_30_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_31_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_32_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_33_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_34_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_35_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_36_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_37_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_38_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_39_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_40_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_41_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_42_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_43_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_44_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_45_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_46_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_47_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_48_fs_table_I [ ] ; static  _GLOBAL_401_T  _GLOBAL_49_fs_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_fs_table_I) *_GLOBAL_fs_table_49_A[NUM_STACKS] = { &_GLOBAL_0_fs_table_I, &_GLOBAL_1_fs_table_I, &_GLOBAL_2_fs_table_I, &_GLOBAL_3_fs_table_I, &_GLOBAL_4_fs_table_I, &_GLOBAL_5_fs_table_I, &_GLOBAL_6_fs_table_I, &_GLOBAL_7_fs_table_I, &_GLOBAL_8_fs_table_I, &_GLOBAL_9_fs_table_I, &_GLOBAL_10_fs_table_I, &_GLOBAL_11_fs_table_I, &_GLOBAL_12_fs_table_I, &_GLOBAL_13_fs_table_I, &_GLOBAL_14_fs_table_I, &_GLOBAL_15_fs_table_I, &_GLOBAL_16_fs_table_I, &_GLOBAL_17_fs_table_I, &_GLOBAL_18_fs_table_I, &_GLOBAL_19_fs_table_I, &_GLOBAL_20_fs_table_I, &_GLOBAL_21_fs_table_I, &_GLOBAL_22_fs_table_I, &_GLOBAL_23_fs_table_I, &_GLOBAL_24_fs_table_I, &_GLOBAL_25_fs_table_I, &_GLOBAL_26_fs_table_I, &_GLOBAL_27_fs_table_I, &_GLOBAL_28_fs_table_I, &_GLOBAL_29_fs_table_I, &_GLOBAL_30_fs_table_I, &_GLOBAL_31_fs_table_I, &_GLOBAL_32_fs_table_I, &_GLOBAL_33_fs_table_I, &_GLOBAL_34_fs_table_I, &_GLOBAL_35_fs_table_I, &_GLOBAL_36_fs_table_I, &_GLOBAL_37_fs_table_I, &_GLOBAL_38_fs_table_I, &_GLOBAL_39_fs_table_I, &_GLOBAL_40_fs_table_I, &_GLOBAL_41_fs_table_I, &_GLOBAL_42_fs_table_I, &_GLOBAL_43_fs_table_I, &_GLOBAL_44_fs_table_I, &_GLOBAL_45_fs_table_I, &_GLOBAL_46_fs_table_I, &_GLOBAL_47_fs_table_I, &_GLOBAL_48_fs_table_I, &_GLOBAL_49_fs_table_I, };  
typedef  ctl_table  _GLOBAL_402_T; static  _GLOBAL_402_T  _GLOBAL_0_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_1_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_2_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_3_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_4_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_5_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_6_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_7_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_8_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_9_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_10_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_11_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_12_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_13_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_14_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_15_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_16_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_17_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_18_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_19_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_20_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_21_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_22_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_23_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_24_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_25_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_26_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_27_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_28_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_29_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_30_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_31_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_32_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_33_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_34_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_35_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_36_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_37_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_38_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_39_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_40_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_41_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_42_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_43_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_44_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_45_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_46_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_47_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_48_debug_table_I [ ] ; static  _GLOBAL_402_T  _GLOBAL_49_debug_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_debug_table_I) *_GLOBAL_debug_table_50_A[NUM_STACKS] = { &_GLOBAL_0_debug_table_I, &_GLOBAL_1_debug_table_I, &_GLOBAL_2_debug_table_I, &_GLOBAL_3_debug_table_I, &_GLOBAL_4_debug_table_I, &_GLOBAL_5_debug_table_I, &_GLOBAL_6_debug_table_I, &_GLOBAL_7_debug_table_I, &_GLOBAL_8_debug_table_I, &_GLOBAL_9_debug_table_I, &_GLOBAL_10_debug_table_I, &_GLOBAL_11_debug_table_I, &_GLOBAL_12_debug_table_I, &_GLOBAL_13_debug_table_I, &_GLOBAL_14_debug_table_I, &_GLOBAL_15_debug_table_I, &_GLOBAL_16_debug_table_I, &_GLOBAL_17_debug_table_I, &_GLOBAL_18_debug_table_I, &_GLOBAL_19_debug_table_I, &_GLOBAL_20_debug_table_I, &_GLOBAL_21_debug_table_I, &_GLOBAL_22_debug_table_I, &_GLOBAL_23_debug_table_I, &_GLOBAL_24_debug_table_I, &_GLOBAL_25_debug_table_I, &_GLOBAL_26_debug_table_I, &_GLOBAL_27_debug_table_I, &_GLOBAL_28_debug_table_I, &_GLOBAL_29_debug_table_I, &_GLOBAL_30_debug_table_I, &_GLOBAL_31_debug_table_I, &_GLOBAL_32_debug_table_I, &_GLOBAL_33_debug_table_I, &_GLOBAL_34_debug_table_I, &_GLOBAL_35_debug_table_I, &_GLOBAL_36_debug_table_I, &_GLOBAL_37_debug_table_I, &_GLOBAL_38_debug_table_I, &_GLOBAL_39_debug_table_I, &_GLOBAL_40_debug_table_I, &_GLOBAL_41_debug_table_I, &_GLOBAL_42_debug_table_I, &_GLOBAL_43_debug_table_I, &_GLOBAL_44_debug_table_I, &_GLOBAL_45_debug_table_I, &_GLOBAL_46_debug_table_I, &_GLOBAL_47_debug_table_I, &_GLOBAL_48_debug_table_I, &_GLOBAL_49_debug_table_I, };  
typedef  ctl_table  _GLOBAL_403_T; static  _GLOBAL_403_T  _GLOBAL_0_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_1_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_2_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_3_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_4_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_5_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_6_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_7_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_8_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_9_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_10_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_11_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_12_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_13_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_14_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_15_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_16_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_17_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_18_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_19_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_20_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_21_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_22_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_23_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_24_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_25_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_26_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_27_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_28_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_29_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_30_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_31_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_32_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_33_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_34_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_35_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_36_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_37_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_38_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_39_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_40_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_41_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_42_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_43_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_44_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_45_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_46_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_47_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_48_dev_table_I [ ] ; static  _GLOBAL_403_T  _GLOBAL_49_dev_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_dev_table_I) *_GLOBAL_dev_table_51_A[NUM_STACKS] = { &_GLOBAL_0_dev_table_I, &_GLOBAL_1_dev_table_I, &_GLOBAL_2_dev_table_I, &_GLOBAL_3_dev_table_I, &_GLOBAL_4_dev_table_I, &_GLOBAL_5_dev_table_I, &_GLOBAL_6_dev_table_I, &_GLOBAL_7_dev_table_I, &_GLOBAL_8_dev_table_I, &_GLOBAL_9_dev_table_I, &_GLOBAL_10_dev_table_I, &_GLOBAL_11_dev_table_I, &_GLOBAL_12_dev_table_I, &_GLOBAL_13_dev_table_I, &_GLOBAL_14_dev_table_I, &_GLOBAL_15_dev_table_I, &_GLOBAL_16_dev_table_I, &_GLOBAL_17_dev_table_I, &_GLOBAL_18_dev_table_I, &_GLOBAL_19_dev_table_I, &_GLOBAL_20_dev_table_I, &_GLOBAL_21_dev_table_I, &_GLOBAL_22_dev_table_I, &_GLOBAL_23_dev_table_I, &_GLOBAL_24_dev_table_I, &_GLOBAL_25_dev_table_I, &_GLOBAL_26_dev_table_I, &_GLOBAL_27_dev_table_I, &_GLOBAL_28_dev_table_I, &_GLOBAL_29_dev_table_I, &_GLOBAL_30_dev_table_I, &_GLOBAL_31_dev_table_I, &_GLOBAL_32_dev_table_I, &_GLOBAL_33_dev_table_I, &_GLOBAL_34_dev_table_I, &_GLOBAL_35_dev_table_I, &_GLOBAL_36_dev_table_I, &_GLOBAL_37_dev_table_I, &_GLOBAL_38_dev_table_I, &_GLOBAL_39_dev_table_I, &_GLOBAL_40_dev_table_I, &_GLOBAL_41_dev_table_I, &_GLOBAL_42_dev_table_I, &_GLOBAL_43_dev_table_I, &_GLOBAL_44_dev_table_I, &_GLOBAL_45_dev_table_I, &_GLOBAL_46_dev_table_I, &_GLOBAL_47_dev_table_I, &_GLOBAL_48_dev_table_I, &_GLOBAL_49_dev_table_I, };  
typedef  ctl_table  _GLOBAL_404_T; extern  _GLOBAL_404_T  _GLOBAL_0_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_1_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_2_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_3_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_4_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_5_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_6_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_7_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_8_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_9_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_10_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_11_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_12_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_13_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_14_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_15_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_16_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_17_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_18_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_19_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_20_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_21_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_22_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_23_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_24_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_25_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_26_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_27_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_28_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_29_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_30_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_31_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_32_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_33_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_34_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_35_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_36_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_37_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_38_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_39_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_40_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_41_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_42_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_43_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_44_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_45_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_46_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_47_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_48_random_table_I [ ] ; extern  _GLOBAL_404_T  _GLOBAL_49_random_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_random_table_I) *_GLOBAL_random_table_52_A[NUM_STACKS] = { &_GLOBAL_0_random_table_I, &_GLOBAL_1_random_table_I, &_GLOBAL_2_random_table_I, &_GLOBAL_3_random_table_I, &_GLOBAL_4_random_table_I, &_GLOBAL_5_random_table_I, &_GLOBAL_6_random_table_I, &_GLOBAL_7_random_table_I, &_GLOBAL_8_random_table_I, &_GLOBAL_9_random_table_I, &_GLOBAL_10_random_table_I, &_GLOBAL_11_random_table_I, &_GLOBAL_12_random_table_I, &_GLOBAL_13_random_table_I, &_GLOBAL_14_random_table_I, &_GLOBAL_15_random_table_I, &_GLOBAL_16_random_table_I, &_GLOBAL_17_random_table_I, &_GLOBAL_18_random_table_I, &_GLOBAL_19_random_table_I, &_GLOBAL_20_random_table_I, &_GLOBAL_21_random_table_I, &_GLOBAL_22_random_table_I, &_GLOBAL_23_random_table_I, &_GLOBAL_24_random_table_I, &_GLOBAL_25_random_table_I, &_GLOBAL_26_random_table_I, &_GLOBAL_27_random_table_I, &_GLOBAL_28_random_table_I, &_GLOBAL_29_random_table_I, &_GLOBAL_30_random_table_I, &_GLOBAL_31_random_table_I, &_GLOBAL_32_random_table_I, &_GLOBAL_33_random_table_I, &_GLOBAL_34_random_table_I, &_GLOBAL_35_random_table_I, &_GLOBAL_36_random_table_I, &_GLOBAL_37_random_table_I, &_GLOBAL_38_random_table_I, &_GLOBAL_39_random_table_I, &_GLOBAL_40_random_table_I, &_GLOBAL_41_random_table_I, &_GLOBAL_42_random_table_I, &_GLOBAL_43_random_table_I, &_GLOBAL_44_random_table_I, &_GLOBAL_45_random_table_I, &_GLOBAL_46_random_table_I, &_GLOBAL_47_random_table_I, &_GLOBAL_48_random_table_I, &_GLOBAL_49_random_table_I, };  

typedef  ctl_table  _GLOBAL_405_T; extern  _GLOBAL_405_T  _GLOBAL_0_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_1_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_2_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_3_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_4_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_5_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_6_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_7_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_8_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_9_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_10_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_11_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_12_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_13_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_14_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_15_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_16_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_17_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_18_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_19_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_20_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_21_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_22_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_23_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_24_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_25_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_26_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_27_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_28_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_29_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_30_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_31_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_32_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_33_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_34_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_35_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_36_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_37_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_38_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_39_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_40_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_41_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_42_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_43_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_44_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_45_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_46_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_47_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_48_pty_table_I [ ] ; extern  _GLOBAL_405_T  _GLOBAL_49_pty_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pty_table_I) *_GLOBAL_pty_table_53_A[NUM_STACKS] = { &_GLOBAL_0_pty_table_I, &_GLOBAL_1_pty_table_I, &_GLOBAL_2_pty_table_I, &_GLOBAL_3_pty_table_I, &_GLOBAL_4_pty_table_I, &_GLOBAL_5_pty_table_I, &_GLOBAL_6_pty_table_I, &_GLOBAL_7_pty_table_I, &_GLOBAL_8_pty_table_I, &_GLOBAL_9_pty_table_I, &_GLOBAL_10_pty_table_I, &_GLOBAL_11_pty_table_I, &_GLOBAL_12_pty_table_I, &_GLOBAL_13_pty_table_I, &_GLOBAL_14_pty_table_I, &_GLOBAL_15_pty_table_I, &_GLOBAL_16_pty_table_I, &_GLOBAL_17_pty_table_I, &_GLOBAL_18_pty_table_I, &_GLOBAL_19_pty_table_I, &_GLOBAL_20_pty_table_I, &_GLOBAL_21_pty_table_I, &_GLOBAL_22_pty_table_I, &_GLOBAL_23_pty_table_I, &_GLOBAL_24_pty_table_I, &_GLOBAL_25_pty_table_I, &_GLOBAL_26_pty_table_I, &_GLOBAL_27_pty_table_I, &_GLOBAL_28_pty_table_I, &_GLOBAL_29_pty_table_I, &_GLOBAL_30_pty_table_I, &_GLOBAL_31_pty_table_I, &_GLOBAL_32_pty_table_I, &_GLOBAL_33_pty_table_I, &_GLOBAL_34_pty_table_I, &_GLOBAL_35_pty_table_I, &_GLOBAL_36_pty_table_I, &_GLOBAL_37_pty_table_I, &_GLOBAL_38_pty_table_I, &_GLOBAL_39_pty_table_I, &_GLOBAL_40_pty_table_I, &_GLOBAL_41_pty_table_I, &_GLOBAL_42_pty_table_I, &_GLOBAL_43_pty_table_I, &_GLOBAL_44_pty_table_I, &_GLOBAL_45_pty_table_I, &_GLOBAL_46_pty_table_I, &_GLOBAL_47_pty_table_I, &_GLOBAL_48_pty_table_I, &_GLOBAL_49_pty_table_I, };  






typedef  int _GLOBAL_406_T;  _GLOBAL_406_T  global_sysctl_legacy_va_layout[NUM_STACKS];  






static ssize_t proc_readsys(struct file *, char *, size_t, loff_t *);
static ssize_t proc_writesys(struct file *, const char *, size_t, loff_t *);
static int proc_opensys(struct inode *, struct file *);

typedef  struct file_operations  _GLOBAL_407_T;  _GLOBAL_407_T  global_proc_sys_file_operations[NUM_STACKS] = {  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  { . open  = proc_opensys  , . read  = proc_readsys   , . write  = proc_writesys   , } ,  };     
   
   
   


typedef  struct proc_dir_entry   _GLOBAL_408_T; extern  _GLOBAL_408_T  * global_proc_sys_root[NUM_STACKS];    

static void register_proc_table(ctl_table *, struct proc_dir_entry *, void *);
static void unregister_proc_table(ctl_table *, struct proc_dir_entry *);




typedef  ctl_table  _GLOBAL_409_T; static  _GLOBAL_409_T  _GLOBAL_0_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_0_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_0_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_0_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_0_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_0_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_0_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_1_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_1_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_1_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_1_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_1_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_1_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_1_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_2_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_2_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_2_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_2_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_2_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_2_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_2_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_3_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_3_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_3_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_3_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_3_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_3_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_3_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_4_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_4_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_4_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_4_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_4_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_4_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_4_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_5_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_5_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_5_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_5_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_5_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_5_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_5_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_6_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_6_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_6_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_6_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_6_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_6_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_6_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_7_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_7_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_7_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_7_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_7_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_7_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_7_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_8_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_8_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_8_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_8_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_8_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_8_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_8_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_9_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_9_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_9_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_9_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_9_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_9_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_9_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_10_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_10_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_10_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_10_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_10_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_10_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_10_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_11_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_11_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_11_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_11_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_11_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_11_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_11_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_12_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_12_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_12_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_12_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_12_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_12_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_12_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_13_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_13_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_13_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_13_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_13_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_13_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_13_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_14_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_14_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_14_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_14_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_14_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_14_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_14_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_15_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_15_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_15_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_15_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_15_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_15_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_15_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_16_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_16_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_16_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_16_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_16_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_16_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_16_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_17_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_17_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_17_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_17_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_17_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_17_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_17_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_18_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_18_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_18_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_18_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_18_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_18_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_18_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_19_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_19_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_19_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_19_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_19_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_19_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_19_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_20_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_20_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_20_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_20_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_20_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_20_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_20_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_21_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_21_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_21_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_21_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_21_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_21_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_21_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_22_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_22_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_22_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_22_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_22_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_22_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_22_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_23_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_23_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_23_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_23_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_23_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_23_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_23_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_24_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_24_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_24_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_24_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_24_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_24_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_24_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_25_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_25_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_25_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_25_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_25_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_25_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_25_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_26_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_26_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_26_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_26_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_26_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_26_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_26_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_27_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_27_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_27_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_27_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_27_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_27_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_27_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_28_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_28_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_28_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_28_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_28_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_28_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_28_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_29_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_29_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_29_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_29_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_29_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_29_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_29_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_30_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_30_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_30_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_30_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_30_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_30_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_30_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_31_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_31_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_31_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_31_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_31_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_31_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_31_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_32_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_32_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_32_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_32_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_32_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_32_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_32_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_33_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_33_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_33_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_33_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_33_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_33_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_33_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_34_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_34_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_34_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_34_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_34_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_34_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_34_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_35_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_35_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_35_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_35_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_35_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_35_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_35_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_36_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_36_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_36_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_36_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_36_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_36_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_36_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_37_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_37_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_37_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_37_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_37_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_37_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_37_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_38_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_38_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_38_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_38_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_38_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_38_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_38_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_39_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_39_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_39_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_39_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_39_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_39_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_39_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_40_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_40_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_40_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_40_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_40_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_40_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_40_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_41_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_41_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_41_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_41_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_41_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_41_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_41_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_42_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_42_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_42_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_42_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_42_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_42_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_42_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_43_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_43_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_43_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_43_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_43_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_43_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_43_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_44_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_44_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_44_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_44_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_44_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_44_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_44_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_45_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_45_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_45_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_45_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_45_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_45_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_45_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_46_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_46_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_46_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_46_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_46_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_46_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_46_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_47_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_47_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_47_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_47_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_47_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_47_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_47_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_48_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_48_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_48_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_48_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_48_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_48_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_48_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_409_T  _GLOBAL_49_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_49_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_49_vm_table_I   , }   , { . ctl_name  = CTL_NET  , . procname  = "net"   , . mode  = 0555   , . child  = _GLOBAL_49_net_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_49_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_49_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_49_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_root_table_I) *_GLOBAL_root_table_54_A[NUM_STACKS] = { &_GLOBAL_0_root_table_I, &_GLOBAL_1_root_table_I, &_GLOBAL_2_root_table_I, &_GLOBAL_3_root_table_I, &_GLOBAL_4_root_table_I, &_GLOBAL_5_root_table_I, &_GLOBAL_6_root_table_I, &_GLOBAL_7_root_table_I, &_GLOBAL_8_root_table_I, &_GLOBAL_9_root_table_I, &_GLOBAL_10_root_table_I, &_GLOBAL_11_root_table_I, &_GLOBAL_12_root_table_I, &_GLOBAL_13_root_table_I, &_GLOBAL_14_root_table_I, &_GLOBAL_15_root_table_I, &_GLOBAL_16_root_table_I, &_GLOBAL_17_root_table_I, &_GLOBAL_18_root_table_I, &_GLOBAL_19_root_table_I, &_GLOBAL_20_root_table_I, &_GLOBAL_21_root_table_I, &_GLOBAL_22_root_table_I, &_GLOBAL_23_root_table_I, &_GLOBAL_24_root_table_I, &_GLOBAL_25_root_table_I, &_GLOBAL_26_root_table_I, &_GLOBAL_27_root_table_I, &_GLOBAL_28_root_table_I, &_GLOBAL_29_root_table_I, &_GLOBAL_30_root_table_I, &_GLOBAL_31_root_table_I, &_GLOBAL_32_root_table_I, &_GLOBAL_33_root_table_I, &_GLOBAL_34_root_table_I, &_GLOBAL_35_root_table_I, &_GLOBAL_36_root_table_I, &_GLOBAL_37_root_table_I, &_GLOBAL_38_root_table_I, &_GLOBAL_39_root_table_I, &_GLOBAL_40_root_table_I, &_GLOBAL_41_root_table_I, &_GLOBAL_42_root_table_I, &_GLOBAL_43_root_table_I, &_GLOBAL_44_root_table_I, &_GLOBAL_45_root_table_I, &_GLOBAL_46_root_table_I, &_GLOBAL_47_root_table_I, &_GLOBAL_48_root_table_I, &_GLOBAL_49_root_table_I, };    
 
    
    
    
    
 
 
    
    
    
    
 

 
    
    
    
    
 

 
    
    
    
    
 
 
    
    
    
    
 
 
    
    
    
    
 

     


 
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
# 372 "linux-2.6.18/kernel/sysctl.c"
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
# 400 "linux-2.6.18/kernel/sysctl.c"
 
    
    
    
    
    
    
    
 


 
    
    
    
     
    
    
 
# 431 "linux-2.6.18/kernel/sysctl.c"
 
    
    
    
     
    
    
 
 
    
    
    
     
    
    
 
 
    
    
    
     
    
    
 
 
    
    
    
     
    
    
 
 
    
    
    
     
    
    
 
 
    
    
    
     
    
    
 
 
    
    
    
     
    
    
 
# 498 "linux-2.6.18/kernel/sysctl.c"
 
    
    
    
     
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
 

 
    
    
    
    
 

 
    
    
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
    
    
 
# 580 "linux-2.6.18/kernel/sysctl.c"
 
    
    
    
     
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
     
    
    
 

 
    
    
    
     
    
    
 


 
    
    
    
     
    
    
 


 
    
    
    
    
    
    
 
# 665 "linux-2.6.18/kernel/sysctl.c"
 
    
    
    
      
    
    
 
# 705 "linux-2.6.18/kernel/sysctl.c"
     




typedef  int  _GLOBAL_411_T; static  _GLOBAL_411_T  global_zero[NUM_STACKS];   
typedef  int  _GLOBAL_412_T; static  _GLOBAL_412_T  global_one_hundred[NUM_STACKS] = {  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  };     


 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
     
     
    
 
 
    
    
    
    
    
    
    
    
    
 
# 824 "linux-2.6.18/kernel/sysctl.c"
 
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
    
 

 
    
    
    
    
    
    
 

 
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
    
 

 
    
    
    
    
    
    
    
    
 


 
    
    
    
    
    
    
    
 
# 959 "linux-2.6.18/kernel/sysctl.c"
     


 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
# 1044 "linux-2.6.18/kernel/sysctl.c"
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
# 1077 "linux-2.6.18/kernel/sysctl.c"
 
    
    
    
    
    
    
 
     


typedef  ctl_table  _GLOBAL_415_T; static  _GLOBAL_415_T  _GLOBAL_0_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_1_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_2_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_3_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_4_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_5_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_6_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_7_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_8_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_9_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_10_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_11_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_12_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_13_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_14_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_15_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_16_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_17_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_18_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_19_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_20_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_21_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_22_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_23_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_24_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_25_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_26_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_27_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_28_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_29_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_30_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_31_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_32_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_33_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_34_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_35_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_36_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_37_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_38_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_39_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_40_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_41_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_42_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_43_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_44_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_45_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_46_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_47_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_48_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_415_T  _GLOBAL_49_debug_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_debug_table_I) *_GLOBAL_debug_table_58_A[NUM_STACKS] = { &_GLOBAL_0_debug_table_I, &_GLOBAL_1_debug_table_I, &_GLOBAL_2_debug_table_I, &_GLOBAL_3_debug_table_I, &_GLOBAL_4_debug_table_I, &_GLOBAL_5_debug_table_I, &_GLOBAL_6_debug_table_I, &_GLOBAL_7_debug_table_I, &_GLOBAL_8_debug_table_I, &_GLOBAL_9_debug_table_I, &_GLOBAL_10_debug_table_I, &_GLOBAL_11_debug_table_I, &_GLOBAL_12_debug_table_I, &_GLOBAL_13_debug_table_I, &_GLOBAL_14_debug_table_I, &_GLOBAL_15_debug_table_I, &_GLOBAL_16_debug_table_I, &_GLOBAL_17_debug_table_I, &_GLOBAL_18_debug_table_I, &_GLOBAL_19_debug_table_I, &_GLOBAL_20_debug_table_I, &_GLOBAL_21_debug_table_I, &_GLOBAL_22_debug_table_I, &_GLOBAL_23_debug_table_I, &_GLOBAL_24_debug_table_I, &_GLOBAL_25_debug_table_I, &_GLOBAL_26_debug_table_I, &_GLOBAL_27_debug_table_I, &_GLOBAL_28_debug_table_I, &_GLOBAL_29_debug_table_I, &_GLOBAL_30_debug_table_I, &_GLOBAL_31_debug_table_I, &_GLOBAL_32_debug_table_I, &_GLOBAL_33_debug_table_I, &_GLOBAL_34_debug_table_I, &_GLOBAL_35_debug_table_I, &_GLOBAL_36_debug_table_I, &_GLOBAL_37_debug_table_I, &_GLOBAL_38_debug_table_I, &_GLOBAL_39_debug_table_I, &_GLOBAL_40_debug_table_I, &_GLOBAL_41_debug_table_I, &_GLOBAL_42_debug_table_I, &_GLOBAL_43_debug_table_I, &_GLOBAL_44_debug_table_I, &_GLOBAL_45_debug_table_I, &_GLOBAL_46_debug_table_I, &_GLOBAL_47_debug_table_I, &_GLOBAL_48_debug_table_I, &_GLOBAL_49_debug_table_I, };    
     


typedef  ctl_table  _GLOBAL_416_T; static  _GLOBAL_416_T  _GLOBAL_0_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_1_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_2_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_3_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_4_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_5_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_6_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_7_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_8_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_9_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_10_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_11_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_12_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_13_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_14_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_15_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_16_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_17_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_18_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_19_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_20_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_21_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_22_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_23_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_24_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_25_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_26_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_27_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_28_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_29_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_30_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_31_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_32_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_33_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_34_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_35_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_36_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_37_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_38_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_39_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_40_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_41_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_42_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_43_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_44_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_45_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_46_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_47_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_48_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_416_T  _GLOBAL_49_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_dev_table_I) *_GLOBAL_dev_table_59_A[NUM_STACKS] = { &_GLOBAL_0_dev_table_I, &_GLOBAL_1_dev_table_I, &_GLOBAL_2_dev_table_I, &_GLOBAL_3_dev_table_I, &_GLOBAL_4_dev_table_I, &_GLOBAL_5_dev_table_I, &_GLOBAL_6_dev_table_I, &_GLOBAL_7_dev_table_I, &_GLOBAL_8_dev_table_I, &_GLOBAL_9_dev_table_I, &_GLOBAL_10_dev_table_I, &_GLOBAL_11_dev_table_I, &_GLOBAL_12_dev_table_I, &_GLOBAL_13_dev_table_I, &_GLOBAL_14_dev_table_I, &_GLOBAL_15_dev_table_I, &_GLOBAL_16_dev_table_I, &_GLOBAL_17_dev_table_I, &_GLOBAL_18_dev_table_I, &_GLOBAL_19_dev_table_I, &_GLOBAL_20_dev_table_I, &_GLOBAL_21_dev_table_I, &_GLOBAL_22_dev_table_I, &_GLOBAL_23_dev_table_I, &_GLOBAL_24_dev_table_I, &_GLOBAL_25_dev_table_I, &_GLOBAL_26_dev_table_I, &_GLOBAL_27_dev_table_I, &_GLOBAL_28_dev_table_I, &_GLOBAL_29_dev_table_I, &_GLOBAL_30_dev_table_I, &_GLOBAL_31_dev_table_I, &_GLOBAL_32_dev_table_I, &_GLOBAL_33_dev_table_I, &_GLOBAL_34_dev_table_I, &_GLOBAL_35_dev_table_I, &_GLOBAL_36_dev_table_I, &_GLOBAL_37_dev_table_I, &_GLOBAL_38_dev_table_I, &_GLOBAL_39_dev_table_I, &_GLOBAL_40_dev_table_I, &_GLOBAL_41_dev_table_I, &_GLOBAL_42_dev_table_I, &_GLOBAL_43_dev_table_I, &_GLOBAL_44_dev_table_I, &_GLOBAL_45_dev_table_I, &_GLOBAL_46_dev_table_I, &_GLOBAL_47_dev_table_I, &_GLOBAL_48_dev_table_I, &_GLOBAL_49_dev_table_I, };    
     


extern void init_irq_proc (void);

typedef  spinlock_t  _GLOBAL_417_T; static  _GLOBAL_417_T  global_sysctl_lock[NUM_STACKS] = {  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  };           


static int use_table(struct ctl_table_header *p)
{
 if (__builtin_expect(!!(p->unregistering), 0))
  return 0;
 p->used++;
 return 1;
}


static void unuse_table(struct ctl_table_header *p)
{
 if (!--p->used)
  if (__builtin_expect(!!(p->unregistering), 0))
   complete(p->unregistering);
}


static void start_unregistering(struct ctl_table_header *p)
{




 if (__builtin_expect(!!(p->used), 0)) {
  struct completion wait;
  init_completion(&wait);
  p->unregistering = &wait;
  do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
  wait_for_completion(&wait);
  do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
 }




 list_del_init(&p->ctl_entry);
}

void  __attribute__ ((__section__ (".init.text"))) sysctl_init(void)
{

 register_proc_table((*_GLOBAL_root_table_54_A[get_stack_id()]), global_proc_sys_root[get_stack_id()], &global_root_table_header[get_stack_id()]);
 init_irq_proc();

}

int do_sysctl(int *name, int nlen, void *oldval, size_t *oldlenp,
        void *newval, size_t newlen)
{
 struct list_head *tmp;
 int error = -20;

 if (nlen <= 0 || nlen >= 10)
  return -20;
 if (oldval) {
  int old_len;
  if (!oldlenp || ({ (old_len) = *oldlenp; 0; }))
   return -14;
 }
 do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
 tmp = &global_root_table_header[get_stack_id()].ctl_entry;
 do {
  struct ctl_table_header *head =
   ({ const typeof( ((struct ctl_table_header *)0)->ctl_entry ) *__mptr = (tmp); (struct ctl_table_header *)( (char *)__mptr - __builtin_offsetof(struct ctl_table_header,ctl_entry) );});
  void *context = ((void *)0);

  if (!use_table(head))
   continue;

  do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);

  error = parse_table(name, nlen, oldval, oldlenp,
     newval, newlen, head->ctl_table,
     &context);
  kfree(context);

  do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
  unuse_table(head);
  if (error != -20)
   break;
 } while ((tmp = tmp->next) != &global_root_table_header[get_stack_id()].ctl_entry);
 do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
 return error;
}

 long sys_sysctl(struct __sysctl_args *args)
{
 struct __sysctl_args tmp;
 int error;

 if (copy_from_user(&tmp, args, sizeof(tmp)))
  return -14;

 do { } while(0);
 error = do_sysctl(tmp.name, tmp.nlen, tmp.oldval, tmp.oldlenp,
     tmp.newval, tmp.newlen);
 do { } while(0);
 return error;
}






static int test_perm(int mode, int op)
{
 if (!get_nsc_task()->euid)
  mode >>= 6;
 else if (in_egroup_p(0))
  mode >>= 3;
 if ((mode & op & 0007) == op)
  return 0;
 return -13;
}

static inline  __attribute__((always_inline)) int ctl_perm(ctl_table *table, int op)
{
 int error;
 error = security_sysctl(table, op);
 if (error)
  return error;
 return test_perm(table->mode, op);
}

static int parse_table(int *name, int nlen,
         void *oldval, size_t *oldlenp,
         void *newval, size_t newlen,
         ctl_table *table, void **context)
{
 int n;
repeat:
 if (!nlen)
  return -20;
 if (({ (n) = *name; 0; }))
  return -14;
 for ( ; table->ctl_name; table++) {
  if (n == table->ctl_name || table->ctl_name == -1) {
   int error;
   if (table->child) {
    if (ctl_perm(table, 001))
     return -1;
    if (table->strategy) {
     error = table->strategy(
      table, name, nlen,
      oldval, oldlenp,
      newval, newlen, context);
     if (error)
      return error;
    }
    name++;
    nlen--;
    table = table->child;
    goto repeat;
   }
   error = do_sysctl_strategy(table, name, nlen,
         oldval, oldlenp,
         newval, newlen, context);
   return error;
  }
 }
 return -20;
}


int do_sysctl_strategy (ctl_table *table,
   int *name, int nlen,
   void *oldval, size_t *oldlenp,
   void *newval, size_t newlen, void **context)
{
 int op = 0, rc;
 size_t len;

 if (oldval)
  op |= 004;
 if (newval)
  op |= 002;
 if (ctl_perm(table, op))
  return -1;

 if (table->strategy) {
  rc = table->strategy(table, name, nlen, oldval, oldlenp,
         newval, newlen, context);
  if (rc < 0)
   return rc;
  if (rc > 0)
   return 0;
 }



 if (table->data && table->maxlen) {
  if (oldval && oldlenp) {
   if (({ (len) = *oldlenp; 0; }))
    return -14;
   if (len) {
    if (len > table->maxlen)
     len = table->maxlen;
    if(copy_to_user(oldval, table->data, len))
     return -14;
    if(({ *(oldlenp) = len; 0; }))
     return -14;
   }
  }
  if (newval && newlen) {
   len = newlen;
   if (len > table->maxlen)
    len = table->maxlen;
   if(copy_from_user(table->data, newval, len))
    return -14;
  }
 }
 return 0;
}
# 1385 "linux-2.6.18/kernel/sysctl.c"
struct ctl_table_header *register_sysctl_table(ctl_table * table,
            int insert_at_head)
{
 struct ctl_table_header *tmp;
 tmp = kmalloc(sizeof(struct ctl_table_header), ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)));
 if (!tmp)
  return ((void *)0);
 tmp->ctl_table = table;
 INIT_LIST_HEAD(&tmp->ctl_entry);
 tmp->used = 0;
 tmp->unregistering = ((void *)0);
 do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
 if (insert_at_head)
  list_add(&tmp->ctl_entry, &global_root_table_header[get_stack_id()].ctl_entry);
 else
  list_add_tail(&tmp->ctl_entry, &global_root_table_header[get_stack_id()].ctl_entry);
 do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);

 register_proc_table(table, global_proc_sys_root[get_stack_id()], tmp);

 return tmp;
}
# 1415 "linux-2.6.18/kernel/sysctl.c"
void unregister_sysctl_table(struct ctl_table_header * header)
{
 do { do { } while (0); } while (0);
 do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
 start_unregistering(header);

 unregister_proc_table(header->ctl_table, global_proc_sys_root[get_stack_id()]);

 do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
 kfree(header);
}
# 1434 "linux-2.6.18/kernel/sysctl.c"
static void register_proc_table(ctl_table * table, struct proc_dir_entry *root, void *set)
{
 struct proc_dir_entry *de;
 int len;
 mode_t mode;

 for (; table->ctl_name; table++) {

  if (!table->procname)
   continue;

  if (!table->proc_handler && !table->child) {
   printk("<4>" "SYSCTL: Can't register %s\n",
    table->procname);
   continue;
  }

  len = strlen(table->procname);
  mode = table->mode;

  de = ((void *)0);
  if (table->proc_handler)
   mode |= 0100000;
  else {
   mode |= 0040000;
   for (de = root->subdir; de; de = de->next) {
    if (proc_match(len, table->procname, de))
     break;
   }

  }

  if (!de) {
   de = create_proc_entry(table->procname, mode, root);
   if (!de)
    continue;
   de->set = set;
   de->data = (void *) table;
   if (table->proc_handler)
    de->proc_fops = &global_proc_sys_file_operations[get_stack_id()];
  }
  table->de = de;
  if (de->mode & 0040000)
   register_proc_table(table->child, de, set);
 }
}




static void unregister_proc_table(ctl_table * table, struct proc_dir_entry *root)
{
 struct proc_dir_entry *de;
 for (; table->ctl_name; table++) {
  if (!(de = table->de))
   continue;
  if (de->mode & 0040000) {
   if (!table->child) {
    printk ("<1>" "Help - malformed sysctl tree on free\n");
    continue;
   }
   unregister_proc_table(table->child, de);


   if (de->subdir)
    continue;
  }






  de->data = ((void *)0);


  if (((&de->count)->counter))
   continue;

  table->de = ((void *)0);
  remove_proc_entry(table->procname, root);
 }
}

static ssize_t do_rw_proc(int write, struct file * file, char * buf,
     size_t count, loff_t *ppos)
{
 int op;
 struct proc_dir_entry *de = PDE(file->f_dentry->d_inode);
 struct ctl_table *table;
 size_t res;
 ssize_t error = -20;

 do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
 if (de && de->data && use_table(de->set)) {




  do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
  table = (struct ctl_table *) de->data;
  if (!table || !table->proc_handler)
   goto out;
  error = -1;
  op = (write ? 002 : 004);
  if (ctl_perm(table, op))
   goto out;


  res = count;
  error = (*table->proc_handler)(table, write, file,
      buf, &res, ppos);
  if (!error)
   error = res;
 out:
  do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
  unuse_table(de->set);
 }
 do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
 return error;
}

static int proc_opensys(struct inode *inode, struct file *file)
{
 if (file->f_mode & 2) {




  if (!(inode->i_mode & 00200))
   return -1;
 }

 return 0;
}

static ssize_t proc_readsys(struct file * file, char * buf,
       size_t count, loff_t *ppos)
{
 return do_rw_proc(0, file, buf, count, ppos);
}

static ssize_t proc_writesys(struct file * file, const char * buf,
        size_t count, loff_t *ppos)
{
 return do_rw_proc(1, file, (char *) buf, count, ppos);
}
# 1600 "linux-2.6.18/kernel/sysctl.c"
int proc_dostring(ctl_table *table, int write, struct file *filp,
    void *buffer, size_t *lenp, loff_t *ppos)
{
 size_t len;
 char *p;
 char c;

 if (!table->data || !table->maxlen || !*lenp ||
     (*ppos && !write)) {
  *lenp = 0;
  return 0;
 }

 if (write) {
  len = 0;
  p = buffer;
  while (len < *lenp) {
   if (({ (c) = *p++; 0; }))
    return -14;
   if (c == 0 || c == '\n')
    break;
   len++;
  }
  if (len >= table->maxlen)
   len = table->maxlen-1;
  if(copy_from_user(table->data, buffer, len))
   return -14;
  ((char *) table->data)[len] = 0;
  *ppos += *lenp;
 } else {
  len = strlen(table->data);
  if (len > table->maxlen)
   len = table->maxlen;
  if (len > *lenp)
   len = *lenp;
  if (len)
   if(copy_to_user(buffer, table->data, len))
    return -14;
  if (len < *lenp) {
   if(({ *(((char *) buffer) + len) = '\n'; 0; }))
    return -14;
   len++;
  }
  *lenp = len;
  *ppos += len;
 }
 return 0;
}






static int proc_doutsstring(ctl_table *table, int write, struct file *filp,
    void *buffer, size_t *lenp, loff_t *ppos)
{
 int r;

 if (!write) {
  down_read(&global_uts_sem[get_stack_id()]);
  r=proc_dostring(table,0,filp,buffer,lenp, ppos);
  up_read(&global_uts_sem[get_stack_id()]);
 } else {
  down_write(&global_uts_sem[get_stack_id()]);
  r=proc_dostring(table,1,filp,buffer,lenp, ppos);
  up_write(&global_uts_sem[get_stack_id()]);
 }
 return r;
}

static int do_proc_dointvec_conv(int *negp, unsigned long *lvalp,
     int *valp,
     int write, void *data)
{
 if (write) {
  *valp = *negp ? -*lvalp : *lvalp;
 } else {
  int val = *valp;
  if (val < 0) {
   *negp = -1;
   *lvalp = (unsigned long)-val;
  } else {
   *negp = 0;
   *lvalp = (unsigned long)val;
  }
 }
 return 0;
}

static int do_proc_dointvec(ctl_table *table, int write, struct file *filp,
    void *buffer, size_t *lenp, loff_t *ppos,
    int (*conv)(int *negp, unsigned long *lvalp, int *valp,
         int write, void *data),
    void *data)
{

 int *i, vleft, first=1, neg, val;
 unsigned long lval;
 size_t left, len;

 char buf[21], *p;
 char *s = buffer;

 if (!table->data || !table->maxlen || !*lenp ||
     (*ppos && !write)) {
  *lenp = 0;
  return 0;
 }

 i = (int *) table->data;
 vleft = table->maxlen / sizeof(*i);
 left = *lenp;

 if (!conv)
  conv = do_proc_dointvec_conv;

 for (; left && vleft--; i++, first=0) {
  if (write) {
   while (left) {
    char c;
    if (({ (c) = *s; 0; }))
     return -14;
    if (!((((*_GLOBAL__ctype_22_A[get_stack_id()])[(int)(unsigned char)(c)])&(0x20)) != 0))
     break;
    left--;
    s++;
   }
   if (!left)
    break;
   neg = 0;
   len = left;
   if (len > sizeof(buf) - 1)
    len = sizeof(buf) - 1;
   if (copy_from_user(buf, s, len))
    return -14;
   buf[len] = 0;
   p = buf;
   if (*p == '-' && left > 1) {
    neg = 1;
    left--, p++;
   }
   if (*p < '0' || *p > '9')
    break;

   lval = simple_strtoul(p, &p, 0);

   len = p-buf;
   if ((len < left) && *p && !((((*_GLOBAL__ctype_22_A[get_stack_id()])[(int)(unsigned char)(*p)])&(0x20)) != 0))
    break;
   if (neg)
    val = -val;
   s += len;
   left -= len;

   if (conv(&neg, &lval, i, 1, data))
    break;
  } else {
   p = buf;
   if (!first)
    *p++ = '\t';

   if (conv(&neg, &lval, i, 0, data))
    break;

   sprintf(p, "%s%lu", neg ? "-" : "", lval);
   len = strlen(buf);
   if (len > left)
    len = left;
   if(copy_to_user(s, buf, len))
    return -14;
   left -= len;
   s += len;
  }
 }

 if (!write && !first && left) {
  if(({ *(s) = '\n'; 0; }))
   return -14;
  left--, s++;
 }
 if (write) {
  while (left) {
   char c;
   if (({ (c) = *s++; 0; }))
    return -14;
   if (!((((*_GLOBAL__ctype_22_A[get_stack_id()])[(int)(unsigned char)(c)])&(0x20)) != 0))
    break;
   left--;
  }
 }
 if (write && first)
  return -22;
 *lenp -= left;
 *ppos += *lenp;
 return 0;

}
# 1813 "linux-2.6.18/kernel/sysctl.c"
int proc_dointvec(ctl_table *table, int write, struct file *filp,
       void *buffer, size_t *lenp, loff_t *ppos)
{
    return do_proc_dointvec(table,write,filp,buffer,lenp,ppos,
           ((void *)0),((void *)0));
}







static int do_proc_dointvec_bset_conv(int *negp, unsigned long *lvalp,
          int *valp,
          int write, void *data)
{
 int op = *(int *)data;
 if (write) {
  int val = *negp ? -*lvalp : *lvalp;
  switch(op) {
  case 0: *valp = val; break;
  case 1: *valp &= val; break;
  case 2: *valp |= val; break;
  case 3: if(*valp < val)
     *valp = val;
    break;
  case 4: if(*valp > val)
    *valp = val;
    break;
  }
 } else {
  int val = *valp;
  if (val < 0) {
   *negp = -1;
   *lvalp = (unsigned long)-val;
  } else {
   *negp = 0;
   *lvalp = (unsigned long)val;
  }
 }
 return 0;
}





int proc_dointvec_bset(ctl_table *table, int write, struct file *filp,
   void *buffer, size_t *lenp, loff_t *ppos)
{
 int op;

 if (!capable(16)) {
  return -1;
 }

 op = (get_nsc_task()->pid == 1) ? 0 : 1;
 return do_proc_dointvec(table,write,filp,buffer,lenp,ppos,
    do_proc_dointvec_bset_conv,&op);
}

struct do_proc_dointvec_minmax_conv_param {
 int *min;
 int *max;
};

static int do_proc_dointvec_minmax_conv(int *negp, unsigned long *lvalp,
     int *valp,
     int write, void *data)
{
 struct do_proc_dointvec_minmax_conv_param *param = data;
 if (write) {
  int val = *negp ? -*lvalp : *lvalp;
  if ((param->min && *param->min > val) ||
      (param->max && *param->max < val))
   return -22;
  *valp = val;
 } else {
  int val = *valp;
  if (val < 0) {
   *negp = -1;
   *lvalp = (unsigned long)-val;
  } else {
   *negp = 0;
   *lvalp = (unsigned long)val;
  }
 }
 return 0;
}
# 1921 "linux-2.6.18/kernel/sysctl.c"
int proc_dointvec_minmax(ctl_table *table, int write, struct file *filp,
    void *buffer, size_t *lenp, loff_t *ppos)
{
 struct do_proc_dointvec_minmax_conv_param param = {
  .min = (int *) table->extra1,
  .max = (int *) table->extra2,
 };
 return do_proc_dointvec(table, write, filp, buffer, lenp, ppos,
    do_proc_dointvec_minmax_conv, &param);
}

static int do_proc_doulongvec_minmax(ctl_table *table, int write,
         struct file *filp,
         void *buffer,
         size_t *lenp, loff_t *ppos,
         unsigned long convmul,
         unsigned long convdiv)
{

 unsigned long *i, *min, *max, val;
 int vleft, first=1, neg;
 size_t len, left;
 char buf[21], *p;
 char *s = buffer;

 if (!table->data || !table->maxlen || !*lenp ||
     (*ppos && !write)) {
  *lenp = 0;
  return 0;
 }

 i = (unsigned long *) table->data;
 min = (unsigned long *) table->extra1;
 max = (unsigned long *) table->extra2;
 vleft = table->maxlen / sizeof(unsigned long);
 left = *lenp;

 for (; left && vleft--; i++, min++, max++, first=0) {
  if (write) {
   while (left) {
    char c;
    if (({ (c) = *s; 0; }))
     return -14;
    if (!((((*_GLOBAL__ctype_22_A[get_stack_id()])[(int)(unsigned char)(c)])&(0x20)) != 0))
     break;
    left--;
    s++;
   }
   if (!left)
    break;
   neg = 0;
   len = left;
   if (len > 21 -1)
    len = 21 -1;
   if (copy_from_user(buf, s, len))
    return -14;
   buf[len] = 0;
   p = buf;
   if (*p == '-' && left > 1) {
    neg = 1;
    left--, p++;
   }
   if (*p < '0' || *p > '9')
    break;
   val = simple_strtoul(p, &p, 0) * convmul / convdiv ;
   len = p-buf;
   if ((len < left) && *p && !((((*_GLOBAL__ctype_22_A[get_stack_id()])[(int)(unsigned char)(*p)])&(0x20)) != 0))
    break;
   if (neg)
    val = -val;
   s += len;
   left -= len;

   if(neg)
    continue;
   if ((min && val < *min) || (max && val > *max))
    continue;
   *i = val;
  } else {
   p = buf;
   if (!first)
    *p++ = '\t';
   sprintf(p, "%lu", convdiv * (*i) / convmul);
   len = strlen(buf);
   if (len > left)
    len = left;
   if(copy_to_user(s, buf, len))
    return -14;
   left -= len;
   s += len;
  }
 }

 if (!write && !first && left) {
  if(({ *(s) = '\n'; 0; }))
   return -14;
  left--, s++;
 }
 if (write) {
  while (left) {
   char c;
   if (({ (c) = *s++; 0; }))
    return -14;
   if (!((((*_GLOBAL__ctype_22_A[get_stack_id()])[(int)(unsigned char)(c)])&(0x20)) != 0))
    break;
   left--;
  }
 }
 if (write && first)
  return -22;
 *lenp -= left;
 *ppos += *lenp;
 return 0;

}
# 2054 "linux-2.6.18/kernel/sysctl.c"
int proc_doulongvec_minmax(ctl_table *table, int write, struct file *filp,
      void *buffer, size_t *lenp, loff_t *ppos)
{
    return do_proc_doulongvec_minmax(table, write, filp, buffer, lenp, ppos, 1l, 1l);
}
# 2078 "linux-2.6.18/kernel/sysctl.c"
int proc_doulongvec_ms_jiffies_minmax(ctl_table *table, int write,
          struct file *filp,
          void *buffer,
          size_t *lenp, loff_t *ppos)
{
    return do_proc_doulongvec_minmax(table, write, filp, buffer,
         lenp, ppos, 1000, 1000l);
}


static int do_proc_dointvec_jiffies_conv(int *negp, unsigned long *lvalp,
      int *valp,
      int write, void *data)
{
 if (write) {
  if (*lvalp > ((long)(~0UL>>1)) / 1000)
   return 1;
  *valp = *negp ? -(*lvalp*1000) : (*lvalp*1000);
 } else {
  int val = *valp;
  unsigned long lval;
  if (val < 0) {
   *negp = -1;
   lval = (unsigned long)-val;
  } else {
   *negp = 0;
   lval = (unsigned long)val;
  }
  *lvalp = lval / 1000;
 }
 return 0;
}

static int do_proc_dointvec_userhz_jiffies_conv(int *negp, unsigned long *lvalp,
      int *valp,
      int write, void *data)
{
 if (write) {
  if (100 < 1000 && *lvalp > (((long)(~0UL>>1)) / 1000) * 100)
   return 1;
  *valp = clock_t_to_jiffies(*negp ? -*lvalp : *lvalp);
 } else {
  int val = *valp;
  unsigned long lval;
  if (val < 0) {
   *negp = -1;
   lval = (unsigned long)-val;
  } else {
   *negp = 0;
   lval = (unsigned long)val;
  }
  *lvalp = jiffies_to_clock_t(lval);
 }
 return 0;
}

static int do_proc_dointvec_ms_jiffies_conv(int *negp, unsigned long *lvalp,
         int *valp,
         int write, void *data)
{
 if (write) {
  *valp = msecs_to_jiffies(*negp ? -*lvalp : *lvalp);
 } else {
  int val = *valp;
  unsigned long lval;
  if (val < 0) {
   *negp = -1;
   lval = (unsigned long)-val;
  } else {
   *negp = 0;
   lval = (unsigned long)val;
  }
  *lvalp = jiffies_to_msecs(lval);
 }
 return 0;
}
# 2171 "linux-2.6.18/kernel/sysctl.c"
int proc_dointvec_jiffies(ctl_table *table, int write, struct file *filp,
     void *buffer, size_t *lenp, loff_t *ppos)
{
    return do_proc_dointvec(table,write,filp,buffer,lenp,ppos,
           do_proc_dointvec_jiffies_conv,((void *)0));
}
# 2194 "linux-2.6.18/kernel/sysctl.c"
int proc_dointvec_userhz_jiffies(ctl_table *table, int write, struct file *filp,
     void *buffer, size_t *lenp, loff_t *ppos)
{
    return do_proc_dointvec(table,write,filp,buffer,lenp,ppos,
           do_proc_dointvec_userhz_jiffies_conv,((void *)0));
}
# 2218 "linux-2.6.18/kernel/sysctl.c"
int proc_dointvec_ms_jiffies(ctl_table *table, int write, struct file *filp,
        void *buffer, size_t *lenp, loff_t *ppos)
{
 return do_proc_dointvec(table, write, filp, buffer, lenp, ppos,
    do_proc_dointvec_ms_jiffies_conv, ((void *)0));
}
# 2298 "linux-2.6.18/kernel/sysctl.c"
int sysctl_string(ctl_table *table, int *name, int nlen,
    void *oldval, size_t *oldlenp,
    void *newval, size_t newlen, void **context)
{
 if (!table->data || !table->maxlen)
  return -20;

 if (oldval && oldlenp) {
  size_t bufsize;
  if (({ (bufsize) = *oldlenp; 0; }))
   return -14;
  if (bufsize) {
   size_t len = strlen(table->data), copied;


   if (len > table->maxlen)
    len = table->maxlen;


   copied = (len >= bufsize) ? bufsize - 1 : len;

   if (copy_to_user(oldval, table->data, copied) ||
       ({ *((char *)(oldval + copied)) = 0; 0; }))
    return -14;
   if (({ *(oldlenp) = len; 0; }))
    return -14;
  }
 }
 if (newval && newlen) {
  size_t len = newlen;
  if (len > table->maxlen)
   len = table->maxlen;
  if(copy_from_user(table->data, newval, len))
   return -14;
  if (len == table->maxlen)
   len--;
  ((char *) table->data)[len] = 0;
 }
 return 1;
}






int sysctl_intvec(ctl_table *table, int *name, int nlen,
  void *oldval, size_t *oldlenp,
  void *newval, size_t newlen, void **context)
{

 if (newval && newlen) {
  int *vec = (int *) newval;
  int *min = (int *) table->extra1;
  int *max = (int *) table->extra2;
  size_t length;
  int i;

  if (newlen % sizeof(int) != 0)
   return -22;

  if (!table->extra1 && !table->extra2)
   return 0;

  if (newlen > table->maxlen)
   newlen = table->maxlen;
  length = newlen / sizeof(int);

  for (i = 0; i < length; i++) {
   int value;
   if (({ (value) = *vec + i; 0; }))
    return -14;
   if (min && value < min[i])
    return -22;
   if (max && value > max[i])
    return -22;
  }
 }
 return 0;
}


int sysctl_jiffies(ctl_table *table, int *name, int nlen,
  void *oldval, size_t *oldlenp,
  void *newval, size_t newlen, void **context)
{
 if (oldval) {
  size_t olen;
  if (oldlenp) {
   if (({ (olen) = *oldlenp; 0; }))
    return -14;
   if (olen!=sizeof(int))
    return -22;
  }
  if (({ *((int *)oldval) = *(int *)(table->data)/1000; 0; }) ||
      (oldlenp && ({ *(oldlenp) = sizeof(int); 0; })))
   return -14;
 }
 if (newval && newlen) {
  int new;
  if (newlen != sizeof(int))
   return -22;
  if (({ (new) = *(int *)newval; 0; }))
   return -14;
  *(int *)(table->data) = new*1000;
 }
 return 1;
}


int sysctl_ms_jiffies(ctl_table *table, int *name, int nlen,
  void *oldval, size_t *oldlenp,
  void *newval, size_t newlen, void **context)
{
 if (oldval) {
  size_t olen;
  if (oldlenp) {
   if (({ (olen) = *oldlenp; 0; }))
    return -14;
   if (olen!=sizeof(int))
    return -22;
  }
  if (({ *((int *)oldval) = jiffies_to_msecs(*(int *)(table->data)); 0; }) ||
      (oldlenp && ({ *(oldlenp) = sizeof(int); 0; })))
   return -14;
 }
 if (newval && newlen) {
  int new;
  if (newlen != sizeof(int))
   return -22;
  if (({ (new) = *(int *)newval; 0; }))
   return -14;
  *(int *)(table->data) = msecs_to_jiffies(new);
 }
 return 1;
}
# 2543 "linux-2.6.18/kernel/sysctl.c"
;
;
;
;
;
;
;
;
;
;
;
;
;
;
