#include <iostream>

namespace mf
{
  int Signum(auto x)
  {
      if(x > 0) return 1;
      else if(x < 0) return -1;
      else return 0;
  }

  auto SquareArea(auto a) 
      return a*a;
  
  auto RectangleArea(auto a, auto b) 
      return a*b;
  
  auto TriangleArea(auto a, auto h)
      return (a*h)/2; 
  int ParallelogramArea(auto a, auto h)
    return TriangleArea(a, h);
} //namespace mf
