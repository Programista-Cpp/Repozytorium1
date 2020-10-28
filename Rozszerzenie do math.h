#include <math.h>
#include <iostream>

using namespace std;

namespace mathFunctions
{
  int Signum(auto x)
  {
    if(static_cast<long long>(x) != x || static_cast<long double>(x) != x || static_cast<unsigned long long>(x) != x)
    {
      cerr<<"Podaj numer! Give number!"<<endl;
      return Signum(x);
    } //Wyjatek
    else
    {
      if(x > 0) return 1;
      else if(x < 0) return -1;
      else return 0;
    }
  }
  auto SquareArea(auto a)
  {
    if(static_cast<long long>(a) != a || static_cast<long double>(a) != a || static_cast<unsigned long long>(a) != a)
    {
      cerr<<"Podaj numer! Give number!"<<endl;
      return SquareArea(a);
    } //Wyjatek
    else return pow(a,2); //From math.h
  auto RectangleArea(auto a, auto b)
  {
    if(static_cast<long long>(a) != a || static_cast<long double>(a) != a || static_cast<unsigned long long>(a) != a ||
       static_cast<long long>(b) != b || static_cast<long double>(b) != b || static_cast<unsigned long long>(b) != b)
    {
      cerr<<"Podaj numer/numery! Give nmber/numbers!"<<endl;
      return RectangleArea(a, b);
    } //Wyjatek
    else return a*b;
  }
} //namespace funkcjeMatematyczne
