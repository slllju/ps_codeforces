#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
 
#define mxn 300002
int a[mxn];

int main(){
    int tc, n, m;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        bool f=1;
        deque<int> d;
        for( int i=1; i<=n; i++ ){
            scanf("%d",&m);
            if(!f)continue;
            if(i==1){ d.push_back(m); continue; }
            while(d.size()>1&&d.back()<m){
                d.pop_back();
            }
            if(d.size()==1&&d.front()<m){
                continue;
            }
            if(d.size()==1&&d.front()>m){
                d.push_back(m);
                continue;
            }
        }
        if( d.size()==1 ) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
