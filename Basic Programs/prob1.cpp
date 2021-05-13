#include<stdio.h>

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
    char ch;
    int l=0,c=0,n=0;
    do{
        scanf("%c",&ch);
        if(ch>='a' && ch<='z'){
            l++;
        }
        if(ch>='0' && ch<='9'){
            n++;
        }
        if(ch=='\n' || ch=='\t' || ch==' '){
            c++;
        }
    }while(ch!='$');
    printf("%d %d %d",l,n,c);
}



