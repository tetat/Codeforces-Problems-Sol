/// Problem Name: Football Kit
/// Problem Link: https://codeforces.com/problemset/problem/432/B

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

class game {
    public:
    int x, y;
//    int home, away;
};
int cnt[500010];
int main()
{
    int n;scanf("%d", &n);
    game ar[n+1];
//    vector <int> v(n+5, 0);
    for (int i = 0;i < n;i++){
        scanf("%d %d", &ar[i].x, &ar[i].y);
        cnt[ar[i].x]++;
//        ar[i].home = n-1;
//        ar[i].away = 0;
    }
    int tot = (n-1)+(n-1);
    for (int i = 0;i < n;i++){
//        ar[i].home += cnt[ar[i].y];
//        ar[i].away = tot - ar[i].home;
        int home = (n-1) + cnt[ar[i].y];
        printf("%d %d\n", home, tot-home);
    }
//    for (int i = 0;i < n;i++){
//        printf("%d %d\n", ar[i].home, ar[i].away);
//    }
    return 0;
}
