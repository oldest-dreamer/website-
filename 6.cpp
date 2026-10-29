#include <iostream>
#include<algorithm>
using namespace std;
void solve(){
long long n,m,k;
cin>>n>>m>>k;
long long left=max(1LL,k-m);
long long right=min(n,k+m);
long long total=right-left+1;
long long sol=m+1;
long long ans=min(total,sol);
cout<<ans<<"\n";
}
int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
