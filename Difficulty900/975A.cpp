/// Problem Name: Aramic script
/// Problem Link: https://codeforces.com/problemset/problem/975/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

struct data {
  string s;
  int mark[26];
};

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n;
  cin >> n;
  data ar[n];
  for (int i = 0;i < n;i++){
    cin >> ar[i].s;
    for (int j = 0;j < 26;j++){
      ar[i].mark[j] = 0;
    }
    int len = ar[i].s.size();
    for (int j = 0;j < len;j++){
      ar[i].mark[ar[i].s[j]-97]++;
    }
  }
  int ans = 0;
  for (int i = 0;i < n;i++){
    if (ar[i].s != "-1"){
      for (int j = i+1;j < n;j++){
        bool ok = true;
        for (int k = 0;k < 26;k++){
          if (!(ar[i].mark[k] && ar[j].mark[k]) && !(!ar[i].mark[k] && !ar[j].mark[k])){
            ok = false;
            break;
          }
        }
        if (ok){
          ar[j].s = "-1";
        }
      }
      ans++;
      ar[i].s = "-1";
    }
  }
  cout << ans << '\n';
  return 0;
}
