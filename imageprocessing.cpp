#include <iostream>
using namespace std;

int main() {
	int h, w, n, m, a[25][25], b[25][25];
	long long sas;
	cin >> h >> w >> n >> m;

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cin >> a[i][j];
		}
	}

	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = m - 1; j >= 0; j--)
		{
			cin >> b[i][j];
		}
	}

	for (int i = 0; i + n < h+1; i++)
	{
		for (int j = 0; j + m < w+1; j++)
		{
			sas = 0;
			for (int f = 0; f < n; f++)
			{
				for (int s = 0; s < m; s++)
				{
					sas += b[f][s] * a[i + f][j + s];
				}
			}
			cout << sas << " ";
		}
		cout << endl;
	}
	return 0;
}