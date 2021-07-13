#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {

	ll n,k,h,r;
	cin >> n >> k;
	h = ceil((double)n/2);

	if (k > h) {
		r = 2*(k-h);
		cout << r << "\n";
	} else {
		r = 2*k - 1;
		cout << r << "\n";
	}


	return 0;
}