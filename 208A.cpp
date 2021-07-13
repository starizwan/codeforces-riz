#include <bits/stdc++.h>
#include <regex>
using namespace std;

int main() {
	string s, p="WUB";
	cin >> s;

	string::iterator it = s.begin();

	while(it != s.end()) {
		it = search(s.begin(), s.end(), p.begin(), p.end());
		if (it != s.end()) {
			s.erase(it, it+p.size());
			s.insert(it, ' ');
		}
	}

	for (int i = 0; i < s.size()-1; ++i) {
		if (s[i]== ' ' && s[i+1]== ' ') {
			s.erase(s.begin()+i);
			i--;
		}
	}

	if(s[0] == ' ') 
		s.erase(s.begin());

	cout << s << "\n";
}