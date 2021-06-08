#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, t, sum, ctwo, cthree;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		sum = ctwo = cthree = 0;
		cin >> n;
		// factorise //
		while(n%3 == 0) 
		{
			n /= 3;
			cthree++;
		} 
		while(n%2 == 0) 
		{
			n /= 2;
			ctwo++;
		}
		if (n != 1)
		{
			cout << -1 << "\n";
			
		}
		else if (ctwo > cthree)
		{
			cout << -1 << "\n";
			
		}
		else 
		{
			sum = cthree - ctwo;
			sum += cthree;
			cout << sum << "\n";
		}
	}
	
	return 0;
}

/*
	Algo:
	1. Factorise n
	2. If contains anything other than 2 & 3 then print -1
	3. If count(2) > count(3) then print -1
	4. Else sum = count(3) - count(2);
			sum += count(3)
			print sum
*/