#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int sum = 0, div = 0;
	while(t--){
	    int x;
	    cin >> x;
	    sum = x+x;
	    div = sum*5;
	    cout << div << endl;
	}
	return 0;
}
