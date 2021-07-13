#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n, r, x;
	r = n = x = 0;
	cin >> n;

	x = ((int)log2(n));
	x = pow(2, x);

	r = n - x;
	r++;

	cout << r << "\n";


	return 0;
}