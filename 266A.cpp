#include <bits/stdc++.h>
#include <regex>
using namespace std;

typedef long long int ll;

int main()
{
	string s;
	int n, c = 0;
	cin >> n;
	cin >> s;
	for (int i = 0; i < n-1; ++i)
	{
		if (s[i] == s[i+1])
			c++;
	}
	cout << c << "\n";
	return 0;
}