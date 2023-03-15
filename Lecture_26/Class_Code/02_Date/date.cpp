

#include<iostream>

#include"date.hpp"

date d1(8, Month::MARCH, 2023);

date d2(12);

date d3(0, Month::MARCH);

date d4(0, Month::JANUARY, 1923);

date JANUARY(1, Month::JANUARY, 2023);


int main(int argc, char** argv, char** envp)
{
    // print dl
    std::cout<< "d1 : " <<std::endl;
	d1.PrintData();
	std::cout<< std::endl;

    //  print d2
    std::cout<< "d2 : " <<std::endl;
	d2.PrintData();
	std::cout<< std::endl;

    // print d3
    std::cout<< "d3 : " <<std::endl;
	d3.PrintData();
    std::cout<< std::endl;

	d3.SetDay(22);
	d3.SetYear(2026);

    std::cout<< "d3 : " <<std::endl;
	d3.PrintData();
	std::cout<< std::endl;

    // print d4
    std::cout<< "d4 : " <<std::endl;
	d4.PrintData();
    std::cout<< std::endl;

	d4.SetDay(55);
	d4.SetMonth(Month::DECEMBER);

    std::cout<< "d4 : " <<std::endl;
	d4.PrintData();
	std::cout<< std::endl;

    std::cout<< "JANUARY : " <<std::endl;
	JANUARY.PrintData();

    exit(0);
}