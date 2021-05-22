/// Problem Name: Team Olympiad
/// Problem Link: https://codeforces.com/problemset/problem/490/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, el;
  cin >> n;
  vector <pair <int, int> > v;
  int one = 0;
  int two = 0;
  int three = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (el==1)one++;
    if (el==2)two++;
    if (el==3)three++;
    v.push_back(make_pair(el, i+1));
  }
  int w = min(one, min(two, three));
  cout << w << '\n';
  sort(v.begin(), v.end());
  one = 0;
  two = 0;
  three = 0;
  int it = 0;
  while (v[it].first == 1)it++;
  two = it;
  while (v[it].first == 2)it++;
  three = it;
  while (w--){
    cout << v[one].second << " " << v[two].second << " " << v[three].second << '\n';
    one++;
    two++;
    three++;
  }
  return 0;
}
