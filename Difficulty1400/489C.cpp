/// Problem Name: Given Length and Sum of Digits...
/// Problem Link: https://codeforces.com/problemset/problem/489/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e4;

int d[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, s;
  cin >> n >> s;
  if (n==1 && s==0){
    cout << "0 0" << '\n';
    return 0;
  }
  vector <int> a;
  int zero = 0;
  int tm = s;
  int i = 0;
  while (n && s){
    if (s >= d[i]){
      if (d[i]==0)zero++;
      s -= d[i];
      a.pb(d[i]);
      n--;
    }else i++;
  }
  //if (a.size()==0)a.pb(0);
  //cout << zero << '\n';
  if (zero==a.size() || s){
    cout << "-1 -1" << '\n';
  }else {
    while (n--){
      a.pb(0);
    }
    sort(a.begin(), a.end());
    string mx;
    for (int i = a.size()-1;i >= 0;i--){
      mx += a[i]+48;
    }
    for (int i = 0;i < a.size();i++){
      if (a[i]){
        if (a[i]==1)swap(a[0], a[i]);
        else {
          a[0]++;
          a[i]--;
        }
        break;
      }
    }
    string mn;
    for (int i = 0;i < a.size();i++){
      mn += a[i]+48;
    }
    cout << mn << ' ' << mx << '\n';
  }
  return 0;
}
