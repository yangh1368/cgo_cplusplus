#ifndef C_WRAPPER_H_
#define C_WRAPPER_H_

#include <stdint.h>

typedef struct _X_t 
{
   int unused;

}X_t;

#ifdef __cplusplus
#define EXTERN_C extern "C"
#else
#define EXTERN_C
#endif

EXTERN_C X_t  *NewX(int32_t a);
EXTERN_C void Delete(X_t *px);
EXTERN_C void Plus (X_t *px);
EXTERN_C int32_t Func(X_t *px, int32_t b);

#endif

