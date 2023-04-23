
#pragma once

#include<iostream>
#include"Day.hpp"
#include"Month.hpp"
#include"Year.hpp"

#define     DEFAULT_FORMAT       FORMAT::DD_MM_YYYY

enum class FORMAT
{
   DD_MM_YYYY = 1,
   MM_DD_YYYY,
   YYYY_MM_DD,
   DD_Month_YYYY,
   Month_DD_YYYY,
   YYYY_DD_Month,
   DD_MM,
   MM_DD,
   DD_Month,
   Month_DD,
   
};


class Date
{
 private:
    //  data members
    Day      m_day;
    Month    m_month;
    Year     m_year;
    FORMAT   m_format;

    // member function
    bool IsDateValid()
    {
        if(m_day.IsValid() && m_year.IsValid())
        {
            return(true);
        }
        else if(m_month.IsFebruary()  && m_year.IsLeapYear() && m_day.getDay() == 29)
        {
            return(true);
        }
        else if(m_month.Is31Days() && (m_day.getDay() >= 29 && m_day.getDay() <= 31))
        {
            return(true);
        }
        else if(!(m_month.Is31Days()) && !(m_month.IsFebruary()) && (m_day.getDay() >= 29 && m_day.getDay() <= 30))
        {
            return(true);
        }

        return(false);
    }

 public:
    //  member functions
    //  constructor
    Date() : m_day(Day()), m_month(Month()), m_year(Year()), m_format(DEFAULT_FORMAT)
    {

    }

    // parameterized constructor
    Date(unsigned short init_day, MONTH init_month, unsigned long init_year): 
          m_day(Day(init_day)), m_month(Month(init_month)), m_year(init_year), m_format(DEFAULT_FORMAT)
    {

    }

    Date(MONTH init_month): m_day(Day()), m_month(Month(init_month)), m_year(Year()), m_format(DEFAULT_FORMAT)
    {

    }

    Date(unsigned long init_year): m_day(Day()), m_month(Month()), m_year(Year(init_year)), m_format(DEFAULT_FORMAT)
    {

    }

    // pass by pointer
    Date(const Date* pdate)
    {
      this->m_day = pdate->m_day;
      this->m_month = pdate->m_month;
		  this->m_year = pdate->m_year;
		  this->m_format = pdate->m_format;

      //  access to private members of pdate  which should not allowed
      void* p = (void*)pdate;
		  std::cout << pdate << std::endl;
		  std::cout << p << std::endl;

		  *((unsigned short*)p) = EPOCH_DAY;
		  *((MONTH*)(((char*)p)+2)) = MONTH::February;
		  *((unsigned long*)(((char*)p)+6)) = 9999;

    }

    /*// L value reference object of type Date
    // pass by reference
    Date(const Date& that)
    {
      this->m_day = that.m_day;
      this->m_month = that.m_month;
      this->m_year = that.m_year;
      this->m_format = that.m_format;


    }


    //  R value reference object of type Date
    Date(Date&& that)
    {
      this->m_day = that.m_day;
      this->m_month = that.m_month;
      this->m_year = that.m_year;
      this->m_format = that.m_format;

    }*/

    //   setter
    void  SetDateDay(unsigned short new_day)
    {
        this->m_day.setDay(new_day);
    }

    void SetDateMonth(MONTH new_month)
    {
        this->m_month.SetMonth(new_month);
    }

    void SetDateYear(unsigned long new_year)
    {
        this->m_year.SetYear(new_year);
    }

    void SetDate(unsigned short new_day, MONTH new_month, unsigned long new_year)
    {
        SetDateDay(new_day);
        SetDateMonth(new_month);
        SetDateYear(new_year);
    }

    void SetFormat(FORMAT set_format)
    {
        this->m_format = set_format;
    }
   
    // getter
    unsigned short GetDay(void)
    {
        return(m_day.getDay());
    }

    MONTH GetMonth(void)
    {
        return(m_month.GetMonth());
    }

    unsigned long GetYear(void)
    {
        return(m_year.GetYear());
    }

    //  print Date
    void   Print(void)
    {
       switch(m_format)
       {
          case FORMAT::DD_MM_YYYY:
            std::cout<< "Date: " << m_day.ToString() << "/" << m_month.ToDigit() << "/" << m_year.GetYear() <<std::endl;
            break;

          case FORMAT::MM_DD_YYYY:
            std::cout<< "Date: " << m_month.ToDigit() << "/" << m_day.ToString() << "/" << m_year.GetYear() <<std::endl;
            break;
          
          case FORMAT::YYYY_MM_DD:
            std::cout<< "Date: " << m_year.GetYear() << "/" << m_month.ToDigit() << "/" << m_day.ToString() <<std::endl;
            break;

          case FORMAT::DD_Month_YYYY:
            std::cout<< "Date: " << m_day.ToString() << "," << m_month.ToString() << "," << m_year.GetYear() <<std::endl;
            break;

          case FORMAT::Month_DD_YYYY:
            std::cout<< "Date: " << m_month.ToString() << "," << m_day.ToString() << "," << m_year.GetYear() <<std::endl;
            break;

          case FORMAT::YYYY_DD_Month:
            std::cout<< "Date: " << m_year.GetYear() << "/" << m_day.ToString() << "," << m_month.ToString() <<std::endl;
            break;

          case FORMAT::DD_MM:
            std::cout<< "Date: " << m_day.ToString() << "/" << m_month.ToDigit() <<std::endl;
            break;
        
          case FORMAT::MM_DD:
            std::cout<< "Date: " << m_month.ToDigit()<< "/" << m_day.ToString() <<std::endl;
            break;

          case FORMAT::DD_Month:
            std::cout<< "Date: " << m_day.ToString() << "," << m_month.ToString() <<std::endl;
            break;

          case FORMAT::Month_DD:
            std::cout<< "Date: " << m_month.ToString() << "," << m_day.ToString() <<std::endl;
            break;
       }
    }

    void checkDateValid()
    {
      if(IsDateValid())
       std::cout<< "Date: " << m_day.ToString() << "/" << m_month.ToDigit() << "/" << m_year.GetYear() << " Is valid date" << std::endl;
      else
       std::cout<< "Date: " << m_day.ToString() << "/" << m_month.ToDigit() << "/" << m_year.GetYear() << " Is not valid date" <<
       std::endl;

    }
    
    // Destructor
    ~Date()
    {

    }

};