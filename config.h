/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if you're using Bionic */
/* #undef BIONIC_LIBC */

/* DARWIN_VERS value for Mac OS X 10.10 */
#define DARWIN_10_10 101000

/* DARWIN_VERS value for Mac OS X 10.11 */
#define DARWIN_10_11 101100

/* DARWIN_VERS value for macOS 10.12 */
#define DARWIN_10_12 101200

/* DARWIN_VERS value for macOS 10.13 */
#define DARWIN_10_13 101300

/* DARWIN_VERS value for Mac OS X 10.5 */
#define DARWIN_10_5 100500

/* DARWIN_VERS value for Mac OS X 10.6 */
#define DARWIN_10_6 100600

/* DARWIN_VERS value for Mac OS X 10.7 */
#define DARWIN_10_7 100700

/* DARWIN_VERS value for Mac OS X 10.8 */
#define DARWIN_10_8 100800

/* DARWIN_VERS value for Mac OS X 10.9 */
#define DARWIN_10_9 100900

/* Define to 1 if you're using Darwin */
#define DARWIN_LIBC 1

/* Darwin / Mac OS X version */
#define DARWIN_VERS DARWIN_10_13

/* Disable intercept pthread_spin_lock() on MIPS32 and MIPS64. */
/* #undef DISABLE_PTHREAD_SPINLOCK_INTERCEPT */

/* configured to run as an inner Valgrind */
/* #undef ENABLE_INNER */

/* path to GDB */
#define GDB_PATH "/no/gdb/was/found/at/configure/time"

/* Define to 1 if index() and strlen() have been optimized heavily (x86 glibc
   >= 2.12) */
/* #undef GLIBC_MANDATORY_INDEX_AND_STRLEN_REDIRECT */

/* Define to 1 if strlen() has been optimized heavily (amd64 glibc >= 2.10) */
/* #undef GLIBC_MANDATORY_STRLEN_REDIRECT */

/* Define to 1 if you have the <asm/unistd.h> header file. */
/* #undef HAVE_ASM_UNISTD_H */

/* Define to 1 if as supports fxsave64/fxrstor64. */
#define HAVE_AS_AMD64_FXSAVE64 1

/* Define to 1 if as supports floating point phased out category. */
/* #undef HAVE_AS_PPC_FPPO */

/* Define to 1 if as supports mtocrf/mfocrf. */
/* #undef HAVE_AS_PPC_MFTOCRF */

/* Define to 1 if gcc supports __sync_bool_compare_and_swap() and
   __sync_add_and_fetch() for the primary target */
#define HAVE_BUILTIN_ATOMIC 1

/* Define to 1 if g++ supports __sync_bool_compare_and_swap() and
   __sync_add_and_fetch() */
#define HAVE_BUILTIN_ATOMIC_CXX 1

/* Define to 1 if compiler provides __builtin_clz(). */
#define HAVE_BUILTIN_CLZ 1

/* Define to 1 if compiler provides __builtin_ctz(). */
#define HAVE_BUILTIN_CTZ 1

/* Define to 1 if compiler provides __builtin_popcount(). */
#define HAVE_BUILTIN_POPCOUT 1

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the `CLOCK_MONOTONIC' constant. */
#define HAVE_CLOCK_MONOTONIC 1

/* Define to 1 if you have a dlinfo that can do RTLD_DI_TLS_MODID. */
/* #undef HAVE_DLINFO_RTLD_DI_TLS_MODID */

/* Define to 1 if the system has the type `Elf32_Chdr'. */
/* #undef HAVE_ELF32_CHDR */

/* Define to 1 if the system has the type `Elf64_Chdr'. */
/* #undef HAVE_ELF64_CHDR */

/* Define to 1 if you have the <endian.h> header file. */
/* #undef HAVE_ENDIAN_H */

/* Define to 1 if you have the `epoll_create' function. */
/* #undef HAVE_EPOLL_CREATE */

/* Define to 1 if you have the `epoll_pwait' function. */
/* #undef HAVE_EPOLL_PWAIT */

/* Define to 1 if you have the `eventfd' function. */
/* #undef HAVE_EVENTFD */

/* Define to 1 if you have the `eventfd_read' function. */
/* #undef HAVE_EVENTFD_READ */

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `klogctl' function. */
/* #undef HAVE_KLOGCTL */

/* Define to 1 if you have the `pthread' library (-lpthread). */
#define HAVE_LIBPTHREAD 1

/* Define to 1 if you have the `rt' library (-lrt). */
/* #undef HAVE_LIBRT */

/* Define to 1 if you have the `scf' library (-lscf). */
/* #undef HAVE_LIBSCF */

/* Define to 1 if you have the `mallinfo' function. */
/* #undef HAVE_MALLINFO */

/* Define to 1 if you have the `memchr' function. */
#define HAVE_MEMCHR 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the `mkdir' function. */
#define HAVE_MKDIR 1

/* Define to 1 if you have a working `mmap' system call. */
#define HAVE_MMAP 1

/* Define to 1 if you have the <mqueue.h> header file. */
/* #undef HAVE_MQUEUE_H */

/* Define to 1 if you have the `mremap' function. */
/* #undef HAVE_MREMAP */

/* Define to 1 if you have the `ppoll' function. */
/* #undef HAVE_PPOLL */

/* Define to 1 if you have the `process_vm_readv' function. */
/* #undef HAVE_PROCESS_VM_READV */

/* Define to 1 if you have the `process_vm_writev' function. */
/* #undef HAVE_PROCESS_VM_WRITEV */

/* Define to 1 if you have the `pthread_barrier_init' function. */
/* #undef HAVE_PTHREAD_BARRIER_INIT */

/* Define to 1 if you have the `pthread_condattr_setclock' function. */
/* #undef HAVE_PTHREAD_CONDATTR_SETCLOCK */

/* Define to 1 if you have the `pthread_create@glibc2.0' function. */
/* #undef HAVE_PTHREAD_CREATE_GLIBC_2_0 */

/* Define to 1 if you have the `PTHREAD_MUTEX_ADAPTIVE_NP' constant. */
/* #undef HAVE_PTHREAD_MUTEX_ADAPTIVE_NP */

/* Define to 1 if you have the `PTHREAD_MUTEX_ERRORCHECK_NP' constant. */
/* #undef HAVE_PTHREAD_MUTEX_ERRORCHECK_NP */

/* Define to 1 if you have the `PTHREAD_MUTEX_RECURSIVE_NP' constant. */
/* #undef HAVE_PTHREAD_MUTEX_RECURSIVE_NP */

/* Define to 1 if you have the `pthread_mutex_timedlock' function. */
/* #undef HAVE_PTHREAD_MUTEX_TIMEDLOCK */

/* Define to 1 if pthread_mutex_t has a member __data.__kind. */
/* #undef HAVE_PTHREAD_MUTEX_T__DATA__KIND */

/* Define to 1 if pthread_mutex_t has a member called __m_kind. */
/* #undef HAVE_PTHREAD_MUTEX_T__M_KIND */

/* Define to 1 if you have the `PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP'
   constant. */
/* #undef HAVE_PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP */

/* Define to 1 if you have the `pthread_rwlock_t' type. */
#define HAVE_PTHREAD_RWLOCK_T 1

/* Define to 1 if you have the `pthread_rwlock_timedrdlock' function. */
/* #undef HAVE_PTHREAD_RWLOCK_TIMEDRDLOCK */

/* Define to 1 if you have the `pthread_rwlock_timedwrlock' function. */
/* #undef HAVE_PTHREAD_RWLOCK_TIMEDWRLOCK */

/* Define to 1 if you have the `pthread_setname_np' function. */
#define HAVE_PTHREAD_SETNAME_NP 1

/* Define to 1 if you have the `pthread_spin_lock' function. */
/* #undef HAVE_PTHREAD_SPIN_LOCK */

/* Define to 1 if you have the `pthread_yield' function. */
/* #undef HAVE_PTHREAD_YIELD */

/* Define to 1 if you have the `PTRACE_GETREGS' ptrace request. */
/* #undef HAVE_PTRACE_GETREGS */

/* Define to 1 if you have the `readlinkat' function. */
#define HAVE_READLINKAT 1

/* Define to 1 if you have the `semtimedop' function. */
/* #undef HAVE_SEMTIMEDOP */

/* Define to 1 if libstd++ supports annotating shared pointers */
/* #undef HAVE_SHARED_POINTER_ANNOTATION */

/* Define to 1 if you have the `signalfd' function. */
/* #undef HAVE_SIGNALFD */

/* Define to 1 if you have the `sigwaitinfo' function. */
/* #undef HAVE_SIGWAITINFO */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strpbrk' function. */
#define HAVE_STRPBRK 1

/* Define to 1 if you have the `strrchr' function. */
#define HAVE_STRRCHR 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the `syscall' function. */
#define HAVE_SYSCALL 1

/* Define to 1 if you have the <sys/endian.h> header file. */
/* #undef HAVE_SYS_ENDIAN_H */

/* Define to 1 if you have the <sys/epoll.h> header file. */
/* #undef HAVE_SYS_EPOLL_H */

/* Define to 1 if you have the <sys/eventfd.h> header file. */
/* #undef HAVE_SYS_EVENTFD_H */

/* Define to 1 if you have the <sys/klog.h> header file. */
/* #undef HAVE_SYS_KLOG_H */

/* Define to 1 if you have the <sys/lgrp_user_impl.h> header file. */
/* #undef HAVE_SYS_LGRP_USER_IMPL_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/poll.h> header file. */
#define HAVE_SYS_POLL_H 1

/* Define to 1 if you have the <sys/prctl.h> header file. */
/* #undef HAVE_SYS_PRCTL_H */

/* Define to 1 if you have the <sys/signalfd.h> header file. */
/* #undef HAVE_SYS_SIGNALFD_H */

/* Define to 1 if you have the <sys/signal.h> header file. */
#define HAVE_SYS_SIGNAL_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/syscall.h> header file. */
#define HAVE_SYS_SYSCALL_H 1

/* Define to 1 if you have the <sys/sysnvl.h> header file. */
/* #undef HAVE_SYS_SYSNVL_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if <sys/user.h> defines struct user_regs_struct */
/* #undef HAVE_SYS_USER_REGS */

/* can use __thread to define thread-local variables */
/* #undef HAVE_TLS */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have a usable <linux/futex.h> header file. */
/* #undef HAVE_USABLE_LINUX_FUTEX_H */

/* Define to 1 if you have the `utimensat' function. */
#define HAVE_UTIMENSAT 1

/* Define to 1 if you're using Musl libc */
/* #undef MUSL_LIBC */

/* Name of package */
#define PACKAGE "valgrind"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "valgrind-users@lists.sourceforge.net"

/* Define to the full name of this package. */
#define PACKAGE_NAME "Valgrind"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Valgrind 3.13.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "valgrind"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.13.0"

/* Define to 1 if you have the `A_GETSTAT' and `A_SETSTAT' constants. */
/* #undef SOLARIS_AUDITON_STAT */

/* Define to 1 if you have the new `execve' syscall which accepts flags. */
/* #undef SOLARIS_EXECVE_SYSCALL_TAKES_FLAGS */

/* Define to 1 if fpregset_t defines struct _fpchip_state */
/* #undef SOLARIS_FPCHIP_STATE_TAKES_UNDERSCORE */

/* Define to 1 if you have the new `frealpathat' syscall. */
/* #undef SOLARIS_FREALPATHAT_SYSCALL */

/* Define to 1 if you have the new `gethrt' fasttrap. */
/* #undef SOLARIS_GETHRT_FASTTRAP */

/* Define to 1 if you have the new `getrandom' syscall. */
/* #undef SOLARIS_GETRANDOM_SYSCALL */

/* Define to 1 if you have the new `get_zone_offset' fasttrap. */
/* #undef SOLARIS_GETZONEOFFSET_FASTTRAP */

/* Default platform for Valgrind launcher. */
/* #undef SOLARIS_LAUNCHER_DEFAULT_PLATFORM */

/* Define to 1 if you have the new `lwp_name' syscall. */
/* #undef SOLARIS_LWP_NAME_SYSCALL */

/* Define to 1 if you have the new `lwp_sigqueue' syscall. */
/* #undef SOLARIS_LWP_SIGQUEUE_SYSCALL */

/* Define to 1 if you have the new `lwp_sigqueue' syscall which accepts pid.
   */
/* #undef SOLARIS_LWP_SIGQUEUE_SYSCALL_TAKES_PID */

/* Define to 1 if you have the `MODNVL_CTRLMAP' through `MODDEVINFO_CACHE_TS'
   constants. */
/* #undef SOLARIS_MODCTL_MODNVL */

/* Define to 1 if you have the new `accept' syscall. */
/* #undef SOLARIS_NEW_ACCEPT_SYSCALL */

/* Define to 1 if you have the new `pipe' syscall. */
/* #undef SOLARIS_NEW_PIPE_SYSCALL */

/* Define to 1 if nscd attaches to /system/volatile/name_service_door. */
/* #undef SOLARIS_NSCD_DOOR_SYSTEM_VOLATILE */

/* Define to 1 if you have the old Solaris syscalls. */
/* #undef SOLARIS_OLD_SYSCALLS */

/* Define to 1 if you have /proc/self/cmdline. */
/* #undef SOLARIS_PROC_CMDLINE */

/* Define to 1 if you have the `prxregset_t' type. */
/* #undef SOLARIS_PRXREGSET_T */

/* Define to 1 if you have the `PSET_GET_NAME' constants. */
/* #undef SOLARIS_PSET_GET_NAME */

/* Define to 1 if PT_SUNWDTRACE program header provides just an initial thread
   pointer for libc. */
/* #undef SOLARIS_PT_SUNDWTRACE_THRP */

/* Version number of the repository door cache protocol. */
/* #undef SOLARIS_REPCACHE_PROTOCOL_VERSION */

/* Define to 1 if you have the new `sysstat' segment reservation. */
/* #undef SOLARIS_RESERVE_SYSSTAT_ADDR */

/* Define to 1 if you have the new `sysstat_zone' segment reservation. */
/* #undef SOLARIS_RESERVE_SYSSTAT_ZONE_ADDR */

/* Define to 1 if you have the schedctl page executable. */
/* #undef SOLARIS_SCHEDCTL_PAGE_EXEC */

/* Define to 1 if you have the `IPC_XSTAT64', `SHMADV', `SHM_ADV_GET',
   `SHM_ADV_SET' and `SHMGET_OSM' constants. */
/* #undef SOLARIS_SHM_NEW */

/* Define to 1 if you have the `spawn' syscall. */
/* #undef SOLARIS_SPAWN_SYSCALL */

/* Define to 1 if you have the `system_stats' syscall. */
/* #undef SOLARIS_SYSTEM_STATS_SYSCALL */

/* Define to 1 if you have the `TNDB_GET_TNIP' constant. */
/* #undef SOLARIS_TNDB_GET_TNIP */

/* Define to 1 if you have the `TSOL_GETCLEARANCE' and `TSOL_SETCLEARANCE'
   constants. */
/* #undef SOLARIS_TSOL_CLEARANCE */

/* Define to 1 if you have the `utimensat' syscall. */
/* #undef SOLARIS_UTIMENSAT_SYSCALL */

/* Define to 1 if you have the `utimesys' syscall. */
/* #undef SOLARIS_UTIMESYS_SYSCALL */

/* Define to 1 if you have the new `uuidsys' syscall. */
/* #undef SOLARIS_UUIDSYS_SYSCALL */

/* Define to 1 if you have the `ZONE_LIST_DEFUNCT' and `ZONE_GETATTR_DEFUNC'
   constants. */
/* #undef SOLARIS_ZONE_DEFUNCT */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Version number of package */
#define VERSION "3.13.0"

/* Temporary files directory */
#define VG_TMPDIR "/tmp"

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */
