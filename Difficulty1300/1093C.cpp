/// Problem Name: Mishka and the Last Exam
/// Problem Link: https://codeforces.com/problemset/problem/1093/C

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;scanf("%d", &n);
    int len = n/2;
    long long a[len];
    for (int i = 0;i < len;i++){
        cin >> a[i];
    }
    long long tmp = 0;
    for (int i = 0;i < len;i++){
        if (i){
            if (a[i]>a[i-1]){
                if (a[i]-a[i-1] < tmp)a[i]-=tmp;
                else tmp = a[i]-a[i-1],a[i]-=tmp;
            }
            else {
                a[i]-=tmp;
            }
            cout << tmp << " ";
        }
        else printf("0 ");
    }
    sort(a, a+len);
    for (int i = 0;i < len;i++)cout << a[i] << " ";
    return puts(""), 0;
}
