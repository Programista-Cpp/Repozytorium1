#include <math.h>
#include <iostream>

using namespace std;

namespace mathFunctions
{
  int Signum(auto x)
  {
      if(x > 0) return 1;
      else if(x < 0) return -1;
      else return 0;
  }
  namespace areas
  {
    auto SquareArea(auto a)
    {
      if(long long(a) != a || long double(a) != a || unsigned long long(a) != a)
      {
        cerr<<"Podaj numer! Give number!"<<endl;
        return SquareArea(a);
      } //Wyjatek
     else return a*a;
   auto RectangleArea(auto a, auto b)
   {
     else return a*b;
   }
    }
} //namespace funkcjeMatematyczne
