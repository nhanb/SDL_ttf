

typedef __builtin_va_list __gnuc_va_list;

typedef __builtin_va_list va_list;

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
typedef struct
{
    int __val[2];
} __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;

typedef int __daddr_t;
typedef int __key_t;

typedef int __clockid_t;

typedef void *__timer_t;

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

typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;

typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;

typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;

typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;

typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;

typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;

typedef long int intptr_t;

typedef unsigned long int uintptr_t;

typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;

typedef long unsigned int size_t;

extern void *memcpy(void *__restrict __dest, const void *__restrict __src,
                    size_t __n) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern void *memmove(void *__dest, const void *__src, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern void *memccpy(void *__restrict __dest, const void *__restrict __src,
                     int __c, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern void *memset(void *__s, int __c, size_t __n) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern int memcmp(const void *__s1, const void *__s2, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern int __memcmpeq(const void *__s1, const void *__s2, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern void *memchr(const void *__s, int __c, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

extern char *strcpy(char *__restrict __dest, const char *__restrict __src)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern char *strncpy(char *__restrict __dest,
                     const char *__restrict __src, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern char *strcat(char *__restrict __dest, const char *__restrict __src)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern char *strncat(char *__restrict __dest, const char *__restrict __src,
                     size_t __n) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern int strcmp(const char *__s1, const char *__s2)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern int strncmp(const char *__s1, const char *__s2, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern int strcoll(const char *__s1, const char *__s2)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern size_t strxfrm(char *__restrict __dest,
                      const char *__restrict __src, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(2)));

struct __locale_struct
{

    struct __locale_data *__locales[13];

    const unsigned short int *__ctype_b;
    const int *__ctype_tolower;
    const int *__ctype_toupper;

    const char *__names[13];
};

typedef struct __locale_struct *__locale_t;

typedef __locale_t locale_t;

extern int strcoll_l(const char *__s1, const char *__s2, locale_t __l)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2, 3)));

extern size_t strxfrm_l(char *__dest, const char *__src, size_t __n,
                        locale_t __l) __attribute__((__nothrow__)) __attribute__((__nonnull__(2, 4)));

extern char *strdup(const char *__s)
    __attribute__((__nothrow__)) __attribute__((__malloc__)) __attribute__((__nonnull__(1)));

extern char *strndup(const char *__string, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__malloc__)) __attribute__((__nonnull__(1)));

extern char *strchr(const char *__s, int __c)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

extern char *strrchr(const char *__s, int __c)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

extern char *strchrnul(const char *__s, int __c)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

extern size_t strcspn(const char *__s, const char *__reject)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern size_t strspn(const char *__s, const char *__accept)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern char *strpbrk(const char *__s, const char *__accept)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern char *strstr(const char *__haystack, const char *__needle)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern char *strtok(char *__restrict __s, const char *__restrict __delim)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(2)));

extern char *__strtok_r(char *__restrict __s,
                        const char *__restrict __delim,
                        char **__restrict __save_ptr)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(2, 3)));

extern char *strtok_r(char *__restrict __s, const char *__restrict __delim,
                      char **__restrict __save_ptr)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(2, 3)));

extern char *strcasestr(const char *__haystack, const char *__needle)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern void *memmem(const void *__haystack, size_t __haystacklen,
                    const void *__needle, size_t __needlelen)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 3)))

    ;

extern void *__mempcpy(void *__restrict __dest,
                       const void *__restrict __src, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern void *mempcpy(void *__restrict __dest,
                     const void *__restrict __src, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern size_t strlen(const char *__s)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

extern size_t strnlen(const char *__string, size_t __maxlen)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

extern char *strerror(int __errnum) __attribute__((__nothrow__));

extern int strerror_r(int __errnum, char *__buf, size_t __buflen) __asm__(""
                                                                          "__xpg_strerror_r") __attribute__((__nothrow__)) __attribute__((__nonnull__(2)))

;

extern char *strerror_l(int __errnum, locale_t __l) __attribute__((__nothrow__));

extern int bcmp(const void *__s1, const void *__s2, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern void bcopy(const void *__src, void *__dest, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern void bzero(void *__s, size_t __n) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern char *index(const char *__s, int __c)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

extern char *rindex(const char *__s, int __c)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

extern int ffs(int __i) __attribute__((__nothrow__)) __attribute__((__const__));

extern int ffsl(long int __l) __attribute__((__nothrow__)) __attribute__((__const__));
__extension__ extern int ffsll(long long int __ll)
    __attribute__((__nothrow__)) __attribute__((__const__));

extern int strcasecmp(const char *__s1, const char *__s2)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern int strncasecmp(const char *__s1, const char *__s2, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern int strcasecmp_l(const char *__s1, const char *__s2, locale_t __loc)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2, 3)));

extern int strncasecmp_l(const char *__s1, const char *__s2,
                         size_t __n, locale_t __loc)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2, 4)));

extern void explicit_bzero(void *__s, size_t __n) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern char *strsep(char **__restrict __stringp,
                    const char *__restrict __delim)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern char *strsignal(int __sig) __attribute__((__nothrow__));

extern char *__stpcpy(char *__restrict __dest, const char *__restrict __src)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern char *stpcpy(char *__restrict __dest, const char *__restrict __src)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern char *__stpncpy(char *__restrict __dest,
                       const char *__restrict __src, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern char *stpncpy(char *__restrict __dest,
                     const char *__restrict __src, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern size_t strlcpy(char *__restrict __dest,
                      const char *__restrict __src, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern size_t strlcat(char *__restrict __dest,
                      const char *__restrict __src, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

typedef _Complex float __cfloat128 __attribute__((__mode__(__TC__)));

typedef __float128 _Float128;

typedef float _Float32;

typedef double _Float64;

typedef double _Float32x;

typedef long double _Float64x;

typedef int wchar_t;

typedef __gnuc_va_list va_list;

typedef unsigned int wint_t;

typedef struct
{
    int __count;
    union
    {
        unsigned int __wch;
        char __wchb[4];
    } __value;
} __mbstate_t;

typedef __mbstate_t mbstate_t;

struct _IO_FILE;
typedef struct _IO_FILE __FILE;

struct _IO_FILE;

typedef struct _IO_FILE FILE;

struct tm;

extern wchar_t *wcscpy(wchar_t *__restrict __dest,
                       const wchar_t *__restrict __src)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern wchar_t *wcsncpy(wchar_t *__restrict __dest,
                        const wchar_t *__restrict __src, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern size_t wcslcpy(wchar_t *__restrict __dest,
                      const wchar_t *__restrict __src, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern size_t wcslcat(wchar_t *__restrict __dest,
                      const wchar_t *__restrict __src, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern wchar_t *wcscat(wchar_t *__restrict __dest,
                       const wchar_t *__restrict __src)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern wchar_t *wcsncat(wchar_t *__restrict __dest,
                        const wchar_t *__restrict __src, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern int wcscmp(const wchar_t *__s1, const wchar_t *__s2)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern int wcsncmp(const wchar_t *__s1, const wchar_t *__s2, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern int wcscasecmp(const wchar_t *__s1, const wchar_t *__s2) __attribute__((__nothrow__));

extern int wcsncasecmp(const wchar_t *__s1, const wchar_t *__s2,
                       size_t __n) __attribute__((__nothrow__));

extern int wcscasecmp_l(const wchar_t *__s1, const wchar_t *__s2,
                        locale_t __loc) __attribute__((__nothrow__));

extern int wcsncasecmp_l(const wchar_t *__s1, const wchar_t *__s2,
                         size_t __n, locale_t __loc) __attribute__((__nothrow__));

extern int wcscoll(const wchar_t *__s1, const wchar_t *__s2) __attribute__((__nothrow__));

extern size_t wcsxfrm(wchar_t *__restrict __s1,
                      const wchar_t *__restrict __s2, size_t __n) __attribute__((__nothrow__));

extern int wcscoll_l(const wchar_t *__s1, const wchar_t *__s2,
                     locale_t __loc) __attribute__((__nothrow__));

extern size_t wcsxfrm_l(wchar_t *__s1, const wchar_t *__s2,
                        size_t __n, locale_t __loc) __attribute__((__nothrow__));

extern wchar_t *wcsdup(const wchar_t *__s) __attribute__((__nothrow__))
__attribute__((__malloc__));

extern wchar_t *wcschr(const wchar_t *__wcs, wchar_t __wc)
    __attribute__((__nothrow__)) __attribute__((__pure__));

extern wchar_t *wcsrchr(const wchar_t *__wcs, wchar_t __wc)
    __attribute__((__nothrow__)) __attribute__((__pure__));

extern size_t wcscspn(const wchar_t *__wcs, const wchar_t *__reject)
    __attribute__((__nothrow__)) __attribute__((__pure__));

extern size_t wcsspn(const wchar_t *__wcs, const wchar_t *__accept)
    __attribute__((__nothrow__)) __attribute__((__pure__));

extern wchar_t *wcspbrk(const wchar_t *__wcs, const wchar_t *__accept)
    __attribute__((__nothrow__)) __attribute__((__pure__));

extern wchar_t *wcsstr(const wchar_t *__haystack, const wchar_t *__needle)
    __attribute__((__nothrow__)) __attribute__((__pure__));

extern wchar_t *wcstok(wchar_t *__restrict __s,
                       const wchar_t *__restrict __delim,
                       wchar_t **__restrict __ptr) __attribute__((__nothrow__));

extern size_t wcslen(const wchar_t *__s) __attribute__((__nothrow__)) __attribute__((__pure__));

extern size_t wcsnlen(const wchar_t *__s, size_t __maxlen)
    __attribute__((__nothrow__)) __attribute__((__pure__));

extern wchar_t *wmemchr(const wchar_t *__s, wchar_t __c, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__pure__));

extern int wmemcmp(const wchar_t *__s1, const wchar_t *__s2, size_t __n)
    __attribute__((__nothrow__)) __attribute__((__pure__));

extern wchar_t *wmemcpy(wchar_t *__restrict __s1,
                        const wchar_t *__restrict __s2, size_t __n) __attribute__((__nothrow__));

extern wchar_t *wmemmove(wchar_t *__s1, const wchar_t *__s2, size_t __n)
    __attribute__((__nothrow__));

extern wchar_t *wmemset(wchar_t *__s, wchar_t __c, size_t __n) __attribute__((__nothrow__));

extern wint_t btowc(int __c) __attribute__((__nothrow__));

extern int wctob(wint_t __c) __attribute__((__nothrow__));

extern int mbsinit(const mbstate_t *__ps) __attribute__((__nothrow__)) __attribute__((__pure__));

extern size_t mbrtowc(wchar_t *__restrict __pwc,
                      const char *__restrict __s, size_t __n,
                      mbstate_t *__restrict __p) __attribute__((__nothrow__));

extern size_t wcrtomb(char *__restrict __s, wchar_t __wc,
                      mbstate_t *__restrict __ps) __attribute__((__nothrow__));

extern size_t __mbrlen(const char *__restrict __s, size_t __n,
                       mbstate_t *__restrict __ps) __attribute__((__nothrow__));
extern size_t mbrlen(const char *__restrict __s, size_t __n,
                     mbstate_t *__restrict __ps) __attribute__((__nothrow__));

extern size_t mbsrtowcs(wchar_t *__restrict __dst,
                        const char **__restrict __src, size_t __len,
                        mbstate_t *__restrict __ps) __attribute__((__nothrow__));

extern size_t wcsrtombs(char *__restrict __dst,
                        const wchar_t **__restrict __src, size_t __len,
                        mbstate_t *__restrict __ps) __attribute__((__nothrow__));

extern size_t mbsnrtowcs(wchar_t *__restrict __dst,
                         const char **__restrict __src, size_t __nmc,
                         size_t __len, mbstate_t *__restrict __ps) __attribute__((__nothrow__));

extern size_t wcsnrtombs(char *__restrict __dst,
                         const wchar_t **__restrict __src,
                         size_t __nwc, size_t __len,
                         mbstate_t *__restrict __ps) __attribute__((__nothrow__));

extern double wcstod(const wchar_t *__restrict __nptr,
                     wchar_t **__restrict __endptr) __attribute__((__nothrow__));

extern float wcstof(const wchar_t *__restrict __nptr,
                    wchar_t **__restrict __endptr) __attribute__((__nothrow__));
extern long double wcstold(const wchar_t *__restrict __nptr,
                           wchar_t **__restrict __endptr) __attribute__((__nothrow__));

extern long int wcstol(const wchar_t *__restrict __nptr,
                       wchar_t **__restrict __endptr, int __base) __attribute__((__nothrow__));

extern unsigned long int wcstoul(const wchar_t *__restrict __nptr,
                                 wchar_t **__restrict __endptr, int __base)
    __attribute__((__nothrow__));

__extension__ extern long long int wcstoll(const wchar_t *__restrict __nptr,
                                           wchar_t **__restrict __endptr, int __base)
    __attribute__((__nothrow__));

__extension__ extern unsigned long long int wcstoull(const wchar_t *__restrict __nptr,
                                                     wchar_t **__restrict __endptr,
                                                     int __base) __attribute__((__nothrow__));

extern wchar_t *wcpcpy(wchar_t *__restrict __dest,
                       const wchar_t *__restrict __src) __attribute__((__nothrow__));

extern wchar_t *wcpncpy(wchar_t *__restrict __dest,
                        const wchar_t *__restrict __src, size_t __n)
    __attribute__((__nothrow__));

extern __FILE *open_wmemstream(wchar_t **__bufloc, size_t *__sizeloc) __attribute__((__nothrow__))
__attribute__((__malloc__));

extern int fwide(__FILE *__fp, int __mode) __attribute__((__nothrow__));

extern int fwprintf(__FILE *__restrict __stream,
                    const wchar_t *__restrict __format, ...);

extern int wprintf(const wchar_t *__restrict __format, ...);

extern int swprintf(wchar_t *__restrict __s, size_t __n,
                    const wchar_t *__restrict __format, ...)
    __attribute__((__nothrow__));

extern int vfwprintf(__FILE *__restrict __s,
                     const wchar_t *__restrict __format,
                     __gnuc_va_list __arg);

extern int vwprintf(const wchar_t *__restrict __format,
                    __gnuc_va_list __arg);

extern int vswprintf(wchar_t *__restrict __s, size_t __n,
                     const wchar_t *__restrict __format,
                     __gnuc_va_list __arg)
    __attribute__((__nothrow__));

extern int fwscanf(__FILE *__restrict __stream,
                   const wchar_t *__restrict __format, ...);

extern int wscanf(const wchar_t *__restrict __format, ...);

extern int swscanf(const wchar_t *__restrict __s,
                   const wchar_t *__restrict __format, ...)
    __attribute__((__nothrow__));

extern int fwscanf(__FILE *__restrict __stream, const wchar_t *__restrict __format, ...) __asm__(""
                                                                                                 "__isoc99_fwscanf")

    ;
extern int wscanf(const wchar_t *__restrict __format, ...) __asm__(""
                                                                   "__isoc99_wscanf")

    ;
extern int swscanf(const wchar_t *__restrict __s, const wchar_t *__restrict __format, ...) __asm__(""
                                                                                                   "__isoc99_swscanf") __attribute__((__nothrow__))

;

extern int vfwscanf(__FILE *__restrict __s,
                    const wchar_t *__restrict __format,
                    __gnuc_va_list __arg);

extern int vwscanf(const wchar_t *__restrict __format,
                   __gnuc_va_list __arg);

extern int vswscanf(const wchar_t *__restrict __s,
                    const wchar_t *__restrict __format,
                    __gnuc_va_list __arg)
    __attribute__((__nothrow__));

extern int vfwscanf(__FILE *__restrict __s, const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__(""
                                                                                                              "__isoc99_vfwscanf")

    ;
extern int vwscanf(const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__(""
                                                                                     "__isoc99_vwscanf")

    ;
extern int vswscanf(const wchar_t *__restrict __s, const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__(""
                                                                                                                     "__isoc99_vswscanf") __attribute__((__nothrow__))

;

extern wint_t fgetwc(__FILE *__stream);
extern wint_t getwc(__FILE *__stream);

extern wint_t getwchar(void);

extern wint_t fputwc(wchar_t __wc, __FILE *__stream);
extern wint_t putwc(wchar_t __wc, __FILE *__stream);

extern wint_t putwchar(wchar_t __wc);

extern wchar_t *fgetws(wchar_t *__restrict __ws, int __n,
                       __FILE *__restrict __stream);

extern int fputws(const wchar_t *__restrict __ws,
                  __FILE *__restrict __stream);

extern wint_t ungetwc(wint_t __wc, __FILE *__stream);

extern size_t wcsftime(wchar_t *__restrict __s, size_t __maxsize,
                       const wchar_t *__restrict __format,
                       const struct tm *__restrict __tp) __attribute__((__nothrow__));

typedef int __gwchar_t;

typedef struct
{
    long int quot;
    long int rem;
} imaxdiv_t;

extern intmax_t imaxabs(intmax_t __n) __attribute__((__nothrow__)) __attribute__((__const__));

extern imaxdiv_t imaxdiv(intmax_t __numer, intmax_t __denom)
    __attribute__((__nothrow__)) __attribute__((__const__));

extern intmax_t strtoimax(const char *__restrict __nptr,
                          char **__restrict __endptr, int __base) __attribute__((__nothrow__));

extern uintmax_t strtoumax(const char *__restrict __nptr,
                           char **__restrict __endptr, int __base) __attribute__((__nothrow__));

extern intmax_t wcstoimax(const __gwchar_t *__restrict __nptr,
                          __gwchar_t **__restrict __endptr, int __base)
    __attribute__((__nothrow__));

extern uintmax_t wcstoumax(const __gwchar_t *__restrict __nptr,
                           __gwchar_t **__restrict __endptr, int __base)
    __attribute__((__nothrow__));

typedef int8_t Sint8;

typedef uint8_t Uint8;

typedef int16_t Sint16;

typedef uint16_t Uint16;

typedef int32_t Sint32;

typedef uint32_t Uint32;

typedef int64_t Sint64;

typedef uint64_t Uint64;

typedef Sint64 SDL_Time;

_Static_assert(sizeof(_Bool) == 1, "sizeof(bool) == 1");
_Static_assert(sizeof(Uint8) == 1, "sizeof(Uint8) == 1");
_Static_assert(sizeof(Sint8) == 1, "sizeof(Sint8) == 1");
_Static_assert(sizeof(Uint16) == 2, "sizeof(Uint16) == 2");
_Static_assert(sizeof(Sint16) == 2, "sizeof(Sint16) == 2");
_Static_assert(sizeof(Uint32) == 4, "sizeof(Uint32) == 4");
_Static_assert(sizeof(Sint32) == 4, "sizeof(Sint32) == 4");
_Static_assert(sizeof(Uint64) == 8, "sizeof(Uint64) == 8");
_Static_assert(sizeof(Sint64) == 8, "sizeof(Sint64) == 8");

_Static_assert(sizeof(Uint64) <= sizeof(unsigned long long), "sizeof(Uint64) <= sizeof(unsigned long long)");
_Static_assert(sizeof(size_t) <= sizeof(unsigned long long), "sizeof(size_t) <= sizeof(unsigned long long)");

typedef struct SDL_alignment_test
{
    Uint8 a;
    void *b;
} SDL_alignment_test;
_Static_assert(sizeof(SDL_alignment_test) == (2 * sizeof(void *)), "sizeof(SDL_alignment_test) == (2 * sizeof(void *))");
_Static_assert((int)~(int)0 == (int)(-1), "(int)~(int)0 == (int)(-1)");

typedef enum SDL_DUMMY_ENUM
{
    DUMMY_ENUM_VALUE
} SDL_DUMMY_ENUM;

_Static_assert(sizeof(SDL_DUMMY_ENUM) == sizeof(int), "sizeof(SDL_DUMMY_ENUM) == sizeof(int)");

extern __attribute__((visibility("default"))) __attribute__((malloc)) void *SDL_malloc(size_t size);

extern __attribute__((visibility("default"))) __attribute__((malloc)) __attribute__((alloc_size(1, 2))) void *SDL_calloc(size_t nmemb, size_t size);

extern __attribute__((visibility("default"))) __attribute__((alloc_size(2))) void *SDL_realloc(void *mem, size_t size);

extern __attribute__((visibility("default"))) void SDL_free(void *mem);

typedef void *(*SDL_malloc_func)(size_t size);

typedef void *(*SDL_calloc_func)(size_t nmemb, size_t size);

typedef void *(*SDL_realloc_func)(void *mem, size_t size);

typedef void (*SDL_free_func)(void *mem);

extern __attribute__((visibility("default"))) void SDL_GetOriginalMemoryFunctions(SDL_malloc_func *malloc_func,
                                                                                  SDL_calloc_func *calloc_func,
                                                                                  SDL_realloc_func *realloc_func,
                                                                                  SDL_free_func *free_func);

extern __attribute__((visibility("default"))) void SDL_GetMemoryFunctions(SDL_malloc_func *malloc_func,
                                                                          SDL_calloc_func *calloc_func,
                                                                          SDL_realloc_func *realloc_func,
                                                                          SDL_free_func *free_func);

extern __attribute__((visibility("default"))) _Bool SDL_SetMemoryFunctions(SDL_malloc_func malloc_func,
                                                                           SDL_calloc_func calloc_func,
                                                                           SDL_realloc_func realloc_func,
                                                                           SDL_free_func free_func);

extern __attribute__((visibility("default"))) __attribute__((malloc)) void *SDL_aligned_alloc(size_t alignment, size_t size);

extern __attribute__((visibility("default"))) void SDL_aligned_free(void *mem);

extern __attribute__((visibility("default"))) int SDL_GetNumAllocations(void);

typedef struct SDL_Environment SDL_Environment;

extern __attribute__((visibility("default"))) SDL_Environment *SDL_GetEnvironment(void);

extern __attribute__((visibility("default"))) SDL_Environment *SDL_CreateEnvironment(_Bool populated);

extern __attribute__((visibility("default"))) const char *SDL_GetEnvironmentVariable(SDL_Environment *env, const char *name);

extern __attribute__((visibility("default"))) char **SDL_GetEnvironmentVariables(SDL_Environment *env);

extern __attribute__((visibility("default"))) _Bool SDL_SetEnvironmentVariable(SDL_Environment *env, const char *name, const char *value, _Bool overwrite);

extern __attribute__((visibility("default"))) _Bool SDL_UnsetEnvironmentVariable(SDL_Environment *env, const char *name);

extern __attribute__((visibility("default"))) void SDL_DestroyEnvironment(SDL_Environment *env);

extern __attribute__((visibility("default"))) const char *SDL_getenv(const char *name);

extern __attribute__((visibility("default"))) const char *SDL_getenv_unsafe(const char *name);

extern __attribute__((visibility("default"))) int SDL_setenv_unsafe(const char *name, const char *value, int overwrite);

extern __attribute__((visibility("default"))) int SDL_unsetenv_unsafe(const char *name);

typedef int (*SDL_CompareCallback)(const void *a, const void *b);

extern __attribute__((visibility("default"))) void SDL_qsort(void *base, size_t nmemb, size_t size, SDL_CompareCallback compare);

extern __attribute__((visibility("default"))) void *SDL_bsearch(const void *key, const void *base, size_t nmemb, size_t size, SDL_CompareCallback compare);

typedef int (*SDL_CompareCallback_r)(void *userdata, const void *a, const void *b);

extern __attribute__((visibility("default"))) void SDL_qsort_r(void *base, size_t nmemb, size_t size, SDL_CompareCallback_r compare, void *userdata);

extern __attribute__((visibility("default"))) void *SDL_bsearch_r(const void *key, const void *base, size_t nmemb, size_t size, SDL_CompareCallback_r compare, void *userdata);

extern __attribute__((visibility("default"))) int SDL_abs(int x);

extern __attribute__((visibility("default"))) int SDL_isalpha(int x);

extern __attribute__((visibility("default"))) int SDL_isalnum(int x);

extern __attribute__((visibility("default"))) int SDL_isblank(int x);

extern __attribute__((visibility("default"))) int SDL_iscntrl(int x);

extern __attribute__((visibility("default"))) int SDL_isdigit(int x);

extern __attribute__((visibility("default"))) int SDL_isxdigit(int x);

extern __attribute__((visibility("default"))) int SDL_ispunct(int x);

extern __attribute__((visibility("default"))) int SDL_isspace(int x);

extern __attribute__((visibility("default"))) int SDL_isupper(int x);

extern __attribute__((visibility("default"))) int SDL_islower(int x);

extern __attribute__((visibility("default"))) int SDL_isprint(int x);

extern __attribute__((visibility("default"))) int SDL_isgraph(int x);

extern __attribute__((visibility("default"))) int SDL_toupper(int x);

extern __attribute__((visibility("default"))) int SDL_tolower(int x);

extern __attribute__((visibility("default"))) Uint16 SDL_crc16(Uint16 crc, const void *data, size_t len);

extern __attribute__((visibility("default"))) Uint32 SDL_crc32(Uint32 crc, const void *data, size_t len);

extern __attribute__((visibility("default"))) Uint32 SDL_murmur3_32(const void *data, size_t len, Uint32 seed);

extern __attribute__((visibility("default"))) void *SDL_memcpy(void *dst, const void *src, size_t len);

extern __attribute__((visibility("default"))) void *SDL_memmove(void *dst, const void *src, size_t len);

extern __attribute__((visibility("default"))) void *SDL_memset(void *dst, int c, size_t len);

extern __attribute__((visibility("default"))) void *SDL_memset4(void *dst, Uint32 val, size_t dwords);

extern __attribute__((visibility("default"))) int SDL_memcmp(const void *s1, const void *s2, size_t len);

extern __attribute__((visibility("default"))) size_t SDL_wcslen(const wchar_t *wstr);

extern __attribute__((visibility("default"))) size_t SDL_wcsnlen(const wchar_t *wstr, size_t maxlen);

extern __attribute__((visibility("default"))) size_t SDL_wcslcpy(wchar_t *dst, const wchar_t *src, size_t maxlen);

extern __attribute__((visibility("default"))) size_t SDL_wcslcat(wchar_t *dst, const wchar_t *src, size_t maxlen);

extern __attribute__((visibility("default"))) wchar_t *SDL_wcsdup(const wchar_t *wstr);

extern __attribute__((visibility("default"))) wchar_t *SDL_wcsstr(const wchar_t *haystack, const wchar_t *needle);

extern __attribute__((visibility("default"))) wchar_t *SDL_wcsnstr(const wchar_t *haystack, const wchar_t *needle, size_t maxlen);

extern __attribute__((visibility("default"))) int SDL_wcscmp(const wchar_t *str1, const wchar_t *str2);

extern __attribute__((visibility("default"))) int SDL_wcsncmp(const wchar_t *str1, const wchar_t *str2, size_t maxlen);

extern __attribute__((visibility("default"))) int SDL_wcscasecmp(const wchar_t *str1, const wchar_t *str2);

extern __attribute__((visibility("default"))) int SDL_wcsncasecmp(const wchar_t *str1, const wchar_t *str2, size_t maxlen);

extern __attribute__((visibility("default"))) long SDL_wcstol(const wchar_t *str, wchar_t **endp, int base);

extern __attribute__((visibility("default"))) size_t SDL_strlen(const char *str);

extern __attribute__((visibility("default"))) size_t SDL_strnlen(const char *str, size_t maxlen);

extern __attribute__((visibility("default"))) size_t SDL_strlcpy(char *dst, const char *src, size_t maxlen);

extern __attribute__((visibility("default"))) size_t SDL_utf8strlcpy(char *dst, const char *src, size_t dst_bytes);

extern __attribute__((visibility("default"))) size_t SDL_strlcat(char *dst, const char *src, size_t maxlen);

extern __attribute__((visibility("default"))) __attribute__((malloc)) char *SDL_strdup(const char *str);

extern __attribute__((visibility("default"))) __attribute__((malloc)) char *SDL_strndup(const char *str, size_t maxlen);

extern __attribute__((visibility("default"))) char *SDL_strrev(char *str);

extern __attribute__((visibility("default"))) char *SDL_strupr(char *str);

extern __attribute__((visibility("default"))) char *SDL_strlwr(char *str);

extern __attribute__((visibility("default"))) char *SDL_strchr(const char *str, int c);

extern __attribute__((visibility("default"))) char *SDL_strrchr(const char *str, int c);

extern __attribute__((visibility("default"))) char *SDL_strstr(const char *haystack, const char *needle);

extern __attribute__((visibility("default"))) char *SDL_strnstr(const char *haystack, const char *needle, size_t maxlen);

extern __attribute__((visibility("default"))) char *SDL_strcasestr(const char *haystack, const char *needle);

extern __attribute__((visibility("default"))) char *SDL_strtok_r(char *str, const char *delim, char **saveptr);

extern __attribute__((visibility("default"))) size_t SDL_utf8strlen(const char *str);

extern __attribute__((visibility("default"))) size_t SDL_utf8strnlen(const char *str, size_t bytes);

extern __attribute__((visibility("default"))) char *SDL_itoa(int value, char *str, int radix);

extern __attribute__((visibility("default"))) char *SDL_uitoa(unsigned int value, char *str, int radix);

extern __attribute__((visibility("default"))) char *SDL_ltoa(long value, char *str, int radix);

extern __attribute__((visibility("default"))) char *SDL_ultoa(unsigned long value, char *str, int radix);

extern __attribute__((visibility("default"))) char *SDL_lltoa(long long value, char *str, int radix);

extern __attribute__((visibility("default"))) char *SDL_ulltoa(unsigned long long value, char *str, int radix);

extern __attribute__((visibility("default"))) int SDL_atoi(const char *str);

extern __attribute__((visibility("default"))) double SDL_atof(const char *str);

extern __attribute__((visibility("default"))) long SDL_strtol(const char *str, char **endp, int base);

extern __attribute__((visibility("default"))) unsigned long SDL_strtoul(const char *str, char **endp, int base);

extern __attribute__((visibility("default"))) long long SDL_strtoll(const char *str, char **endp, int base);

extern __attribute__((visibility("default"))) unsigned long long SDL_strtoull(const char *str, char **endp, int base);

extern __attribute__((visibility("default"))) double SDL_strtod(const char *str, char **endp);

extern __attribute__((visibility("default"))) int SDL_strcmp(const char *str1, const char *str2);

extern __attribute__((visibility("default"))) int SDL_strncmp(const char *str1, const char *str2, size_t maxlen);

extern __attribute__((visibility("default"))) int SDL_strcasecmp(const char *str1, const char *str2);

extern __attribute__((visibility("default"))) int SDL_strncasecmp(const char *str1, const char *str2, size_t maxlen);

extern __attribute__((visibility("default"))) char *SDL_strpbrk(const char *str, const char *breakset);

extern __attribute__((visibility("default"))) Uint32 SDL_StepUTF8(const char **pstr, size_t *pslen);

extern __attribute__((visibility("default"))) Uint32 SDL_StepBackUTF8(const char *start, const char **pstr);

extern __attribute__((visibility("default"))) char *SDL_UCS4ToUTF8(Uint32 codepoint, char *dst);

extern __attribute__((visibility("default"))) int SDL_sscanf(const char *text, const char *fmt, ...) __attribute__((format(__scanf__, 2, 2 + 1)));

extern __attribute__((visibility("default"))) int SDL_vsscanf(const char *text, const char *fmt, va_list ap) __attribute__((format(__scanf__, 2, 0)));

extern __attribute__((visibility("default"))) int SDL_snprintf(char *text, size_t maxlen, const char *fmt, ...) __attribute__((format(__printf__, 3, 3 + 1)));

extern __attribute__((visibility("default"))) int SDL_swprintf(wchar_t *text, size_t maxlen, const wchar_t *fmt, ...);

extern __attribute__((visibility("default"))) int SDL_vsnprintf(char *text, size_t maxlen, const char *fmt, va_list ap) __attribute__((format(__printf__, 3, 0)));

extern __attribute__((visibility("default"))) int SDL_vswprintf(wchar_t *text, size_t maxlen, const wchar_t *fmt, va_list ap);

extern __attribute__((visibility("default"))) int SDL_asprintf(char **strp, const char *fmt, ...) __attribute__((format(__printf__, 2, 2 + 1)));

extern __attribute__((visibility("default"))) int SDL_vasprintf(char **strp, const char *fmt, va_list ap) __attribute__((format(__printf__, 2, 0)));

extern __attribute__((visibility("default"))) void SDL_srand(Uint64 seed);

extern __attribute__((visibility("default"))) Sint32 SDL_rand(Sint32 n);

extern __attribute__((visibility("default"))) float SDL_randf(void);

extern __attribute__((visibility("default"))) Uint32 SDL_rand_bits(void);

extern __attribute__((visibility("default"))) Sint32 SDL_rand_r(Uint64 *state, Sint32 n);

extern __attribute__((visibility("default"))) float SDL_randf_r(Uint64 *state);

extern __attribute__((visibility("default"))) Uint32 SDL_rand_bits_r(Uint64 *state);

extern __attribute__((visibility("default"))) double SDL_acos(double x);

extern __attribute__((visibility("default"))) float SDL_acosf(float x);

extern __attribute__((visibility("default"))) double SDL_asin(double x);

extern __attribute__((visibility("default"))) float SDL_asinf(float x);

extern __attribute__((visibility("default"))) double SDL_atan(double x);

extern __attribute__((visibility("default"))) float SDL_atanf(float x);

extern __attribute__((visibility("default"))) double SDL_atan2(double y, double x);

extern __attribute__((visibility("default"))) float SDL_atan2f(float y, float x);

extern __attribute__((visibility("default"))) double SDL_ceil(double x);

extern __attribute__((visibility("default"))) float SDL_ceilf(float x);

extern __attribute__((visibility("default"))) double SDL_copysign(double x, double y);

extern __attribute__((visibility("default"))) float SDL_copysignf(float x, float y);

extern __attribute__((visibility("default"))) double SDL_cos(double x);

extern __attribute__((visibility("default"))) float SDL_cosf(float x);

extern __attribute__((visibility("default"))) double SDL_exp(double x);

extern __attribute__((visibility("default"))) float SDL_expf(float x);

extern __attribute__((visibility("default"))) double SDL_fabs(double x);

extern __attribute__((visibility("default"))) float SDL_fabsf(float x);

extern __attribute__((visibility("default"))) double SDL_floor(double x);

extern __attribute__((visibility("default"))) float SDL_floorf(float x);

extern __attribute__((visibility("default"))) double SDL_trunc(double x);

extern __attribute__((visibility("default"))) float SDL_truncf(float x);

extern __attribute__((visibility("default"))) double SDL_fmod(double x, double y);

extern __attribute__((visibility("default"))) float SDL_fmodf(float x, float y);

extern __attribute__((visibility("default"))) int SDL_isinf(double x);

extern __attribute__((visibility("default"))) int SDL_isinff(float x);

extern __attribute__((visibility("default"))) int SDL_isnan(double x);

extern __attribute__((visibility("default"))) int SDL_isnanf(float x);

extern __attribute__((visibility("default"))) double SDL_log(double x);

extern __attribute__((visibility("default"))) float SDL_logf(float x);

extern __attribute__((visibility("default"))) double SDL_log10(double x);

extern __attribute__((visibility("default"))) float SDL_log10f(float x);

extern __attribute__((visibility("default"))) double SDL_modf(double x, double *y);

extern __attribute__((visibility("default"))) float SDL_modff(float x, float *y);

extern __attribute__((visibility("default"))) double SDL_pow(double x, double y);

extern __attribute__((visibility("default"))) float SDL_powf(float x, float y);

extern __attribute__((visibility("default"))) double SDL_round(double x);

extern __attribute__((visibility("default"))) float SDL_roundf(float x);

extern __attribute__((visibility("default"))) long SDL_lround(double x);

extern __attribute__((visibility("default"))) long SDL_lroundf(float x);

extern __attribute__((visibility("default"))) double SDL_scalbn(double x, int n);

extern __attribute__((visibility("default"))) float SDL_scalbnf(float x, int n);

extern __attribute__((visibility("default"))) double SDL_sin(double x);

extern __attribute__((visibility("default"))) float SDL_sinf(float x);

extern __attribute__((visibility("default"))) double SDL_sqrt(double x);

extern __attribute__((visibility("default"))) float SDL_sqrtf(float x);

extern __attribute__((visibility("default"))) double SDL_tan(double x);

extern __attribute__((visibility("default"))) float SDL_tanf(float x);

typedef struct SDL_iconv_data_t *SDL_iconv_t;

extern __attribute__((visibility("default"))) SDL_iconv_t SDL_iconv_open(const char *tocode,
                                                                         const char *fromcode);

extern __attribute__((visibility("default"))) int SDL_iconv_close(SDL_iconv_t cd);

extern __attribute__((visibility("default"))) size_t SDL_iconv(SDL_iconv_t cd, const char **inbuf,
                                                               size_t *inbytesleft, char **outbuf,
                                                               size_t *outbytesleft);

extern __attribute__((visibility("default"))) char *SDL_iconv_string(const char *tocode,
                                                                     const char *fromcode,
                                                                     const char *inbuf,
                                                                     size_t inbytesleft);

__attribute__((always_inline)) static __inline__ _Bool SDL_size_mul_check_overflow(size_t a, size_t b, size_t *ret)
{
    if (a != 0 && b > (18446744073709551615UL) / a) {
        return 0;
    }
    *ret = a * b;
    return 1;
}

__attribute__((always_inline)) static __inline__ _Bool SDL_size_mul_check_overflow_builtin(size_t a, size_t b, size_t *ret)
{
    return (__builtin_mul_overflow(a, b, ret) == 0);
}

__attribute__((always_inline)) static __inline__ _Bool SDL_size_add_check_overflow(size_t a, size_t b, size_t *ret)
{
    if (b > (18446744073709551615UL) - a) {
        return 0;
    }
    *ret = a + b;
    return 1;
}

__attribute__((always_inline)) static __inline__ _Bool SDL_size_add_check_overflow_builtin(size_t a, size_t b, size_t *ret)
{
    return (__builtin_add_overflow(a, b, ret) == 0);
}

typedef void (*SDL_FunctionPointer)(void);

typedef enum SDL_AssertState
{
    SDL_ASSERTION_RETRY,
    SDL_ASSERTION_BREAK,
    SDL_ASSERTION_ABORT,
    SDL_ASSERTION_IGNORE,
    SDL_ASSERTION_ALWAYS_IGNORE
} SDL_AssertState;

typedef struct SDL_AssertData
{
    _Bool always_ignore;
    unsigned int trigger_count;
    const char *condition;
    const char *filename;
    int linenum;
    const char *function;
    const struct SDL_AssertData *next;
} SDL_AssertData;

extern __attribute__((visibility("default"))) SDL_AssertState SDL_ReportAssertion(SDL_AssertData *data,
                                                                                  const char *func,
                                                                                  const char *file, int line) __attribute__((analyzer_noreturn));

typedef SDL_AssertState (*SDL_AssertionHandler)(
    const SDL_AssertData *data, void *userdata);

extern __attribute__((visibility("default"))) void SDL_SetAssertionHandler(
    SDL_AssertionHandler handler,
    void *userdata);

extern __attribute__((visibility("default"))) SDL_AssertionHandler SDL_GetDefaultAssertionHandler(void);

extern __attribute__((visibility("default"))) SDL_AssertionHandler SDL_GetAssertionHandler(void **puserdata);

extern __attribute__((visibility("default"))) const SDL_AssertData *SDL_GetAssertionReport(void);

extern __attribute__((visibility("default"))) void SDL_ResetAssertionReport(void);

typedef struct SDL_AsyncIO SDL_AsyncIO;

typedef enum SDL_AsyncIOTaskType
{
    SDL_ASYNCIO_TASK_READ,
    SDL_ASYNCIO_TASK_WRITE,
    SDL_ASYNCIO_TASK_CLOSE
} SDL_AsyncIOTaskType;

typedef enum SDL_AsyncIOResult
{
    SDL_ASYNCIO_COMPLETE,
    SDL_ASYNCIO_FAILURE,
    SDL_ASYNCIO_CANCELED
} SDL_AsyncIOResult;

typedef struct SDL_AsyncIOOutcome
{
    SDL_AsyncIO *asyncio;
    SDL_AsyncIOTaskType type;
    SDL_AsyncIOResult result;
    void *buffer;
    Uint64 offset;
    Uint64 bytes_requested;
    Uint64 bytes_transferred;
    void *userdata;
} SDL_AsyncIOOutcome;

typedef struct SDL_AsyncIOQueue SDL_AsyncIOQueue;

extern __attribute__((visibility("default"))) SDL_AsyncIO *SDL_AsyncIOFromFile(const char *file, const char *mode);

extern __attribute__((visibility("default"))) Sint64 SDL_GetAsyncIOSize(SDL_AsyncIO *asyncio);

extern __attribute__((visibility("default"))) _Bool SDL_ReadAsyncIO(SDL_AsyncIO *asyncio, void *ptr, Uint64 offset, Uint64 size, SDL_AsyncIOQueue *queue, void *userdata);

extern __attribute__((visibility("default"))) _Bool SDL_WriteAsyncIO(SDL_AsyncIO *asyncio, void *ptr, Uint64 offset, Uint64 size, SDL_AsyncIOQueue *queue, void *userdata);

extern __attribute__((visibility("default"))) _Bool SDL_CloseAsyncIO(SDL_AsyncIO *asyncio, _Bool flush, SDL_AsyncIOQueue *queue, void *userdata);

extern __attribute__((visibility("default"))) SDL_AsyncIOQueue *SDL_CreateAsyncIOQueue(void);

extern __attribute__((visibility("default"))) void SDL_DestroyAsyncIOQueue(SDL_AsyncIOQueue *queue);

extern __attribute__((visibility("default"))) _Bool SDL_GetAsyncIOResult(SDL_AsyncIOQueue *queue, SDL_AsyncIOOutcome *outcome);

extern __attribute__((visibility("default"))) _Bool SDL_WaitAsyncIOResult(SDL_AsyncIOQueue *queue, SDL_AsyncIOOutcome *outcome, Sint32 timeoutMS);

extern __attribute__((visibility("default"))) void SDL_SignalAsyncIOQueue(SDL_AsyncIOQueue *queue);

extern __attribute__((visibility("default"))) _Bool SDL_LoadFileAsync(const char *file, SDL_AsyncIOQueue *queue, void *userdata);

typedef int SDL_SpinLock;

extern __attribute__((visibility("default"))) _Bool SDL_TryLockSpinlock(SDL_SpinLock *lock);

extern __attribute__((visibility("default"))) void SDL_LockSpinlock(SDL_SpinLock *lock);

extern __attribute__((visibility("default"))) void SDL_UnlockSpinlock(SDL_SpinLock *lock);

extern __attribute__((visibility("default"))) void SDL_MemoryBarrierReleaseFunction(void);

extern __attribute__((visibility("default"))) void SDL_MemoryBarrierAcquireFunction(void);

typedef struct SDL_AtomicInt
{
    int value;
} SDL_AtomicInt;

extern __attribute__((visibility("default"))) _Bool SDL_CompareAndSwapAtomicInt(SDL_AtomicInt *a, int oldval, int newval);

extern __attribute__((visibility("default"))) int SDL_SetAtomicInt(SDL_AtomicInt *a, int v);

extern __attribute__((visibility("default"))) int SDL_GetAtomicInt(SDL_AtomicInt *a);

extern __attribute__((visibility("default"))) int SDL_AddAtomicInt(SDL_AtomicInt *a, int v);

typedef struct SDL_AtomicU32
{
    Uint32 value;
} SDL_AtomicU32;

extern __attribute__((visibility("default"))) _Bool SDL_CompareAndSwapAtomicU32(SDL_AtomicU32 *a, Uint32 oldval, Uint32 newval);

extern __attribute__((visibility("default"))) Uint32 SDL_SetAtomicU32(SDL_AtomicU32 *a, Uint32 v);

extern __attribute__((visibility("default"))) Uint32 SDL_GetAtomicU32(SDL_AtomicU32 *a);

extern __attribute__((visibility("default"))) _Bool SDL_CompareAndSwapAtomicPointer(void **a, void *oldval, void *newval);

extern __attribute__((visibility("default"))) void *SDL_SetAtomicPointer(void **a, void *v);

extern __attribute__((visibility("default"))) void *SDL_GetAtomicPointer(void **a);

static __inline __uint16_t
__bswap_16(__uint16_t __bsx)
{

    return ((__uint16_t)((((__bsx) >> 8) & 0xff) | (((__bsx) & 0xff) << 8)));
}

static __inline __uint32_t
__bswap_32(__uint32_t __bsx)
{

    return ((((__bsx) & 0xff000000u) >> 24) | (((__bsx) & 0x00ff0000u) >> 8) | (((__bsx) & 0x0000ff00u) << 8) | (((__bsx) & 0x000000ffu) << 24));
}

__extension__ static __inline __uint64_t
__bswap_64(__uint64_t __bsx)
{

    return ((((__bsx) & 0xff00000000000000ull) >> 56) | (((__bsx) & 0x00ff000000000000ull) >> 40) | (((__bsx) & 0x0000ff0000000000ull) >> 24) | (((__bsx) & 0x000000ff00000000ull) >> 8) | (((__bsx) & 0x00000000ff000000ull) << 8) | (((__bsx) & 0x0000000000ff0000ull) << 24) | (((__bsx) & 0x000000000000ff00ull) << 40) | (((__bsx) & 0x00000000000000ffull) << 56));
}

static __inline __uint16_t
__uint16_identity(__uint16_t __x)
{
    return __x;
}

static __inline __uint32_t
__uint32_identity(__uint32_t __x)
{
    return __x;
}

static __inline __uint64_t
__uint64_identity(__uint64_t __x)
{
    return __x;
}

__attribute__((always_inline)) static __inline__ float SDL_SwapFloat(float x)
{
    union
    {
        float f;
        Uint32 ui32;
    } swapper;
    swapper.f = x;
    swapper.ui32 = __builtin_bswap32(swapper.ui32);
    return swapper.f;
}

extern __attribute__((visibility("default"))) _Bool SDL_SetError(const char *fmt, ...) __attribute__((format(__printf__, 1, 1 + 1)));

extern __attribute__((visibility("default"))) _Bool SDL_SetErrorV(const char *fmt, va_list ap) __attribute__((format(__printf__, 1, 0)));

extern __attribute__((visibility("default"))) _Bool SDL_OutOfMemory(void);

extern __attribute__((visibility("default"))) const char *SDL_GetError(void);

extern __attribute__((visibility("default"))) _Bool SDL_ClearError(void);

typedef Uint32 SDL_PropertiesID;

typedef enum SDL_PropertyType
{
    SDL_PROPERTY_TYPE_INVALID,
    SDL_PROPERTY_TYPE_POINTER,
    SDL_PROPERTY_TYPE_STRING,
    SDL_PROPERTY_TYPE_NUMBER,
    SDL_PROPERTY_TYPE_FLOAT,
    SDL_PROPERTY_TYPE_BOOLEAN
} SDL_PropertyType;

extern __attribute__((visibility("default"))) SDL_PropertiesID SDL_GetGlobalProperties(void);

extern __attribute__((visibility("default"))) SDL_PropertiesID SDL_CreateProperties(void);

extern __attribute__((visibility("default"))) _Bool SDL_CopyProperties(SDL_PropertiesID src, SDL_PropertiesID dst);

extern __attribute__((visibility("default"))) _Bool SDL_LockProperties(SDL_PropertiesID props);

extern __attribute__((visibility("default"))) void SDL_UnlockProperties(SDL_PropertiesID props);

typedef void (*SDL_CleanupPropertyCallback)(void *userdata, void *value);

extern __attribute__((visibility("default"))) _Bool SDL_SetPointerPropertyWithCleanup(SDL_PropertiesID props, const char *name, void *value, SDL_CleanupPropertyCallback cleanup, void *userdata);

extern __attribute__((visibility("default"))) _Bool SDL_SetPointerProperty(SDL_PropertiesID props, const char *name, void *value);

extern __attribute__((visibility("default"))) _Bool SDL_SetStringProperty(SDL_PropertiesID props, const char *name, const char *value);

extern __attribute__((visibility("default"))) _Bool SDL_SetNumberProperty(SDL_PropertiesID props, const char *name, Sint64 value);

extern __attribute__((visibility("default"))) _Bool SDL_SetFloatProperty(SDL_PropertiesID props, const char *name, float value);

extern __attribute__((visibility("default"))) _Bool SDL_SetBooleanProperty(SDL_PropertiesID props, const char *name, _Bool value);

extern __attribute__((visibility("default"))) _Bool SDL_HasProperty(SDL_PropertiesID props, const char *name);

extern __attribute__((visibility("default"))) SDL_PropertyType SDL_GetPropertyType(SDL_PropertiesID props, const char *name);

extern __attribute__((visibility("default"))) void *SDL_GetPointerProperty(SDL_PropertiesID props, const char *name, void *default_value);

extern __attribute__((visibility("default"))) const char *SDL_GetStringProperty(SDL_PropertiesID props, const char *name, const char *default_value);

extern __attribute__((visibility("default"))) Sint64 SDL_GetNumberProperty(SDL_PropertiesID props, const char *name, Sint64 default_value);

extern __attribute__((visibility("default"))) float SDL_GetFloatProperty(SDL_PropertiesID props, const char *name, float default_value);

extern __attribute__((visibility("default"))) _Bool SDL_GetBooleanProperty(SDL_PropertiesID props, const char *name, _Bool default_value);

extern __attribute__((visibility("default"))) _Bool SDL_ClearProperty(SDL_PropertiesID props, const char *name);

typedef void (*SDL_EnumeratePropertiesCallback)(void *userdata, SDL_PropertiesID props, const char *name);

extern __attribute__((visibility("default"))) _Bool SDL_EnumerateProperties(SDL_PropertiesID props, SDL_EnumeratePropertiesCallback callback, void *userdata);

extern __attribute__((visibility("default"))) void SDL_DestroyProperties(SDL_PropertiesID props);

typedef struct SDL_Thread SDL_Thread;

typedef Uint64 SDL_ThreadID;

typedef SDL_AtomicInt SDL_TLSID;

typedef enum SDL_ThreadPriority
{
    SDL_THREAD_PRIORITY_LOW,
    SDL_THREAD_PRIORITY_NORMAL,
    SDL_THREAD_PRIORITY_HIGH,
    SDL_THREAD_PRIORITY_TIME_CRITICAL
} SDL_ThreadPriority;

typedef enum SDL_ThreadState
{
    SDL_THREAD_UNKNOWN,
    SDL_THREAD_ALIVE,
    SDL_THREAD_DETACHED,
    SDL_THREAD_COMPLETE
} SDL_ThreadState;

typedef int (*SDL_ThreadFunction)(void *data);

extern __attribute__((visibility("default"))) SDL_Thread *SDL_CreateThreadRuntime(SDL_ThreadFunction fn, const char *name, void *data, SDL_FunctionPointer pfnBeginThread, SDL_FunctionPointer pfnEndThread);

extern __attribute__((visibility("default"))) SDL_Thread *SDL_CreateThreadWithPropertiesRuntime(SDL_PropertiesID props, SDL_FunctionPointer pfnBeginThread, SDL_FunctionPointer pfnEndThread);

extern __attribute__((visibility("default"))) const char *SDL_GetThreadName(SDL_Thread *thread);

extern __attribute__((visibility("default"))) SDL_ThreadID SDL_GetCurrentThreadID(void);

extern __attribute__((visibility("default"))) SDL_ThreadID SDL_GetThreadID(SDL_Thread *thread);

extern __attribute__((visibility("default"))) _Bool SDL_SetCurrentThreadPriority(SDL_ThreadPriority priority);

extern __attribute__((visibility("default"))) void SDL_WaitThread(SDL_Thread *thread, int *status);

extern __attribute__((visibility("default"))) SDL_ThreadState SDL_GetThreadState(SDL_Thread *thread);

extern __attribute__((visibility("default"))) void SDL_DetachThread(SDL_Thread *thread);

extern __attribute__((visibility("default"))) void *SDL_GetTLS(SDL_TLSID *id);

typedef void (*SDL_TLSDestructorCallback)(void *value);

extern __attribute__((visibility("default"))) _Bool SDL_SetTLS(SDL_TLSID *id, const void *value, SDL_TLSDestructorCallback destructor);

extern __attribute__((visibility("default"))) void SDL_CleanupTLS(void);

typedef struct SDL_Mutex SDL_Mutex;

extern __attribute__((visibility("default"))) SDL_Mutex *SDL_CreateMutex(void);

extern __attribute__((visibility("default"))) void SDL_LockMutex(SDL_Mutex *mutex);

extern __attribute__((visibility("default"))) _Bool SDL_TryLockMutex(SDL_Mutex *mutex);

extern __attribute__((visibility("default"))) void SDL_UnlockMutex(SDL_Mutex *mutex);

extern __attribute__((visibility("default"))) void SDL_DestroyMutex(SDL_Mutex *mutex);

typedef struct SDL_RWLock SDL_RWLock;

extern __attribute__((visibility("default"))) SDL_RWLock *SDL_CreateRWLock(void);

extern __attribute__((visibility("default"))) void SDL_LockRWLockForReading(SDL_RWLock *rwlock);

extern __attribute__((visibility("default"))) void SDL_LockRWLockForWriting(SDL_RWLock *rwlock);

extern __attribute__((visibility("default"))) _Bool SDL_TryLockRWLockForReading(SDL_RWLock *rwlock);

extern __attribute__((visibility("default"))) _Bool SDL_TryLockRWLockForWriting(SDL_RWLock *rwlock);

extern __attribute__((visibility("default"))) void SDL_UnlockRWLock(SDL_RWLock *rwlock);

extern __attribute__((visibility("default"))) void SDL_DestroyRWLock(SDL_RWLock *rwlock);

typedef struct SDL_Semaphore SDL_Semaphore;

extern __attribute__((visibility("default"))) SDL_Semaphore *SDL_CreateSemaphore(Uint32 initial_value);

extern __attribute__((visibility("default"))) void SDL_DestroySemaphore(SDL_Semaphore *sem);

extern __attribute__((visibility("default"))) void SDL_WaitSemaphore(SDL_Semaphore *sem);

extern __attribute__((visibility("default"))) _Bool SDL_TryWaitSemaphore(SDL_Semaphore *sem);

extern __attribute__((visibility("default"))) _Bool SDL_WaitSemaphoreTimeout(SDL_Semaphore *sem, Sint32 timeoutMS);

extern __attribute__((visibility("default"))) void SDL_SignalSemaphore(SDL_Semaphore *sem);

extern __attribute__((visibility("default"))) Uint32 SDL_GetSemaphoreValue(SDL_Semaphore *sem);

typedef struct SDL_Condition SDL_Condition;

extern __attribute__((visibility("default"))) SDL_Condition *SDL_CreateCondition(void);

extern __attribute__((visibility("default"))) void SDL_DestroyCondition(SDL_Condition *cond);

extern __attribute__((visibility("default"))) void SDL_SignalCondition(SDL_Condition *cond);

extern __attribute__((visibility("default"))) void SDL_BroadcastCondition(SDL_Condition *cond);

extern __attribute__((visibility("default"))) void SDL_WaitCondition(SDL_Condition *cond, SDL_Mutex *mutex);

extern __attribute__((visibility("default"))) _Bool SDL_WaitConditionTimeout(SDL_Condition *cond,
                                                                             SDL_Mutex *mutex, Sint32 timeoutMS);

typedef enum SDL_InitStatus
{
    SDL_INIT_STATUS_UNINITIALIZED,
    SDL_INIT_STATUS_INITIALIZING,
    SDL_INIT_STATUS_INITIALIZED,
    SDL_INIT_STATUS_UNINITIALIZING
} SDL_InitStatus;

typedef struct SDL_InitState
{
    SDL_AtomicInt status;
    SDL_ThreadID thread;
    void *reserved;
} SDL_InitState;

extern __attribute__((visibility("default"))) _Bool SDL_ShouldInit(SDL_InitState *state);

extern __attribute__((visibility("default"))) _Bool SDL_ShouldQuit(SDL_InitState *state);

extern __attribute__((visibility("default"))) void SDL_SetInitialized(SDL_InitState *state, _Bool initialized);

typedef enum SDL_IOStatus
{
    SDL_IO_STATUS_READY,
    SDL_IO_STATUS_ERROR,
    SDL_IO_STATUS_EOF,
    SDL_IO_STATUS_NOT_READY,
    SDL_IO_STATUS_READONLY,
    SDL_IO_STATUS_WRITEONLY
} SDL_IOStatus;

typedef enum SDL_IOWhence
{
    SDL_IO_SEEK_SET,
    SDL_IO_SEEK_CUR,
    SDL_IO_SEEK_END
} SDL_IOWhence;

typedef struct SDL_IOStreamInterface
{

    Uint32 version;

    Sint64 (*size)(void *userdata);

    Sint64 (*seek)(void *userdata, Sint64 offset, SDL_IOWhence whence);

    size_t (*read)(void *userdata, void *ptr, size_t size, SDL_IOStatus *status);

    size_t (*write)(void *userdata, const void *ptr, size_t size, SDL_IOStatus *status);

    _Bool (*flush)(void *userdata, SDL_IOStatus *status);

    _Bool (*close)(void *userdata);

} SDL_IOStreamInterface;

_Static_assert((sizeof(void *) == 4 && sizeof(SDL_IOStreamInterface) == 28) || (sizeof(void *) == 8 && sizeof(SDL_IOStreamInterface) == 56), "(sizeof(void *) == 4 && sizeof(SDL_IOStreamInterface) == 28) || (sizeof(void *) == 8 && sizeof(SDL_IOStreamInterface) == 56)");

typedef struct SDL_IOStream SDL_IOStream;

extern __attribute__((visibility("default"))) SDL_IOStream *SDL_IOFromFile(const char *file, const char *mode);

extern __attribute__((visibility("default"))) SDL_IOStream *SDL_IOFromMem(void *mem, size_t size);

extern __attribute__((visibility("default"))) SDL_IOStream *SDL_IOFromConstMem(const void *mem, size_t size);

extern __attribute__((visibility("default"))) SDL_IOStream *SDL_IOFromDynamicMem(void);

extern __attribute__((visibility("default"))) SDL_IOStream *SDL_OpenIO(const SDL_IOStreamInterface *iface, void *userdata);

extern __attribute__((visibility("default"))) _Bool SDL_CloseIO(SDL_IOStream *context);

extern __attribute__((visibility("default"))) SDL_PropertiesID SDL_GetIOProperties(SDL_IOStream *context);

extern __attribute__((visibility("default"))) SDL_IOStatus SDL_GetIOStatus(SDL_IOStream *context);

extern __attribute__((visibility("default"))) Sint64 SDL_GetIOSize(SDL_IOStream *context);

extern __attribute__((visibility("default"))) Sint64 SDL_SeekIO(SDL_IOStream *context, Sint64 offset, SDL_IOWhence whence);

extern __attribute__((visibility("default"))) Sint64 SDL_TellIO(SDL_IOStream *context);

extern __attribute__((visibility("default"))) size_t SDL_ReadIO(SDL_IOStream *context, void *ptr, size_t size);

extern __attribute__((visibility("default"))) size_t SDL_WriteIO(SDL_IOStream *context, const void *ptr, size_t size);

extern __attribute__((visibility("default"))) size_t SDL_IOprintf(SDL_IOStream *context, const char *fmt, ...) __attribute__((format(__printf__, 2, 2 + 1)));

extern __attribute__((visibility("default"))) size_t SDL_IOvprintf(SDL_IOStream *context, const char *fmt, va_list ap) __attribute__((format(__printf__, 2, 0)));

extern __attribute__((visibility("default"))) _Bool SDL_FlushIO(SDL_IOStream *context);

extern __attribute__((visibility("default"))) void *SDL_LoadFile_IO(SDL_IOStream *src, size_t *datasize, _Bool closeio);

extern __attribute__((visibility("default"))) void *SDL_LoadFile(const char *file, size_t *datasize);

extern __attribute__((visibility("default"))) _Bool SDL_SaveFile_IO(SDL_IOStream *src, const void *data, size_t datasize, _Bool closeio);

extern __attribute__((visibility("default"))) _Bool SDL_SaveFile(const char *file, const void *data, size_t datasize);

extern __attribute__((visibility("default"))) _Bool SDL_ReadU8(SDL_IOStream *src, Uint8 *value);

extern __attribute__((visibility("default"))) _Bool SDL_ReadS8(SDL_IOStream *src, Sint8 *value);

extern __attribute__((visibility("default"))) _Bool SDL_ReadU16LE(SDL_IOStream *src, Uint16 *value);

extern __attribute__((visibility("default"))) _Bool SDL_ReadS16LE(SDL_IOStream *src, Sint16 *value);

extern __attribute__((visibility("default"))) _Bool SDL_ReadU16BE(SDL_IOStream *src, Uint16 *value);

extern __attribute__((visibility("default"))) _Bool SDL_ReadS16BE(SDL_IOStream *src, Sint16 *value);

extern __attribute__((visibility("default"))) _Bool SDL_ReadU32LE(SDL_IOStream *src, Uint32 *value);

extern __attribute__((visibility("default"))) _Bool SDL_ReadS32LE(SDL_IOStream *src, Sint32 *value);

extern __attribute__((visibility("default"))) _Bool SDL_ReadU32BE(SDL_IOStream *src, Uint32 *value);

extern __attribute__((visibility("default"))) _Bool SDL_ReadS32BE(SDL_IOStream *src, Sint32 *value);

extern __attribute__((visibility("default"))) _Bool SDL_ReadU64LE(SDL_IOStream *src, Uint64 *value);

extern __attribute__((visibility("default"))) _Bool SDL_ReadS64LE(SDL_IOStream *src, Sint64 *value);

extern __attribute__((visibility("default"))) _Bool SDL_ReadU64BE(SDL_IOStream *src, Uint64 *value);

extern __attribute__((visibility("default"))) _Bool SDL_ReadS64BE(SDL_IOStream *src, Sint64 *value);

extern __attribute__((visibility("default"))) _Bool SDL_WriteU8(SDL_IOStream *dst, Uint8 value);

extern __attribute__((visibility("default"))) _Bool SDL_WriteS8(SDL_IOStream *dst, Sint8 value);

extern __attribute__((visibility("default"))) _Bool SDL_WriteU16LE(SDL_IOStream *dst, Uint16 value);

extern __attribute__((visibility("default"))) _Bool SDL_WriteS16LE(SDL_IOStream *dst, Sint16 value);

extern __attribute__((visibility("default"))) _Bool SDL_WriteU16BE(SDL_IOStream *dst, Uint16 value);

extern __attribute__((visibility("default"))) _Bool SDL_WriteS16BE(SDL_IOStream *dst, Sint16 value);

extern __attribute__((visibility("default"))) _Bool SDL_WriteU32LE(SDL_IOStream *dst, Uint32 value);

extern __attribute__((visibility("default"))) _Bool SDL_WriteS32LE(SDL_IOStream *dst, Sint32 value);

extern __attribute__((visibility("default"))) _Bool SDL_WriteU32BE(SDL_IOStream *dst, Uint32 value);

extern __attribute__((visibility("default"))) _Bool SDL_WriteS32BE(SDL_IOStream *dst, Sint32 value);

extern __attribute__((visibility("default"))) _Bool SDL_WriteU64LE(SDL_IOStream *dst, Uint64 value);

extern __attribute__((visibility("default"))) _Bool SDL_WriteS64LE(SDL_IOStream *dst, Sint64 value);

extern __attribute__((visibility("default"))) _Bool SDL_WriteU64BE(SDL_IOStream *dst, Uint64 value);

extern __attribute__((visibility("default"))) _Bool SDL_WriteS64BE(SDL_IOStream *dst, Sint64 value);

typedef enum SDL_AudioFormat
{
    SDL_AUDIO_UNKNOWN = 0x0000u,
    SDL_AUDIO_U8 = 0x0008u,

    SDL_AUDIO_S8 = 0x8008u,

    SDL_AUDIO_S16LE = 0x8010u,

    SDL_AUDIO_S16BE = 0x9010u,

    SDL_AUDIO_S32LE = 0x8020u,

    SDL_AUDIO_S32BE = 0x9020u,

    SDL_AUDIO_F32LE = 0x8120u,

    SDL_AUDIO_F32BE = 0x9120u,

    SDL_AUDIO_S16 = SDL_AUDIO_S16LE,
    SDL_AUDIO_S32 = SDL_AUDIO_S32LE,
    SDL_AUDIO_F32 = SDL_AUDIO_F32LE

} SDL_AudioFormat;

typedef Uint32 SDL_AudioDeviceID;

typedef struct SDL_AudioSpec
{
    SDL_AudioFormat format;
    int channels;
    int freq;
} SDL_AudioSpec;

typedef struct SDL_AudioStream SDL_AudioStream;

extern __attribute__((visibility("default"))) int SDL_GetNumAudioDrivers(void);

extern __attribute__((visibility("default"))) const char *SDL_GetAudioDriver(int index);

extern __attribute__((visibility("default"))) const char *SDL_GetCurrentAudioDriver(void);

extern __attribute__((visibility("default"))) SDL_AudioDeviceID *SDL_GetAudioPlaybackDevices(int *count);

extern __attribute__((visibility("default"))) SDL_AudioDeviceID *SDL_GetAudioRecordingDevices(int *count);

extern __attribute__((visibility("default"))) const char *SDL_GetAudioDeviceName(SDL_AudioDeviceID devid);

extern __attribute__((visibility("default"))) _Bool SDL_GetAudioDeviceFormat(SDL_AudioDeviceID devid, SDL_AudioSpec *spec, int *sample_frames);

extern __attribute__((visibility("default"))) int *SDL_GetAudioDeviceChannelMap(SDL_AudioDeviceID devid, int *count);

extern __attribute__((visibility("default"))) SDL_AudioDeviceID SDL_OpenAudioDevice(SDL_AudioDeviceID devid, const SDL_AudioSpec *spec);

extern __attribute__((visibility("default"))) _Bool SDL_IsAudioDevicePhysical(SDL_AudioDeviceID devid);

extern __attribute__((visibility("default"))) _Bool SDL_IsAudioDevicePlayback(SDL_AudioDeviceID devid);

extern __attribute__((visibility("default"))) _Bool SDL_PauseAudioDevice(SDL_AudioDeviceID devid);

extern __attribute__((visibility("default"))) _Bool SDL_ResumeAudioDevice(SDL_AudioDeviceID devid);

extern __attribute__((visibility("default"))) _Bool SDL_AudioDevicePaused(SDL_AudioDeviceID devid);

extern __attribute__((visibility("default"))) float SDL_GetAudioDeviceGain(SDL_AudioDeviceID devid);

extern __attribute__((visibility("default"))) _Bool SDL_SetAudioDeviceGain(SDL_AudioDeviceID devid, float gain);

extern __attribute__((visibility("default"))) void SDL_CloseAudioDevice(SDL_AudioDeviceID devid);

extern __attribute__((visibility("default"))) _Bool SDL_BindAudioStreams(SDL_AudioDeviceID devid, SDL_AudioStream *const *streams, int num_streams);

extern __attribute__((visibility("default"))) _Bool SDL_BindAudioStream(SDL_AudioDeviceID devid, SDL_AudioStream *stream);

extern __attribute__((visibility("default"))) void SDL_UnbindAudioStreams(SDL_AudioStream *const *streams, int num_streams);

extern __attribute__((visibility("default"))) void SDL_UnbindAudioStream(SDL_AudioStream *stream);

extern __attribute__((visibility("default"))) SDL_AudioDeviceID SDL_GetAudioStreamDevice(SDL_AudioStream *stream);

extern __attribute__((visibility("default"))) SDL_AudioStream *SDL_CreateAudioStream(const SDL_AudioSpec *src_spec, const SDL_AudioSpec *dst_spec);

extern __attribute__((visibility("default"))) SDL_PropertiesID SDL_GetAudioStreamProperties(SDL_AudioStream *stream);

extern __attribute__((visibility("default"))) _Bool SDL_GetAudioStreamFormat(SDL_AudioStream *stream, SDL_AudioSpec *src_spec, SDL_AudioSpec *dst_spec);

extern __attribute__((visibility("default"))) _Bool SDL_SetAudioStreamFormat(SDL_AudioStream *stream, const SDL_AudioSpec *src_spec, const SDL_AudioSpec *dst_spec);

extern __attribute__((visibility("default"))) float SDL_GetAudioStreamFrequencyRatio(SDL_AudioStream *stream);

extern __attribute__((visibility("default"))) _Bool SDL_SetAudioStreamFrequencyRatio(SDL_AudioStream *stream, float ratio);

extern __attribute__((visibility("default"))) float SDL_GetAudioStreamGain(SDL_AudioStream *stream);

extern __attribute__((visibility("default"))) _Bool SDL_SetAudioStreamGain(SDL_AudioStream *stream, float gain);

extern __attribute__((visibility("default"))) int *SDL_GetAudioStreamInputChannelMap(SDL_AudioStream *stream, int *count);

extern __attribute__((visibility("default"))) int *SDL_GetAudioStreamOutputChannelMap(SDL_AudioStream *stream, int *count);

extern __attribute__((visibility("default"))) _Bool SDL_SetAudioStreamInputChannelMap(SDL_AudioStream *stream, const int *chmap, int count);

extern __attribute__((visibility("default"))) _Bool SDL_SetAudioStreamOutputChannelMap(SDL_AudioStream *stream, const int *chmap, int count);

extern __attribute__((visibility("default"))) _Bool SDL_PutAudioStreamData(SDL_AudioStream *stream, const void *buf, int len);

extern __attribute__((visibility("default"))) int SDL_GetAudioStreamData(SDL_AudioStream *stream, void *buf, int len);

extern __attribute__((visibility("default"))) int SDL_GetAudioStreamAvailable(SDL_AudioStream *stream);

extern __attribute__((visibility("default"))) int SDL_GetAudioStreamQueued(SDL_AudioStream *stream);

extern __attribute__((visibility("default"))) _Bool SDL_FlushAudioStream(SDL_AudioStream *stream);

extern __attribute__((visibility("default"))) _Bool SDL_ClearAudioStream(SDL_AudioStream *stream);

extern __attribute__((visibility("default"))) _Bool SDL_PauseAudioStreamDevice(SDL_AudioStream *stream);

extern __attribute__((visibility("default"))) _Bool SDL_ResumeAudioStreamDevice(SDL_AudioStream *stream);

extern __attribute__((visibility("default"))) _Bool SDL_AudioStreamDevicePaused(SDL_AudioStream *stream);

extern __attribute__((visibility("default"))) _Bool SDL_LockAudioStream(SDL_AudioStream *stream);

extern __attribute__((visibility("default"))) _Bool SDL_UnlockAudioStream(SDL_AudioStream *stream);

typedef void (*SDL_AudioStreamCallback)(void *userdata, SDL_AudioStream *stream, int additional_amount, int total_amount);

extern __attribute__((visibility("default"))) _Bool SDL_SetAudioStreamGetCallback(SDL_AudioStream *stream, SDL_AudioStreamCallback callback, void *userdata);

extern __attribute__((visibility("default"))) _Bool SDL_SetAudioStreamPutCallback(SDL_AudioStream *stream, SDL_AudioStreamCallback callback, void *userdata);

extern __attribute__((visibility("default"))) void SDL_DestroyAudioStream(SDL_AudioStream *stream);

extern __attribute__((visibility("default"))) SDL_AudioStream *SDL_OpenAudioDeviceStream(SDL_AudioDeviceID devid, const SDL_AudioSpec *spec, SDL_AudioStreamCallback callback, void *userdata);

typedef void (*SDL_AudioPostmixCallback)(void *userdata, const SDL_AudioSpec *spec, float *buffer, int buflen);

extern __attribute__((visibility("default"))) _Bool SDL_SetAudioPostmixCallback(SDL_AudioDeviceID devid, SDL_AudioPostmixCallback callback, void *userdata);

extern __attribute__((visibility("default"))) _Bool SDL_LoadWAV_IO(SDL_IOStream *src, _Bool closeio, SDL_AudioSpec *spec, Uint8 **audio_buf, Uint32 *audio_len);

extern __attribute__((visibility("default"))) _Bool SDL_LoadWAV(const char *path, SDL_AudioSpec *spec, Uint8 **audio_buf, Uint32 *audio_len);

extern __attribute__((visibility("default"))) _Bool SDL_MixAudio(Uint8 *dst, const Uint8 *src, SDL_AudioFormat format, Uint32 len, float volume);

extern __attribute__((visibility("default"))) _Bool SDL_ConvertAudioSamples(const SDL_AudioSpec *src_spec, const Uint8 *src_data, int src_len, const SDL_AudioSpec *dst_spec, Uint8 **dst_data, int *dst_len);

extern __attribute__((visibility("default"))) const char *SDL_GetAudioFormatName(SDL_AudioFormat format);

extern __attribute__((visibility("default"))) int SDL_GetSilenceValueForFormat(SDL_AudioFormat format);

__attribute__((always_inline)) static __inline__ int SDL_MostSignificantBitIndex32(Uint32 x)
{

    if (x == 0) {
        return -1;
    }
    return 31 - __builtin_clz(x);
}

__attribute__((always_inline)) static __inline__ _Bool SDL_HasExactlyOneBitSet32(Uint32 x)
{
    if (x && !(x & (x - 1))) {
        return 1;
    }
    return 0;
}

typedef Uint32 SDL_BlendMode;

typedef enum SDL_BlendOperation
{
    SDL_BLENDOPERATION_ADD = 0x1,
    SDL_BLENDOPERATION_SUBTRACT = 0x2,
    SDL_BLENDOPERATION_REV_SUBTRACT = 0x3,
    SDL_BLENDOPERATION_MINIMUM = 0x4,
    SDL_BLENDOPERATION_MAXIMUM = 0x5
} SDL_BlendOperation;

typedef enum SDL_BlendFactor
{
    SDL_BLENDFACTOR_ZERO = 0x1,
    SDL_BLENDFACTOR_ONE = 0x2,
    SDL_BLENDFACTOR_SRC_COLOR = 0x3,
    SDL_BLENDFACTOR_ONE_MINUS_SRC_COLOR = 0x4,
    SDL_BLENDFACTOR_SRC_ALPHA = 0x5,
    SDL_BLENDFACTOR_ONE_MINUS_SRC_ALPHA = 0x6,
    SDL_BLENDFACTOR_DST_COLOR = 0x7,
    SDL_BLENDFACTOR_ONE_MINUS_DST_COLOR = 0x8,
    SDL_BLENDFACTOR_DST_ALPHA = 0x9,
    SDL_BLENDFACTOR_ONE_MINUS_DST_ALPHA = 0xA
} SDL_BlendFactor;

extern __attribute__((visibility("default"))) SDL_BlendMode SDL_ComposeCustomBlendMode(SDL_BlendFactor srcColorFactor,
                                                                                       SDL_BlendFactor dstColorFactor,
                                                                                       SDL_BlendOperation colorOperation,
                                                                                       SDL_BlendFactor srcAlphaFactor,
                                                                                       SDL_BlendFactor dstAlphaFactor,
                                                                                       SDL_BlendOperation alphaOperation);

typedef enum SDL_PixelType
{
    SDL_PIXELTYPE_UNKNOWN,
    SDL_PIXELTYPE_INDEX1,
    SDL_PIXELTYPE_INDEX4,
    SDL_PIXELTYPE_INDEX8,
    SDL_PIXELTYPE_PACKED8,
    SDL_PIXELTYPE_PACKED16,
    SDL_PIXELTYPE_PACKED32,
    SDL_PIXELTYPE_ARRAYU8,
    SDL_PIXELTYPE_ARRAYU16,
    SDL_PIXELTYPE_ARRAYU32,
    SDL_PIXELTYPE_ARRAYF16,
    SDL_PIXELTYPE_ARRAYF32,

    SDL_PIXELTYPE_INDEX2
} SDL_PixelType;

typedef enum SDL_BitmapOrder
{
    SDL_BITMAPORDER_NONE,
    SDL_BITMAPORDER_4321,
    SDL_BITMAPORDER_1234
} SDL_BitmapOrder;

typedef enum SDL_PackedOrder
{
    SDL_PACKEDORDER_NONE,
    SDL_PACKEDORDER_XRGB,
    SDL_PACKEDORDER_RGBX,
    SDL_PACKEDORDER_ARGB,
    SDL_PACKEDORDER_RGBA,
    SDL_PACKEDORDER_XBGR,
    SDL_PACKEDORDER_BGRX,
    SDL_PACKEDORDER_ABGR,
    SDL_PACKEDORDER_BGRA
} SDL_PackedOrder;

typedef enum SDL_ArrayOrder
{
    SDL_ARRAYORDER_NONE,
    SDL_ARRAYORDER_RGB,
    SDL_ARRAYORDER_RGBA,
    SDL_ARRAYORDER_ARGB,
    SDL_ARRAYORDER_BGR,
    SDL_ARRAYORDER_BGRA,
    SDL_ARRAYORDER_ABGR
} SDL_ArrayOrder;

typedef enum SDL_PackedLayout
{
    SDL_PACKEDLAYOUT_NONE,
    SDL_PACKEDLAYOUT_332,
    SDL_PACKEDLAYOUT_4444,
    SDL_PACKEDLAYOUT_1555,
    SDL_PACKEDLAYOUT_5551,
    SDL_PACKEDLAYOUT_565,
    SDL_PACKEDLAYOUT_8888,
    SDL_PACKEDLAYOUT_2101010,
    SDL_PACKEDLAYOUT_1010102
} SDL_PackedLayout;

typedef enum SDL_PixelFormat
{
    SDL_PIXELFORMAT_UNKNOWN = 0,
    SDL_PIXELFORMAT_INDEX1LSB = 0x11100100u,

    SDL_PIXELFORMAT_INDEX1MSB = 0x11200100u,

    SDL_PIXELFORMAT_INDEX2LSB = 0x1c100200u,

    SDL_PIXELFORMAT_INDEX2MSB = 0x1c200200u,

    SDL_PIXELFORMAT_INDEX4LSB = 0x12100400u,

    SDL_PIXELFORMAT_INDEX4MSB = 0x12200400u,

    SDL_PIXELFORMAT_INDEX8 = 0x13000801u,

    SDL_PIXELFORMAT_RGB332 = 0x14110801u,

    SDL_PIXELFORMAT_XRGB4444 = 0x15120c02u,

    SDL_PIXELFORMAT_XBGR4444 = 0x15520c02u,

    SDL_PIXELFORMAT_XRGB1555 = 0x15130f02u,

    SDL_PIXELFORMAT_XBGR1555 = 0x15530f02u,

    SDL_PIXELFORMAT_ARGB4444 = 0x15321002u,

    SDL_PIXELFORMAT_RGBA4444 = 0x15421002u,

    SDL_PIXELFORMAT_ABGR4444 = 0x15721002u,

    SDL_PIXELFORMAT_BGRA4444 = 0x15821002u,

    SDL_PIXELFORMAT_ARGB1555 = 0x15331002u,

    SDL_PIXELFORMAT_RGBA5551 = 0x15441002u,

    SDL_PIXELFORMAT_ABGR1555 = 0x15731002u,

    SDL_PIXELFORMAT_BGRA5551 = 0x15841002u,

    SDL_PIXELFORMAT_RGB565 = 0x15151002u,

    SDL_PIXELFORMAT_BGR565 = 0x15551002u,

    SDL_PIXELFORMAT_RGB24 = 0x17101803u,

    SDL_PIXELFORMAT_BGR24 = 0x17401803u,

    SDL_PIXELFORMAT_XRGB8888 = 0x16161804u,

    SDL_PIXELFORMAT_RGBX8888 = 0x16261804u,

    SDL_PIXELFORMAT_XBGR8888 = 0x16561804u,

    SDL_PIXELFORMAT_BGRX8888 = 0x16661804u,

    SDL_PIXELFORMAT_ARGB8888 = 0x16362004u,

    SDL_PIXELFORMAT_RGBA8888 = 0x16462004u,

    SDL_PIXELFORMAT_ABGR8888 = 0x16762004u,

    SDL_PIXELFORMAT_BGRA8888 = 0x16862004u,

    SDL_PIXELFORMAT_XRGB2101010 = 0x16172004u,

    SDL_PIXELFORMAT_XBGR2101010 = 0x16572004u,

    SDL_PIXELFORMAT_ARGB2101010 = 0x16372004u,

    SDL_PIXELFORMAT_ABGR2101010 = 0x16772004u,

    SDL_PIXELFORMAT_RGB48 = 0x18103006u,

    SDL_PIXELFORMAT_BGR48 = 0x18403006u,

    SDL_PIXELFORMAT_RGBA64 = 0x18204008u,

    SDL_PIXELFORMAT_ARGB64 = 0x18304008u,

    SDL_PIXELFORMAT_BGRA64 = 0x18504008u,

    SDL_PIXELFORMAT_ABGR64 = 0x18604008u,

    SDL_PIXELFORMAT_RGB48_FLOAT = 0x1a103006u,

    SDL_PIXELFORMAT_BGR48_FLOAT = 0x1a403006u,

    SDL_PIXELFORMAT_RGBA64_FLOAT = 0x1a204008u,

    SDL_PIXELFORMAT_ARGB64_FLOAT = 0x1a304008u,

    SDL_PIXELFORMAT_BGRA64_FLOAT = 0x1a504008u,

    SDL_PIXELFORMAT_ABGR64_FLOAT = 0x1a604008u,

    SDL_PIXELFORMAT_RGB96_FLOAT = 0x1b10600cu,

    SDL_PIXELFORMAT_BGR96_FLOAT = 0x1b40600cu,

    SDL_PIXELFORMAT_RGBA128_FLOAT = 0x1b208010u,

    SDL_PIXELFORMAT_ARGB128_FLOAT = 0x1b308010u,

    SDL_PIXELFORMAT_BGRA128_FLOAT = 0x1b508010u,

    SDL_PIXELFORMAT_ABGR128_FLOAT = 0x1b608010u,

    SDL_PIXELFORMAT_YV12 = 0x32315659u,

    SDL_PIXELFORMAT_IYUV = 0x56555949u,

    SDL_PIXELFORMAT_YUY2 = 0x32595559u,

    SDL_PIXELFORMAT_UYVY = 0x59565955u,

    SDL_PIXELFORMAT_YVYU = 0x55595659u,

    SDL_PIXELFORMAT_NV12 = 0x3231564eu,

    SDL_PIXELFORMAT_NV21 = 0x3132564eu,

    SDL_PIXELFORMAT_P010 = 0x30313050u,

    SDL_PIXELFORMAT_EXTERNAL_OES = 0x2053454fu,

    SDL_PIXELFORMAT_MJPG = 0x47504a4du,

    SDL_PIXELFORMAT_RGBA32 = SDL_PIXELFORMAT_ABGR8888,
    SDL_PIXELFORMAT_ARGB32 = SDL_PIXELFORMAT_BGRA8888,
    SDL_PIXELFORMAT_BGRA32 = SDL_PIXELFORMAT_ARGB8888,
    SDL_PIXELFORMAT_ABGR32 = SDL_PIXELFORMAT_RGBA8888,
    SDL_PIXELFORMAT_RGBX32 = SDL_PIXELFORMAT_XBGR8888,
    SDL_PIXELFORMAT_XRGB32 = SDL_PIXELFORMAT_BGRX8888,
    SDL_PIXELFORMAT_BGRX32 = SDL_PIXELFORMAT_XRGB8888,
    SDL_PIXELFORMAT_XBGR32 = SDL_PIXELFORMAT_RGBX8888

} SDL_PixelFormat;

typedef enum SDL_ColorType
{
    SDL_COLOR_TYPE_UNKNOWN = 0,
    SDL_COLOR_TYPE_RGB = 1,
    SDL_COLOR_TYPE_YCBCR = 2
} SDL_ColorType;

typedef enum SDL_ColorRange
{
    SDL_COLOR_RANGE_UNKNOWN = 0,
    SDL_COLOR_RANGE_LIMITED = 1,
    SDL_COLOR_RANGE_FULL = 2
} SDL_ColorRange;

typedef enum SDL_ColorPrimaries
{
    SDL_COLOR_PRIMARIES_UNKNOWN = 0,
    SDL_COLOR_PRIMARIES_BT709 = 1,
    SDL_COLOR_PRIMARIES_UNSPECIFIED = 2,
    SDL_COLOR_PRIMARIES_BT470M = 4,
    SDL_COLOR_PRIMARIES_BT470BG = 5,
    SDL_COLOR_PRIMARIES_BT601 = 6,
    SDL_COLOR_PRIMARIES_SMPTE240 = 7,
    SDL_COLOR_PRIMARIES_GENERIC_FILM = 8,
    SDL_COLOR_PRIMARIES_BT2020 = 9,
    SDL_COLOR_PRIMARIES_XYZ = 10,
    SDL_COLOR_PRIMARIES_SMPTE431 = 11,
    SDL_COLOR_PRIMARIES_SMPTE432 = 12,
    SDL_COLOR_PRIMARIES_EBU3213 = 22,
    SDL_COLOR_PRIMARIES_CUSTOM = 31
} SDL_ColorPrimaries;

typedef enum SDL_TransferCharacteristics
{
    SDL_TRANSFER_CHARACTERISTICS_UNKNOWN = 0,
    SDL_TRANSFER_CHARACTERISTICS_BT709 = 1,
    SDL_TRANSFER_CHARACTERISTICS_UNSPECIFIED = 2,
    SDL_TRANSFER_CHARACTERISTICS_GAMMA22 = 4,
    SDL_TRANSFER_CHARACTERISTICS_GAMMA28 = 5,
    SDL_TRANSFER_CHARACTERISTICS_BT601 = 6,
    SDL_TRANSFER_CHARACTERISTICS_SMPTE240 = 7,
    SDL_TRANSFER_CHARACTERISTICS_LINEAR = 8,
    SDL_TRANSFER_CHARACTERISTICS_LOG100 = 9,
    SDL_TRANSFER_CHARACTERISTICS_LOG100_SQRT10 = 10,
    SDL_TRANSFER_CHARACTERISTICS_IEC61966 = 11,
    SDL_TRANSFER_CHARACTERISTICS_BT1361 = 12,
    SDL_TRANSFER_CHARACTERISTICS_SRGB = 13,
    SDL_TRANSFER_CHARACTERISTICS_BT2020_10BIT = 14,
    SDL_TRANSFER_CHARACTERISTICS_BT2020_12BIT = 15,
    SDL_TRANSFER_CHARACTERISTICS_PQ = 16,
    SDL_TRANSFER_CHARACTERISTICS_SMPTE428 = 17,
    SDL_TRANSFER_CHARACTERISTICS_HLG = 18,
    SDL_TRANSFER_CHARACTERISTICS_CUSTOM = 31
} SDL_TransferCharacteristics;

typedef enum SDL_MatrixCoefficients
{
    SDL_MATRIX_COEFFICIENTS_IDENTITY = 0,
    SDL_MATRIX_COEFFICIENTS_BT709 = 1,
    SDL_MATRIX_COEFFICIENTS_UNSPECIFIED = 2,
    SDL_MATRIX_COEFFICIENTS_FCC = 4,
    SDL_MATRIX_COEFFICIENTS_BT470BG = 5,
    SDL_MATRIX_COEFFICIENTS_BT601 = 6,
    SDL_MATRIX_COEFFICIENTS_SMPTE240 = 7,
    SDL_MATRIX_COEFFICIENTS_YCGCO = 8,
    SDL_MATRIX_COEFFICIENTS_BT2020_NCL = 9,
    SDL_MATRIX_COEFFICIENTS_BT2020_CL = 10,
    SDL_MATRIX_COEFFICIENTS_SMPTE2085 = 11,
    SDL_MATRIX_COEFFICIENTS_CHROMA_DERIVED_NCL = 12,
    SDL_MATRIX_COEFFICIENTS_CHROMA_DERIVED_CL = 13,
    SDL_MATRIX_COEFFICIENTS_ICTCP = 14,
    SDL_MATRIX_COEFFICIENTS_CUSTOM = 31
} SDL_MatrixCoefficients;

typedef enum SDL_ChromaLocation
{
    SDL_CHROMA_LOCATION_NONE = 0,
    SDL_CHROMA_LOCATION_LEFT = 1,
    SDL_CHROMA_LOCATION_CENTER = 2,
    SDL_CHROMA_LOCATION_TOPLEFT = 3
} SDL_ChromaLocation;

typedef enum SDL_Colorspace
{
    SDL_COLORSPACE_UNKNOWN = 0,

    SDL_COLORSPACE_SRGB = 0x120005a0u,

    SDL_COLORSPACE_SRGB_LINEAR = 0x12000500u,

    SDL_COLORSPACE_HDR10 = 0x12002600u,

    SDL_COLORSPACE_JPEG = 0x220004c6u,

    SDL_COLORSPACE_BT601_LIMITED = 0x211018c6u,

    SDL_COLORSPACE_BT601_FULL = 0x221018c6u,

    SDL_COLORSPACE_BT709_LIMITED = 0x21100421u,

    SDL_COLORSPACE_BT709_FULL = 0x22100421u,

    SDL_COLORSPACE_BT2020_LIMITED = 0x21102609u,

    SDL_COLORSPACE_BT2020_FULL = 0x22102609u,

    SDL_COLORSPACE_RGB_DEFAULT = SDL_COLORSPACE_SRGB,
    SDL_COLORSPACE_YUV_DEFAULT = SDL_COLORSPACE_JPEG
} SDL_Colorspace;

typedef struct SDL_Color
{
    Uint8 r;
    Uint8 g;
    Uint8 b;
    Uint8 a;
} SDL_Color;

typedef struct SDL_FColor
{
    float r;
    float g;
    float b;
    float a;
} SDL_FColor;

typedef struct SDL_Palette
{
    int ncolors;
    SDL_Color *colors;
    Uint32 version;
    int refcount;
} SDL_Palette;

typedef struct SDL_PixelFormatDetails
{
    SDL_PixelFormat format;
    Uint8 bits_per_pixel;
    Uint8 bytes_per_pixel;
    Uint8 padding[2];
    Uint32 Rmask;
    Uint32 Gmask;
    Uint32 Bmask;
    Uint32 Amask;
    Uint8 Rbits;
    Uint8 Gbits;
    Uint8 Bbits;
    Uint8 Abits;
    Uint8 Rshift;
    Uint8 Gshift;
    Uint8 Bshift;
    Uint8 Ashift;
} SDL_PixelFormatDetails;

extern __attribute__((visibility("default"))) const char *SDL_GetPixelFormatName(SDL_PixelFormat format);

extern __attribute__((visibility("default"))) _Bool SDL_GetMasksForPixelFormat(SDL_PixelFormat format, int *bpp, Uint32 *Rmask, Uint32 *Gmask, Uint32 *Bmask, Uint32 *Amask);

extern __attribute__((visibility("default"))) SDL_PixelFormat SDL_GetPixelFormatForMasks(int bpp, Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask);

extern __attribute__((visibility("default"))) const SDL_PixelFormatDetails *SDL_GetPixelFormatDetails(SDL_PixelFormat format);

extern __attribute__((visibility("default"))) SDL_Palette *SDL_CreatePalette(int ncolors);

extern __attribute__((visibility("default"))) _Bool SDL_SetPaletteColors(SDL_Palette *palette, const SDL_Color *colors, int firstcolor, int ncolors);

extern __attribute__((visibility("default"))) void SDL_DestroyPalette(SDL_Palette *palette);

extern __attribute__((visibility("default"))) Uint32 SDL_MapRGB(const SDL_PixelFormatDetails *format, const SDL_Palette *palette, Uint8 r, Uint8 g, Uint8 b);

extern __attribute__((visibility("default"))) Uint32 SDL_MapRGBA(const SDL_PixelFormatDetails *format, const SDL_Palette *palette, Uint8 r, Uint8 g, Uint8 b, Uint8 a);

extern __attribute__((visibility("default"))) void SDL_GetRGB(Uint32 pixel, const SDL_PixelFormatDetails *format, const SDL_Palette *palette, Uint8 *r, Uint8 *g, Uint8 *b);

extern __attribute__((visibility("default"))) void SDL_GetRGBA(Uint32 pixel, const SDL_PixelFormatDetails *format, const SDL_Palette *palette, Uint8 *r, Uint8 *g, Uint8 *b, Uint8 *a);

typedef struct SDL_Point
{
    int x;
    int y;
} SDL_Point;

typedef struct SDL_FPoint
{
    float x;
    float y;
} SDL_FPoint;

typedef struct SDL_Rect
{
    int x, y;
    int w, h;
} SDL_Rect;

typedef struct SDL_FRect
{
    float x;
    float y;
    float w;
    float h;
} SDL_FRect;

__attribute__((always_inline)) static __inline__ void SDL_RectToFRect(const SDL_Rect *rect, SDL_FRect *frect)
{
    frect->x = (float)rect->x;
    frect->y = (float)rect->y;
    frect->w = (float)rect->w;
    frect->h = (float)rect->h;
}

__attribute__((always_inline)) static __inline__ _Bool SDL_PointInRect(const SDL_Point *p, const SDL_Rect *r)
{
    return (p && r && (p->x >= r->x) && (p->x < (r->x + r->w)) &&
            (p->y >= r->y) && (p->y < (r->y + r->h)))
               ? 1
               : 0;
}

__attribute__((always_inline)) static __inline__ _Bool SDL_RectEmpty(const SDL_Rect *r)
{
    return ((!r) || (r->w <= 0) || (r->h <= 0)) ? 1 : 0;
}

__attribute__((always_inline)) static __inline__ _Bool SDL_RectsEqual(const SDL_Rect *a, const SDL_Rect *b)
{
    return (a && b && (a->x == b->x) && (a->y == b->y) &&
            (a->w == b->w) && (a->h == b->h))
               ? 1
               : 0;
}

extern __attribute__((visibility("default"))) _Bool SDL_HasRectIntersection(const SDL_Rect *A, const SDL_Rect *B);

extern __attribute__((visibility("default"))) _Bool SDL_GetRectIntersection(const SDL_Rect *A, const SDL_Rect *B, SDL_Rect *result);

extern __attribute__((visibility("default"))) _Bool SDL_GetRectUnion(const SDL_Rect *A, const SDL_Rect *B, SDL_Rect *result);

extern __attribute__((visibility("default"))) _Bool SDL_GetRectEnclosingPoints(const SDL_Point *points, int count, const SDL_Rect *clip, SDL_Rect *result);

extern __attribute__((visibility("default"))) _Bool SDL_GetRectAndLineIntersection(const SDL_Rect *rect, int *X1, int *Y1, int *X2, int *Y2);

__attribute__((always_inline)) static __inline__ _Bool SDL_PointInRectFloat(const SDL_FPoint *p, const SDL_FRect *r)
{
    return (p && r && (p->x >= r->x) && (p->x <= (r->x + r->w)) &&
            (p->y >= r->y) && (p->y <= (r->y + r->h)))
               ? 1
               : 0;
}

__attribute__((always_inline)) static __inline__ _Bool SDL_RectEmptyFloat(const SDL_FRect *r)
{
    return ((!r) || (r->w < 0.0f) || (r->h < 0.0f)) ? 1 : 0;
}

__attribute__((always_inline)) static __inline__ _Bool SDL_RectsEqualEpsilon(const SDL_FRect *a, const SDL_FRect *b, float epsilon)
{
    return (a && b && ((a == b) || ((SDL_fabsf(a->x - b->x) <= epsilon) && (SDL_fabsf(a->y - b->y) <= epsilon) && (SDL_fabsf(a->w - b->w) <= epsilon) && (SDL_fabsf(a->h - b->h) <= epsilon))))
               ? 1
               : 0;
}

__attribute__((always_inline)) static __inline__ _Bool SDL_RectsEqualFloat(const SDL_FRect *a, const SDL_FRect *b)
{
    return SDL_RectsEqualEpsilon(a, b, 1.1920928955078125e-07F);
}

extern __attribute__((visibility("default"))) _Bool SDL_HasRectIntersectionFloat(const SDL_FRect *A, const SDL_FRect *B);

extern __attribute__((visibility("default"))) _Bool SDL_GetRectIntersectionFloat(const SDL_FRect *A, const SDL_FRect *B, SDL_FRect *result);

extern __attribute__((visibility("default"))) _Bool SDL_GetRectUnionFloat(const SDL_FRect *A, const SDL_FRect *B, SDL_FRect *result);

extern __attribute__((visibility("default"))) _Bool SDL_GetRectEnclosingPointsFloat(const SDL_FPoint *points, int count, const SDL_FRect *clip, SDL_FRect *result);

extern __attribute__((visibility("default"))) _Bool SDL_GetRectAndLineIntersectionFloat(const SDL_FRect *rect, float *X1, float *Y1, float *X2, float *Y2);

typedef Uint32 SDL_SurfaceFlags;

typedef enum SDL_ScaleMode
{
    SDL_SCALEMODE_INVALID = -1,
    SDL_SCALEMODE_NEAREST,
    SDL_SCALEMODE_LINEAR
} SDL_ScaleMode;

typedef enum SDL_FlipMode
{
    SDL_FLIP_NONE,
    SDL_FLIP_HORIZONTAL,
    SDL_FLIP_VERTICAL
} SDL_FlipMode;

struct SDL_Surface
{
    SDL_SurfaceFlags flags;
    SDL_PixelFormat format;
    int w;
    int h;
    int pitch;
    void *pixels;

    int refcount;

    void *reserved;
};

typedef struct SDL_Surface SDL_Surface;

extern __attribute__((visibility("default"))) SDL_Surface *SDL_CreateSurface(int width, int height, SDL_PixelFormat format);

extern __attribute__((visibility("default"))) SDL_Surface *SDL_CreateSurfaceFrom(int width, int height, SDL_PixelFormat format, void *pixels, int pitch);

extern __attribute__((visibility("default"))) void SDL_DestroySurface(SDL_Surface *surface);

extern __attribute__((visibility("default"))) SDL_PropertiesID SDL_GetSurfaceProperties(SDL_Surface *surface);

extern __attribute__((visibility("default"))) _Bool SDL_SetSurfaceColorspace(SDL_Surface *surface, SDL_Colorspace colorspace);

extern __attribute__((visibility("default"))) SDL_Colorspace SDL_GetSurfaceColorspace(SDL_Surface *surface);

extern __attribute__((visibility("default"))) SDL_Palette *SDL_CreateSurfacePalette(SDL_Surface *surface);

extern __attribute__((visibility("default"))) _Bool SDL_SetSurfacePalette(SDL_Surface *surface, SDL_Palette *palette);

extern __attribute__((visibility("default"))) SDL_Palette *SDL_GetSurfacePalette(SDL_Surface *surface);

extern __attribute__((visibility("default"))) _Bool SDL_AddSurfaceAlternateImage(SDL_Surface *surface, SDL_Surface *image);

extern __attribute__((visibility("default"))) _Bool SDL_SurfaceHasAlternateImages(SDL_Surface *surface);

extern __attribute__((visibility("default"))) SDL_Surface **SDL_GetSurfaceImages(SDL_Surface *surface, int *count);

extern __attribute__((visibility("default"))) void SDL_RemoveSurfaceAlternateImages(SDL_Surface *surface);

extern __attribute__((visibility("default"))) _Bool SDL_LockSurface(SDL_Surface *surface);

extern __attribute__((visibility("default"))) void SDL_UnlockSurface(SDL_Surface *surface);

extern __attribute__((visibility("default"))) SDL_Surface *SDL_LoadBMP_IO(SDL_IOStream *src, _Bool closeio);

extern __attribute__((visibility("default"))) SDL_Surface *SDL_LoadBMP(const char *file);

extern __attribute__((visibility("default"))) _Bool SDL_SaveBMP_IO(SDL_Surface *surface, SDL_IOStream *dst, _Bool closeio);

extern __attribute__((visibility("default"))) _Bool SDL_SaveBMP(SDL_Surface *surface, const char *file);

extern __attribute__((visibility("default"))) _Bool SDL_SetSurfaceRLE(SDL_Surface *surface, _Bool enabled);

extern __attribute__((visibility("default"))) _Bool SDL_SurfaceHasRLE(SDL_Surface *surface);

extern __attribute__((visibility("default"))) _Bool SDL_SetSurfaceColorKey(SDL_Surface *surface, _Bool enabled, Uint32 key);

extern __attribute__((visibility("default"))) _Bool SDL_SurfaceHasColorKey(SDL_Surface *surface);

extern __attribute__((visibility("default"))) _Bool SDL_GetSurfaceColorKey(SDL_Surface *surface, Uint32 *key);

extern __attribute__((visibility("default"))) _Bool SDL_SetSurfaceColorMod(SDL_Surface *surface, Uint8 r, Uint8 g, Uint8 b);

extern __attribute__((visibility("default"))) _Bool SDL_GetSurfaceColorMod(SDL_Surface *surface, Uint8 *r, Uint8 *g, Uint8 *b);

extern __attribute__((visibility("default"))) _Bool SDL_SetSurfaceAlphaMod(SDL_Surface *surface, Uint8 alpha);

extern __attribute__((visibility("default"))) _Bool SDL_GetSurfaceAlphaMod(SDL_Surface *surface, Uint8 *alpha);

extern __attribute__((visibility("default"))) _Bool SDL_SetSurfaceBlendMode(SDL_Surface *surface, SDL_BlendMode blendMode);

extern __attribute__((visibility("default"))) _Bool SDL_GetSurfaceBlendMode(SDL_Surface *surface, SDL_BlendMode *blendMode);

extern __attribute__((visibility("default"))) _Bool SDL_SetSurfaceClipRect(SDL_Surface *surface, const SDL_Rect *rect);

extern __attribute__((visibility("default"))) _Bool SDL_GetSurfaceClipRect(SDL_Surface *surface, SDL_Rect *rect);

extern __attribute__((visibility("default"))) _Bool SDL_FlipSurface(SDL_Surface *surface, SDL_FlipMode flip);

extern __attribute__((visibility("default"))) SDL_Surface *SDL_DuplicateSurface(SDL_Surface *surface);

extern __attribute__((visibility("default"))) SDL_Surface *SDL_ScaleSurface(SDL_Surface *surface, int width, int height, SDL_ScaleMode scaleMode);

extern __attribute__((visibility("default"))) SDL_Surface *SDL_ConvertSurface(SDL_Surface *surface, SDL_PixelFormat format);

extern __attribute__((visibility("default"))) SDL_Surface *SDL_ConvertSurfaceAndColorspace(SDL_Surface *surface, SDL_PixelFormat format, SDL_Palette *palette, SDL_Colorspace colorspace, SDL_PropertiesID props);

extern __attribute__((visibility("default"))) _Bool SDL_ConvertPixels(int width, int height, SDL_PixelFormat src_format, const void *src, int src_pitch, SDL_PixelFormat dst_format, void *dst, int dst_pitch);

extern __attribute__((visibility("default"))) _Bool SDL_ConvertPixelsAndColorspace(int width, int height, SDL_PixelFormat src_format, SDL_Colorspace src_colorspace, SDL_PropertiesID src_properties, const void *src, int src_pitch, SDL_PixelFormat dst_format, SDL_Colorspace dst_colorspace, SDL_PropertiesID dst_properties, void *dst, int dst_pitch);

extern __attribute__((visibility("default"))) _Bool SDL_PremultiplyAlpha(int width, int height, SDL_PixelFormat src_format, const void *src, int src_pitch, SDL_PixelFormat dst_format, void *dst, int dst_pitch, _Bool linear);

extern __attribute__((visibility("default"))) _Bool SDL_PremultiplySurfaceAlpha(SDL_Surface *surface, _Bool linear);

extern __attribute__((visibility("default"))) _Bool SDL_ClearSurface(SDL_Surface *surface, float r, float g, float b, float a);

extern __attribute__((visibility("default"))) _Bool SDL_FillSurfaceRect(SDL_Surface *dst, const SDL_Rect *rect, Uint32 color);

extern __attribute__((visibility("default"))) _Bool SDL_FillSurfaceRects(SDL_Surface *dst, const SDL_Rect *rects, int count, Uint32 color);

extern __attribute__((visibility("default"))) _Bool SDL_BlitSurface(SDL_Surface *src, const SDL_Rect *srcrect, SDL_Surface *dst, const SDL_Rect *dstrect);

extern __attribute__((visibility("default"))) _Bool SDL_BlitSurfaceUnchecked(SDL_Surface *src, const SDL_Rect *srcrect, SDL_Surface *dst, const SDL_Rect *dstrect);

extern __attribute__((visibility("default"))) _Bool SDL_BlitSurfaceScaled(SDL_Surface *src, const SDL_Rect *srcrect, SDL_Surface *dst, const SDL_Rect *dstrect, SDL_ScaleMode scaleMode);

extern __attribute__((visibility("default"))) _Bool SDL_BlitSurfaceUncheckedScaled(SDL_Surface *src, const SDL_Rect *srcrect, SDL_Surface *dst, const SDL_Rect *dstrect, SDL_ScaleMode scaleMode);

extern __attribute__((visibility("default"))) _Bool SDL_StretchSurface(SDL_Surface *src, const SDL_Rect *srcrect, SDL_Surface *dst, const SDL_Rect *dstrect, SDL_ScaleMode scaleMode);

extern __attribute__((visibility("default"))) _Bool SDL_BlitSurfaceTiled(SDL_Surface *src, const SDL_Rect *srcrect, SDL_Surface *dst, const SDL_Rect *dstrect);

extern __attribute__((visibility("default"))) _Bool SDL_BlitSurfaceTiledWithScale(SDL_Surface *src, const SDL_Rect *srcrect, float scale, SDL_ScaleMode scaleMode, SDL_Surface *dst, const SDL_Rect *dstrect);

extern __attribute__((visibility("default"))) _Bool SDL_BlitSurface9Grid(SDL_Surface *src, const SDL_Rect *srcrect, int left_width, int right_width, int top_height, int bottom_height, float scale, SDL_ScaleMode scaleMode, SDL_Surface *dst, const SDL_Rect *dstrect);

extern __attribute__((visibility("default"))) Uint32 SDL_MapSurfaceRGB(SDL_Surface *surface, Uint8 r, Uint8 g, Uint8 b);

extern __attribute__((visibility("default"))) Uint32 SDL_MapSurfaceRGBA(SDL_Surface *surface, Uint8 r, Uint8 g, Uint8 b, Uint8 a);

extern __attribute__((visibility("default"))) _Bool SDL_ReadSurfacePixel(SDL_Surface *surface, int x, int y, Uint8 *r, Uint8 *g, Uint8 *b, Uint8 *a);

extern __attribute__((visibility("default"))) _Bool SDL_ReadSurfacePixelFloat(SDL_Surface *surface, int x, int y, float *r, float *g, float *b, float *a);

extern __attribute__((visibility("default"))) _Bool SDL_WriteSurfacePixel(SDL_Surface *surface, int x, int y, Uint8 r, Uint8 g, Uint8 b, Uint8 a);

extern __attribute__((visibility("default"))) _Bool SDL_WriteSurfacePixelFloat(SDL_Surface *surface, int x, int y, float r, float g, float b, float a);

typedef Uint32 SDL_CameraID;

typedef struct SDL_Camera SDL_Camera;

typedef struct SDL_CameraSpec
{
    SDL_PixelFormat format;
    SDL_Colorspace colorspace;
    int width;
    int height;
    int framerate_numerator;
    int framerate_denominator;
} SDL_CameraSpec;

typedef enum SDL_CameraPosition
{
    SDL_CAMERA_POSITION_UNKNOWN,
    SDL_CAMERA_POSITION_FRONT_FACING,
    SDL_CAMERA_POSITION_BACK_FACING
} SDL_CameraPosition;

extern __attribute__((visibility("default"))) int SDL_GetNumCameraDrivers(void);

extern __attribute__((visibility("default"))) const char *SDL_GetCameraDriver(int index);

extern __attribute__((visibility("default"))) const char *SDL_GetCurrentCameraDriver(void);

extern __attribute__((visibility("default"))) SDL_CameraID *SDL_GetCameras(int *count);

extern __attribute__((visibility("default"))) SDL_CameraSpec **SDL_GetCameraSupportedFormats(SDL_CameraID instance_id, int *count);

extern __attribute__((visibility("default"))) const char *SDL_GetCameraName(SDL_CameraID instance_id);

extern __attribute__((visibility("default"))) SDL_CameraPosition SDL_GetCameraPosition(SDL_CameraID instance_id);

extern __attribute__((visibility("default"))) SDL_Camera *SDL_OpenCamera(SDL_CameraID instance_id, const SDL_CameraSpec *spec);

extern __attribute__((visibility("default"))) int SDL_GetCameraPermissionState(SDL_Camera *camera);

extern __attribute__((visibility("default"))) SDL_CameraID SDL_GetCameraID(SDL_Camera *camera);

extern __attribute__((visibility("default"))) SDL_PropertiesID SDL_GetCameraProperties(SDL_Camera *camera);

extern __attribute__((visibility("default"))) _Bool SDL_GetCameraFormat(SDL_Camera *camera, SDL_CameraSpec *spec);

extern __attribute__((visibility("default"))) SDL_Surface *SDL_AcquireCameraFrame(SDL_Camera *camera, Uint64 *timestampNS);

extern __attribute__((visibility("default"))) void SDL_ReleaseCameraFrame(SDL_Camera *camera, SDL_Surface *frame);

extern __attribute__((visibility("default"))) void SDL_CloseCamera(SDL_Camera *camera);

extern __attribute__((visibility("default"))) _Bool SDL_SetClipboardText(const char *text);

extern __attribute__((visibility("default"))) char *SDL_GetClipboardText(void);

extern __attribute__((visibility("default"))) _Bool SDL_HasClipboardText(void);

extern __attribute__((visibility("default"))) _Bool SDL_SetPrimarySelectionText(const char *text);

extern __attribute__((visibility("default"))) char *SDL_GetPrimarySelectionText(void);

extern __attribute__((visibility("default"))) _Bool SDL_HasPrimarySelectionText(void);

typedef const void *(*SDL_ClipboardDataCallback)(void *userdata, const char *mime_type, size_t *size);

typedef void (*SDL_ClipboardCleanupCallback)(void *userdata);

extern __attribute__((visibility("default"))) _Bool SDL_SetClipboardData(SDL_ClipboardDataCallback callback, SDL_ClipboardCleanupCallback cleanup, void *userdata, const char **mime_types, size_t num_mime_types);

extern __attribute__((visibility("default"))) _Bool SDL_ClearClipboardData(void);

extern __attribute__((visibility("default"))) void *SDL_GetClipboardData(const char *mime_type, size_t *size);

extern __attribute__((visibility("default"))) _Bool SDL_HasClipboardData(const char *mime_type);

extern __attribute__((visibility("default"))) char **SDL_GetClipboardMimeTypes(size_t *num_mime_types);

extern __attribute__((visibility("default"))) int SDL_GetNumLogicalCPUCores(void);

extern __attribute__((visibility("default"))) int SDL_GetCPUCacheLineSize(void);

extern __attribute__((visibility("default"))) _Bool SDL_HasAltiVec(void);

extern __attribute__((visibility("default"))) _Bool SDL_HasMMX(void);

extern __attribute__((visibility("default"))) _Bool SDL_HasSSE(void);

extern __attribute__((visibility("default"))) _Bool SDL_HasSSE2(void);

extern __attribute__((visibility("default"))) _Bool SDL_HasSSE3(void);

extern __attribute__((visibility("default"))) _Bool SDL_HasSSE41(void);

extern __attribute__((visibility("default"))) _Bool SDL_HasSSE42(void);

extern __attribute__((visibility("default"))) _Bool SDL_HasAVX(void);

extern __attribute__((visibility("default"))) _Bool SDL_HasAVX2(void);

extern __attribute__((visibility("default"))) _Bool SDL_HasAVX512F(void);

extern __attribute__((visibility("default"))) _Bool SDL_HasARMSIMD(void);

extern __attribute__((visibility("default"))) _Bool SDL_HasNEON(void);

extern __attribute__((visibility("default"))) _Bool SDL_HasLSX(void);

extern __attribute__((visibility("default"))) _Bool SDL_HasLASX(void);

extern __attribute__((visibility("default"))) int SDL_GetSystemRAM(void);

extern __attribute__((visibility("default"))) size_t SDL_GetSIMDAlignment(void);

typedef Uint32 SDL_DisplayID;

typedef Uint32 SDL_WindowID;

typedef enum SDL_SystemTheme
{
    SDL_SYSTEM_THEME_UNKNOWN,
    SDL_SYSTEM_THEME_LIGHT,
    SDL_SYSTEM_THEME_DARK
} SDL_SystemTheme;

typedef struct SDL_DisplayModeData SDL_DisplayModeData;

typedef struct SDL_DisplayMode
{
    SDL_DisplayID displayID;
    SDL_PixelFormat format;
    int w;
    int h;
    float pixel_density;
    float refresh_rate;
    int refresh_rate_numerator;
    int refresh_rate_denominator;

    SDL_DisplayModeData *internal;

} SDL_DisplayMode;

typedef enum SDL_DisplayOrientation
{
    SDL_ORIENTATION_UNKNOWN,
    SDL_ORIENTATION_LANDSCAPE,
    SDL_ORIENTATION_LANDSCAPE_FLIPPED,
    SDL_ORIENTATION_PORTRAIT,
    SDL_ORIENTATION_PORTRAIT_FLIPPED
} SDL_DisplayOrientation;

typedef struct SDL_Window SDL_Window;

typedef Uint64 SDL_WindowFlags;

typedef enum SDL_FlashOperation
{
    SDL_FLASH_CANCEL,
    SDL_FLASH_BRIEFLY,
    SDL_FLASH_UNTIL_FOCUSED
} SDL_FlashOperation;

typedef struct SDL_GLContextState *SDL_GLContext;

typedef void *SDL_EGLDisplay;

typedef void *SDL_EGLConfig;

typedef void *SDL_EGLSurface;

typedef intptr_t SDL_EGLAttrib;

typedef int SDL_EGLint;

typedef SDL_EGLAttrib *(*SDL_EGLAttribArrayCallback)(void *userdata);

typedef SDL_EGLint *(*SDL_EGLIntArrayCallback)(void *userdata, SDL_EGLDisplay display, SDL_EGLConfig config);

typedef enum SDL_GLAttr
{
    SDL_GL_RED_SIZE,
    SDL_GL_GREEN_SIZE,
    SDL_GL_BLUE_SIZE,
    SDL_GL_ALPHA_SIZE,
    SDL_GL_BUFFER_SIZE,
    SDL_GL_DOUBLEBUFFER,
    SDL_GL_DEPTH_SIZE,
    SDL_GL_STENCIL_SIZE,
    SDL_GL_ACCUM_RED_SIZE,
    SDL_GL_ACCUM_GREEN_SIZE,
    SDL_GL_ACCUM_BLUE_SIZE,
    SDL_GL_ACCUM_ALPHA_SIZE,
    SDL_GL_STEREO,
    SDL_GL_MULTISAMPLEBUFFERS,
    SDL_GL_MULTISAMPLESAMPLES,
    SDL_GL_ACCELERATED_VISUAL,
    SDL_GL_RETAINED_BACKING,
    SDL_GL_CONTEXT_MAJOR_VERSION,
    SDL_GL_CONTEXT_MINOR_VERSION,
    SDL_GL_CONTEXT_FLAGS,
    SDL_GL_CONTEXT_PROFILE_MASK,
    SDL_GL_SHARE_WITH_CURRENT_CONTEXT,
    SDL_GL_FRAMEBUFFER_SRGB_CAPABLE,
    SDL_GL_CONTEXT_RELEASE_BEHAVIOR,
    SDL_GL_CONTEXT_RESET_NOTIFICATION,
    SDL_GL_CONTEXT_NO_ERROR,
    SDL_GL_FLOATBUFFERS,
    SDL_GL_EGL_PLATFORM
} SDL_GLAttr;

typedef Uint32 SDL_GLProfile;

typedef Uint32 SDL_GLContextFlag;

typedef Uint32 SDL_GLContextReleaseFlag;

typedef Uint32 SDL_GLContextResetNotification;

extern __attribute__((visibility("default"))) int SDL_GetNumVideoDrivers(void);

extern __attribute__((visibility("default"))) const char *SDL_GetVideoDriver(int index);

extern __attribute__((visibility("default"))) const char *SDL_GetCurrentVideoDriver(void);

extern __attribute__((visibility("default"))) SDL_SystemTheme SDL_GetSystemTheme(void);

extern __attribute__((visibility("default"))) SDL_DisplayID *SDL_GetDisplays(int *count);

extern __attribute__((visibility("default"))) SDL_DisplayID SDL_GetPrimaryDisplay(void);

extern __attribute__((visibility("default"))) SDL_PropertiesID SDL_GetDisplayProperties(SDL_DisplayID displayID);

extern __attribute__((visibility("default"))) const char *SDL_GetDisplayName(SDL_DisplayID displayID);

extern __attribute__((visibility("default"))) _Bool SDL_GetDisplayBounds(SDL_DisplayID displayID, SDL_Rect *rect);

extern __attribute__((visibility("default"))) _Bool SDL_GetDisplayUsableBounds(SDL_DisplayID displayID, SDL_Rect *rect);

extern __attribute__((visibility("default"))) SDL_DisplayOrientation SDL_GetNaturalDisplayOrientation(SDL_DisplayID displayID);

extern __attribute__((visibility("default"))) SDL_DisplayOrientation SDL_GetCurrentDisplayOrientation(SDL_DisplayID displayID);

extern __attribute__((visibility("default"))) float SDL_GetDisplayContentScale(SDL_DisplayID displayID);

extern __attribute__((visibility("default"))) SDL_DisplayMode **SDL_GetFullscreenDisplayModes(SDL_DisplayID displayID, int *count);

extern __attribute__((visibility("default"))) _Bool SDL_GetClosestFullscreenDisplayMode(SDL_DisplayID displayID, int w, int h, float refresh_rate, _Bool include_high_density_modes, SDL_DisplayMode *closest);

extern __attribute__((visibility("default"))) const SDL_DisplayMode *SDL_GetDesktopDisplayMode(SDL_DisplayID displayID);

extern __attribute__((visibility("default"))) const SDL_DisplayMode *SDL_GetCurrentDisplayMode(SDL_DisplayID displayID);

extern __attribute__((visibility("default"))) SDL_DisplayID SDL_GetDisplayForPoint(const SDL_Point *point);

extern __attribute__((visibility("default"))) SDL_DisplayID SDL_GetDisplayForRect(const SDL_Rect *rect);

extern __attribute__((visibility("default"))) SDL_DisplayID SDL_GetDisplayForWindow(SDL_Window *window);

extern __attribute__((visibility("default"))) float SDL_GetWindowPixelDensity(SDL_Window *window);

extern __attribute__((visibility("default"))) float SDL_GetWindowDisplayScale(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowFullscreenMode(SDL_Window *window, const SDL_DisplayMode *mode);

extern __attribute__((visibility("default"))) const SDL_DisplayMode *SDL_GetWindowFullscreenMode(SDL_Window *window);

extern __attribute__((visibility("default"))) void *SDL_GetWindowICCProfile(SDL_Window *window, size_t *size);

extern __attribute__((visibility("default"))) SDL_PixelFormat SDL_GetWindowPixelFormat(SDL_Window *window);

extern __attribute__((visibility("default"))) SDL_Window **SDL_GetWindows(int *count);

extern __attribute__((visibility("default"))) SDL_Window *SDL_CreateWindow(const char *title, int w, int h, SDL_WindowFlags flags);

extern __attribute__((visibility("default"))) SDL_Window *SDL_CreatePopupWindow(SDL_Window *parent, int offset_x, int offset_y, int w, int h, SDL_WindowFlags flags);

extern __attribute__((visibility("default"))) SDL_Window *SDL_CreateWindowWithProperties(SDL_PropertiesID props);

extern __attribute__((visibility("default"))) SDL_WindowID SDL_GetWindowID(SDL_Window *window);

extern __attribute__((visibility("default"))) SDL_Window *SDL_GetWindowFromID(SDL_WindowID id);

extern __attribute__((visibility("default"))) SDL_Window *SDL_GetWindowParent(SDL_Window *window);

extern __attribute__((visibility("default"))) SDL_PropertiesID SDL_GetWindowProperties(SDL_Window *window);

extern __attribute__((visibility("default"))) SDL_WindowFlags SDL_GetWindowFlags(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowTitle(SDL_Window *window, const char *title);

extern __attribute__((visibility("default"))) const char *SDL_GetWindowTitle(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowIcon(SDL_Window *window, SDL_Surface *icon);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowPosition(SDL_Window *window, int x, int y);

extern __attribute__((visibility("default"))) _Bool SDL_GetWindowPosition(SDL_Window *window, int *x, int *y);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowSize(SDL_Window *window, int w, int h);

extern __attribute__((visibility("default"))) _Bool SDL_GetWindowSize(SDL_Window *window, int *w, int *h);

extern __attribute__((visibility("default"))) _Bool SDL_GetWindowSafeArea(SDL_Window *window, SDL_Rect *rect);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowAspectRatio(SDL_Window *window, float min_aspect, float max_aspect);

extern __attribute__((visibility("default"))) _Bool SDL_GetWindowAspectRatio(SDL_Window *window, float *min_aspect, float *max_aspect);

extern __attribute__((visibility("default"))) _Bool SDL_GetWindowBordersSize(SDL_Window *window, int *top, int *left, int *bottom, int *right);

extern __attribute__((visibility("default"))) _Bool SDL_GetWindowSizeInPixels(SDL_Window *window, int *w, int *h);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowMinimumSize(SDL_Window *window, int min_w, int min_h);

extern __attribute__((visibility("default"))) _Bool SDL_GetWindowMinimumSize(SDL_Window *window, int *w, int *h);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowMaximumSize(SDL_Window *window, int max_w, int max_h);

extern __attribute__((visibility("default"))) _Bool SDL_GetWindowMaximumSize(SDL_Window *window, int *w, int *h);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowBordered(SDL_Window *window, _Bool bordered);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowResizable(SDL_Window *window, _Bool resizable);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowAlwaysOnTop(SDL_Window *window, _Bool on_top);

extern __attribute__((visibility("default"))) _Bool SDL_ShowWindow(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_HideWindow(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_RaiseWindow(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_MaximizeWindow(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_MinimizeWindow(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_RestoreWindow(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowFullscreen(SDL_Window *window, _Bool fullscreen);

extern __attribute__((visibility("default"))) _Bool SDL_SyncWindow(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_WindowHasSurface(SDL_Window *window);

extern __attribute__((visibility("default"))) SDL_Surface *SDL_GetWindowSurface(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowSurfaceVSync(SDL_Window *window, int vsync);

extern __attribute__((visibility("default"))) _Bool SDL_GetWindowSurfaceVSync(SDL_Window *window, int *vsync);

extern __attribute__((visibility("default"))) _Bool SDL_UpdateWindowSurface(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_UpdateWindowSurfaceRects(SDL_Window *window, const SDL_Rect *rects, int numrects);

extern __attribute__((visibility("default"))) _Bool SDL_DestroyWindowSurface(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowKeyboardGrab(SDL_Window *window, _Bool grabbed);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowMouseGrab(SDL_Window *window, _Bool grabbed);

extern __attribute__((visibility("default"))) _Bool SDL_GetWindowKeyboardGrab(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_GetWindowMouseGrab(SDL_Window *window);

extern __attribute__((visibility("default"))) SDL_Window *SDL_GetGrabbedWindow(void);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowMouseRect(SDL_Window *window, const SDL_Rect *rect);

extern __attribute__((visibility("default"))) const SDL_Rect *SDL_GetWindowMouseRect(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowOpacity(SDL_Window *window, float opacity);

extern __attribute__((visibility("default"))) float SDL_GetWindowOpacity(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowParent(SDL_Window *window, SDL_Window *parent);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowModal(SDL_Window *window, _Bool modal);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowFocusable(SDL_Window *window, _Bool focusable);

extern __attribute__((visibility("default"))) _Bool SDL_ShowWindowSystemMenu(SDL_Window *window, int x, int y);

typedef enum SDL_HitTestResult
{
    SDL_HITTEST_NORMAL,
    SDL_HITTEST_DRAGGABLE,
    SDL_HITTEST_RESIZE_TOPLEFT,
    SDL_HITTEST_RESIZE_TOP,
    SDL_HITTEST_RESIZE_TOPRIGHT,
    SDL_HITTEST_RESIZE_RIGHT,
    SDL_HITTEST_RESIZE_BOTTOMRIGHT,
    SDL_HITTEST_RESIZE_BOTTOM,
    SDL_HITTEST_RESIZE_BOTTOMLEFT,
    SDL_HITTEST_RESIZE_LEFT
} SDL_HitTestResult;

typedef SDL_HitTestResult (*SDL_HitTest)(SDL_Window *win,
                                         const SDL_Point *area,
                                         void *data);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowHitTest(SDL_Window *window, SDL_HitTest callback, void *callback_data);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowShape(SDL_Window *window, SDL_Surface *shape);

extern __attribute__((visibility("default"))) _Bool SDL_FlashWindow(SDL_Window *window, SDL_FlashOperation operation);

extern __attribute__((visibility("default"))) void SDL_DestroyWindow(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_ScreenSaverEnabled(void);

extern __attribute__((visibility("default"))) _Bool SDL_EnableScreenSaver(void);

extern __attribute__((visibility("default"))) _Bool SDL_DisableScreenSaver(void);

extern __attribute__((visibility("default"))) _Bool SDL_GL_LoadLibrary(const char *path);

extern __attribute__((visibility("default"))) SDL_FunctionPointer SDL_GL_GetProcAddress(const char *proc);

extern __attribute__((visibility("default"))) SDL_FunctionPointer SDL_EGL_GetProcAddress(const char *proc);

extern __attribute__((visibility("default"))) void SDL_GL_UnloadLibrary(void);

extern __attribute__((visibility("default"))) _Bool SDL_GL_ExtensionSupported(const char *extension);

extern __attribute__((visibility("default"))) void SDL_GL_ResetAttributes(void);

extern __attribute__((visibility("default"))) _Bool SDL_GL_SetAttribute(SDL_GLAttr attr, int value);

extern __attribute__((visibility("default"))) _Bool SDL_GL_GetAttribute(SDL_GLAttr attr, int *value);

extern __attribute__((visibility("default"))) SDL_GLContext SDL_GL_CreateContext(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_GL_MakeCurrent(SDL_Window *window, SDL_GLContext context);

extern __attribute__((visibility("default"))) SDL_Window *SDL_GL_GetCurrentWindow(void);

extern __attribute__((visibility("default"))) SDL_GLContext SDL_GL_GetCurrentContext(void);

extern __attribute__((visibility("default"))) SDL_EGLDisplay SDL_EGL_GetCurrentDisplay(void);

extern __attribute__((visibility("default"))) SDL_EGLConfig SDL_EGL_GetCurrentConfig(void);

extern __attribute__((visibility("default"))) SDL_EGLSurface SDL_EGL_GetWindowSurface(SDL_Window *window);

extern __attribute__((visibility("default"))) void SDL_EGL_SetAttributeCallbacks(SDL_EGLAttribArrayCallback platformAttribCallback,
                                                                                 SDL_EGLIntArrayCallback surfaceAttribCallback,
                                                                                 SDL_EGLIntArrayCallback contextAttribCallback, void *userdata);

extern __attribute__((visibility("default"))) _Bool SDL_GL_SetSwapInterval(int interval);

extern __attribute__((visibility("default"))) _Bool SDL_GL_GetSwapInterval(int *interval);

extern __attribute__((visibility("default"))) _Bool SDL_GL_SwapWindow(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_GL_DestroyContext(SDL_GLContext context);

typedef struct SDL_DialogFileFilter
{
    const char *name;
    const char *pattern;
} SDL_DialogFileFilter;

typedef void (*SDL_DialogFileCallback)(void *userdata, const char *const *filelist, int filter);

extern __attribute__((visibility("default"))) void SDL_ShowOpenFileDialog(SDL_DialogFileCallback callback, void *userdata, SDL_Window *window, const SDL_DialogFileFilter *filters, int nfilters, const char *default_location, _Bool allow_many);

extern __attribute__((visibility("default"))) void SDL_ShowSaveFileDialog(SDL_DialogFileCallback callback, void *userdata, SDL_Window *window, const SDL_DialogFileFilter *filters, int nfilters, const char *default_location);

extern __attribute__((visibility("default"))) void SDL_ShowOpenFolderDialog(SDL_DialogFileCallback callback, void *userdata, SDL_Window *window, const char *default_location, _Bool allow_many);

typedef enum SDL_FileDialogType
{
    SDL_FILEDIALOG_OPENFILE,
    SDL_FILEDIALOG_SAVEFILE,
    SDL_FILEDIALOG_OPENFOLDER
} SDL_FileDialogType;

extern __attribute__((visibility("default"))) void SDL_ShowFileDialogWithProperties(SDL_FileDialogType type, SDL_DialogFileCallback callback, void *userdata, SDL_PropertiesID props);

typedef struct SDL_GUID
{
    Uint8 data[16];
} SDL_GUID;

extern __attribute__((visibility("default"))) void SDL_GUIDToString(SDL_GUID guid, char *pszGUID, int cbGUID);

extern __attribute__((visibility("default"))) SDL_GUID SDL_StringToGUID(const char *pchGUID);

typedef enum SDL_PowerState
{
    SDL_POWERSTATE_ERROR = -1,
    SDL_POWERSTATE_UNKNOWN,
    SDL_POWERSTATE_ON_BATTERY,
    SDL_POWERSTATE_NO_BATTERY,
    SDL_POWERSTATE_CHARGING,
    SDL_POWERSTATE_CHARGED
} SDL_PowerState;

extern __attribute__((visibility("default"))) SDL_PowerState SDL_GetPowerInfo(int *seconds, int *percent);

typedef struct SDL_Sensor SDL_Sensor;

typedef Uint32 SDL_SensorID;

typedef enum SDL_SensorType
{
    SDL_SENSOR_INVALID = -1,
    SDL_SENSOR_UNKNOWN,
    SDL_SENSOR_ACCEL,
    SDL_SENSOR_GYRO,
    SDL_SENSOR_ACCEL_L,
    SDL_SENSOR_GYRO_L,
    SDL_SENSOR_ACCEL_R,
    SDL_SENSOR_GYRO_R
} SDL_SensorType;

extern __attribute__((visibility("default"))) SDL_SensorID *SDL_GetSensors(int *count);

extern __attribute__((visibility("default"))) const char *SDL_GetSensorNameForID(SDL_SensorID instance_id);

extern __attribute__((visibility("default"))) SDL_SensorType SDL_GetSensorTypeForID(SDL_SensorID instance_id);

extern __attribute__((visibility("default"))) int SDL_GetSensorNonPortableTypeForID(SDL_SensorID instance_id);

extern __attribute__((visibility("default"))) SDL_Sensor *SDL_OpenSensor(SDL_SensorID instance_id);

extern __attribute__((visibility("default"))) SDL_Sensor *SDL_GetSensorFromID(SDL_SensorID instance_id);

extern __attribute__((visibility("default"))) SDL_PropertiesID SDL_GetSensorProperties(SDL_Sensor *sensor);

extern __attribute__((visibility("default"))) const char *SDL_GetSensorName(SDL_Sensor *sensor);

extern __attribute__((visibility("default"))) SDL_SensorType SDL_GetSensorType(SDL_Sensor *sensor);

extern __attribute__((visibility("default"))) int SDL_GetSensorNonPortableType(SDL_Sensor *sensor);

extern __attribute__((visibility("default"))) SDL_SensorID SDL_GetSensorID(SDL_Sensor *sensor);

extern __attribute__((visibility("default"))) _Bool SDL_GetSensorData(SDL_Sensor *sensor, float *data, int num_values);

extern __attribute__((visibility("default"))) void SDL_CloseSensor(SDL_Sensor *sensor);

extern __attribute__((visibility("default"))) void SDL_UpdateSensors(void);

typedef struct SDL_Joystick SDL_Joystick;

typedef Uint32 SDL_JoystickID;

typedef enum SDL_JoystickType
{
    SDL_JOYSTICK_TYPE_UNKNOWN,
    SDL_JOYSTICK_TYPE_GAMEPAD,
    SDL_JOYSTICK_TYPE_WHEEL,
    SDL_JOYSTICK_TYPE_ARCADE_STICK,
    SDL_JOYSTICK_TYPE_FLIGHT_STICK,
    SDL_JOYSTICK_TYPE_DANCE_PAD,
    SDL_JOYSTICK_TYPE_GUITAR,
    SDL_JOYSTICK_TYPE_DRUM_KIT,
    SDL_JOYSTICK_TYPE_ARCADE_PAD,
    SDL_JOYSTICK_TYPE_THROTTLE,
    SDL_JOYSTICK_TYPE_COUNT
} SDL_JoystickType;

typedef enum SDL_JoystickConnectionState
{
    SDL_JOYSTICK_CONNECTION_INVALID = -1,
    SDL_JOYSTICK_CONNECTION_UNKNOWN,
    SDL_JOYSTICK_CONNECTION_WIRED,
    SDL_JOYSTICK_CONNECTION_WIRELESS
} SDL_JoystickConnectionState;

extern __attribute__((visibility("default"))) void SDL_LockJoysticks(void);

extern __attribute__((visibility("default"))) void SDL_UnlockJoysticks(void);

extern __attribute__((visibility("default"))) _Bool SDL_HasJoystick(void);

extern __attribute__((visibility("default"))) SDL_JoystickID *SDL_GetJoysticks(int *count);

extern __attribute__((visibility("default"))) const char *SDL_GetJoystickNameForID(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) const char *SDL_GetJoystickPathForID(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) int SDL_GetJoystickPlayerIndexForID(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) SDL_GUID SDL_GetJoystickGUIDForID(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) Uint16 SDL_GetJoystickVendorForID(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) Uint16 SDL_GetJoystickProductForID(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) Uint16 SDL_GetJoystickProductVersionForID(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) SDL_JoystickType SDL_GetJoystickTypeForID(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) SDL_Joystick *SDL_OpenJoystick(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) SDL_Joystick *SDL_GetJoystickFromID(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) SDL_Joystick *SDL_GetJoystickFromPlayerIndex(int player_index);

typedef struct SDL_VirtualJoystickTouchpadDesc
{
    Uint16 nfingers;
    Uint16 padding[3];
} SDL_VirtualJoystickTouchpadDesc;

typedef struct SDL_VirtualJoystickSensorDesc
{
    SDL_SensorType type;
    float rate;
} SDL_VirtualJoystickSensorDesc;

typedef struct SDL_VirtualJoystickDesc
{
    Uint32 version;
    Uint16 type;
    Uint16 padding;
    Uint16 vendor_id;
    Uint16 product_id;
    Uint16 naxes;
    Uint16 nbuttons;
    Uint16 nballs;
    Uint16 nhats;
    Uint16 ntouchpads;
    Uint16 nsensors;
    Uint16 padding2[2];
    Uint32 button_mask;

    Uint32 axis_mask;

    const char *name;
    const SDL_VirtualJoystickTouchpadDesc *touchpads;
    const SDL_VirtualJoystickSensorDesc *sensors;

    void *userdata;
    void (*Update)(void *userdata);
    void (*SetPlayerIndex)(void *userdata, int player_index);
    _Bool (*Rumble)(void *userdata, Uint16 low_frequency_rumble, Uint16 high_frequency_rumble);
    _Bool (*RumbleTriggers)(void *userdata, Uint16 left_rumble, Uint16 right_rumble);
    _Bool (*SetLED)(void *userdata, Uint8 red, Uint8 green, Uint8 blue);
    _Bool (*SendEffect)(void *userdata, const void *data, int size);
    _Bool (*SetSensorsEnabled)(void *userdata, _Bool enabled);
    void (*Cleanup)(void *userdata);
} SDL_VirtualJoystickDesc;

_Static_assert((sizeof(void *) == 4 && sizeof(SDL_VirtualJoystickDesc) == 84) || (sizeof(void *) == 8 && sizeof(SDL_VirtualJoystickDesc) == 136), "(sizeof(void *) == 4 && sizeof(SDL_VirtualJoystickDesc) == 84) || (sizeof(void *) == 8 && sizeof(SDL_VirtualJoystickDesc) == 136)");

extern __attribute__((visibility("default"))) SDL_JoystickID SDL_AttachVirtualJoystick(const SDL_VirtualJoystickDesc *desc);

extern __attribute__((visibility("default"))) _Bool SDL_DetachVirtualJoystick(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) _Bool SDL_IsJoystickVirtual(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) _Bool SDL_SetJoystickVirtualAxis(SDL_Joystick *joystick, int axis, Sint16 value);

extern __attribute__((visibility("default"))) _Bool SDL_SetJoystickVirtualBall(SDL_Joystick *joystick, int ball, Sint16 xrel, Sint16 yrel);

extern __attribute__((visibility("default"))) _Bool SDL_SetJoystickVirtualButton(SDL_Joystick *joystick, int button, _Bool down);

extern __attribute__((visibility("default"))) _Bool SDL_SetJoystickVirtualHat(SDL_Joystick *joystick, int hat, Uint8 value);

extern __attribute__((visibility("default"))) _Bool SDL_SetJoystickVirtualTouchpad(SDL_Joystick *joystick, int touchpad, int finger, _Bool down, float x, float y, float pressure);

extern __attribute__((visibility("default"))) _Bool SDL_SendJoystickVirtualSensorData(SDL_Joystick *joystick, SDL_SensorType type, Uint64 sensor_timestamp, const float *data, int num_values);

extern __attribute__((visibility("default"))) SDL_PropertiesID SDL_GetJoystickProperties(SDL_Joystick *joystick);

extern __attribute__((visibility("default"))) const char *SDL_GetJoystickName(SDL_Joystick *joystick);

extern __attribute__((visibility("default"))) const char *SDL_GetJoystickPath(SDL_Joystick *joystick);

extern __attribute__((visibility("default"))) int SDL_GetJoystickPlayerIndex(SDL_Joystick *joystick);

extern __attribute__((visibility("default"))) _Bool SDL_SetJoystickPlayerIndex(SDL_Joystick *joystick, int player_index);

extern __attribute__((visibility("default"))) SDL_GUID SDL_GetJoystickGUID(SDL_Joystick *joystick);

extern __attribute__((visibility("default"))) Uint16 SDL_GetJoystickVendor(SDL_Joystick *joystick);

extern __attribute__((visibility("default"))) Uint16 SDL_GetJoystickProduct(SDL_Joystick *joystick);

extern __attribute__((visibility("default"))) Uint16 SDL_GetJoystickProductVersion(SDL_Joystick *joystick);

extern __attribute__((visibility("default"))) Uint16 SDL_GetJoystickFirmwareVersion(SDL_Joystick *joystick);

extern __attribute__((visibility("default"))) const char *SDL_GetJoystickSerial(SDL_Joystick *joystick);

extern __attribute__((visibility("default"))) SDL_JoystickType SDL_GetJoystickType(SDL_Joystick *joystick);

extern __attribute__((visibility("default"))) void SDL_GetJoystickGUIDInfo(SDL_GUID guid, Uint16 *vendor, Uint16 *product, Uint16 *version, Uint16 *crc16);

extern __attribute__((visibility("default"))) _Bool SDL_JoystickConnected(SDL_Joystick *joystick);

extern __attribute__((visibility("default"))) SDL_JoystickID SDL_GetJoystickID(SDL_Joystick *joystick);

extern __attribute__((visibility("default"))) int SDL_GetNumJoystickAxes(SDL_Joystick *joystick);

extern __attribute__((visibility("default"))) int SDL_GetNumJoystickBalls(SDL_Joystick *joystick);

extern __attribute__((visibility("default"))) int SDL_GetNumJoystickHats(SDL_Joystick *joystick);

extern __attribute__((visibility("default"))) int SDL_GetNumJoystickButtons(SDL_Joystick *joystick);

extern __attribute__((visibility("default"))) void SDL_SetJoystickEventsEnabled(_Bool enabled);

extern __attribute__((visibility("default"))) _Bool SDL_JoystickEventsEnabled(void);

extern __attribute__((visibility("default"))) void SDL_UpdateJoysticks(void);

extern __attribute__((visibility("default"))) Sint16 SDL_GetJoystickAxis(SDL_Joystick *joystick, int axis);

extern __attribute__((visibility("default"))) _Bool SDL_GetJoystickAxisInitialState(SDL_Joystick *joystick, int axis, Sint16 *state);

extern __attribute__((visibility("default"))) _Bool SDL_GetJoystickBall(SDL_Joystick *joystick, int ball, int *dx, int *dy);

extern __attribute__((visibility("default"))) Uint8 SDL_GetJoystickHat(SDL_Joystick *joystick, int hat);

extern __attribute__((visibility("default"))) _Bool SDL_GetJoystickButton(SDL_Joystick *joystick, int button);

extern __attribute__((visibility("default"))) _Bool SDL_RumbleJoystick(SDL_Joystick *joystick, Uint16 low_frequency_rumble, Uint16 high_frequency_rumble, Uint32 duration_ms);

extern __attribute__((visibility("default"))) _Bool SDL_RumbleJoystickTriggers(SDL_Joystick *joystick, Uint16 left_rumble, Uint16 right_rumble, Uint32 duration_ms);

extern __attribute__((visibility("default"))) _Bool SDL_SetJoystickLED(SDL_Joystick *joystick, Uint8 red, Uint8 green, Uint8 blue);

extern __attribute__((visibility("default"))) _Bool SDL_SendJoystickEffect(SDL_Joystick *joystick, const void *data, int size);

extern __attribute__((visibility("default"))) void SDL_CloseJoystick(SDL_Joystick *joystick);

extern __attribute__((visibility("default"))) SDL_JoystickConnectionState SDL_GetJoystickConnectionState(SDL_Joystick *joystick);

extern __attribute__((visibility("default"))) SDL_PowerState SDL_GetJoystickPowerInfo(SDL_Joystick *joystick, int *percent);

typedef struct SDL_Gamepad SDL_Gamepad;

typedef enum SDL_GamepadType
{
    SDL_GAMEPAD_TYPE_UNKNOWN = 0,
    SDL_GAMEPAD_TYPE_STANDARD,
    SDL_GAMEPAD_TYPE_XBOX360,
    SDL_GAMEPAD_TYPE_XBOXONE,
    SDL_GAMEPAD_TYPE_PS3,
    SDL_GAMEPAD_TYPE_PS4,
    SDL_GAMEPAD_TYPE_PS5,
    SDL_GAMEPAD_TYPE_NINTENDO_SWITCH_PRO,
    SDL_GAMEPAD_TYPE_NINTENDO_SWITCH_JOYCON_LEFT,
    SDL_GAMEPAD_TYPE_NINTENDO_SWITCH_JOYCON_RIGHT,
    SDL_GAMEPAD_TYPE_NINTENDO_SWITCH_JOYCON_PAIR,
    SDL_GAMEPAD_TYPE_COUNT
} SDL_GamepadType;

typedef enum SDL_GamepadButton
{
    SDL_GAMEPAD_BUTTON_INVALID = -1,
    SDL_GAMEPAD_BUTTON_SOUTH,
    SDL_GAMEPAD_BUTTON_EAST,
    SDL_GAMEPAD_BUTTON_WEST,
    SDL_GAMEPAD_BUTTON_NORTH,
    SDL_GAMEPAD_BUTTON_BACK,
    SDL_GAMEPAD_BUTTON_GUIDE,
    SDL_GAMEPAD_BUTTON_START,
    SDL_GAMEPAD_BUTTON_LEFT_STICK,
    SDL_GAMEPAD_BUTTON_RIGHT_STICK,
    SDL_GAMEPAD_BUTTON_LEFT_SHOULDER,
    SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER,
    SDL_GAMEPAD_BUTTON_DPAD_UP,
    SDL_GAMEPAD_BUTTON_DPAD_DOWN,
    SDL_GAMEPAD_BUTTON_DPAD_LEFT,
    SDL_GAMEPAD_BUTTON_DPAD_RIGHT,
    SDL_GAMEPAD_BUTTON_MISC1,
    SDL_GAMEPAD_BUTTON_RIGHT_PADDLE1,
    SDL_GAMEPAD_BUTTON_LEFT_PADDLE1,
    SDL_GAMEPAD_BUTTON_RIGHT_PADDLE2,
    SDL_GAMEPAD_BUTTON_LEFT_PADDLE2,
    SDL_GAMEPAD_BUTTON_TOUCHPAD,
    SDL_GAMEPAD_BUTTON_MISC2,
    SDL_GAMEPAD_BUTTON_MISC3,
    SDL_GAMEPAD_BUTTON_MISC4,
    SDL_GAMEPAD_BUTTON_MISC5,
    SDL_GAMEPAD_BUTTON_MISC6,
    SDL_GAMEPAD_BUTTON_COUNT
} SDL_GamepadButton;

typedef enum SDL_GamepadButtonLabel
{
    SDL_GAMEPAD_BUTTON_LABEL_UNKNOWN,
    SDL_GAMEPAD_BUTTON_LABEL_A,
    SDL_GAMEPAD_BUTTON_LABEL_B,
    SDL_GAMEPAD_BUTTON_LABEL_X,
    SDL_GAMEPAD_BUTTON_LABEL_Y,
    SDL_GAMEPAD_BUTTON_LABEL_CROSS,
    SDL_GAMEPAD_BUTTON_LABEL_CIRCLE,
    SDL_GAMEPAD_BUTTON_LABEL_SQUARE,
    SDL_GAMEPAD_BUTTON_LABEL_TRIANGLE
} SDL_GamepadButtonLabel;

typedef enum SDL_GamepadAxis
{
    SDL_GAMEPAD_AXIS_INVALID = -1,
    SDL_GAMEPAD_AXIS_LEFTX,
    SDL_GAMEPAD_AXIS_LEFTY,
    SDL_GAMEPAD_AXIS_RIGHTX,
    SDL_GAMEPAD_AXIS_RIGHTY,
    SDL_GAMEPAD_AXIS_LEFT_TRIGGER,
    SDL_GAMEPAD_AXIS_RIGHT_TRIGGER,
    SDL_GAMEPAD_AXIS_COUNT
} SDL_GamepadAxis;

typedef enum SDL_GamepadBindingType
{
    SDL_GAMEPAD_BINDTYPE_NONE = 0,
    SDL_GAMEPAD_BINDTYPE_BUTTON,
    SDL_GAMEPAD_BINDTYPE_AXIS,
    SDL_GAMEPAD_BINDTYPE_HAT
} SDL_GamepadBindingType;

typedef struct SDL_GamepadBinding
{
    SDL_GamepadBindingType input_type;
    union
    {
        int button;

        struct
        {
            int axis;
            int axis_min;
            int axis_max;
        } axis;

        struct
        {
            int hat;
            int hat_mask;
        } hat;

    } input;

    SDL_GamepadBindingType output_type;
    union
    {
        SDL_GamepadButton button;

        struct
        {
            SDL_GamepadAxis axis;
            int axis_min;
            int axis_max;
        } axis;

    } output;
} SDL_GamepadBinding;

extern __attribute__((visibility("default"))) int SDL_AddGamepadMapping(const char *mapping);

extern __attribute__((visibility("default"))) int SDL_AddGamepadMappingsFromIO(SDL_IOStream *src, _Bool closeio);

extern __attribute__((visibility("default"))) int SDL_AddGamepadMappingsFromFile(const char *file);

extern __attribute__((visibility("default"))) _Bool SDL_ReloadGamepadMappings(void);

extern __attribute__((visibility("default"))) char **SDL_GetGamepadMappings(int *count);

extern __attribute__((visibility("default"))) char *SDL_GetGamepadMappingForGUID(SDL_GUID guid);

extern __attribute__((visibility("default"))) char *SDL_GetGamepadMapping(SDL_Gamepad *gamepad);

extern __attribute__((visibility("default"))) _Bool SDL_SetGamepadMapping(SDL_JoystickID instance_id, const char *mapping);

extern __attribute__((visibility("default"))) _Bool SDL_HasGamepad(void);

extern __attribute__((visibility("default"))) SDL_JoystickID *SDL_GetGamepads(int *count);

extern __attribute__((visibility("default"))) _Bool SDL_IsGamepad(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) const char *SDL_GetGamepadNameForID(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) const char *SDL_GetGamepadPathForID(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) int SDL_GetGamepadPlayerIndexForID(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) SDL_GUID SDL_GetGamepadGUIDForID(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) Uint16 SDL_GetGamepadVendorForID(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) Uint16 SDL_GetGamepadProductForID(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) Uint16 SDL_GetGamepadProductVersionForID(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) SDL_GamepadType SDL_GetGamepadTypeForID(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) SDL_GamepadType SDL_GetRealGamepadTypeForID(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) char *SDL_GetGamepadMappingForID(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) SDL_Gamepad *SDL_OpenGamepad(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) SDL_Gamepad *SDL_GetGamepadFromID(SDL_JoystickID instance_id);

extern __attribute__((visibility("default"))) SDL_Gamepad *SDL_GetGamepadFromPlayerIndex(int player_index);

extern __attribute__((visibility("default"))) SDL_PropertiesID SDL_GetGamepadProperties(SDL_Gamepad *gamepad);

extern __attribute__((visibility("default"))) SDL_JoystickID SDL_GetGamepadID(SDL_Gamepad *gamepad);

extern __attribute__((visibility("default"))) const char *SDL_GetGamepadName(SDL_Gamepad *gamepad);

extern __attribute__((visibility("default"))) const char *SDL_GetGamepadPath(SDL_Gamepad *gamepad);

extern __attribute__((visibility("default"))) SDL_GamepadType SDL_GetGamepadType(SDL_Gamepad *gamepad);

extern __attribute__((visibility("default"))) SDL_GamepadType SDL_GetRealGamepadType(SDL_Gamepad *gamepad);

extern __attribute__((visibility("default"))) int SDL_GetGamepadPlayerIndex(SDL_Gamepad *gamepad);

extern __attribute__((visibility("default"))) _Bool SDL_SetGamepadPlayerIndex(SDL_Gamepad *gamepad, int player_index);

extern __attribute__((visibility("default"))) Uint16 SDL_GetGamepadVendor(SDL_Gamepad *gamepad);

extern __attribute__((visibility("default"))) Uint16 SDL_GetGamepadProduct(SDL_Gamepad *gamepad);

extern __attribute__((visibility("default"))) Uint16 SDL_GetGamepadProductVersion(SDL_Gamepad *gamepad);

extern __attribute__((visibility("default"))) Uint16 SDL_GetGamepadFirmwareVersion(SDL_Gamepad *gamepad);

extern __attribute__((visibility("default"))) const char *SDL_GetGamepadSerial(SDL_Gamepad *gamepad);

extern __attribute__((visibility("default"))) Uint64 SDL_GetGamepadSteamHandle(SDL_Gamepad *gamepad);

extern __attribute__((visibility("default"))) SDL_JoystickConnectionState SDL_GetGamepadConnectionState(SDL_Gamepad *gamepad);

extern __attribute__((visibility("default"))) SDL_PowerState SDL_GetGamepadPowerInfo(SDL_Gamepad *gamepad, int *percent);

extern __attribute__((visibility("default"))) _Bool SDL_GamepadConnected(SDL_Gamepad *gamepad);

extern __attribute__((visibility("default"))) SDL_Joystick *SDL_GetGamepadJoystick(SDL_Gamepad *gamepad);

extern __attribute__((visibility("default"))) void SDL_SetGamepadEventsEnabled(_Bool enabled);

extern __attribute__((visibility("default"))) _Bool SDL_GamepadEventsEnabled(void);

extern __attribute__((visibility("default"))) SDL_GamepadBinding **SDL_GetGamepadBindings(SDL_Gamepad *gamepad, int *count);

extern __attribute__((visibility("default"))) void SDL_UpdateGamepads(void);

extern __attribute__((visibility("default"))) SDL_GamepadType SDL_GetGamepadTypeFromString(const char *str);

extern __attribute__((visibility("default"))) const char *SDL_GetGamepadStringForType(SDL_GamepadType type);

extern __attribute__((visibility("default"))) SDL_GamepadAxis SDL_GetGamepadAxisFromString(const char *str);

extern __attribute__((visibility("default"))) const char *SDL_GetGamepadStringForAxis(SDL_GamepadAxis axis);

extern __attribute__((visibility("default"))) _Bool SDL_GamepadHasAxis(SDL_Gamepad *gamepad, SDL_GamepadAxis axis);

extern __attribute__((visibility("default"))) Sint16 SDL_GetGamepadAxis(SDL_Gamepad *gamepad, SDL_GamepadAxis axis);

extern __attribute__((visibility("default"))) SDL_GamepadButton SDL_GetGamepadButtonFromString(const char *str);

extern __attribute__((visibility("default"))) const char *SDL_GetGamepadStringForButton(SDL_GamepadButton button);

extern __attribute__((visibility("default"))) _Bool SDL_GamepadHasButton(SDL_Gamepad *gamepad, SDL_GamepadButton button);

extern __attribute__((visibility("default"))) _Bool SDL_GetGamepadButton(SDL_Gamepad *gamepad, SDL_GamepadButton button);

extern __attribute__((visibility("default"))) SDL_GamepadButtonLabel SDL_GetGamepadButtonLabelForType(SDL_GamepadType type, SDL_GamepadButton button);

extern __attribute__((visibility("default"))) SDL_GamepadButtonLabel SDL_GetGamepadButtonLabel(SDL_Gamepad *gamepad, SDL_GamepadButton button);

extern __attribute__((visibility("default"))) int SDL_GetNumGamepadTouchpads(SDL_Gamepad *gamepad);

extern __attribute__((visibility("default"))) int SDL_GetNumGamepadTouchpadFingers(SDL_Gamepad *gamepad, int touchpad);

extern __attribute__((visibility("default"))) _Bool SDL_GetGamepadTouchpadFinger(SDL_Gamepad *gamepad, int touchpad, int finger, _Bool *down, float *x, float *y, float *pressure);

extern __attribute__((visibility("default"))) _Bool SDL_GamepadHasSensor(SDL_Gamepad *gamepad, SDL_SensorType type);

extern __attribute__((visibility("default"))) _Bool SDL_SetGamepadSensorEnabled(SDL_Gamepad *gamepad, SDL_SensorType type, _Bool enabled);

extern __attribute__((visibility("default"))) _Bool SDL_GamepadSensorEnabled(SDL_Gamepad *gamepad, SDL_SensorType type);

extern __attribute__((visibility("default"))) float SDL_GetGamepadSensorDataRate(SDL_Gamepad *gamepad, SDL_SensorType type);

extern __attribute__((visibility("default"))) _Bool SDL_GetGamepadSensorData(SDL_Gamepad *gamepad, SDL_SensorType type, float *data, int num_values);

extern __attribute__((visibility("default"))) _Bool SDL_RumbleGamepad(SDL_Gamepad *gamepad, Uint16 low_frequency_rumble, Uint16 high_frequency_rumble, Uint32 duration_ms);

extern __attribute__((visibility("default"))) _Bool SDL_RumbleGamepadTriggers(SDL_Gamepad *gamepad, Uint16 left_rumble, Uint16 right_rumble, Uint32 duration_ms);

extern __attribute__((visibility("default"))) _Bool SDL_SetGamepadLED(SDL_Gamepad *gamepad, Uint8 red, Uint8 green, Uint8 blue);

extern __attribute__((visibility("default"))) _Bool SDL_SendGamepadEffect(SDL_Gamepad *gamepad, const void *data, int size);

extern __attribute__((visibility("default"))) void SDL_CloseGamepad(SDL_Gamepad *gamepad);

extern __attribute__((visibility("default"))) const char *SDL_GetGamepadAppleSFSymbolsNameForButton(SDL_Gamepad *gamepad, SDL_GamepadButton button);

extern __attribute__((visibility("default"))) const char *SDL_GetGamepadAppleSFSymbolsNameForAxis(SDL_Gamepad *gamepad, SDL_GamepadAxis axis);

typedef enum SDL_Scancode
{
    SDL_SCANCODE_UNKNOWN = 0,

    SDL_SCANCODE_A = 4,
    SDL_SCANCODE_B = 5,
    SDL_SCANCODE_C = 6,
    SDL_SCANCODE_D = 7,
    SDL_SCANCODE_E = 8,
    SDL_SCANCODE_F = 9,
    SDL_SCANCODE_G = 10,
    SDL_SCANCODE_H = 11,
    SDL_SCANCODE_I = 12,
    SDL_SCANCODE_J = 13,
    SDL_SCANCODE_K = 14,
    SDL_SCANCODE_L = 15,
    SDL_SCANCODE_M = 16,
    SDL_SCANCODE_N = 17,
    SDL_SCANCODE_O = 18,
    SDL_SCANCODE_P = 19,
    SDL_SCANCODE_Q = 20,
    SDL_SCANCODE_R = 21,
    SDL_SCANCODE_S = 22,
    SDL_SCANCODE_T = 23,
    SDL_SCANCODE_U = 24,
    SDL_SCANCODE_V = 25,
    SDL_SCANCODE_W = 26,
    SDL_SCANCODE_X = 27,
    SDL_SCANCODE_Y = 28,
    SDL_SCANCODE_Z = 29,

    SDL_SCANCODE_1 = 30,
    SDL_SCANCODE_2 = 31,
    SDL_SCANCODE_3 = 32,
    SDL_SCANCODE_4 = 33,
    SDL_SCANCODE_5 = 34,
    SDL_SCANCODE_6 = 35,
    SDL_SCANCODE_7 = 36,
    SDL_SCANCODE_8 = 37,
    SDL_SCANCODE_9 = 38,
    SDL_SCANCODE_0 = 39,

    SDL_SCANCODE_RETURN = 40,
    SDL_SCANCODE_ESCAPE = 41,
    SDL_SCANCODE_BACKSPACE = 42,
    SDL_SCANCODE_TAB = 43,
    SDL_SCANCODE_SPACE = 44,

    SDL_SCANCODE_MINUS = 45,
    SDL_SCANCODE_EQUALS = 46,
    SDL_SCANCODE_LEFTBRACKET = 47,
    SDL_SCANCODE_RIGHTBRACKET = 48,
    SDL_SCANCODE_BACKSLASH = 49,

    SDL_SCANCODE_NONUSHASH = 50,

    SDL_SCANCODE_SEMICOLON = 51,
    SDL_SCANCODE_APOSTROPHE = 52,
    SDL_SCANCODE_GRAVE = 53,

    SDL_SCANCODE_COMMA = 54,
    SDL_SCANCODE_PERIOD = 55,
    SDL_SCANCODE_SLASH = 56,

    SDL_SCANCODE_CAPSLOCK = 57,

    SDL_SCANCODE_F1 = 58,
    SDL_SCANCODE_F2 = 59,
    SDL_SCANCODE_F3 = 60,
    SDL_SCANCODE_F4 = 61,
    SDL_SCANCODE_F5 = 62,
    SDL_SCANCODE_F6 = 63,
    SDL_SCANCODE_F7 = 64,
    SDL_SCANCODE_F8 = 65,
    SDL_SCANCODE_F9 = 66,
    SDL_SCANCODE_F10 = 67,
    SDL_SCANCODE_F11 = 68,
    SDL_SCANCODE_F12 = 69,

    SDL_SCANCODE_PRINTSCREEN = 70,
    SDL_SCANCODE_SCROLLLOCK = 71,
    SDL_SCANCODE_PAUSE = 72,
    SDL_SCANCODE_INSERT = 73,

    SDL_SCANCODE_HOME = 74,
    SDL_SCANCODE_PAGEUP = 75,
    SDL_SCANCODE_DELETE = 76,
    SDL_SCANCODE_END = 77,
    SDL_SCANCODE_PAGEDOWN = 78,
    SDL_SCANCODE_RIGHT = 79,
    SDL_SCANCODE_LEFT = 80,
    SDL_SCANCODE_DOWN = 81,
    SDL_SCANCODE_UP = 82,

    SDL_SCANCODE_NUMLOCKCLEAR = 83,

    SDL_SCANCODE_KP_DIVIDE = 84,
    SDL_SCANCODE_KP_MULTIPLY = 85,
    SDL_SCANCODE_KP_MINUS = 86,
    SDL_SCANCODE_KP_PLUS = 87,
    SDL_SCANCODE_KP_ENTER = 88,
    SDL_SCANCODE_KP_1 = 89,
    SDL_SCANCODE_KP_2 = 90,
    SDL_SCANCODE_KP_3 = 91,
    SDL_SCANCODE_KP_4 = 92,
    SDL_SCANCODE_KP_5 = 93,
    SDL_SCANCODE_KP_6 = 94,
    SDL_SCANCODE_KP_7 = 95,
    SDL_SCANCODE_KP_8 = 96,
    SDL_SCANCODE_KP_9 = 97,
    SDL_SCANCODE_KP_0 = 98,
    SDL_SCANCODE_KP_PERIOD = 99,

    SDL_SCANCODE_NONUSBACKSLASH = 100,

    SDL_SCANCODE_APPLICATION = 101,
    SDL_SCANCODE_POWER = 102,

    SDL_SCANCODE_KP_EQUALS = 103,
    SDL_SCANCODE_F13 = 104,
    SDL_SCANCODE_F14 = 105,
    SDL_SCANCODE_F15 = 106,
    SDL_SCANCODE_F16 = 107,
    SDL_SCANCODE_F17 = 108,
    SDL_SCANCODE_F18 = 109,
    SDL_SCANCODE_F19 = 110,
    SDL_SCANCODE_F20 = 111,
    SDL_SCANCODE_F21 = 112,
    SDL_SCANCODE_F22 = 113,
    SDL_SCANCODE_F23 = 114,
    SDL_SCANCODE_F24 = 115,
    SDL_SCANCODE_EXECUTE = 116,
    SDL_SCANCODE_HELP = 117,
    SDL_SCANCODE_MENU = 118,
    SDL_SCANCODE_SELECT = 119,
    SDL_SCANCODE_STOP = 120,
    SDL_SCANCODE_AGAIN = 121,
    SDL_SCANCODE_UNDO = 122,
    SDL_SCANCODE_CUT = 123,
    SDL_SCANCODE_COPY = 124,
    SDL_SCANCODE_PASTE = 125,
    SDL_SCANCODE_FIND = 126,
    SDL_SCANCODE_MUTE = 127,
    SDL_SCANCODE_VOLUMEUP = 128,
    SDL_SCANCODE_VOLUMEDOWN = 129,

    SDL_SCANCODE_KP_COMMA = 133,
    SDL_SCANCODE_KP_EQUALSAS400 = 134,

    SDL_SCANCODE_INTERNATIONAL1 = 135,

    SDL_SCANCODE_INTERNATIONAL2 = 136,
    SDL_SCANCODE_INTERNATIONAL3 = 137,
    SDL_SCANCODE_INTERNATIONAL4 = 138,
    SDL_SCANCODE_INTERNATIONAL5 = 139,
    SDL_SCANCODE_INTERNATIONAL6 = 140,
    SDL_SCANCODE_INTERNATIONAL7 = 141,
    SDL_SCANCODE_INTERNATIONAL8 = 142,
    SDL_SCANCODE_INTERNATIONAL9 = 143,
    SDL_SCANCODE_LANG1 = 144,
    SDL_SCANCODE_LANG2 = 145,
    SDL_SCANCODE_LANG3 = 146,
    SDL_SCANCODE_LANG4 = 147,
    SDL_SCANCODE_LANG5 = 148,
    SDL_SCANCODE_LANG6 = 149,
    SDL_SCANCODE_LANG7 = 150,
    SDL_SCANCODE_LANG8 = 151,
    SDL_SCANCODE_LANG9 = 152,

    SDL_SCANCODE_ALTERASE = 153,
    SDL_SCANCODE_SYSREQ = 154,
    SDL_SCANCODE_CANCEL = 155,
    SDL_SCANCODE_CLEAR = 156,
    SDL_SCANCODE_PRIOR = 157,
    SDL_SCANCODE_RETURN2 = 158,
    SDL_SCANCODE_SEPARATOR = 159,
    SDL_SCANCODE_OUT = 160,
    SDL_SCANCODE_OPER = 161,
    SDL_SCANCODE_CLEARAGAIN = 162,
    SDL_SCANCODE_CRSEL = 163,
    SDL_SCANCODE_EXSEL = 164,

    SDL_SCANCODE_KP_00 = 176,
    SDL_SCANCODE_KP_000 = 177,
    SDL_SCANCODE_THOUSANDSSEPARATOR = 178,
    SDL_SCANCODE_DECIMALSEPARATOR = 179,
    SDL_SCANCODE_CURRENCYUNIT = 180,
    SDL_SCANCODE_CURRENCYSUBUNIT = 181,
    SDL_SCANCODE_KP_LEFTPAREN = 182,
    SDL_SCANCODE_KP_RIGHTPAREN = 183,
    SDL_SCANCODE_KP_LEFTBRACE = 184,
    SDL_SCANCODE_KP_RIGHTBRACE = 185,
    SDL_SCANCODE_KP_TAB = 186,
    SDL_SCANCODE_KP_BACKSPACE = 187,
    SDL_SCANCODE_KP_A = 188,
    SDL_SCANCODE_KP_B = 189,
    SDL_SCANCODE_KP_C = 190,
    SDL_SCANCODE_KP_D = 191,
    SDL_SCANCODE_KP_E = 192,
    SDL_SCANCODE_KP_F = 193,
    SDL_SCANCODE_KP_XOR = 194,
    SDL_SCANCODE_KP_POWER = 195,
    SDL_SCANCODE_KP_PERCENT = 196,
    SDL_SCANCODE_KP_LESS = 197,
    SDL_SCANCODE_KP_GREATER = 198,
    SDL_SCANCODE_KP_AMPERSAND = 199,
    SDL_SCANCODE_KP_DBLAMPERSAND = 200,
    SDL_SCANCODE_KP_VERTICALBAR = 201,
    SDL_SCANCODE_KP_DBLVERTICALBAR = 202,
    SDL_SCANCODE_KP_COLON = 203,
    SDL_SCANCODE_KP_HASH = 204,
    SDL_SCANCODE_KP_SPACE = 205,
    SDL_SCANCODE_KP_AT = 206,
    SDL_SCANCODE_KP_EXCLAM = 207,
    SDL_SCANCODE_KP_MEMSTORE = 208,
    SDL_SCANCODE_KP_MEMRECALL = 209,
    SDL_SCANCODE_KP_MEMCLEAR = 210,
    SDL_SCANCODE_KP_MEMADD = 211,
    SDL_SCANCODE_KP_MEMSUBTRACT = 212,
    SDL_SCANCODE_KP_MEMMULTIPLY = 213,
    SDL_SCANCODE_KP_MEMDIVIDE = 214,
    SDL_SCANCODE_KP_PLUSMINUS = 215,
    SDL_SCANCODE_KP_CLEAR = 216,
    SDL_SCANCODE_KP_CLEARENTRY = 217,
    SDL_SCANCODE_KP_BINARY = 218,
    SDL_SCANCODE_KP_OCTAL = 219,
    SDL_SCANCODE_KP_DECIMAL = 220,
    SDL_SCANCODE_KP_HEXADECIMAL = 221,

    SDL_SCANCODE_LCTRL = 224,
    SDL_SCANCODE_LSHIFT = 225,
    SDL_SCANCODE_LALT = 226,
    SDL_SCANCODE_LGUI = 227,
    SDL_SCANCODE_RCTRL = 228,
    SDL_SCANCODE_RSHIFT = 229,
    SDL_SCANCODE_RALT = 230,
    SDL_SCANCODE_RGUI = 231,

    SDL_SCANCODE_MODE = 257,

    SDL_SCANCODE_SLEEP = 258,
    SDL_SCANCODE_WAKE = 259,

    SDL_SCANCODE_CHANNEL_INCREMENT = 260,
    SDL_SCANCODE_CHANNEL_DECREMENT = 261,

    SDL_SCANCODE_MEDIA_PLAY = 262,
    SDL_SCANCODE_MEDIA_PAUSE = 263,
    SDL_SCANCODE_MEDIA_RECORD = 264,
    SDL_SCANCODE_MEDIA_FAST_FORWARD = 265,
    SDL_SCANCODE_MEDIA_REWIND = 266,
    SDL_SCANCODE_MEDIA_NEXT_TRACK = 267,
    SDL_SCANCODE_MEDIA_PREVIOUS_TRACK = 268,
    SDL_SCANCODE_MEDIA_STOP = 269,
    SDL_SCANCODE_MEDIA_EJECT = 270,
    SDL_SCANCODE_MEDIA_PLAY_PAUSE = 271,
    SDL_SCANCODE_MEDIA_SELECT = 272,

    SDL_SCANCODE_AC_NEW = 273,
    SDL_SCANCODE_AC_OPEN = 274,
    SDL_SCANCODE_AC_CLOSE = 275,
    SDL_SCANCODE_AC_EXIT = 276,
    SDL_SCANCODE_AC_SAVE = 277,
    SDL_SCANCODE_AC_PRINT = 278,
    SDL_SCANCODE_AC_PROPERTIES = 279,

    SDL_SCANCODE_AC_SEARCH = 280,
    SDL_SCANCODE_AC_HOME = 281,
    SDL_SCANCODE_AC_BACK = 282,
    SDL_SCANCODE_AC_FORWARD = 283,
    SDL_SCANCODE_AC_STOP = 284,
    SDL_SCANCODE_AC_REFRESH = 285,
    SDL_SCANCODE_AC_BOOKMARKS = 286,

    SDL_SCANCODE_SOFTLEFT = 287,

    SDL_SCANCODE_SOFTRIGHT = 288,

    SDL_SCANCODE_CALL = 289,
    SDL_SCANCODE_ENDCALL = 290,

    SDL_SCANCODE_RESERVED = 400,

    SDL_SCANCODE_COUNT = 512

} SDL_Scancode;

typedef Uint32 SDL_Keycode;

typedef Uint16 SDL_Keymod;

typedef Uint32 SDL_KeyboardID;

extern __attribute__((visibility("default"))) _Bool SDL_HasKeyboard(void);

extern __attribute__((visibility("default"))) SDL_KeyboardID *SDL_GetKeyboards(int *count);

extern __attribute__((visibility("default"))) const char *SDL_GetKeyboardNameForID(SDL_KeyboardID instance_id);

extern __attribute__((visibility("default"))) SDL_Window *SDL_GetKeyboardFocus(void);

extern __attribute__((visibility("default"))) const _Bool *SDL_GetKeyboardState(int *numkeys);

extern __attribute__((visibility("default"))) void SDL_ResetKeyboard(void);

extern __attribute__((visibility("default"))) SDL_Keymod SDL_GetModState(void);

extern __attribute__((visibility("default"))) void SDL_SetModState(SDL_Keymod modstate);

extern __attribute__((visibility("default"))) SDL_Keycode SDL_GetKeyFromScancode(SDL_Scancode scancode, SDL_Keymod modstate, _Bool key_event);

extern __attribute__((visibility("default"))) SDL_Scancode SDL_GetScancodeFromKey(SDL_Keycode key, SDL_Keymod *modstate);

extern __attribute__((visibility("default"))) _Bool SDL_SetScancodeName(SDL_Scancode scancode, const char *name);

extern __attribute__((visibility("default"))) const char *SDL_GetScancodeName(SDL_Scancode scancode);

extern __attribute__((visibility("default"))) SDL_Scancode SDL_GetScancodeFromName(const char *name);

extern __attribute__((visibility("default"))) const char *SDL_GetKeyName(SDL_Keycode key);

extern __attribute__((visibility("default"))) SDL_Keycode SDL_GetKeyFromName(const char *name);

extern __attribute__((visibility("default"))) _Bool SDL_StartTextInput(SDL_Window *window);

typedef enum SDL_TextInputType
{
    SDL_TEXTINPUT_TYPE_TEXT,
    SDL_TEXTINPUT_TYPE_TEXT_NAME,
    SDL_TEXTINPUT_TYPE_TEXT_EMAIL,
    SDL_TEXTINPUT_TYPE_TEXT_USERNAME,
    SDL_TEXTINPUT_TYPE_TEXT_PASSWORD_HIDDEN,
    SDL_TEXTINPUT_TYPE_TEXT_PASSWORD_VISIBLE,
    SDL_TEXTINPUT_TYPE_NUMBER,
    SDL_TEXTINPUT_TYPE_NUMBER_PASSWORD_HIDDEN,
    SDL_TEXTINPUT_TYPE_NUMBER_PASSWORD_VISIBLE
} SDL_TextInputType;

typedef enum SDL_Capitalization
{
    SDL_CAPITALIZE_NONE,
    SDL_CAPITALIZE_SENTENCES,
    SDL_CAPITALIZE_WORDS,
    SDL_CAPITALIZE_LETTERS
} SDL_Capitalization;

extern __attribute__((visibility("default"))) _Bool SDL_StartTextInputWithProperties(SDL_Window *window, SDL_PropertiesID props);

extern __attribute__((visibility("default"))) _Bool SDL_TextInputActive(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_StopTextInput(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_ClearComposition(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_SetTextInputArea(SDL_Window *window, const SDL_Rect *rect, int cursor);

extern __attribute__((visibility("default"))) _Bool SDL_GetTextInputArea(SDL_Window *window, SDL_Rect *rect, int *cursor);

extern __attribute__((visibility("default"))) _Bool SDL_HasScreenKeyboardSupport(void);

extern __attribute__((visibility("default"))) _Bool SDL_ScreenKeyboardShown(SDL_Window *window);

typedef Uint32 SDL_MouseID;

typedef struct SDL_Cursor SDL_Cursor;

typedef enum SDL_SystemCursor
{
    SDL_SYSTEM_CURSOR_DEFAULT,
    SDL_SYSTEM_CURSOR_TEXT,
    SDL_SYSTEM_CURSOR_WAIT,
    SDL_SYSTEM_CURSOR_CROSSHAIR,
    SDL_SYSTEM_CURSOR_PROGRESS,
    SDL_SYSTEM_CURSOR_NWSE_RESIZE,
    SDL_SYSTEM_CURSOR_NESW_RESIZE,
    SDL_SYSTEM_CURSOR_EW_RESIZE,
    SDL_SYSTEM_CURSOR_NS_RESIZE,
    SDL_SYSTEM_CURSOR_MOVE,
    SDL_SYSTEM_CURSOR_NOT_ALLOWED,
    SDL_SYSTEM_CURSOR_POINTER,
    SDL_SYSTEM_CURSOR_NW_RESIZE,
    SDL_SYSTEM_CURSOR_N_RESIZE,
    SDL_SYSTEM_CURSOR_NE_RESIZE,
    SDL_SYSTEM_CURSOR_E_RESIZE,
    SDL_SYSTEM_CURSOR_SE_RESIZE,
    SDL_SYSTEM_CURSOR_S_RESIZE,
    SDL_SYSTEM_CURSOR_SW_RESIZE,
    SDL_SYSTEM_CURSOR_W_RESIZE,
    SDL_SYSTEM_CURSOR_COUNT
} SDL_SystemCursor;

typedef enum SDL_MouseWheelDirection
{
    SDL_MOUSEWHEEL_NORMAL,
    SDL_MOUSEWHEEL_FLIPPED
} SDL_MouseWheelDirection;

typedef Uint32 SDL_MouseButtonFlags;

extern __attribute__((visibility("default"))) _Bool SDL_HasMouse(void);

extern __attribute__((visibility("default"))) SDL_MouseID *SDL_GetMice(int *count);

extern __attribute__((visibility("default"))) const char *SDL_GetMouseNameForID(SDL_MouseID instance_id);

extern __attribute__((visibility("default"))) SDL_Window *SDL_GetMouseFocus(void);

extern __attribute__((visibility("default"))) SDL_MouseButtonFlags SDL_GetMouseState(float *x, float *y);

extern __attribute__((visibility("default"))) SDL_MouseButtonFlags SDL_GetGlobalMouseState(float *x, float *y);

extern __attribute__((visibility("default"))) SDL_MouseButtonFlags SDL_GetRelativeMouseState(float *x, float *y);

extern __attribute__((visibility("default"))) void SDL_WarpMouseInWindow(SDL_Window *window,
                                                                         float x, float y);

extern __attribute__((visibility("default"))) _Bool SDL_WarpMouseGlobal(float x, float y);

extern __attribute__((visibility("default"))) _Bool SDL_SetWindowRelativeMouseMode(SDL_Window *window, _Bool enabled);

extern __attribute__((visibility("default"))) _Bool SDL_GetWindowRelativeMouseMode(SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_CaptureMouse(_Bool enabled);

extern __attribute__((visibility("default"))) SDL_Cursor *SDL_CreateCursor(const Uint8 *data,
                                                                           const Uint8 *mask,
                                                                           int w, int h, int hot_x,
                                                                           int hot_y);

extern __attribute__((visibility("default"))) SDL_Cursor *SDL_CreateColorCursor(SDL_Surface *surface,
                                                                                int hot_x,
                                                                                int hot_y);

extern __attribute__((visibility("default"))) SDL_Cursor *SDL_CreateSystemCursor(SDL_SystemCursor id);

extern __attribute__((visibility("default"))) _Bool SDL_SetCursor(SDL_Cursor *cursor);

extern __attribute__((visibility("default"))) SDL_Cursor *SDL_GetCursor(void);

extern __attribute__((visibility("default"))) SDL_Cursor *SDL_GetDefaultCursor(void);

extern __attribute__((visibility("default"))) void SDL_DestroyCursor(SDL_Cursor *cursor);

extern __attribute__((visibility("default"))) _Bool SDL_ShowCursor(void);

extern __attribute__((visibility("default"))) _Bool SDL_HideCursor(void);

extern __attribute__((visibility("default"))) _Bool SDL_CursorVisible(void);

typedef Uint64 SDL_TouchID;

typedef Uint64 SDL_FingerID;

typedef enum SDL_TouchDeviceType
{
    SDL_TOUCH_DEVICE_INVALID = -1,
    SDL_TOUCH_DEVICE_DIRECT,
    SDL_TOUCH_DEVICE_INDIRECT_ABSOLUTE,
    SDL_TOUCH_DEVICE_INDIRECT_RELATIVE
} SDL_TouchDeviceType;

typedef struct SDL_Finger
{
    SDL_FingerID id;
    float x;
    float y;
    float pressure;
} SDL_Finger;

extern __attribute__((visibility("default"))) SDL_TouchID *SDL_GetTouchDevices(int *count);

extern __attribute__((visibility("default"))) const char *SDL_GetTouchDeviceName(SDL_TouchID touchID);

extern __attribute__((visibility("default"))) SDL_TouchDeviceType SDL_GetTouchDeviceType(SDL_TouchID touchID);

extern __attribute__((visibility("default"))) SDL_Finger **SDL_GetTouchFingers(SDL_TouchID touchID, int *count);

typedef Uint32 SDL_PenID;

typedef Uint32 SDL_PenInputFlags;

typedef enum SDL_PenAxis
{
    SDL_PEN_AXIS_PRESSURE,
    SDL_PEN_AXIS_XTILT,
    SDL_PEN_AXIS_YTILT,
    SDL_PEN_AXIS_DISTANCE,
    SDL_PEN_AXIS_ROTATION,
    SDL_PEN_AXIS_SLIDER,
    SDL_PEN_AXIS_TANGENTIAL_PRESSURE,
    SDL_PEN_AXIS_COUNT
} SDL_PenAxis;

typedef enum SDL_EventType
{
    SDL_EVENT_FIRST = 0,

    SDL_EVENT_QUIT = 0x100,

    SDL_EVENT_TERMINATING,

    SDL_EVENT_LOW_MEMORY,

    SDL_EVENT_WILL_ENTER_BACKGROUND,

    SDL_EVENT_DID_ENTER_BACKGROUND,

    SDL_EVENT_WILL_ENTER_FOREGROUND,

    SDL_EVENT_DID_ENTER_FOREGROUND,

    SDL_EVENT_LOCALE_CHANGED,

    SDL_EVENT_SYSTEM_THEME_CHANGED,

    SDL_EVENT_DISPLAY_ORIENTATION = 0x151,
    SDL_EVENT_DISPLAY_ADDED,
    SDL_EVENT_DISPLAY_REMOVED,
    SDL_EVENT_DISPLAY_MOVED,
    SDL_EVENT_DISPLAY_DESKTOP_MODE_CHANGED,
    SDL_EVENT_DISPLAY_CURRENT_MODE_CHANGED,
    SDL_EVENT_DISPLAY_CONTENT_SCALE_CHANGED,
    SDL_EVENT_DISPLAY_FIRST = SDL_EVENT_DISPLAY_ORIENTATION,
    SDL_EVENT_DISPLAY_LAST = SDL_EVENT_DISPLAY_CONTENT_SCALE_CHANGED,

    SDL_EVENT_WINDOW_SHOWN = 0x202,
    SDL_EVENT_WINDOW_HIDDEN,
    SDL_EVENT_WINDOW_EXPOSED,
    SDL_EVENT_WINDOW_MOVED,
    SDL_EVENT_WINDOW_RESIZED,
    SDL_EVENT_WINDOW_PIXEL_SIZE_CHANGED,
    SDL_EVENT_WINDOW_METAL_VIEW_RESIZED,
    SDL_EVENT_WINDOW_MINIMIZED,
    SDL_EVENT_WINDOW_MAXIMIZED,
    SDL_EVENT_WINDOW_RESTORED,
    SDL_EVENT_WINDOW_MOUSE_ENTER,
    SDL_EVENT_WINDOW_MOUSE_LEAVE,
    SDL_EVENT_WINDOW_FOCUS_GAINED,
    SDL_EVENT_WINDOW_FOCUS_LOST,
    SDL_EVENT_WINDOW_CLOSE_REQUESTED,
    SDL_EVENT_WINDOW_HIT_TEST,
    SDL_EVENT_WINDOW_ICCPROF_CHANGED,
    SDL_EVENT_WINDOW_DISPLAY_CHANGED,
    SDL_EVENT_WINDOW_DISPLAY_SCALE_CHANGED,
    SDL_EVENT_WINDOW_SAFE_AREA_CHANGED,
    SDL_EVENT_WINDOW_OCCLUDED,
    SDL_EVENT_WINDOW_ENTER_FULLSCREEN,
    SDL_EVENT_WINDOW_LEAVE_FULLSCREEN,
    SDL_EVENT_WINDOW_DESTROYED,

    SDL_EVENT_WINDOW_HDR_STATE_CHANGED,
    SDL_EVENT_WINDOW_FIRST = SDL_EVENT_WINDOW_SHOWN,
    SDL_EVENT_WINDOW_LAST = SDL_EVENT_WINDOW_HDR_STATE_CHANGED,

    SDL_EVENT_KEY_DOWN = 0x300,
    SDL_EVENT_KEY_UP,
    SDL_EVENT_TEXT_EDITING,
    SDL_EVENT_TEXT_INPUT,
    SDL_EVENT_KEYMAP_CHANGED,

    SDL_EVENT_KEYBOARD_ADDED,
    SDL_EVENT_KEYBOARD_REMOVED,
    SDL_EVENT_TEXT_EDITING_CANDIDATES,

    SDL_EVENT_MOUSE_MOTION = 0x400,
    SDL_EVENT_MOUSE_BUTTON_DOWN,
    SDL_EVENT_MOUSE_BUTTON_UP,
    SDL_EVENT_MOUSE_WHEEL,
    SDL_EVENT_MOUSE_ADDED,
    SDL_EVENT_MOUSE_REMOVED,

    SDL_EVENT_JOYSTICK_AXIS_MOTION = 0x600,
    SDL_EVENT_JOYSTICK_BALL_MOTION,
    SDL_EVENT_JOYSTICK_HAT_MOTION,
    SDL_EVENT_JOYSTICK_BUTTON_DOWN,
    SDL_EVENT_JOYSTICK_BUTTON_UP,
    SDL_EVENT_JOYSTICK_ADDED,
    SDL_EVENT_JOYSTICK_REMOVED,
    SDL_EVENT_JOYSTICK_BATTERY_UPDATED,
    SDL_EVENT_JOYSTICK_UPDATE_COMPLETE,

    SDL_EVENT_GAMEPAD_AXIS_MOTION = 0x650,
    SDL_EVENT_GAMEPAD_BUTTON_DOWN,
    SDL_EVENT_GAMEPAD_BUTTON_UP,
    SDL_EVENT_GAMEPAD_ADDED,
    SDL_EVENT_GAMEPAD_REMOVED,
    SDL_EVENT_GAMEPAD_REMAPPED,
    SDL_EVENT_GAMEPAD_TOUCHPAD_DOWN,
    SDL_EVENT_GAMEPAD_TOUCHPAD_MOTION,
    SDL_EVENT_GAMEPAD_TOUCHPAD_UP,
    SDL_EVENT_GAMEPAD_SENSOR_UPDATE,
    SDL_EVENT_GAMEPAD_UPDATE_COMPLETE,
    SDL_EVENT_GAMEPAD_STEAM_HANDLE_UPDATED,

    SDL_EVENT_FINGER_DOWN = 0x700,
    SDL_EVENT_FINGER_UP,
    SDL_EVENT_FINGER_MOTION,
    SDL_EVENT_FINGER_CANCELED,

    SDL_EVENT_CLIPBOARD_UPDATE = 0x900,

    SDL_EVENT_DROP_FILE = 0x1000,
    SDL_EVENT_DROP_TEXT,
    SDL_EVENT_DROP_BEGIN,
    SDL_EVENT_DROP_COMPLETE,
    SDL_EVENT_DROP_POSITION,

    SDL_EVENT_AUDIO_DEVICE_ADDED = 0x1100,
    SDL_EVENT_AUDIO_DEVICE_REMOVED,
    SDL_EVENT_AUDIO_DEVICE_FORMAT_CHANGED,

    SDL_EVENT_SENSOR_UPDATE = 0x1200,

    SDL_EVENT_PEN_PROXIMITY_IN = 0x1300,
    SDL_EVENT_PEN_PROXIMITY_OUT,
    SDL_EVENT_PEN_DOWN,
    SDL_EVENT_PEN_UP,
    SDL_EVENT_PEN_BUTTON_DOWN,
    SDL_EVENT_PEN_BUTTON_UP,
    SDL_EVENT_PEN_MOTION,
    SDL_EVENT_PEN_AXIS,

    SDL_EVENT_CAMERA_DEVICE_ADDED = 0x1400,
    SDL_EVENT_CAMERA_DEVICE_REMOVED,
    SDL_EVENT_CAMERA_DEVICE_APPROVED,
    SDL_EVENT_CAMERA_DEVICE_DENIED,

    SDL_EVENT_RENDER_TARGETS_RESET = 0x2000,
    SDL_EVENT_RENDER_DEVICE_RESET,
    SDL_EVENT_RENDER_DEVICE_LOST,

    SDL_EVENT_PRIVATE0 = 0x4000,
    SDL_EVENT_PRIVATE1,
    SDL_EVENT_PRIVATE2,
    SDL_EVENT_PRIVATE3,

    SDL_EVENT_POLL_SENTINEL = 0x7F00,

    SDL_EVENT_USER = 0x8000,

    SDL_EVENT_LAST = 0xFFFF,

    SDL_EVENT_ENUM_PADDING = 0x7FFFFFFF

} SDL_EventType;

typedef struct SDL_CommonEvent
{
    Uint32 type;
    Uint32 reserved;
    Uint64 timestamp;
} SDL_CommonEvent;

typedef struct SDL_DisplayEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_DisplayID displayID;
    Sint32 data1;
    Sint32 data2;
} SDL_DisplayEvent;

typedef struct SDL_WindowEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_WindowID windowID;
    Sint32 data1;
    Sint32 data2;
} SDL_WindowEvent;

typedef struct SDL_KeyboardDeviceEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_KeyboardID which;
} SDL_KeyboardDeviceEvent;

typedef struct SDL_KeyboardEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_WindowID windowID;
    SDL_KeyboardID which;
    SDL_Scancode scancode;
    SDL_Keycode key;
    SDL_Keymod mod;
    Uint16 raw;
    _Bool down;
    _Bool repeat;
} SDL_KeyboardEvent;

typedef struct SDL_TextEditingEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_WindowID windowID;
    const char *text;
    Sint32 start;
    Sint32 length;
} SDL_TextEditingEvent;

typedef struct SDL_TextEditingCandidatesEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_WindowID windowID;
    const char *const *candidates;
    Sint32 num_candidates;
    Sint32 selected_candidate;
    _Bool horizontal;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
} SDL_TextEditingCandidatesEvent;

typedef struct SDL_TextInputEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_WindowID windowID;
    const char *text;
} SDL_TextInputEvent;

typedef struct SDL_MouseDeviceEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_MouseID which;
} SDL_MouseDeviceEvent;

typedef struct SDL_MouseMotionEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_WindowID windowID;
    SDL_MouseID which;
    SDL_MouseButtonFlags state;
    float x;
    float y;
    float xrel;
    float yrel;
} SDL_MouseMotionEvent;

typedef struct SDL_MouseButtonEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_WindowID windowID;
    SDL_MouseID which;
    Uint8 button;
    _Bool down;
    Uint8 clicks;
    Uint8 padding;
    float x;
    float y;
} SDL_MouseButtonEvent;

typedef struct SDL_MouseWheelEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_WindowID windowID;
    SDL_MouseID which;
    float x;
    float y;
    SDL_MouseWheelDirection direction;
    float mouse_x;
    float mouse_y;
} SDL_MouseWheelEvent;

typedef struct SDL_JoyAxisEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_JoystickID which;
    Uint8 axis;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
    Sint16 value;
    Uint16 padding4;
} SDL_JoyAxisEvent;

typedef struct SDL_JoyBallEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_JoystickID which;
    Uint8 ball;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
    Sint16 xrel;
    Sint16 yrel;
} SDL_JoyBallEvent;

typedef struct SDL_JoyHatEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_JoystickID which;
    Uint8 hat;
    Uint8 value;

    Uint8 padding1;
    Uint8 padding2;
} SDL_JoyHatEvent;

typedef struct SDL_JoyButtonEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_JoystickID which;
    Uint8 button;
    _Bool down;
    Uint8 padding1;
    Uint8 padding2;
} SDL_JoyButtonEvent;

typedef struct SDL_JoyDeviceEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_JoystickID which;
} SDL_JoyDeviceEvent;

typedef struct SDL_JoyBatteryEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_JoystickID which;
    SDL_PowerState state;
    int percent;
} SDL_JoyBatteryEvent;

typedef struct SDL_GamepadAxisEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_JoystickID which;
    Uint8 axis;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
    Sint16 value;
    Uint16 padding4;
} SDL_GamepadAxisEvent;

typedef struct SDL_GamepadButtonEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_JoystickID which;
    Uint8 button;
    _Bool down;
    Uint8 padding1;
    Uint8 padding2;
} SDL_GamepadButtonEvent;

typedef struct SDL_GamepadDeviceEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_JoystickID which;
} SDL_GamepadDeviceEvent;

typedef struct SDL_GamepadTouchpadEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_JoystickID which;
    Sint32 touchpad;
    Sint32 finger;
    float x;
    float y;
    float pressure;
} SDL_GamepadTouchpadEvent;

typedef struct SDL_GamepadSensorEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_JoystickID which;
    Sint32 sensor;
    float data[3];
    Uint64 sensor_timestamp;
} SDL_GamepadSensorEvent;

typedef struct SDL_AudioDeviceEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_AudioDeviceID which;
    _Bool recording;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
} SDL_AudioDeviceEvent;

typedef struct SDL_CameraDeviceEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_CameraID which;
} SDL_CameraDeviceEvent;

typedef struct SDL_RenderEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_WindowID windowID;
} SDL_RenderEvent;

typedef struct SDL_TouchFingerEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_TouchID touchID;
    SDL_FingerID fingerID;
    float x;
    float y;
    float dx;
    float dy;
    float pressure;
    SDL_WindowID windowID;
} SDL_TouchFingerEvent;

typedef struct SDL_PenProximityEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_WindowID windowID;
    SDL_PenID which;
} SDL_PenProximityEvent;

typedef struct SDL_PenMotionEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_WindowID windowID;
    SDL_PenID which;
    SDL_PenInputFlags pen_state;
    float x;
    float y;
} SDL_PenMotionEvent;

typedef struct SDL_PenTouchEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_WindowID windowID;
    SDL_PenID which;
    SDL_PenInputFlags pen_state;
    float x;
    float y;
    _Bool eraser;
    _Bool down;
} SDL_PenTouchEvent;

typedef struct SDL_PenButtonEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_WindowID windowID;
    SDL_PenID which;
    SDL_PenInputFlags pen_state;
    float x;
    float y;
    Uint8 button;
    _Bool down;
} SDL_PenButtonEvent;

typedef struct SDL_PenAxisEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_WindowID windowID;
    SDL_PenID which;
    SDL_PenInputFlags pen_state;
    float x;
    float y;
    SDL_PenAxis axis;
    float value;
} SDL_PenAxisEvent;

typedef struct SDL_DropEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_WindowID windowID;
    float x;
    float y;
    const char *source;
    const char *data;
} SDL_DropEvent;

typedef struct SDL_ClipboardEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    _Bool owner;
    Sint32 num_mime_types;
    const char **mime_types;
} SDL_ClipboardEvent;

typedef struct SDL_SensorEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_SensorID which;
    float data[6];
    Uint64 sensor_timestamp;
} SDL_SensorEvent;

typedef struct SDL_QuitEvent
{
    SDL_EventType type;
    Uint32 reserved;
    Uint64 timestamp;
} SDL_QuitEvent;

typedef struct SDL_UserEvent
{
    Uint32 type;
    Uint32 reserved;
    Uint64 timestamp;
    SDL_WindowID windowID;
    Sint32 code;
    void *data1;
    void *data2;
} SDL_UserEvent;

typedef union SDL_Event
{
    Uint32 type;
    SDL_CommonEvent common;
    SDL_DisplayEvent display;
    SDL_WindowEvent window;
    SDL_KeyboardDeviceEvent kdevice;
    SDL_KeyboardEvent key;
    SDL_TextEditingEvent edit;
    SDL_TextEditingCandidatesEvent edit_candidates;
    SDL_TextInputEvent text;
    SDL_MouseDeviceEvent mdevice;
    SDL_MouseMotionEvent motion;
    SDL_MouseButtonEvent button;
    SDL_MouseWheelEvent wheel;
    SDL_JoyDeviceEvent jdevice;
    SDL_JoyAxisEvent jaxis;
    SDL_JoyBallEvent jball;
    SDL_JoyHatEvent jhat;
    SDL_JoyButtonEvent jbutton;
    SDL_JoyBatteryEvent jbattery;
    SDL_GamepadDeviceEvent gdevice;
    SDL_GamepadAxisEvent gaxis;
    SDL_GamepadButtonEvent gbutton;
    SDL_GamepadTouchpadEvent gtouchpad;
    SDL_GamepadSensorEvent gsensor;
    SDL_AudioDeviceEvent adevice;
    SDL_CameraDeviceEvent cdevice;
    SDL_SensorEvent sensor;
    SDL_QuitEvent quit;
    SDL_UserEvent user;
    SDL_TouchFingerEvent tfinger;
    SDL_PenProximityEvent pproximity;
    SDL_PenTouchEvent ptouch;
    SDL_PenMotionEvent pmotion;
    SDL_PenButtonEvent pbutton;
    SDL_PenAxisEvent paxis;
    SDL_RenderEvent render;
    SDL_DropEvent drop;
    SDL_ClipboardEvent clipboard;

    Uint8 padding[128];
} SDL_Event;

_Static_assert(sizeof(SDL_Event) == sizeof(((SDL_Event *)((void *)0))->padding), "sizeof(SDL_Event) == sizeof(((SDL_Event *)NULL)->padding)");

extern __attribute__((visibility("default"))) void SDL_PumpEvents(void);

typedef enum SDL_EventAction
{
    SDL_ADDEVENT,
    SDL_PEEKEVENT,
    SDL_GETEVENT
} SDL_EventAction;

extern __attribute__((visibility("default"))) int SDL_PeepEvents(SDL_Event *events, int numevents, SDL_EventAction action, Uint32 minType, Uint32 maxType);

extern __attribute__((visibility("default"))) _Bool SDL_HasEvent(Uint32 type);

extern __attribute__((visibility("default"))) _Bool SDL_HasEvents(Uint32 minType, Uint32 maxType);

extern __attribute__((visibility("default"))) void SDL_FlushEvent(Uint32 type);

extern __attribute__((visibility("default"))) void SDL_FlushEvents(Uint32 minType, Uint32 maxType);

extern __attribute__((visibility("default"))) _Bool SDL_PollEvent(SDL_Event *event);

extern __attribute__((visibility("default"))) _Bool SDL_WaitEvent(SDL_Event *event);

extern __attribute__((visibility("default"))) _Bool SDL_WaitEventTimeout(SDL_Event *event, Sint32 timeoutMS);

extern __attribute__((visibility("default"))) _Bool SDL_PushEvent(SDL_Event *event);

typedef _Bool (*SDL_EventFilter)(void *userdata, SDL_Event *event);

extern __attribute__((visibility("default"))) void SDL_SetEventFilter(SDL_EventFilter filter, void *userdata);

extern __attribute__((visibility("default"))) _Bool SDL_GetEventFilter(SDL_EventFilter *filter, void **userdata);

extern __attribute__((visibility("default"))) _Bool SDL_AddEventWatch(SDL_EventFilter filter, void *userdata);

extern __attribute__((visibility("default"))) void SDL_RemoveEventWatch(SDL_EventFilter filter, void *userdata);

extern __attribute__((visibility("default"))) void SDL_FilterEvents(SDL_EventFilter filter, void *userdata);

extern __attribute__((visibility("default"))) void SDL_SetEventEnabled(Uint32 type, _Bool enabled);

extern __attribute__((visibility("default"))) _Bool SDL_EventEnabled(Uint32 type);

extern __attribute__((visibility("default"))) Uint32 SDL_RegisterEvents(int numevents);

extern __attribute__((visibility("default"))) SDL_Window *SDL_GetWindowFromEvent(const SDL_Event *event);

extern __attribute__((visibility("default"))) const char *SDL_GetBasePath(void);

extern __attribute__((visibility("default"))) char *SDL_GetPrefPath(const char *org, const char *app);

typedef enum SDL_Folder
{
    SDL_FOLDER_HOME,
    SDL_FOLDER_DESKTOP,
    SDL_FOLDER_DOCUMENTS,
    SDL_FOLDER_DOWNLOADS,
    SDL_FOLDER_MUSIC,
    SDL_FOLDER_PICTURES,
    SDL_FOLDER_PUBLICSHARE,
    SDL_FOLDER_SAVEDGAMES,
    SDL_FOLDER_SCREENSHOTS,
    SDL_FOLDER_TEMPLATES,
    SDL_FOLDER_VIDEOS,
    SDL_FOLDER_COUNT
} SDL_Folder;

extern __attribute__((visibility("default"))) const char *SDL_GetUserFolder(SDL_Folder folder);

typedef enum SDL_PathType
{
    SDL_PATHTYPE_NONE,
    SDL_PATHTYPE_FILE,
    SDL_PATHTYPE_DIRECTORY,
    SDL_PATHTYPE_OTHER
} SDL_PathType;

typedef struct SDL_PathInfo
{
    SDL_PathType type;
    Uint64 size;
    SDL_Time create_time;
    SDL_Time modify_time;
    SDL_Time access_time;
} SDL_PathInfo;

typedef Uint32 SDL_GlobFlags;

extern __attribute__((visibility("default"))) _Bool SDL_CreateDirectory(const char *path);

typedef enum SDL_EnumerationResult
{
    SDL_ENUM_CONTINUE,
    SDL_ENUM_SUCCESS,
    SDL_ENUM_FAILURE
} SDL_EnumerationResult;

typedef SDL_EnumerationResult (*SDL_EnumerateDirectoryCallback)(void *userdata, const char *dirname, const char *fname);

extern __attribute__((visibility("default"))) _Bool SDL_EnumerateDirectory(const char *path, SDL_EnumerateDirectoryCallback callback, void *userdata);

extern __attribute__((visibility("default"))) _Bool SDL_RemovePath(const char *path);

extern __attribute__((visibility("default"))) _Bool SDL_RenamePath(const char *oldpath, const char *newpath);

extern __attribute__((visibility("default"))) _Bool SDL_CopyFile(const char *oldpath, const char *newpath);

extern __attribute__((visibility("default"))) _Bool SDL_GetPathInfo(const char *path, SDL_PathInfo *info);

extern __attribute__((visibility("default"))) char **SDL_GlobDirectory(const char *path, const char *pattern, SDL_GlobFlags flags, int *count);

extern __attribute__((visibility("default"))) char *SDL_GetCurrentDirectory(void);

typedef struct SDL_GPUDevice SDL_GPUDevice;

typedef struct SDL_GPUBuffer SDL_GPUBuffer;

typedef struct SDL_GPUTransferBuffer SDL_GPUTransferBuffer;

typedef struct SDL_GPUTexture SDL_GPUTexture;

typedef struct SDL_GPUSampler SDL_GPUSampler;

typedef struct SDL_GPUShader SDL_GPUShader;

typedef struct SDL_GPUComputePipeline SDL_GPUComputePipeline;

typedef struct SDL_GPUGraphicsPipeline SDL_GPUGraphicsPipeline;

typedef struct SDL_GPUCommandBuffer SDL_GPUCommandBuffer;

typedef struct SDL_GPURenderPass SDL_GPURenderPass;

typedef struct SDL_GPUComputePass SDL_GPUComputePass;

typedef struct SDL_GPUCopyPass SDL_GPUCopyPass;

typedef struct SDL_GPUFence SDL_GPUFence;

typedef enum SDL_GPUPrimitiveType
{
    SDL_GPU_PRIMITIVETYPE_TRIANGLELIST,
    SDL_GPU_PRIMITIVETYPE_TRIANGLESTRIP,
    SDL_GPU_PRIMITIVETYPE_LINELIST,
    SDL_GPU_PRIMITIVETYPE_LINESTRIP,
    SDL_GPU_PRIMITIVETYPE_POINTLIST
} SDL_GPUPrimitiveType;

typedef enum SDL_GPULoadOp
{
    SDL_GPU_LOADOP_LOAD,
    SDL_GPU_LOADOP_CLEAR,
    SDL_GPU_LOADOP_DONT_CARE
} SDL_GPULoadOp;

typedef enum SDL_GPUStoreOp
{
    SDL_GPU_STOREOP_STORE,
    SDL_GPU_STOREOP_DONT_CARE,
    SDL_GPU_STOREOP_RESOLVE,
    SDL_GPU_STOREOP_RESOLVE_AND_STORE
} SDL_GPUStoreOp;

typedef enum SDL_GPUIndexElementSize
{
    SDL_GPU_INDEXELEMENTSIZE_16BIT,
    SDL_GPU_INDEXELEMENTSIZE_32BIT
} SDL_GPUIndexElementSize;

typedef enum SDL_GPUTextureFormat
{
    SDL_GPU_TEXTUREFORMAT_INVALID,

    SDL_GPU_TEXTUREFORMAT_A8_UNORM,
    SDL_GPU_TEXTUREFORMAT_R8_UNORM,
    SDL_GPU_TEXTUREFORMAT_R8G8_UNORM,
    SDL_GPU_TEXTUREFORMAT_R8G8B8A8_UNORM,
    SDL_GPU_TEXTUREFORMAT_R16_UNORM,
    SDL_GPU_TEXTUREFORMAT_R16G16_UNORM,
    SDL_GPU_TEXTUREFORMAT_R16G16B16A16_UNORM,
    SDL_GPU_TEXTUREFORMAT_R10G10B10A2_UNORM,
    SDL_GPU_TEXTUREFORMAT_B5G6R5_UNORM,
    SDL_GPU_TEXTUREFORMAT_B5G5R5A1_UNORM,
    SDL_GPU_TEXTUREFORMAT_B4G4R4A4_UNORM,
    SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM,

    SDL_GPU_TEXTUREFORMAT_BC1_RGBA_UNORM,
    SDL_GPU_TEXTUREFORMAT_BC2_RGBA_UNORM,
    SDL_GPU_TEXTUREFORMAT_BC3_RGBA_UNORM,
    SDL_GPU_TEXTUREFORMAT_BC4_R_UNORM,
    SDL_GPU_TEXTUREFORMAT_BC5_RG_UNORM,
    SDL_GPU_TEXTUREFORMAT_BC7_RGBA_UNORM,

    SDL_GPU_TEXTUREFORMAT_BC6H_RGB_FLOAT,

    SDL_GPU_TEXTUREFORMAT_BC6H_RGB_UFLOAT,

    SDL_GPU_TEXTUREFORMAT_R8_SNORM,
    SDL_GPU_TEXTUREFORMAT_R8G8_SNORM,
    SDL_GPU_TEXTUREFORMAT_R8G8B8A8_SNORM,
    SDL_GPU_TEXTUREFORMAT_R16_SNORM,
    SDL_GPU_TEXTUREFORMAT_R16G16_SNORM,
    SDL_GPU_TEXTUREFORMAT_R16G16B16A16_SNORM,

    SDL_GPU_TEXTUREFORMAT_R16_FLOAT,
    SDL_GPU_TEXTUREFORMAT_R16G16_FLOAT,
    SDL_GPU_TEXTUREFORMAT_R16G16B16A16_FLOAT,
    SDL_GPU_TEXTUREFORMAT_R32_FLOAT,
    SDL_GPU_TEXTUREFORMAT_R32G32_FLOAT,
    SDL_GPU_TEXTUREFORMAT_R32G32B32A32_FLOAT,

    SDL_GPU_TEXTUREFORMAT_R11G11B10_UFLOAT,

    SDL_GPU_TEXTUREFORMAT_R8_UINT,
    SDL_GPU_TEXTUREFORMAT_R8G8_UINT,
    SDL_GPU_TEXTUREFORMAT_R8G8B8A8_UINT,
    SDL_GPU_TEXTUREFORMAT_R16_UINT,
    SDL_GPU_TEXTUREFORMAT_R16G16_UINT,
    SDL_GPU_TEXTUREFORMAT_R16G16B16A16_UINT,
    SDL_GPU_TEXTUREFORMAT_R32_UINT,
    SDL_GPU_TEXTUREFORMAT_R32G32_UINT,
    SDL_GPU_TEXTUREFORMAT_R32G32B32A32_UINT,

    SDL_GPU_TEXTUREFORMAT_R8_INT,
    SDL_GPU_TEXTUREFORMAT_R8G8_INT,
    SDL_GPU_TEXTUREFORMAT_R8G8B8A8_INT,
    SDL_GPU_TEXTUREFORMAT_R16_INT,
    SDL_GPU_TEXTUREFORMAT_R16G16_INT,
    SDL_GPU_TEXTUREFORMAT_R16G16B16A16_INT,
    SDL_GPU_TEXTUREFORMAT_R32_INT,
    SDL_GPU_TEXTUREFORMAT_R32G32_INT,
    SDL_GPU_TEXTUREFORMAT_R32G32B32A32_INT,

    SDL_GPU_TEXTUREFORMAT_R8G8B8A8_UNORM_SRGB,
    SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM_SRGB,

    SDL_GPU_TEXTUREFORMAT_BC1_RGBA_UNORM_SRGB,
    SDL_GPU_TEXTUREFORMAT_BC2_RGBA_UNORM_SRGB,
    SDL_GPU_TEXTUREFORMAT_BC3_RGBA_UNORM_SRGB,
    SDL_GPU_TEXTUREFORMAT_BC7_RGBA_UNORM_SRGB,

    SDL_GPU_TEXTUREFORMAT_D16_UNORM,
    SDL_GPU_TEXTUREFORMAT_D24_UNORM,
    SDL_GPU_TEXTUREFORMAT_D32_FLOAT,
    SDL_GPU_TEXTUREFORMAT_D24_UNORM_S8_UINT,
    SDL_GPU_TEXTUREFORMAT_D32_FLOAT_S8_UINT,

    SDL_GPU_TEXTUREFORMAT_ASTC_4x4_UNORM,
    SDL_GPU_TEXTUREFORMAT_ASTC_5x4_UNORM,
    SDL_GPU_TEXTUREFORMAT_ASTC_5x5_UNORM,
    SDL_GPU_TEXTUREFORMAT_ASTC_6x5_UNORM,
    SDL_GPU_TEXTUREFORMAT_ASTC_6x6_UNORM,
    SDL_GPU_TEXTUREFORMAT_ASTC_8x5_UNORM,
    SDL_GPU_TEXTUREFORMAT_ASTC_8x6_UNORM,
    SDL_GPU_TEXTUREFORMAT_ASTC_8x8_UNORM,
    SDL_GPU_TEXTUREFORMAT_ASTC_10x5_UNORM,
    SDL_GPU_TEXTUREFORMAT_ASTC_10x6_UNORM,
    SDL_GPU_TEXTUREFORMAT_ASTC_10x8_UNORM,
    SDL_GPU_TEXTUREFORMAT_ASTC_10x10_UNORM,
    SDL_GPU_TEXTUREFORMAT_ASTC_12x10_UNORM,
    SDL_GPU_TEXTUREFORMAT_ASTC_12x12_UNORM,

    SDL_GPU_TEXTUREFORMAT_ASTC_4x4_UNORM_SRGB,
    SDL_GPU_TEXTUREFORMAT_ASTC_5x4_UNORM_SRGB,
    SDL_GPU_TEXTUREFORMAT_ASTC_5x5_UNORM_SRGB,
    SDL_GPU_TEXTUREFORMAT_ASTC_6x5_UNORM_SRGB,
    SDL_GPU_TEXTUREFORMAT_ASTC_6x6_UNORM_SRGB,
    SDL_GPU_TEXTUREFORMAT_ASTC_8x5_UNORM_SRGB,
    SDL_GPU_TEXTUREFORMAT_ASTC_8x6_UNORM_SRGB,
    SDL_GPU_TEXTUREFORMAT_ASTC_8x8_UNORM_SRGB,
    SDL_GPU_TEXTUREFORMAT_ASTC_10x5_UNORM_SRGB,
    SDL_GPU_TEXTUREFORMAT_ASTC_10x6_UNORM_SRGB,
    SDL_GPU_TEXTUREFORMAT_ASTC_10x8_UNORM_SRGB,
    SDL_GPU_TEXTUREFORMAT_ASTC_10x10_UNORM_SRGB,
    SDL_GPU_TEXTUREFORMAT_ASTC_12x10_UNORM_SRGB,
    SDL_GPU_TEXTUREFORMAT_ASTC_12x12_UNORM_SRGB,

    SDL_GPU_TEXTUREFORMAT_ASTC_4x4_FLOAT,
    SDL_GPU_TEXTUREFORMAT_ASTC_5x4_FLOAT,
    SDL_GPU_TEXTUREFORMAT_ASTC_5x5_FLOAT,
    SDL_GPU_TEXTUREFORMAT_ASTC_6x5_FLOAT,
    SDL_GPU_TEXTUREFORMAT_ASTC_6x6_FLOAT,
    SDL_GPU_TEXTUREFORMAT_ASTC_8x5_FLOAT,
    SDL_GPU_TEXTUREFORMAT_ASTC_8x6_FLOAT,
    SDL_GPU_TEXTUREFORMAT_ASTC_8x8_FLOAT,
    SDL_GPU_TEXTUREFORMAT_ASTC_10x5_FLOAT,
    SDL_GPU_TEXTUREFORMAT_ASTC_10x6_FLOAT,
    SDL_GPU_TEXTUREFORMAT_ASTC_10x8_FLOAT,
    SDL_GPU_TEXTUREFORMAT_ASTC_10x10_FLOAT,
    SDL_GPU_TEXTUREFORMAT_ASTC_12x10_FLOAT,
    SDL_GPU_TEXTUREFORMAT_ASTC_12x12_FLOAT
} SDL_GPUTextureFormat;

typedef Uint32 SDL_GPUTextureUsageFlags;

typedef enum SDL_GPUTextureType
{
    SDL_GPU_TEXTURETYPE_2D,
    SDL_GPU_TEXTURETYPE_2D_ARRAY,
    SDL_GPU_TEXTURETYPE_3D,
    SDL_GPU_TEXTURETYPE_CUBE,
    SDL_GPU_TEXTURETYPE_CUBE_ARRAY
} SDL_GPUTextureType;

typedef enum SDL_GPUSampleCount
{
    SDL_GPU_SAMPLECOUNT_1,
    SDL_GPU_SAMPLECOUNT_2,
    SDL_GPU_SAMPLECOUNT_4,
    SDL_GPU_SAMPLECOUNT_8
} SDL_GPUSampleCount;

typedef enum SDL_GPUCubeMapFace
{
    SDL_GPU_CUBEMAPFACE_POSITIVEX,
    SDL_GPU_CUBEMAPFACE_NEGATIVEX,
    SDL_GPU_CUBEMAPFACE_POSITIVEY,
    SDL_GPU_CUBEMAPFACE_NEGATIVEY,
    SDL_GPU_CUBEMAPFACE_POSITIVEZ,
    SDL_GPU_CUBEMAPFACE_NEGATIVEZ
} SDL_GPUCubeMapFace;

typedef Uint32 SDL_GPUBufferUsageFlags;

typedef enum SDL_GPUTransferBufferUsage
{
    SDL_GPU_TRANSFERBUFFERUSAGE_UPLOAD,
    SDL_GPU_TRANSFERBUFFERUSAGE_DOWNLOAD
} SDL_GPUTransferBufferUsage;

typedef enum SDL_GPUShaderStage
{
    SDL_GPU_SHADERSTAGE_VERTEX,
    SDL_GPU_SHADERSTAGE_FRAGMENT
} SDL_GPUShaderStage;

typedef Uint32 SDL_GPUShaderFormat;

typedef enum SDL_GPUVertexElementFormat
{
    SDL_GPU_VERTEXELEMENTFORMAT_INVALID,

    SDL_GPU_VERTEXELEMENTFORMAT_INT,
    SDL_GPU_VERTEXELEMENTFORMAT_INT2,
    SDL_GPU_VERTEXELEMENTFORMAT_INT3,
    SDL_GPU_VERTEXELEMENTFORMAT_INT4,

    SDL_GPU_VERTEXELEMENTFORMAT_UINT,
    SDL_GPU_VERTEXELEMENTFORMAT_UINT2,
    SDL_GPU_VERTEXELEMENTFORMAT_UINT3,
    SDL_GPU_VERTEXELEMENTFORMAT_UINT4,

    SDL_GPU_VERTEXELEMENTFORMAT_FLOAT,
    SDL_GPU_VERTEXELEMENTFORMAT_FLOAT2,
    SDL_GPU_VERTEXELEMENTFORMAT_FLOAT3,
    SDL_GPU_VERTEXELEMENTFORMAT_FLOAT4,

    SDL_GPU_VERTEXELEMENTFORMAT_BYTE2,
    SDL_GPU_VERTEXELEMENTFORMAT_BYTE4,

    SDL_GPU_VERTEXELEMENTFORMAT_UBYTE2,
    SDL_GPU_VERTEXELEMENTFORMAT_UBYTE4,

    SDL_GPU_VERTEXELEMENTFORMAT_BYTE2_NORM,
    SDL_GPU_VERTEXELEMENTFORMAT_BYTE4_NORM,

    SDL_GPU_VERTEXELEMENTFORMAT_UBYTE2_NORM,
    SDL_GPU_VERTEXELEMENTFORMAT_UBYTE4_NORM,

    SDL_GPU_VERTEXELEMENTFORMAT_SHORT2,
    SDL_GPU_VERTEXELEMENTFORMAT_SHORT4,

    SDL_GPU_VERTEXELEMENTFORMAT_USHORT2,
    SDL_GPU_VERTEXELEMENTFORMAT_USHORT4,

    SDL_GPU_VERTEXELEMENTFORMAT_SHORT2_NORM,
    SDL_GPU_VERTEXELEMENTFORMAT_SHORT4_NORM,

    SDL_GPU_VERTEXELEMENTFORMAT_USHORT2_NORM,
    SDL_GPU_VERTEXELEMENTFORMAT_USHORT4_NORM,

    SDL_GPU_VERTEXELEMENTFORMAT_HALF2,
    SDL_GPU_VERTEXELEMENTFORMAT_HALF4
} SDL_GPUVertexElementFormat;

typedef enum SDL_GPUVertexInputRate
{
    SDL_GPU_VERTEXINPUTRATE_VERTEX,
    SDL_GPU_VERTEXINPUTRATE_INSTANCE
} SDL_GPUVertexInputRate;

typedef enum SDL_GPUFillMode
{
    SDL_GPU_FILLMODE_FILL,
    SDL_GPU_FILLMODE_LINE
} SDL_GPUFillMode;

typedef enum SDL_GPUCullMode
{
    SDL_GPU_CULLMODE_NONE,
    SDL_GPU_CULLMODE_FRONT,
    SDL_GPU_CULLMODE_BACK
} SDL_GPUCullMode;

typedef enum SDL_GPUFrontFace
{
    SDL_GPU_FRONTFACE_COUNTER_CLOCKWISE,
    SDL_GPU_FRONTFACE_CLOCKWISE
} SDL_GPUFrontFace;

typedef enum SDL_GPUCompareOp
{
    SDL_GPU_COMPAREOP_INVALID,
    SDL_GPU_COMPAREOP_NEVER,
    SDL_GPU_COMPAREOP_LESS,
    SDL_GPU_COMPAREOP_EQUAL,
    SDL_GPU_COMPAREOP_LESS_OR_EQUAL,
    SDL_GPU_COMPAREOP_GREATER,
    SDL_GPU_COMPAREOP_NOT_EQUAL,
    SDL_GPU_COMPAREOP_GREATER_OR_EQUAL,
    SDL_GPU_COMPAREOP_ALWAYS
} SDL_GPUCompareOp;

typedef enum SDL_GPUStencilOp
{
    SDL_GPU_STENCILOP_INVALID,
    SDL_GPU_STENCILOP_KEEP,
    SDL_GPU_STENCILOP_ZERO,
    SDL_GPU_STENCILOP_REPLACE,
    SDL_GPU_STENCILOP_INCREMENT_AND_CLAMP,
    SDL_GPU_STENCILOP_DECREMENT_AND_CLAMP,
    SDL_GPU_STENCILOP_INVERT,
    SDL_GPU_STENCILOP_INCREMENT_AND_WRAP,
    SDL_GPU_STENCILOP_DECREMENT_AND_WRAP
} SDL_GPUStencilOp;

typedef enum SDL_GPUBlendOp
{
    SDL_GPU_BLENDOP_INVALID,
    SDL_GPU_BLENDOP_ADD,
    SDL_GPU_BLENDOP_SUBTRACT,
    SDL_GPU_BLENDOP_REVERSE_SUBTRACT,
    SDL_GPU_BLENDOP_MIN,
    SDL_GPU_BLENDOP_MAX
} SDL_GPUBlendOp;

typedef enum SDL_GPUBlendFactor
{
    SDL_GPU_BLENDFACTOR_INVALID,
    SDL_GPU_BLENDFACTOR_ZERO,
    SDL_GPU_BLENDFACTOR_ONE,
    SDL_GPU_BLENDFACTOR_SRC_COLOR,
    SDL_GPU_BLENDFACTOR_ONE_MINUS_SRC_COLOR,
    SDL_GPU_BLENDFACTOR_DST_COLOR,
    SDL_GPU_BLENDFACTOR_ONE_MINUS_DST_COLOR,
    SDL_GPU_BLENDFACTOR_SRC_ALPHA,
    SDL_GPU_BLENDFACTOR_ONE_MINUS_SRC_ALPHA,
    SDL_GPU_BLENDFACTOR_DST_ALPHA,
    SDL_GPU_BLENDFACTOR_ONE_MINUS_DST_ALPHA,
    SDL_GPU_BLENDFACTOR_CONSTANT_COLOR,
    SDL_GPU_BLENDFACTOR_ONE_MINUS_CONSTANT_COLOR,
    SDL_GPU_BLENDFACTOR_SRC_ALPHA_SATURATE
} SDL_GPUBlendFactor;

typedef Uint8 SDL_GPUColorComponentFlags;

typedef enum SDL_GPUFilter
{
    SDL_GPU_FILTER_NEAREST,
    SDL_GPU_FILTER_LINEAR
} SDL_GPUFilter;

typedef enum SDL_GPUSamplerMipmapMode
{
    SDL_GPU_SAMPLERMIPMAPMODE_NEAREST,
    SDL_GPU_SAMPLERMIPMAPMODE_LINEAR
} SDL_GPUSamplerMipmapMode;

typedef enum SDL_GPUSamplerAddressMode
{
    SDL_GPU_SAMPLERADDRESSMODE_REPEAT,
    SDL_GPU_SAMPLERADDRESSMODE_MIRRORED_REPEAT,
    SDL_GPU_SAMPLERADDRESSMODE_CLAMP_TO_EDGE
} SDL_GPUSamplerAddressMode;

typedef enum SDL_GPUPresentMode
{
    SDL_GPU_PRESENTMODE_VSYNC,
    SDL_GPU_PRESENTMODE_IMMEDIATE,
    SDL_GPU_PRESENTMODE_MAILBOX
} SDL_GPUPresentMode;

typedef enum SDL_GPUSwapchainComposition
{
    SDL_GPU_SWAPCHAINCOMPOSITION_SDR,
    SDL_GPU_SWAPCHAINCOMPOSITION_SDR_LINEAR,
    SDL_GPU_SWAPCHAINCOMPOSITION_HDR_EXTENDED_LINEAR,
    SDL_GPU_SWAPCHAINCOMPOSITION_HDR10_ST2084
} SDL_GPUSwapchainComposition;

typedef struct SDL_GPUViewport
{
    float x;
    float y;
    float w;
    float h;
    float min_depth;
    float max_depth;
} SDL_GPUViewport;

typedef struct SDL_GPUTextureTransferInfo
{
    SDL_GPUTransferBuffer *transfer_buffer;
    Uint32 offset;
    Uint32 pixels_per_row;
    Uint32 rows_per_layer;
} SDL_GPUTextureTransferInfo;

typedef struct SDL_GPUTransferBufferLocation
{
    SDL_GPUTransferBuffer *transfer_buffer;
    Uint32 offset;
} SDL_GPUTransferBufferLocation;

typedef struct SDL_GPUTextureLocation
{
    SDL_GPUTexture *texture;
    Uint32 mip_level;
    Uint32 layer;
    Uint32 x;
    Uint32 y;
    Uint32 z;
} SDL_GPUTextureLocation;

typedef struct SDL_GPUTextureRegion
{
    SDL_GPUTexture *texture;
    Uint32 mip_level;
    Uint32 layer;
    Uint32 x;
    Uint32 y;
    Uint32 z;
    Uint32 w;
    Uint32 h;
    Uint32 d;
} SDL_GPUTextureRegion;

typedef struct SDL_GPUBlitRegion
{
    SDL_GPUTexture *texture;
    Uint32 mip_level;
    Uint32 layer_or_depth_plane;
    Uint32 x;
    Uint32 y;
    Uint32 w;
    Uint32 h;
} SDL_GPUBlitRegion;

typedef struct SDL_GPUBufferLocation
{
    SDL_GPUBuffer *buffer;
    Uint32 offset;
} SDL_GPUBufferLocation;

typedef struct SDL_GPUBufferRegion
{
    SDL_GPUBuffer *buffer;
    Uint32 offset;
    Uint32 size;
} SDL_GPUBufferRegion;

typedef struct SDL_GPUIndirectDrawCommand
{
    Uint32 num_vertices;
    Uint32 num_instances;
    Uint32 first_vertex;
    Uint32 first_instance;
} SDL_GPUIndirectDrawCommand;

typedef struct SDL_GPUIndexedIndirectDrawCommand
{
    Uint32 num_indices;
    Uint32 num_instances;
    Uint32 first_index;
    Sint32 vertex_offset;
    Uint32 first_instance;
} SDL_GPUIndexedIndirectDrawCommand;

typedef struct SDL_GPUIndirectDispatchCommand
{
    Uint32 groupcount_x;
    Uint32 groupcount_y;
    Uint32 groupcount_z;
} SDL_GPUIndirectDispatchCommand;

typedef struct SDL_GPUSamplerCreateInfo
{
    SDL_GPUFilter min_filter;
    SDL_GPUFilter mag_filter;
    SDL_GPUSamplerMipmapMode mipmap_mode;
    SDL_GPUSamplerAddressMode address_mode_u;
    SDL_GPUSamplerAddressMode address_mode_v;
    SDL_GPUSamplerAddressMode address_mode_w;
    float mip_lod_bias;
    float max_anisotropy;
    SDL_GPUCompareOp compare_op;
    float min_lod;
    float max_lod;
    _Bool enable_anisotropy;
    _Bool enable_compare;
    Uint8 padding1;
    Uint8 padding2;

    SDL_PropertiesID props;
} SDL_GPUSamplerCreateInfo;

typedef struct SDL_GPUVertexBufferDescription
{
    Uint32 slot;
    Uint32 pitch;
    SDL_GPUVertexInputRate input_rate;
    Uint32 instance_step_rate;
} SDL_GPUVertexBufferDescription;

typedef struct SDL_GPUVertexAttribute
{
    Uint32 location;
    Uint32 buffer_slot;
    SDL_GPUVertexElementFormat format;
    Uint32 offset;
} SDL_GPUVertexAttribute;

typedef struct SDL_GPUVertexInputState
{
    const SDL_GPUVertexBufferDescription *vertex_buffer_descriptions;
    Uint32 num_vertex_buffers;
    const SDL_GPUVertexAttribute *vertex_attributes;
    Uint32 num_vertex_attributes;
} SDL_GPUVertexInputState;

typedef struct SDL_GPUStencilOpState
{
    SDL_GPUStencilOp fail_op;
    SDL_GPUStencilOp pass_op;
    SDL_GPUStencilOp depth_fail_op;
    SDL_GPUCompareOp compare_op;
} SDL_GPUStencilOpState;

typedef struct SDL_GPUColorTargetBlendState
{
    SDL_GPUBlendFactor src_color_blendfactor;
    SDL_GPUBlendFactor dst_color_blendfactor;
    SDL_GPUBlendOp color_blend_op;
    SDL_GPUBlendFactor src_alpha_blendfactor;
    SDL_GPUBlendFactor dst_alpha_blendfactor;
    SDL_GPUBlendOp alpha_blend_op;
    SDL_GPUColorComponentFlags color_write_mask;
    _Bool enable_blend;
    _Bool enable_color_write_mask;
    Uint8 padding1;
    Uint8 padding2;
} SDL_GPUColorTargetBlendState;

typedef struct SDL_GPUShaderCreateInfo
{
    size_t code_size;
    const Uint8 *code;
    const char *entrypoint;
    SDL_GPUShaderFormat format;
    SDL_GPUShaderStage stage;
    Uint32 num_samplers;
    Uint32 num_storage_textures;
    Uint32 num_storage_buffers;
    Uint32 num_uniform_buffers;

    SDL_PropertiesID props;
} SDL_GPUShaderCreateInfo;

typedef struct SDL_GPUTextureCreateInfo
{
    SDL_GPUTextureType type;
    SDL_GPUTextureFormat format;
    SDL_GPUTextureUsageFlags usage;
    Uint32 width;
    Uint32 height;
    Uint32 layer_count_or_depth;
    Uint32 num_levels;
    SDL_GPUSampleCount sample_count;

    SDL_PropertiesID props;
} SDL_GPUTextureCreateInfo;

typedef struct SDL_GPUBufferCreateInfo
{
    SDL_GPUBufferUsageFlags usage;
    Uint32 size;

    SDL_PropertiesID props;
} SDL_GPUBufferCreateInfo;

typedef struct SDL_GPUTransferBufferCreateInfo
{
    SDL_GPUTransferBufferUsage usage;
    Uint32 size;

    SDL_PropertiesID props;
} SDL_GPUTransferBufferCreateInfo;

typedef struct SDL_GPURasterizerState
{
    SDL_GPUFillMode fill_mode;
    SDL_GPUCullMode cull_mode;
    SDL_GPUFrontFace front_face;
    float depth_bias_constant_factor;
    float depth_bias_clamp;
    float depth_bias_slope_factor;
    _Bool enable_depth_bias;
    _Bool enable_depth_clip;
    Uint8 padding1;
    Uint8 padding2;
} SDL_GPURasterizerState;

typedef struct SDL_GPUMultisampleState
{
    SDL_GPUSampleCount sample_count;
    Uint32 sample_mask;
    _Bool enable_mask;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
} SDL_GPUMultisampleState;

typedef struct SDL_GPUDepthStencilState
{
    SDL_GPUCompareOp compare_op;
    SDL_GPUStencilOpState back_stencil_state;
    SDL_GPUStencilOpState front_stencil_state;
    Uint8 compare_mask;
    Uint8 write_mask;
    _Bool enable_depth_test;
    _Bool enable_depth_write;
    _Bool enable_stencil_test;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
} SDL_GPUDepthStencilState;

typedef struct SDL_GPUColorTargetDescription
{
    SDL_GPUTextureFormat format;
    SDL_GPUColorTargetBlendState blend_state;
} SDL_GPUColorTargetDescription;

typedef struct SDL_GPUGraphicsPipelineTargetInfo
{
    const SDL_GPUColorTargetDescription *color_target_descriptions;
    Uint32 num_color_targets;
    SDL_GPUTextureFormat depth_stencil_format;
    _Bool has_depth_stencil_target;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
} SDL_GPUGraphicsPipelineTargetInfo;

typedef struct SDL_GPUGraphicsPipelineCreateInfo
{
    SDL_GPUShader *vertex_shader;
    SDL_GPUShader *fragment_shader;
    SDL_GPUVertexInputState vertex_input_state;
    SDL_GPUPrimitiveType primitive_type;
    SDL_GPURasterizerState rasterizer_state;
    SDL_GPUMultisampleState multisample_state;
    SDL_GPUDepthStencilState depth_stencil_state;
    SDL_GPUGraphicsPipelineTargetInfo target_info;

    SDL_PropertiesID props;
} SDL_GPUGraphicsPipelineCreateInfo;

typedef struct SDL_GPUComputePipelineCreateInfo
{
    size_t code_size;
    const Uint8 *code;
    const char *entrypoint;
    SDL_GPUShaderFormat format;
    Uint32 num_samplers;
    Uint32 num_readonly_storage_textures;
    Uint32 num_readonly_storage_buffers;
    Uint32 num_readwrite_storage_textures;
    Uint32 num_readwrite_storage_buffers;
    Uint32 num_uniform_buffers;
    Uint32 threadcount_x;
    Uint32 threadcount_y;
    Uint32 threadcount_z;

    SDL_PropertiesID props;
} SDL_GPUComputePipelineCreateInfo;

typedef struct SDL_GPUColorTargetInfo
{
    SDL_GPUTexture *texture;
    Uint32 mip_level;
    Uint32 layer_or_depth_plane;
    SDL_FColor clear_color;
    SDL_GPULoadOp load_op;
    SDL_GPUStoreOp store_op;
    SDL_GPUTexture *resolve_texture;
    Uint32 resolve_mip_level;
    Uint32 resolve_layer;
    _Bool cycle;
    _Bool cycle_resolve_texture;
    Uint8 padding1;
    Uint8 padding2;
} SDL_GPUColorTargetInfo;

typedef struct SDL_GPUDepthStencilTargetInfo
{
    SDL_GPUTexture *texture;
    float clear_depth;
    SDL_GPULoadOp load_op;
    SDL_GPUStoreOp store_op;
    SDL_GPULoadOp stencil_load_op;
    SDL_GPUStoreOp stencil_store_op;
    _Bool cycle;
    Uint8 clear_stencil;
    Uint8 padding1;
    Uint8 padding2;
} SDL_GPUDepthStencilTargetInfo;

typedef struct SDL_GPUBlitInfo
{
    SDL_GPUBlitRegion source;
    SDL_GPUBlitRegion destination;
    SDL_GPULoadOp load_op;
    SDL_FColor clear_color;
    SDL_FlipMode flip_mode;
    SDL_GPUFilter filter;
    _Bool cycle;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
} SDL_GPUBlitInfo;

typedef struct SDL_GPUBufferBinding
{
    SDL_GPUBuffer *buffer;
    Uint32 offset;
} SDL_GPUBufferBinding;

typedef struct SDL_GPUTextureSamplerBinding
{
    SDL_GPUTexture *texture;
    SDL_GPUSampler *sampler;
} SDL_GPUTextureSamplerBinding;

typedef struct SDL_GPUStorageBufferReadWriteBinding
{
    SDL_GPUBuffer *buffer;
    _Bool cycle;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
} SDL_GPUStorageBufferReadWriteBinding;

typedef struct SDL_GPUStorageTextureReadWriteBinding
{
    SDL_GPUTexture *texture;
    Uint32 mip_level;
    Uint32 layer;
    _Bool cycle;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
} SDL_GPUStorageTextureReadWriteBinding;

extern __attribute__((visibility("default"))) _Bool SDL_GPUSupportsShaderFormats(
    SDL_GPUShaderFormat format_flags,
    const char *name);

extern __attribute__((visibility("default"))) _Bool SDL_GPUSupportsProperties(
    SDL_PropertiesID props);

extern __attribute__((visibility("default"))) SDL_GPUDevice *SDL_CreateGPUDevice(
    SDL_GPUShaderFormat format_flags,
    _Bool debug_mode,
    const char *name);

extern __attribute__((visibility("default"))) SDL_GPUDevice *SDL_CreateGPUDeviceWithProperties(
    SDL_PropertiesID props);

extern __attribute__((visibility("default"))) void SDL_DestroyGPUDevice(SDL_GPUDevice *device);

extern __attribute__((visibility("default"))) int SDL_GetNumGPUDrivers(void);

extern __attribute__((visibility("default"))) const char *SDL_GetGPUDriver(int index);

extern __attribute__((visibility("default"))) const char *SDL_GetGPUDeviceDriver(SDL_GPUDevice *device);

extern __attribute__((visibility("default"))) SDL_GPUShaderFormat SDL_GetGPUShaderFormats(SDL_GPUDevice *device);

extern __attribute__((visibility("default"))) SDL_GPUComputePipeline *SDL_CreateGPUComputePipeline(
    SDL_GPUDevice *device,
    const SDL_GPUComputePipelineCreateInfo *createinfo);

extern __attribute__((visibility("default"))) SDL_GPUGraphicsPipeline *SDL_CreateGPUGraphicsPipeline(
    SDL_GPUDevice *device,
    const SDL_GPUGraphicsPipelineCreateInfo *createinfo);

extern __attribute__((visibility("default"))) SDL_GPUSampler *SDL_CreateGPUSampler(
    SDL_GPUDevice *device,
    const SDL_GPUSamplerCreateInfo *createinfo);

extern __attribute__((visibility("default"))) SDL_GPUShader *SDL_CreateGPUShader(
    SDL_GPUDevice *device,
    const SDL_GPUShaderCreateInfo *createinfo);

extern __attribute__((visibility("default"))) SDL_GPUTexture *SDL_CreateGPUTexture(
    SDL_GPUDevice *device,
    const SDL_GPUTextureCreateInfo *createinfo);

extern __attribute__((visibility("default"))) SDL_GPUBuffer *SDL_CreateGPUBuffer(
    SDL_GPUDevice *device,
    const SDL_GPUBufferCreateInfo *createinfo);

extern __attribute__((visibility("default"))) SDL_GPUTransferBuffer *SDL_CreateGPUTransferBuffer(
    SDL_GPUDevice *device,
    const SDL_GPUTransferBufferCreateInfo *createinfo);

extern __attribute__((visibility("default"))) void SDL_SetGPUBufferName(
    SDL_GPUDevice *device,
    SDL_GPUBuffer *buffer,
    const char *text);

extern __attribute__((visibility("default"))) void SDL_SetGPUTextureName(
    SDL_GPUDevice *device,
    SDL_GPUTexture *texture,
    const char *text);

extern __attribute__((visibility("default"))) void SDL_InsertGPUDebugLabel(
    SDL_GPUCommandBuffer *command_buffer,
    const char *text);

extern __attribute__((visibility("default"))) void SDL_PushGPUDebugGroup(
    SDL_GPUCommandBuffer *command_buffer,
    const char *name);

extern __attribute__((visibility("default"))) void SDL_PopGPUDebugGroup(
    SDL_GPUCommandBuffer *command_buffer);

extern __attribute__((visibility("default"))) void SDL_ReleaseGPUTexture(
    SDL_GPUDevice *device,
    SDL_GPUTexture *texture);

extern __attribute__((visibility("default"))) void SDL_ReleaseGPUSampler(
    SDL_GPUDevice *device,
    SDL_GPUSampler *sampler);

extern __attribute__((visibility("default"))) void SDL_ReleaseGPUBuffer(
    SDL_GPUDevice *device,
    SDL_GPUBuffer *buffer);

extern __attribute__((visibility("default"))) void SDL_ReleaseGPUTransferBuffer(
    SDL_GPUDevice *device,
    SDL_GPUTransferBuffer *transfer_buffer);

extern __attribute__((visibility("default"))) void SDL_ReleaseGPUComputePipeline(
    SDL_GPUDevice *device,
    SDL_GPUComputePipeline *compute_pipeline);

extern __attribute__((visibility("default"))) void SDL_ReleaseGPUShader(
    SDL_GPUDevice *device,
    SDL_GPUShader *shader);

extern __attribute__((visibility("default"))) void SDL_ReleaseGPUGraphicsPipeline(
    SDL_GPUDevice *device,
    SDL_GPUGraphicsPipeline *graphics_pipeline);

extern __attribute__((visibility("default"))) SDL_GPUCommandBuffer *SDL_AcquireGPUCommandBuffer(
    SDL_GPUDevice *device);

extern __attribute__((visibility("default"))) void SDL_PushGPUVertexUniformData(
    SDL_GPUCommandBuffer *command_buffer,
    Uint32 slot_index,
    const void *data,
    Uint32 length);

extern __attribute__((visibility("default"))) void SDL_PushGPUFragmentUniformData(
    SDL_GPUCommandBuffer *command_buffer,
    Uint32 slot_index,
    const void *data,
    Uint32 length);

extern __attribute__((visibility("default"))) void SDL_PushGPUComputeUniformData(
    SDL_GPUCommandBuffer *command_buffer,
    Uint32 slot_index,
    const void *data,
    Uint32 length);

extern __attribute__((visibility("default"))) SDL_GPURenderPass *SDL_BeginGPURenderPass(
    SDL_GPUCommandBuffer *command_buffer,
    const SDL_GPUColorTargetInfo *color_target_infos,
    Uint32 num_color_targets,
    const SDL_GPUDepthStencilTargetInfo *depth_stencil_target_info);

extern __attribute__((visibility("default"))) void SDL_BindGPUGraphicsPipeline(
    SDL_GPURenderPass *render_pass,
    SDL_GPUGraphicsPipeline *graphics_pipeline);

extern __attribute__((visibility("default"))) void SDL_SetGPUViewport(
    SDL_GPURenderPass *render_pass,
    const SDL_GPUViewport *viewport);

extern __attribute__((visibility("default"))) void SDL_SetGPUScissor(
    SDL_GPURenderPass *render_pass,
    const SDL_Rect *scissor);

extern __attribute__((visibility("default"))) void SDL_SetGPUBlendConstants(
    SDL_GPURenderPass *render_pass,
    SDL_FColor blend_constants);

extern __attribute__((visibility("default"))) void SDL_SetGPUStencilReference(
    SDL_GPURenderPass *render_pass,
    Uint8 reference);

extern __attribute__((visibility("default"))) void SDL_BindGPUVertexBuffers(
    SDL_GPURenderPass *render_pass,
    Uint32 first_slot,
    const SDL_GPUBufferBinding *bindings,
    Uint32 num_bindings);

extern __attribute__((visibility("default"))) void SDL_BindGPUIndexBuffer(
    SDL_GPURenderPass *render_pass,
    const SDL_GPUBufferBinding *binding,
    SDL_GPUIndexElementSize index_element_size);

extern __attribute__((visibility("default"))) void SDL_BindGPUVertexSamplers(
    SDL_GPURenderPass *render_pass,
    Uint32 first_slot,
    const SDL_GPUTextureSamplerBinding *texture_sampler_bindings,
    Uint32 num_bindings);

extern __attribute__((visibility("default"))) void SDL_BindGPUVertexStorageTextures(
    SDL_GPURenderPass *render_pass,
    Uint32 first_slot,
    SDL_GPUTexture *const *storage_textures,
    Uint32 num_bindings);

extern __attribute__((visibility("default"))) void SDL_BindGPUVertexStorageBuffers(
    SDL_GPURenderPass *render_pass,
    Uint32 first_slot,
    SDL_GPUBuffer *const *storage_buffers,
    Uint32 num_bindings);

extern __attribute__((visibility("default"))) void SDL_BindGPUFragmentSamplers(
    SDL_GPURenderPass *render_pass,
    Uint32 first_slot,
    const SDL_GPUTextureSamplerBinding *texture_sampler_bindings,
    Uint32 num_bindings);

extern __attribute__((visibility("default"))) void SDL_BindGPUFragmentStorageTextures(
    SDL_GPURenderPass *render_pass,
    Uint32 first_slot,
    SDL_GPUTexture *const *storage_textures,
    Uint32 num_bindings);

extern __attribute__((visibility("default"))) void SDL_BindGPUFragmentStorageBuffers(
    SDL_GPURenderPass *render_pass,
    Uint32 first_slot,
    SDL_GPUBuffer *const *storage_buffers,
    Uint32 num_bindings);

extern __attribute__((visibility("default"))) void SDL_DrawGPUIndexedPrimitives(
    SDL_GPURenderPass *render_pass,
    Uint32 num_indices,
    Uint32 num_instances,
    Uint32 first_index,
    Sint32 vertex_offset,
    Uint32 first_instance);

extern __attribute__((visibility("default"))) void SDL_DrawGPUPrimitives(
    SDL_GPURenderPass *render_pass,
    Uint32 num_vertices,
    Uint32 num_instances,
    Uint32 first_vertex,
    Uint32 first_instance);

extern __attribute__((visibility("default"))) void SDL_DrawGPUPrimitivesIndirect(
    SDL_GPURenderPass *render_pass,
    SDL_GPUBuffer *buffer,
    Uint32 offset,
    Uint32 draw_count);

extern __attribute__((visibility("default"))) void SDL_DrawGPUIndexedPrimitivesIndirect(
    SDL_GPURenderPass *render_pass,
    SDL_GPUBuffer *buffer,
    Uint32 offset,
    Uint32 draw_count);

extern __attribute__((visibility("default"))) void SDL_EndGPURenderPass(
    SDL_GPURenderPass *render_pass);

extern __attribute__((visibility("default"))) SDL_GPUComputePass *SDL_BeginGPUComputePass(
    SDL_GPUCommandBuffer *command_buffer,
    const SDL_GPUStorageTextureReadWriteBinding *storage_texture_bindings,
    Uint32 num_storage_texture_bindings,
    const SDL_GPUStorageBufferReadWriteBinding *storage_buffer_bindings,
    Uint32 num_storage_buffer_bindings);

extern __attribute__((visibility("default"))) void SDL_BindGPUComputePipeline(
    SDL_GPUComputePass *compute_pass,
    SDL_GPUComputePipeline *compute_pipeline);

extern __attribute__((visibility("default"))) void SDL_BindGPUComputeSamplers(
    SDL_GPUComputePass *compute_pass,
    Uint32 first_slot,
    const SDL_GPUTextureSamplerBinding *texture_sampler_bindings,
    Uint32 num_bindings);

extern __attribute__((visibility("default"))) void SDL_BindGPUComputeStorageTextures(
    SDL_GPUComputePass *compute_pass,
    Uint32 first_slot,
    SDL_GPUTexture *const *storage_textures,
    Uint32 num_bindings);

extern __attribute__((visibility("default"))) void SDL_BindGPUComputeStorageBuffers(
    SDL_GPUComputePass *compute_pass,
    Uint32 first_slot,
    SDL_GPUBuffer *const *storage_buffers,
    Uint32 num_bindings);

extern __attribute__((visibility("default"))) void SDL_DispatchGPUCompute(
    SDL_GPUComputePass *compute_pass,
    Uint32 groupcount_x,
    Uint32 groupcount_y,
    Uint32 groupcount_z);

extern __attribute__((visibility("default"))) void SDL_DispatchGPUComputeIndirect(
    SDL_GPUComputePass *compute_pass,
    SDL_GPUBuffer *buffer,
    Uint32 offset);

extern __attribute__((visibility("default"))) void SDL_EndGPUComputePass(
    SDL_GPUComputePass *compute_pass);

extern __attribute__((visibility("default"))) void *SDL_MapGPUTransferBuffer(
    SDL_GPUDevice *device,
    SDL_GPUTransferBuffer *transfer_buffer,
    _Bool cycle);

extern __attribute__((visibility("default"))) void SDL_UnmapGPUTransferBuffer(
    SDL_GPUDevice *device,
    SDL_GPUTransferBuffer *transfer_buffer);

extern __attribute__((visibility("default"))) SDL_GPUCopyPass *SDL_BeginGPUCopyPass(
    SDL_GPUCommandBuffer *command_buffer);

extern __attribute__((visibility("default"))) void SDL_UploadToGPUTexture(
    SDL_GPUCopyPass *copy_pass,
    const SDL_GPUTextureTransferInfo *source,
    const SDL_GPUTextureRegion *destination,
    _Bool cycle);

extern __attribute__((visibility("default"))) void SDL_UploadToGPUBuffer(
    SDL_GPUCopyPass *copy_pass,
    const SDL_GPUTransferBufferLocation *source,
    const SDL_GPUBufferRegion *destination,
    _Bool cycle);

extern __attribute__((visibility("default"))) void SDL_CopyGPUTextureToTexture(
    SDL_GPUCopyPass *copy_pass,
    const SDL_GPUTextureLocation *source,
    const SDL_GPUTextureLocation *destination,
    Uint32 w,
    Uint32 h,
    Uint32 d,
    _Bool cycle);

extern __attribute__((visibility("default"))) void SDL_CopyGPUBufferToBuffer(
    SDL_GPUCopyPass *copy_pass,
    const SDL_GPUBufferLocation *source,
    const SDL_GPUBufferLocation *destination,
    Uint32 size,
    _Bool cycle);

extern __attribute__((visibility("default"))) void SDL_DownloadFromGPUTexture(
    SDL_GPUCopyPass *copy_pass,
    const SDL_GPUTextureRegion *source,
    const SDL_GPUTextureTransferInfo *destination);

extern __attribute__((visibility("default"))) void SDL_DownloadFromGPUBuffer(
    SDL_GPUCopyPass *copy_pass,
    const SDL_GPUBufferRegion *source,
    const SDL_GPUTransferBufferLocation *destination);

extern __attribute__((visibility("default"))) void SDL_EndGPUCopyPass(
    SDL_GPUCopyPass *copy_pass);

extern __attribute__((visibility("default"))) void SDL_GenerateMipmapsForGPUTexture(
    SDL_GPUCommandBuffer *command_buffer,
    SDL_GPUTexture *texture);

extern __attribute__((visibility("default"))) void SDL_BlitGPUTexture(
    SDL_GPUCommandBuffer *command_buffer,
    const SDL_GPUBlitInfo *info);

extern __attribute__((visibility("default"))) _Bool SDL_WindowSupportsGPUSwapchainComposition(
    SDL_GPUDevice *device,
    SDL_Window *window,
    SDL_GPUSwapchainComposition swapchain_composition);

extern __attribute__((visibility("default"))) _Bool SDL_WindowSupportsGPUPresentMode(
    SDL_GPUDevice *device,
    SDL_Window *window,
    SDL_GPUPresentMode present_mode);

extern __attribute__((visibility("default"))) _Bool SDL_ClaimWindowForGPUDevice(
    SDL_GPUDevice *device,
    SDL_Window *window);

extern __attribute__((visibility("default"))) void SDL_ReleaseWindowFromGPUDevice(
    SDL_GPUDevice *device,
    SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_SetGPUSwapchainParameters(
    SDL_GPUDevice *device,
    SDL_Window *window,
    SDL_GPUSwapchainComposition swapchain_composition,
    SDL_GPUPresentMode present_mode);

extern __attribute__((visibility("default"))) _Bool SDL_SetGPUAllowedFramesInFlight(
    SDL_GPUDevice *device,
    Uint32 allowed_frames_in_flight);

extern __attribute__((visibility("default"))) SDL_GPUTextureFormat SDL_GetGPUSwapchainTextureFormat(
    SDL_GPUDevice *device,
    SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_AcquireGPUSwapchainTexture(
    SDL_GPUCommandBuffer *command_buffer,
    SDL_Window *window,
    SDL_GPUTexture **swapchain_texture,
    Uint32 *swapchain_texture_width,
    Uint32 *swapchain_texture_height);

extern __attribute__((visibility("default"))) _Bool SDL_WaitForGPUSwapchain(
    SDL_GPUDevice *device,
    SDL_Window *window);

extern __attribute__((visibility("default"))) _Bool SDL_WaitAndAcquireGPUSwapchainTexture(
    SDL_GPUCommandBuffer *command_buffer,
    SDL_Window *window,
    SDL_GPUTexture **swapchain_texture,
    Uint32 *swapchain_texture_width,
    Uint32 *swapchain_texture_height);

extern __attribute__((visibility("default"))) _Bool SDL_SubmitGPUCommandBuffer(
    SDL_GPUCommandBuffer *command_buffer);

extern __attribute__((visibility("default"))) SDL_GPUFence *SDL_SubmitGPUCommandBufferAndAcquireFence(
    SDL_GPUCommandBuffer *command_buffer);

extern __attribute__((visibility("default"))) _Bool SDL_CancelGPUCommandBuffer(
    SDL_GPUCommandBuffer *command_buffer);

extern __attribute__((visibility("default"))) _Bool SDL_WaitForGPUIdle(
    SDL_GPUDevice *device);

extern __attribute__((visibility("default"))) _Bool SDL_WaitForGPUFences(
    SDL_GPUDevice *device,
    _Bool wait_all,
    SDL_GPUFence *const *fences,
    Uint32 num_fences);

extern __attribute__((visibility("default"))) _Bool SDL_QueryGPUFence(
    SDL_GPUDevice *device,
    SDL_GPUFence *fence);

extern __attribute__((visibility("default"))) void SDL_ReleaseGPUFence(
    SDL_GPUDevice *device,
    SDL_GPUFence *fence);

extern __attribute__((visibility("default"))) Uint32 SDL_GPUTextureFormatTexelBlockSize(
    SDL_GPUTextureFormat format);

extern __attribute__((visibility("default"))) _Bool SDL_GPUTextureSupportsFormat(
    SDL_GPUDevice *device,
    SDL_GPUTextureFormat format,
    SDL_GPUTextureType type,
    SDL_GPUTextureUsageFlags usage);

extern __attribute__((visibility("default"))) _Bool SDL_GPUTextureSupportsSampleCount(
    SDL_GPUDevice *device,
    SDL_GPUTextureFormat format,
    SDL_GPUSampleCount sample_count);

extern __attribute__((visibility("default"))) Uint32 SDL_CalculateGPUTextureFormatSize(
    SDL_GPUTextureFormat format,
    Uint32 width,
    Uint32 height,
    Uint32 depth_or_layer_count);

typedef struct SDL_Haptic SDL_Haptic;

typedef struct SDL_HapticDirection
{
    Uint8 type;
    Sint32 dir[3];
} SDL_HapticDirection;

typedef struct SDL_HapticConstant
{

    Uint16 type;
    SDL_HapticDirection direction;

    Uint32 length;
    Uint16 delay;

    Uint16 button;
    Uint16 interval;

    Sint16 level;

    Uint16 attack_length;
    Uint16 attack_level;
    Uint16 fade_length;
    Uint16 fade_level;
} SDL_HapticConstant;

typedef struct SDL_HapticPeriodic
{

    Uint16 type;

    SDL_HapticDirection direction;

    Uint32 length;
    Uint16 delay;

    Uint16 button;
    Uint16 interval;

    Uint16 period;
    Sint16 magnitude;
    Sint16 offset;
    Uint16 phase;

    Uint16 attack_length;
    Uint16 attack_level;
    Uint16 fade_length;
    Uint16 fade_level;
} SDL_HapticPeriodic;

typedef struct SDL_HapticCondition
{

    Uint16 type;

    SDL_HapticDirection direction;

    Uint32 length;
    Uint16 delay;

    Uint16 button;
    Uint16 interval;

    Uint16 right_sat[3];
    Uint16 left_sat[3];
    Sint16 right_coeff[3];
    Sint16 left_coeff[3];
    Uint16 deadband[3];
    Sint16 center[3];
} SDL_HapticCondition;

typedef struct SDL_HapticRamp
{

    Uint16 type;
    SDL_HapticDirection direction;

    Uint32 length;
    Uint16 delay;

    Uint16 button;
    Uint16 interval;

    Sint16 start;
    Sint16 end;

    Uint16 attack_length;
    Uint16 attack_level;
    Uint16 fade_length;
    Uint16 fade_level;
} SDL_HapticRamp;

typedef struct SDL_HapticLeftRight
{

    Uint16 type;

    Uint32 length;

    Uint16 large_magnitude;
    Uint16 small_magnitude;
} SDL_HapticLeftRight;

typedef struct SDL_HapticCustom
{

    Uint16 type;
    SDL_HapticDirection direction;

    Uint32 length;
    Uint16 delay;

    Uint16 button;
    Uint16 interval;

    Uint8 channels;
    Uint16 period;
    Uint16 samples;
    Uint16 *data;

    Uint16 attack_length;
    Uint16 attack_level;
    Uint16 fade_length;
    Uint16 fade_level;
} SDL_HapticCustom;

typedef union SDL_HapticEffect
{

    Uint16 type;
    SDL_HapticConstant constant;
    SDL_HapticPeriodic periodic;
    SDL_HapticCondition condition;
    SDL_HapticRamp ramp;
    SDL_HapticLeftRight leftright;
    SDL_HapticCustom custom;
} SDL_HapticEffect;

typedef Uint32 SDL_HapticID;

extern __attribute__((visibility("default"))) SDL_HapticID *SDL_GetHaptics(int *count);

extern __attribute__((visibility("default"))) const char *SDL_GetHapticNameForID(SDL_HapticID instance_id);

extern __attribute__((visibility("default"))) SDL_Haptic *SDL_OpenHaptic(SDL_HapticID instance_id);

extern __attribute__((visibility("default"))) SDL_Haptic *SDL_GetHapticFromID(SDL_HapticID instance_id);

extern __attribute__((visibility("default"))) SDL_HapticID SDL_GetHapticID(SDL_Haptic *haptic);

extern __attribute__((visibility("default"))) const char *SDL_GetHapticName(SDL_Haptic *haptic);

extern __attribute__((visibility("default"))) _Bool SDL_IsMouseHaptic(void);

extern __attribute__((visibility("default"))) SDL_Haptic *SDL_OpenHapticFromMouse(void);

extern __attribute__((visibility("default"))) _Bool SDL_IsJoystickHaptic(SDL_Joystick *joystick);

extern __attribute__((visibility("default"))) SDL_Haptic *SDL_OpenHapticFromJoystick(SDL_Joystick *joystick);

extern __attribute__((visibility("default"))) void SDL_CloseHaptic(SDL_Haptic *haptic);

extern __attribute__((visibility("default"))) int SDL_GetMaxHapticEffects(SDL_Haptic *haptic);

extern __attribute__((visibility("default"))) int SDL_GetMaxHapticEffectsPlaying(SDL_Haptic *haptic);

extern __attribute__((visibility("default"))) Uint32 SDL_GetHapticFeatures(SDL_Haptic *haptic);

extern __attribute__((visibility("default"))) int SDL_GetNumHapticAxes(SDL_Haptic *haptic);

extern __attribute__((visibility("default"))) _Bool SDL_HapticEffectSupported(SDL_Haptic *haptic, const SDL_HapticEffect *effect);

extern __attribute__((visibility("default"))) int SDL_CreateHapticEffect(SDL_Haptic *haptic, const SDL_HapticEffect *effect);

extern __attribute__((visibility("default"))) _Bool SDL_UpdateHapticEffect(SDL_Haptic *haptic, int effect, const SDL_HapticEffect *data);

extern __attribute__((visibility("default"))) _Bool SDL_RunHapticEffect(SDL_Haptic *haptic, int effect, Uint32 iterations);

extern __attribute__((visibility("default"))) _Bool SDL_StopHapticEffect(SDL_Haptic *haptic, int effect);

extern __attribute__((visibility("default"))) void SDL_DestroyHapticEffect(SDL_Haptic *haptic, int effect);

extern __attribute__((visibility("default"))) _Bool SDL_GetHapticEffectStatus(SDL_Haptic *haptic, int effect);

extern __attribute__((visibility("default"))) _Bool SDL_SetHapticGain(SDL_Haptic *haptic, int gain);

extern __attribute__((visibility("default"))) _Bool SDL_SetHapticAutocenter(SDL_Haptic *haptic, int autocenter);

extern __attribute__((visibility("default"))) _Bool SDL_PauseHaptic(SDL_Haptic *haptic);

extern __attribute__((visibility("default"))) _Bool SDL_ResumeHaptic(SDL_Haptic *haptic);

extern __attribute__((visibility("default"))) _Bool SDL_StopHapticEffects(SDL_Haptic *haptic);

extern __attribute__((visibility("default"))) _Bool SDL_HapticRumbleSupported(SDL_Haptic *haptic);

extern __attribute__((visibility("default"))) _Bool SDL_InitHapticRumble(SDL_Haptic *haptic);

extern __attribute__((visibility("default"))) _Bool SDL_PlayHapticRumble(SDL_Haptic *haptic, float strength, Uint32 length);

extern __attribute__((visibility("default"))) _Bool SDL_StopHapticRumble(SDL_Haptic *haptic);

typedef struct SDL_hid_device SDL_hid_device;

typedef enum SDL_hid_bus_type
{

    SDL_HID_API_BUS_UNKNOWN = 0x00,

    SDL_HID_API_BUS_USB = 0x01,

    SDL_HID_API_BUS_BLUETOOTH = 0x02,

    SDL_HID_API_BUS_I2C = 0x03,

    SDL_HID_API_BUS_SPI = 0x04

} SDL_hid_bus_type;

typedef struct SDL_hid_device_info
{

    char *path;

    unsigned short vendor_id;

    unsigned short product_id;

    wchar_t *serial_number;

    unsigned short release_number;

    wchar_t *manufacturer_string;

    wchar_t *product_string;

    unsigned short usage_page;

    unsigned short usage;

    int interface_number;

    int interface_class;
    int interface_subclass;
    int interface_protocol;

    SDL_hid_bus_type bus_type;

    struct SDL_hid_device_info *next;

} SDL_hid_device_info;

extern __attribute__((visibility("default"))) int SDL_hid_init(void);

extern __attribute__((visibility("default"))) int SDL_hid_exit(void);

extern __attribute__((visibility("default"))) Uint32 SDL_hid_device_change_count(void);

extern __attribute__((visibility("default"))) SDL_hid_device_info *SDL_hid_enumerate(unsigned short vendor_id, unsigned short product_id);

extern __attribute__((visibility("default"))) void SDL_hid_free_enumeration(SDL_hid_device_info *devs);

extern __attribute__((visibility("default"))) SDL_hid_device *SDL_hid_open(unsigned short vendor_id, unsigned short product_id, const wchar_t *serial_number);

extern __attribute__((visibility("default"))) SDL_hid_device *SDL_hid_open_path(const char *path);

extern __attribute__((visibility("default"))) int SDL_hid_write(SDL_hid_device *dev, const unsigned char *data, size_t length);

extern __attribute__((visibility("default"))) int SDL_hid_read_timeout(SDL_hid_device *dev, unsigned char *data, size_t length, int milliseconds);

extern __attribute__((visibility("default"))) int SDL_hid_read(SDL_hid_device *dev, unsigned char *data, size_t length);

extern __attribute__((visibility("default"))) int SDL_hid_set_nonblocking(SDL_hid_device *dev, int nonblock);

extern __attribute__((visibility("default"))) int SDL_hid_send_feature_report(SDL_hid_device *dev, const unsigned char *data, size_t length);

extern __attribute__((visibility("default"))) int SDL_hid_get_feature_report(SDL_hid_device *dev, unsigned char *data, size_t length);

extern __attribute__((visibility("default"))) int SDL_hid_get_input_report(SDL_hid_device *dev, unsigned char *data, size_t length);

extern __attribute__((visibility("default"))) int SDL_hid_close(SDL_hid_device *dev);

extern __attribute__((visibility("default"))) int SDL_hid_get_manufacturer_string(SDL_hid_device *dev, wchar_t *string, size_t maxlen);

extern __attribute__((visibility("default"))) int SDL_hid_get_product_string(SDL_hid_device *dev, wchar_t *string, size_t maxlen);

extern __attribute__((visibility("default"))) int SDL_hid_get_serial_number_string(SDL_hid_device *dev, wchar_t *string, size_t maxlen);

extern __attribute__((visibility("default"))) int SDL_hid_get_indexed_string(SDL_hid_device *dev, int string_index, wchar_t *string, size_t maxlen);

extern __attribute__((visibility("default"))) SDL_hid_device_info *SDL_hid_get_device_info(SDL_hid_device *dev);

extern __attribute__((visibility("default"))) int SDL_hid_get_report_descriptor(SDL_hid_device *dev, unsigned char *buf, size_t buf_size);

extern __attribute__((visibility("default"))) void SDL_hid_ble_scan(_Bool active);

typedef enum SDL_HintPriority
{
    SDL_HINT_DEFAULT,
    SDL_HINT_NORMAL,
    SDL_HINT_OVERRIDE
} SDL_HintPriority;

extern __attribute__((visibility("default"))) _Bool SDL_SetHintWithPriority(const char *name, const char *value, SDL_HintPriority priority);

extern __attribute__((visibility("default"))) _Bool SDL_SetHint(const char *name, const char *value);

extern __attribute__((visibility("default"))) _Bool SDL_ResetHint(const char *name);

extern __attribute__((visibility("default"))) void SDL_ResetHints(void);

extern __attribute__((visibility("default"))) const char *SDL_GetHint(const char *name);

extern __attribute__((visibility("default"))) _Bool SDL_GetHintBoolean(const char *name, _Bool default_value);

typedef void (*SDL_HintCallback)(void *userdata, const char *name, const char *oldValue, const char *newValue);

extern __attribute__((visibility("default"))) _Bool SDL_AddHintCallback(const char *name, SDL_HintCallback callback, void *userdata);

extern __attribute__((visibility("default"))) void SDL_RemoveHintCallback(const char *name,
                                                                          SDL_HintCallback callback,
                                                                          void *userdata);

typedef Uint32 SDL_InitFlags;

typedef enum SDL_AppResult
{
    SDL_APP_CONTINUE,
    SDL_APP_SUCCESS,
    SDL_APP_FAILURE
} SDL_AppResult;

typedef SDL_AppResult (*SDL_AppInit_func)(void **appstate, int argc, char *argv[]);

typedef SDL_AppResult (*SDL_AppIterate_func)(void *appstate);

typedef SDL_AppResult (*SDL_AppEvent_func)(void *appstate, SDL_Event *event);

typedef void (*SDL_AppQuit_func)(void *appstate, SDL_AppResult result);

extern __attribute__((visibility("default"))) _Bool SDL_Init(SDL_InitFlags flags);

extern __attribute__((visibility("default"))) _Bool SDL_InitSubSystem(SDL_InitFlags flags);

extern __attribute__((visibility("default"))) void SDL_QuitSubSystem(SDL_InitFlags flags);

extern __attribute__((visibility("default"))) SDL_InitFlags SDL_WasInit(SDL_InitFlags flags);

extern __attribute__((visibility("default"))) void SDL_Quit(void);

extern __attribute__((visibility("default"))) _Bool SDL_IsMainThread(void);

typedef void (*SDL_MainThreadCallback)(void *userdata);

extern __attribute__((visibility("default"))) _Bool SDL_RunOnMainThread(SDL_MainThreadCallback callback, void *userdata, _Bool wait_complete);

extern __attribute__((visibility("default"))) _Bool SDL_SetAppMetadata(const char *appname, const char *appversion, const char *appidentifier);

extern __attribute__((visibility("default"))) _Bool SDL_SetAppMetadataProperty(const char *name, const char *value);

extern __attribute__((visibility("default"))) const char *SDL_GetAppMetadataProperty(const char *name);

typedef struct SDL_SharedObject SDL_SharedObject;

extern __attribute__((visibility("default"))) SDL_SharedObject *SDL_LoadObject(const char *sofile);

extern __attribute__((visibility("default"))) SDL_FunctionPointer SDL_LoadFunction(SDL_SharedObject *handle, const char *name);

extern __attribute__((visibility("default"))) void SDL_UnloadObject(SDL_SharedObject *handle);

typedef struct SDL_Locale
{
    const char *language;
    const char *country;
} SDL_Locale;

extern __attribute__((visibility("default"))) SDL_Locale **SDL_GetPreferredLocales(int *count);

typedef enum SDL_LogCategory
{
    SDL_LOG_CATEGORY_APPLICATION,
    SDL_LOG_CATEGORY_ERROR,
    SDL_LOG_CATEGORY_ASSERT,
    SDL_LOG_CATEGORY_SYSTEM,
    SDL_LOG_CATEGORY_AUDIO,
    SDL_LOG_CATEGORY_VIDEO,
    SDL_LOG_CATEGORY_RENDER,
    SDL_LOG_CATEGORY_INPUT,
    SDL_LOG_CATEGORY_TEST,
    SDL_LOG_CATEGORY_GPU,

    SDL_LOG_CATEGORY_RESERVED2,
    SDL_LOG_CATEGORY_RESERVED3,
    SDL_LOG_CATEGORY_RESERVED4,
    SDL_LOG_CATEGORY_RESERVED5,
    SDL_LOG_CATEGORY_RESERVED6,
    SDL_LOG_CATEGORY_RESERVED7,
    SDL_LOG_CATEGORY_RESERVED8,
    SDL_LOG_CATEGORY_RESERVED9,
    SDL_LOG_CATEGORY_RESERVED10,

    SDL_LOG_CATEGORY_CUSTOM
} SDL_LogCategory;

typedef enum SDL_LogPriority
{
    SDL_LOG_PRIORITY_INVALID,
    SDL_LOG_PRIORITY_TRACE,
    SDL_LOG_PRIORITY_VERBOSE,
    SDL_LOG_PRIORITY_DEBUG,
    SDL_LOG_PRIORITY_INFO,
    SDL_LOG_PRIORITY_WARN,
    SDL_LOG_PRIORITY_ERROR,
    SDL_LOG_PRIORITY_CRITICAL,
    SDL_LOG_PRIORITY_COUNT
} SDL_LogPriority;

extern __attribute__((visibility("default"))) void SDL_SetLogPriorities(SDL_LogPriority priority);

extern __attribute__((visibility("default"))) void SDL_SetLogPriority(int category, SDL_LogPriority priority);

extern __attribute__((visibility("default"))) SDL_LogPriority SDL_GetLogPriority(int category);

extern __attribute__((visibility("default"))) void SDL_ResetLogPriorities(void);

extern __attribute__((visibility("default"))) _Bool SDL_SetLogPriorityPrefix(SDL_LogPriority priority, const char *prefix);

extern __attribute__((visibility("default"))) void SDL_Log(const char *fmt, ...) __attribute__((format(__printf__, 1, 1 + 1)));

extern __attribute__((visibility("default"))) void SDL_LogTrace(int category, const char *fmt, ...) __attribute__((format(__printf__, 2, 2 + 1)));

extern __attribute__((visibility("default"))) void SDL_LogVerbose(int category, const char *fmt, ...) __attribute__((format(__printf__, 2, 2 + 1)));

extern __attribute__((visibility("default"))) void SDL_LogDebug(int category, const char *fmt, ...) __attribute__((format(__printf__, 2, 2 + 1)));

extern __attribute__((visibility("default"))) void SDL_LogInfo(int category, const char *fmt, ...) __attribute__((format(__printf__, 2, 2 + 1)));

extern __attribute__((visibility("default"))) void SDL_LogWarn(int category, const char *fmt, ...) __attribute__((format(__printf__, 2, 2 + 1)));

extern __attribute__((visibility("default"))) void SDL_LogError(int category, const char *fmt, ...) __attribute__((format(__printf__, 2, 2 + 1)));

extern __attribute__((visibility("default"))) void SDL_LogCritical(int category, const char *fmt, ...) __attribute__((format(__printf__, 2, 2 + 1)));

extern __attribute__((visibility("default"))) void SDL_LogMessage(int category,
                                                                  SDL_LogPriority priority,
                                                                  const char *fmt, ...) __attribute__((format(__printf__, 3, 3 + 1)));

extern __attribute__((visibility("default"))) void SDL_LogMessageV(int category,
                                                                   SDL_LogPriority priority,
                                                                   const char *fmt, va_list ap) __attribute__((format(__printf__, 3, 0)));

typedef void (*SDL_LogOutputFunction)(void *userdata, int category, SDL_LogPriority priority, const char *message);

extern __attribute__((visibility("default"))) SDL_LogOutputFunction SDL_GetDefaultLogOutputFunction(void);

extern __attribute__((visibility("default"))) void SDL_GetLogOutputFunction(SDL_LogOutputFunction *callback, void **userdata);

extern __attribute__((visibility("default"))) void SDL_SetLogOutputFunction(SDL_LogOutputFunction callback, void *userdata);

typedef Uint32 SDL_MessageBoxFlags;

typedef Uint32 SDL_MessageBoxButtonFlags;

typedef struct SDL_MessageBoxButtonData
{
    SDL_MessageBoxButtonFlags flags;
    int buttonID;
    const char *text;
} SDL_MessageBoxButtonData;

typedef struct SDL_MessageBoxColor
{
    Uint8 r, g, b;
} SDL_MessageBoxColor;

typedef enum SDL_MessageBoxColorType
{
    SDL_MESSAGEBOX_COLOR_BACKGROUND,
    SDL_MESSAGEBOX_COLOR_TEXT,
    SDL_MESSAGEBOX_COLOR_BUTTON_BORDER,
    SDL_MESSAGEBOX_COLOR_BUTTON_BACKGROUND,
    SDL_MESSAGEBOX_COLOR_BUTTON_SELECTED,
    SDL_MESSAGEBOX_COLOR_COUNT
} SDL_MessageBoxColorType;

typedef struct SDL_MessageBoxColorScheme
{
    SDL_MessageBoxColor colors[SDL_MESSAGEBOX_COLOR_COUNT];
} SDL_MessageBoxColorScheme;

typedef struct SDL_MessageBoxData
{
    SDL_MessageBoxFlags flags;
    SDL_Window *window;
    const char *title;
    const char *message;

    int numbuttons;
    const SDL_MessageBoxButtonData *buttons;

    const SDL_MessageBoxColorScheme *colorScheme;
} SDL_MessageBoxData;

extern __attribute__((visibility("default"))) _Bool SDL_ShowMessageBox(const SDL_MessageBoxData *messageboxdata, int *buttonid);

extern __attribute__((visibility("default"))) _Bool SDL_ShowSimpleMessageBox(SDL_MessageBoxFlags flags, const char *title, const char *message, SDL_Window *window);

typedef void *SDL_MetalView;

extern __attribute__((visibility("default"))) SDL_MetalView SDL_Metal_CreateView(SDL_Window *window);

extern __attribute__((visibility("default"))) void SDL_Metal_DestroyView(SDL_MetalView view);

extern __attribute__((visibility("default"))) void *SDL_Metal_GetLayer(SDL_MetalView view);

extern __attribute__((visibility("default"))) _Bool SDL_OpenURL(const char *url);

extern __attribute__((visibility("default"))) const char *SDL_GetPlatform(void);

typedef struct SDL_Process SDL_Process;

extern __attribute__((visibility("default"))) SDL_Process *SDL_CreateProcess(const char *const *args, _Bool pipe_stdio);

typedef enum SDL_ProcessIO
{
    SDL_PROCESS_STDIO_INHERITED,
    SDL_PROCESS_STDIO_NULL,
    SDL_PROCESS_STDIO_APP,
    SDL_PROCESS_STDIO_REDIRECT
} SDL_ProcessIO;

extern __attribute__((visibility("default"))) SDL_Process *SDL_CreateProcessWithProperties(SDL_PropertiesID props);

extern __attribute__((visibility("default"))) SDL_PropertiesID SDL_GetProcessProperties(SDL_Process *process);

extern __attribute__((visibility("default"))) void *SDL_ReadProcess(SDL_Process *process, size_t *datasize, int *exitcode);

extern __attribute__((visibility("default"))) SDL_IOStream *SDL_GetProcessInput(SDL_Process *process);

extern __attribute__((visibility("default"))) SDL_IOStream *SDL_GetProcessOutput(SDL_Process *process);

extern __attribute__((visibility("default"))) _Bool SDL_KillProcess(SDL_Process *process, _Bool force);

extern __attribute__((visibility("default"))) _Bool SDL_WaitProcess(SDL_Process *process, _Bool block, int *exitcode);

extern __attribute__((visibility("default"))) void SDL_DestroyProcess(SDL_Process *process);

typedef struct SDL_Vertex
{
    SDL_FPoint position;
    SDL_FColor color;
    SDL_FPoint tex_coord;
} SDL_Vertex;

typedef enum SDL_TextureAccess
{
    SDL_TEXTUREACCESS_STATIC,
    SDL_TEXTUREACCESS_STREAMING,
    SDL_TEXTUREACCESS_TARGET
} SDL_TextureAccess;

typedef enum SDL_RendererLogicalPresentation
{
    SDL_LOGICAL_PRESENTATION_DISABLED,
    SDL_LOGICAL_PRESENTATION_STRETCH,
    SDL_LOGICAL_PRESENTATION_LETTERBOX,
    SDL_LOGICAL_PRESENTATION_OVERSCAN,
    SDL_LOGICAL_PRESENTATION_INTEGER_SCALE
} SDL_RendererLogicalPresentation;

typedef struct SDL_Renderer SDL_Renderer;

struct SDL_Texture
{
    SDL_PixelFormat format;
    int w;
    int h;

    int refcount;
};

typedef struct SDL_Texture SDL_Texture;

extern __attribute__((visibility("default"))) int SDL_GetNumRenderDrivers(void);

extern __attribute__((visibility("default"))) const char *SDL_GetRenderDriver(int index);

extern __attribute__((visibility("default"))) _Bool SDL_CreateWindowAndRenderer(const char *title, int width, int height, SDL_WindowFlags window_flags, SDL_Window **window, SDL_Renderer **renderer);

extern __attribute__((visibility("default"))) SDL_Renderer *SDL_CreateRenderer(SDL_Window *window, const char *name);

extern __attribute__((visibility("default"))) SDL_Renderer *SDL_CreateRendererWithProperties(SDL_PropertiesID props);

extern __attribute__((visibility("default"))) SDL_Renderer *SDL_CreateSoftwareRenderer(SDL_Surface *surface);

extern __attribute__((visibility("default"))) SDL_Renderer *SDL_GetRenderer(SDL_Window *window);

extern __attribute__((visibility("default"))) SDL_Window *SDL_GetRenderWindow(SDL_Renderer *renderer);

extern __attribute__((visibility("default"))) const char *SDL_GetRendererName(SDL_Renderer *renderer);

extern __attribute__((visibility("default"))) SDL_PropertiesID SDL_GetRendererProperties(SDL_Renderer *renderer);

extern __attribute__((visibility("default"))) _Bool SDL_GetRenderOutputSize(SDL_Renderer *renderer, int *w, int *h);

extern __attribute__((visibility("default"))) _Bool SDL_GetCurrentRenderOutputSize(SDL_Renderer *renderer, int *w, int *h);

extern __attribute__((visibility("default"))) SDL_Texture *SDL_CreateTexture(SDL_Renderer *renderer, SDL_PixelFormat format, SDL_TextureAccess access, int w, int h);

extern __attribute__((visibility("default"))) SDL_Texture *SDL_CreateTextureFromSurface(SDL_Renderer *renderer, SDL_Surface *surface);

extern __attribute__((visibility("default"))) SDL_Texture *SDL_CreateTextureWithProperties(SDL_Renderer *renderer, SDL_PropertiesID props);

extern __attribute__((visibility("default"))) SDL_PropertiesID SDL_GetTextureProperties(SDL_Texture *texture);

extern __attribute__((visibility("default"))) SDL_Renderer *SDL_GetRendererFromTexture(SDL_Texture *texture);

extern __attribute__((visibility("default"))) _Bool SDL_GetTextureSize(SDL_Texture *texture, float *w, float *h);

extern __attribute__((visibility("default"))) _Bool SDL_SetTextureColorMod(SDL_Texture *texture, Uint8 r, Uint8 g, Uint8 b);

extern __attribute__((visibility("default"))) _Bool SDL_SetTextureColorModFloat(SDL_Texture *texture, float r, float g, float b);

extern __attribute__((visibility("default"))) _Bool SDL_GetTextureColorMod(SDL_Texture *texture, Uint8 *r, Uint8 *g, Uint8 *b);

extern __attribute__((visibility("default"))) _Bool SDL_GetTextureColorModFloat(SDL_Texture *texture, float *r, float *g, float *b);

extern __attribute__((visibility("default"))) _Bool SDL_SetTextureAlphaMod(SDL_Texture *texture, Uint8 alpha);

extern __attribute__((visibility("default"))) _Bool SDL_SetTextureAlphaModFloat(SDL_Texture *texture, float alpha);

extern __attribute__((visibility("default"))) _Bool SDL_GetTextureAlphaMod(SDL_Texture *texture, Uint8 *alpha);

extern __attribute__((visibility("default"))) _Bool SDL_GetTextureAlphaModFloat(SDL_Texture *texture, float *alpha);

extern __attribute__((visibility("default"))) _Bool SDL_SetTextureBlendMode(SDL_Texture *texture, SDL_BlendMode blendMode);

extern __attribute__((visibility("default"))) _Bool SDL_GetTextureBlendMode(SDL_Texture *texture, SDL_BlendMode *blendMode);

extern __attribute__((visibility("default"))) _Bool SDL_SetTextureScaleMode(SDL_Texture *texture, SDL_ScaleMode scaleMode);

extern __attribute__((visibility("default"))) _Bool SDL_GetTextureScaleMode(SDL_Texture *texture, SDL_ScaleMode *scaleMode);

extern __attribute__((visibility("default"))) _Bool SDL_UpdateTexture(SDL_Texture *texture, const SDL_Rect *rect, const void *pixels, int pitch);

extern __attribute__((visibility("default"))) _Bool SDL_UpdateYUVTexture(SDL_Texture *texture,
                                                                         const SDL_Rect *rect,
                                                                         const Uint8 *Yplane, int Ypitch,
                                                                         const Uint8 *Uplane, int Upitch,
                                                                         const Uint8 *Vplane, int Vpitch);

extern __attribute__((visibility("default"))) _Bool SDL_UpdateNVTexture(SDL_Texture *texture,
                                                                        const SDL_Rect *rect,
                                                                        const Uint8 *Yplane, int Ypitch,
                                                                        const Uint8 *UVplane, int UVpitch);

extern __attribute__((visibility("default"))) _Bool SDL_LockTexture(SDL_Texture *texture,
                                                                    const SDL_Rect *rect,
                                                                    void **pixels, int *pitch);

extern __attribute__((visibility("default"))) _Bool SDL_LockTextureToSurface(SDL_Texture *texture, const SDL_Rect *rect, SDL_Surface **surface);

extern __attribute__((visibility("default"))) void SDL_UnlockTexture(SDL_Texture *texture);

extern __attribute__((visibility("default"))) _Bool SDL_SetRenderTarget(SDL_Renderer *renderer, SDL_Texture *texture);

extern __attribute__((visibility("default"))) SDL_Texture *SDL_GetRenderTarget(SDL_Renderer *renderer);

extern __attribute__((visibility("default"))) _Bool SDL_SetRenderLogicalPresentation(SDL_Renderer *renderer, int w, int h, SDL_RendererLogicalPresentation mode);

extern __attribute__((visibility("default"))) _Bool SDL_GetRenderLogicalPresentation(SDL_Renderer *renderer, int *w, int *h, SDL_RendererLogicalPresentation *mode);

extern __attribute__((visibility("default"))) _Bool SDL_GetRenderLogicalPresentationRect(SDL_Renderer *renderer, SDL_FRect *rect);

extern __attribute__((visibility("default"))) _Bool SDL_RenderCoordinatesFromWindow(SDL_Renderer *renderer, float window_x, float window_y, float *x, float *y);

extern __attribute__((visibility("default"))) _Bool SDL_RenderCoordinatesToWindow(SDL_Renderer *renderer, float x, float y, float *window_x, float *window_y);

extern __attribute__((visibility("default"))) _Bool SDL_ConvertEventToRenderCoordinates(SDL_Renderer *renderer, SDL_Event *event);

extern __attribute__((visibility("default"))) _Bool SDL_SetRenderViewport(SDL_Renderer *renderer, const SDL_Rect *rect);

extern __attribute__((visibility("default"))) _Bool SDL_GetRenderViewport(SDL_Renderer *renderer, SDL_Rect *rect);

extern __attribute__((visibility("default"))) _Bool SDL_RenderViewportSet(SDL_Renderer *renderer);

extern __attribute__((visibility("default"))) _Bool SDL_GetRenderSafeArea(SDL_Renderer *renderer, SDL_Rect *rect);

extern __attribute__((visibility("default"))) _Bool SDL_SetRenderClipRect(SDL_Renderer *renderer, const SDL_Rect *rect);

extern __attribute__((visibility("default"))) _Bool SDL_GetRenderClipRect(SDL_Renderer *renderer, SDL_Rect *rect);

extern __attribute__((visibility("default"))) _Bool SDL_RenderClipEnabled(SDL_Renderer *renderer);

extern __attribute__((visibility("default"))) _Bool SDL_SetRenderScale(SDL_Renderer *renderer, float scaleX, float scaleY);

extern __attribute__((visibility("default"))) _Bool SDL_GetRenderScale(SDL_Renderer *renderer, float *scaleX, float *scaleY);

extern __attribute__((visibility("default"))) _Bool SDL_SetRenderDrawColor(SDL_Renderer *renderer, Uint8 r, Uint8 g, Uint8 b, Uint8 a);

extern __attribute__((visibility("default"))) _Bool SDL_SetRenderDrawColorFloat(SDL_Renderer *renderer, float r, float g, float b, float a);

extern __attribute__((visibility("default"))) _Bool SDL_GetRenderDrawColor(SDL_Renderer *renderer, Uint8 *r, Uint8 *g, Uint8 *b, Uint8 *a);

extern __attribute__((visibility("default"))) _Bool SDL_GetRenderDrawColorFloat(SDL_Renderer *renderer, float *r, float *g, float *b, float *a);

extern __attribute__((visibility("default"))) _Bool SDL_SetRenderColorScale(SDL_Renderer *renderer, float scale);

extern __attribute__((visibility("default"))) _Bool SDL_GetRenderColorScale(SDL_Renderer *renderer, float *scale);

extern __attribute__((visibility("default"))) _Bool SDL_SetRenderDrawBlendMode(SDL_Renderer *renderer, SDL_BlendMode blendMode);

extern __attribute__((visibility("default"))) _Bool SDL_GetRenderDrawBlendMode(SDL_Renderer *renderer, SDL_BlendMode *blendMode);

extern __attribute__((visibility("default"))) _Bool SDL_RenderClear(SDL_Renderer *renderer);

extern __attribute__((visibility("default"))) _Bool SDL_RenderPoint(SDL_Renderer *renderer, float x, float y);

extern __attribute__((visibility("default"))) _Bool SDL_RenderPoints(SDL_Renderer *renderer, const SDL_FPoint *points, int count);

extern __attribute__((visibility("default"))) _Bool SDL_RenderLine(SDL_Renderer *renderer, float x1, float y1, float x2, float y2);

extern __attribute__((visibility("default"))) _Bool SDL_RenderLines(SDL_Renderer *renderer, const SDL_FPoint *points, int count);

extern __attribute__((visibility("default"))) _Bool SDL_RenderRect(SDL_Renderer *renderer, const SDL_FRect *rect);

extern __attribute__((visibility("default"))) _Bool SDL_RenderRects(SDL_Renderer *renderer, const SDL_FRect *rects, int count);

extern __attribute__((visibility("default"))) _Bool SDL_RenderFillRect(SDL_Renderer *renderer, const SDL_FRect *rect);

extern __attribute__((visibility("default"))) _Bool SDL_RenderFillRects(SDL_Renderer *renderer, const SDL_FRect *rects, int count);

extern __attribute__((visibility("default"))) _Bool SDL_RenderTexture(SDL_Renderer *renderer, SDL_Texture *texture, const SDL_FRect *srcrect, const SDL_FRect *dstrect);

extern __attribute__((visibility("default"))) _Bool SDL_RenderTextureRotated(SDL_Renderer *renderer, SDL_Texture *texture,
                                                                             const SDL_FRect *srcrect, const SDL_FRect *dstrect,
                                                                             double angle, const SDL_FPoint *center,
                                                                             SDL_FlipMode flip);

extern __attribute__((visibility("default"))) _Bool SDL_RenderTextureAffine(SDL_Renderer *renderer, SDL_Texture *texture,
                                                                            const SDL_FRect *srcrect, const SDL_FPoint *origin,
                                                                            const SDL_FPoint *right, const SDL_FPoint *down);

extern __attribute__((visibility("default"))) _Bool SDL_RenderTextureTiled(SDL_Renderer *renderer, SDL_Texture *texture, const SDL_FRect *srcrect, float scale, const SDL_FRect *dstrect);

extern __attribute__((visibility("default"))) _Bool SDL_RenderTexture9Grid(SDL_Renderer *renderer, SDL_Texture *texture, const SDL_FRect *srcrect, float left_width, float right_width, float top_height, float bottom_height, float scale, const SDL_FRect *dstrect);

extern __attribute__((visibility("default"))) _Bool SDL_RenderGeometry(SDL_Renderer *renderer,
                                                                       SDL_Texture *texture,
                                                                       const SDL_Vertex *vertices, int num_vertices,
                                                                       const int *indices, int num_indices);

extern __attribute__((visibility("default"))) _Bool SDL_RenderGeometryRaw(SDL_Renderer *renderer,
                                                                          SDL_Texture *texture,
                                                                          const float *xy, int xy_stride,
                                                                          const SDL_FColor *color, int color_stride,
                                                                          const float *uv, int uv_stride,
                                                                          int num_vertices,
                                                                          const void *indices, int num_indices, int size_indices);

extern __attribute__((visibility("default"))) SDL_Surface *SDL_RenderReadPixels(SDL_Renderer *renderer, const SDL_Rect *rect);

extern __attribute__((visibility("default"))) _Bool SDL_RenderPresent(SDL_Renderer *renderer);

extern __attribute__((visibility("default"))) void SDL_DestroyTexture(SDL_Texture *texture);

extern __attribute__((visibility("default"))) void SDL_DestroyRenderer(SDL_Renderer *renderer);

extern __attribute__((visibility("default"))) _Bool SDL_FlushRenderer(SDL_Renderer *renderer);

extern __attribute__((visibility("default"))) void *SDL_GetRenderMetalLayer(SDL_Renderer *renderer);

extern __attribute__((visibility("default"))) void *SDL_GetRenderMetalCommandEncoder(SDL_Renderer *renderer);

extern __attribute__((visibility("default"))) _Bool SDL_AddVulkanRenderSemaphores(SDL_Renderer *renderer, Uint32 wait_stage_mask, Sint64 wait_semaphore, Sint64 signal_semaphore);

extern __attribute__((visibility("default"))) _Bool SDL_SetRenderVSync(SDL_Renderer *renderer, int vsync);

extern __attribute__((visibility("default"))) _Bool SDL_GetRenderVSync(SDL_Renderer *renderer, int *vsync);

extern __attribute__((visibility("default"))) _Bool SDL_RenderDebugText(SDL_Renderer *renderer, float x, float y, const char *str);

extern __attribute__((visibility("default"))) _Bool SDL_RenderDebugTextFormat(SDL_Renderer *renderer, float x, float y, const char *fmt, ...) __attribute__((format(__printf__, 4, 4 + 1)));

typedef struct SDL_StorageInterface
{

    Uint32 version;

    _Bool (*close)(void *userdata);

    _Bool (*ready)(void *userdata);

    _Bool (*enumerate)(void *userdata, const char *path, SDL_EnumerateDirectoryCallback callback, void *callback_userdata);

    _Bool (*info)(void *userdata, const char *path, SDL_PathInfo *info);

    _Bool (*read_file)(void *userdata, const char *path, void *destination, Uint64 length);

    _Bool (*write_file)(void *userdata, const char *path, const void *source, Uint64 length);

    _Bool (*mkdir)(void *userdata, const char *path);

    _Bool (*remove)(void *userdata, const char *path);

    _Bool (*rename)(void *userdata, const char *oldpath, const char *newpath);

    _Bool (*copy)(void *userdata, const char *oldpath, const char *newpath);

    Uint64 (*space_remaining)(void *userdata);
} SDL_StorageInterface;

_Static_assert((sizeof(void *) == 4 && sizeof(SDL_StorageInterface) == 48) || (sizeof(void *) == 8 && sizeof(SDL_StorageInterface) == 96), "(sizeof(void *) == 4 && sizeof(SDL_StorageInterface) == 48) || (sizeof(void *) == 8 && sizeof(SDL_StorageInterface) == 96)");

typedef struct SDL_Storage SDL_Storage;

extern __attribute__((visibility("default"))) SDL_Storage *SDL_OpenTitleStorage(const char *override, SDL_PropertiesID props);

extern __attribute__((visibility("default"))) SDL_Storage *SDL_OpenUserStorage(const char *org, const char *app, SDL_PropertiesID props);

extern __attribute__((visibility("default"))) SDL_Storage *SDL_OpenFileStorage(const char *path);

extern __attribute__((visibility("default"))) SDL_Storage *SDL_OpenStorage(const SDL_StorageInterface *iface, void *userdata);

extern __attribute__((visibility("default"))) _Bool SDL_CloseStorage(SDL_Storage *storage);

extern __attribute__((visibility("default"))) _Bool SDL_StorageReady(SDL_Storage *storage);

extern __attribute__((visibility("default"))) _Bool SDL_GetStorageFileSize(SDL_Storage *storage, const char *path, Uint64 *length);

extern __attribute__((visibility("default"))) _Bool SDL_ReadStorageFile(SDL_Storage *storage, const char *path, void *destination, Uint64 length);

extern __attribute__((visibility("default"))) _Bool SDL_WriteStorageFile(SDL_Storage *storage, const char *path, const void *source, Uint64 length);

extern __attribute__((visibility("default"))) _Bool SDL_CreateStorageDirectory(SDL_Storage *storage, const char *path);

extern __attribute__((visibility("default"))) _Bool SDL_EnumerateStorageDirectory(SDL_Storage *storage, const char *path, SDL_EnumerateDirectoryCallback callback, void *userdata);

extern __attribute__((visibility("default"))) _Bool SDL_RemoveStoragePath(SDL_Storage *storage, const char *path);

extern __attribute__((visibility("default"))) _Bool SDL_RenameStoragePath(SDL_Storage *storage, const char *oldpath, const char *newpath);

extern __attribute__((visibility("default"))) _Bool SDL_CopyStorageFile(SDL_Storage *storage, const char *oldpath, const char *newpath);

extern __attribute__((visibility("default"))) _Bool SDL_GetStoragePathInfo(SDL_Storage *storage, const char *path, SDL_PathInfo *info);

extern __attribute__((visibility("default"))) Uint64 SDL_GetStorageSpaceRemaining(SDL_Storage *storage);

extern __attribute__((visibility("default"))) char **SDL_GlobStorageDirectory(SDL_Storage *storage, const char *path, const char *pattern, SDL_GlobFlags flags, int *count);

typedef union _XEvent XEvent;

typedef _Bool (*SDL_X11EventHook)(void *userdata, XEvent *xevent);

extern __attribute__((visibility("default"))) void SDL_SetX11EventHook(SDL_X11EventHook callback, void *userdata);

extern __attribute__((visibility("default"))) _Bool SDL_SetLinuxThreadPriority(Sint64 threadID, int priority);

extern __attribute__((visibility("default"))) _Bool SDL_SetLinuxThreadPriorityAndPolicy(Sint64 threadID, int sdlPriority, int schedPolicy);

extern __attribute__((visibility("default"))) _Bool SDL_IsTablet(void);

extern __attribute__((visibility("default"))) _Bool SDL_IsTV(void);

typedef enum SDL_Sandbox
{
    SDL_SANDBOX_NONE = 0,
    SDL_SANDBOX_UNKNOWN_CONTAINER,
    SDL_SANDBOX_FLATPAK,
    SDL_SANDBOX_SNAP,
    SDL_SANDBOX_MACOS
} SDL_Sandbox;

extern __attribute__((visibility("default"))) SDL_Sandbox SDL_GetSandbox(void);

extern __attribute__((visibility("default"))) void SDL_OnApplicationWillTerminate(void);

extern __attribute__((visibility("default"))) void SDL_OnApplicationDidReceiveMemoryWarning(void);

extern __attribute__((visibility("default"))) void SDL_OnApplicationWillEnterBackground(void);

extern __attribute__((visibility("default"))) void SDL_OnApplicationDidEnterBackground(void);

extern __attribute__((visibility("default"))) void SDL_OnApplicationWillEnterForeground(void);

extern __attribute__((visibility("default"))) void SDL_OnApplicationDidEnterForeground(void);

typedef struct SDL_DateTime
{
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
    int nanosecond;
    int day_of_week;
    int utc_offset;
} SDL_DateTime;

typedef enum SDL_DateFormat
{
    SDL_DATE_FORMAT_YYYYMMDD = 0,
    SDL_DATE_FORMAT_DDMMYYYY = 1,
    SDL_DATE_FORMAT_MMDDYYYY = 2
} SDL_DateFormat;

typedef enum SDL_TimeFormat
{
    SDL_TIME_FORMAT_24HR = 0,
    SDL_TIME_FORMAT_12HR = 1
} SDL_TimeFormat;

extern __attribute__((visibility("default"))) _Bool SDL_GetDateTimeLocalePreferences(SDL_DateFormat *dateFormat, SDL_TimeFormat *timeFormat);

extern __attribute__((visibility("default"))) _Bool SDL_GetCurrentTime(SDL_Time *ticks);

extern __attribute__((visibility("default"))) _Bool SDL_TimeToDateTime(SDL_Time ticks, SDL_DateTime *dt, _Bool localTime);

extern __attribute__((visibility("default"))) _Bool SDL_DateTimeToTime(const SDL_DateTime *dt, SDL_Time *ticks);

extern __attribute__((visibility("default"))) void SDL_TimeToWindows(SDL_Time ticks, Uint32 *dwLowDateTime, Uint32 *dwHighDateTime);

extern __attribute__((visibility("default"))) SDL_Time SDL_TimeFromWindows(Uint32 dwLowDateTime, Uint32 dwHighDateTime);

extern __attribute__((visibility("default"))) int SDL_GetDaysInMonth(int year, int month);

extern __attribute__((visibility("default"))) int SDL_GetDayOfYear(int year, int month, int day);

extern __attribute__((visibility("default"))) int SDL_GetDayOfWeek(int year, int month, int day);

extern __attribute__((visibility("default"))) Uint64 SDL_GetTicks(void);

extern __attribute__((visibility("default"))) Uint64 SDL_GetTicksNS(void);

extern __attribute__((visibility("default"))) Uint64 SDL_GetPerformanceCounter(void);

extern __attribute__((visibility("default"))) Uint64 SDL_GetPerformanceFrequency(void);

extern __attribute__((visibility("default"))) void SDL_Delay(Uint32 ms);

extern __attribute__((visibility("default"))) void SDL_DelayNS(Uint64 ns);

extern __attribute__((visibility("default"))) void SDL_DelayPrecise(Uint64 ns);

typedef Uint32 SDL_TimerID;

typedef Uint32 (*SDL_TimerCallback)(void *userdata, SDL_TimerID timerID, Uint32 interval);

extern __attribute__((visibility("default"))) SDL_TimerID SDL_AddTimer(Uint32 interval, SDL_TimerCallback callback, void *userdata);

typedef Uint64 (*SDL_NSTimerCallback)(void *userdata, SDL_TimerID timerID, Uint64 interval);

extern __attribute__((visibility("default"))) SDL_TimerID SDL_AddTimerNS(Uint64 interval, SDL_NSTimerCallback callback, void *userdata);

extern __attribute__((visibility("default"))) _Bool SDL_RemoveTimer(SDL_TimerID id);

typedef struct SDL_Tray SDL_Tray;

typedef struct SDL_TrayMenu SDL_TrayMenu;

typedef struct SDL_TrayEntry SDL_TrayEntry;

typedef Uint32 SDL_TrayEntryFlags;

typedef void (*SDL_TrayCallback)(void *userdata, SDL_TrayEntry *entry);

extern __attribute__((visibility("default"))) SDL_Tray *SDL_CreateTray(SDL_Surface *icon, const char *tooltip);

extern __attribute__((visibility("default"))) void SDL_SetTrayIcon(SDL_Tray *tray, SDL_Surface *icon);

extern __attribute__((visibility("default"))) void SDL_SetTrayTooltip(SDL_Tray *tray, const char *tooltip);

extern __attribute__((visibility("default"))) SDL_TrayMenu *SDL_CreateTrayMenu(SDL_Tray *tray);

extern __attribute__((visibility("default"))) SDL_TrayMenu *SDL_CreateTraySubmenu(SDL_TrayEntry *entry);

extern __attribute__((visibility("default"))) SDL_TrayMenu *SDL_GetTrayMenu(SDL_Tray *tray);

extern __attribute__((visibility("default"))) SDL_TrayMenu *SDL_GetTraySubmenu(SDL_TrayEntry *entry);

extern __attribute__((visibility("default"))) const SDL_TrayEntry **SDL_GetTrayEntries(SDL_TrayMenu *menu, int *count);

extern __attribute__((visibility("default"))) void SDL_RemoveTrayEntry(SDL_TrayEntry *entry);

extern __attribute__((visibility("default"))) SDL_TrayEntry *SDL_InsertTrayEntryAt(SDL_TrayMenu *menu, int pos, const char *label, SDL_TrayEntryFlags flags);

extern __attribute__((visibility("default"))) void SDL_SetTrayEntryLabel(SDL_TrayEntry *entry, const char *label);

extern __attribute__((visibility("default"))) const char *SDL_GetTrayEntryLabel(SDL_TrayEntry *entry);

extern __attribute__((visibility("default"))) void SDL_SetTrayEntryChecked(SDL_TrayEntry *entry, _Bool checked);

extern __attribute__((visibility("default"))) _Bool SDL_GetTrayEntryChecked(SDL_TrayEntry *entry);

extern __attribute__((visibility("default"))) void SDL_SetTrayEntryEnabled(SDL_TrayEntry *entry, _Bool enabled);

extern __attribute__((visibility("default"))) _Bool SDL_GetTrayEntryEnabled(SDL_TrayEntry *entry);

extern __attribute__((visibility("default"))) void SDL_SetTrayEntryCallback(SDL_TrayEntry *entry, SDL_TrayCallback callback, void *userdata);

extern __attribute__((visibility("default"))) void SDL_ClickTrayEntry(SDL_TrayEntry *entry);

extern __attribute__((visibility("default"))) void SDL_DestroyTray(SDL_Tray *tray);

extern __attribute__((visibility("default"))) SDL_TrayMenu *SDL_GetTrayEntryParent(SDL_TrayEntry *entry);

extern __attribute__((visibility("default"))) SDL_TrayEntry *SDL_GetTrayMenuParentEntry(SDL_TrayMenu *menu);

extern __attribute__((visibility("default"))) SDL_Tray *SDL_GetTrayMenuParentTray(SDL_TrayMenu *menu);

extern __attribute__((visibility("default"))) void SDL_UpdateTrays(void);

extern __attribute__((visibility("default"))) int SDL_GetVersion(void);

extern __attribute__((visibility("default"))) const char *SDL_GetRevision(void);

extern __attribute__((visibility("default"))) int TTF_Version(void);

extern __attribute__((visibility("default"))) void TTF_GetFreeTypeVersion(int *major, int *minor, int *patch);

extern __attribute__((visibility("default"))) void TTF_GetHarfBuzzVersion(int *major, int *minor, int *patch);

typedef struct TTF_Font TTF_Font;

extern __attribute__((visibility("default"))) _Bool TTF_Init(void);

extern __attribute__((visibility("default"))) TTF_Font *TTF_OpenFont(const char *file, float ptsize);

extern __attribute__((visibility("default"))) TTF_Font *TTF_OpenFontIO(SDL_IOStream *src, _Bool closeio, float ptsize);

extern __attribute__((visibility("default"))) TTF_Font *TTF_OpenFontWithProperties(SDL_PropertiesID props);

extern __attribute__((visibility("default"))) TTF_Font *TTF_CopyFont(TTF_Font *existing_font);

extern __attribute__((visibility("default"))) SDL_PropertiesID TTF_GetFontProperties(TTF_Font *font);

extern __attribute__((visibility("default"))) Uint32 TTF_GetFontGeneration(TTF_Font *font);

extern __attribute__((visibility("default"))) _Bool TTF_AddFallbackFont(TTF_Font *font, TTF_Font *fallback);

extern __attribute__((visibility("default"))) void TTF_RemoveFallbackFont(TTF_Font *font, TTF_Font *fallback);

extern __attribute__((visibility("default"))) void TTF_ClearFallbackFonts(TTF_Font *font);

extern __attribute__((visibility("default"))) _Bool TTF_SetFontSize(TTF_Font *font, float ptsize);

extern __attribute__((visibility("default"))) _Bool TTF_SetFontSizeDPI(TTF_Font *font, float ptsize, int hdpi, int vdpi);

extern __attribute__((visibility("default"))) float TTF_GetFontSize(TTF_Font *font);

extern __attribute__((visibility("default"))) _Bool TTF_GetFontDPI(TTF_Font *font, int *hdpi, int *vdpi);

typedef Uint32 TTF_FontStyleFlags;

extern __attribute__((visibility("default"))) void TTF_SetFontStyle(TTF_Font *font, TTF_FontStyleFlags style);

extern __attribute__((visibility("default"))) TTF_FontStyleFlags TTF_GetFontStyle(const TTF_Font *font);

extern __attribute__((visibility("default"))) _Bool TTF_SetFontOutline(TTF_Font *font, int outline);

extern __attribute__((visibility("default"))) int TTF_GetFontOutline(const TTF_Font *font);

typedef enum TTF_HintingFlags
{
    TTF_HINTING_INVALID = -1,
    TTF_HINTING_NORMAL,
    TTF_HINTING_LIGHT,
    TTF_HINTING_MONO,
    TTF_HINTING_NONE,
    TTF_HINTING_LIGHT_SUBPIXEL
} TTF_HintingFlags;

extern __attribute__((visibility("default"))) void TTF_SetFontHinting(TTF_Font *font, TTF_HintingFlags hinting);

extern __attribute__((visibility("default"))) int TTF_GetNumFontFaces(const TTF_Font *font);

extern __attribute__((visibility("default"))) TTF_HintingFlags TTF_GetFontHinting(const TTF_Font *font);

extern __attribute__((visibility("default"))) _Bool TTF_SetFontSDF(TTF_Font *font, _Bool enabled);

extern __attribute__((visibility("default"))) _Bool TTF_GetFontSDF(const TTF_Font *font);

extern __attribute__((visibility("default"))) int TTF_GetFontWeight(const TTF_Font *font);

typedef enum TTF_HorizontalAlignment
{
    TTF_HORIZONTAL_ALIGN_INVALID = -1,
    TTF_HORIZONTAL_ALIGN_LEFT,
    TTF_HORIZONTAL_ALIGN_CENTER,
    TTF_HORIZONTAL_ALIGN_RIGHT
} TTF_HorizontalAlignment;

extern __attribute__((visibility("default"))) void TTF_SetFontWrapAlignment(TTF_Font *font, TTF_HorizontalAlignment align);

extern __attribute__((visibility("default"))) TTF_HorizontalAlignment TTF_GetFontWrapAlignment(const TTF_Font *font);

extern __attribute__((visibility("default"))) int TTF_GetFontHeight(const TTF_Font *font);

extern __attribute__((visibility("default"))) int TTF_GetFontAscent(const TTF_Font *font);

extern __attribute__((visibility("default"))) int TTF_GetFontDescent(const TTF_Font *font);

extern __attribute__((visibility("default"))) void TTF_SetFontLineSkip(TTF_Font *font, int lineskip);

extern __attribute__((visibility("default"))) int TTF_GetFontLineSkip(const TTF_Font *font);

extern __attribute__((visibility("default"))) void TTF_SetFontKerning(TTF_Font *font, _Bool enabled);

extern __attribute__((visibility("default"))) _Bool TTF_GetFontKerning(const TTF_Font *font);

extern __attribute__((visibility("default"))) _Bool TTF_FontIsFixedWidth(const TTF_Font *font);

extern __attribute__((visibility("default"))) _Bool TTF_FontIsScalable(const TTF_Font *font);

extern __attribute__((visibility("default"))) const char *TTF_GetFontFamilyName(const TTF_Font *font);

extern __attribute__((visibility("default"))) const char *TTF_GetFontStyleName(const TTF_Font *font);

typedef enum TTF_Direction
{
    TTF_DIRECTION_INVALID = 0,
    TTF_DIRECTION_LTR = 4,
    TTF_DIRECTION_RTL,
    TTF_DIRECTION_TTB,
    TTF_DIRECTION_BTT
} TTF_Direction;

extern __attribute__((visibility("default"))) _Bool TTF_SetFontDirection(TTF_Font *font, TTF_Direction direction);

extern __attribute__((visibility("default"))) TTF_Direction TTF_GetFontDirection(TTF_Font *font);

extern __attribute__((visibility("default"))) Uint32 TTF_StringToTag(const char *string);

extern __attribute__((visibility("default"))) void TTF_TagToString(Uint32 tag, char *string, size_t size);

extern __attribute__((visibility("default"))) _Bool TTF_SetFontScript(TTF_Font *font, Uint32 script);

extern __attribute__((visibility("default"))) Uint32 TTF_GetFontScript(TTF_Font *font);

extern __attribute__((visibility("default"))) Uint32 TTF_GetGlyphScript(Uint32 ch);

extern __attribute__((visibility("default"))) _Bool TTF_SetFontLanguage(TTF_Font *font, const char *language_bcp47);

extern __attribute__((visibility("default"))) _Bool TTF_FontHasGlyph(TTF_Font *font, Uint32 ch);

typedef enum TTF_ImageType
{
    TTF_IMAGE_INVALID,
    TTF_IMAGE_ALPHA,
    TTF_IMAGE_COLOR,
    TTF_IMAGE_SDF,
} TTF_ImageType;

extern __attribute__((visibility("default"))) SDL_Surface *TTF_GetGlyphImage(TTF_Font *font, Uint32 ch, TTF_ImageType *image_type);

extern __attribute__((visibility("default"))) SDL_Surface *TTF_GetGlyphImageForIndex(TTF_Font *font, Uint32 glyph_index, TTF_ImageType *image_type);

extern __attribute__((visibility("default"))) _Bool TTF_GetGlyphMetrics(TTF_Font *font, Uint32 ch, int *minx, int *maxx, int *miny, int *maxy, int *advance);

extern __attribute__((visibility("default"))) _Bool TTF_GetGlyphKerning(TTF_Font *font, Uint32 previous_ch, Uint32 ch, int *kerning);

extern __attribute__((visibility("default"))) _Bool TTF_GetStringSize(TTF_Font *font, const char *text, size_t length, int *w, int *h);

extern __attribute__((visibility("default"))) _Bool TTF_GetStringSizeWrapped(TTF_Font *font, const char *text, size_t length, int wrap_width, int *w, int *h);

extern __attribute__((visibility("default"))) _Bool TTF_MeasureString(TTF_Font *font, const char *text, size_t length, int max_width, int *measured_width, size_t *measured_length);

extern __attribute__((visibility("default"))) SDL_Surface *TTF_RenderText_Solid(TTF_Font *font, const char *text, size_t length, SDL_Color fg);

extern __attribute__((visibility("default"))) SDL_Surface *TTF_RenderText_Solid_Wrapped(TTF_Font *font, const char *text, size_t length, SDL_Color fg, int wrapLength);

extern __attribute__((visibility("default"))) SDL_Surface *TTF_RenderGlyph_Solid(TTF_Font *font, Uint32 ch, SDL_Color fg);

extern __attribute__((visibility("default"))) SDL_Surface *TTF_RenderText_Shaded(TTF_Font *font, const char *text, size_t length, SDL_Color fg, SDL_Color bg);

extern __attribute__((visibility("default"))) SDL_Surface *TTF_RenderText_Shaded_Wrapped(TTF_Font *font, const char *text, size_t length, SDL_Color fg, SDL_Color bg, int wrap_width);

extern __attribute__((visibility("default"))) SDL_Surface *TTF_RenderGlyph_Shaded(TTF_Font *font, Uint32 ch, SDL_Color fg, SDL_Color bg);

extern __attribute__((visibility("default"))) SDL_Surface *TTF_RenderText_Blended(TTF_Font *font, const char *text, size_t length, SDL_Color fg);

extern __attribute__((visibility("default"))) SDL_Surface *TTF_RenderText_Blended_Wrapped(TTF_Font *font, const char *text, size_t length, SDL_Color fg, int wrap_width);

extern __attribute__((visibility("default"))) SDL_Surface *TTF_RenderGlyph_Blended(TTF_Font *font, Uint32 ch, SDL_Color fg);

extern __attribute__((visibility("default"))) SDL_Surface *TTF_RenderText_LCD(TTF_Font *font, const char *text, size_t length, SDL_Color fg, SDL_Color bg);

extern __attribute__((visibility("default"))) SDL_Surface *TTF_RenderText_LCD_Wrapped(TTF_Font *font, const char *text, size_t length, SDL_Color fg, SDL_Color bg, int wrap_width);

extern __attribute__((visibility("default"))) SDL_Surface *TTF_RenderGlyph_LCD(TTF_Font *font, Uint32 ch, SDL_Color fg, SDL_Color bg);

typedef struct TTF_TextEngine TTF_TextEngine;

typedef struct TTF_TextData TTF_TextData;

typedef struct TTF_Text
{
    char *text;
    int num_lines;

    int refcount;

    TTF_TextData *internal;

} TTF_Text;

extern __attribute__((visibility("default"))) TTF_TextEngine *TTF_CreateSurfaceTextEngine(void);

extern __attribute__((visibility("default"))) _Bool TTF_DrawSurfaceText(TTF_Text *text, int x, int y, SDL_Surface *surface);

extern __attribute__((visibility("default"))) void TTF_DestroySurfaceTextEngine(TTF_TextEngine *engine);

extern __attribute__((visibility("default"))) TTF_TextEngine *TTF_CreateRendererTextEngine(SDL_Renderer *renderer);

extern __attribute__((visibility("default"))) TTF_TextEngine *TTF_CreateRendererTextEngineWithProperties(SDL_PropertiesID props);

extern __attribute__((visibility("default"))) _Bool TTF_DrawRendererText(TTF_Text *text, float x, float y);

extern __attribute__((visibility("default"))) void TTF_DestroyRendererTextEngine(TTF_TextEngine *engine);

extern __attribute__((visibility("default"))) TTF_TextEngine *TTF_CreateGPUTextEngine(SDL_GPUDevice *device);

extern __attribute__((visibility("default"))) TTF_TextEngine *TTF_CreateGPUTextEngineWithProperties(SDL_PropertiesID props);

typedef struct TTF_GPUAtlasDrawSequence
{
    SDL_GPUTexture *atlas_texture;
    SDL_FPoint *xy;
    SDL_FPoint *uv;
    int num_vertices;
    int *indices;
    int num_indices;
    TTF_ImageType image_type;

    struct TTF_GPUAtlasDrawSequence *next;
} TTF_GPUAtlasDrawSequence;

extern __attribute__((visibility("default"))) TTF_GPUAtlasDrawSequence *TTF_GetGPUTextDrawData(TTF_Text *text);

extern __attribute__((visibility("default"))) void TTF_DestroyGPUTextEngine(TTF_TextEngine *engine);

typedef enum TTF_GPUTextEngineWinding
{
    TTF_GPU_TEXTENGINE_WINDING_INVALID = -1,
    TTF_GPU_TEXTENGINE_WINDING_CLOCKWISE,
    TTF_GPU_TEXTENGINE_WINDING_COUNTER_CLOCKWISE
} TTF_GPUTextEngineWinding;

extern __attribute__((visibility("default"))) void TTF_SetGPUTextEngineWinding(TTF_TextEngine *engine, TTF_GPUTextEngineWinding winding);

extern __attribute__((visibility("default"))) TTF_GPUTextEngineWinding TTF_GetGPUTextEngineWinding(const TTF_TextEngine *engine);

extern __attribute__((visibility("default"))) TTF_Text *TTF_CreateText(TTF_TextEngine *engine, TTF_Font *font, const char *text, size_t length);

extern __attribute__((visibility("default"))) SDL_PropertiesID TTF_GetTextProperties(TTF_Text *text);

extern __attribute__((visibility("default"))) _Bool TTF_SetTextEngine(TTF_Text *text, TTF_TextEngine *engine);

extern __attribute__((visibility("default"))) TTF_TextEngine *TTF_GetTextEngine(TTF_Text *text);

extern __attribute__((visibility("default"))) _Bool TTF_SetTextFont(TTF_Text *text, TTF_Font *font);

extern __attribute__((visibility("default"))) TTF_Font *TTF_GetTextFont(TTF_Text *text);

extern __attribute__((visibility("default"))) _Bool TTF_SetTextDirection(TTF_Text *text, TTF_Direction direction);

extern __attribute__((visibility("default"))) TTF_Direction TTF_GetTextDirection(TTF_Text *text);

extern __attribute__((visibility("default"))) _Bool TTF_SetTextScript(TTF_Text *text, Uint32 script);

extern __attribute__((visibility("default"))) Uint32 TTF_GetTextScript(TTF_Text *text);

extern __attribute__((visibility("default"))) _Bool TTF_SetTextColor(TTF_Text *text, Uint8 r, Uint8 g, Uint8 b, Uint8 a);

extern __attribute__((visibility("default"))) _Bool TTF_SetTextColorFloat(TTF_Text *text, float r, float g, float b, float a);

extern __attribute__((visibility("default"))) _Bool TTF_GetTextColor(TTF_Text *text, Uint8 *r, Uint8 *g, Uint8 *b, Uint8 *a);

extern __attribute__((visibility("default"))) _Bool TTF_GetTextColorFloat(TTF_Text *text, float *r, float *g, float *b, float *a);

extern __attribute__((visibility("default"))) _Bool TTF_SetTextPosition(TTF_Text *text, int x, int y);

extern __attribute__((visibility("default"))) _Bool TTF_GetTextPosition(TTF_Text *text, int *x, int *y);

extern __attribute__((visibility("default"))) _Bool TTF_SetTextWrapWidth(TTF_Text *text, int wrap_width);

extern __attribute__((visibility("default"))) _Bool TTF_GetTextWrapWidth(TTF_Text *text, int *wrap_width);

extern __attribute__((visibility("default"))) _Bool TTF_SetTextWrapWhitespaceVisible(TTF_Text *text, _Bool visible);

extern __attribute__((visibility("default"))) _Bool TTF_TextWrapWhitespaceVisible(TTF_Text *text);

extern __attribute__((visibility("default"))) _Bool TTF_SetTextString(TTF_Text *text, const char *string, size_t length);

extern __attribute__((visibility("default"))) _Bool TTF_InsertTextString(TTF_Text *text, int offset, const char *string, size_t length);

extern __attribute__((visibility("default"))) _Bool TTF_AppendTextString(TTF_Text *text, const char *string, size_t length);

extern __attribute__((visibility("default"))) _Bool TTF_DeleteTextString(TTF_Text *text, int offset, int length);

extern __attribute__((visibility("default"))) _Bool TTF_GetTextSize(TTF_Text *text, int *w, int *h);

typedef Uint32 TTF_SubStringFlags;

typedef struct TTF_SubString
{
    TTF_SubStringFlags flags;
    int offset;
    int length;
    int line_index;
    int cluster_index;
    SDL_Rect rect;
} TTF_SubString;

extern __attribute__((visibility("default"))) _Bool TTF_GetTextSubString(TTF_Text *text, int offset, TTF_SubString *substring);

extern __attribute__((visibility("default"))) _Bool TTF_GetTextSubStringForLine(TTF_Text *text, int line, TTF_SubString *substring);

extern __attribute__((visibility("default"))) TTF_SubString **TTF_GetTextSubStringsForRange(TTF_Text *text, int offset, int length, int *count);

extern __attribute__((visibility("default"))) _Bool TTF_GetTextSubStringForPoint(TTF_Text *text, int x, int y, TTF_SubString *substring);

extern __attribute__((visibility("default"))) _Bool TTF_GetPreviousTextSubString(TTF_Text *text, const TTF_SubString *substring, TTF_SubString *previous);

extern __attribute__((visibility("default"))) _Bool TTF_GetNextTextSubString(TTF_Text *text, const TTF_SubString *substring, TTF_SubString *next);

extern __attribute__((visibility("default"))) _Bool TTF_UpdateText(TTF_Text *text);

extern __attribute__((visibility("default"))) void TTF_DestroyText(TTF_Text *text);

extern __attribute__((visibility("default"))) void TTF_CloseFont(TTF_Font *font);

extern __attribute__((visibility("default"))) void TTF_Quit(void);

extern __attribute__((visibility("default"))) int TTF_WasInit(void);

typedef enum TTF_DrawCommand
{
    TTF_DRAW_COMMAND_NOOP,
    TTF_DRAW_COMMAND_FILL,
    TTF_DRAW_COMMAND_COPY
} TTF_DrawCommand;

typedef struct TTF_FillOperation
{
    TTF_DrawCommand cmd;
    SDL_Rect rect;
} TTF_FillOperation;

typedef struct TTF_CopyOperation
{
    TTF_DrawCommand cmd;
    int text_offset;

    TTF_Font *glyph_font;
    Uint32 glyph_index;
    SDL_Rect src;
    SDL_Rect dst;
    void *reserved;
} TTF_CopyOperation;

typedef union TTF_DrawOperation
{
    TTF_DrawCommand cmd;
    TTF_FillOperation fill;
    TTF_CopyOperation copy;
} TTF_DrawOperation;

typedef struct TTF_TextLayout TTF_TextLayout;

struct TTF_TextData
{
    TTF_Font *font;
    SDL_FColor color;

    _Bool needs_layout_update;
    TTF_TextLayout *layout;
    int x;
    int y;
    int w;
    int h;
    int num_ops;
    TTF_DrawOperation *ops;
    int num_clusters;
    TTF_SubString *clusters;

    SDL_PropertiesID props;

    _Bool needs_engine_update;
    TTF_TextEngine *engine;
    void *engine_text;
};

struct TTF_TextEngine
{
    Uint32 version;

    void *userdata;

    _Bool (*CreateText)(void *userdata, TTF_Text *text);

    void (*DestroyText)(void *userdata, TTF_Text *text);
};

_Static_assert((sizeof(void *) == 4 && sizeof(TTF_TextEngine) == 16) || (sizeof(void *) == 8 && sizeof(TTF_TextEngine) == 32), "(sizeof(void *) == 4 && sizeof(TTF_TextEngine) == 16) || (sizeof(void *) == 8 && sizeof(TTF_TextEngine) == 32)");

typedef struct SDL_HashTable SDL_HashTable;

typedef Uint32 (*SDL_HashCallback)(void *userdata, const void *key);

typedef _Bool (*SDL_HashKeyMatchCallback)(void *userdata, const void *a, const void *b);

typedef void (*SDL_HashDestroyCallback)(void *userdata, const void *key, const void *value);

typedef _Bool (*SDL_HashTableIterateCallback)(void *userdata, const SDL_HashTable *table, const void *key, const void *value);

extern SDL_HashTable *TTF_CreateHashTable(int estimated_capacity,
                                          _Bool threadsafe,
                                          SDL_HashCallback hash,
                                          SDL_HashKeyMatchCallback keymatch,
                                          SDL_HashDestroyCallback destroy,
                                          void *userdata);

extern void TTF_DestroyHashTable(SDL_HashTable *table);

extern _Bool TTF_InsertIntoHashTable(SDL_HashTable *table, const void *key, const void *value, _Bool replace);

extern _Bool TTF_FindInHashTable(const SDL_HashTable *table, const void *key, const void **value);

extern _Bool TTF_RemoveFromHashTable(SDL_HashTable *table, const void *key);

extern void TTF_ClearHashTable(SDL_HashTable *table);

extern _Bool TTF_HashTableEmpty(SDL_HashTable *table);

extern _Bool TTF_IterateHashTable(const SDL_HashTable *table, SDL_HashTableIterateCallback callback, void *userdata);

extern Uint32 TTF_HashPointer(void *unused, const void *key);

extern _Bool TTF_KeyMatchPointer(void *unused, const void *a, const void *b);

extern Uint32 TTF_HashString(void *unused, const void *key);

extern _Bool TTF_KeyMatchString(void *unused, const void *a, const void *b);

extern Uint32 TTF_HashID(void *unused, const void *key);

extern _Bool TTF_KeyMatchID(void *unused, const void *a, const void *b);

extern void TTF_DestroyHashKeyAndValue(void *unused, const void *key, const void *value);

extern void TTF_DestroyHashKey(void *unused, const void *key, const void *value);

extern void TTF_DestroyHashValue(void *unused, const void *key, const void *value);

typedef long int ptrdiff_t;

typedef struct
{
    long long __clang_max_align_nonce1
        __attribute__((__aligned__(__alignof__(long long))));
    long double __clang_max_align_nonce2
        __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;

typedef struct _G_fpos_t
{
    __off_t __pos;
    __mbstate_t __state;
} __fpos_t;

typedef struct _G_fpos64_t
{
    __off64_t __pos;
    __mbstate_t __state;
} __fpos64_t;

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
    int _flags2 : 24;

    char _short_backupbuf[1];
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
    struct _IO_FILE **_prevchain;
    int _mode;

    char _unused2[15 * sizeof(int) - 5 * sizeof(void *)];
};

typedef __ssize_t cookie_read_function_t(void *__cookie, char *__buf,
                                         size_t __nbytes);

typedef __ssize_t cookie_write_function_t(void *__cookie, const char *__buf,
                                          size_t __nbytes);

typedef int cookie_seek_function_t(void *__cookie, __off64_t *__pos, int __w);

typedef int cookie_close_function_t(void *__cookie);

typedef struct _IO_cookie_io_functions_t
{
    cookie_read_function_t *read;
    cookie_write_function_t *write;
    cookie_seek_function_t *seek;
    cookie_close_function_t *close;
} cookie_io_functions_t;

typedef __off_t off_t;

typedef __ssize_t ssize_t;

typedef __fpos_t fpos_t;

extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;

extern int remove(const char *__filename) __attribute__((__nothrow__));

extern int rename(const char *__old, const char *__new) __attribute__((__nothrow__));

extern int renameat(int __oldfd, const char *__old, int __newfd,
                    const char *__new) __attribute__((__nothrow__));

extern int fclose(FILE *__stream) __attribute__((__nonnull__(1)));

extern FILE *tmpfile(void)
    __attribute__((__malloc__));

extern char *tmpnam(char[20]) __attribute__((__nothrow__));

extern char *tmpnam_r(char __s[20]) __attribute__((__nothrow__));

extern char *tempnam(const char *__dir, const char *__pfx)
    __attribute__((__nothrow__)) __attribute__((__malloc__));

extern int fflush(FILE *__stream);

extern int fflush_unlocked(FILE *__stream);

extern FILE *fopen(const char *__restrict __filename,
                   const char *__restrict __modes)
    __attribute__((__malloc__));

extern FILE *freopen(const char *__restrict __filename,
                     const char *__restrict __modes,
                     FILE *__restrict __stream) __attribute__((__nonnull__(3)));

extern FILE *fdopen(int __fd, const char *__modes) __attribute__((__nothrow__))
__attribute__((__malloc__));

extern FILE *fopencookie(void *__restrict __magic_cookie,
                         const char *__restrict __modes,
                         cookie_io_functions_t __io_funcs) __attribute__((__nothrow__))
__attribute__((__malloc__));

extern FILE *fmemopen(void *__s, size_t __len, const char *__modes)
    __attribute__((__nothrow__)) __attribute__((__malloc__));

extern FILE *open_memstream(char **__bufloc, size_t *__sizeloc) __attribute__((__nothrow__))
__attribute__((__malloc__));

extern __FILE *open_wmemstream(wchar_t **__bufloc, size_t *__sizeloc) __attribute__((__nothrow__))
__attribute__((__malloc__));

extern void setbuf(FILE *__restrict __stream, char *__restrict __buf) __attribute__((__nothrow__))
__attribute__((__nonnull__(1)));

extern int setvbuf(FILE *__restrict __stream, char *__restrict __buf,
                   int __modes, size_t __n) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern void setbuffer(FILE *__restrict __stream, char *__restrict __buf,
                      size_t __size) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern void setlinebuf(FILE *__stream) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern int fprintf(FILE *__restrict __stream,
                   const char *__restrict __format, ...) __attribute__((__nonnull__(1)));

extern int printf(const char *__restrict __format, ...);

extern int sprintf(char *__restrict __s,
                   const char *__restrict __format, ...) __attribute__((__nothrow__));

extern int vfprintf(FILE *__restrict __s, const char *__restrict __format,
                    __gnuc_va_list __arg) __attribute__((__nonnull__(1)));

extern int vprintf(const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf(char *__restrict __s, const char *__restrict __format,
                    __gnuc_va_list __arg) __attribute__((__nothrow__));

extern int snprintf(char *__restrict __s, size_t __maxlen,
                    const char *__restrict __format, ...)
    __attribute__((__nothrow__)) __attribute__((__format__(__printf__, 3, 4)));

extern int vsnprintf(char *__restrict __s, size_t __maxlen,
                     const char *__restrict __format, __gnuc_va_list __arg)
    __attribute__((__nothrow__)) __attribute__((__format__(__printf__, 3, 0)));

extern int vasprintf(char **__restrict __ptr, const char *__restrict __f,
                     __gnuc_va_list __arg)
    __attribute__((__nothrow__)) __attribute__((__format__(__printf__, 2, 0)));
extern int __asprintf(char **__restrict __ptr,
                      const char *__restrict __fmt, ...)
    __attribute__((__nothrow__)) __attribute__((__format__(__printf__, 2, 3)));
extern int asprintf(char **__restrict __ptr,
                    const char *__restrict __fmt, ...)
    __attribute__((__nothrow__)) __attribute__((__format__(__printf__, 2, 3)));

extern int vdprintf(int __fd, const char *__restrict __fmt,
                    __gnuc_va_list __arg)
    __attribute__((__format__(__printf__, 2, 0)));
extern int dprintf(int __fd, const char *__restrict __fmt, ...)
    __attribute__((__format__(__printf__, 2, 3)));

extern int fscanf(FILE *__restrict __stream,
                  const char *__restrict __format, ...) __attribute__((__nonnull__(1)));

extern int scanf(const char *__restrict __format, ...);

extern int sscanf(const char *__restrict __s,
                  const char *__restrict __format, ...) __attribute__((__nothrow__));

extern int fscanf(FILE *__restrict __stream, const char *__restrict __format, ...) __asm__(""
                                                                                           "__isoc99_fscanf") __attribute__((__nonnull__(1)));

extern int scanf(const char *__restrict __format, ...) __asm__(""
                                                               "__isoc99_scanf");

extern int sscanf(const char *__restrict __s, const char *__restrict __format, ...) __asm__(""
                                                                                            "__isoc99_sscanf") __attribute__((__nothrow__));

extern int vfscanf(FILE *__restrict __s, const char *__restrict __format,
                   __gnuc_va_list __arg)
    __attribute__((__format__(__scanf__, 2, 0))) __attribute__((__nonnull__(1)));

extern int vscanf(const char *__restrict __format, __gnuc_va_list __arg)
    __attribute__((__format__(__scanf__, 1, 0)));

extern int vsscanf(const char *__restrict __s,
                   const char *__restrict __format, __gnuc_va_list __arg)
    __attribute__((__nothrow__)) __attribute__((__format__(__scanf__, 2, 0)));

extern int vfscanf(FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__(""
                                                                                                        "__isoc99_vfscanf")

    __attribute__((__format__(__scanf__, 2, 0))) __attribute__((__nonnull__(1)));
extern int vscanf(const char *__restrict __format, __gnuc_va_list __arg) __asm__(""
                                                                                 "__isoc99_vscanf")

    __attribute__((__format__(__scanf__, 1, 0)));
extern int vsscanf(const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__(""
                                                                                                              "__isoc99_vsscanf") __attribute__((__nothrow__))

__attribute__((__format__(__scanf__, 2, 0)));

extern int fgetc(FILE *__stream) __attribute__((__nonnull__(1)));
extern int getc(FILE *__stream) __attribute__((__nonnull__(1)));

extern int getchar(void);

extern int getc_unlocked(FILE *__stream) __attribute__((__nonnull__(1)));
extern int getchar_unlocked(void);

extern int fgetc_unlocked(FILE *__stream) __attribute__((__nonnull__(1)));

extern int fputc(int __c, FILE *__stream) __attribute__((__nonnull__(2)));
extern int putc(int __c, FILE *__stream) __attribute__((__nonnull__(2)));

extern int putchar(int __c);

extern int fputc_unlocked(int __c, FILE *__stream) __attribute__((__nonnull__(2)));

extern int putc_unlocked(int __c, FILE *__stream) __attribute__((__nonnull__(2)));
extern int putchar_unlocked(int __c);

extern int getw(FILE *__stream) __attribute__((__nonnull__(1)));

extern int putw(int __w, FILE *__stream) __attribute__((__nonnull__(2)));

extern char *fgets(char *__restrict __s, int __n, FILE *__restrict __stream)
    __attribute__((__nonnull__(3)));

extern __ssize_t __getdelim(char **__restrict __lineptr,
                            size_t *__restrict __n, int __delimiter,
                            FILE *__restrict __stream) __attribute__((__nonnull__(4)));
extern __ssize_t getdelim(char **__restrict __lineptr,
                          size_t *__restrict __n, int __delimiter,
                          FILE *__restrict __stream) __attribute__((__nonnull__(4)));

extern __ssize_t getline(char **__restrict __lineptr,
                         size_t *__restrict __n,
                         FILE *__restrict __stream) __attribute__((__nonnull__(3)));

extern int fputs(const char *__restrict __s, FILE *__restrict __stream)
    __attribute__((__nonnull__(2)));

extern int puts(const char *__s);

extern int ungetc(int __c, FILE *__stream) __attribute__((__nonnull__(2)));

extern size_t fread(void *__restrict __ptr, size_t __size,
                    size_t __n, FILE *__restrict __stream)
    __attribute__((__nonnull__(4)));

extern size_t fwrite(const void *__restrict __ptr, size_t __size,
                     size_t __n, FILE *__restrict __s) __attribute__((__nonnull__(4)));

extern size_t fread_unlocked(void *__restrict __ptr, size_t __size,
                             size_t __n, FILE *__restrict __stream)
    __attribute__((__nonnull__(4)));
extern size_t fwrite_unlocked(const void *__restrict __ptr, size_t __size,
                              size_t __n, FILE *__restrict __stream)
    __attribute__((__nonnull__(4)));

extern int fseek(FILE *__stream, long int __off, int __whence)
    __attribute__((__nonnull__(1)));

extern long int ftell(FILE *__stream) __attribute__((__nonnull__(1)));

extern void rewind(FILE *__stream) __attribute__((__nonnull__(1)));

extern int fseeko(FILE *__stream, __off_t __off, int __whence)
    __attribute__((__nonnull__(1)));

extern __off_t ftello(FILE *__stream) __attribute__((__nonnull__(1)));

extern int fgetpos(FILE *__restrict __stream, fpos_t *__restrict __pos)
    __attribute__((__nonnull__(1)));

extern int fsetpos(FILE *__stream, const fpos_t *__pos) __attribute__((__nonnull__(1)));

extern void clearerr(FILE *__stream) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern int feof(FILE *__stream) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern int ferror(FILE *__stream) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern void clearerr_unlocked(FILE *__stream) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int feof_unlocked(FILE *__stream) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int ferror_unlocked(FILE *__stream) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern void perror(const char *__s) __attribute__((__cold__));

extern int fileno(FILE *__stream) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern int fileno_unlocked(FILE *__stream) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern int pclose(FILE *__stream) __attribute__((__nonnull__(1)));

extern FILE *popen(const char *__command, const char *__modes)
    __attribute__((__malloc__));

extern char *ctermid(char *__s) __attribute__((__nothrow__));

extern void flockfile(FILE *__stream) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern int ftrylockfile(FILE *__stream) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern void funlockfile(FILE *__stream) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern int __uflow(FILE *);
extern int __overflow(FILE *, int);

typedef struct
{
    int quot;
    int rem;
} div_t;

typedef struct
{
    long int quot;
    long int rem;
} ldiv_t;

__extension__ typedef struct
{
    long long int quot;
    long long int rem;
} lldiv_t;

extern size_t __ctype_get_mb_cur_max(void) __attribute__((__nothrow__));

extern double atof(const char *__nptr)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

extern int atoi(const char *__nptr)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

extern long int atol(const char *__nptr)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

__extension__ extern long long int atoll(const char *__nptr)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

extern double strtod(const char *__restrict __nptr,
                     char **__restrict __endptr)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern float strtof(const char *__restrict __nptr,
                    char **__restrict __endptr) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern long double strtold(const char *__restrict __nptr,
                           char **__restrict __endptr)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern long int strtol(const char *__restrict __nptr,
                       char **__restrict __endptr, int __base)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern unsigned long int strtoul(const char *__restrict __nptr,
                                 char **__restrict __endptr, int __base)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

__extension__ extern long long int strtoq(const char *__restrict __nptr,
                                          char **__restrict __endptr, int __base)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

__extension__ extern unsigned long long int strtouq(const char *__restrict __nptr,
                                                    char **__restrict __endptr, int __base)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

__extension__ extern long long int strtoll(const char *__restrict __nptr,
                                           char **__restrict __endptr, int __base)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

__extension__ extern unsigned long long int strtoull(const char *__restrict __nptr,
                                                     char **__restrict __endptr, int __base)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern char *l64a(long int __n) __attribute__((__nothrow__));

extern long int a64l(const char *__s)
    __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;

typedef __loff_t loff_t;

typedef __ino_t ino_t;

typedef __dev_t dev_t;

typedef __gid_t gid_t;

typedef __mode_t mode_t;

typedef __nlink_t nlink_t;

typedef __uid_t uid_t;

typedef __pid_t pid_t;

typedef __id_t id_t;

typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;

typedef __key_t key_t;

typedef __clock_t clock_t;

typedef __clockid_t clockid_t;

typedef __time_t time_t;

typedef __timer_t timer_t;

typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;

typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;

typedef int register_t __attribute__((__mode__(__word__)));

typedef struct
{
    unsigned long int __val[(1024 / (8 * sizeof(unsigned long int)))];
} __sigset_t;

typedef __sigset_t sigset_t;

struct timeval
{

    __time_t tv_sec;
    __suseconds_t tv_usec;
};

struct timespec
{

    __time_t tv_sec;

    __syscall_slong_t tv_nsec;
};

typedef __suseconds_t suseconds_t;

typedef long int __fd_mask;

typedef struct
{

    __fd_mask __fds_bits[1024 / (8 * (int)sizeof(__fd_mask))];

} fd_set;

typedef __fd_mask fd_mask;

extern int select(int __nfds, fd_set *__restrict __readfds,
                  fd_set *__restrict __writefds,
                  fd_set *__restrict __exceptfds,
                  struct timeval *__restrict __timeout);

extern int pselect(int __nfds, fd_set *__restrict __readfds,
                   fd_set *__restrict __writefds,
                   fd_set *__restrict __exceptfds,
                   const struct timespec *__restrict __timeout,
                   const __sigset_t *__restrict __sigmask);

typedef __blksize_t blksize_t;

typedef __blkcnt_t blkcnt_t;

typedef __fsblkcnt_t fsblkcnt_t;

typedef __fsfilcnt_t fsfilcnt_t;

typedef union
{
    __extension__ unsigned long long int __value64;
    struct
    {
        unsigned int __low;
        unsigned int __high;
    } __value32;
} __atomic_wide_counter;

typedef struct __pthread_internal_list
{
    struct __pthread_internal_list *__prev;
    struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
    struct __pthread_internal_slist *__next;
} __pthread_slist_t;

struct __pthread_mutex_s
{
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;

    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
};

struct __pthread_rwlock_arch_t
{
    unsigned int __readers;
    unsigned int __writers;
    unsigned int __wrphase_futex;
    unsigned int __writers_futex;
    unsigned int __pad3;
    unsigned int __pad4;

    int __cur_writer;
    int __shared;
    signed char __rwelision;

    unsigned char __pad1[7];

    unsigned long int __pad2;

    unsigned int __flags;
};

struct __pthread_cond_s
{
    __atomic_wide_counter __wseq;
    __atomic_wide_counter __g1_start;
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
};

typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;

typedef struct
{
    int __data;
} __once_flag;

typedef unsigned long int pthread_t;

typedef union
{
    char __size[4];
    int __align;
} pthread_mutexattr_t;

typedef union
{
    char __size[4];
    int __align;
} pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

union pthread_attr_t
{
    char __size[56];
    long int __align;
};

typedef union pthread_attr_t pthread_attr_t;

typedef union
{
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
} pthread_mutex_t;

typedef union
{
    struct __pthread_cond_s __data;
    char __size[48];
    __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
    struct __pthread_rwlock_arch_t __data;
    char __size[56];
    long int __align;
} pthread_rwlock_t;

typedef union
{
    char __size[8];
    long int __align;
} pthread_rwlockattr_t;

typedef volatile int pthread_spinlock_t;

typedef union
{
    char __size[32];
    long int __align;
} pthread_barrier_t;

typedef union
{
    char __size[4];
    int __align;
} pthread_barrierattr_t;

extern long int random(void) __attribute__((__nothrow__));

extern void srandom(unsigned int __seed) __attribute__((__nothrow__));

extern char *initstate(unsigned int __seed, char *__statebuf,
                       size_t __statelen) __attribute__((__nothrow__)) __attribute__((__nonnull__(2)));

extern char *setstate(char *__statebuf) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

struct random_data
{
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
};

extern int random_r(struct random_data *__restrict __buf,
                    int32_t *__restrict __result) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern int srandom_r(unsigned int __seed, struct random_data *__buf)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(2)));

extern int initstate_r(unsigned int __seed, char *__restrict __statebuf,
                       size_t __statelen,
                       struct random_data *__restrict __buf)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(2, 4)));

extern int setstate_r(char *__restrict __statebuf,
                      struct random_data *__restrict __buf)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern int rand(void) __attribute__((__nothrow__));

extern void srand(unsigned int __seed) __attribute__((__nothrow__));

extern int rand_r(unsigned int *__seed) __attribute__((__nothrow__));

extern double drand48(void) __attribute__((__nothrow__));
extern double erand48(unsigned short int __xsubi[3]) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern long int lrand48(void) __attribute__((__nothrow__));
extern long int nrand48(unsigned short int __xsubi[3])
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern long int mrand48(void) __attribute__((__nothrow__));
extern long int jrand48(unsigned short int __xsubi[3])
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern void srand48(long int __seedval) __attribute__((__nothrow__));
extern unsigned short int *seed48(unsigned short int __seed16v[3])
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern void lcong48(unsigned short int __param[7]) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

struct drand48_data
{
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;
};

extern int drand48_r(struct drand48_data *__restrict __buffer,
                     double *__restrict __result) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int erand48_r(unsigned short int __xsubi[3],
                     struct drand48_data *__restrict __buffer,
                     double *__restrict __result) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern int lrand48_r(struct drand48_data *__restrict __buffer,
                     long int *__restrict __result)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int nrand48_r(unsigned short int __xsubi[3],
                     struct drand48_data *__restrict __buffer,
                     long int *__restrict __result)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern int mrand48_r(struct drand48_data *__restrict __buffer,
                     long int *__restrict __result)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int jrand48_r(unsigned short int __xsubi[3],
                     struct drand48_data *__restrict __buffer,
                     long int *__restrict __result)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern int srand48_r(long int __seedval, struct drand48_data *__buffer)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(2)));

extern int seed48_r(unsigned short int __seed16v[3],
                    struct drand48_data *__buffer) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern int lcong48_r(unsigned short int __param[7],
                     struct drand48_data *__buffer)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));

extern __uint32_t arc4random(void)
    __attribute__((__nothrow__));

extern void arc4random_buf(void *__buf, size_t __size)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern __uint32_t arc4random_uniform(__uint32_t __upper_bound)
    __attribute__((__nothrow__));

extern void *malloc(size_t __size) __attribute__((__nothrow__)) __attribute__((__malloc__));

extern void *calloc(size_t __nmemb, size_t __size)
    __attribute__((__nothrow__)) __attribute__((__malloc__));

extern void *realloc(void *__ptr, size_t __size)
    __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));

extern void free(void *__ptr) __attribute__((__nothrow__));

extern void *reallocarray(void *__ptr, size_t __nmemb, size_t __size)
    __attribute__((__nothrow__)) __attribute__((__warn_unused_result__))

    ;

extern void *reallocarray(void *__ptr, size_t __nmemb, size_t __size)
    __attribute__((__nothrow__));

extern void *alloca(size_t __size) __attribute__((__nothrow__));

extern void *valloc(size_t __size) __attribute__((__nothrow__)) __attribute__((__malloc__));

extern int posix_memalign(void **__memptr, size_t __alignment, size_t __size)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern void *aligned_alloc(size_t __alignment, size_t __size)
    __attribute__((__nothrow__)) __attribute__((__malloc__)) __attribute__((__alloc_align__(1)));

extern void abort(void) __attribute__((__nothrow__)) __attribute__((__noreturn__)) __attribute__((__cold__));

extern int atexit(void (*__func)(void)) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern int at_quick_exit(void (*__func)(void)) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern int on_exit(void (*__func)(int __status, void *__arg), void *__arg)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern void exit(int __status) __attribute__((__nothrow__)) __attribute__((__noreturn__));

extern void quick_exit(int __status) __attribute__((__nothrow__)) __attribute__((__noreturn__));

extern void _Exit(int __status) __attribute__((__nothrow__)) __attribute__((__noreturn__));

extern char *getenv(const char *__name) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern int putenv(char *__string) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern int setenv(const char *__name, const char *__value, int __replace)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(2)));

extern int unsetenv(const char *__name) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern int clearenv(void) __attribute__((__nothrow__));

extern char *mktemp(char *__template) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern int mkstemp(char *__template) __attribute__((__nonnull__(1)));

extern int mkstemps(char *__template, int __suffixlen) __attribute__((__nonnull__(1)));

extern char *mkdtemp(char *__template) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern int system(const char *__command);

extern char *realpath(const char *__restrict __name,
                      char *__restrict __resolved) __attribute__((__nothrow__));

typedef int (*__compar_fn_t)(const void *, const void *);

extern void *bsearch(const void *__key, const void *__base,
                     size_t __nmemb, size_t __size, __compar_fn_t __compar)
    __attribute__((__nonnull__(1, 2, 5)));

extern void qsort(void *__base, size_t __nmemb, size_t __size,
                  __compar_fn_t __compar) __attribute__((__nonnull__(1, 4)));

extern int abs(int __x) __attribute__((__nothrow__)) __attribute__((__const__));
extern long int labs(long int __x) __attribute__((__nothrow__)) __attribute__((__const__));

__extension__ extern long long int llabs(long long int __x)
    __attribute__((__nothrow__)) __attribute__((__const__));

extern div_t div(int __numer, int __denom)
    __attribute__((__nothrow__)) __attribute__((__const__));
extern ldiv_t ldiv(long int __numer, long int __denom)
    __attribute__((__nothrow__)) __attribute__((__const__));

__extension__ extern lldiv_t lldiv(long long int __numer,
                                   long long int __denom)
    __attribute__((__nothrow__)) __attribute__((__const__));

extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt,
                  int *__restrict __sign) __attribute__((__nothrow__)) __attribute__((__nonnull__(3, 4)));

extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt,
                  int *__restrict __sign) __attribute__((__nothrow__)) __attribute__((__nonnull__(3, 4)));

extern char *gcvt(double __value, int __ndigit, char *__buf)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(3)));

extern char *qecvt(long double __value, int __ndigit,
                   int *__restrict __decpt, int *__restrict __sign)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(3, 4)));
extern char *qfcvt(long double __value, int __ndigit,
                   int *__restrict __decpt, int *__restrict __sign)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(3, 4)));
extern char *qgcvt(long double __value, int __ndigit, char *__buf)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(3)));

extern int ecvt_r(double __value, int __ndigit, int *__restrict __decpt,
                  int *__restrict __sign, char *__restrict __buf,
                  size_t __len) __attribute__((__nothrow__)) __attribute__((__nonnull__(3, 4, 5)));
extern int fcvt_r(double __value, int __ndigit, int *__restrict __decpt,
                  int *__restrict __sign, char *__restrict __buf,
                  size_t __len) __attribute__((__nothrow__)) __attribute__((__nonnull__(3, 4, 5)));

extern int qecvt_r(long double __value, int __ndigit,
                   int *__restrict __decpt, int *__restrict __sign,
                   char *__restrict __buf, size_t __len)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(3, 4, 5)));
extern int qfcvt_r(long double __value, int __ndigit,
                   int *__restrict __decpt, int *__restrict __sign,
                   char *__restrict __buf, size_t __len)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(3, 4, 5)));

extern int mblen(const char *__s, size_t __n) __attribute__((__nothrow__));

extern int mbtowc(wchar_t *__restrict __pwc,
                  const char *__restrict __s, size_t __n) __attribute__((__nothrow__));

extern int wctomb(char *__s, wchar_t __wchar) __attribute__((__nothrow__));

extern size_t mbstowcs(wchar_t *__restrict __pwcs,
                       const char *__restrict __s, size_t __n) __attribute__((__nothrow__));

extern size_t wcstombs(char *__restrict __s,
                       const wchar_t *__restrict __pwcs, size_t __n)
    __attribute__((__nothrow__))

    ;

extern int rpmatch(const char *__response) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

extern int getsubopt(char **__restrict __optionp,
                     char *const *__restrict __tokens,
                     char **__restrict __valuep)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2, 3)));

extern int getloadavg(double __loadavg[], int __nelem)
    __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));

typedef long int __jmp_buf[8];

struct __jmp_buf_tag
{

    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
};

typedef struct __jmp_buf_tag jmp_buf[1];

extern int setjmp(jmp_buf __env) __attribute__((__nothrow__));

extern int __sigsetjmp(struct __jmp_buf_tag __env[1], int __savemask) __attribute__((__nothrow__));

extern int _setjmp(struct __jmp_buf_tag __env[1]) __attribute__((__nothrow__));

extern void longjmp(struct __jmp_buf_tag __env[1], int __val)
    __attribute__((__nothrow__)) __attribute__((__noreturn__));

extern void _longjmp(struct __jmp_buf_tag __env[1], int __val)
    __attribute__((__nothrow__)) __attribute__((__noreturn__));

typedef struct __jmp_buf_tag sigjmp_buf[1];

extern void siglongjmp(sigjmp_buf __env, int __val)
    __attribute__((__nothrow__)) __attribute__((__noreturn__));

typedef signed short FT_Int16;

typedef unsigned short FT_UInt16;

typedef signed int FT_Int32;
typedef unsigned int FT_UInt32;

typedef int FT_Fast;
typedef unsigned int FT_UFast;

typedef long FT_Int64;
typedef unsigned long FT_UInt64;

typedef struct FT_MemoryRec_ *FT_Memory;

typedef void *(*FT_Alloc_Func)(FT_Memory memory,
                               long size);

typedef void (*FT_Free_Func)(FT_Memory memory,
                             void *block);

typedef void *(*FT_Realloc_Func)(FT_Memory memory,
                                 long cur_size,
                                 long new_size,
                                 void *block);

struct FT_MemoryRec_
{
    void *user;
    FT_Alloc_Func alloc;
    FT_Free_Func free;
    FT_Realloc_Func realloc;
};

typedef struct FT_StreamRec_ *FT_Stream;

typedef union FT_StreamDesc_
{
    long value;
    void *pointer;

} FT_StreamDesc;

typedef unsigned long (*FT_Stream_IoFunc)(FT_Stream stream,
                                          unsigned long offset,
                                          unsigned char *buffer,
                                          unsigned long count);

typedef void (*FT_Stream_CloseFunc)(FT_Stream stream);

typedef struct FT_StreamRec_
{
    unsigned char *base;
    unsigned long size;
    unsigned long pos;

    FT_StreamDesc descriptor;
    FT_StreamDesc pathname;
    FT_Stream_IoFunc read;
    FT_Stream_CloseFunc close;

    FT_Memory memory;
    unsigned char *cursor;
    unsigned char *limit;

} FT_StreamRec;

typedef signed long FT_Pos;

typedef struct FT_Vector_
{
    FT_Pos x;
    FT_Pos y;

} FT_Vector;

typedef struct FT_BBox_
{
    FT_Pos xMin, yMin;
    FT_Pos xMax, yMax;

} FT_BBox;

typedef enum FT_Pixel_Mode_
{
    FT_PIXEL_MODE_NONE = 0,
    FT_PIXEL_MODE_MONO,
    FT_PIXEL_MODE_GRAY,
    FT_PIXEL_MODE_GRAY2,
    FT_PIXEL_MODE_GRAY4,
    FT_PIXEL_MODE_LCD,
    FT_PIXEL_MODE_LCD_V,
    FT_PIXEL_MODE_BGRA,

    FT_PIXEL_MODE_MAX

} FT_Pixel_Mode;

typedef struct FT_Bitmap_
{
    unsigned int rows;
    unsigned int width;
    int pitch;
    unsigned char *buffer;
    unsigned short num_grays;
    unsigned char pixel_mode;
    unsigned char palette_mode;
    void *palette;

} FT_Bitmap;

typedef struct FT_Outline_
{
    unsigned short n_contours;
    unsigned short n_points;

    FT_Vector *points;
    unsigned char *tags;
    unsigned short *contours;

    int flags;

} FT_Outline;

typedef int (*FT_Outline_MoveToFunc)(const FT_Vector *to,
                                     void *user);

typedef int (*FT_Outline_LineToFunc)(const FT_Vector *to,
                                     void *user);

typedef int (*FT_Outline_ConicToFunc)(const FT_Vector *control,
                                      const FT_Vector *to,
                                      void *user);

typedef int (*FT_Outline_CubicToFunc)(const FT_Vector *control1,
                                      const FT_Vector *control2,
                                      const FT_Vector *to,
                                      void *user);

typedef struct FT_Outline_Funcs_
{
    FT_Outline_MoveToFunc move_to;
    FT_Outline_LineToFunc line_to;
    FT_Outline_ConicToFunc conic_to;
    FT_Outline_CubicToFunc cubic_to;

    int shift;
    FT_Pos delta;

} FT_Outline_Funcs;

typedef enum FT_Glyph_Format_
{
    FT_GLYPH_FORMAT_NONE = (((unsigned long)(unsigned char)(0) << 24) | ((unsigned long)(unsigned char)(0) << 16) | ((unsigned long)(unsigned char)(0) << 8) | (unsigned long)(unsigned char)(0)),

    FT_GLYPH_FORMAT_COMPOSITE = (((unsigned long)(unsigned char)('c') << 24) | ((unsigned long)(unsigned char)('o') << 16) | ((unsigned long)(unsigned char)('m') << 8) | (unsigned long)(unsigned char)('p')),
    FT_GLYPH_FORMAT_BITMAP = (((unsigned long)(unsigned char)('b') << 24) | ((unsigned long)(unsigned char)('i') << 16) | ((unsigned long)(unsigned char)('t') << 8) | (unsigned long)(unsigned char)('s')),
    FT_GLYPH_FORMAT_OUTLINE = (((unsigned long)(unsigned char)('o') << 24) | ((unsigned long)(unsigned char)('u') << 16) | ((unsigned long)(unsigned char)('t') << 8) | (unsigned long)(unsigned char)('l')),
    FT_GLYPH_FORMAT_PLOTTER = (((unsigned long)(unsigned char)('p') << 24) | ((unsigned long)(unsigned char)('l') << 16) | ((unsigned long)(unsigned char)('o') << 8) | (unsigned long)(unsigned char)('t')),
    FT_GLYPH_FORMAT_SVG = (((unsigned long)(unsigned char)('S') << 24) | ((unsigned long)(unsigned char)('V') << 16) | ((unsigned long)(unsigned char)('G') << 8) | (unsigned long)(unsigned char)(' '))

} FT_Glyph_Format;

typedef struct FT_Span_
{
    short x;
    unsigned short len;
    unsigned char coverage;

} FT_Span;

typedef void (*FT_SpanFunc)(int y,
                            int count,
                            const FT_Span *spans,
                            void *user);

typedef int (*FT_Raster_BitTest_Func)(int y,
                                      int x,
                                      void *user);

typedef void (*FT_Raster_BitSet_Func)(int y,
                                      int x,
                                      void *user);

typedef struct FT_Raster_Params_
{
    const FT_Bitmap *target;
    const void *source;
    int flags;
    FT_SpanFunc gray_spans;
    FT_SpanFunc black_spans;
    FT_Raster_BitTest_Func bit_test;
    FT_Raster_BitSet_Func bit_set;
    void *user;
    FT_BBox clip_box;

} FT_Raster_Params;

typedef struct FT_RasterRec_ *FT_Raster;

typedef int (*FT_Raster_NewFunc)(void *memory,
                                 FT_Raster *raster);

typedef void (*FT_Raster_DoneFunc)(FT_Raster raster);

typedef void (*FT_Raster_ResetFunc)(FT_Raster raster,
                                    unsigned char *pool_base,
                                    unsigned long pool_size);

typedef int (*FT_Raster_SetModeFunc)(FT_Raster raster,
                                     unsigned long mode,
                                     void *args);

typedef int (*FT_Raster_RenderFunc)(FT_Raster raster,
                                    const FT_Raster_Params *params);

typedef struct FT_Raster_Funcs_
{
    FT_Glyph_Format glyph_format;

    FT_Raster_NewFunc raster_new;
    FT_Raster_ResetFunc raster_reset;
    FT_Raster_SetModeFunc raster_set_mode;
    FT_Raster_RenderFunc raster_render;
    FT_Raster_DoneFunc raster_done;

} FT_Raster_Funcs;

typedef unsigned char FT_Bool;

typedef signed short FT_FWord;

typedef unsigned short FT_UFWord;

typedef signed char FT_Char;

typedef unsigned char FT_Byte;

typedef const FT_Byte *FT_Bytes;

typedef FT_UInt32 FT_Tag;

typedef char FT_String;

typedef signed short FT_Short;

typedef unsigned short FT_UShort;

typedef signed int FT_Int;

typedef unsigned int FT_UInt;

typedef signed long FT_Long;

typedef unsigned long FT_ULong;

typedef signed short FT_F2Dot14;

typedef signed long FT_F26Dot6;

typedef signed long FT_Fixed;

typedef int FT_Error;

typedef void *FT_Pointer;

typedef size_t FT_Offset;

typedef ptrdiff_t FT_PtrDist;

typedef struct FT_UnitVector_
{
    FT_F2Dot14 x;
    FT_F2Dot14 y;

} FT_UnitVector;

typedef struct FT_Matrix_
{
    FT_Fixed xx, xy;
    FT_Fixed yx, yy;

} FT_Matrix;

typedef struct FT_Data_
{
    const FT_Byte *pointer;
    FT_UInt length;

} FT_Data;

typedef void (*FT_Generic_Finalizer)(void *object);

typedef struct FT_Generic_
{
    void *data;
    FT_Generic_Finalizer finalizer;

} FT_Generic;

typedef struct FT_ListNodeRec_ *FT_ListNode;

typedef struct FT_ListRec_ *FT_List;

typedef struct FT_ListNodeRec_
{
    FT_ListNode prev;
    FT_ListNode next;
    void *data;

} FT_ListNodeRec;

typedef struct FT_ListRec_
{
    FT_ListNode head;
    FT_ListNode tail;

} FT_ListRec;

enum
{

    FT_Mod_Err_Base = 0,
    FT_Mod_Err_Autofit = 0,
    FT_Mod_Err_BDF = 0,
    FT_Mod_Err_Bzip2 = 0,
    FT_Mod_Err_Cache = 0,
    FT_Mod_Err_CFF = 0,
    FT_Mod_Err_CID = 0,
    FT_Mod_Err_Gzip = 0,
    FT_Mod_Err_LZW = 0,
    FT_Mod_Err_OTvalid = 0,
    FT_Mod_Err_PCF = 0,
    FT_Mod_Err_PFR = 0,
    FT_Mod_Err_PSaux = 0,
    FT_Mod_Err_PShinter = 0,
    FT_Mod_Err_PSnames = 0,
    FT_Mod_Err_Raster = 0,
    FT_Mod_Err_SFNT = 0,
    FT_Mod_Err_Smooth = 0,
    FT_Mod_Err_TrueType = 0,
    FT_Mod_Err_Type1 = 0,
    FT_Mod_Err_Type42 = 0,
    FT_Mod_Err_Winfonts = 0,
    FT_Mod_Err_GXvalid = 0,
    FT_Mod_Err_Sdf = 0,

    FT_Mod_Err_Max
};

enum
{

    FT_Err_Ok = 0x00,

    FT_Err_Cannot_Open_Resource = 0x01 + 0,

    FT_Err_Unknown_File_Format = 0x02 + 0,

    FT_Err_Invalid_File_Format = 0x03 + 0,

    FT_Err_Invalid_Version = 0x04 + 0,

    FT_Err_Lower_Module_Version = 0x05 + 0,

    FT_Err_Invalid_Argument = 0x06 + 0,

    FT_Err_Unimplemented_Feature = 0x07 + 0,

    FT_Err_Invalid_Table = 0x08 + 0,

    FT_Err_Invalid_Offset = 0x09 + 0,

    FT_Err_Array_Too_Large = 0x0A + 0,

    FT_Err_Missing_Module = 0x0B + 0,

    FT_Err_Missing_Property = 0x0C + 0,

    FT_Err_Invalid_Glyph_Index = 0x10 + 0,

    FT_Err_Invalid_Character_Code = 0x11 + 0,

    FT_Err_Invalid_Glyph_Format = 0x12 + 0,

    FT_Err_Cannot_Render_Glyph = 0x13 + 0,

    FT_Err_Invalid_Outline = 0x14 + 0,

    FT_Err_Invalid_Composite = 0x15 + 0,

    FT_Err_Too_Many_Hints = 0x16 + 0,

    FT_Err_Invalid_Pixel_Size = 0x17 + 0,

    FT_Err_Invalid_SVG_Document = 0x18 + 0,

    FT_Err_Invalid_Handle = 0x20 + 0,

    FT_Err_Invalid_Library_Handle = 0x21 + 0,

    FT_Err_Invalid_Driver_Handle = 0x22 + 0,

    FT_Err_Invalid_Face_Handle = 0x23 + 0,

    FT_Err_Invalid_Size_Handle = 0x24 + 0,

    FT_Err_Invalid_Slot_Handle = 0x25 + 0,

    FT_Err_Invalid_CharMap_Handle = 0x26 + 0,

    FT_Err_Invalid_Cache_Handle = 0x27 + 0,

    FT_Err_Invalid_Stream_Handle = 0x28 + 0,

    FT_Err_Too_Many_Drivers = 0x30 + 0,

    FT_Err_Too_Many_Extensions = 0x31 + 0,

    FT_Err_Out_Of_Memory = 0x40 + 0,

    FT_Err_Unlisted_Object = 0x41 + 0,

    FT_Err_Cannot_Open_Stream = 0x51 + 0,

    FT_Err_Invalid_Stream_Seek = 0x52 + 0,

    FT_Err_Invalid_Stream_Skip = 0x53 + 0,

    FT_Err_Invalid_Stream_Read = 0x54 + 0,

    FT_Err_Invalid_Stream_Operation = 0x55 + 0,

    FT_Err_Invalid_Frame_Operation = 0x56 + 0,

    FT_Err_Nested_Frame_Access = 0x57 + 0,

    FT_Err_Invalid_Frame_Read = 0x58 + 0,

    FT_Err_Raster_Uninitialized = 0x60 + 0,

    FT_Err_Raster_Corrupted = 0x61 + 0,

    FT_Err_Raster_Overflow = 0x62 + 0,

    FT_Err_Raster_Negative_Height = 0x63 + 0,

    FT_Err_Too_Many_Caches = 0x70 + 0,

    FT_Err_Invalid_Opcode = 0x80 + 0,

    FT_Err_Too_Few_Arguments = 0x81 + 0,

    FT_Err_Stack_Overflow = 0x82 + 0,

    FT_Err_Code_Overflow = 0x83 + 0,

    FT_Err_Bad_Argument = 0x84 + 0,

    FT_Err_Divide_By_Zero = 0x85 + 0,

    FT_Err_Invalid_Reference = 0x86 + 0,

    FT_Err_Debug_OpCode = 0x87 + 0,

    FT_Err_ENDF_In_Exec_Stream = 0x88 + 0,

    FT_Err_Nested_DEFS = 0x89 + 0,

    FT_Err_Invalid_CodeRange = 0x8A + 0,

    FT_Err_Execution_Too_Long = 0x8B + 0,

    FT_Err_Too_Many_Function_Defs = 0x8C + 0,

    FT_Err_Too_Many_Instruction_Defs = 0x8D + 0,

    FT_Err_Table_Missing = 0x8E + 0,

    FT_Err_Horiz_Header_Missing = 0x8F + 0,

    FT_Err_Locations_Missing = 0x90 + 0,

    FT_Err_Name_Table_Missing = 0x91 + 0,

    FT_Err_CMap_Table_Missing = 0x92 + 0,

    FT_Err_Hmtx_Table_Missing = 0x93 + 0,

    FT_Err_Post_Table_Missing = 0x94 + 0,

    FT_Err_Invalid_Horiz_Metrics = 0x95 + 0,

    FT_Err_Invalid_CharMap_Format = 0x96 + 0,

    FT_Err_Invalid_PPem = 0x97 + 0,

    FT_Err_Invalid_Vert_Metrics = 0x98 + 0,

    FT_Err_Could_Not_Find_Context = 0x99 + 0,

    FT_Err_Invalid_Post_Table_Format = 0x9A + 0,

    FT_Err_Invalid_Post_Table = 0x9B + 0,

    FT_Err_DEF_In_Glyf_Bytecode = 0x9C + 0,

    FT_Err_Missing_Bitmap = 0x9D + 0,

    FT_Err_Missing_SVG_Hooks = 0x9E + 0,

    FT_Err_Syntax_Error = 0xA0 + 0,

    FT_Err_Stack_Underflow = 0xA1 + 0,

    FT_Err_Ignore = 0xA2 + 0,

    FT_Err_No_Unicode_Glyph_Name = 0xA3 + 0,

    FT_Err_Glyph_Too_Big = 0xA4 + 0,

    FT_Err_Missing_Startfont_Field = 0xB0 + 0,

    FT_Err_Missing_Font_Field = 0xB1 + 0,

    FT_Err_Missing_Size_Field = 0xB2 + 0,

    FT_Err_Missing_Fontboundingbox_Field = 0xB3 + 0,

    FT_Err_Missing_Chars_Field = 0xB4 + 0,

    FT_Err_Missing_Startchar_Field = 0xB5 + 0,

    FT_Err_Missing_Encoding_Field = 0xB6 + 0,

    FT_Err_Missing_Bbx_Field = 0xB7 + 0,

    FT_Err_Bbx_Too_Big = 0xB8 + 0,

    FT_Err_Corrupted_Font_Header = 0xB9 + 0,

    FT_Err_Corrupted_Font_Glyphs = 0xBA + 0,

    FT_Err_Max
};

__attribute__((visibility("default"))) extern const char *
FT_Error_String(FT_Error error_code);

typedef struct FT_Glyph_Metrics_
{
    FT_Pos width;
    FT_Pos height;

    FT_Pos horiBearingX;
    FT_Pos horiBearingY;
    FT_Pos horiAdvance;

    FT_Pos vertBearingX;
    FT_Pos vertBearingY;
    FT_Pos vertAdvance;

} FT_Glyph_Metrics;

typedef struct FT_Bitmap_Size_
{
    FT_Short height;
    FT_Short width;

    FT_Pos size;

    FT_Pos x_ppem;
    FT_Pos y_ppem;

} FT_Bitmap_Size;

typedef struct FT_LibraryRec_ *FT_Library;

typedef struct FT_ModuleRec_ *FT_Module;

typedef struct FT_DriverRec_ *FT_Driver;

typedef struct FT_RendererRec_ *FT_Renderer;

typedef struct FT_FaceRec_ *FT_Face;

typedef struct FT_SizeRec_ *FT_Size;

typedef struct FT_GlyphSlotRec_ *FT_GlyphSlot;

typedef struct FT_CharMapRec_ *FT_CharMap;

typedef enum FT_Encoding_
{
    FT_ENCODING_NONE = (((FT_UInt32)(unsigned char)(0) << 24) | ((FT_UInt32)(unsigned char)(0) << 16) | ((FT_UInt32)(unsigned char)(0) << 8) | (FT_UInt32)(unsigned char)(0)),

    FT_ENCODING_MS_SYMBOL = (((FT_UInt32)(unsigned char)('s') << 24) | ((FT_UInt32)(unsigned char)('y') << 16) | ((FT_UInt32)(unsigned char)('m') << 8) | (FT_UInt32)(unsigned char)('b')),
    FT_ENCODING_UNICODE = (((FT_UInt32)(unsigned char)('u') << 24) | ((FT_UInt32)(unsigned char)('n') << 16) | ((FT_UInt32)(unsigned char)('i') << 8) | (FT_UInt32)(unsigned char)('c')),

    FT_ENCODING_SJIS = (((FT_UInt32)(unsigned char)('s') << 24) | ((FT_UInt32)(unsigned char)('j') << 16) | ((FT_UInt32)(unsigned char)('i') << 8) | (FT_UInt32)(unsigned char)('s')),
    FT_ENCODING_PRC = (((FT_UInt32)(unsigned char)('g') << 24) | ((FT_UInt32)(unsigned char)('b') << 16) | ((FT_UInt32)(unsigned char)(' ') << 8) | (FT_UInt32)(unsigned char)(' ')),
    FT_ENCODING_BIG5 = (((FT_UInt32)(unsigned char)('b') << 24) | ((FT_UInt32)(unsigned char)('i') << 16) | ((FT_UInt32)(unsigned char)('g') << 8) | (FT_UInt32)(unsigned char)('5')),
    FT_ENCODING_WANSUNG = (((FT_UInt32)(unsigned char)('w') << 24) | ((FT_UInt32)(unsigned char)('a') << 16) | ((FT_UInt32)(unsigned char)('n') << 8) | (FT_UInt32)(unsigned char)('s')),
    FT_ENCODING_JOHAB = (((FT_UInt32)(unsigned char)('j') << 24) | ((FT_UInt32)(unsigned char)('o') << 16) | ((FT_UInt32)(unsigned char)('h') << 8) | (FT_UInt32)(unsigned char)('a')),

    FT_ENCODING_GB2312 = FT_ENCODING_PRC,
    FT_ENCODING_MS_SJIS = FT_ENCODING_SJIS,
    FT_ENCODING_MS_GB2312 = FT_ENCODING_PRC,
    FT_ENCODING_MS_BIG5 = FT_ENCODING_BIG5,
    FT_ENCODING_MS_WANSUNG = FT_ENCODING_WANSUNG,
    FT_ENCODING_MS_JOHAB = FT_ENCODING_JOHAB,

    FT_ENCODING_ADOBE_STANDARD = (((FT_UInt32)(unsigned char)('A') << 24) | ((FT_UInt32)(unsigned char)('D') << 16) | ((FT_UInt32)(unsigned char)('O') << 8) | (FT_UInt32)(unsigned char)('B')),
    FT_ENCODING_ADOBE_EXPERT = (((FT_UInt32)(unsigned char)('A') << 24) | ((FT_UInt32)(unsigned char)('D') << 16) | ((FT_UInt32)(unsigned char)('B') << 8) | (FT_UInt32)(unsigned char)('E')),
    FT_ENCODING_ADOBE_CUSTOM = (((FT_UInt32)(unsigned char)('A') << 24) | ((FT_UInt32)(unsigned char)('D') << 16) | ((FT_UInt32)(unsigned char)('B') << 8) | (FT_UInt32)(unsigned char)('C')),
    FT_ENCODING_ADOBE_LATIN_1 = (((FT_UInt32)(unsigned char)('l') << 24) | ((FT_UInt32)(unsigned char)('a') << 16) | ((FT_UInt32)(unsigned char)('t') << 8) | (FT_UInt32)(unsigned char)('1')),

    FT_ENCODING_OLD_LATIN_2 = (((FT_UInt32)(unsigned char)('l') << 24) | ((FT_UInt32)(unsigned char)('a') << 16) | ((FT_UInt32)(unsigned char)('t') << 8) | (FT_UInt32)(unsigned char)('2')),

    FT_ENCODING_APPLE_ROMAN = (((FT_UInt32)(unsigned char)('a') << 24) | ((FT_UInt32)(unsigned char)('r') << 16) | ((FT_UInt32)(unsigned char)('m') << 8) | (FT_UInt32)(unsigned char)('n'))

} FT_Encoding;

typedef struct FT_CharMapRec_
{
    FT_Face face;
    FT_Encoding encoding;
    FT_UShort platform_id;
    FT_UShort encoding_id;

} FT_CharMapRec;

typedef struct FT_Face_InternalRec_ *FT_Face_Internal;

typedef struct FT_FaceRec_
{
    FT_Long num_faces;
    FT_Long face_index;

    FT_Long face_flags;
    FT_Long style_flags;

    FT_Long num_glyphs;

    FT_String *family_name;
    FT_String *style_name;

    FT_Int num_fixed_sizes;
    FT_Bitmap_Size *available_sizes;

    FT_Int num_charmaps;
    FT_CharMap *charmaps;

    FT_Generic generic;

    FT_BBox bbox;

    FT_UShort units_per_EM;
    FT_Short ascender;
    FT_Short descender;
    FT_Short height;

    FT_Short max_advance_width;
    FT_Short max_advance_height;

    FT_Short underline_position;
    FT_Short underline_thickness;

    FT_GlyphSlot glyph;
    FT_Size size;
    FT_CharMap charmap;

    FT_Driver driver;
    FT_Memory memory;
    FT_Stream stream;

    FT_ListRec sizes_list;

    FT_Generic autohint;
    void *extensions;

    FT_Face_Internal internal;

} FT_FaceRec;

typedef struct FT_Size_InternalRec_ *FT_Size_Internal;

typedef struct FT_Size_Metrics_
{
    FT_UShort x_ppem;
    FT_UShort y_ppem;

    FT_Fixed x_scale;
    FT_Fixed y_scale;

    FT_Pos ascender;
    FT_Pos descender;
    FT_Pos height;
    FT_Pos max_advance;

} FT_Size_Metrics;

typedef struct FT_SizeRec_
{
    FT_Face face;
    FT_Generic generic;
    FT_Size_Metrics metrics;
    FT_Size_Internal internal;

} FT_SizeRec;

typedef struct FT_SubGlyphRec_ *FT_SubGlyph;

typedef struct FT_Slot_InternalRec_ *FT_Slot_Internal;

typedef struct FT_GlyphSlotRec_
{
    FT_Library library;
    FT_Face face;
    FT_GlyphSlot next;
    FT_UInt glyph_index;
    FT_Generic generic;

    FT_Glyph_Metrics metrics;
    FT_Fixed linearHoriAdvance;
    FT_Fixed linearVertAdvance;
    FT_Vector advance;

    FT_Glyph_Format format;

    FT_Bitmap bitmap;
    FT_Int bitmap_left;
    FT_Int bitmap_top;

    FT_Outline outline;

    FT_UInt num_subglyphs;
    FT_SubGlyph subglyphs;

    void *control_data;
    long control_len;

    FT_Pos lsb_delta;
    FT_Pos rsb_delta;

    void *other;

    FT_Slot_Internal internal;

} FT_GlyphSlotRec;

__attribute__((visibility("default"))) extern FT_Error
FT_Init_FreeType(FT_Library *alibrary);

__attribute__((visibility("default"))) extern FT_Error
FT_Done_FreeType(FT_Library library);

typedef struct FT_Parameter_
{
    FT_ULong tag;
    FT_Pointer data;

} FT_Parameter;

typedef struct FT_Open_Args_
{
    FT_UInt flags;
    const FT_Byte *memory_base;
    FT_Long memory_size;
    FT_String *pathname;
    FT_Stream stream;
    FT_Module driver;
    FT_Int num_params;
    FT_Parameter *params;

} FT_Open_Args;

__attribute__((visibility("default"))) extern FT_Error
FT_New_Face(FT_Library library,
            const char *filepathname,
            FT_Long face_index,
            FT_Face *aface);

__attribute__((visibility("default"))) extern FT_Error
FT_New_Memory_Face(FT_Library library,
                   const FT_Byte *file_base,
                   FT_Long file_size,
                   FT_Long face_index,
                   FT_Face *aface);

__attribute__((visibility("default"))) extern FT_Error
FT_Open_Face(FT_Library library,
             const FT_Open_Args *args,
             FT_Long face_index,
             FT_Face *aface);

__attribute__((visibility("default"))) extern FT_Error
FT_Attach_File(FT_Face face,
               const char *filepathname);

__attribute__((visibility("default"))) extern FT_Error
FT_Attach_Stream(FT_Face face,
                 const FT_Open_Args *parameters);

__attribute__((visibility("default"))) extern FT_Error
FT_Reference_Face(FT_Face face);

__attribute__((visibility("default"))) extern FT_Error
FT_Done_Face(FT_Face face);

__attribute__((visibility("default"))) extern FT_Error
FT_Select_Size(FT_Face face,
               FT_Int strike_index);

typedef enum FT_Size_Request_Type_
{
    FT_SIZE_REQUEST_TYPE_NOMINAL,
    FT_SIZE_REQUEST_TYPE_REAL_DIM,
    FT_SIZE_REQUEST_TYPE_BBOX,
    FT_SIZE_REQUEST_TYPE_CELL,
    FT_SIZE_REQUEST_TYPE_SCALES,

    FT_SIZE_REQUEST_TYPE_MAX

} FT_Size_Request_Type;

typedef struct FT_Size_RequestRec_
{
    FT_Size_Request_Type type;
    FT_Long width;
    FT_Long height;
    FT_UInt horiResolution;
    FT_UInt vertResolution;

} FT_Size_RequestRec;

typedef struct FT_Size_RequestRec_ *FT_Size_Request;

__attribute__((visibility("default"))) extern FT_Error
FT_Request_Size(FT_Face face,
                FT_Size_Request req);

__attribute__((visibility("default"))) extern FT_Error
FT_Set_Char_Size(FT_Face face,
                 FT_F26Dot6 char_width,
                 FT_F26Dot6 char_height,
                 FT_UInt horz_resolution,
                 FT_UInt vert_resolution);

__attribute__((visibility("default"))) extern FT_Error
FT_Set_Pixel_Sizes(FT_Face face,
                   FT_UInt pixel_width,
                   FT_UInt pixel_height);

__attribute__((visibility("default"))) extern FT_Error
FT_Load_Glyph(FT_Face face,
              FT_UInt glyph_index,
              FT_Int32 load_flags);

__attribute__((visibility("default"))) extern FT_Error
FT_Load_Char(FT_Face face,
             FT_ULong char_code,
             FT_Int32 load_flags);

__attribute__((visibility("default"))) extern void
FT_Set_Transform(FT_Face face,
                 FT_Matrix *matrix,
                 FT_Vector *delta);

__attribute__((visibility("default"))) extern void
FT_Get_Transform(FT_Face face,
                 FT_Matrix *matrix,
                 FT_Vector *delta);

typedef enum FT_Render_Mode_
{
    FT_RENDER_MODE_NORMAL = 0,
    FT_RENDER_MODE_LIGHT,
    FT_RENDER_MODE_MONO,
    FT_RENDER_MODE_LCD,
    FT_RENDER_MODE_LCD_V,
    FT_RENDER_MODE_SDF,

    FT_RENDER_MODE_MAX

} FT_Render_Mode;

__attribute__((visibility("default"))) extern FT_Error
FT_Render_Glyph(FT_GlyphSlot slot,
                FT_Render_Mode render_mode);

typedef enum FT_Kerning_Mode_
{
    FT_KERNING_DEFAULT = 0,
    FT_KERNING_UNFITTED,
    FT_KERNING_UNSCALED

} FT_Kerning_Mode;

__attribute__((visibility("default"))) extern FT_Error
FT_Get_Kerning(FT_Face face,
               FT_UInt left_glyph,
               FT_UInt right_glyph,
               FT_UInt kern_mode,
               FT_Vector *akerning);

__attribute__((visibility("default"))) extern FT_Error
FT_Get_Track_Kerning(FT_Face face,
                     FT_Fixed point_size,
                     FT_Int degree,
                     FT_Fixed *akerning);

__attribute__((visibility("default"))) extern FT_Error
FT_Select_Charmap(FT_Face face,
                  FT_Encoding encoding);

__attribute__((visibility("default"))) extern FT_Error
FT_Set_Charmap(FT_Face face,
               FT_CharMap charmap);

__attribute__((visibility("default"))) extern FT_Int
FT_Get_Charmap_Index(FT_CharMap charmap);

__attribute__((visibility("default"))) extern FT_UInt
FT_Get_Char_Index(FT_Face face,
                  FT_ULong charcode);

__attribute__((visibility("default"))) extern FT_ULong
FT_Get_First_Char(FT_Face face,
                  FT_UInt *agindex);

__attribute__((visibility("default"))) extern FT_ULong
FT_Get_Next_Char(FT_Face face,
                 FT_ULong char_code,
                 FT_UInt *agindex);

__attribute__((visibility("default"))) extern FT_Error
FT_Face_Properties(FT_Face face,
                   FT_UInt num_properties,
                   FT_Parameter *properties);

__attribute__((visibility("default"))) extern FT_UInt
FT_Get_Name_Index(FT_Face face,
                  const FT_String *glyph_name);

__attribute__((visibility("default"))) extern FT_Error
FT_Get_Glyph_Name(FT_Face face,
                  FT_UInt glyph_index,
                  FT_Pointer buffer,
                  FT_UInt buffer_max);

__attribute__((visibility("default"))) extern const char *
FT_Get_Postscript_Name(FT_Face face);

__attribute__((visibility("default"))) extern FT_Error
FT_Get_SubGlyph_Info(FT_GlyphSlot glyph,
                     FT_UInt sub_index,
                     FT_Int *p_index,
                     FT_UInt *p_flags,
                     FT_Int *p_arg1,
                     FT_Int *p_arg2,
                     FT_Matrix *p_transform);

__attribute__((visibility("default"))) extern FT_UShort
FT_Get_FSType_Flags(FT_Face face);

__attribute__((visibility("default"))) extern FT_UInt
FT_Face_GetCharVariantIndex(FT_Face face,
                            FT_ULong charcode,
                            FT_ULong variantSelector);

__attribute__((visibility("default"))) extern FT_Int
FT_Face_GetCharVariantIsDefault(FT_Face face,
                                FT_ULong charcode,
                                FT_ULong variantSelector);

__attribute__((visibility("default"))) extern FT_UInt32 *
FT_Face_GetVariantSelectors(FT_Face face);

__attribute__((visibility("default"))) extern FT_UInt32 *
FT_Face_GetVariantsOfChar(FT_Face face,
                          FT_ULong charcode);

__attribute__((visibility("default"))) extern FT_UInt32 *
FT_Face_GetCharsOfVariant(FT_Face face,
                          FT_ULong variantSelector);

__attribute__((visibility("default"))) extern FT_Long
FT_MulDiv(FT_Long a,
          FT_Long b,
          FT_Long c);

__attribute__((visibility("default"))) extern FT_Long
FT_MulFix(FT_Long a,
          FT_Long b);

__attribute__((visibility("default"))) extern FT_Long
FT_DivFix(FT_Long a,
          FT_Long b);

__attribute__((visibility("default"))) extern FT_Fixed
FT_RoundFix(FT_Fixed a);

__attribute__((visibility("default"))) extern FT_Fixed
FT_CeilFix(FT_Fixed a);

__attribute__((visibility("default"))) extern FT_Fixed
FT_FloorFix(FT_Fixed a);

__attribute__((visibility("default"))) extern void
FT_Vector_Transform(FT_Vector *vector,
                    const FT_Matrix *matrix);

__attribute__((visibility("default"))) extern void
FT_Library_Version(FT_Library library,
                   FT_Int *amajor,
                   FT_Int *aminor,
                   FT_Int *apatch);

__attribute__((visibility("default"))) extern FT_Bool
FT_Face_CheckTrueTypePatents(FT_Face face);

__attribute__((visibility("default"))) extern FT_Bool
FT_Face_SetUnpatentedHinting(FT_Face face,
                             FT_Bool value);

__attribute__((visibility("default"))) extern FT_Error
FT_Outline_Decompose(FT_Outline *outline,
                     const FT_Outline_Funcs *func_interface,
                     void *user);

__attribute__((visibility("default"))) extern FT_Error
FT_Outline_New(FT_Library library,
               FT_UInt numPoints,
               FT_Int numContours,
               FT_Outline *anoutline);

__attribute__((visibility("default"))) extern FT_Error
FT_Outline_Done(FT_Library library,
                FT_Outline *outline);

__attribute__((visibility("default"))) extern FT_Error
FT_Outline_Check(FT_Outline *outline);

__attribute__((visibility("default"))) extern void
FT_Outline_Get_CBox(const FT_Outline *outline,
                    FT_BBox *acbox);

__attribute__((visibility("default"))) extern void
FT_Outline_Translate(const FT_Outline *outline,
                     FT_Pos xOffset,
                     FT_Pos yOffset);

__attribute__((visibility("default"))) extern FT_Error
FT_Outline_Copy(const FT_Outline *source,
                FT_Outline *target);

__attribute__((visibility("default"))) extern void
FT_Outline_Transform(const FT_Outline *outline,
                     const FT_Matrix *matrix);

__attribute__((visibility("default"))) extern FT_Error
FT_Outline_Embolden(FT_Outline *outline,
                    FT_Pos strength);

__attribute__((visibility("default"))) extern FT_Error
FT_Outline_EmboldenXY(FT_Outline *outline,
                      FT_Pos xstrength,
                      FT_Pos ystrength);

__attribute__((visibility("default"))) extern void
FT_Outline_Reverse(FT_Outline *outline);

__attribute__((visibility("default"))) extern FT_Error
FT_Outline_Get_Bitmap(FT_Library library,
                      FT_Outline *outline,
                      const FT_Bitmap *abitmap);

__attribute__((visibility("default"))) extern FT_Error
FT_Outline_Render(FT_Library library,
                  FT_Outline *outline,
                  FT_Raster_Params *params);

typedef enum FT_Orientation_
{
    FT_ORIENTATION_TRUETYPE = 0,
    FT_ORIENTATION_POSTSCRIPT = 1,
    FT_ORIENTATION_FILL_RIGHT = FT_ORIENTATION_TRUETYPE,
    FT_ORIENTATION_FILL_LEFT = FT_ORIENTATION_POSTSCRIPT,
    FT_ORIENTATION_NONE

} FT_Orientation;

__attribute__((visibility("default"))) extern FT_Orientation
FT_Outline_Get_Orientation(FT_Outline *outline);

typedef struct FT_Glyph_Class_ FT_Glyph_Class;

typedef struct FT_GlyphRec_ *FT_Glyph;

typedef struct FT_GlyphRec_
{
    FT_Library library;
    const FT_Glyph_Class *clazz;
    FT_Glyph_Format format;
    FT_Vector advance;

} FT_GlyphRec;

typedef struct FT_BitmapGlyphRec_ *FT_BitmapGlyph;

typedef struct FT_BitmapGlyphRec_
{
    FT_GlyphRec root;
    FT_Int left;
    FT_Int top;
    FT_Bitmap bitmap;

} FT_BitmapGlyphRec;

typedef struct FT_OutlineGlyphRec_ *FT_OutlineGlyph;

typedef struct FT_OutlineGlyphRec_
{
    FT_GlyphRec root;
    FT_Outline outline;

} FT_OutlineGlyphRec;

typedef struct FT_SvgGlyphRec_ *FT_SvgGlyph;

typedef struct FT_SvgGlyphRec_
{
    FT_GlyphRec root;

    FT_Byte *svg_document;
    FT_ULong svg_document_length;

    FT_UInt glyph_index;

    FT_Size_Metrics metrics;
    FT_UShort units_per_EM;

    FT_UShort start_glyph_id;
    FT_UShort end_glyph_id;

    FT_Matrix transform;
    FT_Vector delta;

} FT_SvgGlyphRec;

__attribute__((visibility("default"))) extern FT_Error
FT_New_Glyph(FT_Library library,
             FT_Glyph_Format format,
             FT_Glyph *aglyph);

__attribute__((visibility("default"))) extern FT_Error
FT_Get_Glyph(FT_GlyphSlot slot,
             FT_Glyph *aglyph);

__attribute__((visibility("default"))) extern FT_Error
FT_Glyph_Copy(FT_Glyph source,
              FT_Glyph *target);

__attribute__((visibility("default"))) extern FT_Error
FT_Glyph_Transform(FT_Glyph glyph,
                   const FT_Matrix *matrix,
                   const FT_Vector *delta);

typedef enum FT_Glyph_BBox_Mode_
{
    FT_GLYPH_BBOX_UNSCALED = 0,
    FT_GLYPH_BBOX_SUBPIXELS = 0,
    FT_GLYPH_BBOX_GRIDFIT = 1,
    FT_GLYPH_BBOX_TRUNCATE = 2,
    FT_GLYPH_BBOX_PIXELS = 3

} FT_Glyph_BBox_Mode;

__attribute__((visibility("default"))) extern void
FT_Glyph_Get_CBox(FT_Glyph glyph,
                  FT_UInt bbox_mode,
                  FT_BBox *acbox);

__attribute__((visibility("default"))) extern FT_Error
FT_Glyph_To_Bitmap(FT_Glyph *the_glyph,
                   FT_Render_Mode render_mode,
                   const FT_Vector *origin,
                   FT_Bool destroy);

__attribute__((visibility("default"))) extern void
FT_Done_Glyph(FT_Glyph glyph);

__attribute__((visibility("default"))) extern void
FT_Matrix_Multiply(const FT_Matrix *a,
                   FT_Matrix *b);

__attribute__((visibility("default"))) extern FT_Error
FT_Matrix_Invert(FT_Matrix *matrix);

typedef struct FT_StrokerRec_ *FT_Stroker;

typedef enum FT_Stroker_LineJoin_
{
    FT_STROKER_LINEJOIN_ROUND = 0,
    FT_STROKER_LINEJOIN_BEVEL = 1,
    FT_STROKER_LINEJOIN_MITER_VARIABLE = 2,
    FT_STROKER_LINEJOIN_MITER = FT_STROKER_LINEJOIN_MITER_VARIABLE,
    FT_STROKER_LINEJOIN_MITER_FIXED = 3

} FT_Stroker_LineJoin;

typedef enum FT_Stroker_LineCap_
{
    FT_STROKER_LINECAP_BUTT = 0,
    FT_STROKER_LINECAP_ROUND,
    FT_STROKER_LINECAP_SQUARE

} FT_Stroker_LineCap;

typedef enum FT_StrokerBorder_
{
    FT_STROKER_BORDER_LEFT = 0,
    FT_STROKER_BORDER_RIGHT

} FT_StrokerBorder;

__attribute__((visibility("default"))) extern FT_StrokerBorder
FT_Outline_GetInsideBorder(FT_Outline *outline);

__attribute__((visibility("default"))) extern FT_StrokerBorder
FT_Outline_GetOutsideBorder(FT_Outline *outline);

__attribute__((visibility("default"))) extern FT_Error
FT_Stroker_New(FT_Library library,
               FT_Stroker *astroker);

__attribute__((visibility("default"))) extern void
FT_Stroker_Set(FT_Stroker stroker,
               FT_Fixed radius,
               FT_Stroker_LineCap line_cap,
               FT_Stroker_LineJoin line_join,
               FT_Fixed miter_limit);

__attribute__((visibility("default"))) extern void
FT_Stroker_Rewind(FT_Stroker stroker);

__attribute__((visibility("default"))) extern FT_Error
FT_Stroker_ParseOutline(FT_Stroker stroker,
                        FT_Outline *outline,
                        FT_Bool opened);

__attribute__((visibility("default"))) extern FT_Error
FT_Stroker_BeginSubPath(FT_Stroker stroker,
                        FT_Vector *to,
                        FT_Bool open);

__attribute__((visibility("default"))) extern FT_Error
FT_Stroker_EndSubPath(FT_Stroker stroker);

__attribute__((visibility("default"))) extern FT_Error
FT_Stroker_LineTo(FT_Stroker stroker,
                  FT_Vector *to);

__attribute__((visibility("default"))) extern FT_Error
FT_Stroker_ConicTo(FT_Stroker stroker,
                   FT_Vector *control,
                   FT_Vector *to);

__attribute__((visibility("default"))) extern FT_Error
FT_Stroker_CubicTo(FT_Stroker stroker,
                   FT_Vector *control1,
                   FT_Vector *control2,
                   FT_Vector *to);

__attribute__((visibility("default"))) extern FT_Error
FT_Stroker_GetBorderCounts(FT_Stroker stroker,
                           FT_StrokerBorder border,
                           FT_UInt *anum_points,
                           FT_UInt *anum_contours);

__attribute__((visibility("default"))) extern void
FT_Stroker_ExportBorder(FT_Stroker stroker,
                        FT_StrokerBorder border,
                        FT_Outline *outline);

__attribute__((visibility("default"))) extern FT_Error
FT_Stroker_GetCounts(FT_Stroker stroker,
                     FT_UInt *anum_points,
                     FT_UInt *anum_contours);

__attribute__((visibility("default"))) extern void
FT_Stroker_Export(FT_Stroker stroker,
                  FT_Outline *outline);

__attribute__((visibility("default"))) extern void
FT_Stroker_Done(FT_Stroker stroker);

__attribute__((visibility("default"))) extern FT_Error
FT_Glyph_Stroke(FT_Glyph *pglyph,
                FT_Stroker stroker,
                FT_Bool destroy);

__attribute__((visibility("default"))) extern FT_Error
FT_Glyph_StrokeBorder(FT_Glyph *pglyph,
                      FT_Stroker stroker,
                      FT_Bool inside,
                      FT_Bool destroy);

typedef struct TT_Header_
{
    FT_Fixed Table_Version;
    FT_Fixed Font_Revision;

    FT_Long CheckSum_Adjust;
    FT_Long Magic_Number;

    FT_UShort Flags;
    FT_UShort Units_Per_EM;

    FT_ULong Created[2];
    FT_ULong Modified[2];

    FT_Short xMin;
    FT_Short yMin;
    FT_Short xMax;
    FT_Short yMax;

    FT_UShort Mac_Style;
    FT_UShort Lowest_Rec_PPEM;

    FT_Short Font_Direction;
    FT_Short Index_To_Loc_Format;
    FT_Short Glyph_Data_Format;

} TT_Header;

typedef struct TT_HoriHeader_
{
    FT_Fixed Version;
    FT_Short Ascender;
    FT_Short Descender;
    FT_Short Line_Gap;

    FT_UShort advance_Width_Max;

    FT_Short min_Left_Side_Bearing;
    FT_Short min_Right_Side_Bearing;
    FT_Short xMax_Extent;
    FT_Short caret_Slope_Rise;
    FT_Short caret_Slope_Run;
    FT_Short caret_Offset;

    FT_Short Reserved[4];

    FT_Short metric_Data_Format;
    FT_UShort number_Of_HMetrics;

    void *long_metrics;
    void *short_metrics;

} TT_HoriHeader;

typedef struct TT_VertHeader_
{
    FT_Fixed Version;
    FT_Short Ascender;
    FT_Short Descender;
    FT_Short Line_Gap;

    FT_UShort advance_Height_Max;

    FT_Short min_Top_Side_Bearing;
    FT_Short min_Bottom_Side_Bearing;
    FT_Short yMax_Extent;
    FT_Short caret_Slope_Rise;
    FT_Short caret_Slope_Run;
    FT_Short caret_Offset;

    FT_Short Reserved[4];

    FT_Short metric_Data_Format;
    FT_UShort number_Of_VMetrics;

    void *long_metrics;
    void *short_metrics;

} TT_VertHeader;

typedef struct TT_OS2_
{
    FT_UShort version;
    FT_Short xAvgCharWidth;
    FT_UShort usWeightClass;
    FT_UShort usWidthClass;
    FT_UShort fsType;
    FT_Short ySubscriptXSize;
    FT_Short ySubscriptYSize;
    FT_Short ySubscriptXOffset;
    FT_Short ySubscriptYOffset;
    FT_Short ySuperscriptXSize;
    FT_Short ySuperscriptYSize;
    FT_Short ySuperscriptXOffset;
    FT_Short ySuperscriptYOffset;
    FT_Short yStrikeoutSize;
    FT_Short yStrikeoutPosition;
    FT_Short sFamilyClass;

    FT_Byte panose[10];

    FT_ULong ulUnicodeRange1;
    FT_ULong ulUnicodeRange2;
    FT_ULong ulUnicodeRange3;
    FT_ULong ulUnicodeRange4;

    FT_Char achVendID[4];

    FT_UShort fsSelection;
    FT_UShort usFirstCharIndex;
    FT_UShort usLastCharIndex;
    FT_Short sTypoAscender;
    FT_Short sTypoDescender;
    FT_Short sTypoLineGap;
    FT_UShort usWinAscent;
    FT_UShort usWinDescent;

    FT_ULong ulCodePageRange1;
    FT_ULong ulCodePageRange2;

    FT_Short sxHeight;
    FT_Short sCapHeight;
    FT_UShort usDefaultChar;
    FT_UShort usBreakChar;
    FT_UShort usMaxContext;

    FT_UShort usLowerOpticalPointSize;
    FT_UShort usUpperOpticalPointSize;

} TT_OS2;

typedef struct TT_Postscript_
{
    FT_Fixed FormatType;
    FT_Fixed italicAngle;
    FT_Short underlinePosition;
    FT_Short underlineThickness;
    FT_ULong isFixedPitch;
    FT_ULong minMemType42;
    FT_ULong maxMemType42;
    FT_ULong minMemType1;
    FT_ULong maxMemType1;

} TT_Postscript;

typedef struct TT_PCLT_
{
    FT_Fixed Version;
    FT_ULong FontNumber;
    FT_UShort Pitch;
    FT_UShort xHeight;
    FT_UShort Style;
    FT_UShort TypeFamily;
    FT_UShort CapHeight;
    FT_UShort SymbolSet;
    FT_Char TypeFace[16];
    FT_Char CharacterComplement[8];
    FT_Char FileName[6];
    FT_Char StrokeWeight;
    FT_Char WidthType;
    FT_Byte SerifStyle;
    FT_Byte Reserved;

} TT_PCLT;

typedef struct TT_MaxProfile_
{
    FT_Fixed version;
    FT_UShort numGlyphs;
    FT_UShort maxPoints;
    FT_UShort maxContours;
    FT_UShort maxCompositePoints;
    FT_UShort maxCompositeContours;
    FT_UShort maxZones;
    FT_UShort maxTwilightPoints;
    FT_UShort maxStorage;
    FT_UShort maxFunctionDefs;
    FT_UShort maxInstructionDefs;
    FT_UShort maxStackElements;
    FT_UShort maxSizeOfInstructions;
    FT_UShort maxComponentElements;
    FT_UShort maxComponentDepth;

} TT_MaxProfile;

typedef enum FT_Sfnt_Tag_
{
    FT_SFNT_HEAD,
    FT_SFNT_MAXP,
    FT_SFNT_OS2,
    FT_SFNT_HHEA,
    FT_SFNT_VHEA,
    FT_SFNT_POST,
    FT_SFNT_PCLT,

    FT_SFNT_MAX

} FT_Sfnt_Tag;

__attribute__((visibility("default"))) extern void *
FT_Get_Sfnt_Table(FT_Face face,
                  FT_Sfnt_Tag tag);

__attribute__((visibility("default"))) extern FT_Error
FT_Load_Sfnt_Table(FT_Face face,
                   FT_ULong tag,
                   FT_Long offset,
                   FT_Byte *buffer,
                   FT_ULong *length);

__attribute__((visibility("default"))) extern FT_Error
FT_Sfnt_Table_Info(FT_Face face,
                   FT_UInt table_index,
                   FT_ULong *tag,
                   FT_ULong *length);

__attribute__((visibility("default"))) extern FT_ULong
FT_Get_CMap_Language_ID(FT_CharMap charmap);

__attribute__((visibility("default"))) extern FT_Long
FT_Get_CMap_Format(FT_CharMap charmap);

typedef FT_Pointer FT_Module_Interface;

typedef FT_Error (*FT_Module_Constructor)(FT_Module module);

typedef void (*FT_Module_Destructor)(FT_Module module);

typedef FT_Module_Interface (*FT_Module_Requester)(FT_Module module,
                                                   const char *name);

typedef struct FT_Module_Class_
{
    FT_ULong module_flags;
    FT_Long module_size;
    const FT_String *module_name;
    FT_Fixed module_version;
    FT_Fixed module_requires;

    const void *module_interface;

    FT_Module_Constructor module_init;
    FT_Module_Destructor module_done;
    FT_Module_Requester get_interface;

} FT_Module_Class;

__attribute__((visibility("default"))) extern FT_Error
FT_Add_Module(FT_Library library,
              const FT_Module_Class *clazz);

__attribute__((visibility("default"))) extern FT_Module
FT_Get_Module(FT_Library library,
              const char *module_name);

__attribute__((visibility("default"))) extern FT_Error
FT_Remove_Module(FT_Library library,
                 FT_Module module);

__attribute__((visibility("default"))) extern FT_Error
FT_Property_Set(FT_Library library,
                const FT_String *module_name,
                const FT_String *property_name,
                const void *value);

__attribute__((visibility("default"))) extern FT_Error
FT_Property_Get(FT_Library library,
                const FT_String *module_name,
                const FT_String *property_name,
                void *value);

__attribute__((visibility("default"))) extern void
FT_Set_Default_Properties(FT_Library library);

__attribute__((visibility("default"))) extern FT_Error
FT_Reference_Library(FT_Library library);

__attribute__((visibility("default"))) extern FT_Error
FT_New_Library(FT_Memory memory,
               FT_Library *alibrary);

__attribute__((visibility("default"))) extern FT_Error
FT_Done_Library(FT_Library library);

typedef FT_Error (*FT_DebugHook_Func)(void *arg);

__attribute__((visibility("default"))) extern void
FT_Set_Debug_Hook(FT_Library library,
                  FT_UInt hook_index,
                  FT_DebugHook_Func debug_hook);

__attribute__((visibility("default"))) extern void
FT_Add_Default_Modules(FT_Library library);

typedef enum FT_TrueTypeEngineType_
{
    FT_TRUETYPE_ENGINE_TYPE_NONE = 0,
    FT_TRUETYPE_ENGINE_TYPE_UNPATENTED,
    FT_TRUETYPE_ENGINE_TYPE_PATENTED

} FT_TrueTypeEngineType;

__attribute__((visibility("default"))) extern FT_TrueTypeEngineType
FT_Get_TrueType_Engine_Type(FT_Library library);

_Static_assert(3 >= 0, "SDL_TTF_MAJOR_VERSION >= 0");
_Static_assert(3 <= 10, "SDL_TTF_MAJOR_VERSION <= 10");
_Static_assert(3 >= 0, "SDL_TTF_MINOR_VERSION >= 0");
_Static_assert(3 <= 999, "SDL_TTF_MINOR_VERSION <= 999");
_Static_assert(0 >= 0, "SDL_TTF_MICRO_VERSION >= 0");
_Static_assert(0 <= 999, "SDL_TTF_MICRO_VERSION <= 999");

typedef long long __m64 __attribute__((__vector_size__(8), __aligned__(8)));

typedef long long __v1di __attribute__((__vector_size__(8)));
typedef int __v2si __attribute__((__vector_size__(8)));
typedef short __v4hi __attribute__((__vector_size__(8)));
typedef char __v8qi __attribute__((__vector_size__(8)));

static __inline__ void __attribute__((__always_inline__, __nodebug__,
                                      __target__("mmx,no-evex512")))
_mm_empty(void)
{
    __builtin_ia32_emms();
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_cvtsi32_si64(int __i)
{
    return (__m64)__builtin_ia32_vec_init_v2si(__i, 0);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_cvtsi64_si32(__m64 __m)
{
    return __builtin_ia32_vec_ext_v2si((__v2si)__m, 0);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_cvtsi64_m64(long long __i)
{
    return (__m64)__i;
}

static __inline__ long long __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_cvtm64_si64(__m64 __m)
{
    return (long long)__m;
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_packs_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_packsswb((__v4hi)__m1, (__v4hi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_packs_pi32(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_packssdw((__v2si)__m1, (__v2si)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_packs_pu16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_packuswb((__v4hi)__m1, (__v4hi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_unpackhi_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_punpckhbw((__v8qi)__m1, (__v8qi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_unpackhi_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_punpckhwd((__v4hi)__m1, (__v4hi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_unpackhi_pi32(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_punpckhdq((__v2si)__m1, (__v2si)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_unpacklo_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_punpcklbw((__v8qi)__m1, (__v8qi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_unpacklo_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_punpcklwd((__v4hi)__m1, (__v4hi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_unpacklo_pi32(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_punpckldq((__v2si)__m1, (__v2si)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_add_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_paddb((__v8qi)__m1, (__v8qi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_add_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_paddw((__v4hi)__m1, (__v4hi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_add_pi32(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_paddd((__v2si)__m1, (__v2si)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_adds_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_paddsb((__v8qi)__m1, (__v8qi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_adds_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_paddsw((__v4hi)__m1, (__v4hi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_adds_pu8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_paddusb((__v8qi)__m1, (__v8qi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_adds_pu16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_paddusw((__v4hi)__m1, (__v4hi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_sub_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_psubb((__v8qi)__m1, (__v8qi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_sub_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_psubw((__v4hi)__m1, (__v4hi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_sub_pi32(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_psubd((__v2si)__m1, (__v2si)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_subs_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_psubsb((__v8qi)__m1, (__v8qi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_subs_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_psubsw((__v4hi)__m1, (__v4hi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_subs_pu8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_psubusb((__v8qi)__m1, (__v8qi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_subs_pu16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_psubusw((__v4hi)__m1, (__v4hi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_madd_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_pmaddwd((__v4hi)__m1, (__v4hi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_mulhi_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_pmulhw((__v4hi)__m1, (__v4hi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_mullo_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_pmullw((__v4hi)__m1, (__v4hi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_sll_pi16(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_psllw((__v4hi)__m, __count);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_slli_pi16(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_psllwi((__v4hi)__m, __count);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_sll_pi32(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_pslld((__v2si)__m, __count);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_slli_pi32(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_pslldi((__v2si)__m, __count);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_sll_si64(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_psllq((__v1di)__m, __count);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_slli_si64(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_psllqi((__v1di)__m, __count);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_sra_pi16(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_psraw((__v4hi)__m, __count);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_srai_pi16(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_psrawi((__v4hi)__m, __count);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_sra_pi32(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_psrad((__v2si)__m, __count);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_srai_pi32(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_psradi((__v2si)__m, __count);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_srl_pi16(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_psrlw((__v4hi)__m, __count);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_srli_pi16(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_psrlwi((__v4hi)__m, __count);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_srl_pi32(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_psrld((__v2si)__m, __count);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_srli_pi32(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_psrldi((__v2si)__m, __count);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_srl_si64(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_psrlq((__v1di)__m, __count);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_srli_si64(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_psrlqi((__v1di)__m, __count);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_and_si64(__m64 __m1, __m64 __m2)
{
    return __builtin_ia32_pand((__v1di)__m1, (__v1di)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_andnot_si64(__m64 __m1, __m64 __m2)
{
    return __builtin_ia32_pandn((__v1di)__m1, (__v1di)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_or_si64(__m64 __m1, __m64 __m2)
{
    return __builtin_ia32_por((__v1di)__m1, (__v1di)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_xor_si64(__m64 __m1, __m64 __m2)
{
    return __builtin_ia32_pxor((__v1di)__m1, (__v1di)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_cmpeq_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_pcmpeqb((__v8qi)__m1, (__v8qi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_cmpeq_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_pcmpeqw((__v4hi)__m1, (__v4hi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_cmpeq_pi32(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_pcmpeqd((__v2si)__m1, (__v2si)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_cmpgt_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_pcmpgtb((__v8qi)__m1, (__v8qi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_cmpgt_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_pcmpgtw((__v4hi)__m1, (__v4hi)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_cmpgt_pi32(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_pcmpgtd((__v2si)__m1, (__v2si)__m2);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_setzero_si64(void)
{
    return __extension__(__m64){ 0LL };
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_set_pi32(int __i1, int __i0)
{
    return (__m64)__builtin_ia32_vec_init_v2si(__i0, __i1);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_set_pi16(short __s3, short __s2, short __s1, short __s0)
{
    return (__m64)__builtin_ia32_vec_init_v4hi(__s0, __s1, __s2, __s3);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_set_pi8(char __b7, char __b6, char __b5, char __b4, char __b3, char __b2,
            char __b1, char __b0)
{
    return (__m64)__builtin_ia32_vec_init_v8qi(__b0, __b1, __b2, __b3,
                                               __b4, __b5, __b6, __b7);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_set1_pi32(int __i)
{
    return _mm_set_pi32(__i, __i);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_set1_pi16(short __w)
{
    return _mm_set_pi16(__w, __w, __w, __w);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_set1_pi8(char __b)
{
    return _mm_set_pi8(__b, __b, __b, __b, __b, __b, __b, __b);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_setr_pi32(int __i0, int __i1)
{
    return _mm_set_pi32(__i1, __i0);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_setr_pi16(short __w0, short __w1, short __w2, short __w3)
{
    return _mm_set_pi16(__w3, __w2, __w1, __w0);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,no-evex512"), __min_vector_width__(64)))
_mm_setr_pi8(char __b0, char __b1, char __b2, char __b3, char __b4, char __b5,
             char __b6, char __b7)
{
    return _mm_set_pi8(__b7, __b6, __b5, __b4, __b3, __b2, __b1, __b0);
}

typedef int __v4si __attribute__((__vector_size__(16)));
typedef float __v4sf __attribute__((__vector_size__(16)));
typedef float __m128 __attribute__((__vector_size__(16), __aligned__(16)));

typedef float __m128_u __attribute__((__vector_size__(16), __aligned__(1)));

typedef unsigned int __v4su __attribute__((__vector_size__(16)));

extern int posix_memalign(void **__memptr, size_t __alignment, size_t __size);

static __inline__ void *__attribute__((__always_inline__, __nodebug__,
                                       __malloc__, __alloc_size__(1),
                                       __alloc_align__(2)))
_mm_malloc(size_t __size, size_t __align)
{
    if (__align == 1) {
        return malloc(__size);
    }

    if (!(__align & (__align - 1)) && __align < sizeof(void *))
        __align = sizeof(void *);

    void *__mallocedMemory;

    if (posix_memalign(&__mallocedMemory, __align, __size))
        return 0;

    return __mallocedMemory;
}

static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_free(void *__p)
{

    free(__p);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_add_ss(__m128 __a, __m128 __b)
{
    __a[0] += __b[0];
    return __a;
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_add_ps(__m128 __a, __m128 __b)
{
    return (__m128)((__v4sf)__a + (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_sub_ss(__m128 __a, __m128 __b)
{
    __a[0] -= __b[0];
    return __a;
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_sub_ps(__m128 __a, __m128 __b)
{
    return (__m128)((__v4sf)__a - (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_mul_ss(__m128 __a, __m128 __b)
{
    __a[0] *= __b[0];
    return __a;
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_mul_ps(__m128 __a, __m128 __b)
{
    return (__m128)((__v4sf)__a * (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_div_ss(__m128 __a, __m128 __b)
{
    __a[0] /= __b[0];
    return __a;
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_div_ps(__m128 __a, __m128 __b)
{
    return (__m128)((__v4sf)__a / (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_sqrt_ss(__m128 __a)
{
    return (__m128)__builtin_ia32_sqrtss((__v4sf)__a);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_sqrt_ps(__m128 __a)
{
    return __builtin_ia32_sqrtps((__v4sf)__a);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_rcp_ss(__m128 __a)
{
    return (__m128)__builtin_ia32_rcpss((__v4sf)__a);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_rcp_ps(__m128 __a)
{
    return (__m128)__builtin_ia32_rcpps((__v4sf)__a);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_rsqrt_ss(__m128 __a)
{
    return __builtin_ia32_rsqrtss((__v4sf)__a);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_rsqrt_ps(__m128 __a)
{
    return __builtin_ia32_rsqrtps((__v4sf)__a);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_min_ss(__m128 __a, __m128 __b)
{
    return __builtin_ia32_minss((__v4sf)__a, (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_min_ps(__m128 __a, __m128 __b)
{
    return __builtin_ia32_minps((__v4sf)__a, (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_max_ss(__m128 __a, __m128 __b)
{
    return __builtin_ia32_maxss((__v4sf)__a, (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_max_ps(__m128 __a, __m128 __b)
{
    return __builtin_ia32_maxps((__v4sf)__a, (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_and_ps(__m128 __a, __m128 __b)
{
    return (__m128)((__v4su)__a & (__v4su)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_andnot_ps(__m128 __a, __m128 __b)
{
    return (__m128)(~(__v4su)__a & (__v4su)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_or_ps(__m128 __a, __m128 __b)
{
    return (__m128)((__v4su)__a | (__v4su)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_xor_ps(__m128 __a, __m128 __b)
{
    return (__m128)((__v4su)__a ^ (__v4su)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmpeq_ss(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_ia32_cmpeqss((__v4sf)__a, (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmpeq_ps(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_ia32_cmpeqps((__v4sf)__a, (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmplt_ss(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_ia32_cmpltss((__v4sf)__a, (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmplt_ps(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_ia32_cmpltps((__v4sf)__a, (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmple_ss(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_ia32_cmpless((__v4sf)__a, (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmple_ps(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_ia32_cmpleps((__v4sf)__a, (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmpgt_ss(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_shufflevector((__v4sf)__a,
                                           (__v4sf)__builtin_ia32_cmpltss((__v4sf)__b, (__v4sf)__a),
                                           4, 1, 2, 3);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmpgt_ps(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_ia32_cmpltps((__v4sf)__b, (__v4sf)__a);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmpge_ss(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_shufflevector((__v4sf)__a,
                                           (__v4sf)__builtin_ia32_cmpless((__v4sf)__b, (__v4sf)__a),
                                           4, 1, 2, 3);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmpge_ps(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_ia32_cmpleps((__v4sf)__b, (__v4sf)__a);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmpneq_ss(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_ia32_cmpneqss((__v4sf)__a, (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmpneq_ps(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_ia32_cmpneqps((__v4sf)__a, (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmpnlt_ss(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_ia32_cmpnltss((__v4sf)__a, (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmpnlt_ps(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_ia32_cmpnltps((__v4sf)__a, (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmpnle_ss(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_ia32_cmpnless((__v4sf)__a, (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmpnle_ps(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_ia32_cmpnleps((__v4sf)__a, (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmpngt_ss(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_shufflevector((__v4sf)__a,
                                           (__v4sf)__builtin_ia32_cmpnltss((__v4sf)__b, (__v4sf)__a),
                                           4, 1, 2, 3);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmpngt_ps(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_ia32_cmpnltps((__v4sf)__b, (__v4sf)__a);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmpnge_ss(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_shufflevector((__v4sf)__a,
                                           (__v4sf)__builtin_ia32_cmpnless((__v4sf)__b, (__v4sf)__a),
                                           4, 1, 2, 3);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmpnge_ps(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_ia32_cmpnleps((__v4sf)__b, (__v4sf)__a);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmpord_ss(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_ia32_cmpordss((__v4sf)__a, (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmpord_ps(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_ia32_cmpordps((__v4sf)__a, (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmpunord_ss(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_ia32_cmpunordss((__v4sf)__a, (__v4sf)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cmpunord_ps(__m128 __a, __m128 __b)
{
    return (__m128)__builtin_ia32_cmpunordps((__v4sf)__a, (__v4sf)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_comieq_ss(__m128 __a, __m128 __b)
{
    return __builtin_ia32_comieq((__v4sf)__a, (__v4sf)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_comilt_ss(__m128 __a, __m128 __b)
{
    return __builtin_ia32_comilt((__v4sf)__a, (__v4sf)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_comile_ss(__m128 __a, __m128 __b)
{
    return __builtin_ia32_comile((__v4sf)__a, (__v4sf)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_comigt_ss(__m128 __a, __m128 __b)
{
    return __builtin_ia32_comigt((__v4sf)__a, (__v4sf)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_comige_ss(__m128 __a, __m128 __b)
{
    return __builtin_ia32_comige((__v4sf)__a, (__v4sf)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_comineq_ss(__m128 __a, __m128 __b)
{
    return __builtin_ia32_comineq((__v4sf)__a, (__v4sf)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_ucomieq_ss(__m128 __a, __m128 __b)
{
    return __builtin_ia32_ucomieq((__v4sf)__a, (__v4sf)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_ucomilt_ss(__m128 __a, __m128 __b)
{
    return __builtin_ia32_ucomilt((__v4sf)__a, (__v4sf)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_ucomile_ss(__m128 __a, __m128 __b)
{
    return __builtin_ia32_ucomile((__v4sf)__a, (__v4sf)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_ucomigt_ss(__m128 __a, __m128 __b)
{
    return __builtin_ia32_ucomigt((__v4sf)__a, (__v4sf)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_ucomige_ss(__m128 __a, __m128 __b)
{
    return __builtin_ia32_ucomige((__v4sf)__a, (__v4sf)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_ucomineq_ss(__m128 __a, __m128 __b)
{
    return __builtin_ia32_ucomineq((__v4sf)__a, (__v4sf)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cvtss_si32(__m128 __a)
{
    return __builtin_ia32_cvtss2si((__v4sf)__a);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cvt_ss2si(__m128 __a)
{
    return _mm_cvtss_si32(__a);
}

static __inline__ long long __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cvtss_si64(__m128 __a)
{
    return __builtin_ia32_cvtss2si64((__v4sf)__a);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_cvtps_pi32(__m128 __a)
{
    return (__m64)__builtin_ia32_cvtps2pi((__v4sf)__a);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_cvt_ps2pi(__m128 __a)
{
    return _mm_cvtps_pi32(__a);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cvttss_si32(__m128 __a)
{
    return __builtin_ia32_cvttss2si((__v4sf)__a);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cvtt_ss2si(__m128 __a)
{
    return _mm_cvttss_si32(__a);
}

static __inline__ long long __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cvttss_si64(__m128 __a)
{
    return __builtin_ia32_cvttss2si64((__v4sf)__a);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_cvttps_pi32(__m128 __a)
{
    return (__m64)__builtin_ia32_cvttps2pi((__v4sf)__a);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_cvtt_ps2pi(__m128 __a)
{
    return _mm_cvttps_pi32(__a);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cvtsi32_ss(__m128 __a, int __b)
{
    __a[0] = __b;
    return __a;
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cvt_si2ss(__m128 __a, int __b)
{
    return _mm_cvtsi32_ss(__a, __b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cvtsi64_ss(__m128 __a, long long __b)
{
    __a[0] = __b;
    return __a;
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_cvtpi32_ps(__m128 __a, __m64 __b)
{
    return __builtin_ia32_cvtpi2ps((__v4sf)__a, (__v2si)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_cvt_pi2ps(__m128 __a, __m64 __b)
{
    return _mm_cvtpi32_ps(__a, __b);
}

static __inline__ float __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_cvtss_f32(__m128 __a)
{
    return __a[0];
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_loadh_pi(__m128 __a, const __m64 *__p)
{
    typedef float __mm_loadh_pi_v2f32 __attribute__((__vector_size__(8)));
    struct __mm_loadh_pi_struct
    {
        __mm_loadh_pi_v2f32 __u;
    } __attribute__((__packed__, __may_alias__));
    __mm_loadh_pi_v2f32 __b = ((const struct __mm_loadh_pi_struct *)__p)->__u;
    __m128 __bb = __builtin_shufflevector(__b, __b, 0, 1, 0, 1);
    return __builtin_shufflevector(__a, __bb, 0, 1, 4, 5);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_loadl_pi(__m128 __a, const __m64 *__p)
{
    typedef float __mm_loadl_pi_v2f32 __attribute__((__vector_size__(8)));
    struct __mm_loadl_pi_struct
    {
        __mm_loadl_pi_v2f32 __u;
    } __attribute__((__packed__, __may_alias__));
    __mm_loadl_pi_v2f32 __b = ((const struct __mm_loadl_pi_struct *)__p)->__u;
    __m128 __bb = __builtin_shufflevector(__b, __b, 0, 1, 0, 1);
    return __builtin_shufflevector(__a, __bb, 4, 5, 2, 3);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_load_ss(const float *__p)
{
    struct __mm_load_ss_struct
    {
        float __u;
    } __attribute__((__packed__, __may_alias__));
    float __u = ((const struct __mm_load_ss_struct *)__p)->__u;
    return __extension__(__m128){ __u, 0, 0, 0 };
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_load1_ps(const float *__p)
{
    struct __mm_load1_ps_struct
    {
        float __u;
    } __attribute__((__packed__, __may_alias__));
    float __u = ((const struct __mm_load1_ps_struct *)__p)->__u;
    return __extension__(__m128){ __u, __u, __u, __u };
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_load_ps(const float *__p)
{
    return *(const __m128 *)__p;
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_loadu_ps(const float *__p)
{
    struct __loadu_ps
    {
        __m128_u __v;
    } __attribute__((__packed__, __may_alias__));
    return ((const struct __loadu_ps *)__p)->__v;
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_loadr_ps(const float *__p)
{
    __m128 __a = _mm_load_ps(__p);
    return __builtin_shufflevector((__v4sf)__a, (__v4sf)__a, 3, 2, 1, 0);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_undefined_ps(void)
{
    return (__m128)__builtin_ia32_undef128();
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_set_ss(float __w)
{
    return __extension__(__m128){ __w, 0.0f, 0.0f, 0.0f };
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_set1_ps(float __w)
{
    return __extension__(__m128){ __w, __w, __w, __w };
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_set_ps1(float __w)
{
    return _mm_set1_ps(__w);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_set_ps(float __z, float __y, float __x, float __w)
{
    return __extension__(__m128){ __w, __x, __y, __z };
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_setr_ps(float __z, float __y, float __x, float __w)
{
    return __extension__(__m128){ __z, __y, __x, __w };
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_setzero_ps(void)
{
    return __extension__(__m128){ 0.0f, 0.0f, 0.0f, 0.0f };
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_storeh_pi(__m64 *__p, __m128 __a)
{
    typedef float __mm_storeh_pi_v2f32 __attribute__((__vector_size__(8)));
    struct __mm_storeh_pi_struct
    {
        __mm_storeh_pi_v2f32 __u;
    } __attribute__((__packed__, __may_alias__));
    ((struct __mm_storeh_pi_struct *)__p)->__u = __builtin_shufflevector(__a, __a, 2, 3);
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_storel_pi(__m64 *__p, __m128 __a)
{
    typedef float __mm_storeh_pi_v2f32 __attribute__((__vector_size__(8)));
    struct __mm_storeh_pi_struct
    {
        __mm_storeh_pi_v2f32 __u;
    } __attribute__((__packed__, __may_alias__));
    ((struct __mm_storeh_pi_struct *)__p)->__u = __builtin_shufflevector(__a, __a, 0, 1);
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_store_ss(float *__p, __m128 __a)
{
    struct __mm_store_ss_struct
    {
        float __u;
    } __attribute__((__packed__, __may_alias__));
    ((struct __mm_store_ss_struct *)__p)->__u = __a[0];
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_storeu_ps(float *__p, __m128 __a)
{
    struct __storeu_ps
    {
        __m128_u __v;
    } __attribute__((__packed__, __may_alias__));
    ((struct __storeu_ps *)__p)->__v = __a;
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_store_ps(float *__p, __m128 __a)
{
    *(__m128 *)__p = __a;
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_store1_ps(float *__p, __m128 __a)
{
    __a = __builtin_shufflevector((__v4sf)__a, (__v4sf)__a, 0, 0, 0, 0);
    _mm_store_ps(__p, __a);
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_store_ps1(float *__p, __m128 __a)
{
    _mm_store1_ps(__p, __a);
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_storer_ps(float *__p, __m128 __a)
{
    __a = __builtin_shufflevector((__v4sf)__a, (__v4sf)__a, 3, 2, 1, 0);
    _mm_store_ps(__p, __a);
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_stream_pi(void *__p, __m64 __a)
{
    __builtin_ia32_movntq((__m64 *)__p, __a);
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_stream_ps(void *__p, __m128 __a)
{
    __builtin_nontemporal_store((__v4sf)__a, (__v4sf *)__p);
}

void _mm_sfence(void);

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_max_pi16(__m64 __a, __m64 __b)
{
    return (__m64)__builtin_ia32_pmaxsw((__v4hi)__a, (__v4hi)__b);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_max_pu8(__m64 __a, __m64 __b)
{
    return (__m64)__builtin_ia32_pmaxub((__v8qi)__a, (__v8qi)__b);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_min_pi16(__m64 __a, __m64 __b)
{
    return (__m64)__builtin_ia32_pminsw((__v4hi)__a, (__v4hi)__b);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_min_pu8(__m64 __a, __m64 __b)
{
    return (__m64)__builtin_ia32_pminub((__v8qi)__a, (__v8qi)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_movemask_pi8(__m64 __a)
{
    return __builtin_ia32_pmovmskb((__v8qi)__a);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_mulhi_pu16(__m64 __a, __m64 __b)
{
    return (__m64)__builtin_ia32_pmulhuw((__v4hi)__a, (__v4hi)__b);
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_maskmove_si64(__m64 __d, __m64 __n, char *__p)
{
    __builtin_ia32_maskmovq((__v8qi)__d, (__v8qi)__n, __p);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_avg_pu8(__m64 __a, __m64 __b)
{
    return (__m64)__builtin_ia32_pavgb((__v8qi)__a, (__v8qi)__b);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_avg_pu16(__m64 __a, __m64 __b)
{
    return (__m64)__builtin_ia32_pavgw((__v4hi)__a, (__v4hi)__b);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_sad_pu8(__m64 __a, __m64 __b)
{
    return (__m64)__builtin_ia32_psadbw((__v8qi)__a, (__v8qi)__b);
}

unsigned int _mm_getcsr(void);

void _mm_setcsr(unsigned int __i);

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_unpackhi_ps(__m128 __a, __m128 __b)
{
    return __builtin_shufflevector((__v4sf)__a, (__v4sf)__b, 2, 6, 3, 7);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_unpacklo_ps(__m128 __a, __m128 __b)
{
    return __builtin_shufflevector((__v4sf)__a, (__v4sf)__b, 0, 4, 1, 5);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_move_ss(__m128 __a, __m128 __b)
{
    __a[0] = __b[0];
    return __a;
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_movehl_ps(__m128 __a, __m128 __b)
{
    return __builtin_shufflevector((__v4sf)__a, (__v4sf)__b, 6, 7, 2, 3);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_movelh_ps(__m128 __a, __m128 __b)
{
    return __builtin_shufflevector((__v4sf)__a, (__v4sf)__b, 0, 1, 4, 5);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_cvtpi16_ps(__m64 __a)
{
    __m64 __b, __c;
    __m128 __r;

    __b = _mm_setzero_si64();
    __b = _mm_cmpgt_pi16(__b, __a);
    __c = _mm_unpackhi_pi16(__a, __b);
    __r = _mm_setzero_ps();
    __r = _mm_cvtpi32_ps(__r, __c);
    __r = _mm_movelh_ps(__r, __r);
    __c = _mm_unpacklo_pi16(__a, __b);
    __r = _mm_cvtpi32_ps(__r, __c);

    return __r;
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_cvtpu16_ps(__m64 __a)
{
    __m64 __b, __c;
    __m128 __r;

    __b = _mm_setzero_si64();
    __c = _mm_unpackhi_pi16(__a, __b);
    __r = _mm_setzero_ps();
    __r = _mm_cvtpi32_ps(__r, __c);
    __r = _mm_movelh_ps(__r, __r);
    __c = _mm_unpacklo_pi16(__a, __b);
    __r = _mm_cvtpi32_ps(__r, __c);

    return __r;
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_cvtpi8_ps(__m64 __a)
{
    __m64 __b;

    __b = _mm_setzero_si64();
    __b = _mm_cmpgt_pi8(__b, __a);
    __b = _mm_unpacklo_pi8(__a, __b);

    return _mm_cvtpi16_ps(__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_cvtpu8_ps(__m64 __a)
{
    __m64 __b;

    __b = _mm_setzero_si64();
    __b = _mm_unpacklo_pi8(__a, __b);

    return _mm_cvtpi16_ps(__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_cvtpi32x2_ps(__m64 __a, __m64 __b)
{
    __m128 __c;

    __c = _mm_setzero_ps();
    __c = _mm_cvtpi32_ps(__c, __b);
    __c = _mm_movelh_ps(__c, __c);

    return _mm_cvtpi32_ps(__c, __a);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_cvtps_pi16(__m128 __a)
{
    __m64 __b, __c;

    __b = _mm_cvtps_pi32(__a);
    __a = _mm_movehl_ps(__a, __a);
    __c = _mm_cvtps_pi32(__a);

    return _mm_packs_pi32(__b, __c);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse,no-evex512"), __min_vector_width__(64)))
_mm_cvtps_pi8(__m128 __a)
{
    __m64 __b, __c;

    __b = _mm_cvtps_pi16(__a);
    __c = _mm_setzero_si64();

    return _mm_packs_pi16(__b, __c);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse,no-evex512"), __min_vector_width__(128)))
_mm_movemask_ps(__m128 __a)
{
    return __builtin_ia32_movmskps((__v4sf)__a);
}

typedef double __m128d __attribute__((__vector_size__(16), __aligned__(16)));
typedef long long __m128i __attribute__((__vector_size__(16), __aligned__(16)));

typedef double __m128d_u __attribute__((__vector_size__(16), __aligned__(1)));
typedef long long __m128i_u
    __attribute__((__vector_size__(16), __aligned__(1)));

typedef double __v2df __attribute__((__vector_size__(16)));
typedef long long __v2di __attribute__((__vector_size__(16)));
typedef short __v8hi __attribute__((__vector_size__(16)));
typedef char __v16qi __attribute__((__vector_size__(16)));

typedef unsigned long long __v2du __attribute__((__vector_size__(16)));
typedef unsigned short __v8hu __attribute__((__vector_size__(16)));
typedef unsigned char __v16qu __attribute__((__vector_size__(16)));

typedef signed char __v16qs __attribute__((__vector_size__(16)));

typedef _Float16 __v8hf __attribute__((__vector_size__(16), __aligned__(16)));
typedef _Float16 __m128h __attribute__((__vector_size__(16), __aligned__(16)));
typedef _Float16 __m128h_u __attribute__((__vector_size__(16), __aligned__(1)));

typedef __bf16 __v8bf __attribute__((__vector_size__(16), __aligned__(16)));
typedef __bf16 __m128bh __attribute__((__vector_size__(16), __aligned__(16)));

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_add_sd(__m128d __a,
                                                                                                                                               __m128d __b)
{
    __a[0] += __b[0];
    return __a;
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_add_pd(__m128d __a,
                                                                                                                                               __m128d __b)
{
    return (__m128d)((__v2df)__a + (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_sub_sd(__m128d __a,
                                                                                                                                               __m128d __b)
{
    __a[0] -= __b[0];
    return __a;
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_sub_pd(__m128d __a,
                                                                                                                                               __m128d __b)
{
    return (__m128d)((__v2df)__a - (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_mul_sd(__m128d __a,
                                                                                                                                               __m128d __b)
{
    __a[0] *= __b[0];
    return __a;
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_mul_pd(__m128d __a,
                                                                                                                                               __m128d __b)
{
    return (__m128d)((__v2df)__a * (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_div_sd(__m128d __a,
                                                                                                                                               __m128d __b)
{
    __a[0] /= __b[0];
    return __a;
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_div_pd(__m128d __a,
                                                                                                                                               __m128d __b)
{
    return (__m128d)((__v2df)__a / (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_sqrt_sd(__m128d __a,
                                                                                                                                                __m128d __b)
{
    __m128d __c = __builtin_ia32_sqrtsd((__v2df)__b);
    return __extension__(__m128d){ __c[0], __a[1] };
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_sqrt_pd(__m128d __a)
{
    return __builtin_ia32_sqrtpd((__v2df)__a);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_min_sd(__m128d __a,
                                                                                                                                               __m128d __b)
{
    return __builtin_ia32_minsd((__v2df)__a, (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_min_pd(__m128d __a,
                                                                                                                                               __m128d __b)
{
    return __builtin_ia32_minpd((__v2df)__a, (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_max_sd(__m128d __a,
                                                                                                                                               __m128d __b)
{
    return __builtin_ia32_maxsd((__v2df)__a, (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_max_pd(__m128d __a,
                                                                                                                                               __m128d __b)
{
    return __builtin_ia32_maxpd((__v2df)__a, (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_and_pd(__m128d __a,
                                                                                                                                               __m128d __b)
{
    return (__m128d)((__v2du)__a & (__v2du)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_andnot_pd(__m128d __a,
                                                                                                                                                  __m128d __b)
{
    return (__m128d)(~(__v2du)__a & (__v2du)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_or_pd(__m128d __a,
                                                                                                                                              __m128d __b)
{
    return (__m128d)((__v2du)__a | (__v2du)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_xor_pd(__m128d __a,
                                                                                                                                               __m128d __b)
{
    return (__m128d)((__v2du)__a ^ (__v2du)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpeq_pd(__m128d __a,
                                                                                                                                                 __m128d __b)
{
    return (__m128d)__builtin_ia32_cmpeqpd((__v2df)__a, (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmplt_pd(__m128d __a,
                                                                                                                                                 __m128d __b)
{
    return (__m128d)__builtin_ia32_cmpltpd((__v2df)__a, (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmple_pd(__m128d __a,
                                                                                                                                                 __m128d __b)
{
    return (__m128d)__builtin_ia32_cmplepd((__v2df)__a, (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpgt_pd(__m128d __a,
                                                                                                                                                 __m128d __b)
{
    return (__m128d)__builtin_ia32_cmpltpd((__v2df)__b, (__v2df)__a);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpge_pd(__m128d __a,
                                                                                                                                                 __m128d __b)
{
    return (__m128d)__builtin_ia32_cmplepd((__v2df)__b, (__v2df)__a);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpord_pd(__m128d __a,
                                                                                                                                                  __m128d __b)
{
    return (__m128d)__builtin_ia32_cmpordpd((__v2df)__a, (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpunord_pd(__m128d __a,
                                                                                                                                                    __m128d __b)
{
    return (__m128d)__builtin_ia32_cmpunordpd((__v2df)__a, (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpneq_pd(__m128d __a,
                                                                                                                                                  __m128d __b)
{
    return (__m128d)__builtin_ia32_cmpneqpd((__v2df)__a, (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpnlt_pd(__m128d __a,
                                                                                                                                                  __m128d __b)
{
    return (__m128d)__builtin_ia32_cmpnltpd((__v2df)__a, (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpnle_pd(__m128d __a,
                                                                                                                                                  __m128d __b)
{
    return (__m128d)__builtin_ia32_cmpnlepd((__v2df)__a, (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpngt_pd(__m128d __a,
                                                                                                                                                  __m128d __b)
{
    return (__m128d)__builtin_ia32_cmpnltpd((__v2df)__b, (__v2df)__a);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpnge_pd(__m128d __a,
                                                                                                                                                  __m128d __b)
{
    return (__m128d)__builtin_ia32_cmpnlepd((__v2df)__b, (__v2df)__a);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpeq_sd(__m128d __a,
                                                                                                                                                 __m128d __b)
{
    return (__m128d)__builtin_ia32_cmpeqsd((__v2df)__a, (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmplt_sd(__m128d __a,
                                                                                                                                                 __m128d __b)
{
    return (__m128d)__builtin_ia32_cmpltsd((__v2df)__a, (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmple_sd(__m128d __a,
                                                                                                                                                 __m128d __b)
{
    return (__m128d)__builtin_ia32_cmplesd((__v2df)__a, (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpgt_sd(__m128d __a,
                                                                                                                                                 __m128d __b)
{
    __m128d __c = __builtin_ia32_cmpltsd((__v2df)__b, (__v2df)__a);
    return __extension__(__m128d){ __c[0], __a[1] };
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpge_sd(__m128d __a,
                                                                                                                                                 __m128d __b)
{
    __m128d __c = __builtin_ia32_cmplesd((__v2df)__b, (__v2df)__a);
    return __extension__(__m128d){ __c[0], __a[1] };
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpord_sd(__m128d __a,
                                                                                                                                                  __m128d __b)
{
    return (__m128d)__builtin_ia32_cmpordsd((__v2df)__a, (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpunord_sd(__m128d __a,
                                                                                                                                                    __m128d __b)
{
    return (__m128d)__builtin_ia32_cmpunordsd((__v2df)__a, (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpneq_sd(__m128d __a,
                                                                                                                                                  __m128d __b)
{
    return (__m128d)__builtin_ia32_cmpneqsd((__v2df)__a, (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpnlt_sd(__m128d __a,
                                                                                                                                                  __m128d __b)
{
    return (__m128d)__builtin_ia32_cmpnltsd((__v2df)__a, (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpnle_sd(__m128d __a,
                                                                                                                                                  __m128d __b)
{
    return (__m128d)__builtin_ia32_cmpnlesd((__v2df)__a, (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpngt_sd(__m128d __a,
                                                                                                                                                  __m128d __b)
{
    __m128d __c = __builtin_ia32_cmpnltsd((__v2df)__b, (__v2df)__a);
    return __extension__(__m128d){ __c[0], __a[1] };
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpnge_sd(__m128d __a,
                                                                                                                                                  __m128d __b)
{
    __m128d __c = __builtin_ia32_cmpnlesd((__v2df)__b, (__v2df)__a);
    return __extension__(__m128d){ __c[0], __a[1] };
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_comieq_sd(__m128d __a,
                                                                                                                                              __m128d __b)
{
    return __builtin_ia32_comisdeq((__v2df)__a, (__v2df)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_comilt_sd(__m128d __a,
                                                                                                                                              __m128d __b)
{
    return __builtin_ia32_comisdlt((__v2df)__a, (__v2df)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_comile_sd(__m128d __a,
                                                                                                                                              __m128d __b)
{
    return __builtin_ia32_comisdle((__v2df)__a, (__v2df)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_comigt_sd(__m128d __a,
                                                                                                                                              __m128d __b)
{
    return __builtin_ia32_comisdgt((__v2df)__a, (__v2df)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_comige_sd(__m128d __a,
                                                                                                                                              __m128d __b)
{
    return __builtin_ia32_comisdge((__v2df)__a, (__v2df)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_comineq_sd(__m128d __a,
                                                                                                                                               __m128d __b)
{
    return __builtin_ia32_comisdneq((__v2df)__a, (__v2df)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_ucomieq_sd(__m128d __a,
                                                                                                                                               __m128d __b)
{
    return __builtin_ia32_ucomisdeq((__v2df)__a, (__v2df)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_ucomilt_sd(__m128d __a,
                                                                                                                                               __m128d __b)
{
    return __builtin_ia32_ucomisdlt((__v2df)__a, (__v2df)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_ucomile_sd(__m128d __a,
                                                                                                                                               __m128d __b)
{
    return __builtin_ia32_ucomisdle((__v2df)__a, (__v2df)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_ucomigt_sd(__m128d __a,
                                                                                                                                               __m128d __b)
{
    return __builtin_ia32_ucomisdgt((__v2df)__a, (__v2df)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_ucomige_sd(__m128d __a,
                                                                                                                                               __m128d __b)
{
    return __builtin_ia32_ucomisdge((__v2df)__a, (__v2df)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_ucomineq_sd(__m128d __a,
                                                                                                                                                __m128d __b)
{
    return __builtin_ia32_ucomisdneq((__v2df)__a, (__v2df)__b);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cvtpd_ps(__m128d __a)
{
    return __builtin_ia32_cvtpd2ps((__v2df)__a);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cvtps_pd(__m128 __a)
{
    return (__m128d) __builtin_convertvector(
        __builtin_shufflevector((__v4sf)__a, (__v4sf)__a, 0, 1), __v2df);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cvtepi32_pd(__m128i __a)
{
    return (__m128d) __builtin_convertvector(
        __builtin_shufflevector((__v4si)__a, (__v4si)__a, 0, 1), __v2df);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cvtpd_epi32(__m128d __a)
{
    return __builtin_ia32_cvtpd2dq((__v2df)__a);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cvtsd_si32(__m128d __a)
{
    return __builtin_ia32_cvtsd2si((__v2df)__a);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cvtsd_ss(__m128 __a,
                                                                                                                                                __m128d __b)
{
    return (__m128)__builtin_ia32_cvtsd2ss((__v4sf)__a, (__v2df)__b);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cvtsi32_sd(__m128d __a,
                                                                                                                                                   int __b)
{
    __a[0] = __b;
    return __a;
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cvtss_sd(__m128d __a,
                                                                                                                                                 __m128 __b)
{
    __a[0] = __b[0];
    return __a;
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cvttpd_epi32(__m128d __a)
{
    return (__m128i)__builtin_ia32_cvttpd2dq((__v2df)__a);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cvttsd_si32(__m128d __a)
{
    return __builtin_ia32_cvttsd2si((__v2df)__a);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse2,no-evex512"), __min_vector_width__(64))) _mm_cvtpd_pi32(__m128d __a)
{
    return (__m64)__builtin_ia32_cvtpd2pi((__v2df)__a);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse2,no-evex512"), __min_vector_width__(64))) _mm_cvttpd_pi32(__m128d __a)
{
    return (__m64)__builtin_ia32_cvttpd2pi((__v2df)__a);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse2,no-evex512"), __min_vector_width__(64))) _mm_cvtpi32_pd(__m64 __a)
{
    return __builtin_ia32_cvtpi2pd((__v2si)__a);
}

static __inline__ double __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cvtsd_f64(__m128d __a)
{
    return __a[0];
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_load_pd(double const *__dp)
{
    return *(const __m128d *)__dp;
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_load1_pd(double const *__dp)
{
    struct __mm_load1_pd_struct
    {
        double __u;
    } __attribute__((__packed__, __may_alias__));
    double __u = ((const struct __mm_load1_pd_struct *)__dp)->__u;
    return __extension__(__m128d){ __u, __u };
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_loadr_pd(double const *__dp)
{
    __m128d __u = *(const __m128d *)__dp;
    return __builtin_shufflevector((__v2df)__u, (__v2df)__u, 1, 0);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_loadu_pd(double const *__dp)
{
    struct __loadu_pd
    {
        __m128d_u __v;
    } __attribute__((__packed__, __may_alias__));
    return ((const struct __loadu_pd *)__dp)->__v;
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_loadu_si64(void const *__a)
{
    struct __loadu_si64
    {
        long long __v;
    } __attribute__((__packed__, __may_alias__));
    long long __u = ((const struct __loadu_si64 *)__a)->__v;
    return __extension__(__m128i)(__v2di){ __u, 0LL };
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_loadu_si32(void const *__a)
{
    struct __loadu_si32
    {
        int __v;
    } __attribute__((__packed__, __may_alias__));
    int __u = ((const struct __loadu_si32 *)__a)->__v;
    return __extension__(__m128i)(__v4si){ __u, 0, 0, 0 };
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_loadu_si16(void const *__a)
{
    struct __loadu_si16
    {
        short __v;
    } __attribute__((__packed__, __may_alias__));
    short __u = ((const struct __loadu_si16 *)__a)->__v;
    return __extension__(__m128i)(__v8hi){ __u, 0, 0, 0, 0, 0, 0, 0 };
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_load_sd(double const *__dp)
{
    struct __mm_load_sd_struct
    {
        double __u;
    } __attribute__((__packed__, __may_alias__));
    double __u = ((const struct __mm_load_sd_struct *)__dp)->__u;
    return __extension__(__m128d){ __u, 0 };
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_loadh_pd(__m128d __a,
                                                                                                                                                 double const *__dp)
{
    struct __mm_loadh_pd_struct
    {
        double __u;
    } __attribute__((__packed__, __may_alias__));
    double __u = ((const struct __mm_loadh_pd_struct *)__dp)->__u;
    return __extension__(__m128d){ __a[0], __u };
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_loadl_pd(__m128d __a,
                                                                                                                                                 double const *__dp)
{
    struct __mm_loadl_pd_struct
    {
        double __u;
    } __attribute__((__packed__, __may_alias__));
    double __u = ((const struct __mm_loadl_pd_struct *)__dp)->__u;
    return __extension__(__m128d){ __u, __a[1] };
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_undefined_pd(void)
{
    return (__m128d)__builtin_ia32_undef128();
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_set_sd(double __w)
{
    return __extension__(__m128d){ __w, 0.0 };
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_set1_pd(double __w)
{
    return __extension__(__m128d){ __w, __w };
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_set_pd1(double __w)
{
    return _mm_set1_pd(__w);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_set_pd(double __w,
                                                                                                                                               double __x)
{
    return __extension__(__m128d){ __x, __w };
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_setr_pd(double __w,
                                                                                                                                                double __x)
{
    return __extension__(__m128d){ __w, __x };
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_setzero_pd(void)
{
    return __extension__(__m128d){ 0.0, 0.0 };
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_move_sd(__m128d __a,
                                                                                                                                                __m128d __b)
{
    __a[0] = __b[0];
    return __a;
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_store_sd(double *__dp,
                                                                                                                                              __m128d __a)
{
    struct __mm_store_sd_struct
    {
        double __u;
    } __attribute__((__packed__, __may_alias__));
    ((struct __mm_store_sd_struct *)__dp)->__u = __a[0];
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_store_pd(double *__dp,
                                                                                                                                              __m128d __a)
{
    *(__m128d *)__dp = __a;
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_store1_pd(double *__dp,
                                                                                                                                               __m128d __a)
{
    __a = __builtin_shufflevector((__v2df)__a, (__v2df)__a, 0, 0);
    _mm_store_pd(__dp, __a);
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_store_pd1(double *__dp,
                                                                                                                                               __m128d __a)
{
    _mm_store1_pd(__dp, __a);
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_storeu_pd(double *__dp,
                                                                                                                                               __m128d __a)
{
    struct __storeu_pd
    {
        __m128d_u __v;
    } __attribute__((__packed__, __may_alias__));
    ((struct __storeu_pd *)__dp)->__v = __a;
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_storer_pd(double *__dp,
                                                                                                                                               __m128d __a)
{
    __a = __builtin_shufflevector((__v2df)__a, (__v2df)__a, 1, 0);
    *(__m128d *)__dp = __a;
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_storeh_pd(double *__dp,
                                                                                                                                               __m128d __a)
{
    struct __mm_storeh_pd_struct
    {
        double __u;
    } __attribute__((__packed__, __may_alias__));
    ((struct __mm_storeh_pd_struct *)__dp)->__u = __a[1];
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_storel_pd(double *__dp,
                                                                                                                                               __m128d __a)
{
    struct __mm_storeh_pd_struct
    {
        double __u;
    } __attribute__((__packed__, __may_alias__));
    ((struct __mm_storeh_pd_struct *)__dp)->__u = __a[0];
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_add_epi8(__m128i __a,
                                                                                                                                                 __m128i __b)
{
    return (__m128i)((__v16qu)__a + (__v16qu)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_add_epi16(__m128i __a,
                                                                                                                                                  __m128i __b)
{
    return (__m128i)((__v8hu)__a + (__v8hu)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_add_epi32(__m128i __a,
                                                                                                                                                  __m128i __b)
{
    return (__m128i)((__v4su)__a + (__v4su)__b);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse2,no-evex512"), __min_vector_width__(64))) _mm_add_si64(__m64 __a,
                                                                                                                                                  __m64 __b)
{
    return (__m64)__builtin_ia32_paddq((__v1di)__a, (__v1di)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_add_epi64(__m128i __a,
                                                                                                                                                  __m128i __b)
{
    return (__m128i)((__v2du)__a + (__v2du)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_adds_epi8(__m128i __a,
                                                                                                                                                  __m128i __b)
{
    return (__m128i)__builtin_elementwise_add_sat((__v16qs)__a, (__v16qs)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_adds_epi16(__m128i __a,
                                                                                                                                                   __m128i __b)
{
    return (__m128i)__builtin_elementwise_add_sat((__v8hi)__a, (__v8hi)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_adds_epu8(__m128i __a,
                                                                                                                                                  __m128i __b)
{
    return (__m128i)__builtin_elementwise_add_sat((__v16qu)__a, (__v16qu)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_adds_epu16(__m128i __a,
                                                                                                                                                   __m128i __b)
{
    return (__m128i)__builtin_elementwise_add_sat((__v8hu)__a, (__v8hu)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_avg_epu8(__m128i __a,
                                                                                                                                                 __m128i __b)
{
    return (__m128i)__builtin_ia32_pavgb128((__v16qi)__a, (__v16qi)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_avg_epu16(__m128i __a,
                                                                                                                                                  __m128i __b)
{
    return (__m128i)__builtin_ia32_pavgw128((__v8hi)__a, (__v8hi)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_madd_epi16(__m128i __a,
                                                                                                                                                   __m128i __b)
{
    return (__m128i)__builtin_ia32_pmaddwd128((__v8hi)__a, (__v8hi)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_max_epi16(__m128i __a,
                                                                                                                                                  __m128i __b)
{
    return (__m128i)__builtin_elementwise_max((__v8hi)__a, (__v8hi)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_max_epu8(__m128i __a,
                                                                                                                                                 __m128i __b)
{
    return (__m128i)__builtin_elementwise_max((__v16qu)__a, (__v16qu)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_min_epi16(__m128i __a,
                                                                                                                                                  __m128i __b)
{
    return (__m128i)__builtin_elementwise_min((__v8hi)__a, (__v8hi)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_min_epu8(__m128i __a,
                                                                                                                                                 __m128i __b)
{
    return (__m128i)__builtin_elementwise_min((__v16qu)__a, (__v16qu)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_mulhi_epi16(__m128i __a,
                                                                                                                                                    __m128i __b)
{
    return (__m128i)__builtin_ia32_pmulhw128((__v8hi)__a, (__v8hi)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_mulhi_epu16(__m128i __a,
                                                                                                                                                    __m128i __b)
{
    return (__m128i)__builtin_ia32_pmulhuw128((__v8hi)__a, (__v8hi)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_mullo_epi16(__m128i __a,
                                                                                                                                                    __m128i __b)
{
    return (__m128i)((__v8hu)__a * (__v8hu)__b);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse2,no-evex512"), __min_vector_width__(64))) _mm_mul_su32(__m64 __a,
                                                                                                                                                  __m64 __b)
{
    return __builtin_ia32_pmuludq((__v2si)__a, (__v2si)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_mul_epu32(__m128i __a,
                                                                                                                                                  __m128i __b)
{
    return __builtin_ia32_pmuludq128((__v4si)__a, (__v4si)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_sad_epu8(__m128i __a,
                                                                                                                                                 __m128i __b)
{
    return __builtin_ia32_psadbw128((__v16qi)__a, (__v16qi)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_sub_epi8(__m128i __a,
                                                                                                                                                 __m128i __b)
{
    return (__m128i)((__v16qu)__a - (__v16qu)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_sub_epi16(__m128i __a,
                                                                                                                                                  __m128i __b)
{
    return (__m128i)((__v8hu)__a - (__v8hu)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_sub_epi32(__m128i __a,
                                                                                                                                                  __m128i __b)
{
    return (__m128i)((__v4su)__a - (__v4su)__b);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("mmx,sse2,no-evex512"), __min_vector_width__(64))) _mm_sub_si64(__m64 __a,
                                                                                                                                                  __m64 __b)
{
    return (__m64)__builtin_ia32_psubq((__v1di)__a, (__v1di)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_sub_epi64(__m128i __a,
                                                                                                                                                  __m128i __b)
{
    return (__m128i)((__v2du)__a - (__v2du)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_subs_epi8(__m128i __a,
                                                                                                                                                  __m128i __b)
{
    return (__m128i)__builtin_elementwise_sub_sat((__v16qs)__a, (__v16qs)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_subs_epi16(__m128i __a,
                                                                                                                                                   __m128i __b)
{
    return (__m128i)__builtin_elementwise_sub_sat((__v8hi)__a, (__v8hi)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_subs_epu8(__m128i __a,
                                                                                                                                                  __m128i __b)
{
    return (__m128i)__builtin_elementwise_sub_sat((__v16qu)__a, (__v16qu)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_subs_epu16(__m128i __a,
                                                                                                                                                   __m128i __b)
{
    return (__m128i)__builtin_elementwise_sub_sat((__v8hu)__a, (__v8hu)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_and_si128(__m128i __a,
                                                                                                                                                  __m128i __b)
{
    return (__m128i)((__v2du)__a & (__v2du)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_andnot_si128(__m128i __a,
                                                                                                                                                     __m128i __b)
{
    return (__m128i)(~(__v2du)__a & (__v2du)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_or_si128(__m128i __a,
                                                                                                                                                 __m128i __b)
{
    return (__m128i)((__v2du)__a | (__v2du)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_xor_si128(__m128i __a,
                                                                                                                                                  __m128i __b)
{
    return (__m128i)((__v2du)__a ^ (__v2du)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_slli_epi16(__m128i __a,
                                                                                                                                                   int __count)
{
    return (__m128i)__builtin_ia32_psllwi128((__v8hi)__a, __count);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_sll_epi16(__m128i __a,
                                                                                                                                                  __m128i __count)
{
    return (__m128i)__builtin_ia32_psllw128((__v8hi)__a, (__v8hi)__count);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_slli_epi32(__m128i __a,
                                                                                                                                                   int __count)
{
    return (__m128i)__builtin_ia32_pslldi128((__v4si)__a, __count);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_sll_epi32(__m128i __a,
                                                                                                                                                  __m128i __count)
{
    return (__m128i)__builtin_ia32_pslld128((__v4si)__a, (__v4si)__count);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_slli_epi64(__m128i __a,
                                                                                                                                                   int __count)
{
    return __builtin_ia32_psllqi128((__v2di)__a, __count);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_sll_epi64(__m128i __a,
                                                                                                                                                  __m128i __count)
{
    return __builtin_ia32_psllq128((__v2di)__a, (__v2di)__count);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_srai_epi16(__m128i __a,
                                                                                                                                                   int __count)
{
    return (__m128i)__builtin_ia32_psrawi128((__v8hi)__a, __count);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_sra_epi16(__m128i __a,
                                                                                                                                                  __m128i __count)
{
    return (__m128i)__builtin_ia32_psraw128((__v8hi)__a, (__v8hi)__count);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_srai_epi32(__m128i __a,
                                                                                                                                                   int __count)
{
    return (__m128i)__builtin_ia32_psradi128((__v4si)__a, __count);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_sra_epi32(__m128i __a,
                                                                                                                                                  __m128i __count)
{
    return (__m128i)__builtin_ia32_psrad128((__v4si)__a, (__v4si)__count);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_srli_epi16(__m128i __a,
                                                                                                                                                   int __count)
{
    return (__m128i)__builtin_ia32_psrlwi128((__v8hi)__a, __count);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_srl_epi16(__m128i __a,
                                                                                                                                                  __m128i __count)
{
    return (__m128i)__builtin_ia32_psrlw128((__v8hi)__a, (__v8hi)__count);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_srli_epi32(__m128i __a,
                                                                                                                                                   int __count)
{
    return (__m128i)__builtin_ia32_psrldi128((__v4si)__a, __count);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_srl_epi32(__m128i __a,
                                                                                                                                                  __m128i __count)
{
    return (__m128i)__builtin_ia32_psrld128((__v4si)__a, (__v4si)__count);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_srli_epi64(__m128i __a,
                                                                                                                                                   int __count)
{
    return __builtin_ia32_psrlqi128((__v2di)__a, __count);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_srl_epi64(__m128i __a,
                                                                                                                                                  __m128i __count)
{
    return __builtin_ia32_psrlq128((__v2di)__a, (__v2di)__count);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpeq_epi8(__m128i __a,
                                                                                                                                                   __m128i __b)
{
    return (__m128i)((__v16qi)__a == (__v16qi)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpeq_epi16(__m128i __a,
                                                                                                                                                    __m128i __b)
{
    return (__m128i)((__v8hi)__a == (__v8hi)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpeq_epi32(__m128i __a,
                                                                                                                                                    __m128i __b)
{
    return (__m128i)((__v4si)__a == (__v4si)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpgt_epi8(__m128i __a,
                                                                                                                                                   __m128i __b)
{

    return (__m128i)((__v16qs)__a > (__v16qs)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpgt_epi16(__m128i __a,
                                                                                                                                                    __m128i __b)
{
    return (__m128i)((__v8hi)__a > (__v8hi)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmpgt_epi32(__m128i __a,
                                                                                                                                                    __m128i __b)
{
    return (__m128i)((__v4si)__a > (__v4si)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmplt_epi8(__m128i __a,
                                                                                                                                                   __m128i __b)
{
    return _mm_cmpgt_epi8(__b, __a);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmplt_epi16(__m128i __a,
                                                                                                                                                    __m128i __b)
{
    return _mm_cmpgt_epi16(__b, __a);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cmplt_epi32(__m128i __a,
                                                                                                                                                    __m128i __b)
{
    return _mm_cmpgt_epi32(__b, __a);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cvtsi64_sd(__m128d __a,
                                                                                                                                                   long long __b)
{
    __a[0] = __b;
    return __a;
}

static __inline__ long long __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cvtsd_si64(__m128d __a)
{
    return __builtin_ia32_cvtsd2si64((__v2df)__a);
}

static __inline__ long long __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cvttsd_si64(__m128d __a)
{
    return __builtin_ia32_cvttsd2si64((__v2df)__a);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cvtepi32_ps(__m128i __a)
{
    return (__m128) __builtin_convertvector((__v4si)__a, __v4sf);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cvtps_epi32(__m128 __a)
{
    return (__m128i)__builtin_ia32_cvtps2dq((__v4sf)__a);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cvttps_epi32(__m128 __a)
{
    return (__m128i)__builtin_ia32_cvttps2dq((__v4sf)__a);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cvtsi32_si128(int __a)
{
    return __extension__(__m128i)(__v4si){ __a, 0, 0, 0 };
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cvtsi64_si128(long long __a)
{
    return __extension__(__m128i)(__v2di){ __a, 0 };
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cvtsi128_si32(__m128i __a)
{
    __v4si __b = (__v4si)__a;
    return __b[0];
}

static __inline__ long long __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_cvtsi128_si64(__m128i __a)
{
    return __a[0];
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128)))
_mm_load_si128(__m128i const *__p)
{
    return *__p;
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128)))
_mm_loadu_si128(__m128i_u const *__p)
{
    struct __loadu_si128
    {
        __m128i_u __v;
    } __attribute__((__packed__, __may_alias__));
    return ((const struct __loadu_si128 *)__p)->__v;
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128)))
_mm_loadl_epi64(__m128i_u const *__p)
{
    struct __mm_loadl_epi64_struct
    {
        long long __u;
    } __attribute__((__packed__, __may_alias__));
    return __extension__(__m128i){
        ((const struct __mm_loadl_epi64_struct *)__p)->__u, 0
    };
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_undefined_si128(void)
{
    return (__m128i)__builtin_ia32_undef128();
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_set_epi64x(long long __q1,
                                                                                                                                                   long long __q0)
{
    return __extension__(__m128i)(__v2di){ __q0, __q1 };
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_set_epi64(__m64 __q1,
                                                                                                                                                  __m64 __q0)
{
    return _mm_set_epi64x((long long)__q1, (long long)__q0);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_set_epi32(int __i3, int __i2,
                                                                                                                                                  int __i1, int __i0)
{
    return __extension__(__m128i)(__v4si){ __i0, __i1, __i2, __i3 };
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128)))
_mm_set_epi16(short __w7, short __w6, short __w5, short __w4, short __w3,
              short __w2, short __w1, short __w0)
{
    return __extension__(__m128i)(__v8hi){ __w0, __w1, __w2, __w3,
                                           __w4, __w5, __w6, __w7 };
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128)))
_mm_set_epi8(char __b15, char __b14, char __b13, char __b12, char __b11,
             char __b10, char __b9, char __b8, char __b7, char __b6, char __b5,
             char __b4, char __b3, char __b2, char __b1, char __b0)
{
    return __extension__(__m128i)(__v16qi){
        __b0, __b1, __b2, __b3, __b4, __b5, __b6, __b7,
        __b8, __b9, __b10, __b11, __b12, __b13, __b14, __b15
    };
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_set1_epi64x(long long __q)
{
    return _mm_set_epi64x(__q, __q);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_set1_epi64(__m64 __q)
{
    return _mm_set_epi64(__q, __q);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_set1_epi32(int __i)
{
    return _mm_set_epi32(__i, __i, __i, __i);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_set1_epi16(short __w)
{
    return _mm_set_epi16(__w, __w, __w, __w, __w, __w, __w, __w);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_set1_epi8(char __b)
{
    return _mm_set_epi8(__b, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b,
                        __b, __b, __b, __b, __b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_setr_epi64(__m64 __q0,
                                                                                                                                                   __m64 __q1)
{
    return _mm_set_epi64(__q1, __q0);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_setr_epi32(int __i0, int __i1,
                                                                                                                                                   int __i2,
                                                                                                                                                   int __i3)
{
    return _mm_set_epi32(__i3, __i2, __i1, __i0);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128)))
_mm_setr_epi16(short __w0, short __w1, short __w2, short __w3, short __w4,
               short __w5, short __w6, short __w7)
{
    return _mm_set_epi16(__w7, __w6, __w5, __w4, __w3, __w2, __w1, __w0);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128)))
_mm_setr_epi8(char __b0, char __b1, char __b2, char __b3, char __b4, char __b5,
              char __b6, char __b7, char __b8, char __b9, char __b10,
              char __b11, char __b12, char __b13, char __b14, char __b15)
{
    return _mm_set_epi8(__b15, __b14, __b13, __b12, __b11, __b10, __b9, __b8,
                        __b7, __b6, __b5, __b4, __b3, __b2, __b1, __b0);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_setzero_si128(void)
{
    return __extension__(__m128i)(__v2di){ 0LL, 0LL };
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_store_si128(__m128i *__p,
                                                                                                                                                 __m128i __b)
{
    *__p = __b;
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_storeu_si128(__m128i_u *__p,
                                                                                                                                                  __m128i __b)
{
    struct __storeu_si128
    {
        __m128i_u __v;
    } __attribute__((__packed__, __may_alias__));
    ((struct __storeu_si128 *)__p)->__v = __b;
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_storeu_si64(void *__p,
                                                                                                                                                 __m128i __b)
{
    struct __storeu_si64
    {
        long long __v;
    } __attribute__((__packed__, __may_alias__));
    ((struct __storeu_si64 *)__p)->__v = ((__v2di)__b)[0];
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_storeu_si32(void *__p,
                                                                                                                                                 __m128i __b)
{
    struct __storeu_si32
    {
        int __v;
    } __attribute__((__packed__, __may_alias__));
    ((struct __storeu_si32 *)__p)->__v = ((__v4si)__b)[0];
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_storeu_si16(void *__p,
                                                                                                                                                 __m128i __b)
{
    struct __storeu_si16
    {
        short __v;
    } __attribute__((__packed__, __may_alias__));
    ((struct __storeu_si16 *)__p)->__v = ((__v8hi)__b)[0];
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_maskmoveu_si128(__m128i __d,
                                                                                                                                                     __m128i __n,
                                                                                                                                                     char *__p)
{
    __builtin_ia32_maskmovdqu((__v16qi)__d, (__v16qi)__n, __p);
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_storel_epi64(__m128i_u *__p,
                                                                                                                                                  __m128i __a)
{
    struct __mm_storel_epi64_struct
    {
        long long __u;
    } __attribute__((__packed__, __may_alias__));
    ((struct __mm_storel_epi64_struct *)__p)->__u = __a[0];
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_stream_pd(void *__p,
                                                                                                                                               __m128d __a)
{
    __builtin_nontemporal_store((__v2df)__a, (__v2df *)__p);
}

static __inline__ void __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_stream_si128(void *__p,
                                                                                                                                                  __m128i __a)
{
    __builtin_nontemporal_store((__v2di)__a, (__v2di *)__p);
}

static __inline__ void
    __attribute__((__always_inline__, __nodebug__, __target__("sse2")))
    _mm_stream_si32(void *__p, int __a)
{
    __builtin_ia32_movnti((int *)__p, __a);
}

static __inline__ void
    __attribute__((__always_inline__, __nodebug__, __target__("sse2")))
    _mm_stream_si64(void *__p, long long __a)
{
    __builtin_ia32_movnti64((long long *)__p, __a);
}

void _mm_clflush(void const *__p);

void _mm_lfence(void);

void _mm_mfence(void);

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_packs_epi16(__m128i __a,
                                                                                                                                                    __m128i __b)
{
    return (__m128i)__builtin_ia32_packsswb128((__v8hi)__a, (__v8hi)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_packs_epi32(__m128i __a,
                                                                                                                                                    __m128i __b)
{
    return (__m128i)__builtin_ia32_packssdw128((__v4si)__a, (__v4si)__b);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_packus_epi16(__m128i __a,
                                                                                                                                                     __m128i __b)
{
    return (__m128i)__builtin_ia32_packuswb128((__v8hi)__a, (__v8hi)__b);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_movemask_epi8(__m128i __a)
{
    return __builtin_ia32_pmovmskb128((__v16qi)__a);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_unpackhi_epi8(__m128i __a,
                                                                                                                                                      __m128i __b)
{
    return (__m128i)__builtin_shufflevector(
        (__v16qi)__a, (__v16qi)__b, 8, 16 + 8, 9, 16 + 9, 10, 16 + 10, 11,
        16 + 11, 12, 16 + 12, 13, 16 + 13, 14, 16 + 14, 15, 16 + 15);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_unpackhi_epi16(__m128i __a,
                                                                                                                                                       __m128i __b)
{
    return (__m128i)__builtin_shufflevector((__v8hi)__a, (__v8hi)__b, 4, 8 + 4, 5,
                                            8 + 5, 6, 8 + 6, 7, 8 + 7);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_unpackhi_epi32(__m128i __a,
                                                                                                                                                       __m128i __b)
{
    return (__m128i)__builtin_shufflevector((__v4si)__a, (__v4si)__b, 2, 4 + 2, 3,
                                            4 + 3);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_unpackhi_epi64(__m128i __a,
                                                                                                                                                       __m128i __b)
{
    return (__m128i)__builtin_shufflevector((__v2di)__a, (__v2di)__b, 1, 2 + 1);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_unpacklo_epi8(__m128i __a,
                                                                                                                                                      __m128i __b)
{
    return (__m128i)__builtin_shufflevector(
        (__v16qi)__a, (__v16qi)__b, 0, 16 + 0, 1, 16 + 1, 2, 16 + 2, 3, 16 + 3, 4,
        16 + 4, 5, 16 + 5, 6, 16 + 6, 7, 16 + 7);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_unpacklo_epi16(__m128i __a,
                                                                                                                                                       __m128i __b)
{
    return (__m128i)__builtin_shufflevector((__v8hi)__a, (__v8hi)__b, 0, 8 + 0, 1,
                                            8 + 1, 2, 8 + 2, 3, 8 + 3);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_unpacklo_epi32(__m128i __a,
                                                                                                                                                       __m128i __b)
{
    return (__m128i)__builtin_shufflevector((__v4si)__a, (__v4si)__b, 0, 4 + 0, 1,
                                            4 + 1);
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_unpacklo_epi64(__m128i __a,
                                                                                                                                                       __m128i __b)
{
    return (__m128i)__builtin_shufflevector((__v2di)__a, (__v2di)__b, 0, 2 + 0);
}

static __inline__ __m64 __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_movepi64_pi64(__m128i __a)
{
    return (__m64)__a[0];
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_movpi64_epi64(__m64 __a)
{
    return __extension__(__m128i)(__v2di){ (long long)__a, 0 };
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_move_epi64(__m128i __a)
{
    return __builtin_shufflevector((__v2di)__a, _mm_setzero_si128(), 0, 2);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_unpackhi_pd(__m128d __a,
                                                                                                                                                    __m128d __b)
{
    return __builtin_shufflevector((__v2df)__a, (__v2df)__b, 1, 2 + 1);
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_unpacklo_pd(__m128d __a,
                                                                                                                                                    __m128d __b)
{
    return __builtin_shufflevector((__v2df)__a, (__v2df)__b, 0, 2 + 0);
}

static __inline__ int __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_movemask_pd(__m128d __a)
{
    return __builtin_ia32_movmskpd((__v2df)__a);
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_castpd_ps(__m128d __a)
{
    return (__m128)__a;
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_castpd_si128(__m128d __a)
{
    return (__m128i)__a;
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_castps_pd(__m128 __a)
{
    return (__m128d)__a;
}

static __inline__ __m128i __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_castps_si128(__m128 __a)
{
    return (__m128i)__a;
}

static __inline__ __m128 __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_castsi128_ps(__m128i __a)
{
    return (__m128)__a;
}

static __inline__ __m128d __attribute__((__always_inline__, __nodebug__, __target__("sse2,no-evex512"), __min_vector_width__(128))) _mm_castsi128_pd(__m128i __a)
{
    return (__m128d)__a;
}

void _mm_pause(void);

static __inline__ int hasSSE2(void)
{
    static int val = -1;
    if (val != -1) {
        return val;
    }
    val = SDL_HasSSE2();
    return val;
}

typedef struct
{
    unsigned char *buffer;
    int left;
    int top;
    int width;
    int rows;
    int pitch;
    int is_color;
} TTF_Image;

typedef struct cached_glyph
{
    int stored;
    FT_UInt index;
    TTF_Image bitmap;
    TTF_Image pixmap;
    int sz_left;
    int sz_top;
    int sz_width;
    int sz_rows;
    int advance;
    union
    {

        struct
        {
            int lsb_minus_rsb;
            int translation;
        } subpixel;

        struct
        {
            int rsb_delta;
            int lsb_delta;
        } kerning_smart;
    };
} c_glyph;

typedef struct GlyphPosition
{
    TTF_Font *font;
    FT_UInt index;
    c_glyph *glyph;
    int x_offset;
    int y_offset;
    int x_advance;
    int y_advance;
    int x;
    int y;
    int offset;
} GlyphPosition;

typedef struct GlyphPositions
{
    GlyphPosition *pos;
    int len;
    int width26dot6;
    int height26dot6;
    int num_clusters;
    int maxlen;
} GlyphPositions;

typedef struct CachedGlyphPositions
{
    TTF_Direction direction;
    Uint32 script;
    char *text;
    size_t length;
    GlyphPositions positions;
} CachedGlyphPositions;

typedef struct TTF_FontList
{
    TTF_Font *font;
    struct TTF_FontList *next;
} TTF_FontList;

struct TTF_Font
{

    char *name;

    FT_Face face;
    long face_index;

    SDL_PropertiesID props;

    Uint32 generation;

    SDL_HashTable *text;

    float ptsize;
    int hdpi;
    int vdpi;
    int height;
    int ascent;
    int descent;
    int lineskip;

    TTF_FontStyleFlags style;
    int weight;
    int outline;
    FT_Stroker stroker;

    _Bool enable_kerning;

    _Bool use_kerning;

    int glyph_overhang;

    int line_thickness;
    int underline_top_row;
    int strikethrough_top_row;

    SDL_HashTable *glyphs;
    SDL_HashTable *glyph_indices;

    SDL_IOStream *src;
    Sint64 src_offset;
    _Bool closeio;
    FT_Open_Args args;

    int next_cached_positions;
    CachedGlyphPositions cached_positions[8];
    GlyphPositions *positions;

    int ft_load_target;
    int render_subpixel;

    Uint32 script;
    TTF_Direction direction;
    _Bool render_sdf;

    TTF_HorizontalAlignment horizontal_align;

    TTF_FontList *fallbacks;
    TTF_FontList *fallback_for;
};

typedef struct
{
    const char *text;
    size_t length;
} TTF_Line;

static struct
{
    SDL_InitState init;
    SDL_AtomicInt refcount;
    SDL_AtomicInt generation;
    SDL_Mutex *lock;
    FT_Library library;
} TTF_state;

typedef enum
{
    RENDER_SOLID = 0,
    RENDER_SHADED,
    RENDER_BLENDED,
    RENDER_LCD
} render_mode_t;

static Uint32 TTF_GetNextFontGeneration(void)
{
    Uint32 id = (Uint32)SDL_AddAtomicInt(&TTF_state.generation, 1) + 1;
    if (id == 0) {
        id = (Uint32)SDL_AddAtomicInt(&TTF_state.generation, 1) + 1;
    }
    return id;
}

static _Bool Find_GlyphByIndex(TTF_Font *font, FT_UInt idx, int want_bitmap, int want_pixmap, int want_color, int want_lcd, int want_subpixel, int translation, c_glyph **out_glyph, TTF_Image **out_image);

static void BG_Blended_Color(const TTF_Image *image, Uint32 *destination, Sint32 srcskip, Uint32 dstskip, Uint8 fg_alpha)
{
    const Uint32 *src = (Uint32 *)image->buffer;
    Uint32 *dst = destination;
    Uint32 width = image->width;
    Uint32 height = image->rows;

    if (fg_alpha == 255) {
        while (height--) {

            {
                int n;
                for (n = width; n > 0; --n) {
                    *dst++ = *src++;
                    ;
                }
            };

            src = (const Uint32 *)((const Uint8 *)src + srcskip);
            dst = (Uint32 *)((Uint8 *)dst + dstskip);
        }
    } else {
        Uint32 alpha;
        Uint32 tmp;

        while (height--) {

            {
                int n;
                for (n = width; n > 0; --n) {
                    memcpy(&tmp, src++, sizeof(tmp));
                    alpha = tmp >> 24;
                    tmp &= ~0xFF000000;
                    alpha = fg_alpha * alpha;
                    alpha = (((alpha) + (1) + ((alpha) >> 8)) >> 8) << 24;
                    *dst++ = tmp | alpha;
                }
            };

            src = (const Uint32 *)((const Uint8 *)src + srcskip);
            dst = (Uint32 *)((Uint8 *)dst + dstskip);
        }
    }
}

static void BG_Blended_LCD(const TTF_Image *image, Uint32 *destination, Sint32 srcskip, Uint32 dstskip, SDL_Color *fg)
{
    const Uint32 *src = (Uint32 *)image->buffer;
    Uint32 *dst = destination;
    Uint32 width = image->width;
    Uint32 height = image->rows;

    Uint32 tmp, bg;
    Uint32 r, g, b;
    Uint8 fg_r, fg_g, fg_b;
    Uint8 bg_r, bg_g, bg_b;
    Uint32 bg_a;

    fg_r = fg->r;
    fg_g = fg->g;
    fg_b = fg->b;

    while (height--) {

        {
            int n;
            for (n = width; n > 0; --n) {
                memcpy(&tmp, src++, sizeof(tmp));
                if (tmp) {
                    bg = *dst;
                    bg_a = bg & 0xff000000;
                    bg_r = (bg >> 16) & 0xff;
                    bg_g = (bg >> 8) & 0xff;
                    bg_b = (bg >> 0) & 0xff;
                    r = (tmp >> 16) & 0xff;
                    g = (tmp >> 8) & 0xff;
                    b = (tmp >> 0) & 0xff;
                    r = fg_r * r + bg_r * (255 - r) + 127;
                    r = (((r) + (1) + ((r) >> 8)) >> 8);
                    g = fg_g * g + bg_g * (255 - g) + 127;
                    g = (((g) + (1) + ((g) >> 8)) >> 8);
                    b = fg_b * b + bg_b * (255 - b) + 127;
                    b = (((b) + (1) + ((b) >> 8)) >> 8);
                    r <<= 16;
                    g <<= 8;
                    b <<= 0;
                    *dst = r | g | b | bg_a;
                }
                dst++;
                ;
            }
        };

        src = (const Uint32 *)((const Uint8 *)src + srcskip);
        dst = (Uint32 *)((Uint8 *)dst + dstskip);
    }
}

static void BG_Blended_Opaque(const TTF_Image *image, Uint32 *destination, Sint32 srcskip, Uint32 dstskip)
{
    const Uint8 *src = image->buffer;
    Uint32 *dst = destination;
    Uint32 width = image->width;
    Uint32 height = image->rows;

    while (height--) {

        {
            int n;
            for (n = width; n > 0; --n) {
                *dst++ |= ((Uint32)*src++) << 24;
                ;
            }
        };

        src += srcskip;
        dst = (Uint32 *)((Uint8 *)dst + dstskip);
    }
}

static void BG_Blended(const TTF_Image *image, Uint32 *destination, Sint32 srcskip, Uint32 dstskip, Uint8 fg_alpha)
{
    const Uint8 *src = image->buffer;
    Uint32 *dst = destination;
    Uint32 width = image->width;
    Uint32 height = image->rows;

    Uint32 tmp;

    while (height--) {

        {
            int n;
            for (n = width; n > 0; --n) {
                tmp = fg_alpha * (*src++);
                *dst++ |= (((tmp) + (1) + ((tmp) >> 8)) >> 8) << 24;
                ;
            }
        };

        src += srcskip;
        dst = (Uint32 *)((Uint8 *)dst + dstskip);
    }
}

static void BG_Blended_Opaque_32(const TTF_Image *image, Uint32 *destination, Sint32 srcskip, Uint32 dstskip)
{
    const Uint8 *src = image->buffer;
    Uint32 *dst = destination;
    Uint32 width = image->width / 4;
    Uint32 height = image->rows;

    while (height--) {

        {
            int n;
            for (n = width; n > 0; --n) {
                *dst++ |= ((Uint32)*src++) << 24;
                *dst++ |= ((Uint32)*src++) << 24;
                *dst++ |= ((Uint32)*src++) << 24;
                *dst++ |= ((Uint32)*src++) << 24;
                ;
            }
        };

        src += srcskip;
        dst = (Uint32 *)((Uint8 *)dst + dstskip);
    }
}

static void BG_Blended_32(const TTF_Image *image, Uint32 *destination, Sint32 srcskip, Uint32 dstskip, Uint8 fg_alpha)
{
    const Uint8 *src = image->buffer;
    Uint32 *dst = destination;
    Uint32 width = image->width / 4;
    Uint32 height = image->rows;

    Uint32 tmp0, tmp1, tmp2, tmp3;

    while (height--) {

        {
            int n;
            for (n = width; n > 0; --n) {
                tmp0 = fg_alpha * (*src++);
                tmp1 = fg_alpha * (*src++);
                tmp2 = fg_alpha * (*src++);
                tmp3 = fg_alpha * (*src++);
                *dst++ |= (((tmp0) + (1) + ((tmp0) >> 8)) >> 8) << 24;
                *dst++ |= (((tmp1) + (1) + ((tmp1) >> 8)) >> 8) << 24;
                *dst++ |= (((tmp2) + (1) + ((tmp2) >> 8)) >> 8) << 24;
                *dst++ |= (((tmp3) + (1) + ((tmp3) >> 8)) >> 8) << 24;
                ;
            }
        };

        src += srcskip;
        dst = (Uint32 *)((Uint8 *)dst + dstskip);
    }
}

static void BG_Blended_Opaque_SSE(const TTF_Image *image, Uint32 *destination, Sint32 srcskip, Uint32 dstskip)
{
    const __m128i *src = (__m128i *)image->buffer;
    __m128i *dst = (__m128i *)destination;
    Uint32 width = image->width / 16;
    Uint32 height = image->rows;

    __m128i s, s0, s1, s2, s3, d0, d1, d2, d3, r0, r1, r2, r3, L, H;
    const __m128i zero = _mm_setzero_si128();

    while (height--) {

        {
            int n;
            for (n = width; n > 0; --n) {
                s = _mm_loadu_si128(src);
                d0 = _mm_load_si128(dst);
                d1 = _mm_load_si128(dst + 1);
                d2 = _mm_load_si128(dst + 2);
                d3 = _mm_load_si128(dst + 3);
                L = _mm_unpacklo_epi8(zero, s);
                H = _mm_unpackhi_epi8(zero, s);
                s0 = _mm_unpacklo_epi8(zero, L);
                s1 = _mm_unpackhi_epi8(zero, L);
                s2 = _mm_unpacklo_epi8(zero, H);
                s3 = _mm_unpackhi_epi8(zero, H);
                r0 = _mm_or_si128(d0, s0);
                r1 = _mm_or_si128(d1, s1);
                r2 = _mm_or_si128(d2, s2);
                r3 = _mm_or_si128(d3, s3);
                _mm_store_si128(dst, r0);
                _mm_store_si128(dst + 1, r1);
                _mm_store_si128(dst + 2, r2);
                _mm_store_si128(dst + 3, r3);
                dst += 4;
                src += 1;
                ;
            }
        };

        src = (const __m128i *)((const Uint8 *)src + srcskip);
        dst = (__m128i *)((Uint8 *)dst + dstskip);
    }
}

static void BG_Blended_SSE(const TTF_Image *image, Uint32 *destination, Sint32 srcskip, Uint32 dstskip, Uint8 fg_alpha)
{
    const __m128i *src = (__m128i *)image->buffer;
    __m128i *dst = (__m128i *)destination;
    Uint32 width = image->width / 16;
    Uint32 height = image->rows;

    const __m128i alpha = _mm_set1_epi16(fg_alpha);
    const __m128i one = _mm_set1_epi16(1);
    const __m128i zero = _mm_setzero_si128();
    __m128i s, s0, s1, s2, s3, d0, d1, d2, d3, r0, r1, r2, r3, L, H, Ls8, Hs8;

    while (height--) {

        {
            int n;
            for (n = width; n > 0; --n) {
                s = _mm_loadu_si128(src);
                d0 = _mm_load_si128(dst);
                d1 = _mm_load_si128(dst + 1);
                d2 = _mm_load_si128(dst + 2);
                d3 = _mm_load_si128(dst + 3);
                L = _mm_unpacklo_epi8(s, zero);
                H = _mm_unpackhi_epi8(s, zero);
                L = _mm_mullo_epi16(L, alpha);
                H = _mm_mullo_epi16(H, alpha);
                Ls8 = _mm_srli_epi16(L, 8);
                Hs8 = _mm_srli_epi16(H, 8);
                L = _mm_add_epi16(L, one);
                H = _mm_add_epi16(H, one);
                L = _mm_add_epi16(L, Ls8);
                H = _mm_add_epi16(H, Hs8);
                L = _mm_srli_epi16(L, 8);
                H = _mm_srli_epi16(H, 8);
                L = _mm_slli_epi16(L, 8);
                H = _mm_slli_epi16(H, 8);
                s0 = _mm_unpacklo_epi8(zero, L);
                s1 = _mm_unpackhi_epi8(zero, L);
                s2 = _mm_unpacklo_epi8(zero, H);
                s3 = _mm_unpackhi_epi8(zero, H);
                r0 = _mm_or_si128(d0, s0);
                r1 = _mm_or_si128(d1, s1);
                r2 = _mm_or_si128(d2, s2);
                r3 = _mm_or_si128(d3, s3);
                _mm_store_si128(dst, r0);
                _mm_store_si128(dst + 1, r1);
                _mm_store_si128(dst + 2, r2);
                _mm_store_si128(dst + 3, r3);
                dst += 4;
                src += 1;
                ;
            }
        };

        src = (const __m128i *)((const Uint8 *)src + srcskip);
        dst = (__m128i *)((Uint8 *)dst + dstskip);
    }
}

static void BG(const TTF_Image *image, Uint8 *destination, Sint32 srcskip, Uint32 dstskip)
{
    const Uint8 *src = image->buffer;
    Uint8 *dst = destination;
    Uint32 width = image->width;
    Uint32 height = image->rows;

    while (height--) {

        {
            int n;
            for (n = width; n > 0; --n) {
                *dst++ |= *src++;
                ;
            }
        };

        src += srcskip;
        dst += dstskip;
    }
}

static void BG_64(const TTF_Image *image, Uint8 *destination, Sint32 srcskip, Uint32 dstskip)
{
    const Uint64 *src = (Uint64 *)image->buffer;
    Uint64 *dst = (Uint64 *)destination;
    Uint32 width = image->width / 8;
    Uint32 height = image->rows;
    Uint64 tmp;

    while (height--) {

        {
            int n;
            for (n = width; n > 0; --n) {
                memcpy(&tmp, src++, sizeof(tmp));
                *dst++ |= tmp;
                ;
            }
        };

        src = (const Uint64 *)((const Uint8 *)src + srcskip);
        dst = (Uint64 *)((Uint8 *)dst + dstskip);
    }
}

static void BG_SSE(const TTF_Image *image, Uint8 *destination, Sint32 srcskip, Uint32 dstskip)
{
    const __m128i *src = (__m128i *)image->buffer;
    __m128i *dst = (__m128i *)destination;
    Uint32 width = image->width / 16;
    Uint32 height = image->rows;

    __m128i s, d, r;

    while (height--) {

        {
            int n;
            for (n = width; n > 0; --n) {
                s = _mm_loadu_si128(src);
                d = _mm_load_si128(dst);
                r = _mm_or_si128(d, s);
                _mm_store_si128(dst, r);
                src += 1;
                dst += 1;
                ;
            }
        };

        src = (const __m128i *)((const Uint8 *)src + srcskip);
        dst = (__m128i *)((Uint8 *)dst + dstskip);
    }
}

static void Draw_Line(TTF_Direction direction, const SDL_Surface *textbuf, int column, int row, int line_width, int line_thickness, Uint32 color, const render_mode_t render_mode)
{
    int tmp = row + line_thickness - textbuf->h;
    int x_offset = column * (((textbuf->format) && ((((textbuf->format) >> 28) & 0x0F) != 1)) ? ((((textbuf->format) == SDL_PIXELFORMAT_YUY2) || ((textbuf->format) == SDL_PIXELFORMAT_UYVY) || ((textbuf->format) == SDL_PIXELFORMAT_YVYU) || ((textbuf->format) == SDL_PIXELFORMAT_P010)) ? 2 : 1) : (((textbuf->format) >> 0) & 0xFF));
    Uint8 *dst = (Uint8 *)textbuf->pixels + row * textbuf->pitch + x_offset;

    if (direction == TTF_DIRECTION_TTB || direction == TTF_DIRECTION_BTT) {
        return;
    }

    if (tmp > 0) {
        line_thickness -= tmp;
    }

    if (line_thickness <= 0) {
        return;
    }

    line_width = (((line_width) < (textbuf->w)) ? (line_width) : (textbuf->w));

    if (render_mode == RENDER_BLENDED || render_mode == RENDER_LCD) {
        while (line_thickness--) {
            SDL_memset4(dst, color, line_width);
            dst += textbuf->pitch;
        }
    } else {
        while (line_thickness--) {
            memset(dst, color, line_width);
            dst += textbuf->pitch;
        }
    }
}

static void Draw_Line_TextEngine(TTF_Direction direction, int width, int height, int column, int row, int line_width, int line_thickness, TTF_DrawOperation *ops, int *current_op)
{
    int op_index = *current_op;
    TTF_DrawOperation *op = &ops[op_index];
    int tmp = row + line_thickness - height;

    if (direction == TTF_DIRECTION_TTB || direction == TTF_DIRECTION_BTT) {
        return;
    }

    if (tmp > 0) {
        line_thickness -= tmp;
    }

    if (line_thickness <= 0) {
        return;
    }

    line_width = (((line_width) < (width)) ? (line_width) : (width));

    op = &ops[op_index++];
    op->cmd = TTF_DRAW_COMMAND_FILL;
    op->fill.rect.x = column;
    op->fill.rect.y = row;
    op->fill.rect.w = line_width;
    op->fill.rect.h = line_thickness;
    *current_op = op_index;
}

static void clip_glyph(int *_x, int *_y, TTF_Image *image, const SDL_Surface *textbuf, int is_lcd)
{
    int above_w;
    int above_h;
    int x = *_x;
    int y = *_y;

    int srcbpp = 1;
    if (image->is_color || is_lcd) {
        srcbpp = 4;
    }

    if (x < 0) {
        int tmp = -x;
        x = 0;
        image->width -= tmp;
        image->buffer += srcbpp * tmp;
    }

    above_w = x + image->width - textbuf->w;
    if (above_w > 0) {
        image->width -= above_w;
    }

    if (y < 0) {
        int tmp = -y;
        y = 0;
        image->rows -= tmp;
        image->buffer += tmp * image->pitch;
    }

    above_h = y + image->rows - textbuf->h;
    if (above_h > 0) {
        image->rows -= above_h;
    }

    image->width = (((0) > (image->width)) ? (0) : (image->width));
    image->rows = (((0) > (image->rows)) ? (0) : (image->rows));

    if (image->width == 0) {
        image->rows = 0;
    }

    *_x = x;
    *_y = y;
}

static int Get_Alignment(void)
{

    if (hasSSE2()) {
        return 16;
    }

    return 8;
}

static _Bool Render_Line_SSE_Shaded(TTF_Font *font, SDL_Surface *textbuf, int xstart, int ystart, SDL_Color *fg)
{
    const int alignment = Get_Alignment() - 1;
    const int bpp = ((0 || 0) ? 4 : 1);
    int i;
    Uint8 fg_alpha = (fg ? fg->a : 255);
    for (i = 0; i < font->positions->len; i++) {
        GlyphPosition *pos = &font->positions->pos[i];
        TTF_Font *glyph_font = pos->font;
        FT_UInt idx = pos->index;
        int x = pos->x;
        int y = pos->y;
        TTF_Image *image;
        if (Find_GlyphByIndex(glyph_font, idx, 0, 0x02, 0, 0, 0, x & 63, ((void *)0), &image)) {
            int above_w, above_h;
            Uint32 dstskip;
            Sint32 srcskip;
            Uint8 *dst;
            int remainder;
            Uint8 *saved_buffer = image->buffer;
            int saved_width = image->width;
            image->buffer += alignment;
            x = xstart + (int)(((x) & -64) / 64) + image->left;
            y = ystart + (int)(((y) & -64) / 64) - image->top;
            above_w = x + image->width - textbuf->w;
            above_h = y + image->rows - textbuf->h;
            if (x >= 0 && y >= 0 && above_w <= 0 && above_h <= 0) {
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                remainder = ((uintptr_t)dst & alignment) / bpp;
                dst = (Uint8 *)((uintptr_t)dst & ~alignment);
                image->buffer -= remainder;
                image->width = (image->width + remainder + alignment) & ~alignment;
                srcskip = image->pitch - image->width;
                dstskip = textbuf->pitch - image->width * bpp;
                if (0) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_LCD(image, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!0 || image->is_color == 0) {
                    if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip);
                    } else if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG_SSE(image, dst, srcskip, dstskip);
                    }
                } else if (0 && image->is_color) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_Color(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
                image->width = saved_width;
            } else {
                TTF_Image image_clipped = *image;
                clip_glyph(&x, &y, &image_clipped, textbuf, 0);
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                srcskip = image_clipped.pitch - image_clipped.width;
                dstskip = textbuf->pitch - image_clipped.width * bpp;
                if (0) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_LCD(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!0 || image->is_color == 0) {
                    if (0) {
                        BG_Blended_Opaque(&image_clipped, (Uint32 *)dst, srcskip, dstskip);
                    } else if (0) {
                        BG_Blended(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG(&image_clipped, dst, srcskip, dstskip);
                    }
                } else if (0 && image->is_color) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_Color(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
            }
            image->buffer = saved_buffer;
        } else {
            return 0;
        }
    }
    return 1;
}
static _Bool Render_Line_SSE_Blended(TTF_Font *font, SDL_Surface *textbuf, int xstart, int ystart, SDL_Color *fg)
{
    const int alignment = Get_Alignment() - 1;
    const int bpp = ((1 || 0) ? 4 : 1);
    int i;
    Uint8 fg_alpha = (fg ? fg->a : 255);
    for (i = 0; i < font->positions->len; i++) {
        GlyphPosition *pos = &font->positions->pos[i];
        TTF_Font *glyph_font = pos->font;
        FT_UInt idx = pos->index;
        int x = pos->x;
        int y = pos->y;
        TTF_Image *image;
        if (Find_GlyphByIndex(glyph_font, idx, 0, 0, 0x04, 0, 0, x & 63, ((void *)0), &image)) {
            int above_w, above_h;
            Uint32 dstskip;
            Sint32 srcskip;
            Uint8 *dst;
            int remainder;
            Uint8 *saved_buffer = image->buffer;
            int saved_width = image->width;
            image->buffer += alignment;
            x = xstart + (int)(((x) & -64) / 64) + image->left;
            y = ystart + (int)(((y) & -64) / 64) - image->top;
            above_w = x + image->width - textbuf->w;
            above_h = y + image->rows - textbuf->h;
            if (x >= 0 && y >= 0 && above_w <= 0 && above_h <= 0) {
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                remainder = ((uintptr_t)dst & alignment) / bpp;
                dst = (Uint8 *)((uintptr_t)dst & ~alignment);
                image->buffer -= remainder;
                image->width = (image->width + remainder + alignment) & ~alignment;
                srcskip = image->pitch - image->width;
                dstskip = textbuf->pitch - image->width * bpp;
                if (0) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_LCD(image, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!1 || image->is_color == 0) {
                    if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip);
                    } else if (1) {
                        BG_Blended_SSE(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        (image, dst, srcskip, dstskip);
                    }
                } else if (1 && image->is_color) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_Color(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
                image->width = saved_width;
            } else {
                TTF_Image image_clipped = *image;
                clip_glyph(&x, &y, &image_clipped, textbuf, 0);
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                srcskip = image_clipped.pitch - image_clipped.width;
                dstskip = textbuf->pitch - image_clipped.width * bpp;
                if (0) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_LCD(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!1 || image->is_color == 0) {
                    if (0) {
                        BG_Blended_Opaque(&image_clipped, (Uint32 *)dst, srcskip, dstskip);
                    } else if (1) {
                        BG_Blended(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG(&image_clipped, dst, srcskip, dstskip);
                    }
                } else if (1 && image->is_color) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_Color(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
            }
            image->buffer = saved_buffer;
        } else {
            return 0;
        }
    }
    return 1;
}
static _Bool Render_Line_SSE_Blended_Opaque(TTF_Font *font, SDL_Surface *textbuf, int xstart, int ystart, SDL_Color *fg)
{
    const int alignment = Get_Alignment() - 1;
    const int bpp = ((1 || 0) ? 4 : 1);
    int i;
    Uint8 fg_alpha = (fg ? fg->a : 255);
    for (i = 0; i < font->positions->len; i++) {
        GlyphPosition *pos = &font->positions->pos[i];
        TTF_Font *glyph_font = pos->font;
        FT_UInt idx = pos->index;
        int x = pos->x;
        int y = pos->y;
        TTF_Image *image;
        if (Find_GlyphByIndex(glyph_font, idx, 0, 0, 0x04, 0, 0, x & 63, ((void *)0), &image)) {
            int above_w, above_h;
            Uint32 dstskip;
            Sint32 srcskip;
            Uint8 *dst;
            int remainder;
            Uint8 *saved_buffer = image->buffer;
            int saved_width = image->width;
            image->buffer += alignment;
            x = xstart + (int)(((x) & -64) / 64) + image->left;
            y = ystart + (int)(((y) & -64) / 64) - image->top;
            above_w = x + image->width - textbuf->w;
            above_h = y + image->rows - textbuf->h;
            if (x >= 0 && y >= 0 && above_w <= 0 && above_h <= 0) {
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                remainder = ((uintptr_t)dst & alignment) / bpp;
                dst = (Uint8 *)((uintptr_t)dst & ~alignment);
                image->buffer -= remainder;
                image->width = (image->width + remainder + alignment) & ~alignment;
                srcskip = image->pitch - image->width;
                dstskip = textbuf->pitch - image->width * bpp;
                if (0) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_LCD(image, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!1 || image->is_color == 0) {
                    if (1) {
                        BG_Blended_Opaque_SSE(image, (Uint32 *)dst, srcskip, dstskip);
                    } else if (1) {
                        (image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        (image, dst, srcskip, dstskip);
                    }
                } else if (1 && image->is_color) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_Color(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
                image->width = saved_width;
            } else {
                TTF_Image image_clipped = *image;
                clip_glyph(&x, &y, &image_clipped, textbuf, 0);
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                srcskip = image_clipped.pitch - image_clipped.width;
                dstskip = textbuf->pitch - image_clipped.width * bpp;
                if (0) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_LCD(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!1 || image->is_color == 0) {
                    if (1) {
                        BG_Blended_Opaque(&image_clipped, (Uint32 *)dst, srcskip, dstskip);
                    } else if (1) {
                        BG_Blended(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG(&image_clipped, dst, srcskip, dstskip);
                    }
                } else if (1 && image->is_color) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_Color(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
            }
            image->buffer = saved_buffer;
        } else {
            return 0;
        }
    }
    return 1;
}
static _Bool Render_Line_SSE_Solid(TTF_Font *font, SDL_Surface *textbuf, int xstart, int ystart, SDL_Color *fg)
{
    const int alignment = Get_Alignment() - 1;
    const int bpp = ((0 || 0) ? 4 : 1);
    int i;
    Uint8 fg_alpha = (fg ? fg->a : 255);
    for (i = 0; i < font->positions->len; i++) {
        GlyphPosition *pos = &font->positions->pos[i];
        TTF_Font *glyph_font = pos->font;
        FT_UInt idx = pos->index;
        int x = pos->x;
        int y = pos->y;
        TTF_Image *image;
        if (Find_GlyphByIndex(glyph_font, idx, 0x01, 0, 0, 0, 0, x & 63, ((void *)0), &image)) {
            int above_w, above_h;
            Uint32 dstskip;
            Sint32 srcskip;
            Uint8 *dst;
            int remainder;
            Uint8 *saved_buffer = image->buffer;
            int saved_width = image->width;
            image->buffer += alignment;
            x = xstart + (int)(((x) & -64) / 64) + image->left;
            y = ystart + (int)(((y) & -64) / 64) - image->top;
            above_w = x + image->width - textbuf->w;
            above_h = y + image->rows - textbuf->h;
            if (x >= 0 && y >= 0 && above_w <= 0 && above_h <= 0) {
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                remainder = ((uintptr_t)dst & alignment) / bpp;
                dst = (Uint8 *)((uintptr_t)dst & ~alignment);
                image->buffer -= remainder;
                image->width = (image->width + remainder + alignment) & ~alignment;
                srcskip = image->pitch - image->width;
                dstskip = textbuf->pitch - image->width * bpp;
                if (0) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_LCD(image, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!0 || image->is_color == 0) {
                    if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip);
                    } else if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG_SSE(image, dst, srcskip, dstskip);
                    }
                } else if (0 && image->is_color) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_Color(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
                image->width = saved_width;
            } else {
                TTF_Image image_clipped = *image;
                clip_glyph(&x, &y, &image_clipped, textbuf, 0);
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                srcskip = image_clipped.pitch - image_clipped.width;
                dstskip = textbuf->pitch - image_clipped.width * bpp;
                if (0) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_LCD(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!0 || image->is_color == 0) {
                    if (0) {
                        BG_Blended_Opaque(&image_clipped, (Uint32 *)dst, srcskip, dstskip);
                    } else if (0) {
                        BG_Blended(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG(&image_clipped, dst, srcskip, dstskip);
                    }
                } else if (0 && image->is_color) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_Color(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
            }
            image->buffer = saved_buffer;
        } else {
            return 0;
        }
    }
    return 1;
}
static _Bool Render_Line_SSE_Shaded_SP(TTF_Font *font, SDL_Surface *textbuf, int xstart, int ystart, SDL_Color *fg)
{
    const int alignment = Get_Alignment() - 1;
    const int bpp = ((0 || 0) ? 4 : 1);
    int i;
    Uint8 fg_alpha = (fg ? fg->a : 255);
    for (i = 0; i < font->positions->len; i++) {
        GlyphPosition *pos = &font->positions->pos[i];
        TTF_Font *glyph_font = pos->font;
        FT_UInt idx = pos->index;
        int x = pos->x;
        int y = pos->y;
        TTF_Image *image;
        if (Find_GlyphByIndex(glyph_font, idx, 0, 0x02, 0, 0, 0x10, x & 63, ((void *)0), &image)) {
            int above_w, above_h;
            Uint32 dstskip;
            Sint32 srcskip;
            Uint8 *dst;
            int remainder;
            Uint8 *saved_buffer = image->buffer;
            int saved_width = image->width;
            image->buffer += alignment;
            x = xstart + (int)(((x) & -64) / 64) + image->left;
            y = ystart + (int)(((y) & -64) / 64) - image->top;
            above_w = x + image->width - textbuf->w;
            above_h = y + image->rows - textbuf->h;
            if (x >= 0 && y >= 0 && above_w <= 0 && above_h <= 0) {
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                remainder = ((uintptr_t)dst & alignment) / bpp;
                dst = (Uint8 *)((uintptr_t)dst & ~alignment);
                image->buffer -= remainder;
                image->width = (image->width + remainder + alignment) & ~alignment;
                srcskip = image->pitch - image->width;
                dstskip = textbuf->pitch - image->width * bpp;
                if (0) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_LCD(image, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!0 || image->is_color == 0) {
                    if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip);
                    } else if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG_SSE(image, dst, srcskip, dstskip);
                    }
                } else if (0 && image->is_color) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_Color(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
                image->width = saved_width;
            } else {
                TTF_Image image_clipped = *image;
                clip_glyph(&x, &y, &image_clipped, textbuf, 0);
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                srcskip = image_clipped.pitch - image_clipped.width;
                dstskip = textbuf->pitch - image_clipped.width * bpp;
                if (0) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_LCD(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!0 || image->is_color == 0) {
                    if (0) {
                        BG_Blended_Opaque(&image_clipped, (Uint32 *)dst, srcskip, dstskip);
                    } else if (0) {
                        BG_Blended(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG(&image_clipped, dst, srcskip, dstskip);
                    }
                } else if (0 && image->is_color) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_Color(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
            }
            image->buffer = saved_buffer;
        } else {
            return 0;
        }
    }
    return 1;
}
static _Bool Render_Line_SSE_Blended_SP(TTF_Font *font, SDL_Surface *textbuf, int xstart, int ystart, SDL_Color *fg)
{
    const int alignment = Get_Alignment() - 1;
    const int bpp = ((1 || 0) ? 4 : 1);
    int i;
    Uint8 fg_alpha = (fg ? fg->a : 255);
    for (i = 0; i < font->positions->len; i++) {
        GlyphPosition *pos = &font->positions->pos[i];
        TTF_Font *glyph_font = pos->font;
        FT_UInt idx = pos->index;
        int x = pos->x;
        int y = pos->y;
        TTF_Image *image;
        if (Find_GlyphByIndex(glyph_font, idx, 0, 0, 0x04, 0, 0x10, x & 63, ((void *)0), &image)) {
            int above_w, above_h;
            Uint32 dstskip;
            Sint32 srcskip;
            Uint8 *dst;
            int remainder;
            Uint8 *saved_buffer = image->buffer;
            int saved_width = image->width;
            image->buffer += alignment;
            x = xstart + (int)(((x) & -64) / 64) + image->left;
            y = ystart + (int)(((y) & -64) / 64) - image->top;
            above_w = x + image->width - textbuf->w;
            above_h = y + image->rows - textbuf->h;
            if (x >= 0 && y >= 0 && above_w <= 0 && above_h <= 0) {
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                remainder = ((uintptr_t)dst & alignment) / bpp;
                dst = (Uint8 *)((uintptr_t)dst & ~alignment);
                image->buffer -= remainder;
                image->width = (image->width + remainder + alignment) & ~alignment;
                srcskip = image->pitch - image->width;
                dstskip = textbuf->pitch - image->width * bpp;
                if (0) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_LCD(image, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!1 || image->is_color == 0) {
                    if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip);
                    } else if (1) {
                        BG_Blended_SSE(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        (image, dst, srcskip, dstskip);
                    }
                } else if (1 && image->is_color) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_Color(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
                image->width = saved_width;
            } else {
                TTF_Image image_clipped = *image;
                clip_glyph(&x, &y, &image_clipped, textbuf, 0);
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                srcskip = image_clipped.pitch - image_clipped.width;
                dstskip = textbuf->pitch - image_clipped.width * bpp;
                if (0) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_LCD(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!1 || image->is_color == 0) {
                    if (0) {
                        BG_Blended_Opaque(&image_clipped, (Uint32 *)dst, srcskip, dstskip);
                    } else if (1) {
                        BG_Blended(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG(&image_clipped, dst, srcskip, dstskip);
                    }
                } else if (1 && image->is_color) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_Color(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
            }
            image->buffer = saved_buffer;
        } else {
            return 0;
        }
    }
    return 1;
}
static _Bool Render_Line_SSE_Blended_Opaque_SP(TTF_Font *font, SDL_Surface *textbuf, int xstart, int ystart, SDL_Color *fg)
{
    const int alignment = Get_Alignment() - 1;
    const int bpp = ((1 || 0) ? 4 : 1);
    int i;
    Uint8 fg_alpha = (fg ? fg->a : 255);
    for (i = 0; i < font->positions->len; i++) {
        GlyphPosition *pos = &font->positions->pos[i];
        TTF_Font *glyph_font = pos->font;
        FT_UInt idx = pos->index;
        int x = pos->x;
        int y = pos->y;
        TTF_Image *image;
        if (Find_GlyphByIndex(glyph_font, idx, 0, 0, 0x04, 0, 0x10, x & 63, ((void *)0), &image)) {
            int above_w, above_h;
            Uint32 dstskip;
            Sint32 srcskip;
            Uint8 *dst;
            int remainder;
            Uint8 *saved_buffer = image->buffer;
            int saved_width = image->width;
            image->buffer += alignment;
            x = xstart + (int)(((x) & -64) / 64) + image->left;
            y = ystart + (int)(((y) & -64) / 64) - image->top;
            above_w = x + image->width - textbuf->w;
            above_h = y + image->rows - textbuf->h;
            if (x >= 0 && y >= 0 && above_w <= 0 && above_h <= 0) {
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                remainder = ((uintptr_t)dst & alignment) / bpp;
                dst = (Uint8 *)((uintptr_t)dst & ~alignment);
                image->buffer -= remainder;
                image->width = (image->width + remainder + alignment) & ~alignment;
                srcskip = image->pitch - image->width;
                dstskip = textbuf->pitch - image->width * bpp;
                if (0) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_LCD(image, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!1 || image->is_color == 0) {
                    if (1) {
                        BG_Blended_Opaque_SSE(image, (Uint32 *)dst, srcskip, dstskip);
                    } else if (1) {
                        (image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        (image, dst, srcskip, dstskip);
                    }
                } else if (1 && image->is_color) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_Color(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
                image->width = saved_width;
            } else {
                TTF_Image image_clipped = *image;
                clip_glyph(&x, &y, &image_clipped, textbuf, 0);
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                srcskip = image_clipped.pitch - image_clipped.width;
                dstskip = textbuf->pitch - image_clipped.width * bpp;
                if (0) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_LCD(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!1 || image->is_color == 0) {
                    if (1) {
                        BG_Blended_Opaque(&image_clipped, (Uint32 *)dst, srcskip, dstskip);
                    } else if (1) {
                        BG_Blended(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG(&image_clipped, dst, srcskip, dstskip);
                    }
                } else if (1 && image->is_color) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_Color(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
            }
            image->buffer = saved_buffer;
        } else {
            return 0;
        }
    }
    return 1;
}
static _Bool Render_Line_SSE_LCD(TTF_Font *font, SDL_Surface *textbuf, int xstart, int ystart, SDL_Color *fg)
{
    const int alignment = Get_Alignment() - 1;
    const int bpp = ((0 || 1) ? 4 : 1);
    int i;
    Uint8 fg_alpha = (fg ? fg->a : 255);
    for (i = 0; i < font->positions->len; i++) {
        GlyphPosition *pos = &font->positions->pos[i];
        TTF_Font *glyph_font = pos->font;
        FT_UInt idx = pos->index;
        int x = pos->x;
        int y = pos->y;
        TTF_Image *image;
        if (Find_GlyphByIndex(glyph_font, idx, 0, 0, 0, 0x08, 0, x & 63, ((void *)0), &image)) {
            int above_w, above_h;
            Uint32 dstskip;
            Sint32 srcskip;
            Uint8 *dst;
            int remainder;
            Uint8 *saved_buffer = image->buffer;
            int saved_width = image->width;
            image->buffer += alignment;
            x = xstart + (int)(((x) & -64) / 64) + image->left;
            y = ystart + (int)(((y) & -64) / 64) - image->top;
            above_w = x + image->width - textbuf->w;
            above_h = y + image->rows - textbuf->h;
            if (x >= 0 && y >= 0 && above_w <= 0 && above_h <= 0) {
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                remainder = ((uintptr_t)dst & alignment) / bpp;
                dst = (Uint8 *)((uintptr_t)dst & ~alignment);
                image->buffer -= remainder;
                image->width = (image->width + remainder + alignment) & ~alignment;
                srcskip = image->pitch - image->width;
                dstskip = textbuf->pitch - image->width * bpp;
                if (1) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_LCD(image, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!0 || image->is_color == 0) {
                    if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip);
                    } else if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        (image, dst, srcskip, dstskip);
                    }
                } else if (0 && image->is_color) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_Color(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
                image->width = saved_width;
            } else {
                TTF_Image image_clipped = *image;
                clip_glyph(&x, &y, &image_clipped, textbuf, 1);
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                srcskip = image_clipped.pitch - image_clipped.width;
                dstskip = textbuf->pitch - image_clipped.width * bpp;
                if (1) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_LCD(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!0 || image->is_color == 0) {
                    if (0) {
                        BG_Blended_Opaque(&image_clipped, (Uint32 *)dst, srcskip, dstskip);
                    } else if (0) {
                        BG_Blended(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG(&image_clipped, dst, srcskip, dstskip);
                    }
                } else if (0 && image->is_color) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_Color(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
            }
            image->buffer = saved_buffer;
        } else {
            return 0;
        }
    }
    return 1;
}
static _Bool Render_Line_SSE_LCD_SP(TTF_Font *font, SDL_Surface *textbuf, int xstart, int ystart, SDL_Color *fg)
{
    const int alignment = Get_Alignment() - 1;
    const int bpp = ((0 || 1) ? 4 : 1);
    int i;
    Uint8 fg_alpha = (fg ? fg->a : 255);
    for (i = 0; i < font->positions->len; i++) {
        GlyphPosition *pos = &font->positions->pos[i];
        TTF_Font *glyph_font = pos->font;
        FT_UInt idx = pos->index;
        int x = pos->x;
        int y = pos->y;
        TTF_Image *image;
        if (Find_GlyphByIndex(glyph_font, idx, 0, 0, 0, 0x08, 0x10, x & 63, ((void *)0), &image)) {
            int above_w, above_h;
            Uint32 dstskip;
            Sint32 srcskip;
            Uint8 *dst;
            int remainder;
            Uint8 *saved_buffer = image->buffer;
            int saved_width = image->width;
            image->buffer += alignment;
            x = xstart + (int)(((x) & -64) / 64) + image->left;
            y = ystart + (int)(((y) & -64) / 64) - image->top;
            above_w = x + image->width - textbuf->w;
            above_h = y + image->rows - textbuf->h;
            if (x >= 0 && y >= 0 && above_w <= 0 && above_h <= 0) {
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                remainder = ((uintptr_t)dst & alignment) / bpp;
                dst = (Uint8 *)((uintptr_t)dst & ~alignment);
                image->buffer -= remainder;
                image->width = (image->width + remainder + alignment) & ~alignment;
                srcskip = image->pitch - image->width;
                dstskip = textbuf->pitch - image->width * bpp;
                if (1) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_LCD(image, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!0 || image->is_color == 0) {
                    if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip);
                    } else if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        (image, dst, srcskip, dstskip);
                    }
                } else if (0 && image->is_color) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_Color(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
                image->width = saved_width;
            } else {
                TTF_Image image_clipped = *image;
                clip_glyph(&x, &y, &image_clipped, textbuf, 1);
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                srcskip = image_clipped.pitch - image_clipped.width;
                dstskip = textbuf->pitch - image_clipped.width * bpp;
                if (1) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_LCD(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!0 || image->is_color == 0) {
                    if (0) {
                        BG_Blended_Opaque(&image_clipped, (Uint32 *)dst, srcskip, dstskip);
                    } else if (0) {
                        BG_Blended(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG(&image_clipped, dst, srcskip, dstskip);
                    }
                } else if (0 && image->is_color) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_Color(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
            }
            image->buffer = saved_buffer;
        } else {
            return 0;
        }
    }
    return 1;
}

static _Bool Render_Line_64_Shaded(TTF_Font *font, SDL_Surface *textbuf, int xstart, int ystart, SDL_Color *fg)
{
    const int alignment = Get_Alignment() - 1;
    const int bpp = ((0 || 0) ? 4 : 1);
    int i;
    Uint8 fg_alpha = (fg ? fg->a : 255);
    for (i = 0; i < font->positions->len; i++) {
        GlyphPosition *pos = &font->positions->pos[i];
        TTF_Font *glyph_font = pos->font;
        FT_UInt idx = pos->index;
        int x = pos->x;
        int y = pos->y;
        TTF_Image *image;
        if (Find_GlyphByIndex(glyph_font, idx, 0, 0x02, 0, 0, 0, x & 63, ((void *)0), &image)) {
            int above_w, above_h;
            Uint32 dstskip;
            Sint32 srcskip;
            Uint8 *dst;
            int remainder;
            Uint8 *saved_buffer = image->buffer;
            int saved_width = image->width;
            image->buffer += alignment;
            x = xstart + (int)(((x) & -64) / 64) + image->left;
            y = ystart + (int)(((y) & -64) / 64) - image->top;
            above_w = x + image->width - textbuf->w;
            above_h = y + image->rows - textbuf->h;
            if (x >= 0 && y >= 0 && above_w <= 0 && above_h <= 0) {
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                remainder = ((uintptr_t)dst & alignment) / bpp;
                dst = (Uint8 *)((uintptr_t)dst & ~alignment);
                image->buffer -= remainder;
                image->width = (image->width + remainder + alignment) & ~alignment;
                srcskip = image->pitch - image->width;
                dstskip = textbuf->pitch - image->width * bpp;
                if (0) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_LCD(image, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!0 || image->is_color == 0) {
                    if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip);
                    } else if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG_64(image, dst, srcskip, dstskip);
                    }
                } else if (0 && image->is_color) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_Color(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
                image->width = saved_width;
            } else {
                TTF_Image image_clipped = *image;
                clip_glyph(&x, &y, &image_clipped, textbuf, 0);
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                srcskip = image_clipped.pitch - image_clipped.width;
                dstskip = textbuf->pitch - image_clipped.width * bpp;
                if (0) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_LCD(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!0 || image->is_color == 0) {
                    if (0) {
                        BG_Blended_Opaque(&image_clipped, (Uint32 *)dst, srcskip, dstskip);
                    } else if (0) {
                        BG_Blended(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG(&image_clipped, dst, srcskip, dstskip);
                    }
                } else if (0 && image->is_color) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_Color(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
            }
            image->buffer = saved_buffer;
        } else {
            return 0;
        }
    }
    return 1;
}
static _Bool Render_Line_64_Blended(TTF_Font *font, SDL_Surface *textbuf, int xstart, int ystart, SDL_Color *fg)
{
    const int alignment = Get_Alignment() - 1;
    const int bpp = ((1 || 0) ? 4 : 1);
    int i;
    Uint8 fg_alpha = (fg ? fg->a : 255);
    for (i = 0; i < font->positions->len; i++) {
        GlyphPosition *pos = &font->positions->pos[i];
        TTF_Font *glyph_font = pos->font;
        FT_UInt idx = pos->index;
        int x = pos->x;
        int y = pos->y;
        TTF_Image *image;
        if (Find_GlyphByIndex(glyph_font, idx, 0, 0, 0x04, 0, 0, x & 63, ((void *)0), &image)) {
            int above_w, above_h;
            Uint32 dstskip;
            Sint32 srcskip;
            Uint8 *dst;
            int remainder;
            Uint8 *saved_buffer = image->buffer;
            int saved_width = image->width;
            image->buffer += alignment;
            x = xstart + (int)(((x) & -64) / 64) + image->left;
            y = ystart + (int)(((y) & -64) / 64) - image->top;
            above_w = x + image->width - textbuf->w;
            above_h = y + image->rows - textbuf->h;
            if (x >= 0 && y >= 0 && above_w <= 0 && above_h <= 0) {
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                remainder = ((uintptr_t)dst & alignment) / bpp;
                dst = (Uint8 *)((uintptr_t)dst & ~alignment);
                image->buffer -= remainder;
                image->width = (image->width + remainder + alignment) & ~alignment;
                srcskip = image->pitch - image->width;
                dstskip = textbuf->pitch - image->width * bpp;
                if (0) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_LCD(image, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!1 || image->is_color == 0) {
                    if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip);
                    } else if (1) {
                        BG_Blended_32(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        (image, dst, srcskip, dstskip);
                    }
                } else if (1 && image->is_color) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_Color(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
                image->width = saved_width;
            } else {
                TTF_Image image_clipped = *image;
                clip_glyph(&x, &y, &image_clipped, textbuf, 0);
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                srcskip = image_clipped.pitch - image_clipped.width;
                dstskip = textbuf->pitch - image_clipped.width * bpp;
                if (0) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_LCD(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!1 || image->is_color == 0) {
                    if (0) {
                        BG_Blended_Opaque(&image_clipped, (Uint32 *)dst, srcskip, dstskip);
                    } else if (1) {
                        BG_Blended(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG(&image_clipped, dst, srcskip, dstskip);
                    }
                } else if (1 && image->is_color) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_Color(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
            }
            image->buffer = saved_buffer;
        } else {
            return 0;
        }
    }
    return 1;
}
static _Bool Render_Line_64_Blended_Opaque(TTF_Font *font, SDL_Surface *textbuf, int xstart, int ystart, SDL_Color *fg)
{
    const int alignment = Get_Alignment() - 1;
    const int bpp = ((1 || 0) ? 4 : 1);
    int i;
    Uint8 fg_alpha = (fg ? fg->a : 255);
    for (i = 0; i < font->positions->len; i++) {
        GlyphPosition *pos = &font->positions->pos[i];
        TTF_Font *glyph_font = pos->font;
        FT_UInt idx = pos->index;
        int x = pos->x;
        int y = pos->y;
        TTF_Image *image;
        if (Find_GlyphByIndex(glyph_font, idx, 0, 0, 0x04, 0, 0, x & 63, ((void *)0), &image)) {
            int above_w, above_h;
            Uint32 dstskip;
            Sint32 srcskip;
            Uint8 *dst;
            int remainder;
            Uint8 *saved_buffer = image->buffer;
            int saved_width = image->width;
            image->buffer += alignment;
            x = xstart + (int)(((x) & -64) / 64) + image->left;
            y = ystart + (int)(((y) & -64) / 64) - image->top;
            above_w = x + image->width - textbuf->w;
            above_h = y + image->rows - textbuf->h;
            if (x >= 0 && y >= 0 && above_w <= 0 && above_h <= 0) {
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                remainder = ((uintptr_t)dst & alignment) / bpp;
                dst = (Uint8 *)((uintptr_t)dst & ~alignment);
                image->buffer -= remainder;
                image->width = (image->width + remainder + alignment) & ~alignment;
                srcskip = image->pitch - image->width;
                dstskip = textbuf->pitch - image->width * bpp;
                if (0) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_LCD(image, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!1 || image->is_color == 0) {
                    if (1) {
                        BG_Blended_Opaque_32(image, (Uint32 *)dst, srcskip, dstskip);
                    } else if (1) {
                        (image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        (image, dst, srcskip, dstskip);
                    }
                } else if (1 && image->is_color) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_Color(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
                image->width = saved_width;
            } else {
                TTF_Image image_clipped = *image;
                clip_glyph(&x, &y, &image_clipped, textbuf, 0);
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                srcskip = image_clipped.pitch - image_clipped.width;
                dstskip = textbuf->pitch - image_clipped.width * bpp;
                if (0) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_LCD(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!1 || image->is_color == 0) {
                    if (1) {
                        BG_Blended_Opaque(&image_clipped, (Uint32 *)dst, srcskip, dstskip);
                    } else if (1) {
                        BG_Blended(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG(&image_clipped, dst, srcskip, dstskip);
                    }
                } else if (1 && image->is_color) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_Color(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
            }
            image->buffer = saved_buffer;
        } else {
            return 0;
        }
    }
    return 1;
}
static _Bool Render_Line_64_Solid(TTF_Font *font, SDL_Surface *textbuf, int xstart, int ystart, SDL_Color *fg)
{
    const int alignment = Get_Alignment() - 1;
    const int bpp = ((0 || 0) ? 4 : 1);
    int i;
    Uint8 fg_alpha = (fg ? fg->a : 255);
    for (i = 0; i < font->positions->len; i++) {
        GlyphPosition *pos = &font->positions->pos[i];
        TTF_Font *glyph_font = pos->font;
        FT_UInt idx = pos->index;
        int x = pos->x;
        int y = pos->y;
        TTF_Image *image;
        if (Find_GlyphByIndex(glyph_font, idx, 0x01, 0, 0, 0, 0, x & 63, ((void *)0), &image)) {
            int above_w, above_h;
            Uint32 dstskip;
            Sint32 srcskip;
            Uint8 *dst;
            int remainder;
            Uint8 *saved_buffer = image->buffer;
            int saved_width = image->width;
            image->buffer += alignment;
            x = xstart + (int)(((x) & -64) / 64) + image->left;
            y = ystart + (int)(((y) & -64) / 64) - image->top;
            above_w = x + image->width - textbuf->w;
            above_h = y + image->rows - textbuf->h;
            if (x >= 0 && y >= 0 && above_w <= 0 && above_h <= 0) {
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                remainder = ((uintptr_t)dst & alignment) / bpp;
                dst = (Uint8 *)((uintptr_t)dst & ~alignment);
                image->buffer -= remainder;
                image->width = (image->width + remainder + alignment) & ~alignment;
                srcskip = image->pitch - image->width;
                dstskip = textbuf->pitch - image->width * bpp;
                if (0) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_LCD(image, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!0 || image->is_color == 0) {
                    if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip);
                    } else if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG_64(image, dst, srcskip, dstskip);
                    }
                } else if (0 && image->is_color) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_Color(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
                image->width = saved_width;
            } else {
                TTF_Image image_clipped = *image;
                clip_glyph(&x, &y, &image_clipped, textbuf, 0);
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                srcskip = image_clipped.pitch - image_clipped.width;
                dstskip = textbuf->pitch - image_clipped.width * bpp;
                if (0) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_LCD(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!0 || image->is_color == 0) {
                    if (0) {
                        BG_Blended_Opaque(&image_clipped, (Uint32 *)dst, srcskip, dstskip);
                    } else if (0) {
                        BG_Blended(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG(&image_clipped, dst, srcskip, dstskip);
                    }
                } else if (0 && image->is_color) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_Color(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
            }
            image->buffer = saved_buffer;
        } else {
            return 0;
        }
    }
    return 1;
}
static _Bool Render_Line_64_Shaded_SP(TTF_Font *font, SDL_Surface *textbuf, int xstart, int ystart, SDL_Color *fg)
{
    const int alignment = Get_Alignment() - 1;
    const int bpp = ((0 || 0) ? 4 : 1);
    int i;
    Uint8 fg_alpha = (fg ? fg->a : 255);
    for (i = 0; i < font->positions->len; i++) {
        GlyphPosition *pos = &font->positions->pos[i];
        TTF_Font *glyph_font = pos->font;
        FT_UInt idx = pos->index;
        int x = pos->x;
        int y = pos->y;
        TTF_Image *image;
        if (Find_GlyphByIndex(glyph_font, idx, 0, 0x02, 0, 0, 0x10, x & 63, ((void *)0), &image)) {
            int above_w, above_h;
            Uint32 dstskip;
            Sint32 srcskip;
            Uint8 *dst;
            int remainder;
            Uint8 *saved_buffer = image->buffer;
            int saved_width = image->width;
            image->buffer += alignment;
            x = xstart + (int)(((x) & -64) / 64) + image->left;
            y = ystart + (int)(((y) & -64) / 64) - image->top;
            above_w = x + image->width - textbuf->w;
            above_h = y + image->rows - textbuf->h;
            if (x >= 0 && y >= 0 && above_w <= 0 && above_h <= 0) {
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                remainder = ((uintptr_t)dst & alignment) / bpp;
                dst = (Uint8 *)((uintptr_t)dst & ~alignment);
                image->buffer -= remainder;
                image->width = (image->width + remainder + alignment) & ~alignment;
                srcskip = image->pitch - image->width;
                dstskip = textbuf->pitch - image->width * bpp;
                if (0) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_LCD(image, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!0 || image->is_color == 0) {
                    if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip);
                    } else if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG_64(image, dst, srcskip, dstskip);
                    }
                } else if (0 && image->is_color) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_Color(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
                image->width = saved_width;
            } else {
                TTF_Image image_clipped = *image;
                clip_glyph(&x, &y, &image_clipped, textbuf, 0);
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                srcskip = image_clipped.pitch - image_clipped.width;
                dstskip = textbuf->pitch - image_clipped.width * bpp;
                if (0) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_LCD(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!0 || image->is_color == 0) {
                    if (0) {
                        BG_Blended_Opaque(&image_clipped, (Uint32 *)dst, srcskip, dstskip);
                    } else if (0) {
                        BG_Blended(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG(&image_clipped, dst, srcskip, dstskip);
                    }
                } else if (0 && image->is_color) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_Color(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
            }
            image->buffer = saved_buffer;
        } else {
            return 0;
        }
    }
    return 1;
}
static _Bool Render_Line_64_Blended_SP(TTF_Font *font, SDL_Surface *textbuf, int xstart, int ystart, SDL_Color *fg)
{
    const int alignment = Get_Alignment() - 1;
    const int bpp = ((1 || 0) ? 4 : 1);
    int i;
    Uint8 fg_alpha = (fg ? fg->a : 255);
    for (i = 0; i < font->positions->len; i++) {
        GlyphPosition *pos = &font->positions->pos[i];
        TTF_Font *glyph_font = pos->font;
        FT_UInt idx = pos->index;
        int x = pos->x;
        int y = pos->y;
        TTF_Image *image;
        if (Find_GlyphByIndex(glyph_font, idx, 0, 0, 0x04, 0, 0x10, x & 63, ((void *)0), &image)) {
            int above_w, above_h;
            Uint32 dstskip;
            Sint32 srcskip;
            Uint8 *dst;
            int remainder;
            Uint8 *saved_buffer = image->buffer;
            int saved_width = image->width;
            image->buffer += alignment;
            x = xstart + (int)(((x) & -64) / 64) + image->left;
            y = ystart + (int)(((y) & -64) / 64) - image->top;
            above_w = x + image->width - textbuf->w;
            above_h = y + image->rows - textbuf->h;
            if (x >= 0 && y >= 0 && above_w <= 0 && above_h <= 0) {
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                remainder = ((uintptr_t)dst & alignment) / bpp;
                dst = (Uint8 *)((uintptr_t)dst & ~alignment);
                image->buffer -= remainder;
                image->width = (image->width + remainder + alignment) & ~alignment;
                srcskip = image->pitch - image->width;
                dstskip = textbuf->pitch - image->width * bpp;
                if (0) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_LCD(image, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!1 || image->is_color == 0) {
                    if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip);
                    } else if (1) {
                        BG_Blended_32(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        (image, dst, srcskip, dstskip);
                    }
                } else if (1 && image->is_color) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_Color(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
                image->width = saved_width;
            } else {
                TTF_Image image_clipped = *image;
                clip_glyph(&x, &y, &image_clipped, textbuf, 0);
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                srcskip = image_clipped.pitch - image_clipped.width;
                dstskip = textbuf->pitch - image_clipped.width * bpp;
                if (0) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_LCD(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!1 || image->is_color == 0) {
                    if (0) {
                        BG_Blended_Opaque(&image_clipped, (Uint32 *)dst, srcskip, dstskip);
                    } else if (1) {
                        BG_Blended(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG(&image_clipped, dst, srcskip, dstskip);
                    }
                } else if (1 && image->is_color) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_Color(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
            }
            image->buffer = saved_buffer;
        } else {
            return 0;
        }
    }
    return 1;
}
static _Bool Render_Line_64_Blended_Opaque_SP(TTF_Font *font, SDL_Surface *textbuf, int xstart, int ystart, SDL_Color *fg)
{
    const int alignment = Get_Alignment() - 1;
    const int bpp = ((1 || 0) ? 4 : 1);
    int i;
    Uint8 fg_alpha = (fg ? fg->a : 255);
    for (i = 0; i < font->positions->len; i++) {
        GlyphPosition *pos = &font->positions->pos[i];
        TTF_Font *glyph_font = pos->font;
        FT_UInt idx = pos->index;
        int x = pos->x;
        int y = pos->y;
        TTF_Image *image;
        if (Find_GlyphByIndex(glyph_font, idx, 0, 0, 0x04, 0, 0x10, x & 63, ((void *)0), &image)) {
            int above_w, above_h;
            Uint32 dstskip;
            Sint32 srcskip;
            Uint8 *dst;
            int remainder;
            Uint8 *saved_buffer = image->buffer;
            int saved_width = image->width;
            image->buffer += alignment;
            x = xstart + (int)(((x) & -64) / 64) + image->left;
            y = ystart + (int)(((y) & -64) / 64) - image->top;
            above_w = x + image->width - textbuf->w;
            above_h = y + image->rows - textbuf->h;
            if (x >= 0 && y >= 0 && above_w <= 0 && above_h <= 0) {
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                remainder = ((uintptr_t)dst & alignment) / bpp;
                dst = (Uint8 *)((uintptr_t)dst & ~alignment);
                image->buffer -= remainder;
                image->width = (image->width + remainder + alignment) & ~alignment;
                srcskip = image->pitch - image->width;
                dstskip = textbuf->pitch - image->width * bpp;
                if (0) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_LCD(image, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!1 || image->is_color == 0) {
                    if (1) {
                        BG_Blended_Opaque_32(image, (Uint32 *)dst, srcskip, dstskip);
                    } else if (1) {
                        (image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        (image, dst, srcskip, dstskip);
                    }
                } else if (1 && image->is_color) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_Color(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
                image->width = saved_width;
            } else {
                TTF_Image image_clipped = *image;
                clip_glyph(&x, &y, &image_clipped, textbuf, 0);
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                srcskip = image_clipped.pitch - image_clipped.width;
                dstskip = textbuf->pitch - image_clipped.width * bpp;
                if (0) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_LCD(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!1 || image->is_color == 0) {
                    if (1) {
                        BG_Blended_Opaque(&image_clipped, (Uint32 *)dst, srcskip, dstskip);
                    } else if (1) {
                        BG_Blended(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG(&image_clipped, dst, srcskip, dstskip);
                    }
                } else if (1 && image->is_color) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_Color(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
            }
            image->buffer = saved_buffer;
        } else {
            return 0;
        }
    }
    return 1;
}
static _Bool Render_Line_64_LCD(TTF_Font *font, SDL_Surface *textbuf, int xstart, int ystart, SDL_Color *fg)
{
    const int alignment = Get_Alignment() - 1;
    const int bpp = ((0 || 1) ? 4 : 1);
    int i;
    Uint8 fg_alpha = (fg ? fg->a : 255);
    for (i = 0; i < font->positions->len; i++) {
        GlyphPosition *pos = &font->positions->pos[i];
        TTF_Font *glyph_font = pos->font;
        FT_UInt idx = pos->index;
        int x = pos->x;
        int y = pos->y;
        TTF_Image *image;
        if (Find_GlyphByIndex(glyph_font, idx, 0, 0, 0, 0x08, 0, x & 63, ((void *)0), &image)) {
            int above_w, above_h;
            Uint32 dstskip;
            Sint32 srcskip;
            Uint8 *dst;
            int remainder;
            Uint8 *saved_buffer = image->buffer;
            int saved_width = image->width;
            image->buffer += alignment;
            x = xstart + (int)(((x) & -64) / 64) + image->left;
            y = ystart + (int)(((y) & -64) / 64) - image->top;
            above_w = x + image->width - textbuf->w;
            above_h = y + image->rows - textbuf->h;
            if (x >= 0 && y >= 0 && above_w <= 0 && above_h <= 0) {
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                remainder = ((uintptr_t)dst & alignment) / bpp;
                dst = (Uint8 *)((uintptr_t)dst & ~alignment);
                image->buffer -= remainder;
                image->width = (image->width + remainder + alignment) & ~alignment;
                srcskip = image->pitch - image->width;
                dstskip = textbuf->pitch - image->width * bpp;
                if (1) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_LCD(image, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!0 || image->is_color == 0) {
                    if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip);
                    } else if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        (image, dst, srcskip, dstskip);
                    }
                } else if (0 && image->is_color) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_Color(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
                image->width = saved_width;
            } else {
                TTF_Image image_clipped = *image;
                clip_glyph(&x, &y, &image_clipped, textbuf, 1);
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                srcskip = image_clipped.pitch - image_clipped.width;
                dstskip = textbuf->pitch - image_clipped.width * bpp;
                if (1) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_LCD(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!0 || image->is_color == 0) {
                    if (0) {
                        BG_Blended_Opaque(&image_clipped, (Uint32 *)dst, srcskip, dstskip);
                    } else if (0) {
                        BG_Blended(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG(&image_clipped, dst, srcskip, dstskip);
                    }
                } else if (0 && image->is_color) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_Color(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
            }
            image->buffer = saved_buffer;
        } else {
            return 0;
        }
    }
    return 1;
}
static _Bool Render_Line_64_LCD_SP(TTF_Font *font, SDL_Surface *textbuf, int xstart, int ystart, SDL_Color *fg)
{
    const int alignment = Get_Alignment() - 1;
    const int bpp = ((0 || 1) ? 4 : 1);
    int i;
    Uint8 fg_alpha = (fg ? fg->a : 255);
    for (i = 0; i < font->positions->len; i++) {
        GlyphPosition *pos = &font->positions->pos[i];
        TTF_Font *glyph_font = pos->font;
        FT_UInt idx = pos->index;
        int x = pos->x;
        int y = pos->y;
        TTF_Image *image;
        if (Find_GlyphByIndex(glyph_font, idx, 0, 0, 0, 0x08, 0x10, x & 63, ((void *)0), &image)) {
            int above_w, above_h;
            Uint32 dstskip;
            Sint32 srcskip;
            Uint8 *dst;
            int remainder;
            Uint8 *saved_buffer = image->buffer;
            int saved_width = image->width;
            image->buffer += alignment;
            x = xstart + (int)(((x) & -64) / 64) + image->left;
            y = ystart + (int)(((y) & -64) / 64) - image->top;
            above_w = x + image->width - textbuf->w;
            above_h = y + image->rows - textbuf->h;
            if (x >= 0 && y >= 0 && above_w <= 0 && above_h <= 0) {
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                remainder = ((uintptr_t)dst & alignment) / bpp;
                dst = (Uint8 *)((uintptr_t)dst & ~alignment);
                image->buffer -= remainder;
                image->width = (image->width + remainder + alignment) & ~alignment;
                srcskip = image->pitch - image->width;
                dstskip = textbuf->pitch - image->width * bpp;
                if (1) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_LCD(image, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!0 || image->is_color == 0) {
                    if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip);
                    } else if (0) {
                        (image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        (image, dst, srcskip, dstskip);
                    }
                } else if (0 && image->is_color) {
                    image->buffer = saved_buffer;
                    image->buffer += alignment;
                    image->width = saved_width;
                    dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                    srcskip = image->pitch - 4 * image->width;
                    dstskip = textbuf->pitch - image->width * bpp;
                    BG_Blended_Color(image, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
                image->width = saved_width;
            } else {
                TTF_Image image_clipped = *image;
                clip_glyph(&x, &y, &image_clipped, textbuf, 1);
                dst = (Uint8 *)textbuf->pixels + y * textbuf->pitch + x * bpp;
                srcskip = image_clipped.pitch - image_clipped.width;
                dstskip = textbuf->pitch - image_clipped.width * bpp;
                if (1) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_LCD(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg);
                } else if (!0 || image->is_color == 0) {
                    if (0) {
                        BG_Blended_Opaque(&image_clipped, (Uint32 *)dst, srcskip, dstskip);
                    } else if (0) {
                        BG_Blended(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                    } else if (image->is_color == 0) {
                        BG(&image_clipped, dst, srcskip, dstskip);
                    }
                } else if (0 && image->is_color) {
                    srcskip -= 3 * image_clipped.width;
                    BG_Blended_Color(&image_clipped, (Uint32 *)dst, srcskip, dstskip, fg_alpha);
                }
            }
            image->buffer = saved_buffer;
        } else {
            return 0;
        }
    }
    return 1;
}

static _Bool Render_Line(const render_mode_t render_mode, int subpixel, TTF_Font *font, SDL_Surface *textbuf, int xstart, int ystart, SDL_Color fg)
{

    int is_opaque = (fg.a == 255);

    if (hasSSE2()) {
        if (render_mode == RENDER_SHADED) {
            if (subpixel == 0) {
                return Render_Line_SSE_Shaded(font, textbuf, xstart, ystart, ((void *)0));
            } else {
                return Render_Line_SSE_Shaded_SP(font, textbuf, xstart, ystart, ((void *)0));
            }
        } else if (render_mode == RENDER_BLENDED) {
            if (is_opaque) {
                if (subpixel == 0) {
                    return Render_Line_SSE_Blended_Opaque(font, textbuf, xstart, ystart, ((void *)0));
                } else {
                    return Render_Line_SSE_Blended_Opaque_SP(font, textbuf, xstart, ystart, ((void *)0));
                }
            } else {
                if (subpixel == 0) {
                    return Render_Line_SSE_Blended(font, textbuf, xstart, ystart, &fg);
                } else {
                    return Render_Line_SSE_Blended_SP(font, textbuf, xstart, ystart, &fg);
                }
            }
        } else if (render_mode == RENDER_LCD) {
            if (subpixel == 0) {
                return Render_Line_SSE_LCD(font, textbuf, xstart, ystart, &fg);
            } else {
                return Render_Line_SSE_LCD_SP(font, textbuf, xstart, ystart, &fg);
            }
        } else {
            return Render_Line_SSE_Solid(font, textbuf, xstart, ystart, ((void *)0));
        }
    }

    if (render_mode == RENDER_SHADED) {
        if (subpixel == 0) {
            return Render_Line_64_Shaded(font, textbuf, xstart, ystart, ((void *)0));
        } else {
            return Render_Line_64_Shaded_SP(font, textbuf, xstart, ystart, ((void *)0));
        }
    } else if (render_mode == RENDER_BLENDED) {
        if (is_opaque) {
            if (subpixel == 0) {
                return Render_Line_64_Blended_Opaque(font, textbuf, xstart, ystart, ((void *)0));
            } else {
                return Render_Line_64_Blended_Opaque_SP(font, textbuf, xstart, ystart, ((void *)0));
            }
        } else {
            if (subpixel == 0) {
                return Render_Line_64_Blended(font, textbuf, xstart, ystart, &fg);
            } else {
                return Render_Line_64_Blended_SP(font, textbuf, xstart, ystart, &fg);
            }
        }
    } else if (render_mode == RENDER_LCD) {
        if (subpixel == 0) {
            return Render_Line_64_LCD(font, textbuf, xstart, ystart, &fg);
        } else {
            return Render_Line_64_LCD_SP(font, textbuf, xstart, ystart, &fg);
        }
    } else {
        return Render_Line_64_Solid(font, textbuf, xstart, ystart, ((void *)0));
    }
}

static _Bool Render_Line_TextEngine(TTF_Font *font, TTF_Direction direction, int xstart, int ystart, int width, int height, TTF_DrawOperation *ops, int *current_op, TTF_SubString *clusters, int *current_cluster, int cluster_offset, int line_index)
{
    int i;
    int op_index = *current_op;
    int cluster_index = *current_cluster;
    int last_offset = -1;
    TTF_SubString *cluster = ((void *)0);

    SDL_Rect bounds;
    bounds.x = xstart;
    bounds.y = ystart;
    bounds.w = 0;
    bounds.h = font->height;

    for (i = 0; i < font->positions->len; i++) {
        GlyphPosition *pos = &font->positions->pos[i];
        TTF_Font *glyph_font = pos->font;
        FT_UInt idx = pos->index;
        int x = pos->x;
        int y = pos->y;
        int offset = pos->offset;
        c_glyph *glyph = pos->glyph;
        int above_w, above_h;
        int glyph_x = 0;
        int glyph_y = 0;
        int glyph_width = glyph->sz_width;
        int glyph_rows = glyph->sz_rows;
        TTF_DrawOperation *op;

        x = xstart + (int)(((x) & -64) / 64) + glyph->sz_left;
        y = ystart + (int)(((y) & -64) / 64) - glyph->sz_top;

        if (!glyph_font->render_sdf) {

            above_w = x + glyph_width - width;
            above_h = y + glyph_rows - height;

            if (x < 0) {
                int tmp = -x;
                x = 0;
                glyph_x += tmp;
                glyph_width -= tmp;
            }
            if (above_w > 0) {
                glyph_width -= above_w;
            }
            if (y < 0) {
                int tmp = -y;
                y = 0;
                glyph_y += tmp;
                glyph_rows -= tmp;
            }
            if (above_h > 0) {
                glyph_rows -= above_h;
            }
        }

        if (glyph_width > 0 && glyph_rows > 0) {
            op = &ops[op_index++];
            op->cmd = TTF_DRAW_COMMAND_COPY;
            op->copy.text_offset = offset;
            op->copy.glyph_font = glyph_font;
            op->copy.glyph_index = idx;
            op->copy.src.x = glyph_x;
            op->copy.src.y = glyph_y;
            op->copy.src.w = glyph_width + 2 * font->outline;
            op->copy.src.h = glyph_rows + 2 * font->outline;
            op->copy.dst.x = x;
            op->copy.dst.y = y;
            op->copy.dst.w = op->copy.src.w;
            op->copy.dst.h = op->copy.src.h;
            if (glyph_font->render_sdf) {
                op->copy.dst.x -= 8;
                op->copy.dst.y -= 8;
                op->copy.dst.w -= 8;
                op->copy.dst.h -= 8;
            }
        } else {

            glyph_width = (int)(((pos->x_advance) & -64) / 64) + 2 * font->outline;
        }

        bounds.x = x;
        bounds.w = glyph_width;
        if (offset != last_offset) {
            cluster = &clusters[cluster_index++];
            cluster->offset = cluster_offset + offset;
            cluster->line_index = line_index;
            if (direction == TTF_DIRECTION_INVALID) {
                if (last_offset == -1) {
                    if (i < (font->positions->len - 1)) {
                        GlyphPosition *next = &font->positions->pos[i + 1];
                        if (offset < next->offset) {
                            cluster->flags = TTF_DIRECTION_LTR;
                        } else {
                            cluster->flags = TTF_DIRECTION_RTL;
                        }
                    } else {
                        cluster->flags = TTF_DIRECTION_INVALID;
                    }
                } else {
                    if (offset > last_offset) {
                        cluster->flags = TTF_DIRECTION_LTR;
                    } else {
                        cluster->flags = TTF_DIRECTION_RTL;
                    }
                }
            } else {
                cluster->flags = direction;
            }
            {
                _Static_assert(sizeof(*(&cluster->rect)) == sizeof(*(&bounds)), "sizeof (*(&cluster->rect)) == sizeof (*(&bounds))");
            }
            memcpy((&cluster->rect), (&bounds), sizeof(*(&bounds)));

            last_offset = offset;
        } else if (cluster) {
            SDL_GetRectUnion(&cluster->rect, &bounds, &cluster->rect);
        }
    }

    *current_op = op_index;
    *current_cluster = cluster_index;
    return 1;
}

static SDL_Surface *AllocateAlignedPixels(size_t width, size_t height, SDL_PixelFormat format, Uint32 bgcolor)
{
    const size_t alignment = Get_Alignment() - 1;
    const size_t bytes_per_pixel = (((format) && ((((format) >> 28) & 0x0F) != 1)) ? ((((format) == SDL_PIXELFORMAT_YUY2) || ((format) == SDL_PIXELFORMAT_UYVY) || ((format) == SDL_PIXELFORMAT_YVYU) || ((format) == SDL_PIXELFORMAT_P010)) ? 2 : 1) : (((format) >> 0) & 0xFF));
    SDL_Surface *textbuf = ((void *)0);
    size_t size;
    void *pixels;
    size_t pitch;

    if (width > ((Sint32)0x7FFFFFFF) ||
        height > ((Sint32)0x7FFFFFFF) ||
        !SDL_size_add_check_overflow_builtin(width, alignment, &pitch) ||
        !SDL_size_mul_check_overflow_builtin(pitch, bytes_per_pixel, &pitch) ||
        pitch > ((Sint32)0x7FFFFFFF)) {
        return ((void *)0);
    }
    pitch &= ~alignment;

    if (!SDL_size_mul_check_overflow_builtin(height, pitch, &size)) {

        return ((void *)0);
    }

    pixels = SDL_aligned_alloc(alignment + 1, size);
    if (pixels == ((void *)0)) {
        return ((void *)0);
    }

    textbuf = SDL_CreateSurfaceFrom((int)width, (int)height, format, pixels, (int)pitch);
    if (textbuf == ((void *)0)) {
        SDL_aligned_free(pixels);
        return ((void *)0);
    }

    textbuf->flags &= ~0x00000001u;
    textbuf->flags |= 0x00000008u;

    if ((!((format) && ((((format) >> 28) & 0x0F) != 1)) && (((((format) >> 24) & 0x0F) == SDL_PIXELTYPE_INDEX1) || ((((format) >> 24) & 0x0F) == SDL_PIXELTYPE_INDEX2) || ((((format) >> 24) & 0x0F) == SDL_PIXELTYPE_INDEX4) || ((((format) >> 24) & 0x0F) == SDL_PIXELTYPE_INDEX8)))) {
        if (!SDL_CreateSurfacePalette(textbuf)) {
            SDL_DestroySurface(textbuf);
            return ((void *)0);
        }
    }

    if (bytes_per_pixel == 4) {
        SDL_memset4(pixels, bgcolor, size / 4);
    } else {
        memset(pixels, (bgcolor & 0xff), size);
    }

    return textbuf;
}

static SDL_Surface *Create_Surface_Solid(int width, int height, SDL_Color fg, Uint32 *color)
{
    SDL_Surface *textbuf = AllocateAlignedPixels(width, height, SDL_PIXELFORMAT_INDEX8, 0);
    if (textbuf == ((void *)0)) {
        return ((void *)0);
    }

    *color = 1;

    {
        SDL_Palette *palette = SDL_GetSurfacePalette(textbuf);
        palette->colors[0].r = 255 - fg.r;
        palette->colors[0].g = 255 - fg.g;
        palette->colors[0].b = 255 - fg.b;
        palette->colors[1].r = fg.r;
        palette->colors[1].g = fg.g;
        palette->colors[1].b = fg.b;
        palette->colors[1].a = fg.a;
    }

    SDL_SetSurfaceColorKey(textbuf, 1, 0);

    return textbuf;
}

static SDL_Surface *Create_Surface_Shaded(int width, int height, SDL_Color fg, SDL_Color bg, Uint32 *color)
{
    SDL_Surface *textbuf = AllocateAlignedPixels(width, height, SDL_PIXELFORMAT_INDEX8, 0);
    Uint8 bg_alpha = bg.a;
    if (textbuf == ((void *)0)) {
        return ((void *)0);
    }

    *color = 256 - 1;

    if (fg.a != 255 || bg.a != 255) {
        SDL_SetSurfaceBlendMode(textbuf, 0x00000001u);

        if (bg.a == 255) {
            bg.a = 0;
        }
    }

    {
        SDL_Palette *palette = SDL_GetSurfacePalette(textbuf);
        int rdiff = fg.r - bg.r;
        int gdiff = fg.g - bg.g;
        int bdiff = fg.b - bg.b;
        int adiff = fg.a - bg.a;
        int sign_r = (rdiff >= 0) ? 1 : 255;
        int sign_g = (gdiff >= 0) ? 1 : 255;
        int sign_b = (bdiff >= 0) ? 1 : 255;
        int sign_a = (adiff >= 0) ? 1 : 255;
        int i;

        for (i = 0; i < 256; ++i) {

            int tmp_r = i * rdiff;
            int tmp_g = i * gdiff;
            int tmp_b = i * bdiff;
            int tmp_a = i * adiff;
            palette->colors[i].r = (Uint8)(bg.r + (((tmp_r) + (sign_r) + ((tmp_r) >> 8)) >> 8));
            palette->colors[i].g = (Uint8)(bg.g + (((tmp_g) + (sign_g) + ((tmp_g) >> 8)) >> 8));
            palette->colors[i].b = (Uint8)(bg.b + (((tmp_b) + (sign_b) + ((tmp_b) >> 8)) >> 8));
            palette->colors[i].a = (Uint8)(bg.a + (((tmp_a) + (sign_a) + ((tmp_a) >> 8)) >> 8));
        }

        palette->colors[0].a = bg_alpha;
    }

    return textbuf;
}

static SDL_Surface *Create_Surface_Blended(int width, int height, SDL_Color fg, Uint32 *color)
{
    SDL_Surface *textbuf = ((void *)0);
    Uint32 bgcolor;

    bgcolor = (fg.r << 16) | (fg.g << 8) | fg.b;

    *color = bgcolor | ((Uint32)fg.a << 24);

    if (width != 0) {
        textbuf = AllocateAlignedPixels(width, height, SDL_PIXELFORMAT_ARGB8888, bgcolor);
        if (textbuf == ((void *)0)) {
            return ((void *)0);
        }
    }

    return textbuf;
}

static SDL_Surface *Create_Surface_LCD(int width, int height, SDL_Color fg, SDL_Color bg, Uint32 *color)
{
    SDL_Surface *textbuf = ((void *)0);
    Uint32 bgcolor;

    bgcolor = (((Uint32)bg.a) << 24) | (bg.r << 16) | (bg.g << 8) | bg.b;

    *color = (((Uint32)bg.a) << 24) | (fg.r << 16) | (fg.g << 8) | fg.b;

    if (width != 0) {
        textbuf = AllocateAlignedPixels(width, height, SDL_PIXELFORMAT_ARGB8888, bgcolor);
        if (textbuf == ((void *)0)) {
            return ((void *)0);
        }
    }

    return textbuf;
}

int TTF_Version(void)
{
    return ((3) * 1000000 + (3) * 1000 + (0));
}

_Bool TTF_Init(void)
{
    _Bool result = 1;

    SDL_AddAtomicInt(&TTF_state.refcount, 1);

    if (!SDL_ShouldInit(&TTF_state.init)) {
        return 1;
    }

    FT_Error error = FT_Init_FreeType(&TTF_state.library);
    if (error) {
        SDL_SetError("Couldn't init FreeType engine");
        result = 0;
    }

    if (result) {

        TTF_state.lock = SDL_CreateMutex();
    } else {
        (void)(SDL_AddAtomicInt(&TTF_state.refcount, -1) == 1);
    }
    SDL_SetInitialized(&TTF_state.init, result);

    return result;
}

void TTF_GetFreeTypeVersion(int *major, int *minor, int *patch)
{
    FT_Int ft_major = 0;
    FT_Int ft_minor = 0;
    FT_Int ft_patch = 0;

    if (SDL_ShouldInit(&TTF_state.init)) {
        SDL_SetInitialized(&TTF_state.init, 0);
    } else {
        SDL_LockMutex(TTF_state.lock);
        FT_Library_Version(TTF_state.library, &ft_major, &ft_minor, &ft_patch);
        SDL_UnlockMutex(TTF_state.lock);
    }

    if (major) {
        *major = (int)ft_major;
    }
    if (minor) {
        *minor = (int)ft_minor;
    }
    if (patch) {
        *patch = (int)ft_patch;
    }
}

void TTF_GetHarfBuzzVersion(int *major, int *minor, int *patch)
{
    unsigned int hb_major = 0;
    unsigned int hb_minor = 0;
    unsigned int hb_micro = 0;

    if (major) {
        *major = (int)hb_major;
    }
    if (minor) {
        *minor = (int)hb_minor;
    }
    if (patch) {
        *patch = (int)hb_micro;
    }
}

static unsigned long IOread(
    FT_Stream stream,
    unsigned long offset,
    unsigned char *buffer,
    unsigned long count)
{
    TTF_Font *font = (TTF_Font *)stream->descriptor.pointer;
    SDL_SeekIO(font->src, font->src_offset + offset, SDL_IO_SEEK_SET);
    return (unsigned long)SDL_ReadIO(font->src, buffer, count);
}

static void TTF_CloseFontSource(SDL_IOStream *src)
{
    SDL_PropertiesID src_props = SDL_GetIOProperties(src);
    int refcount = (int)SDL_GetNumberProperty(src_props, "SDL_ttf.font.src.refcount", 0);
    if (refcount > 0) {
        --refcount;
        SDL_SetNumberProperty(src_props, "SDL_ttf.font.src.refcount", refcount);
        return;
    }
    SDL_CloseIO(src);
}

TTF_Font *TTF_OpenFontWithProperties(SDL_PropertiesID props)
{
    TTF_Font *existing_font = SDL_GetPointerProperty(props, "SDL_ttf.font.create.existing_font", ((void *)0));
    const char *file = SDL_GetStringProperty(props, "SDL_ttf.font.create.filename", ((void *)0));
    SDL_IOStream *src = SDL_GetPointerProperty(props, "SDL_ttf.font.create.iostream", ((void *)0));
    Sint64 src_offset = SDL_GetNumberProperty(props, "SDL_ttf.font.create.iostream.offset", 0);
    _Bool closeio = SDL_GetBooleanProperty(props, "SDL_ttf.font.create.iostream.autoclose", 0);
    float ptsize = SDL_GetFloatProperty(props, "SDL_ttf.font.create.size", 0);
    long face_index = (long)SDL_GetNumberProperty(props, "SDL_ttf.font.create.face", -1);
    unsigned int hdpi = (unsigned int)SDL_GetNumberProperty(props, "SDL_ttf.font.create.hdpi", 0);
    unsigned int vdpi = (unsigned int)SDL_GetNumberProperty(props, "SDL_ttf.font.create.vdpi", 0);
    TTF_Font *font;
    FT_Error error;
    FT_Face face;
    FT_Stream stream;
    FT_CharMap found;
    Sint64 position;
    int i;

    if (SDL_ShouldInit(&TTF_state.init)) {
        SDL_SetInitialized(&TTF_state.init, 0);
        SDL_SetError("Library not initialized");
        if (src && closeio) {
            SDL_CloseIO(src);
        }
        return ((void *)0);
    }

    if (existing_font) {
        if (!src) {
            src = existing_font->src;
            src_offset = existing_font->src_offset;
            closeio = existing_font->closeio;

            if (closeio) {
                SDL_PropertiesID src_props = SDL_GetIOProperties(src);
                int refcount = (int)SDL_GetNumberProperty(src_props, "SDL_ttf.font.src.refcount", 0);
                ++refcount;
                SDL_SetNumberProperty(src_props, "SDL_ttf.font.src.refcount", refcount);
            }
        }
    } else {
        if (!src) {
            if (!file) {
                SDL_SetError("You must set either TTF_PROP_FONT_CREATE_FILENAME_STRING or TTF_PROP_FONT_CREATE_IOSTREAM_POINTER");
                return ((void *)0);
            }

            src = SDL_IOFromFile(file, "rb");
            if (!src) {
                return ((void *)0);
            }
            closeio = 1;
        }
    }

    position = SDL_TellIO(src);
    if (position < 0) {
        SDL_SetError("Can't seek in stream");
        if (closeio) {
            TTF_CloseFontSource(src);
        }
        return ((void *)0);
    }

    font = (TTF_Font *)SDL_calloc(1, sizeof(*font));
    if (font == ((void *)0)) {
        SDL_SetError("Out of memory");
        if (closeio) {
            TTF_CloseFontSource(src);
        }
        return ((void *)0);
    }

    font->src = src;
    font->src_offset = src_offset;
    font->closeio = closeio;
    font->generation = TTF_GetNextFontGeneration();

    if (existing_font) {
        if (existing_font->name) {
            font->name = SDL_strdup(existing_font->name);
        }
        if (face_index == -1) {
            face_index = existing_font->face_index;
        }
        if (ptsize == 0.0f) {
            ptsize = existing_font->ptsize;
        }
        if (hdpi == 0) {
            hdpi = existing_font->hdpi;
        }
        if (vdpi == 0) {
            vdpi = existing_font->vdpi;
        }
    } else {
        if (file) {
            const char *name = SDL_strrchr(file, '/');
            if (name) {
                name += 1;
            } else {
                name = SDL_strrchr(file, '\\');
                if (name) {
                    name += 1;
                } else {
                    name = file;
                }
            }
            font->name = SDL_strdup(name);
        }
    }
    if (face_index < 0) {
        face_index = 0;
    }
    if (hdpi == 0) {
        hdpi = 72;
    }
    if (vdpi == 0) {
        vdpi = 72;
    }

    font->text = TTF_CreateHashTable(0, 0, TTF_HashPointer, TTF_KeyMatchPointer, ((void *)0), ((void *)0));
    if (!font->text) {
        TTF_CloseFont(font);
        return ((void *)0);
    }

    font->glyphs = TTF_CreateHashTable(128, 0, TTF_HashID, TTF_KeyMatchID, TTF_DestroyHashValue, ((void *)0));
    if (!font->glyphs) {
        TTF_CloseFont(font);
        return ((void *)0);
    }

    font->glyph_indices = TTF_CreateHashTable(128, 0, TTF_HashID, TTF_KeyMatchID, ((void *)0), ((void *)0));
    if (!font->glyph_indices) {
        TTF_CloseFont(font);
        return ((void *)0);
    }

    stream = (FT_Stream)SDL_malloc(sizeof(*stream));
    if (stream == ((void *)0)) {
        SDL_SetError("Out of memory");
        TTF_CloseFont(font);
        return ((void *)0);
    }
    memset(stream, 0, sizeof(*stream));

    stream->read = IOread;
    stream->descriptor.pointer = font;
    stream->pos = 0;
    stream->size = (unsigned long)(SDL_GetIOSize(src) - src_offset);

    font->args.flags = 0x2;
    font->args.stream = stream;

    SDL_LockMutex(TTF_state.lock);
    error = FT_Open_Face(TTF_state.library, &font->args, face_index, &face);
    SDL_UnlockMutex(TTF_state.lock);
    if (error || face == ((void *)0)) {
        SDL_SetError("Couldn't load font file");
        TTF_CloseFont(font);
        return ((void *)0);
    }
    font->face = face;
    font->face_index = face_index;

    found = 0;

    if (!found) {
        for (i = 0; i < face->num_charmaps; i++) {
            FT_CharMap charmap = face->charmaps[i];
            if (charmap->platform_id == 3 && charmap->encoding_id == 10) {
                found = charmap;
                break;
            }
        }
    }
    if (!found) {
        for (i = 0; i < face->num_charmaps; i++) {
            FT_CharMap charmap = face->charmaps[i];
            if ((charmap->platform_id == 3 && charmap->encoding_id == 1) || (charmap->platform_id == 3 && charmap->encoding_id == 0) || (charmap->platform_id == 2 && charmap->encoding_id == 1) || (charmap->platform_id == 0)) {
                found = charmap;
                break;
            }
        }
    }
    if (found) {

        FT_Set_Charmap(face, found);
    }

    if (existing_font) {
        font->style = existing_font->style;
        font->weight = existing_font->weight;
        font->outline = existing_font->outline;
        font->ft_load_target = existing_font->ft_load_target;
        font->enable_kerning = existing_font->enable_kerning;
    } else {
        font->style = 0x00;
        font->outline = 0;
        font->ft_load_target = ((FT_Int32)((FT_RENDER_MODE_NORMAL) & 15) << 16);
        TTF_SetFontKerning(font, 1);

        const TT_OS2 *os2_table = (const TT_OS2 *)FT_Get_Sfnt_Table(face, FT_SFNT_OS2);
        if (os2_table != ((void *)0) && os2_table->usWeightClass != 0) {
            font->weight = os2_table->usWeightClass;
        } else if (face->style_flags & (1 << 1)) {
            font->weight = 700;
        } else {
            font->weight = 400;
        }
    }

    if (!TTF_SetFontSizeDPI(font, ptsize, hdpi, vdpi)) {
        SDL_SetError("Couldn't set font size");
        TTF_CloseFont(font);
        return ((void *)0);
    }

    return font;
}

TTF_Font *TTF_OpenFont(const char *file, float ptsize)
{
    TTF_Font *font = ((void *)0);
    SDL_PropertiesID props = SDL_CreateProperties();
    if (props) {
        SDL_SetStringProperty(props, "SDL_ttf.font.create.filename", file);
        SDL_SetFloatProperty(props, "SDL_ttf.font.create.size", ptsize);
        font = TTF_OpenFontWithProperties(props);
        SDL_DestroyProperties(props);
    }
    return font;
}

TTF_Font *TTF_OpenFontIO(SDL_IOStream *src, _Bool closeio, float ptsize)
{
    TTF_Font *font = ((void *)0);
    SDL_PropertiesID props = SDL_CreateProperties();
    if (props) {
        SDL_SetPointerProperty(props, "SDL_ttf.font.create.iostream", src);
        SDL_SetBooleanProperty(props, "SDL_ttf.font.create.iostream.autoclose", closeio);
        SDL_SetFloatProperty(props, "SDL_ttf.font.create.size", ptsize);
        font = TTF_OpenFontWithProperties(props);
        SDL_DestroyProperties(props);
    }
    return font;
}

TTF_Font *TTF_CopyFont(TTF_Font *existing_font)
{
    TTF_Font *font = ((void *)0);
    SDL_PropertiesID props = SDL_CreateProperties();
    if (props) {
        SDL_SetPointerProperty(props, "SDL_ttf.font.create.existing_font", existing_font);
        font = TTF_OpenFontWithProperties(props);
        SDL_DestroyProperties(props);
    }
    return font;
}

static _Bool AddFontTextReference(TTF_Font *font, TTF_Text *text)
{
    return TTF_InsertIntoHashTable(font->text, text, ((void *)0), 1);
}

static _Bool RemoveFontTextReference(TTF_Font *font, TTF_Text *text)
{
    return TTF_RemoveFromHashTable(font->text, text);
}

static _Bool UpdateFontTextCallback(void *userdata, const SDL_HashTable *table, const void *key, const void *value)
{
    TTF_Text *text = (TTF_Text *)key;
    (void)userdata;
    (void)table;
    (void)value;
    text->internal->needs_layout_update = 1;
    return 1;
}

static void UpdateFontText(TTF_Font *font, TTF_Font *initial_font)
{
    if (!initial_font) {
        initial_font = font;
    } else if (font == initial_font) {

        return;
    }

    if (font->text) {
        TTF_IterateHashTable(font->text, UpdateFontTextCallback, ((void *)0));
    }

    for (TTF_FontList *list = font->fallback_for; list; list = list->next) {
        UpdateFontText(list->font, initial_font);
    }
}

SDL_PropertiesID TTF_GetFontProperties(TTF_Font *font)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    if (!font->props) {
        font->props = SDL_CreateProperties();
    }
    return font->props;
}

Uint32 TTF_GetFontGeneration(TTF_Font *font)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    return font->generation;
}

_Bool TTF_AddFallbackFont(TTF_Font *font, TTF_Font *fallback)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };
    if (!(fallback)) {
        SDL_SetError("Parameter '%s' is invalid", ("fallback"));
        return 0;
    };

    TTF_FontList *fallback_entry = (TTF_FontList *)SDL_calloc(1, sizeof(*fallback_entry));
    TTF_FontList *fallback_for_entry = (TTF_FontList *)SDL_calloc(1, sizeof(*fallback_entry));
    if (!fallback_entry || !fallback_for_entry) {
        SDL_free(fallback_entry);
        SDL_free(fallback_for_entry);
        return 0;
    }

    TTF_FontList *prev = ((void *)0);
    for (TTF_FontList *list = font->fallbacks; list; prev = list, list = list->next) {
        continue;
    }
    fallback_entry->font = fallback;
    if (prev) {
        prev->next = fallback_entry;
    } else {
        font->fallbacks = fallback_entry;
    }

    prev = ((void *)0);
    for (TTF_FontList *list = fallback->fallback_for; list; prev = list, list = list->next) {
        continue;
    }
    fallback_for_entry->font = font;
    if (prev) {
        prev->next = fallback_for_entry;
    } else {
        fallback->fallback_for = fallback_for_entry;
    }

    UpdateFontText(font, ((void *)0));
    return 1;
}

void TTF_RemoveFallbackFont(TTF_Font *font, TTF_Font *fallback)
{
    if (!font || !fallback) {
        return;
    }

    TTF_FontList *prev = ((void *)0);
    for (TTF_FontList *list = font->fallbacks; list; prev = list, list = list->next) {
        if (fallback == list->font) {
            if (prev) {
                prev->next = list->next;
            } else {
                font->fallbacks = list->next;
            }
            SDL_free(list);
            break;
        }
    }

    prev = ((void *)0);
    for (TTF_FontList *list = fallback->fallback_for; list; prev = list, list = list->next) {
        if (font == list->font) {
            if (prev) {
                prev->next = list->next;
            } else {
                fallback->fallback_for = list->next;
            }
            SDL_free(list);
            break;
        }
    }

    UpdateFontText(font, ((void *)0));
}

void TTF_ClearFallbackFonts(TTF_Font *font)
{
    if (!font) {
        return;
    }

    while (font->fallbacks) {
        TTF_RemoveFallbackFont(font, font->fallbacks->font);
    }
}

static void TTF_InitFontMetrics(TTF_Font *font)
{
    FT_Face face = font->face;
    int underline_offset;

    if ((!!((face)->face_flags & (1L << 0)))) {

        FT_Fixed scale = face->size->metrics.y_scale;
        font->ascent = (int)((((FT_MulFix(face->ascender, scale)) + 63) & -64) / 64);
        font->descent = (int)((((FT_MulFix(face->descender, scale)) + 63) & -64) / 64);
        font->height = (int)((((FT_MulFix(face->ascender - face->descender, scale)) + 63) & -64) / 64);
        font->lineskip = (int)((((FT_MulFix(face->height, scale)) + 63) & -64) / 64);
        underline_offset = (int)(((FT_MulFix(face->underline_position, scale)) & -64) / 64);
        font->line_thickness = (int)(((FT_MulFix(face->underline_thickness, scale)) & -64) / 64);
    } else {

        font->ascent = (int)((((face->size->metrics.ascender) + 63) & -64) / 64);
        font->descent = (int)((((face->size->metrics.descender) + 63) & -64) / 64);
        font->height = (int)((((face->size->metrics.height) + 63) & -64) / 64);
        font->lineskip = (int)((((face->size->metrics.height) + 63) & -64) / 64);

        underline_offset = font->descent / 2;
        font->line_thickness = 1;
    }

    if (font->line_thickness < 1) {
        font->line_thickness = 1;
    }

    font->underline_top_row = font->ascent - underline_offset - 1;
    font->strikethrough_top_row = font->height / 2;

    if (font->outline > 0) {
        int fo = font->outline;
        font->line_thickness += 2 * fo;
        font->underline_top_row -= fo;
        font->strikethrough_top_row -= fo;
    }

    font->underline_top_row = (((0) > (font->underline_top_row)) ? (0) : (font->underline_top_row));
    font->strikethrough_top_row = (((0) > (font->strikethrough_top_row)) ? (0) : (font->strikethrough_top_row));

    if (((font)->style & 0x04)) {
        int bottom_row = font->underline_top_row + font->line_thickness;
        font->height = (((font->height) > (bottom_row)) ? (font->height) : (bottom_row));
    }

    if (((font)->style & 0x08)) {
        int bottom_row = font->strikethrough_top_row + font->line_thickness;
        font->height = (((font->height) > (bottom_row)) ? (font->height) : (bottom_row));
    }

    font->glyph_overhang = face->size->metrics.y_ppem / 10;
}

static void Flush_Glyph_Image(TTF_Image *image)
{
    if (image->buffer) {
        SDL_free(image->buffer);
        image->buffer = ((void *)0);
    }
}

static void Flush_Glyph(c_glyph *glyph)
{
    glyph->stored = 0;
    Flush_Glyph_Image(&glyph->pixmap);
    Flush_Glyph_Image(&glyph->bitmap);
}

static _Bool FlushCacheCallback(void *userdata, const SDL_HashTable *table, const void *key, const void *value)
{
    c_glyph *glyph = (c_glyph *)value;
    (void)userdata;
    (void)table;
    (void)key;
    if (glyph->stored) {
        Flush_Glyph(glyph);
    }
    return 1;
}

static void Flush_Cache(TTF_Font *font)
{
    TTF_IterateHashTable(font->glyphs, FlushCacheCallback, ((void *)0));

    for (unsigned int i = 0; i < (sizeof(font->cached_positions) / sizeof(font->cached_positions[0])); ++i) {
        CachedGlyphPositions *cached = &font->cached_positions[i];
        if (cached->text) {
            SDL_free(cached->text);
            cached->text = ((void *)0);
            cached->length = 0;
        }
        if (cached->positions.pos) {
            SDL_free(cached->positions.pos);
            cached->positions.pos = ((void *)0);
            cached->positions.len = 0;
            cached->positions.maxlen = 0;
        }
    }
    font->positions = ((void *)0);

    font->generation = TTF_GetNextFontGeneration();
}

static _Bool Load_Glyph(TTF_Font *font, c_glyph *cached, int want, int translation)
{
    const int alignment = Get_Alignment() - 1;
    FT_GlyphSlot slot;
    FT_Error error;

    int ft_load = 0x0 | font->ft_load_target;

    if (want & 0x04) {
        ft_load |= (1L << 20);
    }

    if ((!!((font->face)->face_flags & (1L << 16)))) {

        ft_load |= (1L << 20);
    }

    error = FT_Load_Glyph(font->face, cached->index, ft_load);
    if (error) {
        return SDL_SetError("FT_Load_Glyph() failed");
    }

    slot = font->face->glyph;

    if (want & 0x08) {
        if (slot->format == FT_GLYPH_FORMAT_BITMAP) {
            return SDL_SetError("LCD mode not possible with bitmap font");
        }
    }

    if (cached->stored == 0) {
        cached->sz_left = slot->bitmap_left;
        cached->sz_top = slot->bitmap_top;
        cached->sz_rows = slot->bitmap.rows;
        cached->sz_width = slot->bitmap.width;

        if (cached->sz_left == 0 && cached->sz_top == 0 && cached->sz_rows == 0 && cached->sz_width == 0) {
            FT_Glyph_Metrics *metrics = &slot->metrics;
            if (metrics) {
                int minx = (int)(((metrics->horiBearingX) & -64) / 64);
                int maxx = (int)((((metrics->horiBearingX + metrics->width) + 63) & -64) / 64);
                int maxy = (int)(((metrics->horiBearingY) & -64) / 64);
                int miny = maxy - (int)((((metrics->height) + 63) & -64) / 64);

                cached->sz_left = minx;
                cached->sz_top = maxy;
                cached->sz_rows = maxy - miny;
                cached->sz_width = maxx - minx;
            }
        }

        cached->advance = (int)slot->metrics.horiAdvance;

        if (font->render_subpixel == 0) {

            cached->kerning_smart.rsb_delta = (int)slot->rsb_delta;
            cached->kerning_smart.lsb_delta = (int)slot->lsb_delta;
        } else {

            cached->subpixel.lsb_minus_rsb = (int)(slot->lsb_delta - slot->rsb_delta);
            cached->subpixel.translation = 0;
        }

        if (((font)->style & 0x01)) {
            cached->sz_width += font->glyph_overhang;
            cached->advance += ((font->glyph_overhang) << 6);
        }

        if (((font)->style & 0x02) && slot->format == FT_GLYPH_FORMAT_OUTLINE) {
            cached->sz_width += (0x0366AL * font->height) >> 16;
        }

        if (font->render_subpixel) {
            cached->sz_width += 1;
        }

        if (font->render_sdf) {
            cached->sz_width += 2 * 8;
            cached->sz_rows += 2 * 8;
        }

        cached->stored |= 0x20;
    }

    if (((want & 0x01) && !(cached->stored & 0x01)) ||
        ((want & 0x02) && !(cached->stored & 0x02)) ||
        ((want & 0x04) && !(cached->stored & 0x04)) ||
        ((want & 0x08) && !(cached->stored & 0x08)) ||
        (want & 0x10)) {
        const int mono = (want & 0x01);
        TTF_Image *dst = (mono ? &cached->bitmap : &cached->pixmap);
        FT_Glyph glyph = ((void *)0);
        FT_Bitmap *src;
        FT_Render_Mode ft_render_mode;

        if (mono && slot->format != FT_GLYPH_FORMAT_SVG) {
            ft_render_mode = FT_RENDER_MODE_MONO;
        } else {
            ft_render_mode = FT_RENDER_MODE_NORMAL;

            if ((want & 0x04) && font->render_sdf) {
                ft_render_mode = FT_RENDER_MODE_SDF;
            }

            if ((want & 0x08)) {
                ft_render_mode = FT_RENDER_MODE_LCD;
            }
        }

        if (want & 0x10) {
            Flush_Glyph_Image(&cached->pixmap);
            FT_Outline_Translate(&slot->outline, translation, 0);
            cached->subpixel.translation = translation;
        }

        if (((font)->style & 0x02) && slot->format == FT_GLYPH_FORMAT_OUTLINE) {
            FT_Matrix shear;
            shear.xx = 1 << 16;
            shear.xy = 0x0366AL;
            shear.yx = 0;
            shear.yy = 1 << 16;
            FT_Outline_Transform(&slot->outline, &shear);
        }

        if ((font->outline > 0 && slot->format == FT_GLYPH_FORMAT_OUTLINE) ||
            slot->format == FT_GLYPH_FORMAT_BITMAP) {

            FT_BitmapGlyph bitmap_glyph;

            error = FT_Get_Glyph(slot, &glyph);
            if (error) {
                return SDL_SetError("FT_Get_Glyph() failed");
            }

            if (font->outline > 0) {
                FT_Glyph_Stroke(&glyph, font->stroker, 1);
            }

            error = FT_Glyph_To_Bitmap(&glyph, ft_render_mode, 0, 1);
            if (error) {
                FT_Done_Glyph(glyph);
                return SDL_SetError("FT_Glyph_To_Bitmap() failed");
            }

            bitmap_glyph = (FT_BitmapGlyph)glyph;
            src = &bitmap_glyph->bitmap;

            dst->left = bitmap_glyph->left;
            dst->top = bitmap_glyph->top;
        } else {

            error = FT_Render_Glyph(slot, ft_render_mode);
            if (error) {
            }

            src = &slot->bitmap;

            dst->left = slot->bitmap_left;
            dst->top = slot->bitmap_top;
        }

        dst->width = src->width;
        dst->rows = src->rows;
        dst->buffer = ((void *)0);

        if (dst->width == 0) {
            dst->rows = 0;
        }

        if (!src->buffer) {
            dst->width = 0;
            dst->rows = 0;
        }

        if (((font)->style & 0x01)) {
            dst->width += font->glyph_overhang;
        }

        dst->pitch = dst->width + alignment;

        if (src->pixel_mode == FT_PIXEL_MODE_BGRA && (want & 0x04)) {
            dst->pitch += 3 * dst->width;
        }

        if (src->pixel_mode == FT_PIXEL_MODE_LCD) {
            dst->pitch += 3 * dst->width;
        }

        if (dst->rows != 0) {
            unsigned int i;

            dst->buffer = (unsigned char *)SDL_malloc(alignment + dst->pitch * dst->rows);
            if (!dst->buffer) {
                return 0;
            }

            memset(dst->buffer, 0, alignment + dst->pitch * dst->rows);

            dst->buffer += alignment;

            for (i = 0; i < (unsigned int)src->rows; i++) {
                unsigned char *srcp = src->buffer + i * src->pitch;
                unsigned char *dstp = dst->buffer + i * dst->pitch;
                unsigned int k, quotient, remainder;

                if (src->pixel_mode == FT_PIXEL_MODE_MONO) {
                    quotient = src->width / 8;
                    remainder = src->width & 0x7;
                } else if (src->pixel_mode == FT_PIXEL_MODE_GRAY2) {
                    quotient = src->width / 4;
                    remainder = src->width & 0x3;
                } else if (src->pixel_mode == FT_PIXEL_MODE_GRAY4) {
                    quotient = src->width / 2;
                    remainder = src->width & 0x1;

                } else if (src->pixel_mode == FT_PIXEL_MODE_BGRA) {
                    quotient = src->width;
                    remainder = 0;

                } else if (src->pixel_mode == FT_PIXEL_MODE_LCD) {
                    quotient = src->width / 3;
                    remainder = 0;
                } else {
                    quotient = src->width;
                    remainder = 0;
                }

                if (mono) {
                    if (src->pixel_mode == FT_PIXEL_MODE_MONO) {
                        while (quotient--) {
                            if ((8)) {
                                unsigned char c = *srcp++;
                                for (k = 0; k < (8); ++k) {
                                    *dstp++ = (c & 0x80) >> 7;
                                    c <<= 1;
                                }
                            };
                        }
                        if ((remainder)) {
                            unsigned char c = *srcp++;
                            for (k = 0; k < (remainder); ++k) {
                                *dstp++ = (c & 0x80) >> 7;
                                c <<= 1;
                            }
                        };
                    } else if (src->pixel_mode == FT_PIXEL_MODE_GRAY2) {
                        while (quotient--) {
                            if ((4)) {
                                unsigned char c = *srcp++;
                                for (k = 0; k < (4); ++k) {
                                    *dstp++ = (((c & 0xA0) >> 6) >= 0x2) ? 1 : 0;
                                    c <<= 2;
                                }
                            };
                        }
                        if ((remainder)) {
                            unsigned char c = *srcp++;
                            for (k = 0; k < (remainder); ++k) {
                                *dstp++ = (((c & 0xA0) >> 6) >= 0x2) ? 1 : 0;
                                c <<= 2;
                            }
                        };
                    } else if (src->pixel_mode == FT_PIXEL_MODE_GRAY4) {
                        while (quotient--) {
                            if ((2)) {
                                unsigned char c = *srcp++;
                                for (k = 0; k < (2); ++k) {
                                    *dstp++ = (((c & 0xF0) >> 4) >= 0x8) ? 1 : 0;
                                    c <<= 4;
                                }
                            };
                        }
                        if ((remainder)) {
                            unsigned char c = *srcp++;
                            for (k = 0; k < (remainder); ++k) {
                                *dstp++ = (((c & 0xF0) >> 4) >= 0x8) ? 1 : 0;
                                c <<= 4;
                            }
                        };
                    } else if (src->pixel_mode == FT_PIXEL_MODE_BGRA) {
                        while (quotient--) {
                            Uint8 r, g, b, a;
                            b = *srcp++;
                            g = *srcp++;
                            r = *srcp++;
                            a = *srcp++;
                            unsigned char c = 0;
                            if (a != 0) {

                                c = 255 - (unsigned char)(((int)r * 54) / 255 +
                                                          ((int)g * 182) / 255 +
                                                          ((int)b * 18) / 255);
                            }
                            *dstp++ = (c >= 0x80) ? 1 : 0;
                        }
                    } else {
                        while (quotient--) {
                            unsigned char c = *srcp++;
                            *dstp++ = (c >= 0x80) ? 1 : 0;
                        }
                    }
                } else if (src->pixel_mode == FT_PIXEL_MODE_MONO) {

                    while (quotient--) {
                        if ((8)) {
                            unsigned char c = *srcp++;
                            for (k = 0; k < (8); ++k) {
                                if ((c & 0x80) >> 7) {
                                    *dstp++ = 256 - 1;
                                } else {
                                    *dstp++ = 0x00;
                                }
                                c <<= 1;
                            }
                        };
                    }
                    if ((remainder)) {
                        unsigned char c = *srcp++;
                        for (k = 0; k < (remainder); ++k) {
                            if ((c & 0x80) >> 7) {
                                *dstp++ = 256 - 1;
                            } else {
                                *dstp++ = 0x00;
                            }
                            c <<= 1;
                        }
                    };
                } else if (src->pixel_mode == FT_PIXEL_MODE_GRAY2) {
                    while (quotient--) {
                        if ((4)) {
                            unsigned char c = *srcp++;
                            for (k = 0; k < (4); ++k) {
                                if ((c & 0xA0) >> 6) {
                                    *dstp++ = 256 * ((c & 0xA0) >> 6) / 3 - 1;
                                } else {
                                    *dstp++ = 0x00;
                                }
                                c <<= 2;
                            }
                        };
                    }
                    if ((remainder)) {
                        unsigned char c = *srcp++;
                        for (k = 0; k < (remainder); ++k) {
                            if ((c & 0xA0) >> 6) {
                                *dstp++ = 256 * ((c & 0xA0) >> 6) / 3 - 1;
                            } else {
                                *dstp++ = 0x00;
                            }
                            c <<= 2;
                        }
                    };
                } else if (src->pixel_mode == FT_PIXEL_MODE_GRAY4) {
                    while (quotient--) {
                        if ((2)) {
                            unsigned char c = *srcp++;
                            for (k = 0; k < (2); ++k) {
                                if ((c & 0xF0) >> 4) {
                                    *dstp++ = 256 * ((c & 0xF0) >> 4) / 15 - 1;
                                } else {
                                    *dstp++ = 0x00;
                                }
                                c <<= 4;
                            }
                        };
                    }
                    if ((remainder)) {
                        unsigned char c = *srcp++;
                        for (k = 0; k < (remainder); ++k) {
                            if ((c & 0xF0) >> 4) {
                                *dstp++ = 256 * ((c & 0xF0) >> 4) / 15 - 1;
                            } else {
                                *dstp++ = 0x00;
                            }
                            c <<= 4;
                        }
                    };

                } else if (src->pixel_mode == FT_PIXEL_MODE_BGRA) {
                    if (want & 0x04) {
                        memcpy(dstp, srcp, 4 * src->width);
                    } else {

                        while (quotient--) {
                            Uint8 r, g, b, a;
                            b = *srcp++;
                            g = *srcp++;
                            r = *srcp++;
                            a = *srcp++;
                            if (a != 0) {

                                *dstp++ = 255 - (Uint8)(((int)r * 54) / 255 +
                                                        ((int)g * 182) / 255 +
                                                        ((int)b * 18) / 255);
                            } else {
                                *dstp++ = 0;
                            }
                        }
                    }

                } else if (src->pixel_mode == FT_PIXEL_MODE_LCD) {
                    while (quotient--) {
                        Uint8 alpha = 0;
                        Uint8 r, g, b;
                        r = *srcp++;
                        g = *srcp++;
                        b = *srcp++;
                        *dstp++ = b;
                        *dstp++ = g;
                        *dstp++ = r;
                        *dstp++ = alpha;
                    }

                } else {
                    memcpy(dstp, srcp, src->width);
                }
            }
        }

        if (((font)->style & 0x01)) {
            int row;

            for (row = dst->rows - 1; row >= 0; --row) {
                Uint8 *pixmap = dst->buffer + row * dst->pitch;
                int col, offset;

                for (offset = 1; offset <= font->glyph_overhang; ++offset) {
                    for (col = dst->width - 1; col > 0; --col) {
                        if (mono) {
                            pixmap[col] |= pixmap[col - 1];
                        } else {
                            int pixel = (pixmap[col] + pixmap[col - 1]);
                            if (pixel > 256 - 1) {
                                pixel = 256 - 1;
                            }
                            pixmap[col] = (Uint8)pixel;
                        }
                    }
                }
            }
        }

        if (dst->buffer) {
            dst->buffer -= alignment;
        }

        if (src->pixel_mode == FT_PIXEL_MODE_BGRA && (want & 0x04)) {
            dst->is_color = 1;
        } else {
            dst->is_color = 0;
        }

        if (mono) {
            cached->stored |= 0x01;
        } else if (src->pixel_mode == FT_PIXEL_MODE_LCD) {
            cached->stored |= 0x08;
        } else {

            if (want & 0x04) {
                cached->stored |= 0x04;

                if (dst->is_color == 0) {
                    cached->stored |= 0x02;
                }
            } else {
                cached->stored |= 0x02;

                if (!(!!((font->face)->face_flags & (1L << 14)))) {
                    cached->stored |= 0x04;
                }
            }
        }

        if (glyph) {
            FT_Done_Glyph(glyph);
        }
    }

    return 1;
}

static _Bool Find_GlyphByIndex(TTF_Font *font, FT_UInt idx,
                               int want_bitmap, int want_pixmap, int want_color, int want_lcd, int want_subpixel,
                               int translation, c_glyph **out_glyph, TTF_Image **out_image)
{
    c_glyph *glyph = ((void *)0);
    if (!TTF_FindInHashTable(font->glyphs, (const void *)(uintptr_t)idx, (const void **)&glyph)) {
        glyph = (c_glyph *)SDL_calloc(1, sizeof(*glyph));
        if (!glyph) {
            return 0;
        }
        glyph->index = idx;

        if (!TTF_InsertIntoHashTable(font->glyphs, (const void *)(uintptr_t)idx, (const void *)glyph, 1)) {
            SDL_free(glyph);
            return 0;
        }
    }

    if (out_glyph) {
        *out_glyph = glyph;
    }

    if (want_pixmap || want_color || want_lcd) {
        *out_image = &glyph->pixmap;
    }

    if (want_bitmap) {
        *out_image = &glyph->bitmap;
    }

    if (want_subpixel) {

        int want = 0x20 | want_bitmap | want_pixmap | want_color | want_lcd | want_subpixel;

        if (glyph->subpixel.translation == translation) {
            want &= ~0x10;
        }

        if ((glyph->stored & want) == want) {
            return 1;
        }

        if (want_color || want_pixmap || want_lcd) {
            if (glyph->stored & (0x04 | 0x02 | 0x08)) {
                Flush_Glyph(glyph);
            }
        }

        return Load_Glyph(font, glyph, want, translation);
    } else {
        const int want = 0x20 | want_bitmap | want_pixmap | want_color | want_lcd;

        if (want_pixmap) {
            if (glyph->stored & 0x02) {
                return 1;
            }
        } else if (want_bitmap) {
            if (glyph->stored & 0x01) {
                return 1;
            }
        } else if (want_color) {
            if (glyph->stored & 0x04) {
                return 1;
            }
        } else if (want_lcd) {
            if (glyph->stored & 0x08) {
                return 1;
            }
        } else {

            if (glyph->stored) {
                return 1;
            }
        }

        if (want_color || want_pixmap || want_lcd) {
            if (glyph->stored & (0x04 | 0x02 | 0x08)) {
                Flush_Glyph(glyph);
            }
        }

        return Load_Glyph(font, glyph, want, 0);
    }
}

static FT_UInt get_char_index(TTF_Font *font, Uint32 ch)
{
    FT_UInt idx = 0;
    const void *value;
    if (!TTF_FindInHashTable(font->glyph_indices, (const void *)(uintptr_t)ch, &value)) {
        idx = FT_Get_Char_Index(font->face, ch);
        TTF_InsertIntoHashTable(font->glyph_indices, (const void *)(uintptr_t)ch, (const void *)(uintptr_t)idx, 1);
    } else {
        idx = (FT_UInt)(uintptr_t)value;
    }
    return idx;
}

static FT_UInt get_char_index_fallback(TTF_Font *font, Uint32 ch, TTF_Font *initial_font, TTF_Font **glyph_font)
{
    if (!initial_font) {
        initial_font = font;
    } else if (font == initial_font) {

        return 0;
    }

    FT_UInt idx = get_char_index(font, ch);
    if (idx > 0) {
        if (glyph_font) {
            *glyph_font = font;
        }
    } else {
        for (TTF_FontList *list = font->fallbacks; list; list = list->next) {
            idx = get_char_index_fallback(list->font, ch, initial_font, glyph_font);
            if (idx > 0) {
                break;
            }
        }
    }
    return idx;
}

static _Bool Find_GlyphMetrics(TTF_Font *font, Uint32 ch, c_glyph **out_glyph, _Bool allow_fallback)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    TTF_Font *glyph_font = font;
    FT_UInt idx;
    if (allow_fallback) {
        idx = get_char_index_fallback(font, ch, ((void *)0), &glyph_font);
    } else {
        idx = get_char_index(font, ch);
    }
    return Find_GlyphByIndex(glyph_font, idx, 0, 0, 0, 0, 0, 0, out_glyph, ((void *)0));
}

_Bool TTF_FontHasGlyph(TTF_Font *font, Uint32 ch)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    return (get_char_index_fallback(font, ch, ((void *)0), ((void *)0)) > 0);
}

SDL_Surface *TTF_GetGlyphImage(TTF_Font *font, Uint32 ch, TTF_ImageType *image_type)
{
    FT_UInt idx;

    if (image_type) {
        *image_type = TTF_IMAGE_INVALID;
    }

    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return ((void *)0);
    };

    TTF_Font *glyph_font = ((void *)0);
    idx = get_char_index_fallback(font, ch, ((void *)0), &glyph_font);
    if (idx == 0) {
        SDL_SetError("Codepoint not in font");
        return ((void *)0);
    }

    return TTF_GetGlyphImageForIndex(glyph_font, idx, image_type);
}

SDL_Surface *TTF_GetGlyphImageForIndex(TTF_Font *font, Uint32 glyph_index, TTF_ImageType *image_type)
{
    const int alignment = Get_Alignment() - 1;
    TTF_Image *image;
    SDL_Surface *surface;
    const Uint8 *src;

    if (image_type) {
        *image_type = TTF_IMAGE_INVALID;
    }

    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return ((void *)0);
    };

    if (!Find_GlyphByIndex(font, glyph_index, 0, 0, 0x04, 0, 0, 0, ((void *)0), &image)) {
        return ((void *)0);
    }

    if (image->width == 0 || image->rows == 0) {
        return SDL_CreateSurface(1, 1, SDL_PIXELFORMAT_ARGB8888);
    }

    surface = SDL_CreateSurface(image->width, image->rows, SDL_PIXELFORMAT_ARGB8888);
    if (!surface) {
        return ((void *)0);
    }

    src = image->buffer + alignment;

    if (image->is_color) {
        if (image_type) {

            *image_type = (font->render_sdf ? TTF_IMAGE_SDF : TTF_IMAGE_COLOR);
        }

        if (surface->pitch == image->pitch) {
            memcpy(surface->pixels, src, image->rows * image->pitch);
        } else {
            int row;
            Uint8 *dst = (Uint8 *)surface->pixels;
            size_t length = image->width * 4;
            for (row = 0; row < image->rows; ++row) {
                memcpy(dst, src, length);
                src += image->pitch;
                dst += surface->pitch;
            }
        }
    } else {
        if (image_type) {
            *image_type = TTF_IMAGE_ALPHA;
        }

        int row, col;
        Uint32 *dst = (Uint32 *)surface->pixels;
        int skip = (surface->pitch - surface->w * 4) / 4;
        for (row = 0; row < image->rows; ++row) {
            for (col = 0; col < image->width; ++col) {
                Uint32 v = src[col];
                *dst++ = (0x00FFFFFF | v << 24);
            }
            src += image->pitch;
            dst += skip;
        }
    }
    return surface;
}

_Bool TTF_GetGlyphMetrics(TTF_Font *font, Uint32 ch, int *minx, int *maxx, int *miny, int *maxy, int *advance)
{
    c_glyph *glyph;

    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    if (!Find_GlyphMetrics(font, ch, &glyph, 1)) {
        return 0;
    }

    if (minx) {
        *minx = glyph->sz_left;
    }
    if (maxx) {
        *maxx = glyph->sz_left + glyph->sz_width;
        *maxx += 2 * font->outline;
    }
    if (miny) {
        *miny = glyph->sz_top - glyph->sz_rows;
    }
    if (maxy) {
        *maxy = glyph->sz_top;
        *maxy += 2 * font->outline;
    }
    if (advance) {
        *advance = (int)((((glyph->advance) + 63) & -64) / 64);
    }
    return 1;
}

_Bool TTF_GetGlyphKerning(TTF_Font *font, Uint32 previous_ch, Uint32 ch, int *kerning)
{
    FT_Error error;
    c_glyph *prev_glyph, *glyph;
    FT_Vector delta;

    if (kerning) {
        *kerning = 0;
    }

    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    if (ch == 0xFEFF || ch == 0xFFFE) {
        return 1;
    }

    if (previous_ch == 0xFEFF || previous_ch == 0xFFFE) {
        return 1;
    }

    if (Find_GlyphMetrics(font, ch, &glyph, 0) &&
        Find_GlyphMetrics(font, previous_ch, &prev_glyph, 0)) {
        error = FT_Get_Kerning(font->face, prev_glyph->index, glyph->index, FT_KERNING_DEFAULT, &delta);
        if (error) {
            return SDL_SetError("Couldn't get glyph kerning");
        }

        if (kerning) {
            *kerning = (int)(delta.x >> 6);
        }
    }
    return 1;
}

static _Bool CollectGlyphsFromFont(TTF_Font *font, const char *text, size_t length, TTF_Direction direction, Uint32 script, GlyphPositions *positions)
{

    (void)direction;
    (void)script;
    _Bool skip_first = 1;
    FT_UInt prev_index = 0;
    FT_Pos prev_delta = 0;

    positions->len = 0;

    const char *start = text;
    int offset = 0;
    while (length > 0) {
        offset = (int)(text - start);
        Uint32 c = SDL_StepUTF8(&text, &length);
        if (c == 0xFEFF || c == 0xFFFE) {
            continue;
        }

        if (c == 0 && length > 0) {
            --length;
        }

        FT_UInt idx = get_char_index(font, c);
        c_glyph *glyph = ((void *)0);
        if (!Find_GlyphByIndex(font, idx, 0, 0, 0, 0, 0, 0, &glyph, ((void *)0))) {
            return SDL_SetError("Couldn't find glyph %u in font", idx);
        }

        if (positions->len >= positions->maxlen) {
            GlyphPosition *saved = positions->pos;
            int maxlen = (positions->maxlen ? positions->maxlen * 2 : 16);
            positions->pos = (GlyphPosition *)SDL_realloc(positions->pos, maxlen * sizeof(*positions->pos));
            if (positions->pos) {
                positions->maxlen = maxlen;
            } else {
                positions->pos = saved;
                return 0;
            }
        }

        GlyphPosition *pos = &positions->pos[positions->len++];
        pos->font = font;
        pos->index = idx;
        pos->glyph = glyph;
        pos->offset = offset;
        pos->x_advance = glyph->advance;
        pos->y_advance = 0;
        pos->x_offset = 0;
        pos->y_offset = 0;
        if (font->use_kerning) {
            if (prev_index && glyph->index) {
                FT_Vector delta;
                FT_Get_Kerning(font->face, prev_index, glyph->index, FT_KERNING_UNFITTED, &delta);
                pos->x_offset += delta.x;
            }
            prev_index = glyph->index;
        }

        if (font->render_subpixel) {

            pos->x_advance += glyph->subpixel.lsb_minus_rsb;
        } else {

            if (skip_first) {
                skip_first = 0;
            } else {
                if (prev_delta - glyph->kerning_smart.lsb_delta > 32) {
                    pos->x_offset -= 64;
                } else if (prev_delta - glyph->kerning_smart.lsb_delta < -31) {
                    pos->x_offset += 64;
                }
            }
            prev_delta = glyph->kerning_smart.rsb_delta;
            pos->x_offset = ((pos->x_offset + 32) & -64);
        }
    }

    return 1;
}

static _Bool ReplaceGlyphPositions(GlyphPositions *positions, int start, int length, GlyphPositions *replacement)
{
    int initial_offset = (((positions->pos[start].offset) < (positions->pos[start + length - 1].offset)) ? (positions->pos[start].offset) : (positions->pos[start + length - 1].offset));

    int length_delta = (replacement->len - length);
    if (length_delta != 0) {
        int newlen = (positions->len + length_delta);
        if (newlen > positions->maxlen) {
            GlyphPosition *pos = SDL_realloc(positions->pos, newlen * sizeof(*pos));
            if (!pos) {
                return 0;
            }
            positions->pos = pos;
            positions->maxlen = newlen;
        }

        int remainder = positions->len - (start + length);
        if (remainder > 0) {
            memmove(&positions->pos[start + replacement->len], &positions->pos[start + length], (remainder * sizeof(*positions->pos)));
        }
        positions->len = newlen;
    }

    memcpy(&positions->pos[start], replacement->pos, replacement->len * sizeof(*positions->pos));

    for (int i = 0; i < replacement->len; ++i) {
        positions->pos[start + i].offset += initial_offset;
    }
    return 1;
}

static _Bool CollectGlyphsWithFallbacks(TTF_Font *font, const char *text, size_t length, TTF_Direction direction, Uint32 script, GlyphPositions *positions, TTF_Font *initial_font);

static int FillFallbackSpan(TTF_Font *font, const char *text, size_t length, TTF_Direction direction, Uint32 script, GlyphPositions *positions, TTF_Font *initial_font, int start, int stop)
{

    int min_offset = positions->pos[start].offset;
    int max_offset = min_offset;

    for (int i = start; i < stop; ++i) {
        if (positions->pos[i].offset < min_offset) {
            min_offset = positions->pos[i].offset;
        }
        if (positions->pos[i].offset > max_offset) {
            max_offset = positions->pos[i].offset;
        }
    }
    if (stop < positions->len && positions->pos[stop].offset > max_offset) {
        max_offset = positions->pos[stop].offset;
    } else {
        const char *last_text = text + max_offset;
        SDL_StepUTF8(&last_text, ((void *)0));
        max_offset = (int)(uintptr_t)(last_text - text);
    }
    if (max_offset > (int)length) {
        max_offset = (int)length;
    }

    GlyphPositions span;
    memset(&(span), 0, sizeof((span)));
    int span_length = (max_offset - min_offset);
    CollectGlyphsWithFallbacks(font, text + min_offset, span_length, direction, script, &span, initial_font);
    if (span.len > 0) {
        ReplaceGlyphPositions(positions, start, (stop - start), &span);
        SDL_free(span.pos);
    }
    return span.len;
}

static _Bool CollectGlyphsWithFallbacks(TTF_Font *font, const char *text, size_t length, TTF_Direction direction, Uint32 script, GlyphPositions *positions, TTF_Font *initial_font)
{
    if (!initial_font) {
        initial_font = font;
    } else if (font == initial_font) {

        return 1;
    }

    if (!CollectGlyphsFromFont(font, text, length, direction, script, positions)) {
        return 0;
    }

    _Bool complete = 0;
    TTF_FontList *fallback = font->fallbacks;
    while (!complete && fallback) {
        complete = 1;
        int start = -1;
        for (int i = 0; i < positions->len; ++i) {
            GlyphPosition *pos = &positions->pos[i];
            if (pos->index == 0) {
                complete = 0;
                if (start < 0) {
                    start = i;
                }
            } else if (start >= 0) {

                int replaced = FillFallbackSpan(fallback->font, text, length, direction, script, positions, initial_font, start, i);
                if (replaced > 0) {
                    i = start + replaced;
                }
                start = -1;
            }
        }
        if (start >= 0) {

            FillFallbackSpan(fallback->font, text, length, direction, script, positions, initial_font, start, positions->len);
        }
        fallback = fallback->next;
    }

    return 1;
}

static _Bool CollectGlyphs(TTF_Font *font, const char *text, size_t length, TTF_Direction direction, Uint32 script, GlyphPositions *positions)
{
    if (!CollectGlyphsWithFallbacks(font, text, length, direction, script, positions, ((void *)0))) {
        return 0;
    }

    int x = 0, y = 0;
    int last_offset = -1;
    positions->num_clusters = 0;
    for (int i = 0; i < positions->len; ++i) {
        GlyphPosition *pos = &positions->pos[i];

        if (pos->index == 0 && pos->font != font) {
            pos->font = font;
            if (!Find_GlyphByIndex(font, pos->index, 0, 0, 0, 0, 0, 0, &pos->glyph, ((void *)0))) {
                return SDL_SetError("Couldn't find glyph %u in font", pos->index);
            }
            pos->x_advance = pos->glyph->advance;
            pos->y_advance = 0;
            pos->x_offset = 0;
            pos->y_offset = 0;
        }

        pos->x = x + pos->x_offset;
        pos->y = y + ((pos->font->ascent) << 6) - pos->y_offset;
        x += pos->x_advance;
        y += pos->y_advance;

        if (!font->render_subpixel) {
            x = ((x + 32) & -64);
        }

        if (pos->offset != last_offset) {
            ++positions->num_clusters;
            last_offset = pos->offset;
        }
    }
    positions->width26dot6 = x;
    positions->height26dot6 = y;

    return 1;
}

static GlyphPositions *GetCachedGlyphPositions(TTF_Font *font, const char *text, size_t length, TTF_Direction direction, Uint32 script)
{
    CachedGlyphPositions *cached;

    font->positions = ((void *)0);
    for (unsigned int i = 0; i < (sizeof(font->cached_positions) / sizeof(font->cached_positions[0])); ++i) {
        cached = &font->cached_positions[i];
        if (direction == cached->direction &&
            script == cached->script &&
            length == cached->length &&
            SDL_memcmp(text, cached->text, length) == 0) {

            font->positions = &cached->positions;
            break;
        }
    }

    if (!font->positions) {

        cached = &font->cached_positions[font->next_cached_positions];
        font->next_cached_positions = (font->next_cached_positions + 1) % (sizeof(font->cached_positions) / sizeof(font->cached_positions[0]));
        font->positions = &cached->positions;

        SDL_free(cached->text);
        cached->direction = direction;
        cached->script = script;
        cached->text = (char *)SDL_malloc(length + 1);
        if (cached->text) {
            memcpy(cached->text, text, length);
            cached->text[length] = '\0';
            cached->length = length;
        } else {
            cached->length = 0;
            return ((void *)0);
        }

        if (!CollectGlyphs(font, text, length, direction, script, font->positions)) {
            cached->length = 0;
            return ((void *)0);
        }
    }
    return font->positions;
}

static _Bool TTF_Size_Internal(TTF_Font *font, const char *text, size_t length, TTF_Direction direction, Uint32 script, int *w, int *h, int *xstart, int *ystart, _Bool measure_width, int max_width, int *measured_width, size_t *measured_length, _Bool include_spread)
{
    int x = 0;
    int pos_x, pos_y;
    int minx, maxx;
    int miny, maxy;
    int spread_adjustment;

    if (w) {
        *w = 0;
    }
    if (h) {
        *h = 0;
    }
    if (measured_width) {
        *measured_width = 0;
    }
    if (measured_length) {
        *measured_length = 0;
    }

    if (SDL_ShouldInit(&TTF_state.init)) {
        SDL_SetInitialized(&TTF_state.init, 0);
        SDL_SetError("Library not initialized");
        return 0;
    };
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };
    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };

    if (measured_length) {
        *measured_length = length;
    }

    if (font->render_sdf && !include_spread) {
        spread_adjustment = 8;
    } else {
        spread_adjustment = 0;
    }

    GlyphPositions *positions = GetCachedGlyphPositions(font, text, length, direction, script);
    if (!positions) {
        return 0;
    }

    minx = 0;
    maxx = 0;
    miny = 0;
    maxy = font->height;

    if (font->render_sdf) {

        miny = 2147483647;
    }

    if (positions->len > 0) {
        if (positions->pos[0].offset == 0) {

            for (int i = 0; i < positions->len; ++i) {
                GlyphPosition *pos = &positions->pos[i];
                c_glyph *glyph = pos->glyph;

                pos_x = (int)(((pos->x) & -64) / 64) + glyph->sz_left + spread_adjustment;
                pos_y = (int)(((pos->y) & -64) / 64) - glyph->sz_top + spread_adjustment;

                minx = (((minx) < (pos_x)) ? (minx) : (pos_x));
                maxx = (((maxx) > (pos_x + glyph->sz_width - 2 * spread_adjustment)) ? (maxx) : (pos_x + glyph->sz_width - 2 * spread_adjustment));
                miny = (((miny) < (pos_y)) ? (miny) : (pos_y));
                maxy = (((maxy) > (pos_y + glyph->sz_rows - 2 * spread_adjustment)) ? (maxy) : (pos_y + glyph->sz_rows - 2 * spread_adjustment));

                x += pos->x_advance;

                if (!font->render_subpixel) {
                    x = ((x + 32) & -64);
                }

                if (measure_width) {
                    int cw = (((maxx) > ((int)(((x) & -64) / 64))) ? (maxx) : ((int)(((x) & -64) / 64))) - minx;
                    cw += 2 * font->outline;
                    if (!max_width || cw <= max_width) {
                        if (measured_width) {
                            *measured_width = cw;
                        }
                    } else {
                        if (measured_length) {
                            *measured_length = (size_t)pos->offset;
                        }
                        break;
                    }
                }
            }
        } else {

            x = positions->width26dot6;
            minx = (int)((((positions->width26dot6) + 63) & -64) / 64);
            for (int i = positions->len; i--;) {
                GlyphPosition *pos = &positions->pos[i];
                c_glyph *glyph = pos->glyph;

                pos_x = (int)(((pos->x) & -64) / 64) + glyph->sz_left + spread_adjustment;
                pos_y = (int)(((pos->y) & -64) / 64) - glyph->sz_top + spread_adjustment;

                minx = (((minx) < (pos_x)) ? (minx) : (pos_x));
                maxx = (((maxx) > (pos_x + glyph->sz_width - 2 * spread_adjustment)) ? (maxx) : (pos_x + glyph->sz_width - 2 * spread_adjustment));
                miny = (((miny) < (pos_y)) ? (miny) : (pos_y));
                maxy = (((maxy) > (pos_y + glyph->sz_rows - 2 * spread_adjustment)) ? (maxy) : (pos_y + glyph->sz_rows - 2 * spread_adjustment));

                if (measure_width) {
                    int cw = (((maxx) > ((int)(((x) & -64) / 64))) ? (maxx) : ((int)(((x) & -64) / 64))) - minx;
                    cw += 2 * font->outline;
                    if (!max_width || cw <= max_width) {
                        if (measured_width) {
                            *measured_width = cw;
                        }
                    } else {
                        if (measured_length) {
                            *measured_length = (size_t)pos->offset;
                        }
                        break;
                    }
                }

                x -= pos->x_advance;

                if (!font->render_subpixel) {
                    x = ((x + 32) & -64);
                }
            }
            if (minx > 0) {
                minx = 0;
            }
        }
    }

    maxx = (((maxx) > ((int)(((x) & -64) / 64))) ? (maxx) : ((int)(((x) & -64) / 64)));

    if (xstart) {
        *xstart = (minx < 0) ? -minx : 0;
        *xstart += font->outline;
        if (font->render_sdf && include_spread) {
            *xstart += 8;
        }
    }

    if (ystart) {
        *ystart = (miny < 0) ? -miny : 0;
        *ystart += font->outline;
    }

    if (w) {
        *w = (maxx - minx);
        if (*w != 0) {
            *w += 2 * font->outline;
        }
    }
    if (h) {
        *h = (maxy - miny);
        *h += 2 * font->outline;
        if (font->render_sdf && include_spread) {
            *h += (2 * 8);
        }
    }
    return 1;
}

_Bool TTF_GetStringSize(TTF_Font *font, const char *text, size_t length, int *w, int *h)
{
    if (!length && text) {
        length = SDL_strlen(text);
    }
    return TTF_Size_Internal(font, text, length, font->direction, font->script, w, h, ((void *)0), ((void *)0), 0, 0, ((void *)0), ((void *)0), 1);
}

_Bool TTF_MeasureString(TTF_Font *font, const char *text, size_t length, int max_width, int *measured_width, size_t *measured_length)
{
    if (!length && text) {
        length = SDL_strlen(text);
    }
    return TTF_Size_Internal(font, text, length, font->direction, font->script, ((void *)0), ((void *)0), ((void *)0), ((void *)0), 1, max_width, measured_width, measured_length, 1);
}

static SDL_Surface *TTF_Render_Internal(TTF_Font *font, const char *text, size_t length, SDL_Color fg, SDL_Color bg, const render_mode_t render_mode)
{
    Uint32 color;
    int xstart, ystart, width, height;
    SDL_Surface *textbuf = ((void *)0);

    if (SDL_ShouldInit(&TTF_state.init)) {
        SDL_SetInitialized(&TTF_state.init, 0);
        SDL_SetError("Library not initialized");
        return ((void *)0);
    };
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return ((void *)0);
    };
    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return ((void *)0);
    };

    if (!length) {
        length = SDL_strlen(text);
    }

    if (render_mode == RENDER_LCD && !(!!((font->face)->face_flags & (1L << 0)))) {
        SDL_SetError("LCD rendering is not available for non-scalable font");
        goto failure;
    }

    if (render_mode != RENDER_BLENDED) {
        if (font->render_sdf) {
            font->render_sdf = 0;
            Flush_Cache(font);
        }
    }

    if (!TTF_Size_Internal(font, text, length, font->direction, font->script, &width, &height, &xstart, &ystart, 0, 0, ((void *)0), ((void *)0), 1) || !width) {
        SDL_SetError("Text has zero width");
        goto failure;
    }

    if (fg.a == 0) {
        fg.a = 255;
    }
    if (render_mode == RENDER_SOLID) {
        textbuf = Create_Surface_Solid(width, height, fg, &color);
    } else if (render_mode == RENDER_SHADED) {
        textbuf = Create_Surface_Shaded(width, height, fg, bg, &color);
    } else if (render_mode == RENDER_BLENDED) {
        textbuf = Create_Surface_Blended(width, height, fg, &color);
    } else {
        textbuf = Create_Surface_LCD(width, height, fg, bg, &color);
    }

    if (textbuf == ((void *)0)) {
        goto failure;
    }

    if (!Render_Line(render_mode, font->render_subpixel, font, textbuf, xstart, ystart, fg)) {
        goto failure;
    }

    if (((font)->style & 0x04)) {
        Draw_Line(font->direction, textbuf, 0, ystart + font->underline_top_row, width, font->line_thickness, color, render_mode);
    }

    if (((font)->style & 0x08)) {
        Draw_Line(font->direction, textbuf, 0, ystart + font->strikethrough_top_row, width, font->line_thickness, color, render_mode);
    }

    return textbuf;
failure:
    if (textbuf) {
        SDL_DestroySurface(textbuf);
    }
    return ((void *)0);
}

SDL_Surface *TTF_RenderText_Solid(TTF_Font *font, const char *text, size_t length, SDL_Color fg)
{
    return TTF_Render_Internal(font, text, length, fg, fg, RENDER_SOLID);
}

SDL_Surface *TTF_RenderGlyph_Solid(TTF_Font *font, Uint32 ch, SDL_Color fg)
{
    char utf8[4], *end;

    end = SDL_UCS4ToUTF8(ch, utf8);

    return TTF_RenderText_Solid(font, utf8, (end - utf8), fg);
}

SDL_Surface *TTF_RenderText_Shaded(TTF_Font *font, const char *text, size_t length, SDL_Color fg, SDL_Color bg)
{
    return TTF_Render_Internal(font, text, length, fg, bg, RENDER_SHADED);
}

SDL_Surface *TTF_RenderGlyph_Shaded(TTF_Font *font, Uint32 ch, SDL_Color fg, SDL_Color bg)
{
    char utf8[4], *end;

    end = SDL_UCS4ToUTF8(ch, utf8);

    return TTF_RenderText_Shaded(font, utf8, (end - utf8), fg, bg);
}

SDL_Surface *TTF_RenderText_Blended(TTF_Font *font, const char *text, size_t length, SDL_Color fg)
{
    return TTF_Render_Internal(font, text, length, fg, fg, RENDER_BLENDED);
}

SDL_Surface *TTF_RenderGlyph_Blended(TTF_Font *font, Uint32 ch, SDL_Color fg)
{
    char utf8[4], *end;

    end = SDL_UCS4ToUTF8(ch, utf8);

    return TTF_RenderText_Blended(font, utf8, (end - utf8), fg);
}

SDL_Surface *TTF_RenderText_LCD(TTF_Font *font, const char *text, size_t length, SDL_Color fg, SDL_Color bg)
{
    return TTF_Render_Internal(font, text, length, fg, bg, RENDER_LCD);
}

SDL_Surface *TTF_RenderGlyph_LCD(TTF_Font *font, Uint32 ch, SDL_Color fg, SDL_Color bg)
{
    char utf8[4], *end;

    end = SDL_UCS4ToUTF8(ch, utf8);

    return TTF_RenderText_LCD(font, utf8, (end - utf8), fg, bg);
}

static _Bool CharacterIsDelimiter(Uint32 c)
{
    if (c == ' ' || c == '\t' || c == '\r' || c == '\n') {
        return 1;
    }
    return 0;
}

static _Bool CharacterIsNewLine(Uint32 c)
{
    if (c == '\n') {
        return 1;
    }
    return 0;
}

static _Bool GetWrappedLines(TTF_Font *font, const char *text, size_t length, TTF_Direction direction, Uint32 script, int xoffset, int wrap_width, _Bool trim_whitespace, TTF_Line **lines, int *num_lines, int *w, int *h, _Bool include_spread)
{
    int width, height;
    int i, numLines = 0, rowHeight;
    TTF_Line *strLines = ((void *)0);
    _Bool result = 0;

    if (w) {
        *w = 0;
    }
    if (h) {
        *h = 0;
    }

    if (SDL_ShouldInit(&TTF_state.init)) {
        SDL_SetInitialized(&TTF_state.init, 0);
        SDL_SetError("Library not initialized");
        return 0;
    };
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };
    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };
    if (wrap_width < 0) {
        return SDL_SetError("Parameter '%s' is invalid", ("wrap_width"));
    }

    if (!length) {
        length = SDL_strlen(text);
    }

    if (!TTF_Size_Internal(font, text, length, direction, script, &width, &height, ((void *)0), ((void *)0), 0, 0, ((void *)0), ((void *)0), include_spread) || !width) {
        return SDL_SetError("Text has zero width");
    }

    if (*text) {
        int maxNumLines = 0;
        const char *spot = text;
        size_t left = length;

        do {
            const char *save_text = ((void *)0);
            size_t save_length = (size_t)(-1);

            if (numLines >= maxNumLines) {
                TTF_Line *new_lines;
                if (wrap_width == 0) {
                    maxNumLines += 32;
                } else {
                    maxNumLines += (width / wrap_width) + 1;
                }
                new_lines = (TTF_Line *)SDL_realloc(strLines, maxNumLines * sizeof(*strLines));
                if (new_lines == ((void *)0)) {
                    goto done;
                }
                strLines = new_lines;
            }

            if (trim_whitespace && spot > text && spot[-1] != '\n') {
                const char *next_spot = spot;
                size_t next_left = left;
                for (;;) {
                    Uint32 c = SDL_StepUTF8(&next_spot, &next_left);
                    if (c == 0 || (c != ' ' && c != '\t')) {
                        break;
                    }
                    spot = next_spot;
                    left = next_left;
                }
            }

            if (numLines > 0) {
                strLines[numLines - 1].length = spot - strLines[numLines - 1].text;
            }
            if (*spot == '\0') {
                break;
            }
            strLines[numLines].text = spot;
            strLines[numLines].length = left;
            ++numLines;

            int max_width = wrap_width;
            if (max_width > 0) {
                max_width = (((max_width - xoffset) > (1)) ? (max_width - xoffset) : (1));
            }
            size_t max_length = 0;
            if (!TTF_Size_Internal(font, spot, left, direction, script, ((void *)0), ((void *)0), ((void *)0), ((void *)0), 1, max_width, ((void *)0), &max_length, include_spread)) {
                SDL_SetError("Error measure text");
                goto done;
            }

            if (wrap_width != 0) {

                if (max_length == 0 && numLines > 1) {
                    max_length = 1;
                }
            }

            const char *end = spot + max_length;
            while (spot < end) {
                int is_delim;
                Uint32 c = SDL_StepUTF8(&spot, &left);

                if (c == 0xFEFF || c == 0xFFFE) {
                    continue;
                }

                is_delim = (wrap_width > 0) ? CharacterIsDelimiter(c) : CharacterIsNewLine(c);

                if (is_delim) {
                    save_text = spot;
                    save_length = left;

                    if (c == '\n' || (c == '\r' && *spot != '\n')) {
                        break;
                    }
                }
            }

            if (save_text && left > 0) {
                spot = save_text;
                left = save_length;
            }

            xoffset = 0;

        } while (left > 0);

        for (i = 0; i < numLines; ++i) {
            TTF_Line *line = &strLines[i];
            if (line->length == 0) {
                continue;
            }

            if (CharacterIsNewLine(line->text[line->length - 1])) {
                --line->length;
                if (line->length > 0 && line->text[line->length - 1] == '\r') {
                    --line->length;
                }
            } else if (i < (numLines - 1) &&
                       CharacterIsDelimiter(line->text[line->length - 1])) {
                --line->length;
            }

            if (trim_whitespace) {
                while (line->length > 0 &&
                       CharacterIsDelimiter(line->text[line->length - 1])) {
                    --line->length;
                }
            }
        }
    }

    rowHeight = (((height) > (font->lineskip)) ? (height) : (font->lineskip));

    if (wrap_width == 0) {

        if (numLines > 1) {
            width = 0;
            for (i = 0; i < numLines; i++) {
                int w_tmp, h_tmp;

                if (TTF_Size_Internal(font, strLines[i].text, strLines[i].length, font->direction, font->script, &w_tmp, &h_tmp, ((void *)0), ((void *)0), 0, 0, ((void *)0), ((void *)0), include_spread)) {
                    width = (((w_tmp) > (width)) ? (w_tmp) : (width));
                }
            }

            width = (((width) > (1)) ? (width) : (1));
        }
    } else {
        if (numLines <= 1 && font->horizontal_align == TTF_HORIZONTAL_ALIGN_LEFT) {

            width = ((((int)wrap_width) < (width)) ? ((int)wrap_width) : (width));
        } else {
            width = wrap_width;
        }
    }
    height = rowHeight + font->lineskip * (numLines - 1);

    result = 1;

done:
    if (result) {
        if (lines) {
            *lines = strLines;
        } else {
            SDL_free(strLines);
        }
        if (num_lines) {
            *num_lines = numLines;
        }
        if (w) {
            *w = width;
        }
        if (h) {
            *h = height;
        }
    } else {
        SDL_free(strLines);
    }
    return result;
}

_Bool TTF_GetStringSizeWrapped(TTF_Font *font, const char *text, size_t length, int wrap_width, int *w, int *h)
{
    return GetWrappedLines(font, text, length, font->direction, font->script, 0, wrap_width, 1, ((void *)0), ((void *)0), w, h, 1);
}

static SDL_Surface *TTF_Render_Wrapped_Internal(TTF_Font *font, const char *text, size_t length, SDL_Color fg, SDL_Color bg, int wrap_width, const render_mode_t render_mode)
{
    Uint32 color;
    int width, height;
    SDL_Surface *textbuf = ((void *)0);
    int i, numLines = 0;
    TTF_Line *strLines = ((void *)0);

    if (!GetWrappedLines(font, text, length, font->direction, font->script, 0, wrap_width, 1, &strLines, &numLines, &width, &height, 1)) {
        return ((void *)0);
    }

    if (render_mode == RENDER_LCD && !(!!((font->face)->face_flags & (1L << 0)))) {
        SDL_SetError("LCD rendering is not available for non-scalable font");
        goto failure;
    }

    if (fg.a == 0) {
        fg.a = 255;
    }
    if (render_mode == RENDER_SOLID) {
        textbuf = Create_Surface_Solid(width, height, fg, &color);
    } else if (render_mode == RENDER_SHADED) {
        textbuf = Create_Surface_Shaded(width, height, fg, bg, &color);
    } else if (render_mode == RENDER_BLENDED) {
        textbuf = Create_Surface_Blended(width, height, fg, &color);
    } else {
        textbuf = Create_Surface_LCD(width, height, fg, bg, &color);
    }

    if (textbuf == ((void *)0)) {
        goto failure;
    }

    for (i = 0; i < numLines; i++) {
        int xstart, ystart, line_width, xoffset;

        if (!TTF_Size_Internal(font, strLines[i].text, strLines[i].length, font->direction, font->script, &line_width, ((void *)0), &xstart, &ystart, 0, 0, ((void *)0), ((void *)0), 1)) {
            goto failure;
        }

        ystart += i * font->lineskip;

        if (font->horizontal_align == TTF_HORIZONTAL_ALIGN_RIGHT) {
            xoffset = (width - line_width);
        } else if (font->horizontal_align == TTF_HORIZONTAL_ALIGN_CENTER) {
            xoffset = (width - line_width) / 2;
        } else {
            xoffset = 0;
        }
        xoffset = (((0) > (xoffset)) ? (0) : (xoffset));

        if (!Render_Line(render_mode, font->render_subpixel, font, textbuf, xstart + xoffset, ystart, fg)) {
            goto failure;
        }

        if (((font)->style & 0x04)) {
            Draw_Line(font->direction, textbuf, xoffset, ystart + font->underline_top_row, line_width, font->line_thickness, color, render_mode);
        }

        if (((font)->style & 0x08)) {
            Draw_Line(font->direction, textbuf, xoffset, ystart + font->strikethrough_top_row, line_width, font->line_thickness, color, render_mode);
        }
    }

    if (strLines) {
        SDL_free(strLines);
    }
    return textbuf;

failure:
    if (textbuf) {
        SDL_DestroySurface(textbuf);
    }
    if (strLines) {
        SDL_free(strLines);
    }
    return ((void *)0);
}

SDL_Surface *TTF_RenderText_Solid_Wrapped(TTF_Font *font, const char *text, size_t length, SDL_Color fg, int wrap_width)
{
    return TTF_Render_Wrapped_Internal(font, text, length, fg, fg, wrap_width, RENDER_SOLID);
}

SDL_Surface *TTF_RenderText_Shaded_Wrapped(TTF_Font *font, const char *text, size_t length, SDL_Color fg, SDL_Color bg, int wrap_width)
{
    return TTF_Render_Wrapped_Internal(font, text, length, fg, bg, wrap_width, RENDER_SHADED);
}

SDL_Surface *TTF_RenderText_Blended_Wrapped(TTF_Font *font, const char *text, size_t length, SDL_Color fg, int wrap_width)
{
    return TTF_Render_Wrapped_Internal(font, text, length, fg, fg, wrap_width, RENDER_BLENDED);
}

SDL_Surface *TTF_RenderText_LCD_Wrapped(TTF_Font *font, const char *text, size_t length, SDL_Color fg, SDL_Color bg, int wrap_width)
{
    return TTF_Render_Wrapped_Internal(font, text, length, fg, bg, wrap_width, RENDER_LCD);
}

struct TTF_TextLayout
{
    TTF_Direction direction;
    Uint32 script;
    int font_height;
    int wrap_length;
    _Bool wrap_whitespace_visible;
    int *lines;
};

typedef struct TTF_InternalText
{
    TTF_Text text;
    TTF_TextData internal;
    TTF_TextLayout layout;
} TTF_InternalText;

TTF_Text *TTF_CreateText(TTF_TextEngine *engine, TTF_Font *font, const char *text, size_t length)
{
    if (engine && engine->version < sizeof(*engine)) {

        SDL_SetError("Invalid engine, should be initialized with SDL_INIT_INTERFACE()");
        return ((void *)0);
    }

    TTF_InternalText *mem = (TTF_InternalText *)SDL_calloc(1, sizeof(*mem));
    if (!mem) {
        return ((void *)0);
    }

    TTF_Text *result = &mem->text;
    result->internal = &mem->internal;
    result->internal->layout = &mem->layout;
    result->internal->font = font;
    result->internal->color.r = 1.0f;
    result->internal->color.g = 1.0f;
    result->internal->color.b = 1.0f;
    result->internal->color.a = 1.0f;
    result->internal->needs_layout_update = 1;
    result->internal->engine = engine;
    if (text && *text) {
        if (length == 0) {
            length = SDL_strlen(text);
        }

        result->text = (char *)SDL_malloc(length + 1);
        if (!result->text) {
            SDL_free(mem);
            return ((void *)0);
        }
        memcpy(result->text, text, length);
        result->text[length] = '\0';
    }

    if (font) {
        AddFontTextReference(font, result);
    }
    return result;
}

static int SortClusters(const void *a, const void *b)
{
    TTF_SubString *A = (TTF_SubString *)a;
    TTF_SubString *B = (TTF_SubString *)b;

    if (A->offset == B->offset) {
        if (A->flags & 0x00000400) {
            return -1;
        }
        if (B->flags & 0x00000400) {
            return 1;
        }
        return 0;
    }
    return (A->offset - B->offset);
}

static int CalculateClusterLengths(TTF_Text *text, TTF_SubString *clusters, int num_clusters, size_t length, int *lines)
{
    SDL_qsort(clusters, num_clusters, sizeof(*clusters), SortClusters);

    TTF_Font *font = text->internal->font;
    int i;
    const TTF_SubString *src = clusters;
    TTF_SubString *last = ((void *)0);
    int cluster_index = 0;
    for (i = 0; i < num_clusters; ++i, ++src) {

        if (last && src->offset == last->offset) {
            if (!(last->flags & 0x00000400)) {
                last->flags |= src->flags;
                SDL_GetRectUnion(&last->rect, &src->rect, &last->rect);
                continue;
            }
        }

        TTF_SubString *cluster = &clusters[cluster_index];
        if (src != cluster) {
            {
                _Static_assert(sizeof(*(cluster)) == sizeof(*(src)), "sizeof (*(cluster)) == sizeof (*(src))");
            }
            memcpy((cluster), (src), sizeof(*(src)));
        }

        if (!last || cluster->line_index != last->line_index) {
            if (!last) {
                cluster->flags |= 0x00000100;
            }
            cluster->flags |= 0x00000200;

            if (lines && cluster->line_index > 0) {
                lines[cluster->line_index - 1] = cluster_index;
            }
        }

        cluster->cluster_index = cluster_index++;

        if (cluster->flags & 0x00000400) {
            if (cluster->flags & 0x00000200) {
                cluster->rect.y = cluster->line_index * font->lineskip;
                cluster->rect.h = font->height;
            } else {
                {
                    _Static_assert(sizeof(*(&cluster->rect)) == sizeof(*(&clusters[cluster->cluster_index - 1].rect)), "sizeof (*(&cluster->rect)) == sizeof (*(&clusters[cluster->cluster_index - 1].rect))");
                }
                memcpy((&cluster->rect), (&clusters[cluster->cluster_index - 1].rect), sizeof(*(&clusters[cluster->cluster_index - 1].rect)));
                if ((cluster->flags & 0x000000FF) != TTF_DIRECTION_RTL) {
                    cluster->rect.x += cluster->rect.w;
                }
                cluster->rect.w = 0;
            }
        } else if (cluster->flags & 0x00000800) {
            if (last) {
                if (last->length > 0 && text->text[last->offset + last->length - 1] == '\n') {
                    cluster->line_index = last->line_index + 1;
                    cluster->rect.y = (cluster->line_index * font->lineskip);
                    cluster->rect.h = font->height;
                } else {
                    cluster->line_index = last->line_index;
                    {
                        _Static_assert(sizeof(*(&cluster->rect)) == sizeof(*(&last->rect)), "sizeof (*(&cluster->rect)) == sizeof (*(&last->rect))");
                    }
                    memcpy((&cluster->rect), (&last->rect), sizeof(*(&last->rect)));
                    if ((cluster->flags & 0x000000FF) != TTF_DIRECTION_RTL) {
                        cluster->rect.x += cluster->rect.w;
                    }
                    cluster->rect.w = 0;
                }
            } else {
                cluster->rect.h = font->height;
            }
        }

        if (i < (num_clusters - 1)) {
            cluster->length = clusters[i + 1].offset - cluster->offset;
        } else {
            do {
                while (!(cluster->flags & 0x00000800)) {
                    static struct SDL_AssertData sdl_assert_data = { 0, 0, "cluster->flags & 0x00000800", 0, 0, 0, 0 };
                    const SDL_AssertState sdl_assert_state = SDL_ReportAssertion(&sdl_assert_data, __func__, "src/SDL_ttf.c", 4475);
                    if (sdl_assert_state == SDL_ASSERTION_RETRY) {
                        continue;
                    } else if (sdl_assert_state == SDL_ASSERTION_BREAK) {
                        __builtin_debugtrap();
                    }
                    break;
                }
            } while ((0));
            do {
                while (!(cluster->offset == (int)length)) {
                    static struct SDL_AssertData sdl_assert_data = { 0, 0, "cluster->offset == (int)length", 0, 0, 0, 0 };
                    const SDL_AssertState sdl_assert_state = SDL_ReportAssertion(&sdl_assert_data, __func__, "src/SDL_ttf.c", 4476);
                    if (sdl_assert_state == SDL_ASSERTION_RETRY) {
                        continue;
                    } else if (sdl_assert_state == SDL_ASSERTION_BREAK) {
                        __builtin_debugtrap();
                    }
                    break;
                }
            } while ((0));
        }
        last = cluster;
    }
    return cluster_index;
}

static TTF_SubStringFlags GetPreviousClusterDirection(TTF_SubString *clusters, int num_clusters, TTF_Direction direction)
{
    if (num_clusters > 1) {
        return (clusters[num_clusters - 1].flags & 0x000000FF);
    } else {
        return (TTF_SubStringFlags)direction;
    }
}

static _Bool LayoutText(TTF_Text *text)
{
    TTF_Font *font = text->internal->font;
    int wrap_width = text->internal->layout->wrap_length;
    _Bool trim_whitespace = !text->internal->layout->wrap_whitespace_visible;
    size_t length = SDL_strlen(text->text);
    int i, width = 0, height = 0, numLines = 0;
    TTF_Line *strLines = ((void *)0);
    TTF_DrawOperation *ops = ((void *)0), *new_ops;
    int num_ops = 0, max_ops = 0, extra_ops = 0, additional_ops;
    TTF_SubString *clusters = ((void *)0), *new_clusters, *cluster;
    int num_clusters = 0, max_clusters = 0, cluster_offset;
    int *lines = ((void *)0);
    _Bool result = 0;
    TTF_Direction direction = TTF_GetTextDirection(text);
    Uint32 script = TTF_GetTextScript(text);

    if (!GetWrappedLines(font, text->text, length, direction, script, text->internal->x, wrap_width, trim_whitespace, &strLines, &numLines, &width, &height, 0)) {
        return 1;
    }
    height += text->internal->y;

    if (((font)->style & 0x04)) {
        ++extra_ops;
    }
    if (((font)->style & 0x08)) {
        ++extra_ops;
    }

    if (numLines > 1) {
        lines = (int *)SDL_malloc((numLines - 1) * sizeof(*lines));
        if (!lines) {
            goto done;
        }
        for (i = 0; i < (numLines - 1); ++i) {
            lines[i] = -1;
        }
    }

    max_clusters = numLines + 1;
    clusters = (TTF_SubString *)SDL_calloc(max_clusters, sizeof(*clusters));
    if (!clusters) {
        goto done;
    }

    for (i = 0; i < numLines; i++) {
        int xstart, ystart, line_width, xoffset;

        if (strLines[i].length == 0) {
            cluster = &clusters[num_clusters++];
            cluster->flags = GetPreviousClusterDirection(clusters, num_clusters - 1, direction) | 0x00000400;
            cluster->offset = (int)(uintptr_t)(strLines[i].text - text->text);
            cluster->line_index = i;
            continue;
        }

        if (!TTF_Size_Internal(font, strLines[i].text, strLines[i].length, direction, script, &line_width, ((void *)0), &xstart, &ystart, 0, 0, ((void *)0), ((void *)0), 0)) {
            goto done;
        }

        ystart += i * font->lineskip;

        ystart += text->internal->y;

        if (font->horizontal_align == TTF_HORIZONTAL_ALIGN_RIGHT) {
            xoffset = (width - line_width);
        } else if (font->horizontal_align == TTF_HORIZONTAL_ALIGN_CENTER) {
            xoffset = (width - line_width) / 2;
        } else {
            xoffset = 0;
        }
        xoffset = (((0) > (xoffset)) ? (0) : (xoffset));

        if (i == 0) {
            xoffset += text->internal->x;
        }

        additional_ops = (font->positions->len + extra_ops);
        new_ops = (TTF_DrawOperation *)SDL_realloc(ops, (max_ops + additional_ops) * sizeof(*new_ops));
        if (!new_ops) {
            goto done;
        }
        memset(new_ops + max_ops, 0, additional_ops * sizeof(*new_ops));
        ops = new_ops;
        max_ops += additional_ops;

        new_clusters = (TTF_SubString *)SDL_realloc(clusters, (max_clusters + font->positions->num_clusters) * sizeof(*new_clusters));
        if (!new_clusters) {
            goto done;
        }
        memset(new_clusters + max_clusters, 0, font->positions->num_clusters * sizeof(*new_clusters));
        clusters = new_clusters;
        max_clusters += font->positions->num_clusters;
        cluster_offset = (int)(uintptr_t)(strLines[i].text - text->text);

        if (!Render_Line_TextEngine(font, direction, xstart + xoffset, ystart, width, height, ops, &num_ops, clusters, &num_clusters, cluster_offset, i)) {
            goto done;
        }
        cluster = &clusters[num_clusters++];
        cluster->flags = GetPreviousClusterDirection(clusters, num_clusters - 1, direction) | 0x00000400;
        cluster->offset = (int)(uintptr_t)(strLines[i].text - text->text + strLines[i].length);
        cluster->line_index = i;

        if (((font)->style & 0x04)) {
            Draw_Line_TextEngine(direction, width, height, xoffset, ystart + font->underline_top_row, line_width, font->line_thickness, ops, &num_ops);
        }

        if (((font)->style & 0x08)) {
            Draw_Line_TextEngine(direction, width, height, xoffset, ystart + font->strikethrough_top_row, line_width, font->line_thickness, ops, &num_ops);
        }
    }
    cluster = &clusters[num_clusters++];
    cluster->flags = GetPreviousClusterDirection(clusters, num_clusters - 1, direction) | 0x00000800;
    cluster->offset = (int)length;

    num_clusters = CalculateClusterLengths(text, clusters, num_clusters, length, lines);

    result = 1;

done:
    if (result) {
        text->num_lines = numLines;
        text->internal->w = width;
        text->internal->h = height;
        text->internal->num_ops = num_ops;
        text->internal->ops = ops;
        text->internal->num_clusters = num_clusters;
        text->internal->clusters = clusters;
        text->internal->layout->lines = lines;
    } else {
        SDL_free(ops);
        SDL_free(clusters);
        SDL_free(lines);
    }
    SDL_free(strLines);
    return result;
}

static void DestroyEngineText(TTF_Text *text)
{
    TTF_TextEngine *engine = text->internal->engine;
    if (engine && engine->DestroyText &&
        text->internal->engine_text) {
        engine->DestroyText(engine->userdata, text);
        text->internal->engine_text = ((void *)0);
    }
}

static _Bool CreateEngineText(TTF_Text *text)
{
    TTF_TextEngine *engine = text->internal->engine;
    if (engine && engine->CreateText && text->internal->num_ops > 0) {
        if (!engine->CreateText(engine->userdata, text)) {
            return 0;
        }
    }
    return 1;
}

SDL_PropertiesID TTF_GetTextProperties(TTF_Text *text)
{
    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };

    if (!text->internal->props) {
        text->internal->props = SDL_CreateProperties();
    }
    return text->internal->props;
}

_Bool TTF_SetTextEngine(TTF_Text *text, TTF_TextEngine *engine)
{
    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };

    if (engine == text->internal->engine) {
        return 1;
    }

    if (engine && engine->version < sizeof(*engine)) {

        return SDL_SetError("Invalid engine, should be initialized with SDL_INIT_INTERFACE()");
    }

    DestroyEngineText(text);

    text->internal->engine = engine;
    text->internal->needs_engine_update = 1;

    return 1;
}

TTF_TextEngine *TTF_GetTextEngine(TTF_Text *text)
{
    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return ((void *)0);
    };

    return text->internal->engine;
}

_Bool TTF_SetTextFont(TTF_Text *text, TTF_Font *font)
{
    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };

    if (font == text->internal->font) {
        return 1;
    }

    if (text->internal->font) {
        RemoveFontTextReference(text->internal->font, text);
    }

    text->internal->font = font;

    if (text->internal->font) {
        AddFontTextReference(text->internal->font, text);

        text->internal->layout->font_height = font->height;
    } else {
        text->internal->layout->font_height = 0;
    }
    text->internal->needs_layout_update = 1;

    return 1;
}

TTF_Font *TTF_GetTextFont(TTF_Text *text)
{
    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return ((void *)0);
    };

    return text->internal->font;
}

_Bool TTF_SetTextDirection(TTF_Text *text, TTF_Direction direction)
{
    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };

    if (direction == text->internal->layout->direction) {
        return 1;
    }

    if (direction != TTF_DIRECTION_INVALID && direction != TTF_DIRECTION_LTR) {
        return SDL_SetError("That operation is not supported");
    }

    text->internal->layout->direction = direction;
    text->internal->needs_layout_update = 1;
    return 1;
}

TTF_Direction TTF_GetTextDirection(TTF_Text *text)
{
    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return TTF_DIRECTION_INVALID;
    };

    if (text->internal->layout->direction != TTF_DIRECTION_INVALID) {
        return text->internal->layout->direction;
    }
    return TTF_GetFontDirection(text->internal->font);
}

_Bool TTF_SetTextScript(TTF_Text *text, Uint32 script)
{
    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };

    (void)script;
    return SDL_SetError("That operation is not supported");
}

Uint32 TTF_GetTextScript(TTF_Text *text)
{
    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };

    if (text->internal->layout->script) {
        return text->internal->layout->script;
    }
    return TTF_GetFontScript(text->internal->font);
}

_Bool TTF_SetTextColor(TTF_Text *text, Uint8 r, Uint8 g, Uint8 b, Uint8 a)
{
    const float fR = (float)r / 255.0f;
    const float fG = (float)g / 255.0f;
    const float fB = (float)b / 255.0f;
    const float fA = (float)a / 255.0f;

    return TTF_SetTextColorFloat(text, fR, fG, fB, fA);
}

_Bool TTF_SetTextColorFloat(TTF_Text *text, float r, float g, float b, float a)
{
    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };

    text->internal->color.r = r;
    text->internal->color.g = g;
    text->internal->color.b = b;
    text->internal->color.a = a;
    return 1;
}

_Bool TTF_GetTextColor(TTF_Text *text, Uint8 *r, Uint8 *g, Uint8 *b, Uint8 *a)
{
    float fR = 1.0f, fG = 1.0f, fB = 1.0f, fA = 1.0f;

    if (!TTF_GetTextColorFloat(text, &fR, &fG, &fB, &fA)) {
        if (r) {
            *r = 255;
        }
        if (g) {
            *g = 255;
        }
        if (b) {
            *b = 255;
        }
        if (b) {
            *b = 255;
        }
        return 0;
    }

    if (r) {
        *r = (Uint8)SDL_roundf((((fR) < (0.0f)) ? (0.0f) : (((fR) > (1.0f)) ? (1.0f) : (fR))) * 255.0f);
    }
    if (g) {
        *g = (Uint8)SDL_roundf((((fG) < (0.0f)) ? (0.0f) : (((fG) > (1.0f)) ? (1.0f) : (fG))) * 255.0f);
    }
    if (b) {
        *b = (Uint8)SDL_roundf((((fB) < (0.0f)) ? (0.0f) : (((fB) > (1.0f)) ? (1.0f) : (fB))) * 255.0f);
    }
    if (a) {
        *a = (Uint8)SDL_roundf((((fA) < (0.0f)) ? (0.0f) : (((fA) > (1.0f)) ? (1.0f) : (fA))) * 255.0f);
    }
    return 1;
}

_Bool TTF_GetTextColorFloat(TTF_Text *text, float *r, float *g, float *b, float *a)
{
    SDL_FColor color;

    if (r) {
        *r = 1.0f;
    }
    if (g) {
        *g = 1.0f;
    }
    if (b) {
        *b = 1.0f;
    }
    if (a) {
        *a = 1.0f;
    }

    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };

    color = text->internal->color;

    if (r) {
        *r = color.r;
    }
    if (g) {
        *g = color.g;
    }
    if (b) {
        *b = color.b;
    }
    if (a) {
        *a = color.a;
    }
    return 1;
}

_Bool TTF_SetTextPosition(TTF_Text *text, int x, int y)
{
    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };

    if (x != text->internal->x || y != text->internal->y) {
        text->internal->x = x;
        text->internal->y = y;
        text->internal->needs_layout_update = 1;
    }
    return 1;
}

_Bool TTF_GetTextPosition(TTF_Text *text, int *x, int *y)
{
    if (x) {
        *x = 0;
    }
    if (y) {
        *y = 0;
    }

    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };

    if (x) {
        *x = text->internal->x;
    }
    if (y) {
        *y = text->internal->y;
    }
    return 1;
}

_Bool TTF_SetTextWrapWidth(TTF_Text *text, int wrap_width)
{
    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };

    if (wrap_width == text->internal->layout->wrap_length) {
        return 1;
    }

    text->internal->layout->wrap_length = (((wrap_width) > (0)) ? (wrap_width) : (0));
    text->internal->needs_layout_update = 1;
    return 1;
}

_Bool TTF_GetTextWrapWidth(TTF_Text *text, int *wrap_width)
{
    if (wrap_width) {
        *wrap_width = 0;
    }

    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };

    if (wrap_width) {
        *wrap_width = text->internal->layout->wrap_length;
    }
    return 1;
}

_Bool TTF_SetTextWrapWhitespaceVisible(TTF_Text *text, _Bool visible)
{
    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };

    if (visible == text->internal->layout->wrap_whitespace_visible) {
        return 1;
    }

    text->internal->layout->wrap_whitespace_visible = visible;
    text->internal->needs_layout_update = 1;
    return 1;
}

_Bool TTF_TextWrapWhitespaceVisible(TTF_Text *text)
{
    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };

    return text->internal->layout->wrap_whitespace_visible;
}

_Bool TTF_SetTextString(TTF_Text *text, const char *string, size_t length)
{
    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };

    if (!string || !*string) {
        if (!text->text) {
            return 1;
        }

        SDL_free(text->text);
        text->text = ((void *)0);
    } else {
        if (!length) {
            length = SDL_strlen(string);
        }

        if (text->text && length == SDL_strlen(text->text) && SDL_memcmp(string, text->text, length) == 0) {
            return 1;
        }

        char *new_string = SDL_malloc(length + 1);
        if (!new_string) {
            return 0;
        }
        memcpy(new_string, string, length);
        new_string[length] = '\0';

        SDL_free(text->text);
        text->text = new_string;
    }

    text->internal->needs_layout_update = 1;
    return 1;
}

_Bool TTF_InsertTextString(TTF_Text *text, int offset, const char *string, size_t length)
{
    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };

    if (!string || !*string) {
        return 1;
    }

    if (!length) {
        length = SDL_strlen(string);
    }

    if (!text->text) {
        return TTF_SetTextString(text, string, length);
    }

    int old_length = (int)SDL_strlen(text->text);
    size_t new_length = old_length + length;
    char *new_string = (char *)SDL_realloc(text->text, new_length + 1);
    if (!new_string) {
        return 0;
    }

    if (offset < 0) {
        offset = old_length + 1 + offset;
        if (offset < 0) {
            offset = 0;
        }
    } else {
        if (offset > old_length) {
            offset = old_length;
        }
    }

    int shift = (old_length - offset);
    if (shift > 0) {
        memmove(new_string + offset + length, new_string + offset, shift);
    }
    memcpy(new_string + offset, string, length);
    new_string[new_length] = '\0';

    text->text = new_string;

    text->internal->needs_layout_update = 1;
    return 1;
}

_Bool TTF_AppendTextString(TTF_Text *text, const char *string, size_t length)
{
    return TTF_InsertTextString(text, -1, string, length);
}

_Bool TTF_DeleteTextString(TTF_Text *text, int offset, int length)
{
    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };

    if (!length || !text->text) {
        return 1;
    }

    int old_length = (int)SDL_strlen(text->text);
    if (offset < 0) {
        offset = old_length + 1 + offset;
        if (offset < 0) {
            offset = 0;
        }
    } else {
        if (offset >= old_length) {
            return 1;
        }
    }

    if (length < 0 || length >= (old_length - offset)) {
        if (offset == 0) {
            return TTF_SetTextString(text, ((void *)0), 0);
        }
        text->text[offset] = '\0';
    } else {
        int shift = (old_length - length - offset);
        memcpy(&text->text[offset], &text->text[offset + length], shift);
        text->text[offset + shift] = '\0';
    }

    text->internal->needs_layout_update = 1;
    return 1;
}

_Bool TTF_GetTextSize(TTF_Text *text, int *w, int *h)
{
    if (w) {
        *w = 0;
    }
    if (h) {
        *h = 0;
    }

    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };

    if (!TTF_UpdateText(text)) {
        return 0;
    }

    if (w) {
        *w = text->internal->w;
    }
    if (h) {
        *h = text->internal->h;
    }
    return 1;
}

_Bool TTF_GetTextSubString(TTF_Text *text, int offset, TTF_SubString *substring)
{
    if (substring) {
        memset((substring), 0, sizeof(*(substring)));
    }

    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };
    if (!(substring)) {
        SDL_SetError("Parameter '%s' is invalid", ("substring"));
        return 0;
    };

    if (!TTF_UpdateText(text)) {
        return 0;
    }

    if (text->internal->num_clusters == 0) {
        substring->rect.h = text->internal->layout->font_height;
        return 1;
    }

    int num_clusters = text->internal->num_clusters;
    TTF_SubString *clusters = text->internal->clusters;

    if (offset < 0) {
        {
            _Static_assert(sizeof(*(substring)) == sizeof(*(&clusters[0])), "sizeof (*(substring)) == sizeof (*(&clusters[0]))");
        }
        memcpy((substring), (&clusters[0]), sizeof(*(&clusters[0])));
        substring->length = 0;
        substring->rect.w = 0;
        return 1;
    }

    int length = (int)SDL_strlen(text->text);
    if (offset >= length) {
        {
            _Static_assert(sizeof(*(substring)) == sizeof(*(&clusters[num_clusters - 1])), "sizeof (*(substring)) == sizeof (*(&clusters[num_clusters - 1]))");
        }
        memcpy((substring), (&clusters[num_clusters - 1]), sizeof(*(&clusters[num_clusters - 1])));
        return 1;
    }

    const TTF_SubString *cluster = &clusters[offset];
    if (offset < num_clusters && cluster->offset == offset) {
        if ((cluster->flags & 0x00000400) && cluster->length == 0 &&
            offset < (num_clusters - 1)) {
            ++cluster;
        }
        {
            _Static_assert(sizeof(*(substring)) == sizeof(*(cluster)), "sizeof (*(substring)) == sizeof (*(cluster))");
        }
        memcpy((substring), (cluster), sizeof(*(cluster)));
        return 1;
    }

    int low = 0;
    int high = num_clusters - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        cluster = &clusters[mid];

        if ((cluster->flags & 0x00000400) && cluster->length == 0 &&
            mid < (num_clusters - 1)) {
            ++cluster;
        }
        if (offset >= cluster->offset && offset < (cluster->offset + cluster->length)) {
            {
                _Static_assert(sizeof(*(substring)) == sizeof(*(&clusters[mid])), "sizeof (*(substring)) == sizeof (*(&clusters[mid]))");
            }
            memcpy((substring), (&clusters[mid]), sizeof(*(&clusters[mid])));
            break;
        }

        if (cluster->offset < offset) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return 1;
}

_Bool TTF_GetTextSubStringForLine(TTF_Text *text, int line, TTF_SubString *substring)
{
    if (substring) {
        memset((substring), 0, sizeof(*(substring)));
    }

    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };
    if (!(substring)) {
        SDL_SetError("Parameter '%s' is invalid", ("substring"));
        return 0;
    };

    if (!TTF_UpdateText(text)) {
        return 0;
    }

    if (text->internal->num_clusters == 0) {
        substring->rect.h = text->internal->layout->font_height;
        return 1;
    }

    int num_clusters = text->internal->num_clusters;
    TTF_SubString *clusters = text->internal->clusters;

    if (line < 0) {
        {
            _Static_assert(sizeof(*(substring)) == sizeof(*(&clusters[0])), "sizeof (*(substring)) == sizeof (*(&clusters[0]))");
        }
        memcpy((substring), (&clusters[0]), sizeof(*(&clusters[0])));
        substring->length = 0;
        substring->rect.w = 0;
        return 1;
    }

    if (line >= text->num_lines) {
        {
            _Static_assert(sizeof(*(substring)) == sizeof(*(&clusters[num_clusters - 1])), "sizeof (*(substring)) == sizeof (*(&clusters[num_clusters - 1]))");
        }
        memcpy((substring), (&clusters[num_clusters - 1]), sizeof(*(&clusters[num_clusters - 1])));
        return 1;
    }

    int *lines = text->internal->layout->lines;
    if (line == 0) {
        {
            _Static_assert(sizeof(*(substring)) == sizeof(*(&clusters[0])), "sizeof (*(substring)) == sizeof (*(&clusters[0]))");
        }
        memcpy((substring), (&clusters[0]), sizeof(*(&clusters[0])));
    } else {
        {
            _Static_assert(sizeof(*(substring)) == sizeof(*(&clusters[lines[line - 1]])), "sizeof (*(substring)) == sizeof (*(&clusters[lines[line - 1]]))");
        }
        memcpy((substring), (&clusters[lines[line - 1]]), sizeof(*(&clusters[lines[line - 1]])));
    }
    if (line == text->num_lines - 1) {
        substring->length = (int)SDL_strlen(text->text) - substring->offset;
    } else {
        substring->length = clusters[lines[line]].offset - substring->offset;
    }
    for (int i = substring->cluster_index + 1; i < num_clusters; ++i) {
        TTF_SubString *cluster = &clusters[i];
        if (cluster->line_index != line) {
            break;
        }
        substring->flags |= cluster->flags;
        SDL_GetRectUnion(&substring->rect, &cluster->rect, &substring->rect);
    }
    return 1;
}

TTF_SubString **TTF_GetTextSubStringsForRange(TTF_Text *text, int offset, int length, int *count)
{
    if (count) {
        *count = 0;
    }

    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return ((void *)0);
    };

    if (!TTF_UpdateText(text)) {
        return ((void *)0);
    }

    if (text->internal->num_clusters == 0) {
        TTF_SubString **result = (TTF_SubString **)SDL_malloc(2 * sizeof(*result) + 1 * sizeof(**result));
        if (!result) {
            return ((void *)0);
        }

        TTF_SubString *substring = (TTF_SubString *)(result + 2);
        result[0] = substring;
        result[1] = ((void *)0);
        memset((substring), 0, sizeof(*(substring)));
        substring->rect.h = text->internal->layout->font_height;

        if (count) {
            *count = 1;
        }
        return result;
    }

    if (length < 0) {
        length = (int)SDL_strlen(text->text);
    }

    TTF_SubString substring1, substring2;
    int offset1 = offset;
    int offset2 = offset + length;
    if (!TTF_GetTextSubString(text, offset1, &substring1) ||
        !TTF_GetTextSubString(text, offset2, &substring2) ||
        !TTF_GetPreviousTextSubString(text, &substring2, &substring2)) {
        return ((void *)0);
    }

    if (substring1.cluster_index == substring2.cluster_index) {
        TTF_SubString **result = (TTF_SubString **)SDL_malloc(2 * sizeof(*result) + 1 * sizeof(**result));
        if (!result) {
            return ((void *)0);
        }

        TTF_SubString *substring = (TTF_SubString *)(result + 2);
        result[0] = substring;
        result[1] = ((void *)0);
        {
            _Static_assert(sizeof(*(substring)) == sizeof(*(&substring1)), "sizeof (*(substring)) == sizeof (*(&substring1))");
        }
        memcpy((substring), (&substring1), sizeof(*(&substring1)));
        if (length == 0) {
            substring->length = 0;
            if ((substring->flags & 0x000000FF) != TTF_DIRECTION_RTL) {
                substring->rect.x += substring->rect.w;
            }
            substring->rect.w = 0;
        }

        if (count) {
            *count = 1;
        }
        return result;
    }

    TTF_SubString *clusters = text->internal->clusters;
    int num_results = 1;
    TTF_SubString *last = &clusters[substring1.cluster_index];
    for (int i = substring1.cluster_index + 1; i <= substring2.cluster_index; ++i) {
        TTF_SubString *cluster = &clusters[i];
        if (cluster->line_index != last->line_index) {
            ++num_results;
            last = cluster;
        }
    }

    TTF_SubString **result = (TTF_SubString **)SDL_malloc((num_results + 1) * sizeof(*result) + num_results * sizeof(**result));
    if (!result) {
        return ((void *)0);
    }

    TTF_SubString *substrings = (TTF_SubString *)(result + num_results + 1);
    for (int i = 0; i < num_results; ++i) {
        result[i] = &substrings[i];
    }
    result[num_results] = ((void *)0);

    TTF_SubString *substring = substrings;
    {
        _Static_assert(sizeof(*(substring)) == sizeof(*(&substring1)), "sizeof (*(substring)) == sizeof (*(&substring1))");
    }
    memcpy((substring), (&substring1), sizeof(*(&substring1)));
    for (int i = substring1.cluster_index + 1; i <= substring2.cluster_index; ++i) {
        TTF_SubString *cluster = &clusters[i];
        if (cluster->line_index == substring->line_index) {
            substring->flags |= cluster->flags;
            SDL_GetRectUnion(&substring->rect, &cluster->rect, &substring->rect);
        } else {
            substring->length = (cluster->offset - substring->offset);
            ++substring;
            {
                _Static_assert(sizeof(*(substring)) == sizeof(*(cluster)), "sizeof (*(substring)) == sizeof (*(cluster))");
            }
            memcpy((substring), (cluster), sizeof(*(cluster)));
        }
    }
    substring->length = (substring2.offset - substring->offset) + substring2.length;

    if (count) {
        *count = num_results;
    }
    return result;
}

_Bool TTF_GetTextSubStringForPoint(TTF_Text *text, int x, int y, TTF_SubString *substring)
{
    if (substring) {
        memset((substring), 0, sizeof(*(substring)));
    }

    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };
    if (!(substring)) {
        SDL_SetError("Parameter '%s' is invalid", ("substring"));
        return 0;
    };

    if (!TTF_UpdateText(text)) {
        return 0;
    }

    if (text->internal->num_clusters == 0) {
        substring->rect.h = text->internal->layout->font_height;
        return 1;
    }

    TTF_Direction direction = TTF_GetTextDirection(text);
    _Bool prefer_row = (direction != TTF_DIRECTION_TTB && direction != TTF_DIRECTION_BTT);
    const TTF_SubString *closest = ((void *)0);
    int closest_dist = 2147483647;
    int wrap_cost = 100;
    SDL_Point point = { x, y };
    for (int i = 0; i < text->internal->num_clusters; ++i) {
        const TTF_SubString *cluster = &text->internal->clusters[i];
        int center_x = (cluster->rect.x + cluster->rect.w / 2);
        int center_y = (cluster->rect.y + cluster->rect.h / 2);
        int dist;

        if (cluster->flags & 0x00000400) {
            if (prefer_row && (cluster->flags & 0x00000400)) {
                _Bool line_ends_left = ((cluster->flags & 0x000000FF) == TTF_DIRECTION_RTL);
                if ((y >= cluster->rect.y && y < (cluster->rect.y + cluster->rect.h)) &&
                    ((!line_ends_left && x >= cluster->rect.x) ||
                     (line_ends_left && x <= cluster->rect.x))) {
                    closest = cluster;
                    break;
                }
            }
        } else {
            if (prefer_row && (cluster->flags & 0x00000200)) {
                _Bool line_ends_left = ((cluster->flags & 0x000000FF) == TTF_DIRECTION_RTL);
                if ((y >= cluster->rect.y && y < (cluster->rect.y + cluster->rect.h)) &&
                    ((!line_ends_left && x < cluster->rect.x) ||
                     (line_ends_left && x > cluster->rect.x))) {
                    closest = cluster;
                    break;
                }
            }

            if (SDL_PointInRect(&point, &cluster->rect)) {
                closest = cluster;
                break;
            }
        }
        if (prefer_row) {
            dist = SDL_abs(center_y - y) * wrap_cost + SDL_abs(center_x - x);
        } else {
            dist = SDL_abs(center_x - x) * wrap_cost + SDL_abs(center_y - y);
        }
        if (dist < closest_dist) {
            closest = cluster;
            closest_dist = dist;
        }
    }

    if (closest) {
        {
            _Static_assert(sizeof(*(substring)) == sizeof(*(closest)), "sizeof (*(substring)) == sizeof (*(closest))");
        }
        memcpy((substring), (closest), sizeof(*(closest)));
    }
    return 1;
}

_Bool TTF_GetPreviousTextSubString(TTF_Text *text, const TTF_SubString *substring, TTF_SubString *previous)
{
    if (previous && previous != substring) {
        memset((previous), 0, sizeof(*(previous)));
    }

    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };
    if (!(substring)) {
        SDL_SetError("Parameter '%s' is invalid", ("substring"));
        return 0;
    };
    if (!(previous)) {
        SDL_SetError("Parameter '%s' is invalid", ("previous"));
        return 0;
    };

    int num_clusters = text->internal->num_clusters;
    const TTF_SubString *clusters = text->internal->clusters;
    if (substring->cluster_index < 0 || substring->cluster_index >= num_clusters) {
        return SDL_SetError("Cluster index out of range");
    }
    if (substring->offset != clusters[substring->cluster_index].offset) {
        return SDL_SetError("Stale substring");
    }
    if (substring->cluster_index == 0) {
        {
            _Static_assert(sizeof(*(previous)) == sizeof(*(&clusters[0])), "sizeof (*(previous)) == sizeof (*(&clusters[0]))");
        }
        memcpy((previous), (&clusters[0]), sizeof(*(&clusters[0])));
        previous->length = 0;
        previous->rect.w = 0;
    } else {
        {
            _Static_assert(sizeof(*(previous)) == sizeof(*(&clusters[substring->cluster_index - 1])), "sizeof (*(previous)) == sizeof (*(&clusters[substring->cluster_index - 1]))");
        }
        memcpy((previous), (&clusters[substring->cluster_index - 1]), sizeof(*(&clusters[substring->cluster_index - 1])));
    }
    return 1;
}

_Bool TTF_GetNextTextSubString(TTF_Text *text, const TTF_SubString *substring, TTF_SubString *next)
{
    if (next && next != substring) {
        memset((next), 0, sizeof(*(next)));
    }

    if (!(text)) {
        SDL_SetError("Parameter '%s' is invalid", ("text"));
        return 0;
    };
    if (!(substring)) {
        SDL_SetError("Parameter '%s' is invalid", ("substring"));
        return 0;
    };
    if (!(next)) {
        SDL_SetError("Parameter '%s' is invalid", ("next"));
        return 0;
    };

    int num_clusters = text->internal->num_clusters;
    const TTF_SubString *clusters = text->internal->clusters;
    if (substring->cluster_index < 0 || substring->cluster_index >= num_clusters) {
        return SDL_SetError("Cluster index out of range");
    }
    if (substring->offset != clusters[substring->cluster_index].offset) {
        return SDL_SetError("Stale substring");
    }
    if (substring->cluster_index == (num_clusters - 1)) {
        {
            _Static_assert(sizeof(*(next)) == sizeof(*(&clusters[num_clusters - 1])), "sizeof (*(next)) == sizeof (*(&clusters[num_clusters - 1]))");
        }
        memcpy((next), (&clusters[num_clusters - 1]), sizeof(*(&clusters[num_clusters - 1])));
    } else {
        {
            _Static_assert(sizeof(*(next)) == sizeof(*(&clusters[substring->cluster_index + 1])), "sizeof (*(next)) == sizeof (*(&clusters[substring->cluster_index + 1]))");
        }
        memcpy((next), (&clusters[substring->cluster_index + 1]), sizeof(*(&clusters[substring->cluster_index + 1])));
    }
    return 1;
}

_Bool TTF_UpdateText(TTF_Text *text)
{
    if (text->internal->needs_layout_update) {
        DestroyEngineText(text);
        text->internal->needs_engine_update = 1;

        if (text->internal->ops) {
            SDL_free(text->internal->ops);
            text->internal->ops = ((void *)0);
            text->internal->num_ops = 0;
        }
        if (text->internal->clusters) {
            SDL_free(text->internal->clusters);
            text->internal->clusters = ((void *)0);
            text->internal->num_clusters = 0;
        }
        if (text->internal->layout->lines) {
            SDL_free(text->internal->layout->lines);
            text->internal->layout->lines = ((void *)0);
        }
        text->num_lines = 0;
        text->internal->w = 0;
        text->internal->h = 0;

        if (text->internal->font && text->text) {
            if (!LayoutText(text)) {
                return 0;
            }
        }

        text->internal->needs_layout_update = 0;
    }

    if (text->internal->needs_engine_update) {
        if (!CreateEngineText(text)) {
            return 0;
        }

        text->internal->needs_engine_update = 0;
    }

    return 1;
}

void TTF_DestroyText(TTF_Text *text)
{
    if (!text) {
        return;
    }

    DestroyEngineText(text);

    if (text->internal->ops) {
        SDL_free(text->internal->ops);
    }
    if (text->internal->clusters) {
        SDL_free(text->internal->clusters);
    }
    if (text->internal->layout->lines) {
        SDL_free(text->internal->layout->lines);
    }

    TTF_SetTextFont(text, ((void *)0));
    SDL_DestroyProperties(text->internal->props);
    SDL_free(text->text);
    SDL_free(text);
}

_Bool TTF_SetFontSize(TTF_Font *font, float ptsize)
{
    return TTF_SetFontSizeDPI(font, ptsize, 0, 0);
}

_Bool TTF_SetFontSizeDPI(TTF_Font *font, float ptsize, int hdpi, int vdpi)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    if (ptsize <= 0.0f) {
        return SDL_SetError("Parameter '%s' is invalid", ("ptsize"));
    }

    if (hdpi <= 0 && vdpi <= 0) {
        hdpi = font->hdpi;
        vdpi = font->vdpi;
    } else if (hdpi <= 0) {
        hdpi = vdpi;
    } else if (vdpi <= 0) {
        vdpi = hdpi;
    }

    if (ptsize == font->ptsize && hdpi == font->hdpi && vdpi == font->vdpi) {
        return 1;
    }

    FT_Face face = font->face;
    FT_Error error;

    if ((!!((face)->face_flags & (1L << 0)))) {

        error = FT_Set_Char_Size(face, 0, (int)SDL_roundf(ptsize * 64), (FT_UInt)hdpi, (FT_UInt)vdpi);
        if (error) {
            return SDL_SetError("Couldn't set font size");
        }
    } else {

        if (face->num_fixed_sizes <= 0) {
            return SDL_SetError("Couldn't select size : no num_fixed_sizes");
        }

        int index = (int)ptsize;
        index = (((index) > (0)) ? (index) : (0));
        index = (((index) < (face->num_fixed_sizes - 1)) ? (index) : (face->num_fixed_sizes - 1));

        error = FT_Select_Size(face, index);
        if (error) {
            return SDL_SetError("Couldn't select size");
        }
    }

    TTF_InitFontMetrics(font);

    font->ptsize = ptsize;
    font->hdpi = hdpi;
    font->vdpi = vdpi;

    Flush_Cache(font);
    UpdateFontText(font, ((void *)0));

    return 1;
}

float TTF_GetFontSize(TTF_Font *font)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0.0f;
    };

    return font->ptsize;
}

_Bool TTF_GetFontDPI(TTF_Font *font, int *hdpi, int *vdpi)
{
    if (hdpi) {
        *hdpi = 0;
    }
    if (vdpi) {
        *vdpi = 0;
    }

    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    if (hdpi) {
        *hdpi = font->hdpi;
    }
    if (vdpi) {
        *vdpi = font->vdpi;
    }
    return 1;
}

void TTF_SetFontStyle(TTF_Font *font, TTF_FontStyleFlags style)
{
    TTF_FontStyleFlags prev_style;
    TTF_FontStyleFlags face_style;

    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return;
    };

    prev_style = font->style;
    face_style = (TTF_FontStyleFlags)font->face->style_flags;

    if (face_style & (1 << 1)) {
        style &= ~0x01;
    }
    if (face_style & (1 << 0)) {
        style &= ~0x02;
    }

    if (font->style == style) {
        return;
    }

    font->style = style;

    TTF_InitFontMetrics(font);

    if ((font->style | (0x04 | 0x08)) != (prev_style | (0x04 | 0x08))) {
        Flush_Cache(font);
    }
    UpdateFontText(font, ((void *)0));
}

TTF_FontStyleFlags TTF_GetFontStyle(const TTF_Font *font)
{
    int style;
    long face_style;

    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return -1;
    };

    style = font->style;
    face_style = font->face->style_flags;

    if (face_style & (1 << 1)) {
        style |= 0x01;
    }
    if (face_style & (1 << 0)) {
        style |= 0x02;
    }

    return style;
}

_Bool TTF_SetFontOutline(TTF_Font *font, int outline)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    outline = (((0) > (outline)) ? (0) : (outline));

    if (outline == font->outline) {
        return 1;
    }

    if (outline > 0) {
        if (!font->stroker) {
            FT_Error error;

            SDL_LockMutex(TTF_state.lock);
            error = FT_Stroker_New(TTF_state.library, &font->stroker);
            SDL_UnlockMutex(TTF_state.lock);
            if (error) {
                return SDL_SetError("Couldn't create font stroker");
            }
        }

        SDL_PropertiesID props = TTF_GetFontProperties(font);
        FT_Stroker_LineCap line_cap = (FT_Stroker_LineCap)SDL_GetNumberProperty(props, "SDL_ttf.font.outline.line_cap", FT_STROKER_LINECAP_ROUND);
        FT_Stroker_LineJoin line_join = (FT_Stroker_LineJoin)SDL_GetNumberProperty(props, "SDL_ttf.font.outline.line_join", FT_STROKER_LINEJOIN_ROUND);
        FT_Fixed miter_limit = (FT_Fixed)SDL_GetNumberProperty(props, "SDL_ttf.font.outline.miter_limit", 0);
        FT_Stroker_Set(font->stroker, outline * 64, line_cap, line_join, miter_limit);
    } else {
        if (font->stroker) {
            FT_Stroker_Done(font->stroker);
            font->stroker = ((void *)0);
        }
    }

    font->outline = outline;

    TTF_InitFontMetrics(font);
    Flush_Cache(font);
    UpdateFontText(font, ((void *)0));

    return 1;
}

int TTF_GetFontOutline(const TTF_Font *font)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return -1;
    };

    return font->outline;
}

void TTF_SetFontHinting(TTF_Font *font, TTF_HintingFlags hinting)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return;
    };

    int ft_load_target;
    if (hinting == TTF_HINTING_LIGHT || hinting == TTF_HINTING_LIGHT_SUBPIXEL) {
        ft_load_target = ((FT_Int32)((FT_RENDER_MODE_LIGHT) & 15) << 16);
    } else if (hinting == TTF_HINTING_MONO) {
        ft_load_target = ((FT_Int32)((FT_RENDER_MODE_MONO) & 15) << 16);
    } else if (hinting == TTF_HINTING_NONE) {
        ft_load_target = (1L << 1);
    } else {
        ft_load_target = ((FT_Int32)((FT_RENDER_MODE_NORMAL) & 15) << 16);
    }

    int render_subpixel = (hinting == TTF_HINTING_LIGHT_SUBPIXEL) ? 1 : 0;

    if (ft_load_target == font->ft_load_target && render_subpixel == font->render_subpixel) {
        return;
    }

    font->ft_load_target = ft_load_target;

    Flush_Cache(font);
    UpdateFontText(font, ((void *)0));
}

TTF_HintingFlags TTF_GetFontHinting(const TTF_Font *font)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return TTF_HINTING_INVALID;
    };

    if (font->ft_load_target == ((FT_Int32)((FT_RENDER_MODE_LIGHT) & 15) << 16)) {
        if (font->render_subpixel == 0) {
            return TTF_HINTING_LIGHT;
        } else {
            return TTF_HINTING_LIGHT_SUBPIXEL;
        }
    } else if (font->ft_load_target == ((FT_Int32)((FT_RENDER_MODE_MONO) & 15) << 16)) {
        return TTF_HINTING_MONO;
    } else if (font->ft_load_target == (1L << 1)) {
        return TTF_HINTING_NONE;
    }
    return TTF_HINTING_NORMAL;
}

_Bool TTF_SetFontSDF(TTF_Font *font, _Bool enabled)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    if (font->render_sdf != enabled) {
        font->render_sdf = enabled;
        Flush_Cache(font);
        UpdateFontText(font, ((void *)0));
    }
    return 1;
}

_Bool TTF_GetFontSDF(const TTF_Font *font)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    return font->render_sdf;
}

int TTF_GetFontWeight(const TTF_Font *font)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return -1;
    };

    return font->weight;
}

void TTF_SetFontWrapAlignment(TTF_Font *font, TTF_HorizontalAlignment align)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return;
    };

    if (align == font->horizontal_align) {
        return;
    }

    switch (align) {
    case TTF_HORIZONTAL_ALIGN_LEFT:
    case TTF_HORIZONTAL_ALIGN_CENTER:
    case TTF_HORIZONTAL_ALIGN_RIGHT:
        font->horizontal_align = align;
        break;
    default:

        break;
    }
    UpdateFontText(font, ((void *)0));
}

TTF_HorizontalAlignment TTF_GetFontWrapAlignment(const TTF_Font *font)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return TTF_HORIZONTAL_ALIGN_INVALID;
    };

    return font->horizontal_align;
}

int TTF_GetFontHeight(const TTF_Font *font)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    return font->height;
}

int TTF_GetFontAscent(const TTF_Font *font)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    return font->ascent + 2 * font->outline;
}

int TTF_GetFontDescent(const TTF_Font *font)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    return font->descent;
}

void TTF_SetFontLineSkip(TTF_Font *font, int lineskip)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return;
    };

    if (lineskip == font->lineskip) {
        return;
    }

    font->lineskip = lineskip;
    UpdateFontText(font, ((void *)0));
}

int TTF_GetFontLineSkip(const TTF_Font *font)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    return font->lineskip;
}

void TTF_SetFontKerning(TTF_Font *font, _Bool enabled)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return;
    };

    if (enabled == font->enable_kerning) {
        return;
    }

    font->enable_kerning = enabled;

    font->use_kerning = enabled && (!!((font->face)->face_flags & (1L << 6)));

    UpdateFontText(font, ((void *)0));
}

_Bool TTF_GetFontKerning(const TTF_Font *font)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    return font->enable_kerning;
}

int TTF_GetNumFontFaces(const TTF_Font *font)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    return (int)font->face->num_faces;
}

_Bool TTF_FontIsFixedWidth(const TTF_Font *font)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    return (!!((font->face)->face_flags & (1L << 2)));
}

_Bool TTF_FontIsScalable(const TTF_Font *font)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    return (!!((font->face)->face_flags & (1L << 0)));
}

const char *TTF_GetFontFamilyName(const TTF_Font *font)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return ((void *)0);
    };

    return font->face->family_name;
}

const char *TTF_GetFontStyleName(const TTF_Font *font)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return ((void *)0);
    };

    return font->face->style_name;
}

_Bool TTF_SetFontDirection(TTF_Font *font, TTF_Direction direction)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    if (direction == font->direction) {
        return 1;
    }

    if (direction != TTF_DIRECTION_INVALID && direction != TTF_DIRECTION_LTR) {
        return SDL_SetError("That operation is not supported");
    }

    font->direction = direction;
    UpdateFontText(font, ((void *)0));
    return 1;
}

TTF_Direction TTF_GetFontDirection(TTF_Font *font)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return TTF_DIRECTION_INVALID;
    };

    return font->direction;
}

Uint32 TTF_StringToTag(const char *string)
{
    Uint8 bytes[4] = { 0, 0, 0, 0 };

    if (string) {
        for (size_t i = 0; i < 4 && string[i]; ++i) {
            bytes[i] = (Uint8)string[i];
        }
    }

    Uint32 tag = ((Uint32)bytes[0] << 24) |
                 ((Uint32)bytes[1] << 16) |
                 ((Uint32)bytes[2] << 8) |
                 ((Uint32)bytes[3] << 0);
    return tag;
}

void TTF_TagToString(Uint32 tag, char *string, size_t size)
{
    if (!string || !size) {
        return;
    }

    for (size_t i = 0; i < 4 && i < size; ++i) {
        string[i] = (char)(Uint8)(tag >> 24);
        tag <<= 8;
    }
    if (size > 4) {
        string[4] = '\0';
    }
}

_Bool TTF_SetFontScript(TTF_Font *font, Uint32 script)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    (void)script;
    return SDL_SetError("That operation is not supported");
}

Uint32 TTF_GetFontScript(TTF_Font *font)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    return font->script;
}

Uint32 TTF_GetGlyphScript(Uint32 ch)
{
    Uint32 script = 0;

    (void)ch;

    if (script == 0) {
        SDL_SetError("Unknown script");
    }
    return script;
}

_Bool TTF_SetFontLanguage(TTF_Font *font, const char *language_bcp47)
{
    if (!(font)) {
        SDL_SetError("Parameter '%s' is invalid", ("font"));
        return 0;
    };

    (void)language_bcp47;
    return SDL_SetError("That operation is not supported");
}

static _Bool RemoveOneTextCallback(void *userdata, const SDL_HashTable *table, const void *key, const void *value)
{
    TTF_Font *font = (TTF_Font *)userdata;
    TTF_Text *text = (TTF_Text *)key;
    (void)table;
    (void)value;
    if (text->internal->font == font) {
        TTF_SetTextFont(text, ((void *)0));
    } else {
        RemoveFontTextReference(font, text);
    }
    return 0;
}

void TTF_CloseFont(TTF_Font *font)
{
    if (!font) {
        return;
    }

    if (font->text) {
        while (!TTF_HashTableEmpty(font->text)) {
            TTF_IterateHashTable(font->text, RemoveOneTextCallback, font);
        }
        TTF_DestroyHashTable(font->text);
        font->text = ((void *)0);
    }
    Flush_Cache(font);

    TTF_ClearFallbackFonts(font);
    while (font->fallback_for) {
        TTF_RemoveFallbackFont(font->fallback_for->font, font);
    }

    TTF_DestroyHashTable(font->glyphs);
    TTF_DestroyHashTable(font->glyph_indices);

    if (font->props) {
        SDL_DestroyProperties(font->props);
    }
    if (font->face) {
        FT_Done_Face(font->face);
    }
    if (font->stroker) {
        FT_Stroker_Done(font->stroker);
    }
    if (font->args.stream) {
        SDL_free(font->args.stream);
    }
    if (font->closeio) {
        TTF_CloseFontSource(font->src);
    }
    SDL_free(font->name);
    SDL_free(font);
}

void TTF_Quit(void)
{
    if (!SDL_ShouldQuit(&TTF_state.init)) {
        return;
    }

    if (!(SDL_AddAtomicInt(&TTF_state.refcount, -1) == 1)) {
        SDL_SetInitialized(&TTF_state.init, 1);
        return;
    }

    if (TTF_state.library) {
        FT_Done_FreeType(TTF_state.library);
        TTF_state.library = ((void *)0);
    }

    if (TTF_state.lock) {
        SDL_DestroyMutex(TTF_state.lock);
        TTF_state.lock = ((void *)0);
    }

    SDL_SetInitialized(&TTF_state.init, 0);
}

int TTF_WasInit(void)
{
    return SDL_GetAtomicInt(&TTF_state.refcount);
}
