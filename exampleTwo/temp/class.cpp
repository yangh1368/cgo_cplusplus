#include<iostream>
using namespace std;

#include "class.h"
X::X(int32_t a):m_(a)
{
  cout <<"X:X..." << endl;
}
X::~X()
{
  cout << "X ~X" << endl;
}

void X::Plus()
{
  m_ += 1;
}

int32_t X::Func(int32_t b)
{
   return m_ + b;
}
