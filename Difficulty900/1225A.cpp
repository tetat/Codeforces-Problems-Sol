/// Problem Name: Forgetting Things
/// Problem Link: https://codeforces.com/problemset/problem/1225/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int a, b;
  cin >> a >> b;
  int d = a-b;
  //if (d<0)d = -d;
  if (d == 0 || d == -1 || (a==9 && b==1)){
    if (d==0){
      a = a*10;
      b = a+1;
    }else if (a==9 && b==1)b = 10;
    cout << a << ' ' << b << '\n';
  }else cout << "-1" << '\n';

//  for (int i = 1;i < 10;i++){
//    for (int j = 1;j < 10;j++){
//      cout << i << ' ' << j << '\n';
//    }
//  }

  return 0;
}
