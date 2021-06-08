#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, a, b;
	cin >> n >> a >> b;
	char c = 'a';

	for (int i = 1; i <= n; ++i)
	{
		cout << c++;
		if (i%b == 0)
		{
			c = 'a';
		}
	}

}


int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		solve();
		cout << "\n";
	}
}

/*
Algo:
	1. Start from a and print
	2. Whenever we have printed 'b' numbers of distinct letter repeat
*/