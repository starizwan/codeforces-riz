#include <bits/stdc++.h>
using namespace std;

string s;
int arr[123],sum =0;

int main() {
	getline(cin, s);

	for (int i = 1; i < s.size(); i+=3) {
		arr[(int) s[i]] = 1;
	}
	for (int i = 0; i < 123; ++i) {
		sum += arr[i];
	}

	cout << sum << "\n";
	return 0;
}