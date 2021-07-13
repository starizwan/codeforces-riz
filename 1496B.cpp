#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k,a[100000],s,max,mex;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		for (int i = 0; i < n; ++i) {
				cin >> a[i];
		}
		while(k--) {	
			sort(a, a+n);
			max = a[n-1];
			for (int i = 0; i < n; ++i) {
				if (a[i] != i) {
					mex = i;
					break;
				}
			}
			s = ceil((max+mex)/2.0);
			if (a[s] != s) {
				a[n] = s;
				n++;
			}
		}
		cout << n << "\n";
	}

	return 0;
}