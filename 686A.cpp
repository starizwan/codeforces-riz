#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t, d = 0;
	long long int p;
	char ch;
	cin >> n >> p;
	for (int i = 0; i < n; ++i)
	{
		cin >> ch;
		cin >> t;
		if (ch == '-') {
			if (p-t >= 0) {
				p -= t;
			} else {
				d++;
			}
		} else if (ch == '+') {
			p += t;
		}
	}

	cout << p << " " << d << "\n";
	return 0;
}