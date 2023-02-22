

#include<iostream>


//  constants literarls
#define		COLOR_BLACK		(0X00000000)	 
#define		COLOR_RED		(0X00000001)	
#define		COLOR_GREEN		(0X00000002)	
#define		COLOR_BLUE		(0X00000004)	
#define		COLOR_YELLOW	(COLOR_RED | COLOR_GREEN)	
#define		COLOR_CYAN		(COLOR_BLUE | COLOR_GREEN)		
#define		COLOR_MAGENTA	(COLOR_RED | COLOR_BLUE)		
#define		COLOR_WHITE		(0xFFFFFFFF)	

// global vairable
int color = COLOR_BLACK;

int main(int argc, char** argv, char** envp)
{
    std::cout<< "process starts here." <<std::endl;


    switch(color)
    {
        case COLOR_RED:
           std::cout<< "color is red." <<std::endl;
           break;

        case COLOR_GREEN:
           std::cout<< "color is Green" <<std::endl;
           break;

        case COLOR_BLUE:
           std::cout<< "color is Blue" <<std::endl;
           break;

        case COLOR_YELLOW:
           std::cout<< "color is yellow" <<std::endl;
           break;

        case COLOR_CYAN:
           std::cout<< "color is Cyan" <<std::endl;
           break;

        case COLOR_MAGENTA:
           std::cout<< "color is Magenta" <<std::endl;
           break;

        case COLOR_WHITE:
           std::cout<< "color is white" <<std::endl;
           break;

        case COLOR_BLACK:
           std::cout<< "color is black" <<std::endl;
           break;
     
        default:
           std::cout<< "color is not Known" <<std::endl;
           break;
           
    }


    std::cout<< "process ends here." <<std::endl;
    exit(EXIT_SUCCESS);

}