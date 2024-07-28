



#include <iostream>
#include <windows.h>
using namespace std;

struct Roots
{
	int flag;
	double x1;
	double x2;
	Roots Myroot(double a, double b, double c)
	{
		Roots r;
		double discr = pow(b, 2) - 4 * a * c;
		if (discr > 0)
		{
			r.x1 = (-b - sqrt(discr)) / 2.0 * a;
			r.x2 = (-b + sqrt(discr)) / 2.0 * a;
			r.flag = 1;
			return r;
		}
		else if (discr == 0)
		{
			r.x1 = (-b) / 2.0 * a;
			r.x2 = r.x1;
			r.flag = 0;
			return r;
		}
		else
		{
			r.flag = -1;
			return r;
		}
	}
};

int main()
{
	Roots r = r.Myroot(1, 5, 10);
	cout << "Flag: " << r.flag << " x1: " << r.x1 << " x2: " << r.x2 << '\n';
}








































//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//struct Distance
//{
//    int feet;
//    double inches;
//
//    void ShowDist()
//    {
//        cout << feet << "\'-" << inches << "\"\n";
//    }
//};
//
//Distance AddDist(const Distance& d1, const Distance& d2)
//{
//    Distance d;
//    d.feet = d1.feet + d2.feet;
//    d.inches = d1.inches + d2.inches;
//    if (d.inches >= 12.0)
//    {
//        d.inches -= 12.0;
//        d.feet++;
//    }
//    return d;
//}
//
//Distance InputDist()
//{
//    Distance d;
//    cout << "\n¬ведите число футов: ";
//    cin >> d.feet;
//    cout << "¬ведите число дюймов: ";
//    cin >> d.inches;
//    return d;
//}
//
//
//
//int main()
//{
//    SetConsoleOutputCP(1251);
//    Distance d1 = InputDist();
//    Distance d2 = { 1, 6.25 };
//    Distance d3 = AddDist(d1, d2);
//
//    d1.ShowDist();
//    d2.ShowDist();
//    d3.ShowDist();
//
//    int n;
//    cout << "¬ведите размер массива рассто€ний ";
//    cin >> n;
//    Distance* masDist = new Distance[n];
//
//    for (int i = 0; i < n; i++)
//    {
//        masDist[i] = InputDist();
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        masDist[i].ShowDist();
//    }
//    delete[] masDist;
//    return 0;
//}


//#include <iostream>
//#include <windows.h>
//#include <string>
//#include <tuple>
//#include <vector>
//using namespace std;
//using Tuple = tuple<string, int, double>;
//void printTupleOfThree(Tuple t)
//{
//	cout << "("
//		<< std::get<0>(t) << ", "
//		<< std::get<1>(t) << ", "
//		<< std::get<2>(t) << ")" << endl;
//}
//
//Tuple funtup(string s, int a, double d)
//{
//	s.append("!");
//	return make_tuple(s, a, d * 10);
//}
//
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	vector<string> v1{ "one", "two", "three", "four", "five", "six" };
//	vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
//	vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
//	auto t0 = make_tuple(v1[0], v2[0], v3[0]);
//	printTupleOfThree(t0);
//	auto t1 = funtup(v1[1], v2[1], v3[1]);
//	printTupleOfThree(t1);
//	return 0;
//
//
//}