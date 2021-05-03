

#include <iostream>

typedef double funchion(double);
const int N = 2021;

class Test
{
	double x, min, max, res;
public:
	void Solve(funchion Function) {
		for (int i = 0; i < N; i++)
		{
			if (i == 0)
			{
				min = max = Function(x);
			}

			res = Function(x);
			if (res < min) {
				min = res;
			}
			else if (res > max) {
				max = res;
			}

			x++;
		}
	}

	void SetX(double x) { this->x = x; }


	void PrintResult() {
		std::cout << std::fixed;
		std::cout.precision(0);
		std::cout << " Min = " << min << " Max = " << max << std::endl;
	}

};

double Function(double x) {	//Многочлен 
	return 2.0*x + 5.0*x*x - 7.0*x*x*x + 5.0*x*x*x*x;
}


int main()
{
	Test ex;
	ex.SetX(1);
	ex.Solve(Function);
	ex.PrintResult();
}

