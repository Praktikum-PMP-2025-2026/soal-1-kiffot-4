#include <stdio.h>

int main() {
    int n=0;
    scanf("%d",&n);
    int adj[n][n];
    for (int i =0; i <n; i++){
        for (int j =0; j <n; j++){
            scanf("%d", &adj[i][j]);
        }
    }
        int deg[n];
    int max;
    int maxidx;
    int isolated[n];
    int adaisolated;
    for (int i =0; i <n; i++){
        deg[i]=0;
        isolated[i]=0;
        for (int j =0; j <n; j++){
            if (adj[i][j]==1){
                deg[i]+=1;
            }
        }
        if (deg[n]>max){
            max = deg[n];
            maxidx=i;
        }

        if (deg[i]==0){
            isolated[i]=1;
            adaisolated=1;
        }
    }
    
    for (int i =0; i <n; i++){
        printf("DEGREE %d %d\n", i, deg[i]);
    }
    printf("MAX_VERTEX %d\n", maxidx);
    printf("ISOLATED");
    if (adaisolated){
        for (int i =0; i <n; i++){
            if (isolated[i]!=0){
                printf(" %d", i);
            }
            
        }
    }else{
        printf ("NONE");
    }


}
