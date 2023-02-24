
#ifndef  _TELEVISION_H
#define  _TELEVISION_H

#define   SIZE_TELEVISION     sizeof(struct television)


// typedefs
typedef   struct television     television_t;
typedef   struct television*    p_television_t;
typedef   struct television**   pp_television_t;

//  struct type definitions
struct television
{
   int  channel_no;
   int  volume;
   int  brightness;

};


//  television Interface functions
p_television_t	create_default_television_object(void);
p_television_t	create_custom_television_object(int channel_no, int volume, int brightness);

//   television setter function
void  set_channel_no(p_television_t ptelevision, int new_channel_no);
void  set_volume(p_television_t ptelevision,  int new_volume);
void  set_brightness(p_television_t ptelevision, int new_brightness);

//   television getter function
int get_channel_no(p_television_t ptelevision);
int get_volume(p_television_t ptelevision);
int get_brightness(p_television_t ptelevision);

//   print television
void	show_television(p_television_t ptelevision);

//   destroy television object
void destroy_television(pp_television_t pp_television);

static void* xmalloc(size_t size);



#endif