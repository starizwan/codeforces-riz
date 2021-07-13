#include <bits/stdc++.h>
#include <regex>
using namespace std;

typedef long long int ll;

int main()
{
	int test, n, k, t;
	bool flag;
	string s, r;

	cin >> test;

	while(test--) {	
		cin >> n >> k;
		cin >> s;
		flag = true;

		t = n/(2*k+1);
		r = s;
		reverse(r.begin(), r.end());

		if(t > 0) {
			for (int i = 0; i < k; ++i) {
				if (s[i] != r[i]) {
					flag = false;
					break;
				}
			}
		} else {
			flag = false;
		}

		if (flag) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}


	return 0;
}