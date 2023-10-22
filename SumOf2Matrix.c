#include<stdio.h>
#include<stdlib.h>


void somme (int **A, int **B, int **C, int n, int m){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            C[i][j] = A[i][j]+B[i][j];
        }
    }
}
int **allouerMt(int n , int m){
    int **C;
    int i;
    C = (int**)malloc(n*sizeof(int*));
    for(i=0 ; i<n ; i++){
        C[i] = (int*)malloc(m*sizeof(int));
    }
    return C;
}
/*int**somme(int **A, int**B, int n, int m){
    int **C = allouerMt(n,m);
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            C[i][j] = A[i][j] + B[i][j];
    }
    return C;
}*/
void afficherMatr(int **a , int n , int m){
    int i , j ;

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}


int main(){
        int m = 6;
        int n = 7;
        int i,j;
        int **A = allouerMt(n,m);
        int **B = allouerMt(n,m);
        int **C = allouerMt(n,m);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                A[i][j] = i + j;
                B[i][j] = i - j;
            }
        }
        //C = somme(A,B,n,m);
        somme(A,B,C,n,m);

        printf("la matrice A : \n");
        afficherMatr(A,n,m);
        printf("\n");

        printf("la matrice B : \n");
        afficherMatr(B,n,m);
        printf("\n");

        printf("la somme de deux matrices : \n");
        afficherMatr(C,n,m);

        return 0;
}
