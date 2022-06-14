#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--)
    {
        int a,b;cin>>a>>b;
        int res = abs(a-b);
        int counter = 0;
        for(int i=1;i*i<=res;i++)
        {
            if(res % i ==0)
            {
                counter++;
                if ((res/i) != i)
                counter++;
            }
        }
        cout<<counter<<"\n";
    }
    return 0;
}
