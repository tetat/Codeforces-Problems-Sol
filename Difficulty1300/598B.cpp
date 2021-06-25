/// Problem Name: Queries on a String
/// Problem Link: https://codeforces.com/problemset/problem/598/B

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

const int N = 1e3;

int main()
{
  FastIO();
  int tc, ca = 0;
  string s;
  cin >> s;
  int n = s.size();
  int m, a, b, k;
  cin >> m;
  while (m--){
    cin >> a >> b >> k;
    a--;
    b--;
    int d = (b-a)+1;
    queue <char> q;
    k = k%d;
    for (int i = a;i <= b;i++){
      int p = (i+k);
      if (p > b)p = a+(p%(b+1));
      q.push(s[p]);
      if (a+k > i){
        s[p] = s[i];
      }else {
        s[p] = q.front();
        //cout << q.front() << ' ';
        q.pop();
      }
    }//cout << '\n';
    //cout << s << '\n';
  }
  cout << s << '\n';
  return 0;
}
