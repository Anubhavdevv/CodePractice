#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int mul = 0;
    int sus = 0;
    while(t--){
        int a, b;
        cin >> a >> b;
        mul = 7*a;
        sus = mul-b;
        cout << sus << endl;
    }
    return 0;
}
