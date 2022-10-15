#include <iostream>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;


int main()
{ 
	double a, b, h, y_x, s_x = 0.0, ys, fn,fct =1.0;
	int n;
	cout << "VVedite a\n";

	while (!(cin >> a) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error!" << endl;
	}
	//a
	cout << "VVedite b\n";

	while (!(cin >> b) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error!" << endl;
	}
	//b
	cout << "VVedite h\n";

	while (!(cin >> h) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error!" << endl;
	}
	//h
	cout << "VVedite n\n";

	while (!(cin >> n) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error!" << endl;
	}

	//yx
	double p=1,x;
	
	for (x = a; x <= b; x = x + h)
	{
			y_x = exp(cos(x)) * cos(sin(x));
			cout << "x " << x << " y_x " << y_x;

		//s_x 
		for (double k = 0; k <= n; k = k + 1)
		{

			//fct
			for (double i = 1; i <= k; i = i + 1)
			{
				fct = fct * i;


			}
		 s_x += cos(k * x) / fct;
		 fct = 1;

		}
		double rez = abs(y_x - s_x);
	       cout << " s_x " << s_x << " y_x-s_x "<<rez<<"\n";
			s_x = 0;
		
	}

}


