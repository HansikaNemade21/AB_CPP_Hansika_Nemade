//Headers
#include<stdio.h>
#include<stdlib.h>

#include "television.h"


//                   INTERFACE FUNCTIONS

//    television interface functions
p_television_t create_default_television_object(void)
{
    p_television_t television = NULL;

    television = xmalloc(SIZE_TELEVISION);

    television->channel_no = 1;
    television->volume = 10;
    television->brightness = 40;

    return(television);
}

p_television_t	create_custom_television_object(int channel_no, int volume, int brightness)
{
    p_television_t television = NULL;

    television = (p_television_t) xmalloc(SIZE_TELEVISION);

    television->channel_no = channel_no;
    television->volume = volume;
    television->brightness = brightness;

    return(television);
}


//     television setter functions
void  set_channel_no(p_television_t ptelevision, int new_channel_no)
{
    ptelevision->channel_no = new_channel_no;
}

void  set_volume(p_television_t ptelevision,  int new_volume)
{
    ptelevision->volume = new_volume;
}

void  set_brightness(p_television_t ptelevision, int new_brightness)
{
    ptelevision->brightness = new_brightness;
}


//      television getter functions 
int get_channel_no(p_television_t ptelevision)
{
    return(ptelevision->channel_no);
}

int get_volume(p_television_t ptelevision)
{
    return(ptelevision->volume);
}

int get_brightness(p_television_t ptelevision)
{
    return(ptelevision->brightness);
}


//       print object television
void  show_television(p_television_t ptelevision)
{
   fprintf(stdout, "current television state:\nchannel_no: %d\nvolume: %d\nbrightness: %d\n",get_channel_no(ptelevision),
                                                                                             get_volume(ptelevision),
                                                                                             get_brightness(ptelevision));
}


//         destroy television object
void destroy_television(pp_television_t pp_television)
{
    p_television_t p_television = *pp_television;

    free(p_television);
    p_television = NULL;

    *pp_television = NULL;
}


//             HELPER FUNCTION
static void* xmalloc(size_t size)
{
    void* p = (void*)malloc(size);

    if(p == NULL)
    {
        fprintf(stderr, "ERROR: Out of virtual memory\n");
        return(NULL);
    }

    return(p);
}

