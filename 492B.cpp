#include <bits/stdc++.h>
using namespace std;

double ar[1001];

int main() {
	int n, l, d, m, first;
	double r;
	cin >> n >> l;
	
	for (int i = 0; i < n; ++i) {
		cin >> ar[i];
	}
	sort(ar, ar+n);

	m = ar[0]*2;
	for (int i = 0; i < n-1; ++i) {
		d = ar[i+1] - ar[i];
		m = max(m, d);
	}
	
	r = m/2.0;
	
	printf("%.9f\n", r);
	return 0;
}