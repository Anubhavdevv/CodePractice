#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int tot = 0;
        tot = (n%100) + (n/100);
        if(tot<=10)
          cout << tot << endl;
        else 
         cout << "-1" << endl;
    }
    return 0;
}
