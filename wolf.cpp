#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	int n, sas, mamad;
	char asghar;
	bool flag = false;
	cin >> n;
	sas = 52 - n;
	if (n > sas)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> mamad >> asghar;
		}
		cout << "possible" << endl;
	}
	else if (n == sas)
	{
		map<char, int> maxs;
		maxs['H'] = 0;
		maxs['D'] = 0;
		maxs['C'] = 0;
		maxs['S'] = 0;

		map<char, int> help;
		help['H'] = 0;
		help['D'] = 0;
		help['C'] = 0;
		help['S'] = 0;


		for (int i = 0; i < n; i++)
		{
			cin >> mamad >> asghar;
			help[asghar]++;
			maxs[asghar] = max(maxs[asghar], mamad);
		}

		if (maxs['H'] > help['H'] || maxs['D'] > help['D'] || maxs['C'] > help['C'] || maxs['S'] > help['S']) {
			flag = true;
		}
		//-------------------------------
		if (flag == false)
		{
			cout << "impossible" << endl;
		}
		else
		{
			cout << "possible" << endl;
		}
		//-------------------------------
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			cin >> mamad >> asghar;
		}
		cout << "impossible" << endl;
	}
	return 0;
}