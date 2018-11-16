#include "c_wrapper.h"
#include "class.h"

X_t *NewX(int32_t a)
{
  X *px = new X(a);
  return (X_t*)px;
}

void Delete(X_t *px)
{
  X *p = (X*)px;
  delete p;
}
void Plus (X_t *px)
{
  ((X*)px)->Plus();
}
int32_t Func(X_t *px, int32_t b)
{
  return ((X*)px)->Func(b);
}

