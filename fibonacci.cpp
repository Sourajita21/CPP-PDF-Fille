#include<bits/stdc++.h>
using namespace std;
 
int fibonacci(int num)
{
    if(num <= 1)
        return num;
    return fibonacci(num - 1) + fibonacci(num - 2);
}
 
int main()
{
    int num = 9;
    cout << fibonacci(num);
    getchar();
    return 0;
}