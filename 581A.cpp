#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, mi, ma;
	cin >> a >> b;
	mi = min(a, b);
	ma = max(a, b);

	cout << mi << " " <<(ma-mi)/2 << "\n";


	return 0;
}