// Headers
#include<stdio.h>
#include<stdlib.h>

#include"television.h"


//  ENTRY POINT OF MAIN FUNCTION
int main(void)
{
    p_television_t default_television = NULL;
    p_television_t custom_television = NULL;

    fprintf(stdout, "\nDefault Television state before setting values:");
	default_television = create_default_television_object();

    show_television(default_television);

    set_channel_no(default_television, 45);
	set_volume(default_television, 80);
	set_brightness(default_television, 10);

    fprintf(stdout, "\nDefault Television state after setting values:");
	show_television(default_television); 

    destroy_television(&default_television);

    custom_television = create_custom_television_object(22, 100, 5);

    fprintf(stdout, "\nCustom Television state before setting values:");
	show_television(custom_television);

    set_channel_no(custom_television, 88);
	set_volume(custom_television, 15);
	set_brightness(custom_television, 78);

    fprintf(stdout, "\nCustom Television state after setting values:");
	show_television(custom_television);

	destroy_television(&custom_television);

    exit(EXIT_SUCCESS);

}