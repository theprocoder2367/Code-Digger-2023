#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,x;
        cin>>n>>a>>x;
        float max_dist = a/(1-(1.0/x));
        if(max_dist>=n) cout<<"YES\n";
        else{
            cout<<"NO"<<" "<<round(n-max_dist)<<endl;
        }
    }
    return 0;
}