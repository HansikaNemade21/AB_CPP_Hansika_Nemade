
#pragma once

#define  EPOCH_YEAR   1970

class Year
{
 private:
    //data member
    unsigned long m_year;

 public:
    // member functions
    // constructor
    Year() : m_year(EPOCH_YEAR)
    {

    } 

    // parameterized constructor
    Year(unsigned long init_year) : m_year(init_year)
    {

    }

    //  setter
    void SetYear(unsigned long new_year) 
    {
        this->m_year = new_year;
    }

    //  getter
    unsigned long GetYear(void)
    {
        return(this->m_year);
    }

    bool IsLeapYear(void)
    {
        if((m_year % 4 ) == 0)
           return(true);

        return(false);
    }

    bool  IsValid(void)
    {
        if(m_year >= 1970  && m_year <= 3000)
           return(true);

        return(false);
    }

    // Destructor
    ~Year()
    {

    }
};