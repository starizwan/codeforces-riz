#include <bits/stdc++.h>
using namespace std;

int ar[26];

int main() {
	int n;
	string s;
	cin >> n >> s;

	transform(s.begin(), s.end(), s.begin(), ::toupper);

	for (int i = 0; i < s.size(); ++i) {
		char c = s[i];
		ar[(int)c-65] = 1;	
	}

	for (int i = 0; i < 26; ++i) {
		if (ar[i] != 1) {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";

	return 0;
}