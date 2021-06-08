#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, q, r, d = 2020;
	cin >> n;
	
	r = n % d;
	q = n / d;

	if (q >= r)
	{
		cout << "YES";
	}
	else {
		cout << "NO";
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