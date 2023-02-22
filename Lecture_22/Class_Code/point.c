// Headers
#include<stdio.h>
#include<stdlib.h>

#define    SIZE_POINT    sizeof(struct point)

struct point;
typedef   struct point*  p_point_t;

struct point
{
    // Data members
    double	m_x;
	double 	m_y;
	double	m_z;
    
    // member functions

    //  setter functions
    void(*Set_X)(p_point_t, double);
	void(*Set_Y)(p_point_t, double);
	void(*Set_Z)(p_point_t, double);
	
    //    getter functions
	double(*Get_X)(p_point_t);
	double(*Get_Y)(p_point_t);
	double(*Get_Z)(p_point_t);
};


//      Setter function
void	Set_X(p_point_t point, double new_X)
{
	point->m_x = new_X;
} 

void	Set_Y(p_point_t point, double new_Y)
{
	point->m_y = new_Y;
}

void 	Set_Z(p_point_t point, double new_Z)
{
	point->m_z = new_Z;
}

//	    Getter functions
double Get_X(p_point_t point)
{
	return(point->m_x);
}

double Get_Y(p_point_t point)
{
	return(point->m_y);
}

double Get_Z(p_point_t point)
{
	return(point->m_z);
}


//      create object of struct point
p_point_t create_point(void)
{
	p_point_t p = NULL;

    p = (p_point_t) malloc(SIZE_POINT);

	p->m_x = 0.0;
	p->m_y = 0.0;
	p->m_z = 0.0;

	p->Set_X = Set_X;
	p->Set_Y = Set_Y;
	p->Set_Z = Set_Z;

	p->Get_X = Get_X;
	p->Get_Y = Get_Y;
	p->Get_Z = Get_Z;

	return(p);
}

//    main function
int main(int argc, char** argv, char** envp)
{
	// Code
	p_point_t point = create_point();

	point->Set_X(point, 10.234);
	point->Set_Y(point, 124.5434);
	point->Set_Z(point, 2345.67854);

	printf("\nPoint(%lf, %lf, %lf)\n", point->Get_X(point), 
                                 point->Get_Y(point), 
                                 point->Get_Z(point));

	exit(EXIT_SUCCESS);
}

