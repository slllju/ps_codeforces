#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
 
#define mxn 100
int a[mxn];
 
int main(){
    int tc, n;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        bool f=1;
        for( int i=0; i<n; i++ ){
            scanf("%d",&a[i]);
            if(i%2==0) a[i]=-abs(a[i]);
            else a[i]=abs(a[i]);
        }
        for( int i=0; i<n; i++ ) printf("%d ",a[i]);
        printf("\n");
    }
    return 0;
}
