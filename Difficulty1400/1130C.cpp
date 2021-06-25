/// Problem Name: Connect
/// Problem Link: https://codeforces.com/problemset/problem/1130/C

#include <iostream>
#include <cstdio>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

string s[55];
vector <pair <int, int> > a, b;
int n, l1, l2;
bool checka[55][55];
bool checkb[55][55];

void searcha(int i, int j){
    if (i < 1 || j < 1 || i > n || j > n || s[i-1][j-1]=='1' || checka[i][j])return;
    else {
        checka[i][j] = 1;
        a.push_back(make_pair(i, j));
        searcha(i-1, j);
        searcha(i, j-1);
        searcha(i, j+1);
        searcha(i+1, j);
    }
}
void searchb(int i, int j){
    if (i < 1 || j < 1 || i > n || j > n || s[i-1][j-1]=='1' || checkb[i][j])return;
    else {
        checkb[i][j] = 1;
        b.push_back(make_pair(i, j));
        searchb(i-1, j);
        searchb(i, j-1);
        searchb(i, j+1);
        searchb(i+1, j);
    }
}
int main()
{
    scanf("%d", &n);
    int p1, p2, p3, p4;
    scanf("%d %d %d %d", &p1, &p2, &p3, &p4);
    for (int i = 0;i < n;i++){
        cin >> s[i];
    }
    searcha(p1, p2);
    searchb(p3, p4);
    l1 = a.size();
    l2 = b.size();
    //for (int i = 0;i < l1;i++)printf("%d %d\n", a[i].first, a[i].second);
    //for (int i = 0;i < l2;i++)printf("%d %d\n", b[i].first, b[i].second);
    int res = INT_MAX;
    for (int i = 0;i < l1;i++){
        for (int j = 0;j < l2;j++){
            int mn1 = ((a[i].first - b[j].first) * (a[i].first - b[j].first));
            int mn2 = ((a[i].second - b[j].second) * (a[i].second - b[j].second));
            res = min(mn1+mn2, res);
        }
    }
    printf("%d\n", res);
    return 0;
}
