#include <iostream>
using namespace std;

int search(int a[], int x, int n)
{
	int i;
	for (i = 0; i < n; i++)
		if (a[i] == x)
			return i;
	return -1;
}

int main(void)
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int x = 10;
	int n = sizeof(a) / sizeof(a[0]);

	int result = search(a, n, x);
	if(result == -1)
		cout << "Element is not present in array";
    else
		cout << "Element is present at index " << result;
	return 0;
}
