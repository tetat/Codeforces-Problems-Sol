/// Problem Name: Inna and Choose Options
/// Problem Link: https://codeforces.com/problemset/problem/400/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  /// 1x12 2x6 3x4
  while (tc--){
    string s;
    cin >> s;
    int x = 0;
    int len = s.size();
    for (int i = 0;i < len;i++){
      if (s[i] == 'X')x++;
    }
    string ans;
    int way = 0;
    if (x){
      ans += "1x12";
      ans += " ";
      way++;
    }
    int i1, i2, i3, i4, i5, i6;
    i1 = 0;
    i2 = 6;
    while (i2 < 12){
      if (s[i1]=='X' && s[i2]=='X'){
        ans += "2x6";
        ans += " ";
        way++;
        break;
      }
      i1++;
      i2++;
    }
    i1 = 0;
    i2 = 4;
    i3 = 8;
    while (i3 < 12){
      if (s[i1]=='X' && s[i2]=='X' && s[i3]=='X'){
        ans += "3x4";
        ans += " ";
        way++;
        break;
      }
      i1++;
      i2++;
      i3++;
    }
    /// 4x3 6x2 12x1
    i1 = 0;
    i2 = 3;
    i3 = 6;
    i4 = 9;
    while (i4 < 12){
      if (s[i1]=='X' && s[i2]=='X' && s[i3]=='X' && s[i4]=='X'){
        ans += "4x3";
        ans += " ";
        way++;
        break;
      }
      i1++;
      i2++;
      i3++;
      i4++;
    }
    i1 = 0;
    i2 = 2;
    i3 = 4;
    i4 = 6;
    i5 = 8;
    i6 = 10;
    while (i6 < 12){
      if (s[i1]=='X' && s[i2]=='X' && s[i3]=='X' && s[i4]=='X' && s[i5]=='X' && s[i6]=='X'){
        ans += "6x2";
        ans += " ";
        way++;
        break;
      }
      i1++;
      i2++;
      i3++;
      i4++;
      i5++;
      i6++;
    }
    if (x == 12){
      ans += "12x1";
      ans += " ";
      way++;
    }
    len = ans.size();
    cout << way;
    if (len){
      ans.erase(ans.begin()+len-1);
      cout << ' ' << ans;
    }
    cout << '\n';
  }
  return 0;
}
