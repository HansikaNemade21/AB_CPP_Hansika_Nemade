
#include<iostream>

int loop_enumerator = 0;

// main function
int main(int argc, char** argv, char** envp)
{
	// Code
	for(loop_enumerator = 0; loop_enumerator <= 100; ++loop_enumerator)
	{
		// Loop body
		if( loop_enumerator & 1 )
		{
			std::cout<< " " << loop_enumerator << " = ODD Number"<< std::endl;
		}
		else 
		{
			std::cout<< " " << loop_enumerator << " = EVEN Number"<< std::endl; 
		}
	}

	exit(EXIT_SUCCESS);
} 

