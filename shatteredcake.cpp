#include <iostream>
using namespace std;

int main() {
	int w;
	long long n, sas = 0, a, b;
	cin >> n >> w;

	for (int i = 0; i < w; i++)
	{
		cin >> a >> b;
		sas += a * b;
	}

	cout << sas / n << endl;
	return 0;
}