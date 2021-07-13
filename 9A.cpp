#include <bits/stdc++.h>
using namespace std;

int hcf(int x, int y) {
	int m = min(x, y);
	while (x%m != 0 || y%m != 0)
	{
		m--;
	}
	return m;
}

int main() {
	int x, y, m;
	int n, d;

	cin >> x >> y;
	m = max(x, y);

	n = 6 - m + 1;
	d = 6;

	int lcm = hcf(n, d);

	while(lcm != 1) {
		n = n/lcm;
		d = d/lcm;
		lcm = hcf(n, d);
	}

	cout << n<<"/"<<d << "\n";
	return 0;
}