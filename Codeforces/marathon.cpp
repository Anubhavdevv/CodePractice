#include <bits/stdc++.h>
using  namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    long long int count = 0;
    long long int mine = 0;
    long long int maxe = 0;
    while(T--){
      long long int a,b,c,d;
      cin >> a >> b >> c >> d;
      if(a>b && a>c && a>d){ //2 3 4 1 //4
         count = 0;
      }
      else if(a>b && a>c && a<d || a>d && a>c && a<b || a>b && a>d && a<c)
        count = 1;
      else if(a>b && a<c && a<d || a>c && a<b && a<d || a>d && a<c && a<b)
        count = 2; 
      else 
        count = 3;      
      cout << count << endl;
    }  
      return 0;
}
