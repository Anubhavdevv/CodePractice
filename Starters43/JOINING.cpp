#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int mul = 0;
        int sus = 0;
        int ans = 0;
        mul = a/5;
        sus = b/5;
        if(a%5 == 0)
         mul--;
        if(b%5 == 0)
         sus--;
        ans = mul-sus;
        cout << ans << endl;
        
    }
    return 0;
}
