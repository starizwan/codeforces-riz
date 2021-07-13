#include <bits/stdc++.h>
#include <regex>
using namespace std;

typedef long long int ll;

int main()
{
	int l, r;
	string s;
	cin >> s;

	l = r = 0;
	for (int i = 0; i < s.size(); ++i){
		if (s[i] >= 'a' && s[i] <= 'z') {
			l++;
		}
	}

	r = s.size() - l;
	if (l >= r) {
		transform(s.begin(), s.end(), s.begin(), ::tolower);
	} else {
		transform(s.begin(), s.end(), s.begin(), ::toupper);
	}
	
	cout << s << "\n";
}