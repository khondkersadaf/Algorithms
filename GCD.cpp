#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m)
{
	if (n==m){return m;}
    else if (n>=m) {return gcd(n-m,m);}
    else {return gcd(n,m-n);}

}

int main()
{
	int n = 9;
	int m = 6;
	cout << gcd(n,m);

	return 0;
}
