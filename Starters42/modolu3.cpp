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
        if(x%3==0 || y%3==0){
            cout << 0 << endl;
        }
        else if(sus % 3==0)
           cout << 1 << endl;
        else
           cout << 2 << endl;
        
    }    
    return 0;
}
