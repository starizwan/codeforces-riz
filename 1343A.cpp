#include <bits/stdc++.h>
using namespace std;


int main() {
	int test, n, x, t;
	cin >> test;
	while (test--) {
		cin >> n;
		int i = 2;
		while (1)
		{
			t = pow(2,i);
			if (n % (t-1) == 0) {
				x = n / (pow(2,i)-1);
				break;
			}
			i++;
		}
		cout << x << "\n";
	}

	return 0;
}