#include<stdio.h>

int main(){

    // Read input as specified in the question.
	// Print output as specified in the question.
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++){
            printf("*");
        }
    
        printf("\n");
    }
}

