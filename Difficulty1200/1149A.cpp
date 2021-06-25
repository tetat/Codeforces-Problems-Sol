/// Problem Name: Prefix Sum Primes
/// Problem Link: https://codeforces.com/problemset/problem/1149/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

bool mark[400001];
int len = 400000;

void sieve(){
  mark[0] = mark[1] = true;
  for (int i = 4;i <= len;i+=2){
    mark[i] = true;
  }
  for (int i = 3;i*i <= len;i++){
    if (!mark[i]){
      for (int j = i*i;j <= len;j += i+i){
        mark[j] = true;
      }
    }
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  sieve();
  int n, el;
  int one = 0;
  int two = 0;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    el==1?one++:two++;
  }
  int sum = 0;
  vector <int> p;
  while (one>0 || two>0){
    if (!mark[sum+1] && one>0){
      p.pb(1);
      sum += 1;
      one--;
    }else if (!mark[sum+2] && two>0){
      p.pb(2);
      sum += 2;
      two--;
    }else if (two){
      p.pb(2);
      sum += 2;
      two--;
    }else if (one){
      p.pb(1);
      sum += 1;
      one--;
    }
  }
  for (int i = 0;i < n;i++){
    cout << p[i];
    if (i != n-1)cout << ' ';
  }cout << '\n';
  return 0;
}
