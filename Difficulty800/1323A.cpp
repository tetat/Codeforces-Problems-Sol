/// Problem Name: Even Subset Sum Problem
/// Problem Link: https://codeforces.com/problemset/problem/1323/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 4e3;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, el;
    cin >> n;
    vector <int> v;
    for (int i = 0;i < n;i++){
      cin >> el;
      v.pb(el);
    }
    bool found = false;
    vector <int> sub;
    for (int i = 0;i < n;i++){
      for (int L = 0, R = i;R < n;R++, L++){
        vector <int> tm;
        int sum = 0;
        for (int j = L;j <= R;j++){
          sum += v[j];
          tm.pb(j+1);
        }
        if (sum%2==0){
          sub = tm;
          found = true;
          break;
        }
      }
      if (found)break;
    }
    if (found){
    int len = sub.size();
    cout << len << '\n';
    for (int i = 0;i < len;i++){
      cout << sub[i];
      if (i != len-1)cout << ' ';
    }cout << '\n';
  }else cout << "-1" << '\n';
  }

  return 0;
}
