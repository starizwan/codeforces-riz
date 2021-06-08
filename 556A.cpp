#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int ar[200000];

int main()
{
	long long int n, cz, co, d, t;
	cin >> n;

	co = cz = 0;

	for (int i = 0; i < n; ++i)
	{
		scanf("%1d",&ar[i]);
		
	}

	for (int i = 0; i < n; ++i)
	{
		t = ar[i];
		if (t == 0)
		{
			cz++;
		}
		else 
		{
			co++;
		}
	}
	cout << abs(cz - co) << "\n";

	return 0;
}


/*
Algo:
	1. Only trick is to store the number in an array rest is simple
	2. count no of zeros and ones subtract them and print modulo
	3. Since whichever is the minimum only that many pairs can be erased

*/


