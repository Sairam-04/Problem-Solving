#include<stdio.h>

int main(){

    // Read input as specified in the question.
	// Print output as specified in the question.
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1+c;j<=i+c;j++){
            printf("%d",j);
        }
        for(int j=c+i-1;j>=i;j--){
            printf("%d",j);
        }
        c++;
        printf("\n");
    }
}

