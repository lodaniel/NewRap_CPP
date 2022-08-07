#ifndef NR_H
#define NR_H
class nr
{	public:
		nr();
		~nr();
		double func(double x);
		double func_deriv(double x);
		double calc_rz(double x_0, float tol, int iter_max);
		double x_1;
		int iter;
		float err; 
	private:
	double x;
	double x_0;
	float tol;
	int iter_max;
};
#endif
