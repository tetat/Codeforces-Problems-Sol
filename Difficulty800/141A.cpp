/// Problem Name: Amusing Joke
/// Problem Link: https://codeforces.com/problemset/problem/141/A

#include <bits/stdc++.h>

using namespace std;

int a1[26];
int a2[26];
string s;
int len;

int main()
{
  cin >> s;
  len = s.size();
  for (int i = 0;i < len;i++)a1[s[i]-65]++;
  cin >> s;
  len = s.size();
  for (int i = 0;i < len;i++)a1[s[i]-65]++;
  cin >> s;
  len = s.size();
  for (int i = 0;i < len;i++)a2[s[i]-65]++;
  bool check = true;
  for (int i = 0;i < 26;i++){
    if (a1[i] != a2[i]){
      check = false;
      break;
    }
  }
  check?puts("YES"):puts("NO");
  return 0;
}
