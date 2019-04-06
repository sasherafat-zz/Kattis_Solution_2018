#include <iostream>
#include <string>
using namespace std;

int main()
{
	long i, j, k, s = 0, ni, nj;
	string s1, s2;
	cin >> s1;
	cin >> s2;
	i = 0;
	while (s1[i] == s2[i])
		i++;
	j = s1.size() - 1;
	while (s1[j] == s2[j])
		j--;
	ni = i;
	nj = j;
	for (i; i <= nj; i++, j--)
		if (s1[i] != s2[j])
		{
			cout << 0 << endl;
			return 0;
		}
	i = ni;
	j = nj;
	s++;
	while (i - s >= 0 && s1[i - s] == s1[j + s])
		s++;
	cout << s << endl;
	return 0;
}