/// Problem Name: Beautiful String
/// problem Link: https://codeforces.com/problemset/problem/1265/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  scanf("%d", &t);
  while (t--){
    string s;
    cin >> s;
    int len = s.size();
    for (int i = 0;i < len-1;i++){
      if (i==0 && s[i]=='?'){
        if (s[i+1] == '?')s[i] = 'a';
        else {
          if (s[i+1] == 'a')s[i] = 'b';
          else if (s[i+1] == 'b')s[i] = 'c';
          else s[i] = 'a';
        }
        continue;
      }
      if (s[i] == '?'){
        if (s[i+1] == '?'){
          if (s[i-1] == 'a')s[i] = 'b';
          else if (s[i-1] == 'b')s[i] = 'c';
          else s[i] = 'a';
        }
        else {
          if (s[i-1]=='a' && s[i+1]=='a')s[i] = 'b';
          else if (s[i-1]=='a' && s[i+1]=='b')s[i] = 'c';
          else if (s[i-1]=='a' && s[i+1]=='c')s[i] = 'b';
          else if (s[i-1]=='b' && s[i+1]=='b')s[i] = 'c';
          else if (s[i-1]=='b' && s[i+1]=='a')s[i] = 'c';
          else if (s[i-1]=='b' && s[i+1]=='c')s[i] = 'a';
          else if (s[i-1]=='c' && s[i+1]=='c')s[i] = 'a';
          else if (s[i-1]=='c' && s[i+1]=='a')s[i] = 'b';
          else if (s[i-1]=='c' && s[i+1]=='b')s[i] = 'a';
        }
      }
    }
    if (len==1 && s[len-1]=='?')s[0] = 'a';
    else if (s[len-1]=='?'){
      if (s[len-2]=='a')s[len-1] = 'b';
      else if (s[len-2]=='b')s[len-1] = 'c';
      else s[len-1] = 'a';
    }
    bool ans = true;
    for (int i = 1;i < len;i++){
      if (s[i] == s[i-1]){
        ans = false;
        break;
      }
    }
    if (ans)cout << s << '\n';
    else cout << "-1\n";
  }
  return 0;
}
 
