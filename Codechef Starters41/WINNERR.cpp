#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int sum=0;
    int sum1=0;
    while(t--){
        int x, y, z, c;
        cin >> x >> y >> z >> c;
        sum = max(x,y);
        sum1 = max(z,c);
        if(sum<sum1){
            cout << "P" << endl;
        }
        else if(sum==sum1){
            cout << "TIE" << endl;
        }
        else{
            cout << "Q" << endl;
        }
    }
    return 0;
}
