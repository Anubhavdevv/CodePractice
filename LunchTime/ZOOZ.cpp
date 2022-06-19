#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	while(t--){
	    int n, zero;
	    cin >> n;
	    n--;
	    for (int i=0; i<n; i++){
	        if(n%2==0 && n/2==i)
	            cout << 0;
	        if (n%2==1 && n/2==i){
	            cout << "00";
	            i++;
	        }
	        cout << 1;
	    }
	    cout << "\n";
	}
	return 0;
}
