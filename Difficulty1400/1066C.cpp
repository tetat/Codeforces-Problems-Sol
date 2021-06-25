/// Problem Name: Books Queries
/// Problem Link: https://codeforces.com/problemset/problem/1066/C

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int M = int(2e5+2);
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    vector <int> pos(M);
    int curl = 0, curr = 0, i = 0;
    int q;cin >> q;
    while (q--){
        string s;int id;
        cin >> s >> id;
        if (i){
            if (s=="L"){
                pos[id] = curl;
                curl--;
            }
            else if (s=="R"){
                pos[id] = curr;
                curr++;
            }
            else {
                cout << min(fabs(pos[id]-curl),fabs(pos[id]-curr))-1 << endl;
            }
        }
        else {
            pos[id] = i;
            curl--;curr++;
        }
        i++;
    }
    return 0;
}
