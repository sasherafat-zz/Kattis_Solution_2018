#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	char sas[100013];
	cin >> sas;
	map<char, int> seyed;
	for(int i = 0; sas[i]; i++)
	{
		if (sas[i] == 'B')
		{
			seyed['B']++;
		}
		else if (sas[i] == 'W')
		{
			seyed['W']++;
		}
	}
	if (seyed['W'] == seyed['B'])
	{
		cout << 1 << endl;
	}
	else {
		cout << 0 << endl;
	}
	return 0;
}