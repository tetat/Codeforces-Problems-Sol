/// Problem Name: Alice, Bob and Candies
/// Problem Link: https://codeforces.com/problemset/problem/1352/D

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

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, el;
    cin >> n;
    vector <int> v(n);
    int tot = 0;
    for (int i = 0;i < n;i++){
      cin >> v[i];
      tot += v[i];
    }
    int alice = 0;
    int bob = 0;
    int play = 0;
    int a = 0;
    int b = 0;
    for (int i = 0, j = n-1;i <= j; ){
      while (i <= j && a <= b){
        a += v[i];
        i++;
      }
      if (a){
        alice += a;
        play++;
      }
      b = 0;
      while (i <= j && a >= b){
        b += v[j];
        j--;
      }
      if (b){
        bob += b;
        play++;
      }
      a = 0;
    }
    cout << play << ' ' << alice << ' ' << bob << '\n';
  }
  return 0;
}
