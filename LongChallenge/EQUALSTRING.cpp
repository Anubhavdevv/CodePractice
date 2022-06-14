#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    int t,sz;
    string a,b;
    cin>>t;
    while(t--){
        cin>>sz;
        cin>>a>>b;
        set<char> s;
        for(int i=0;i<sz;i++){
            if(a[i]!=b[i]){
                s.insert(b[i]);
            }
        }
        cout<< s.size() <<endl;

    }
   return 0;
}
