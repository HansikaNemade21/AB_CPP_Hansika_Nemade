
#include<iostream>


//  class type definition
class point
{

private:
   //     class data members
   double m_x;
   double m_y;
   double m_z;

public:
   //     class member functions

   //     setter functions
   void SetX(double newX)
   {
       m_x = newX;
   }

   void SetY(double newY)
   {
       m_y = newY;
   }

   void SetZ(double newZ)
   {
       m_z = newZ;
   }
 

   //    getter functions
   double getX(void)
   {
      return(m_x);
   }
   
   double getY(void)
   {
      return(m_y);
   }

   double getZ(void)
   {
      return(m_z);
   }
};

// class object Definition
point p1;


//     Main function
int main(int argc, char** argv, char** envp)
{
    std::cout<< "sizeof(p1) = " << sizeof(p1) <<std::endl;

    p1.SetX(10.34);
    p1.SetY(6.5);
    p1.SetZ(2.93);

    std::cout<< "p1 = (" << p1.getX() << ", " << p1.getY() << ", " << p1.getZ() << ") " <<std::endl;

    exit(EXIT_SUCCESS);
}