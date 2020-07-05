#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
 
#define mxn 302
int a[mxn][mxn];

int main(){
    int tc, n, m;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d%d",&n,&m);
        bool f=1;
        for( int i=1; i<=n; i++ ){
            for( int j=1; j<=m; j++ ){
                scanf("%d",&a[i][j]);
                int cnt=0;
                if( i==1 || i==n ) cnt++;
                if( j==1 || j==m ) cnt++;
                if( 4-cnt<a[i][j] ) f=0;
                a[i][j] = 4-cnt;
            }
        }
        if(!f)printf("NO\n");
        else{
            printf("YES\n");
            for( int i=1; i<=n; i++ ){
                for( int j=1; j<=m; j++ ) printf("%d ",a[i][j]);
                printf("\n");
            }
        }
    }
    return 0;
}
