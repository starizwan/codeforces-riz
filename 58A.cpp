#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	string s, r = "hello";
	cin >> s;
	int j = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == r[j]) {
			j++;
			if (j == 5) {
				cout << "YES\n";
				return 0;
			}
		}
	}
	cout << "NO\n";
	return 0;
}