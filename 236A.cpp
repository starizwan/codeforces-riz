#include <bits/stdc++.h>
#include <regex>
using namespace std;

typedef long long int ll;

int main()
{
	string s;
	int c = 1;
	cin >> s;
	sort(s.begin(), s.end());
	for (int i = 0; i < s.size()-1; ++i)
	{
		if (s[i+1] != s[i])
		{
			c++;
		}
	}
	if (c%2 == 0)
	{
		cout <<"CHAT WITH HER!\n";
	}
	else
	{
		cout << "IGNORE HIM!\n";
	}
	return 0;
}