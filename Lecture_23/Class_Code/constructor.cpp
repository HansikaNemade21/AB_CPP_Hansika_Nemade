
#include<iostream>

//299185
// class type definition
class point
{
private:
    double   m_x;
    double   m_y;
    double   m_z;

public:
    //  member function
    //  constructor
    point()
    {
        m_x = 0.0;
        m_y = 0.0;
        m_z = 0.0;

        std::cout<< "point() constructor completed" <<std::endl;
    }

    // setter function
    void SetX(double new_X)
    {
        m_x = new_X;
    }

    void SetY(double new_Y)
    {
        m_y = new_Y;
    }

    void SetZ(double new_Z)
    {
        m_z = new_Z;
    }

    // getter function
    double GetX(void)
    {
        return(m_x);
    }

    double GetY(void)
    {
        return(m_y);
    }

    double GetZ(void)
    {
        return(m_z);
    }

    // destructor = opposite of constructor
    //  1 == ~0
    //  destructor == ~constructor

    // destructor
    ~point()
    {
        std::cout<< "~point() destructor completed" <<std::endl;
    }
};

// global object
point p1;

//   Main function
int main(int argc, char**argv, char**envp)
{
    std::cout<< "Entry point of main function" <<std::endl;
    std::cout<< "p1.x = " << p1.GetX() <<std::endl;
	std::cout<< "p1.y = " << p1.GetY() <<std::endl;
	std::cout<< "p1.z = " << p1.GetZ() <<std::endl;

    exit(EXIT_SUCCESS);
}