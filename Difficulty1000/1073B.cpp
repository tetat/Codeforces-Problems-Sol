/// Problem Name: Vasya and Books
/// Problem Link: https://codeforces.com/problemset/problem/1073/B

#include <iostream>
#include <cstdio>
using namespace std;
#define len int(2e5)+1
bool test[len];
int main()
{
    int n;
    scanf("%d", &n);
    int a[n],b[n];
    for (int i = 0;i < n;i++)
        scanf("%d", a+i);
    for (int i = 0;i < n;i++)
        scanf("%d", b+i);

    int p = 0;
    for (int i = 0;i < n;i++){
        int tmp = b[i];
        if (test[tmp])printf("0 ");
        else {
            int res = 0;
            while (1){
                res++;
                test[a[p]] = true;
                if (a[p]==tmp)break;
                p++;
            }
            p++;
            printf("%d ", res);
        }
    }
    return puts(""),0;
}
