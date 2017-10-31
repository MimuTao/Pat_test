#include<stdio.h>

int main(int argc,char *argv[]){
    int input_cout,i,it;
    int result=0;
    scanf("%d",&input_cout);
    for(i=0;i!=input_cout;++i){
        scanf("%d",&it);
            result+=11*(input_cout-1)*it;
    }
    printf("%d",result);
    return 0;
}