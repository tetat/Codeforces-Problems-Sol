/// Problem Name: Sasha and Magnetic Machines
/// Problem Link: https://codeforces.com/problemset/problem/1113/B

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int ar[105];
int main()
{
    int n, rsum = 0, sum = 0;
    scanf("%d", &n);
    //int a[n+1];
    for (int i = 0;i < n;i++){
        int in;scanf("%d", &in);
        rsum+=in;ar[in]++;
    }
    vector <int> v;
    for (int i = 100;i >= 1;i--){
        if (ar[i])v.push_back(i);
    }
    //for (int i = 0;i < n;i++)printf("%d ", a[i]);puts("");
    sum = rsum;
    int len = v.size();
    int mn = v[len-1];
    //for (int i = 0;i < len;i++)printf("%d ", v[i]);puts("");
    for (int i = 0;i < len;i++){
        for (int j = 2;j <= v[i];j++){
            if (v[i]%j == 0){
                rsum = min(rsum, ((sum+(mn*j)) - (v[i]-(v[i]/j)+mn)));
            }
        }
    }
//    for (int i = 2;i <= 100;i++){
//        for (int j = 100;j > 1;j--){
//            if (ar[j] && j%i==0 && j>=i){
//                rsum = min(rsum, ((sum+(mn*i))-(j-(j/i)+mn)));
//            }
//        }
//    }
    printf("%d\n", rsum);
    //printf("mn = %d, sum = %d\n", mn, sum);
    return 0;
}
