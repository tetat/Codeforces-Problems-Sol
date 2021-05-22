/// Problem Name: Cormen — The Best Friend Of a Man
/// Problem Link: https://codeforces.com/problemset/problem/732/B

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define space " "
#define PQ priority_queue
#define VE vector
#define LL long long
#define ULL unsigned long long
#define pb push_back
#define mp make_pair
#define all(X) X.begin(), X.end()
#define II <int, int>
#define IS <int, string>
#define SI <string, int>
#define SS <string, string>
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);



int main()
{
  faster()
  int t, ca = 0;
  int n, m, el;
  cin >> n >> m;
  VE <int> v(510, 0);
  for (int i = 0;i < n;i++){
    cin >> v[i];
  }
  int ans = 0;
//  if (n==1){
//    if (v[0] < m){
//      ans += m-v[0];
//      v[0] = m;
//    }
//  }
  for (int i = 0;i < n-1;i++){
    int temp = v[i]+v[i+1];
    if (temp < m){
      ans += m-temp;
      v[i+1] += m-temp;
    }
  }
  cout << ans << newline;
  for (int i = 0;i < n;i++){
    cout << v[i] << space;
  }cout << newline;
  return 0;
}
