#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int sum = 0;
    while(t--){
        long long int n, x;
        cin>>n>>x;
        if(x%2!=0){
            cout << "YES" << endl;
        }
        else{
          if ((n-x)%2==0)
            cout<<"YES"<<endl;
          else
            cout<<"NO"<<endl;
        }

    }
    return 0;
}