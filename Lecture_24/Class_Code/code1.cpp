
#include<iostream>

// class type definition
class  point
{
 private:
    //  data members
    double m_x;
    double m_y;
    double m_z;

 public:
    //  member functions
    // default constructor
    point()
    {
      std::cout<< "Default constructor called" <<std::endl;

      m_x = 0.0;
      m_y = 0.0;
      m_z = 0.0;
    }

    //parameterized constructor
    point (double init_x, double init_y, double init_z) : m_x(init_x), m_y(init_y), m_z(init_z)
    {
      std::cout<< "parametrized constructor called" <<std::endl;
    }

    // Setter functions
	void SetX(double newX) 
    { 
        this->m_x = newX; 
    }

	void SetY(double newY) 
    { 
        this->m_y = newY; 
    }

	void SetZ(double newZ) 
    { 
        this->m_z = newZ; 
    }

	// Getter functions
	double GetX() 
    { 
        return(m_x); 
    }	

	double GetY() 
    { 
        return(m_y); 
    }

	double GetZ() 
    {
        return(m_z); 
    }

    // destructor
    ~point()
    {
       std::cout<< "x = " << GetX() << " y = " << GetY() << " z = " << GetZ() <<std::endl;
       std::cout<< "Default destructor" <<std::endl;
       std::cout<< std::endl;
    }	

};

point p1;
point p2(10.0, 5.0, -3.6);

// Main function
int main(int argc, char** argv, char** envp)
{
    std::cout<< std::endl;

    std::cout << "p1.x = " << p1.GetX() << std::endl;
    std::cout << "p1.y = " << p1.GetY() << std::endl;
    std::cout << "p1.z = " << p1.GetZ() << std::endl;

    std::cout << std::endl;
 
    std::cout << "p2.x = " << p2.GetX() << std::endl;
    std::cout << "p2.y = " << p2.GetY() << std::endl;
    std::cout << "p2.z = " << p2.GetZ() << std::endl;

    std::cout<< std::endl;

   exit(EXIT_SUCCESS);
}