#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int a,b,c,d,z=0;
	cin >> a >> b >> c >> d;
	if (a == b || a == c || a == d) {
		z++;
	}
	if (b == c || b == d) {
		z++;
	}
	if (c == d) {
		z++;
	}
	cout << z << "\n";

}