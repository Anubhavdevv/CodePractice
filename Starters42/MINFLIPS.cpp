#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int sum=0;

        for(int i=0;i<x;i++){
            int n;
            cin >> n;
            sum += n;
        }
        if(abs(sum)%2!=0)
            cout << "-1" << endl;
        else 
            cout << abs(sum)/2 << endl;
    }
    return 0;
}
