/// Problem Name: Chtholly's request
/// Problem Link: https://codeforces.com/problemset/problem/897/B

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

//vector <Long> pal;
//
//void make(){
//  for (Long i = 11;i <= 99;i += 11){
//    pal.pb(i);
//  }
//  for (Long i = 1001, m = 1;i <= 9999; ){
//    pal.pb(i);
//    if (m%10)i += 110;
//    else i += 11;
//    m++;
//  }
//  for (Long i = 100001, m = 1;i <= 999999; ){
//    pal.pb(i);
//    if (m%100==0)i += 11;
//    else if (m%10==0)i += 110;
//    else i += 1100;
//    m++;
//  }
//  for (Long i = 10000001, m = 1;i <= 99999999; ){
//    pal.pb(i);
//    if (m%1000==0)i += 11;
//    else if (m%100==0)i += 110;
//    else if (m%10==0)i += 1100;
//    else i += 11000;
//    m++;
//  }
//  for (Long i = 1000000001, m = 1;i <= 9999999999; ){
//    pal.pb(i);
//    if (m%10000==0)i += 11;
//    else if (m%1000==0)i += 110;
//    else if (m%100==0)i += 1100;
//    else if (m%10==0)i += 11000;
//    else i += 110000;
//    m++;
//  }
//  pal.pb(100000000001);
//}

int main()
{
  FastIO();
  int tc, ca = 0;
  //make();
  Long k, p;
  cin >> k >> p;
  Long ans = 0;
  for (Long i = 1;i <= k;i++){
    Long tm = i;
    Long ad = i;
    while (tm){
      ad = (ad*10) + (tm%10);
      tm /= 10;
    }
    ans = (ans+ad) % p;
  }
  cout << ans << '\n';
  return 0;
}
