#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long int n) 
{
	long long int sqrtn = ceil(sqrt(n));
	for (int i = 3; i <= sqrtn; i += 2)
	{
		if (n%i == 0)
		{
			return false;
		}
	}
	return true;
}

int main(int argc, char const *argv[])
{
	int t;
	long long int n;
	double r;

	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		cin >> n;
		r = log2(n);
		if (r-floor(r) == 0)
		{
			cout << "NO" << "\n";
		}
		else 
		{
			cout << "YES" << "\n";
		}
		
		
	}

	return 0;
}

/*
	Algo:
	1. if the number is only in power of 2 print NO
	2. else print YES

*/