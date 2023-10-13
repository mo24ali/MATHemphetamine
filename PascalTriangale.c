#include<stdio.h>
#include<stdlib.h>


void main(){
        int **A ;
        int n;
        int i,j ;

        printf(" introduce your magic number in here : \n");
        scanf("%d",&n);
        printf("/////////////\n");
         A = malloc(n*sizeof(int*));
        for(i=0;i<n;i++){
                A[i] = malloc(sizeof(int));
            }
            for(i=0;i<n;i++){ //loop the triangle diagonal so that it is all in 1
                A[i][0] = 1;
            }
            for(i=0;i<n;i++){ // vertical column loop so that'll be all in 1
               for(j=i;j<=n;j++){
                A[i][j] = 1;
               }
            }
        for(i=2;i<n;i++){
            for(j=1;j<i;j++){
                A[i][j] = A[i-1][j] + A[i-1][j-1];
               }
            }
            for(i=0;i<n;i++){
               for(j=0;j<=i;j++){
               printf("%d ",A[i][j]);
               }
               printf("\n");
            }
    printf("/////////////");


}


  
}
