#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool is_digits(const std::string &str)
{
    return str.find_first_not_of("47") == std::string::npos;
}

int main()
{
	int n;
	std::vector<int> v;
	cin >> n;

	for (int i = 4; i <= n; ++i)
	{
		if (is_digits(to_string(i)))
		{
			v.push_back(i);
		}
	}

	 for (auto i = v.begin(); i != v.end(); ++i) {
		if (n%(*i) == 0)
	 	{
	 		cout << "YES\n";
	 		return 0;
	 	}
	 }

	 cout  << "NO\n";
	return 0;
}