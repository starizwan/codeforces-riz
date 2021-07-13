#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	char ch = 'a';
	cin >> n >> k;


	for (int i = 0; i < n; ++i) {
		cout << ch;
		ch++;
		if (ch - 96 > k)
		{
			ch = 'a';
		}
	}
	cout << "\n";
	return 0;
}