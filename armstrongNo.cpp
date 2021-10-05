#include<bits/stdc++.h>
using namespace std;

int power(int a, unsigned int b)
{
	if(b == 0)
		return 1;
	
    if (b%2 == 0)
		return power(a, b/2)*power(a, b/2);
	
    return x*power(a, b/2)*power(a, b/2);
}

int order(int a)
{
	int n = 0;
	while (a)
	{
		n++;
		a = a/10;
	}
	return n;
}

bool isArmstrong(int a)
{
	int n = order(a);
	int temp = a, sum = 0;
	while (temp)
	{
		int r = temp%10;
		sum += power(r, n);
		temp = temp/10;
	}
	return (sum == a);
}

int main()
{
	int a = 1634;
	cout << isArmstrong(a) << endl;
	a = 120;
	cout << isArmstrong(a) << endl;
	return 0;
}
