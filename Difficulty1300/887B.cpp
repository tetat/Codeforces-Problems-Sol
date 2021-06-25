/// Problem Name: Cubes for Masha
/// Problem Link: https://codeforces.com/problemset/problem/887/B

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

int mark[1000];

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <int> v[n];
  for (int i = 0;i < n;i++){
    for (int j = 0;j < 6;j++){
      cin >> el;
      v[i].pb(el);
      mark[el]++;
    }
  }
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      if (i!=j){
        for (int k = 0;k < 6;k++){
          for (int l = 0;l < 6;l++){
            mark[(v[i][k]*10)+v[j][l]]++;
          }
        }
      }
    }
  }
//  for (int i = 0;i < n;i++){
//    if (i!=1){
//      for (int j = 0;j < n;j++){
//        if (i!=j){
//          for (int k = 0;k < n;k++){
//            if (i!=k && j!=k){
//              for (int l = 0;l < 6;l++){
//                for (int m = 0;m < 6;m++){
//                  for (int o = 0;o < 6;o++){
//                    mark[(((v[i][l]*10)+v[j][m])*10)+v[k][o]]++;
//                  }
//                }
//              }
//            }
//          }
//        }
//      }
//    }
//  }
  int ans = 1;
//  for (int i = 1;i < 1000;i++){
//    cout << mark[i] << ' ';
//    if (i%50==0)cout << '\n';
//  }
  while (ans < 1000 && mark[ans])ans++;
  cout << ans-1 << '\n';
  return 0;
}
