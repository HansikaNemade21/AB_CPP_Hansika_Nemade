
#include<iostream>

bool result = false;

// main function
int main(int argc, char** argv, char** envp)
{
    if(result == true)
    {
        std::cout<< "True Block of if statement." <<std::endl;
    }
    else 
    {
        std::cout<< "False Block of if statement." <<std::endl;
    }

    std::cout<< "process ends here." <<std::endl;
    exit(EXIT_SUCCESS);
}
