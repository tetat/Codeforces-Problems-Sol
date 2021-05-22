/// Problem Name: A and B and Chess
/// Problem Link: https://codeforces.com/problemset/problem/519/A

#include <cstdio>

using namespace std;

int main()
{
    char ch[10][10];
    int i, j, p1 = 0, p2 = 0;
    for (i = 0;i < 8;i++)
        scanf(" %[^\n]", ch[i]);

    for (i = 0;i < 8;i++){
        for (j = 0;j < 8;j++){
            if (ch[i][j] == 81)p1+=9;
            else if (ch[i][j] == 82)p1+=5;
            else if (ch[i][j] == 66)p1+=3;
            else if (ch[i][j] == 78)p1+=3;
            else if (ch[i][j] == 80)p1+=1;
            else if (ch[i][j] == 113)p2+=9;
            else if (ch[i][j] == 114)p2+=5;
            else if (ch[i][j] == 98)p2+=3;
            else if (ch[i][j] == 110)p2+=3;
            else if (ch[i][j] == 112)p2+=1;
        }
    }
    if (p1 > p2)
        printf("White\n");
    else if (p1 < p2)
        printf("Black\n");
    else
        printf("Draw\n");

    return 0;
}
