#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, a[50], min;
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		cin >> a[i];
	}
	sort(a, a+m);
	min = a[n-1] - a[0];
	for (int i = 0; i <= m-n; ++i) {
		if (a[n+i-1] - a[i] < min) {
			min = a[n+i-1] - a[i];
		}
	}
	cout << min << "\n";
	return 0;
}