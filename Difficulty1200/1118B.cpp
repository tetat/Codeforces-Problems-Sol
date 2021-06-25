/// Problem Name: Tanya and Candies
/// Problem Link: https://codeforces.com/problemset/problem/1118/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void faster(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e5;

int main()
{
  faster();
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <int> v;
  int odd = 0;
  int even = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
    (i%2)?even+=el:odd+=el;
  }
  int ev = 0;
  int od = 0;
  int ans = 0;
//  if (n%2){
    for (int i = 0;i < n;i++){
      if (i%2==0){
        odd -= v[i];
        if (od+even == ev+odd)ans++;
        od += v[i];
      }else {
        even -= v[i];
        if (od+even == ev+odd)ans++;
        ev += v[i];
      }
    }
//  }else {
//    for (int i = 0;i < n;i++){
//      if (i%2==0){
//        odd -= v[i];
//        if (od+even == ev+odd)ans++;
//        od += v[i];
//      }else {
//        even -= v[i];
//        if (ev+even == od+odd)ans++;
//        ev += v[i];
//      }
//    }
//  }
  cout << ans << '\n';
  return 0;
}
