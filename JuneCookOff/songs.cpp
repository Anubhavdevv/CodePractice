#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int div = 0;
    while(t--){
        int x, y;
        cin >> x >> y;
        div = x/3;
        cout << div/y << endl;
    }
    return 0;
}