#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a[100000], c = 0, max = 0;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	for (int i = 0; i < n-1; ++i) {
		if (a[i] <= a[i+1]) {
			c++;
		}
		else {
			max = (max >= c) ? max : c;
			c = 0;
		}
	}

	max = (max >= c) ? max : c;


	cout << max+1 <<"\n";

	return 0;
}