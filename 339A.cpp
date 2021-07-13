#include <bits/stdc++.h>
#include <regex>
using namespace std;

typedef long long int ll;

int main()
{
	string s;
	regex r("[+]");
	regex q("([1|2|3])");
	cin >> s;

	s = regex_replace(s, r, "");
	sort(s.begin(), s.end());
	s = regex_replace(s, q, "+$1");
	s.erase(s.begin());
	cout << s << "\n";

	return 0;
}