#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	string s = "Malvika";

	while (1) {
			if (n*m != 0)
			{
				s = (s == "Akshat") ? "Malvika" : "Akshat";
				n--;
				m--;
			}
			if (n == 0 || m == 0) {
				cout << s << "\n";
				return 0;
			}
	}
}