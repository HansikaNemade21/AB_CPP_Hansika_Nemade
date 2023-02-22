

#include<iostream>

int loop_enumerator = 0;

//  main function
int main(int argc, char** argv, char** envp)
{
	// Initialization
	loop_enumerator = 0;

	// Loop
    //   terminating condition
	while( loop_enumerator <= 100 )
	{
		// Loop Body
		if( loop_enumerator & 1)
		{
			std::cout<< " " << loop_enumerator << " = ODD Number" <<std::endl;
		}
		else
		{
			std::cout<< " " << loop_enumerator << " = EVEN Number" <<std::endl;
		}

		// Incrementing steps
		++loop_enumerator;
	}

	exit(EXIT_SUCCESS);
}

