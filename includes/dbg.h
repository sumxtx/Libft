// Zed's Debug Macros. Thanks Zed for this debug Macros

#ifndef __dgb_h__
#define __dgb_h__

# include <stdio.h>
# include <errno.h>
# include <string.h>
# include <stdarg.h>
# include <assert.h>
# include "colors.h"

  
# define pcolor_error(M, ...) fprintf(stdout, "\n%s [ERROR]  %sin file:%s%s%s:%d " M "\n",BRED,NC,CYN,__FILE__ ,NC,__LINE__,##__VA_ARGS__)
# define  pcolor_warn(M, ...) fprintf(stdout, "\n%s [WARN]   %sin file:%s%s%s:%d " M "\n",YEL,NC,CYN,__FILE__ ,NC,__LINE__,##__VA_ARGS__)
# define    pcolor_ok(M, ...) fprintf(stdout, "\n%s [PASSED] %sin file:%s%s%s:%d " M "\n",BGRN,NC,CYN,__FILE__ ,NC,__LINE__,##__VA_ARGS__)

# ifdef NDEBUG
# define debug(M, ...)
# else
# define debug(M, ...) fprintf(stderr, "DEBUG: %s:%d: " M "\n",\
    __FILE__,__LINE__,##__VA_ARGS__)
#endif

#define clean_errno() (errno == 0 ? "None" : strerror(errno))

#define log_err(M,...) fprintf(stderr,\
    "[ERROR] (%s:%d: errno: %s) " M "\n", __FILE__, __LINE__,\
    clean_errno(),##__VA_ARGS__)

#define log_warn(M,...) fprintf(stderr,\
    "[WARN] (%s:%d: errno: %s) " M "\n", \
    __FILE__,__LINE__,clean_errno(),##__VA_ARGS__)

#define log_info(M,...)fprintf(stderr,"[INFO](%s:%d) " M "\n",\
    __FILE__,__LINE__,##__VA_ARGS__)

#define check(A,M,...) if(!(A)) {\
  log_err(M,##__VA_ARGS__); errno=0; goto error; }

#define sentinel(M, ...) { log_err(M, ##__VA_ARGS__);\
  errno=0; goto error; }

#define check_mem(A) check((A), "Out of memory.")

#define check_debug(A, M, ...) if(!(A)) { debug(M, ##__VA_ARGS__);\
  errno=0; goto error; }


#endif
