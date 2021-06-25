/// Problem Name: Funky Numbers
/// Problem Link: https://codeforces.com/problemset/problem/192/A

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

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  Long i = 1;
  Long lim = 1e9;
  vector <Long> v;
  while (((i*(i+1))/2) <= lim){
    v.pb(Long((i*(i+1))/2));
    i++;
  }
  //cout << v.size() << '\n';
  Long n;
  cin >> n;
  string ans = "NO";
  for (int i = 0;i < v.size() && v[i] <= n;i++){
    Long ss = n-v[i];
    int L = 0;
    int R = v.size()-1;
    while (L <= R){
      int mid = L + (R-L)/2;
      if (ss < v[mid])R = mid-1;
      else if (ss > v[mid])L = mid+1;
      else {
        ans = "YES";
        break;
      }
    }
    if (ans=="YES")break;
  }
  cout << ans << '\n';
  return 0;
}
