
#include<iostream>

#include"television.hpp"

television* default_television = NULL;
television*	custom_television = NULL;


int main(int argc, char** argv, char**envp)
{
    default_television = new television();
    custom_television = new television(225, 55, 44);

    std::cout<< "Default television Status:" <<std::endl;
	default_television->show_status();

	default_television->set_volume(86);
	default_television->set_channel(12);
	default_television->set_brightness(72);

	std::cout<< "Default television status:" <<std::endl;
	default_television->show_status();

	delete(default_television);
	default_television = NULL; 

    std::cout<< "Custom television status:" <<std::endl;
	custom_television->show_status();

	custom_television->set_volume(100);
	custom_television->set_channel(551); 
	custom_television->set_brightness(97);

	/*	Accessing the parameters of Television and manipulating them directly
	custom_television->channel_no = 333;
	custom_television->volume_level = 10;
	custom_television->brightness = 11; */

	std::cout<< "Custom television status:" <<std::endl;
	custom_television->show_status();

	delete(custom_television);
	custom_television = NULL;

	exit(EXIT_SUCCESS);
}
