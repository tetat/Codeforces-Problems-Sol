/// Problem Name: Yet Another Broken Keyboard
/// Problem Link: https://codeforces.com/problemset/problem/1272/C

#include <bits/stdc++.h>

using namespace std;

int freq[26];

int main()
{
  int n, k;
  scanf("%d %d", &n, &k);
  string s;
  cin >> s;
  getchar();
  for (int i = 0;i < k+k-1;i++){
    char in;
    scanf("%c", &in);
    if (i%2==0){
      freq[int(in-97)]++;
    }
  }
  long long ans = 0;
  long long cnt = 0;
  long long zero = 0;
  long long one = 1;
  long long two = 2;
  for (int i = 0;i < n;i++){
    int po = int(s[i]-97);
    if (freq[po] > 0)cnt += one;
    else {
      ans += (cnt*(cnt+one))/two;
      cnt = zero;
    }
//    printf("%d ", freq[po]);
  }
  if (cnt)ans += (cnt*(cnt+one))/two;
  printf("%lld\n", ans);
  return 0;
}
