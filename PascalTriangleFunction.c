#include<stdio.h>
#include<stdlib.h>

/*Pascal triangle but using functions */
void colonne1(int **A ,int n){
int i,j;
    for(i=0;i<n;i++){ // vertical column loop so that'll be all in 1
               for(j=i;j<=n;j++){
                A[i][j] = 1;
               }
            }
    }

void diagonnal1(int **A , int n){
    int i;
    for(i=0;i<n;i++){
        A[i][0]=1;
    }
    }
void Pascal(int **A , int n){
    int i , j;
    for(i=2;i<n;i++){
        for(j=1;j<i;j++){
            A[i][j] = A[i-1][j]+A[i-1][j-1];
        }
    }
}
int ** TAbleAllocation( int n){
    int **A;
    A = malloc(n*sizeof(int*));
    for(int i=0 ; i< n ; i++){
        A[i] = malloc(sizeof(int));
    }
    return A;
}
void main(){
        int **A ;
        int n;
        int i,j;

        printf(" introduce your magic number in here : \n");
        scanf("%d",&n);
        A = TAbleAllocation(n);
        printf("/////////////\n");
        colonne1(A,n);
        diagonnal1(A,n);
        Pascal(A,n);
        for(i = 0 ; i<n ; i++){
            for(j=0;j<=i;j++){
                printf("%d ",A[i][j]);
            }
            printf("\n");
        }
        printf("/////////////");


}




