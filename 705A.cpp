#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i < n+1; ++i) {
		if (i%2 == 1) {
			cout << "I hate ";
		} else if (i%2 == 0) {
			cout << "I love ";
		}
		if (i != n) {
			cout << "that ";
		}
	}

	cout << "it\n";

	return 0;
}