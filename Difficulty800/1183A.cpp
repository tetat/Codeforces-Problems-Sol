/// Problem Name: Nearest Interesting Number
/// Problem Link: https://codeforces.com/problemset/problem/1183/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, len = 1000;
    scanf("%d", &n);
    while (true){
        int tmp = n;
        int sum = 0;
        while (tmp){
            sum += tmp % 10;
            tmp = tmp / 10;
        }
        if (sum%4==0)break;
        n++;
    }
    printf("%d\n", n);
    return 0;
}
