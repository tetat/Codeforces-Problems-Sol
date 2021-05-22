/// Problem Name: Eleven
/// Problem Link: https://codeforces.com/problemset/problem/918/A

#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    if (n <= 3){
        for (i = 1;i <= n;i++){
            cout << "O";
        }
        cout << endl;
    }
    else {
        int f1 = 2, f2 = 3, f;
        f = f1 + f2;
        cout << "OOO";
        for (i = 4;i <= n;i++){
            if (f == i){
                cout << "O";
                f1 = f2;
                f2 = f;
                f = f1 + f2;
            }
            else
                cout << "o";
        }
        cout << endl;
    }
    return 0;
}
