#include <bits/stdc++.h>
using  namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    int div = 0;
    int mul = 0;
    while(T--){
        int X, Y;
        cin >> X >> Y;
        if(X%6==0)
          cout << (X/6)*Y << endl;
        else
          cout << ((X/6)+1)*Y << endl; 
    }
    return 0;
}
