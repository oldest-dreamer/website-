#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
void solve(){
    int n;cin>>n;string s;cin>>s;
int f=-1;int l=-1;
for(int i=0;i<n;i++){
    if(s[i]=='1'){
        if(f==-1){f=i;}
        l=i;
    }
}
if(f==-1){cout<<0<<"\n";}else{cout<<l-f<<"\n";}
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){solve();}
    return 0;
}
