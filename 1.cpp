// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	int x,y,z;
// 	cin>>x>>y>>z;
// 	int c=0;
// 	if(x*y<0)c=c+1;
// 	if(y*z<0)c=c+1;
// 	if(z*x<0)c=c+1;

// 	if(c==2){cout<<"YES"<<endl;}
// 	else{
// 	cout<<"NO"<<endl;}

// }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        ll a[x];
        ll b[x];
        for (ll i = 0; i < x; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < x; i++)
        {
            cin >> b[i];
        }
        ll max = LLONG_MIN;
        ll min = LLONG_MAX;
        for (ll i = 0; i < x; i++)
        {
            if (a[i] >= max)
            {

                max = a[i];
            }
            if (a[i] <= min)
            {

                min = a[i];
            }
        }

        cout << max - min << endl;
    }
    return 0;
}
