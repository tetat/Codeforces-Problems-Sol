/// Problem Name: Hyperspace Jump (easy)
/// Problem Link: https://codeforces.com/problemset/problem/958/D1

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  map <double, int> m;
  vector <double> co;
  int n;
  cin >> n;
  double ten = 10;
  for (int i = 0;i < n;i++){
    string s;cin >> s;
    int I = 1;
    double a = 0, b = 0, c = 0;
    while (I < s.size() && s[I] != '+'){
      a = (a*ten) + (s[I]-48);
      I++;
    }
    I++;
    while (I < s.size() && s[I] != ')'){
      b = (b*ten) + (s[I]-48);
      I++;
    }
    I += 2;
    while (I < s.size()){
      c = (c*ten) + (s[I]-48);
      I++;
    }
    co.pb((a+b)/c);
    m[(a+b)/c]++;
  }
  for (int i = 0;i < n;i++){
    cout << m[co[i]] << ' ';
  }cout << '\n';
  return 0;
}
