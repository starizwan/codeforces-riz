#include <bits/stdc++.h>
using namespace std;

int ar[26], arz[26];

int main() {
	string a, b, c;
	cin >> a >> b >> c;

	memset(ar, 0, 26);
	memset(arz, 0, 26);

	for (int i = 0; i < a.size(); ++i) {
		char z = a[i];
		ar[(int)z-65] = ar[(int)z-65] + 1;
	}

	for (int i = 0; i < b.size(); ++i) {
		char z = b[i];
		ar[(int)z-65] = ar[(int)z-65] + 1;
	}

	for (int i = 0; i < c.size(); ++i) {
		char z = c[i];
		arz[(int)z-65] = arz[(int)z-65] + 1;
	}

	for (int i = 0; i < 26; ++i)
	{
		if (ar[i] != arz[i]) {
			cout << "NO\n";
			return 0;
		}
	}

	cout << "YES\n";
	return 0;

}