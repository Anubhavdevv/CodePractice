#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	int div = 0;
	int mul = 0;
	int sus = 0;
	while(t--){
	    int x, y;
	    cin >> x >> y;
	    div = x/10;
	    mul = y/10;
	    if((x%10) != 0)
           div++;
        
        if((y%10) != 0)
            mul++;
	    sus = abs(div - mul);
	    cout << sus << endl;

	}
	return 0;
}
