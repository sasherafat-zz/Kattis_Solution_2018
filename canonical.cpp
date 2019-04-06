#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n;
	bool sas = true;
	cin >> n;

	vector<int> a(n);

	for (auto &i : a)
	{
		cin >> i;
	}

	int mohseni = a[n - 1] + a[n - 2];

	vector<int> nakon(mohseni + 1);
	vector<int> shalvar(mohseni + 1);

	for (int i = 1; i <= mohseni; i++)
	{
		nakon[i] = 1000013;
		for (int j = 0; j < n; j++)
		{
			if (a[j] <= i)
			{
				nakon[i] = min(nakon[i], nakon[i - a[j]] + 1);
			}
		}

		for (int j = n - 1; j >= 0; j--)
		{
			if (a[j] <= i)
			{
				shalvar[i] = shalvar[i - a[j]] + 1;
				break;
			}
		}
	}
	for (int i = 0; sas && i <= mohseni; i++) {
		if (nakon[i] < shalvar[i])
		{
			sas = false;
		}
	}
	if (sas)
	{
		cout << "canonical" << endl;
	}
	else
	{
		cout << "non-canonical" << endl;
	}
	return 0;
}