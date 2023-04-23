
#pragma once 

#define  EPOCH_MONTH   MONTH::January

enum class MONTH
{
   January = 1,
   February,
   March,
   April,
   May,
   June,
   July,
   August,
   September,
   October,
   November,
   December
};

class Month
{
 private:
   // data member
   MONTH  m_month;

 public:
   // member functions
   // constructor
   Month() : m_month(EPOCH_MONTH)
   {

   }

   // parameterized constructor
   Month(MONTH init_month) : m_month(init_month)
   {

   }

   //  setter
   void  SetMonth(MONTH new_month)
   {
      this->m_month = new_month;
   }

   //  getter
   MONTH GetMonth(void)
   {
      return(this->m_month);
   }

   bool  IsFebruary(void)
   {
      if(this->m_month == MONTH::February)
         return(true);

      return(false);
   }

   bool  Is31Days(void)
   {
      if(m_month == MONTH::January || m_month == MONTH::March || m_month == MONTH::May || m_month == MONTH::July || 
         m_month == MONTH::August || m_month == MONTH::October || m_month == MONTH::December)
         return(true);

      return(false);
   }

   const char* ToDigit(void)
   {
      switch(m_month)
      {
         case MONTH::January:
            return("01");

         case MONTH::February:
            return("02");

         case MONTH::March:
            return("03");

         case MONTH::April:
            return("04");

         case MONTH::May:
            return("05");

         case MONTH::June:
            return("06");

         case MONTH::July:
            return("07");

         case MONTH::August:
            return("08");

         case MONTH::September:
            return("09");

         case MONTH::October:
            return("10");

         case MONTH::November:
            return("11");

         case MONTH::December:
            return("12");
               
         default:
            return("none");

      }
   }

   const char* ToString()
   {
      switch(m_month)
      {
         case MONTH::January:
            return("January");

         case MONTH::February:
            return("February");

         case MONTH::March:
            return("March");

         case MONTH::April:
            return("April");

         case MONTH::May:
            return("May");

         case MONTH::June:
            return("June");

         case MONTH::July:
            return("July");

         case MONTH::August:
            return("August");

         case MONTH::September:
            return("September");

         case MONTH::October:
            return("Octomber");

         case MONTH::November:
            return("November");

         case MONTH::December:
            return("December");

         default:
            return("none");

      }
   }

   // Destructor
   ~Month()
   {

   }
};