/// Problem Name: Maximize Sum of Digits
/// Problem Link: https://codeforces.com/problemset/problem/770/B

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

vector <Long> d;
void make_divisor(Long n){
  Long in = 1;
  while (n){
    in = in*10;
    d.pb(in);
    n /= 10;
  }
  d.pop_back();
}

Long digit_sum(Long n){
  Long sum = 0;
  while (n){
    sum += n%10;
    n /= 10;
  }
  return sum;
}

int main()
{
  FastIO();
  int tc, ca = 0;
  Long x;
  cin >> x;
  make_divisor(x);
  int len = d.size();
  vector <pair <Long, Long> > a;
  a.pb(mp(digit_sum(x), x));
  for (int i = 0;i < len;i++){
    Long tm = x - ((x%d[i])+1);
    a.pb(mp(digit_sum(tm), tm));
  }
  sort(a.begin(), a.end());
  cout << a[a.size()-1].second << '\n';
  return 0;
}
