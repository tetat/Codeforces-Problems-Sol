/// Problem Name: Dividing the numbers
/// Problem Link: https://codeforces.com/problemset/problem/899/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 2e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  Long n, el;
  cin >> n;
  vector <int> v;
  Long sum = (n*(n+1))/2;
  Long L = 1;
  Long R = n;
  Long sec = 0;
  Long frst = sum/2;
  if (sum%2)frst++;
  while (sec+R <= frst){
    sec += R;
    v.pb(R);
    R--;
  }
  if (frst!=sec){
    v.pb(frst-sec);
    sec += frst-sec;
  }
  if (sum%2)frst--;
  //cout << frst << ' ' << sec << '\n';
  int len = v.size();
  cout << (abs(frst-sec)) << '\n';
  cout << len;
  for (int i = 0;i < len;i++){
    cout << ' ' << v[i];
  }cout << '\n';
  return 0;
}
