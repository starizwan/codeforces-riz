#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	ll n, p, r;
	cin >> n;

	p = n/2;
	r = n%2 * -n;

	p += r;

	cout << p << "\n";


	return 0;
}