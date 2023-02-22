
//	REPO AB_CPP_Hansika_Nemade : AB_CPP_01_<Hansika_Nemade>

#include<iostream>

int arr[10];

// Main Function
int main(int argc, char** argv, char** envp)
{
    std::cout<< "sizeof(arr) = " << sizeof(arr) <<std::endl;
	std::cout<< "sizeof(arr[0]) = " << sizeof(arr[0]) <<std::endl;

	std::cout<< "&arr = " <<  &arr <<std::endl;
	std::cout<< "&arr + 1 = " << (&arr + 1) <<std::endl;

	std::cout<< "&arr[0] = " << &arr[0] <<std::endl;
	std::cout<< "&arr[0] + 1 = " << (&arr[0] + 1) <<std::endl;

	exit(EXIT_SUCCESS);
}

