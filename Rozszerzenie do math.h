#ifndefef EXT_MATH_H_DOLACZONE
  #define EXT_MATH_H_DOLACZONE
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
  
    auto ParallelogramArea(auto a, auto h)
      return RectangleArea(a, h);
  } // namespace mf
  namespace Pphysics
  {
    namespace quantMechs
    {
      static unsigned int VoidQuantState; // |0>
      struct quantObj
      {
        unsigned int m; // mass
        unsigned int QuantState; // quantum state, |n>
        unsigned int Creation(quantObj.QuantState&)
          return ++quantObj.QuantState; /// If you want to change quantum sate of void to |2>, you must |0> * (creation operator)^2 (in this func: Creation(Creation(VoidQuantState));
        
        unsigned int Anihilation(quantObj.QuantState&) return --quantObj.QuantState;
        std::ostream& operator<<(std::ostream& quant, quantObj.QuantState) // return |n>
          return std::cout << '|' << quantObj.QuantState << '>';
      }
      unsigned int VoidQuantState = 0;
    } // namespace quantObj
  } // namespace Physics
#endif
