#include "nr.h"
#include <cmath>
nr::nr(){}
nr::~nr(){}
double nr::func(double x)
{
	return sin(x);
}

double nr::func_deriv(double x)
{
	return cos(x);
}

double nr::calc_rz(double x_0, float tol, int iter_max)
{
	iter = 1;
	err = 0;
	x_1 = 0;
	do
	{
		if(iter > iter_max)
		{
			return 0;
		}
		else
		{
			x_1 = x_0 - (func(x_0)/func_deriv(x_0));
			err = fabs(x_1 - x_0); 
			
			if(err <= tol) 
			{
				return 1;
			}
			else
			{
				x_0 = x_1;
				iter ++;
			}
		}
	}while(true);
}