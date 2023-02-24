

#pragma onces

#include<iostream>

// class type definition 
class television
{

private:
    int channel_no;
    int volume;
    int brightness;

public:
    // default object
    // constructor
    television()
	{
      std::cout<< "default television object created\n" <<std::endl;
      channel_no = 26;
	  volume = 50;
	  brightness = 20;
	}
    
    // custom object
    // parameterized constructor
    television(int init_channel_no, int init_volume, int init_brightness)
	{
	  std::cout<< "custom Television Object Created\n" <<std::endl;

		channel_no = init_channel_no;
		volume    = init_volume;
		brightness = init_brightness;
	}

    //    setter function
    void set_channel(int new_channel_no)
	{
		channel_no = new_channel_no;
	}

	void set_volume(int new_volume)
	{
		volume = new_volume;
	}

	void set_brightness(int new_brightness)
	{
		brightness = new_brightness;
	}

    //     getter function
    int get_channel() const
	{
		return(channel_no);
	}

	int get_volume_level() const
	{
		return(volume);
	}

	int get_brightness() const
	{
		return(brightness);
	}

    //    show object
    void	show_status()
	{
	   std::cout<< "Channel No: " << channel_no <<std::endl
				<< "Volume Level: " << volume <<std::endl
				<< "Brightness: " << brightness <<std::endl
				<< "\n" <<std::endl;	
	}

    //destructor
    ~television()
    {
       std::cout<< "television object destroyed" <<std::endl;

       channel_no = 0;
       volume = 0;
       brightness = 0;
    }

    

};