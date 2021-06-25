/// Problem Name: Neko Performs Cat Furrier Transform
/// Problem Link: https://codeforces.com/problemset/problem/1152/B

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

int lim = 1048575;

int pw(int p){
  int ret = 1;
  while (p--)ret += ret;
  return ret;
}

int main()
{
  faster();
  int tc, ca = 0;
  vector <int> v;
  int p = 1;
  while (p <= lim+1){
    v.pb(p-1);
    p += p;
  }
  //cout << v[v.size()-1] - v[v.size()-2] << '\n';
  int x;
  cin >> x;
  vector <int> a;
  int len = v.size();
  int k = 0;
  int t = 5;
  //cout << v[1] << '\n';
  while (x){
    for (int i = 0;i < len;i++){
      if (x <= v[i]){
        //cout << x << ' ' << v[i] << ": " << (x^v[i]) << '\n';
        if (x==v[i])break;
        x = (x^v[i]);
        a.pb(i);
        k++;
        break;
      }
    }
    //cout << x << '\n';
    bool ok = false;
    for (int i = 0;i < len;i++){
      if (x==v[i])ok = true;
    }
    if (ok)break;
    x++;
    k++;
  }
  cout << k << '\n';
  for (int i = 0;i < a.size();i++){
    cout << a[i] << ' ';
  }cout << '\n';
  return 0;
}
