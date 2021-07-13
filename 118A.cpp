#include <iostream>
#include <string>
#include <regex>
using namespace std;

string remVowel(string s)
{
	regex r("[aeiouyAEIOUY]");
	return regex_replace(s, r, "");
}

string addDot(string s)
{
	regex r("([azA-z])");
	return regex_replace(s ,r ,".$1");
}

int main(int argc, char const *argv[])
{
	string s, f; cin >> s;
	s = remVowel(s);
	s = addDot(s);
	for (int i = 0; i < s.size(); ++i)
	{
		putchar(tolower(s[i]));
	}
	cout << "\n";
	return 0;
}