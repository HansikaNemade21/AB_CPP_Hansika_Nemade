
/*
*        Enum class
*/

#include<iostream>

#pragma onces


enum  class   Month
{
	JANUARY = 1,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER
};


#define		EPOCH_DAY		1
#define		EPOCH_MONTH		Month::JANUARY
#define		EPOCH_YEAR		1970



// class type definition
class   date
{
 private:
    //  data members
    long   m_day;
    Month   m_month;
    long   m_year;

    //    function for checking the valid date
    bool  is_day(long day)
    {
        if(day > 0 && day <= 31)
            return(true);
        return(false);
    }

    //   check for valid year
    bool is_year(long year)
    {
        if(year > 0)
           return(true);
        return(false);
    }

    const char*  to_string_month()
    {
        switch(m_month)
		{
		  case Month::JANUARY:
			return("1");
		
		  case Month::FEBRUARY:
			return("2");

		  case Month::MARCH:
			return("3");

		  case Month::APRIL:
			return("4");

		  case Month::MAY:
			return("5");

		  case Month::JUNE:
			return("6");

		  case Month::JULY:
			return("7");

		  case Month::AUGUST:
			return("8");

		  case Month::SEPTEMBER:
			return("9");

		  case Month::OCTOBER:
			return("10");

		  case Month::NOVEMBER:
			return("11");

		  case Month::DECEMBER:
			return("12");
		
		  default:
			return("0");
		}
    }

 public:
    //   Member functions

    //   default constructor
    date() : m_day(EPOCH_DAY), m_month(EPOCH_MONTH), m_year(EPOCH_YEAR)
    {

    }

    //  parameterized constructor
    date(long init_day = EPOCH_DAY, Month init_month = EPOCH_MONTH, long init_year = EPOCH_YEAR) 
        : m_day(init_day), m_month(init_month), m_year(init_year)
    {

    }

    //   setter  functions
    void SetDay(long new_day)
	{
	   this->m_day = new_day;
	}

	void SetMonth(Month new_month)
	{
	    this->m_month = new_month;
	}

	void SetYear(long new_year)
	{
	    this->m_year = new_year;
	}

    //    getter functions
    long GetData() 
    { 
        return(m_day); 
    }

	Month GetMonth()
    { 
        return(m_month); 
    }

	long GetYear()
    { 
        return(m_year); 
    }

    
    //   print function
    void  PrintData()
    {
        std::cout<< "Date: " << this->m_day << "/" << to_string_month() << "/" << this->m_year <<std::endl;
    }

};

