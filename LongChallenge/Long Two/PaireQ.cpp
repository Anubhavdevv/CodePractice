#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int> arr, int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
    int maxFreq = 0;
    for (auto x : mp)
        if (maxFreq < x.second)
            maxFreq = x.second;
    return (n - maxFreq);
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int temp = 0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        cout << minOperations(arr, n) << endl;
    }
	return 0;
}
