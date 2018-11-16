#ifndef CGO_CPPGO_CLASS_H_
#define CGO_CPPGO_CLASS_H_

#include <stdint.h>

class X 
{
public:
   X(int32_t a);
   ~X();
   void Plus();
   int32_t Func(int32_t b);
 private: 
   int32_t m_;
};
#endif
