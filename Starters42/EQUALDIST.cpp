#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int sus = 0;
    while(t--){
        int x, y;
        cin >> x >> y;
        sus = abs(x-y);
        if(sus%2==0)
          cout << "YES" << endl;
        else
          cout << "NO" << endl;
    }
    return 0;
}
