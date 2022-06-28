#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){

        int n , x ;
        int flag = 1;
        cin>>n>>x;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        for(int i = 0; i < n-1; i++){

            if(a[i]>a[i+1]){
                if(a[i]+a[i+1]>x){
                    flag = 0;
                    break;
                }
                else{
                    swap(a[i],a[i+1]);
                }
            }

        }

        if(flag==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }




    }
}
