
#pragma once 

#define  EPOCH_MONTH   MONTH::January

enum class MONTH
{
   None = 0,
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

   // member functions
   MONTH IncrementMonth()
   {
      switch(m_month)
      {
         case MONTH::January:
            return(MONTH::February);

         case MONTH::February:
            return(MONTH::March);

         case MONTH::March:
            return(MONTH::April);

         case MONTH::April:
            return(MONTH::May);

         case MONTH::May:
            return(MONTH::June);

         case MONTH::June:
            return(MONTH::July);

         case MONTH::July:
            return(MONTH::August);

         case MONTH::August:
            return(MONTH::September);

         case MONTH::September:
            return(MONTH::October);

         case MONTH::October:
            return(MONTH::November);

         case MONTH::November:
            return(MONTH::December);

         case MONTH::December:
            return(MONTH::January);

         default:
            return(MONTH::None);   
      }
   }

   MONTH DecrementMonth()
   {
      switch(m_month)
      {
         case MONTH::January:
            return(MONTH::December);

         case MONTH::February:
            return(MONTH::January);

         case MONTH::March:
            return(MONTH::February);

         case MONTH::April:
            return(MONTH::March);

         case MONTH::May:
            return(MONTH::April);

         case MONTH::June:
            return(MONTH::May);

         case MONTH::July:
            return(MONTH::June);

         case MONTH::August:
            return(MONTH::July);

         case MONTH::September:
            return(MONTH::August);

         case MONTH::October:
            return(MONTH::September);

         case MONTH::November:
            return(MONTH::October);

         case MONTH::December:
            return(MONTH::November);

         default:
            return(MONTH::None);     
      }
   }

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

   MONTH IncrementDateMonth()
   {
      return IncrementMonth();
   }

   MONTH DecrementDateMonth()
   {
      return DecrementMonth();
   }

   unsigned short GetLastDay(bool isleap)
   {
      if(this->m_month == MONTH:: February)
      {
         if(isleap)
           return(29);
         else
           return(28);
      }
      else if(m_month == MONTH::January || m_month == MONTH::March || m_month == MONTH::May || m_month == MONTH::July || 
         m_month == MONTH::August || m_month == MONTH::October || m_month == MONTH::December)
      {
         return(31);
      }
      else
      {
         return(30);
      }
   }

   // Destructor
   ~Month()
   {

   }
};