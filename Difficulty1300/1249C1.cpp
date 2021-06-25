/// Problem Name: Good Numbers (easy version)
/// Problem Link: https://codeforces.com/problemset/problem/1249/C1

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define ull unsigned long long
#define all(X) X.begin(), X.end()
#define set_point(pnt) cout<<fixed<<setprecision(pnt);
const double pi = acos(-1.0);

const int N = 500;
vector <ll> gn;
vector <ll>::iterator it;

void make_good_numbers(){
  ll three = 3;
  for (ll i = 0;i <= 9;i++){
    ll p3 = (ll)pow(three, i);
    gn.pb(p3);
    int l = gn.size();
    for (int j = 0;j < l-1;j++){
      gn.pb(gn[l-1]+gn[j]);
    }
  }
//  for (int i = 0;i < gn.size();i++){
//    cout << gn[i] << ' ';
//  }cout << gn.size() << '\n';
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  make_good_numbers();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    ll n;
    cin >> n;
    it = lower_bound(gn.begin(), gn.end(), n);
    cout << *it << '\n';
  }
  return 0;
}
