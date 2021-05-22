/// Problem Name: Turn the Rectangles
/// Problem Link: https://codeforces.com/problemset/problem/1008/B

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
  int w;
  int h;
};

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n;
  cin >> n;
  data rec[n+1];
//  rec[0].w = INT_MAX;
//  rec[0].h = INT_MAX;
  for (int i = 0;i < n;i++){
    cin >> rec[i].w >> rec[i].h;
  }
  string ans = "YES";
  if (rec[0].w > rec[0].h)swap(rec[0].w, rec[0].h);
  for (int i = 1;i < n;i++){
    if (rec[i-1].h < rec[i].h){
      if (rec[i-1].h >= rec[i].w){
        swap(rec[i].w, rec[i].h);
      }else {ans = "NO";break;}
    }
    else {
      if (rec[i-1].h >= rec[i].w && rec[i].w > rec[i].h)swap(rec[i].w, rec[i].h);
    }
  }
  cout << ans << '\n';
  return 0;
}
