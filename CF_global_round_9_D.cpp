#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
 
#define mxn 1002
int cnt[mxn], a[mxn];
bool chk[mxn];
 
int mex( int n ){
    for( int i=0; i<=n; i++ ) if( !cnt[i] ) return i;
    return 0;
}
int main(){
    int tc, n, m;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        vector<int> ans;
        for( int i=0; i<=n; i++ ){ cnt[i]=0; chk[i]=0; }
        for( int i=0; i<n; i++ ){ scanf("%d",&a[i]); cnt[a[i]]++; }
        
        bool s=0, e=0;
        while(1){
            int x=mex( n ), f=1;
            for( int i=1; i<n; i++ ) if( a[i-1]>a[i] ) f=0;
            if(f) break;
            //printf(" a : "); for( int i=0; i<n; i++ ) printf("%d ",a[i]); printf("\n");
            cnt[x]++;
            if(x!=n){
                cnt[a[x]]--;
                a[x]=x;
                chk[x]=1;
                ans.push_back(x+1);
                continue;
            }
            for( int i=0; i<n; i++ ){
                if( chk[i] && i<n-1) continue;
                cnt[a[i]]--;
                a[i] = x;
                chk[i] = 1;
                ans.push_back(i+1);
                break;
            }
        }
        
        printf("%d\n",ans.size());
        for( auto i : ans ) printf("%d ",i);
        printf("\n");
    }
    return 0;
}
