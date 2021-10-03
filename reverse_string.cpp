#include <bits/stdc++.h>
using namespace std;

void reverseString(string& str)
{
	int s = str.length();

	for (int i = 0; i < s / 2; i++)
		swap(str[i], str[s - i - 1]);
}

int main()
{
	string str = "hello";
	reverseString(str);
	cout << str;
	return 0;
}
