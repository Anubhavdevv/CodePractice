#include <bits/stdc++.h>
using  namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        long long int X, Y;
        cin >> X >> Y;
        if(X>Y)
         cout << "NO" << endl; 
        else{
         if(abs(Y-X)%3==2)
          cout << "NO" << endl;
         else 
          cout << "YES" << endl;
        }
    }        
    return 0;
}
