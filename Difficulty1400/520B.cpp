/// Problem Name: Two Buttons
/// Problem Link: https://codeforces.com/problemset/problem/520/B

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int head, tail;
    scanf("%d %d", &head, &tail);
    if (head >= tail)printf("%d\n", head-tail);
    else {
        int res = 0;
        while (tail > head){
            if (tail&1)res++,tail++;
            else tail>>=1,res++;
        }
        printf("%d\n", res+(head-tail));
    }
    return 0;
}
