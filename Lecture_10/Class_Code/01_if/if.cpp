

#include<iostream>


bool my_result = false;

// main function
int main(int argc, char** argv, char** envp)
{
    std::cout<< "size of bool = " << sizeof(bool) <<std::endl;

    std::cout<< "result = " << my_result << std::endl;

    if(true == my_result)
    {
        // true block
        std::cout<< "True Block of is statement." <<std::endl;

    }

    std::cout<< "process ends here."  <<std::endl;

    exit(EXIT_SUCCESS);
}