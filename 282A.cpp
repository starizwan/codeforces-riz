#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	int n; cin >> n;
	int x = 0;
	string s;
	while(n--)
	{
		cin >> s;
		if (s == "++X")
			++x;
		else if (s == "X++")
			x++;
		else if (s == "--X")
			--x;
		else
			x--;
	}
	cout << x << "\n";
}