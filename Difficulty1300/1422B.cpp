/// Problem Name: Nice Matrix
/// Problem Link: https://codeforces.com/problemset/problem/1422/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    long long n, m;
    cin >> n >> m;
    vector <vector <long long> > a(n);
    long long sum = 0;
    long long el;
    for (int i = 0;i < n;i++){
      for (int j = 0;j < m;j++){
        cin >> el;
        sum += el;
        a[i].push_back(el);
      }
    }
    vector <vector <long long> > ar((n*m)+10);
    int L = 0;
    for (int i = 0;i < (n+1)/2;i++){
      int I = 0;
      int J = m-1;
      while (I <= J){
        int x = i;
        int y = (n-i)-1;
        if (I==J && x==y){
          I++;
          J--;
        }else if (I==J || x==y){
          //ar.push_back(make_pair(a[x][I]+a[y][J], 2));
          ar[L].push_back(a[x][I]);
          ar[L].push_back(a[y][J]);
          ar[L].push_back(a[x][I]+a[y][J]);
          ar[L].push_back(2);
          I++;
          J--;
          L++;
        }else {
          //ar.push_back(make_pair(a[x][I]+a[x][J]+a[y][I]+a[y][J], 4));
          ar[L].push_back(a[x][I]);
          ar[L].push_back(a[x][J]);
          ar[L].push_back(a[y][I]);
          ar[L].push_back(a[y][J]);
          ar[L].push_back(a[x][I]+a[x][J]+a[y][I]+a[y][J]);
          ar[L].push_back(4);
          I++;
          J--;
          L++;
        }
      }
    }
    long long ans = 0;
//    for (int i = 0;i < L;i++){
//      for (int j = 0;j < ar[i].size();j++){
//        cout << ar[i][j] << ' ';
//      }cout << '\n';
//    }
    for (int i = 0;i < L;i++){
      if (ar[i].size()){
        int len = ar[i].size();
        long long d = ar[i][len-2]/ar[i][len-1];
        long long mn = 1e18;
        for (int j = 0;j < len-2;j++){
          long long tmp = 0;
          for (int l = 0;l < len-2;l++){
            tmp += abs(ar[i][j]-ar[i][l]);
          }
          mn = min(mn, tmp);
        }
        for (long long k = d-10;k <= d+10;k++){
          long long tmp = 0;
          for (int j = 0;j < len-2;j++){
            tmp += abs(ar[i][j]-k);
          }
          mn = min(mn, tmp);
        }
        ans += mn;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
