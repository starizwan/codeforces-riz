#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, t;
	cin >> s >> t;
	int p, q, c = 0;
	p = q = 0;

	while(s[p] != '\0' || t[q] != '\0') {
		if (s[p] == t[q])
		{
			p++;
			q++;
		} else {
			p++;
			c++;
		}
	}
	int m = t.length();
	cout << m << "endl";
	m = m - c + 1;

	cout << m << "\n";

}