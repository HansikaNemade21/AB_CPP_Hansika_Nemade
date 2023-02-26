
#include<iostream>

// class type definition
class steel
{
 private:
    // data members
    const double m_ironComposition;
	const double m_nickelComposition;
	const double m_chromiumComposition;

 public:
    // member functions

    // Default constructor
    steel() : m_ironComposition(0.0), m_nickelComposition(0.0), m_chromiumComposition(0.0)
    {

    }

    // parameterized constructor
    steel(double IronComposition, double NickelComposition, double ChromiumComposition) : m_ironComposition(IronComposition),
    m_nickelComposition(NickelComposition), m_chromiumComposition(ChromiumComposition)
    {

    }

    // Getter functions
	double 	GetIron()
    {  
      return(m_ironComposition); 
    }

	double 	GetNickel()
    { 
      return(m_nickelComposition); 
    }

	double 	GetChromium()
    { 
      return(m_chromiumComposition); 
    }

    // destructor
    ~steel()
    {

    }
};


steel stainless_steel(72.0, 8.0, 18.0);
steel other_steel(85, 10, 2);
steel other(89, 22, 32);

// main function
int main(int argc, char** argv, char** envp)
{
    std::cout<<  std::endl;
    std::cout<< "stainless steel : Iron = " 
			 << stainless_steel.GetIron()
			 << "% Nickel = "
			 << stainless_steel.GetNickel()
			 << "% Chromium = "
			 << stainless_steel.GetChromium()
			 << "%"
			 << std::endl;

    std::cout<< std::endl;

    std::cout<< "other steel1 : Iron = " 
			 << other_steel.GetIron()
			 << "% Nickel = "
			 << other_steel.GetNickel()
			 << "% Chromium = "
			 << other_steel.GetChromium()
			 << "%"
			 << std::endl;

    std::cout<< std::endl;

    std::cout<< "other steel2 : Iron = " 
			 << other.GetIron()
			 << "% Nickel = "
			 << other.GetNickel()
			 << "% Chromium = "
			 << other.GetChromium()
			 << "%"
			 << std::endl;

    std::cout<< std::endl;

    exit(EXIT_SUCCESS);
}
