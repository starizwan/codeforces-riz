#include <bits/stdc++.h>
#include <string>
using namespace std;

typedef long long int ll;

int main() {
	string n, m;
	int a, b;
	cin >> n >> m;

	for (int i = 0; i < n.size(); ++i) {
		a = (int)n[i];
		b = (int)m[i];
		b = b ^ a;
		cout << b;
	}
	cout << "\n";


	return 0;
}