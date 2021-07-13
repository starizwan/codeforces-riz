#include <bits/stdc++.h>
using namespace std;

double ar[1000];

int main() {
	int n, l, m, t;
	double r;
	cin >> n >> l;
	for (int i = 0; i < n; ++i)
	{
		cin >> ar[i];
	}
	sort(ar, ar+n);

	m = ar[0];
	for (int i = 0; i < n-1; ++i)
	{
		t = ar[i+1] - ar[i];
		t /= 2;
		m = max(t, m);
	}
	t = (l - ar[n]);
	m = max(t, m);

	r = 2.0*m;

	printf("%.9f\n", r);
	return 0;
}