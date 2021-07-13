#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s;
	long long int r = 0;
	cin >> n;
	while(n--) {
		cin >> s;
		if (s == "Tetrahedron") {
			r += 4;
		} else if (s == "Cube") {
			r += 6;
		} else if (s == "Octahedron") {
			r += 8;
		} else if (s == "Dodecahedron") {
			r += 12;
		} else if (s == "Icosahedron") {
			r += 20;
		}
	}

	cout << r << "\n";

	return 0;
}