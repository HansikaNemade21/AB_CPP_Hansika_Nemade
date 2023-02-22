

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

     if(color == COLOR_RED)
     {
        // true block
        std::cout<< "color is red." <<std::endl;
     }
     else if(color == COLOR_GREEN)
     {
        // true block
        std::cout<< "color is Green" <<std::endl;
     }
     else if(color == COLOR_BLUE)
     {
        // true block
        std::cout<< "color is Blue" <<std::endl;
     }
     else if(color == COLOR_YELLOW)
     { 
        //  true block
        std::cout<< "color is yellow" <<std::endl;
     }
     else if(color == COLOR_CYAN)
     {
        //  true block
        std::cout<< "color is Cyan" <<std::endl;
     }
     else if(color == COLOR_MAGENTA)
     {
        //   true block
        std::cout<< "color is Magenta" <<std::endl;
     }
     else if(color == COLOR_WHITE)
     {
        //  true block
        std::cout<< "color is white" <<std::endl;
     }
     else if(color == COLOR_BLACK)
     {
        //   true block
        std::cout<< "color is black" <<std::endl;
     }
     else
     {
        //   false block
        std::cout<< "color is not Known" <<std::endl;
     }

    std::cout<< "process ends here." <<std::endl;
    exit(EXIT_SUCCESS);

}