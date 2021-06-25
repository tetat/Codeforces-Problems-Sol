/// Problem Name: Summarize to the Power of Two
/// Problem Link: https://codeforces.com/problemset/problem/1005/C

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

const int N = 1e6;

vector <int> v;
int find_other(int num, int L, int R){
  while (L <= R){
    int mid = L + (R-L)/2;
    if (v[mid] < num)L = mid+1;
    else if (v[mid] > num)R = mid-1;
    else return mid;
  }
  return -1;
}

int main()
{
  FastIO();
  int tc, ca = 0;
  vector <int> p;
  int imx = INT_MAX;
  Long p_in = 1;
  while (p_in < imx){
    p.pb(int(p_in));
    p_in += p_in;
  }
  int n, el;
  cin >> n;
  //vector <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  sort(v.begin(), v.end());
  int len = p.size();
  int ans = 0;
  bool mark[n] = {false};
  for (int i = 0;i < n;i++){
    if (mark[i]==false){
      int ad = 1;
      for (int j = 0;j < len;j++){
        if (v[i] < p[j]){
          int tm = p[j]-v[i];
          if (tm==v[i]){
            if (i-1>=0 && v[i]==v[i-1]){
              ad = 0;
              break;
            }
            if (i+1 < n && v[i]==v[i+1]){
              ad = 0;
              break;
            }
          }else {
            int po = find_other(tm, 0, n-1);
            if (po != -1){
              ad = 0;
              mark[i] = true;
              mark[po] = true;
              break;
            }
          }
        }
      }
      ans += ad;
    }
  }
  cout << ans << '\n';
  return 0;
}
