#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, c = 1, r = 0;
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); ++i) {
		t = s[i] - 96;
		if (abs(t - c) > 13) {
			r += 26 - abs(t-c)%26;
		} else {
			r += abs(t-c);
		}
		c = t;
	}

	cout << r << "\n";

	return 0;
}