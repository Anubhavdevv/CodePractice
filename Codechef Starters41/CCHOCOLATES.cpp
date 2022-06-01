#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int mul=0;
    int div = 0;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        mul = x*5 + y*10;
        div = int(mul/z);
        cout << div << endl;
    }
    return 0;
}
