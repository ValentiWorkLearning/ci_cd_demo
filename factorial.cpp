#include "factorial.h"
#include <iostream>

namespace
{
  void printer()
  {
    std::cout<<"Hello world" << 42<< std::endl;
  }
}
namespace math
{
 int factorial(int n)
 {
   if (n==0)
   {
     return 1;
   }
   
   return n*factorial(n-1);
 }
}
