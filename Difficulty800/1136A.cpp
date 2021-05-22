/// Problem Name: Nastya Is Reading a Book
/// Problem Link: https://codeforces.com/problemset/problem/1136/A

#include <iostream>
#include <cstdio>
using namespace std;

class book {
public:
    int l, r;
};
int main()
{
    int n;scanf("%d", &n);
    book a[n+1];
    for (int i = 0;i < n;i++){
        scanf("%d %d", &a[i].l, &a[i].r);
    }
    int k;scanf("%d", &k);
    int res = n;
    for (int i = 0;i < n;i++){
        if (a[i].r < k)res--;
        else break;
    }
    printf("%d\n", res);
    return 0;
}
