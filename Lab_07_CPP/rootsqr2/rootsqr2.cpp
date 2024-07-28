#include <iostream>
#include <windows.h>
#include <tuple>
using namespace std;
using Tuple = tuple<double, double, int>;

Tuple Myroot(double, double, double);
int main()
{
	double a = 1;
	double b = 2;
	double c = 0;
	Tuple res = Myroot(a, b, c);
	cout << "("
		<< std::get<0>(res) << ", "
		<< std::get<1>(res) << ", "
		<< std::get<2>(res) << ")" << endl;
	return 0;

}

Tuple Myroot(double a, double b, double c)
{
	double discr = pow(b, 2) - 4 * a * c;
	if (discr > 0)
	{
		double x1 = (-b - sqrt(discr)) / 2.0 * a;
		double x2 = (-b + sqrt(discr)) / 2.0 * a;
		int flag = 1;
		return make_tuple(x1, x2, flag);
	}
	else if (discr == 0)
	{
		double x1 = (-b) / 2.0 * a;
		double x2 = x1;
		int flag = 0;
		return make_tuple(x1, x2, flag);
	}
	else
	{
		int flag = -1;
		return make_tuple(0, 0, flag);
	}
}

