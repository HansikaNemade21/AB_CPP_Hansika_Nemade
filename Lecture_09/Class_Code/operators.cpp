
//	REPO AB_CPP_Hansika_Nemade : AB_CPP_01_<Hansika_Nemade>


#include<iostream>

/**
 * 
 * 	Operators:
 * 		1)	Arithmetic Operators
 * 		2)	Logical Operators
 * 		3)	Conditional Operators
 * 		4)	Bitwise Operators
 * 
 ***********************************************
 * 
 * 	1)	Arithmetic Operators
 * 
 * 		a)	Addition 		= 	+ 
 * 		b)	Subtraction 	= 	-
 * 		c)	Multiplication 	=	*
 * 		d)	Division		=	/
 * 		e)	Modulus			= 	%
 * 		f)	Increment		=	++(pre/post)
 * 		g)	Decrement		=	--(pre/post)
 * 
 ***********************************************
 * 
 * 	2)	Logical Operators
 * 
 * 		a)	Logical	AND		=	&&
 * 		b)	Logical OR		=	||
 * 		c) 	Logical	NOT		=	!
 * 
 ***********************************************
 * 
 * 	3)	Conditional Operators
 * 		
 * 		a)	Greater			=	>
 * 		b)	Lesser			=	<
 * 		c)	Equal Equal		=	==
 * 		d)	Greater Equal	=	>=
 * 		e)	Lesser Equal	= 	<=
 * 		f)	Not Equal		=	!= / !(==)
 * 		g)	Ternary Operator = 	(?:)
 * 
 ***********************************************
 * 
 * 	4)	Bitwise Operators
 * 
 * 		a)	Bitwise	AND		=	&
 * 		b)	Bitwise OR		=	|
 * 		c)	Bitwise XOR		=	^
 * 		d)	Bitwise NOT		=	~
 * 		e)	Right Shift		=	>>
 * 		f)	Left Shift		=	<<
 * 
 ***********************************************/



// 1 byte
char   cinum1;
char   cinum2;
char   cnum3;

// 2 byte
short  sinum1;
short  sinum2;
short  snum3;

// 4 byte : 32 bits w/o seperation
int    inum1;
int    inum2;
int    inum3;

// 4 byte : 32 bits with seperation
float  finum1;
float  finum2;
float  fnum3;

//  8 byte : 64 bits w/o seperation
long   linum1;
long   linum2;
long   lnum3;

//  8 byte : 64 bits with seperation
double dinum1;
double dinum2;
double dnum3;

int main(int argc, char** argv, char** envp)
{
    // ARITHMATIC OPERATORS

    //     Addition 
    std::cout<< "\tArithmatic Operators:" <<std::endl;
    cinum1 = 'A';
    cinum2 = 'a';

    cnum3 = cinum1 + cinum2;

    std::cout<< "cinum1 = " << cinum1 <<std::endl;
    std::cout<< "cinum2 = " << cinum2 <<std::endl;
    std::cout<< cinum1 << " + " << cinum2 << " = " << cnum3 <<std::endl;


    //   substraction
    sinum1 = 123;
    sinum2 = 789;

    snum3 = sinum1 - sinum2;

    std::cout<< "sinum1 = " << sinum1 <<std::endl;
    std::cout<< "sinum2 = " << sinum2 <<std::endl;
    std::cout<< sinum1 << " - " << sinum2 << " = " << snum3 <<std::endl;


    //   division
    inum1 = 123456;
    inum2 = 987654;

    inum3 = inum2 / inum1;

    std::cout<< "inum1 = " << inum1 <<std::endl;
    std::cout<< "inum2 = " << inum2 <<std::endl;
    std::cout<< inum2 << " / " << inum1 << " = " << inum3 <<std::endl;

    inum3 = inum2 % inum1;
    std::cout<< inum2 << " % " << inum1 << " = " << inum3 <<std::endl;

    finum1 = 5.1;
    finum2 = 2.3;

    fnum3 = finum1 / finum2;

    std::cout<< "finum1 = " << finum1 <<std::endl;
    std::cout<< "finum2 = " << finum2 <<std::endl;
    std::cout<< finum1 << " / " << finum2 << " = " << fnum3 <<std::endl;

    
    // Increment 
    inum1 = 10;
    inum2 = 20;

    //  pre incrementing  
    std::cout<< "inum1 = " << inum1 <<std::endl;
    std::cout<< "++inum1 = " << ++inum1 <<std::endl;

    //  post incrementing
    std::cout<< "inum2 = " << inum2 <<std::endl;
    std::cout<< "inum2++ = " << inum2++ <<std::endl;

    //  Decrement
    inum1 = 99;
    inum2 = 79;

    //    pre decrementing
    std::cout<< "inum1 = " << inum1 <<std::endl;
    std::cout<< "--inum1 = " << --inum1 <<std::endl;

    //    post decrementing
    std::cout<< "inum2 = " << inum2 <<std::endl;
    std::cout<< "inum2-- = " << inum2-- <<std::endl;


    // LOGICAL OPERATORS

    std::cout<< "\tLocical Operators" <<std::endl;

    inum1 = 0;
    inum2 = 1;

    std::cout<< inum1 << " && " << inum2 << " = " << (inum1 && inum2) <<std::endl;
    std::cout<< inum1 << " || " << inum2 << " = " << (inum1 || inum2) <<std::endl;
    std::cout<< " ! " << inum1 << " = " << (!inum1) <<std::endl;
    std::cout<< " ! " << inum1 << " = " << (!inum2) <<std::endl; 


    // CONDITIONAL OPERATORS

    std::cout<< "\tConditional Operators" <<std::endl;

    inum1 = 1;
	inum2 = 0;

	std::cout<< inum1 << " > " << inum2 << " = " << (inum1 > inum2) <<std::endl;
	std::cout<< inum1 << " < " << inum2 << " = " << (inum1 < inum2) <<std::endl;
	std::cout<< inum1 << " == " << inum2 << " = " << (inum1 == inum2) <<std::endl;
	std::cout<< inum1 << " >= " << inum2 << " = " << (inum1 >= inum2) <<std::endl;
	std::cout<< inum1 << " <= " << inum2 << " = " << (inum1 <= inum2) <<std::endl;
	std::cout<< inum1 << " != " << inum2 << " = " << (inum1 != inum2) <<std::endl;

    // BITWISE OPERATORS

    std::cout<< "\tBitwise Operators" <<std::endl;

    inum1 = 2610;
	inum2 = 3131;

	std::cout<< inum1 << " & " << inum2 << " = " << (inum1 & inum2) <<std::endl;
	std::cout<< inum1 << " | " << inum2 << " = " << (inum1 | inum2) <<std::endl;
	std::cout<< inum1 << " ^ " << inum2 << " = " << (inum1 ^ inum2) <<std::endl;
	std::cout<< inum1 << " << " << 8 << " = " << (inum1 << 8) <<std::endl;
	std::cout<< inum2 << " >> " << 2 << " = " << (inum2 >> 2) <<std::endl;
	std::cout<< " ~ " << inum1 << " = " << ~inum1 <<std::endl;
	std::cout<< " ~ " << inum2 << " = " << ~inum2 <<std::endl;

    exit(EXIT_SUCCESS);
}