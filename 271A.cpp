#include <bits/stdc++.h>
#include <regex>
using namespace std;

typedef long long int ll;

int main() { 
	int n; 
	int a,b,c,d; 
	cin>>n;

	while(true) { 
		n++; 
		a=n%10; 
		b= (n/10)%10; 
		c= (n/100)%10; 
		d= (n/1000)%10; 
		if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) 
			break;
	} 
	
	cout << n << "\n"; 
	return 0; 
}