/// Problem Name: Uniform String
/// Problem Link: https://codeforces.com/problemset/problem/1092/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t;scanf("%d", &t);
    while (t--){
        int n, k;
        scanf("%d %d", &n, &k);
        for (int i = 0, j = 0;i < n;i++){
            printf("%c", 97+j++);
            if (j==k)j = 0;
        }puts("");
    }
    return 0;
}
