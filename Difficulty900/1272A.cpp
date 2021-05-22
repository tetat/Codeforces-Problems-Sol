/// Problem Name: Three Friends
/// Problem Link: https://codeforces.com/problemset/problem/1272/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, ca = 0;
  scanf("%d", &t);
  while (t--){
    long long ar[3];
    for (int i = 0;i < 3;i++){
      scanf("%lld", &ar[i]);
    }

    sort(ar, ar+3);

    if (ar[0]!=ar[1] && ar[1]!=ar[2]){
      ar[0]++;
      ar[2]--;
    }
    else if (ar[0]==ar[1] && (ar[2]-ar[1])==1){
      ar[2]--;
    }
    else if (ar[0]==ar[1] && (ar[2]-ar[1])>1){
      ar[0]++;
      ar[1]++;
      ar[2]--;
    }
    else if (ar[2]==ar[1] && (ar[1]-ar[0])==1){
      ar[0]++;
    }
    else if (ar[2]==ar[1] && (ar[1]-ar[0])>1){
      ar[0]++;
      ar[1]--;
      ar[2]--;
    }

    long long ans = 0;
    ans += (ar[1]-ar[0]);
    ans += (ar[2]-ar[1]);
    ans += (ar[2]-ar[0]);

    printf("%lld\n", ans);
  }
  return 0;
}
