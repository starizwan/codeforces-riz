#include <bits/stdc++.h>
using namespace std;

int wires[101];

int main() {
	int n, shot, x, y;
	cin >> n;

	for (int i = 1; i < n+1; ++i) {
		cin >> wires[i];
	}

	cin >> shot;

	for (int i = 1; i < shot+1; ++i) {
		cin >> x >> y;
		int left = y - 1;
		int right = wires[x] - y;

		
			wires[x-1] += left;
		
			wires[x+1] += right;
		
		wires[x] = 0;
	}

	for (int i = 1; i < n+1; ++i) {
		cout << wires[i] << "\n";
	}


	return 0;
}