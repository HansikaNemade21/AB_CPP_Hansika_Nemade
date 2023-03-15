
/*
*       Default Initialization
*/

#pragma once

#include<iostream>

//  class type definition
class  date
{
 private:
    // data members
    long  m_day;
    long  m_month;
    long  m_year;
 
 public:
    // member functions

    //	default constructor
	date() : m_day(0), m_month(0), m_year(0) 
    {

    }

	//	parameterized constructor
	date(long init_day = 0, long init_month = 0, long init_year = 0) 
	    : m_day(init_day), m_month(init_month), m_year(init_year)
    {

    }

	//	  setter functions
	void SetDay(long new_day)
	{
	   this->m_day = new_day;
	}

	void SetMonth(long new_month)
	{
	   this->m_month = new_month;
	}

	void SetYear(long new_year)
	{
	   this->m_year = new_year;
	}

    //     getter functions
	long GetData() 
    { 
        return(m_day); 
    }

	long GetMonth() 
    { 
        return(m_month); 
    }

	long GetYear() 
    { 
        return(m_year); 
    }

	//	print function
	void PrintData()
	{
		std::cout<< "Date: " << this->m_day << "/" << this->m_month << "/" << this->m_year << std::endl;
	}
};