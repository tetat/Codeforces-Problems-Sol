/// Problem Name: The Pleasant Walk
/// Problem Link: https://codeforces.com/problemset/problem/1090/M

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, k, num, tmp, res = 1, t = 1;
    scanf("%d %d %d", &n, &k, &tmp);
    while (--n){
        scanf("%d", &num);
        if (tmp!=num)t++;
        else {if (res < t)res = t;t = 1;}
        tmp = num;
    }
    printf("%d\n", res>t?res:t);
    return 0;
}
