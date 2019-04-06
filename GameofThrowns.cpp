#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	int n, p, m, sas = 0, mohseni[113];
	string s;
	cin >> n >> p;
	for (int i = 0; i <113; i++)
	{
		mohseni[i] = 0;
	}
	for (int i = 0; i < p; i++)
	{
		cin >> s;
		if (s == "undo") {
			cin >> m;
			sas -= m;
		}
		else {
			m = atoi(s.c_str());
			mohseni[sas + 1] = (mohseni[sas] + m) % n;
			sas++;
		}
	}

	if (mohseni[sas] < 0)
	{
		mohseni[sas] += n;
	}
	cout << mohseni[sas] << endl;

	return 0;
}