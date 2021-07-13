#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, arr[4], max;
	cin >> a >> b >> c;
	
	arr[0] = a*b*c;
	arr[1] = (a+b)*c;
	arr[2] = a*(b+c);
	arr[3] = a+b+c;

	max = arr[0];
	for (int i = 0; i < 4; ++i)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	cout << max << "\n";

	return 0;
}