/// Problem Name: cAPS lOCK
/// Problem Link: https://codeforces.com/problemset/problem/131/A

#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char s[101];
    int i, l, test = 0, te;
    scanf("%s", s);
    l = strlen(s);
    for (i = 1;i < l;i++){
        if (s[i] >= 97 && s[i] <= 122){
            test = 1;
            break;
        }
    }
    if (test == 0)te = 2;
    if (te == 2){
        for (i = 0;i < l;i++){
            if (s[i] >= 97 && s[i] <= 122){
                te = 1;
                break;
            }
        }
    }
    if (test == 0 && te == 1){
        if (s[0] >= 97 && s[0] <= 122)s[0] -= 32;
        for (i = 1;i < l;i++){
            if (s[i] >= 65 && s[i] <= 90)s[i] += 32;
        }
        printf("%s\n", s);
    }
    else if (te == 2){
        for (i = 0;i < l;i++){
            s[i] += 32;
        }
        printf("%s\n", s);
    }
    else if (test == 1) printf("%s\n", s);
    return 0;
}
