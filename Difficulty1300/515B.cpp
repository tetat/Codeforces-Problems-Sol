/// Problem Name: Drazil and His Happy Friends
/// Problem Link: https://codeforces.com/problemset/problem/515/B

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

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, m, el;
  cin >> n >> m;
  int b;
  cin >> b;
  vector <int> bm(n, 0);
  for (int i = 0;i < b;i++){
    cin >> el;
    bm[el] = 1;
  }
  int g;
  cin >> g;
  vector <int> gm(m, 0);
  for (int i = 0;i < g;i++){
    cin >> el;
    gm[el] = 1;
  }
  for (int i = 0;i < 50001;i++){
    int a = i%n;
    int b = i%m;
    if (bm[a] || gm[b]){
      bm[a] += 1;
      gm[b] += 1;
    }
  }
  string ans = "Yes";
  for (int i = 0;i < n;i++){
    if (bm[i]==0){
      ans = "No";
      break;
    }
  }
  for (int i = 0;i < m;i++){
    if (gm[i]==0){
      ans = "No";
      break;
    }
  }
  cout << ans << '\n';
  return 0;
}
