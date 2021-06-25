/// Problem Name: Gambling
/// Problem Link: https://codeforces.com/problemset/problem/1038/C

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
//#define N 100010
//int a[N],b[N];
int64_t A, B;
bool cmp(int a,int b){
    return a>b;
}
int main()
{
    int n;scanf("%d", &n);
    int a[n+1],b[n+1];
    a[n] = 0;b[n] = 0;
    for (int i = 0;i < n;i++)
        scanf("%d", &a[i]);
    for (int i = 0;i < n;i++)
        scanf("%d", &b[i]);

    sort(a,a+n,cmp);
    sort(b,b+n,cmp);
    int l1,l2;l1 = l2 = 0;
    for (int i = 0;i < n;i++){
        if (a[l1] > b[l2])A+=a[l1],l1++;
        else l2++; //printf("%d %d\n",l1,l2);
        if (a[l1] < b[l2])B+=b[l2],l2++;
        else l1++; //printf("%d %d\n",l1,l2);
    }
    cout << A-B << endl;
    return 0;
}
