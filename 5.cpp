#include <bits/stdc++.h>
using namespace std;
void solve(){int n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++){cin>>a[i];}
    long long z=a[0];
    long long mn=a[0],mx=a[0];
    for(int i=1;i<n;i++){
        long long x=max(abs(mn),abs(mx));
        z=max({z,a[i],a[i]+x});
        long long d1=a[i];long long d2=a[i]+mn;long long d3=a[i]+mx;
        long long d4=a[i]+mn*2;long long d5=a[i]+mx*2;
        mn=min({d1,d2,d3,d4,d5});
        mx=max({d1,d2,d3,d4,d5});
    }
          cout<<z<<"\n";
}
int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
