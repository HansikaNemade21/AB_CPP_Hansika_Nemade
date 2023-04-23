

#include<iostream>
#include"Date.hpp"



Date Date1(30, MONTH::February, 1971);
Date Date2(MONTH::April);

// Entry point of main function
int main(int argc, char** argv, char** envp)
{
   std::cout<< "\tDate1" <<std::endl;

   Date1.Print();
   Date1.checkDateValid();

   std::cout<< std::endl;

   Date1.SetDateMonth(MONTH::May);
   Date1.checkDateValid();

   std::cout<< std::endl;

   std::cout<< "\tDate2" <<std::endl;

   Date2.Print();
   Date2.checkDateValid();

   std::cout<< std::endl;

   Date2.SetFormat(FORMAT::DD_Month_YYYY);
   Date2.Print();

   Date2.SetDateDay(24);
   Date2.SetDateYear(2001);
   Date2.Print();

   std::cout<< std::endl;

   /*Date Date3(Date1);

   std::cout<< "\tDate3 (reference constructor)" <<std::endl;
   Date3.Print();
   std::cout<< std::endl;

   std::cout<< "\tDate4 (reference constructor)" << std::endl;
   Date Date4(Date2);
   Date4.Print();*/

   Date Date3(&Date1);
   std::cout<< "\t Date3 (pass by pointer)" <<std::endl;
   Date3.Print();
   std::cout<< std::endl;

   return(0);
}