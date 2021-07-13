#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[100],n,max,min,c=0,pos_min,pos_max;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	max=min=a[0];
	pos_max = pos_min = 0;

	for (int i = 0; i < n; ++i) {
		if (a[i] > max)
		{
			max = a[i];
			pos_max = i;
		}
		if (a[i] <= min)
		{
			min = a[i];
			pos_min = i;
		}
	}

	c += pos_max;
	c += n-1-pos_min;
	if (pos_max - pos_min > 0)
	{
		c--;
	}

	cout << c << "\n";
	return 0;
}