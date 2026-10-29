#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
int n,m,k;cin>>n>>m>>k;vector<int>cnt(m+1,1e9);for(int i=0;i<n;i++){int a,b;cin>>a>>b;if(b<cnt[a]){cnt[a]=b;}}
long long total=0;
for(int i=1;i<=m;i++){total+=cnt[i];}
long long ans=min((long long)k,total);
cout<<ans<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
