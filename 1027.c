#include<stdio.h>

int main(void){
    int input;char ch;
    scanf("%d %c",&input,&ch);
    int im=1,left;
    while(2*im*im-1<=input){
        ++im;
    }
    im--;// im is how much floor it should have.
    left=input-(2*im*im-1);
    int i,j;
    for(i=2*im-1;i>0;i=i-2){
        for(j=(2*im-1-i)/2;j!=0;--j)
            printf(" ");
        for(j=0;j!=i;j++)
            printf("%c",ch);
        printf("\n");
    }
    for(i=3;i<=2*im-1;i+=2){
        for(j=(2*im-1-i)/2;j!=0;--j)
        printf(" ");
        for(j=0;j!=i;j++)
            printf("%c",ch);
        printf("\n");
    }
    printf("%d",left);
    system("pause");

    return 0;
}