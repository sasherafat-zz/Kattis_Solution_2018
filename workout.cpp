#include <vector>
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

void workout(long long u, long long r, long long& t, long long vf, long long vs, long long &c) 
{
	if (t < c)
		 t += ((c - t) / (u + r)) * (u + r);
	while (true)
	{
		if (t <= c)
		{
			c = max(c, u + t);
			t += u + r;
		}
		else
		{
			t = max(t, c + vf);
			c += vf + vs;
			break;
		}
	}
}

int main()
{
	long long x, y, c = 0, i, j;
	vector<pair<long long, long long> >v;
	vector<long long> u, r, t;
	for (i = 0; i < 10; i++)
	{
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	r = t = u;
	for (i = 0; i < 10; i++)
	{
		cin >> x >> y >> j;
		u.push_back(x);
		r.push_back(y);
		t.push_back(j);
	}
	for (j = 0; j < 3; j++)
		for (i = 0; i < 10; i++) 
			workout(u[i], r[i], t[i], v[i].first, v[i].second, c);
	cout << c - v.back().second << endl;
	return 0;
}