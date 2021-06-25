/// Problem Name: A Prank
/// Problem Link: https://codeforces.com/problemset/problem/1062/A

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
  int n, el;
  cin >> n;
  int len = 1000;
  vector <int> mark(len+1, 0);
  for (int i = 0;i < n;i++){
    cin >> el;
    mark[el]++;
  }
//  for (int i = 1;i <= 1000;i++){
//    cout << mark[i] << ' ';
//    if (i%50==0)cout << '\n';
//  }
  int ans = 0;
  int L = 1;
  //while (L <= len){
    int cnt = 0;
    while (L <= len && mark[L]>0){
      cnt++;
      L++;
    }//cout << L << '\n';
    while (L <= len && !mark[L])L++;
    //cout << L << '\n';
    ans = max(ans, cnt-1);
  //}
  //cout << ans << '\n';
  int R = len;
  //while (R >= 1){
    cnt = 0;
    while (R >= 1 && mark[R]>0){
      cnt++;
      R--;
    }
    while (R >= 1 && !mark[R])R--;
    ans = max(ans, cnt-1);
  //}
  //cout << ans << '\n';
  //cout << L << ' ' << R << '\n';
  while (L <= R){
    int cnt = 0;
    while (L <= R && mark[L]){
      cnt++;
      L++;
    }
    while (L <= R && !mark[L])L++;
    ans = max(ans, cnt-2);
    //cout << cnt << ' ';
  }
  cout << ans << '\n';
  return 0;
}
