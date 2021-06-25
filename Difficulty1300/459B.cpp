/// Problem Name: Pashmak and Flowers
/// Problem Link: https://codeforces.com/problemset/problem/459/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, el;
  vector <int> v;
  scanf("%d", &n);
  int mn = INT_MAX;
  int mx = 0;
  for (int i = 0;i < n;i++){
    scanf("%d", &el);
    mn = min(mn, el);
    mx = max(mx, el);
    v.push_back(el);
  }
  int d = mx-mn;
  if (d==0){
    long long w = n-2;
    w++;
    w = (w*(w+1))/2;
    cout << d << " " << w << '\n';
  }
  else {
    long long ff = 0;
    long long ss = 0;
    for (int i = 0;i < n;i++){
      if (v[i]==mn)ff++;
      if (v[i]==mx)ss++;
    }
    long long w = ff*ss;
    cout << d << " " << w << '\n';
  }
  return 0;
}
