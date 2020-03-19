#pragma warning(disable:4996)
#include <algorithm>
#include <map>
#include <math.h>
#include <iostream>
#include <queue>
#include <set>
#include <stack>
#include <string.h>
#include <sstream>
#include <vector>
using namespace std;
int t[10000];
inline int f(const int& a, const int& b,const int&n)
{
	if (n >= 3)
		return (a * t[n-1] + b * t[n-2])%7;
	else
		return 1;
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	register unsigned a, b, n;
	memset(t, -1, sizeof(t));
	t[1] = 1;
	t[2] = 1;
	
	while (cin >> a >> b >> n)
	{
		if (a == 0 && b == 0 && n == 0)break;
		for (register int i = 3; i < 300; i++)
		{
			t[i] = f(a, b, i);
		}
		vector<int> v;
		v.push_back(t[3]);
		v.push_back(t[4]);
		int re = 2;
		for (register int i = 5; i < 299; i++)
		{
			if (t[3] == t[i] && t[4] == t[i + 1]) {
				break;
			}
			else
			{
				v.push_back(t[i]);
				re++;
			}
		}
		cout << v[(n - 3) % re]<< endl;
	}
	return 0;
}

