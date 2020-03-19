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

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	register int n;
	while (cin >> n)
	{
		if (n == 0)break;
		map<string, int> m;
		for (register int i = 0; i < n; i++)
		{
			string s;
			cin >> s;
			m[s]++;
		}
		int _max = 0;
		string out = "";
		for (map<string, int>::iterator t=m.begin();t!=m.end();t++)
		{
			if (_max < t->second)
			{
				out = t->first;
				_max = t->second;
			}
		}
		cout << out << endl;
	}
	return 0;
}

