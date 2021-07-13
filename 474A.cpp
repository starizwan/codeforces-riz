#include <bits/stdc++.h>
using namespace std;

int main() {
	string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
	string r;
	char ch;
	int n, z = 0;
	cin >> ch;

	if (ch == 'L') {
		n = 0;
	} else {
		n = -2;
	}

	cin >> r;
	for (int i = 0; i < r.size(); ++i)
	{
		z = 0;
		while(r[i] != s[z++]);
		z += n;
		cout << s[z];
	}

	cout << "\n";


	return 0;
}