#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,d,t,sum = 0;
	string n;
	cin >> a >> b >> c >> d;
	cin >> n;

	for(int i = 0; i < n.size(); i++) {

		t =  n[i] - 48;
		if (t == 1) {
			sum += a;
		} else if (t == 2) {
			sum += b;
		} else if (t == 3) {
			sum += c;
		} else if (t == 4) {
			sum += d;
		}

	}

	cout << sum << "\n";

	return 0;
}