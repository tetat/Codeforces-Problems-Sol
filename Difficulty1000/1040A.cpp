/// Problem Name: Palindrome Dance
/// Problem Link: https://codeforces.com/problemset/problem/1040/A

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n, w, b;
    scanf("%d %d %d", &n, &w, &b);
    int ar[n];bool t = true;
    for (int i = 0;i < n;i++)scanf("%d", &ar[i]);
    for (int i = 0;i < n;i++)if (ar[i] == 2){t = false;break;}
    int len = n;
    (n%2)?len/=2,len++:len/=2;
    if (t){
        for (int i = 0, j = n-1;i < len;i++,j--)if (ar[i] != ar[j]){t = false;break;}
    }
    if (t)return printf("0\n"), 0;
    for (int i = 0, j = n-1;i < len;i++, j--){
        if (ar[i]!=2&&ar[j]!=2){
            if (ar[i]!=ar[j]){t=true;break;}
        }
    }
    if (t)return printf("-1"), 0;
    int cost = 0;
    for (int i = 0, j = n-1;i < len;i++, j--){
        if (ar[i] == 2 && ar[j] != 2)ar[j]==0?cost += w:cost += b;
        else if (ar[i] != 2 && ar[j] == 2)ar[i]==0?cost += w:cost += b;
        else if (ar[i] == 2 && ar[j] == 2){
            if (i!=j)cost += min(w,b)*2;
            else cost += min(w,b);
        }
    }
    return printf("%d\n", cost), 0;
}
