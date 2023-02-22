

#include<iostream>

//struct Type definition
struct Demo
{
    // struct member definitions
    long   lnum;
    int    inum;
    short  snum;
    char   cnum;
};

struct Demo  demo;

// class type definition
class Employee
{
    // class member

public:
    long long  m_emp_contact;
    double     m_emp_salary;
    long       m_emp_id;

};

Employee emp1;

//      Main function
int main(int argc, char** argv, char** envp )
{
    std::cout<< "sizeof(demo) = " << sizeof(demo) <<std::endl;
    std::cout<< "sizeof(emp1) = " << sizeof(emp1) <<std::endl;

    demo.lnum = 1234567890;
    demo.inum = 9753;
    demo.snum = 123;
    demo.cnum = 'A';

    std::cout<< "demo.lnum = " << demo.lnum <<std::endl;
    std::cout<< "demo.inum = " << demo.inum <<std::endl;
    std::cout<< "demo.snum = " << demo.snum <<std::endl;
    std::cout<< "demo.cnum = " << demo.cnum <<std::endl;

    emp1.m_emp_contact = 1236421;
    emp1.m_emp_salary  = 24000.54543;
    emp1.m_emp_id      = 98765432;

    std::cout<< "emp1.m_emp_contact = " << emp1.m_emp_contact <<std::endl;
    std::cout<< "emp1.m_emp_salary = " << emp1.m_emp_salary <<std::endl;
    std::cout<< "emp1.m_emp_id = " << emp1.m_emp_id <<std::endl;

    exit(EXIT_SUCCESS);
}