#include <bits/stdc++.h>
using namespace std;

int ar[1000];

int main(){
	int n, l, h, s = 0, d = 0, turn = true;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> ar[i];
	}

	l = 0; 
	h = n-1;

	while(l <= h) {
		int m = max(ar[l], ar[h]);
		if (ar[l] > ar[h]) {
			m = ar[l];
			l++;
		} else {
			m = ar[h];
			h--;
		}
		if (turn) {
			s += m;
			turn = false;
		} else {
			d += m;
			turn = true;
		}
	}

	cout << s << " " << d << "\n";

	return 0;
}