
#include<iostream>

#define     _USE_MATH_DEFINES

#include<math.h>

#define 	TORADIANS(a)	( a * M_PI / 180.0 )





//	 class type definition
class Point
{
 private:
	//	class data members
	double	m_x;
	double	m_y;
	double	m_z;

 public:
    // class member function

	//	default construct
	Point() : m_x(0.0), m_y(0.0), m_z(0.0)
	{

	}

	// Parameterized Constructor
	Point(double init_X, double init_Y, double init_Z) : m_x(init_X), m_y(init_Y), m_z(init_Z)
	{
		
	}

	// destructor
	~Point()
	{
		m_x = 0.0;
		m_y = 0.0;
		m_z = 0.0;
	}

	//	 setters functions
	void setX(double m_x)
	{
		this->m_x = m_x;
	}

	void setY(double m_y)
	{
		this->m_y = m_y;
	}

	void setZ(double m_z)
	{
		this->m_z = m_z;
	}

	//	Getters
	double getX() 
    { 
        return(m_x); 
    }

	double getY() 
    { 
        return(m_y); 
    }

	double getZ()
    { 
        return(m_z); 
    }

	//	 print Function
	void	print()
	{
		std::cout<< "(" << m_x << ", " << m_y << ", " << m_z << ")" <<std::endl;
	}

    void translate(double delta_x, double delta_y, double delta_z)
	{
		m_x = m_x + delta_x;
		m_y = m_y + delta_y;
		m_z = m_z + delta_z;
	}

	//	Rotation
	void rotate_X(double angle)
	{
	
	}

	void rotate_Y(double angle)
	{
	
	}

	void rotate_Z(double angle)
	{
		double	old_x = m_x;
		double	old_y = m_y;

		m_x = old_x * cosf(TORADIANS(angle)) - old_y * sinf(TORADIANS(angle));
		m_y = old_x * sinf(TORADIANS(angle)) + old_y * cosf(TORADIANS(angle));
	
		m_x = ceil(m_x);
		m_y = ceil(m_y);
	}
};




class Line
{
 private:
	Point	m_v1, m_v2;	         //	vertex v1 and v2 

 public:

	// Constructor
	Line() : m_v1(Point(0.0, 0.0, 0.0)), m_v2(Point(0.0, 0.0, 0.0))
	{

	}

	// Parameterized Constructor
	Line( double x1, double y1, double z1, double x2, double y2, double z2 ) :
	m_v1(Point(x1, y1, z1)), m_v2(Point(x2, y2, z1))
	{

	}

    // destructor 
	~Line()
	{
	
	}

	//	 translate
	void translate(double delta_x, double delta_y, double delta_z)
	{
		m_v1.translate(delta_x, delta_y, delta_z);
		m_v2.translate(delta_x, delta_y, delta_z);
	}

	void print()
	{
		std::cout<< "line: " <<std::endl;
		std::cout<< "  vertex1 = " ;
        m_v1.print();

		std::cout << "  vertex2 = ";
		m_v2.print();

		std::cout<<std::endl;
	}
};


//    ENTRY POINT OF MAIN FUNCTION
int main(int argc, char** argv, char** envp)
{
   Line	l1( 5, 5, 0,  10, 20, 0);          //   l1(v1, v2)

   l1.print();
   l1.translate(12, -5, 0);
   l1.print();

   exit(EXIT_SUCCESS);
}

