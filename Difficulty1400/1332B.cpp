/// Problem Name: Composite Coloring
/// Problem Link: https://codeforces.com/problemset/problem/1332/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int p[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
int len = 11;

void test(){
  for (int i = 4;i <= 1000;i++){
    for (int j = 0;j < len;j++){
      if (i%p[j]==0){
        cout << i << ' ' << p[j] << ": " << i%p[j] << '\n';
      }
    }
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  //test();
  cin >> tc;
  while (tc--){
    int n, el;
    cin >> n;
    vector <int> v;
    vector <int> col(n, 0);
    for (int i = 0;i < n;i++){
      cin >> el;
      v.pb(el);
    }
    int c = 1;
    for (int i = 0;i < len;i++){
      bool us = false;
      for (int j = 0;j < n;j++){
        if (col[j]==0){
          if (v[j]%p[i]==0){
            col[j] = c;
            us = true;
          }
          //us = true;
        }
      }
      if (us)c++;
    }
    cout << c-1 << '\n';
    for (int i = 0;i < n;i++){
      cout << col[i];
      if (i != n-1)cout << ' ';
    }cout << '\n';
  }
  return 0;
}
