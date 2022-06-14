#include <bits/stdc++.h>
using  namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    int sus = 0;
    while(T--){
        int X, Y;
        cin >> X >> Y;
        sus = abs(X - Y); 
        if(Y>=X)
         cout << 0 << endl;
        else 
         cout << sus << endl;
    }
    return 0;
}
