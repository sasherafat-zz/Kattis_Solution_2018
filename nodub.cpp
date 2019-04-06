#include <iostream>
#include <map>
#include <cstring>
using namespace std;
int main()
{
	char mamad[113];
	string mohseni;
	short sas = 0, j, f = 0;
	map<string, int> asghar;
	cin.get(mamad, '/0');
	for (j = 0; mamad[j] != '\0'; j++);
	mamad[j] = ' ';
	mamad[j + 1] = '\0';
	for (int i = 0; mamad[i]; i++)
	{
		if (mamad[i] != ' ')
			mohseni += mamad[i];
		else
		{
			asghar[mohseni]++;
			mohseni = "";
		}
	}
	for (auto it = asghar.begin(); it != asghar.end(); it++)
	{
		if (it->second > 1)
		{
			cout << "no" << endl;
			return 0;
		}
	}
	cout << "yes" << endl;
	return 0;
}