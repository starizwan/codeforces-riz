#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	bool flag = false;

	for (int i = 0; i < n; ++i) {
		if (i%2 != 1) {
			for (int j = 0; j < m; ++j) {
				cout << "#";
			}
		} else {
			if (flag) {
				cout << "#";
			}
			for (int j = 0; j < m-1; ++j) {
				cout << ".";
			}
			if (!flag) {
				cout << "#";
			}
			flag = flag ? false : true;
		}
		cout << "\n";
	}
	return 0;
}