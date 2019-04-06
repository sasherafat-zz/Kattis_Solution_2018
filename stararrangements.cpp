#include <iostream>
using namespace std;
int main()
 {
	int a = 2, b = a-1, s = 0, sas;
	cin >> sas;
	cout << sas << ":" << endl;
	for (; b < sas;)
	{
		for (; s < sas;)
		{
			s += a;
			if (s == sas)
				break;

			s += b;
		}
		if (s == sas && a + b <= sas && b <= a)
		{
			cout << a << "," << b << endl;
		}
		else {
			s = 0;
			for (; s < sas;)
			{
				s += b;
				if (s == sas)
					break;

				s += a;
			}
			if ((s == sas && a + b <= sas) && a != b && b >= a) {
				cout << a << "," << b << endl;
			}
		}
		s = 0;
		if (a > b)
			b++;
		else
			a++;
	}
	return 0;
	}