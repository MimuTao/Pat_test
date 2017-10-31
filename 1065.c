#include<stdio.h>


int main(int argc,char *argv[]){
    int couple_count,input_count,number,i;    //i is used for loop
    int Arraycp[100000];
    scanf("%d",&couple_count);
    int lcp,rcp;
    for(i=0;i!=couple_count;++i){
        scanf("%d %d",&lcp,&rcp);
        Arraycp[lcp]=rcp;
        Arraycp[rcp]=lcp;
    }
    scanf("%d",&input_count);
    for(i=0;i!=couple_count;++i){
        
    }

}