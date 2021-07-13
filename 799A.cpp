#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t, k, d, time = 0, time_ovens = 0;
	cin >> n >> t >> k >> d;

	time = t * ceil((float)n/k);

	while(n > 0) {
		n -= k;
		
		if (time_ovens >= d && n > 0) {
			n -= k;
			time_ovens = time_ovens - d + t;
		}

		time_ovens += t;
		
	}

	if (time_ovens < time) {
		cout << "YES" << "\n";
	} else {
		cout << "NO" << "\n";
	}

return 0;
}