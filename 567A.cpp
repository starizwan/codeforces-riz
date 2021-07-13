#include <bits/stdc++.h>
using namespace std;

int ar[100000];

int main() {
	int n, d_max_l, d_max_r, d_min_l, d_min_r;
	int x, y;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> ar[i];
	}

	cout << abs(ar[1] - ar[0]) << " " << abs(ar[n-1] - ar[0]) << "\n";

	for (int i = 1; i < n-1; ++i) {
		d_min_l = abs(ar[i] - ar[i-1]);
		d_min_r = abs(ar[i+1] - ar[i]);
		x = min(d_min_r, d_min_l);

		d_max_l = abs(ar[i] - ar[0]);
		d_max_r = abs(ar[n-1] - ar[i]);
		y = max(d_max_r, d_max_l);

		cout << x << " " << y << "\n";
	}

	cout << abs(ar[n-1] - ar[n-2]) << " "<<  abs(ar[n-1] - ar[0]) << "\n";


	return 0;
}