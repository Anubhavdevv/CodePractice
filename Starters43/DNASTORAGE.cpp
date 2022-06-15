#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string s1 = "";
        for(int i=0;i<n;i+=2){
            if(s.at(i) == '0' && s.at(i+1) == '0')
              s1+="A";
            else if(s.at(i) == '0' && s.at(i+1) == '1')
              s1+="T";  
            else if(s.at(i) == '1' && s.at(i+1) == '0')
              s1+="C";  
            else
              s1+="G";
        }
        cout << s1 << endl;
    }
    return 0;
}
