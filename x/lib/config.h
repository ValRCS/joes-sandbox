/* Configuration file generated by conf.c program */

#ifndef _Iconfig
#define _Iconfig 1

#define EXTERN extern

/* Uncomment to use TERMINFO database*/
/* #define TERMINFO 1 */

/* Path where main.c tries to open rc file */
#define JOERC "/usr/local/lib/"


/* Uncomment the tty type.  Leave all uncommented for BSD */
#define TTYPOSIX 1
/* #define SYSPOSIX 1*/
/* #define TTYSV 1 */
/* #define SYSSV 1 */

/* Uncomment the directory access type.  Leave all commented for none */
#define DIRENT 1
/* #define SYSDIRENT 1 */
/* #define SYSDIR 1 */
/* #define BSDSYSDIR 1 */

/* Uncomment if we have utime.h */
#define UTIME 1
/* #define SYSUTIME 1 */

#define BITS 8	/* Bits in a byte */
#define ISIZ 4	/* Int size in bytes */
#define SHFT 2	/* Log base 2 of ISIZ */
#define MAXINT 0x7FFFFFFF	/* Largest Int */
#define MAXLONG 0x7FFFFFFF	/* Largest Long */

/* Uncomment the next line if your compiler has trouble with void */
/* #define void int */

#ifndef NULL
#define NULL ((void *)0)
#endif

/* #define AUTOINC 1 */
/* #define ALIGNED 1 */
#define physical(a) ((unsigned long)(a))
#define normalize(a) (a)
#define SEGSIZ 4096
#define PGSIZE 4096
#define LPGSIZE 12
#define ILIMIT (PGSIZE*1024)
#define HTSIZE 2048

char *getenv();
long time();
void *malloc();
void free();
void *calloc();
void *realloc();
int jread();
int jwrite();

#endif
