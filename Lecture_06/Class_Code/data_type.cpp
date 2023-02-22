
#include<iostream>

char ch = 'M';

short sh = 123;

int   inum = 123123;

long  lnum = 1234567890;

float fnum = 1234.567;

double dnum = 123123.123;

//     Main function
int main(void)
{
    std::cout<< "ch = " << ch <<std::endl;
    std::cout<< "sh = " << sh <<std::endl;
	std::cout<< "inum = " << inum <<std::endl;
	std::cout<< "lnum = " << lnum <<std::endl;
	std::cout<< "fnum = " << fnum <<std::endl;
	std::cout<< "dnum = " << dnum <<std::endl;

    exit(EXIT_SUCCESS);
}