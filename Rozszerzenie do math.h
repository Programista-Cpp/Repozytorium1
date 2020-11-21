#ifndefef EXT_MATH_H_DOLACZONE
  #define EXT_MATH_H_DOLACZONE
  
  // Math
  namespace Math /// This is an incomplete namespace, do not download this. Version: 0.3
  {
    namespace proto_Vector /// This is a prototype of vector namespace, do not download this file now. Version: 0.1
    {
       // 2D Vector
       struct Vector2
       {
         // Coordinates
         auto x;
         auto y;
         // The core of any Vector here -- std::vector
         std::vector<auto> Vec {x, y};
         // Vectors' properties
         enum DIR{HORIZON, VERTIC, CROSS, null} Direction;
         enum SENSEOFVEC{UP, DOWN, LEFT, RIGHT, UPLEFT, UPRIGHT, DOWNLEFT, DOWNRIGHT, null} VecSense;
         
         // ---------------------------------------------------------------------------------------------
         // Operators
         Vector2& operator-(Vector2& vec, Vector2& vec2)
         {
            Vector2 vec3;
            vec3.x = vec.x - vec2.x;
            vec3.y = vec.y - vec2.y;
            return vec3;
         }
         Vector2& operator+(Vector2& vec, Vector2& vec2)
         {
            Vector2 vec3;
            vec3.x = vec.x + vec2.x;
            vec3.y = vec.y + vec2.y;
            return vec3;
         }
         Vector2& operator*(Vector2& vec, Vector2& vec2)
         {
            Vector2 vec3;
            vec3.x = vec.x * vec2.x;
            vec3.y = vec.y * vec2.y;
            return vec3;
         }
         Vector2& operator/(Vector2& vec, Vector2& vec2)
         {
            Vector2 vec3;
            vec3.x = vec.x / vec2.x;
            vec3.y = vec.y / vec2.y;
            return vec3;
         }
         Vector2& operator==(Vector2& vec, Vector2& vec2)
         {
            if((vec.x == vec2.x) && (vec.y == vec2.y) && (vec.DIR == vec2.DIR) && (vec.SENSEOFVECTOR == vec2.SENSEOFVECTOR))
                 return true;
            else return false;
         }
         Vector2& operator!=(Vector2& vec, Vector2& vec2)
         {
            if((vec.x != vec2.x) || (vec.y != vec2.y) || (vec.DIR != vec2.DIR) || (vec.SENSEOFVECTOR != vec2.SENSEOFVECTOR))
                 return true;
            else return false;
         }
       }
    }
    namespace beta_mathFuncs /// This is an incomplete namespace, do not download this. Version: 0.5
    {
        int Signum(auto x)
        {
             if(x > 0) return 1;
             else if(x < 0) return -1;
             else return 0;
        }
 
        auto SquareArea(auto a)
        {
              return a * a;
        }
    
        auto RectangleArea(auto a, auto b) 
        {
            return a * b;
        }
     
        auto TriangleArea(auto a, auto h)
        {
            return (a * h) / 2; 
        }
     
        auto ParallelogramArea(auto a, auto h)
        {
            return RectangleArea(a, h);
        }
    } // namespace mathFuncs
  } // namespace Math
  
  //=======================================================================================
  
  // Physics
  namespace alpha_Physics /// This is an incomplete namespace, do not download this. Version: 0.2
  {
    namespace proto_quantMechs /// This is a prototype of quantum mechanics namespace, do not download this. Version: 0.1.5
    {
      // Quantum Constants
      static unsigned int VoidQuantState; // |0>
      
      // Quantum Objects
      struct quantObj
      {
        unsigned int m; // mass
        unsigned int QuantState; // quantum state, |n>
        unsigned int Creation(quantObj.QuantState&)
          return ++quantObj.QuantState; /// If you want to change quantum state of void to |2>, you must |0> * (creation operator^2) (in this func: Creation(Creation(VoidQuantState));
        
        unsigned int Anihilation(quantObj.QuantState&)
          return --quantObj.QuantState;
        
        //--------------------------------------------------------------------------------
        // Operators
        
        std::ostream& operator<<(std::ostream& quant, quantObj.QuantState) // returns |n>
          return quant << '|' << quantObj.QuantState << '>';
      }
      unsigned int VoidQuantState = 0;
    } // namespace quantObj
  } // namespace Physics
#endif
