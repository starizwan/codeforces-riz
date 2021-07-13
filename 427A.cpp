#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, temp, crime = 0, cop = 0, untreated = 0;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> temp;
		if (temp == -1) {
			// crime
			if (cop == 0) {
				untreated++;
			}
			else {
				cop--;
			}
		} else {
			cop += temp;
		}
	}

	cout << untreated << "\n";

	return 0;
}

/*
8
1 -1 1 -1 -1 1 1 1





*/