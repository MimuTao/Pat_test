#include<stdio.h>

count(int *array,int length,int num){
    int i,ret=0;
    for(i=0;i!=length;++i){
        if(array[i]%5==num)
            ++ret;
    }
    return ret;
}
// A1
int funcA1(int *array,int length){
    int i,ret=0;
    for(i=0;i!=length;++i){
        if(array[i]%10==0)
            ret+=array[i];
    }
    return ret;
}
// A2
int funcA2(int *array,int length){
    int i,ret=0,flag=0;
    for(i=0;i!=length;++i){
        if(array[i]%5==1){
            if(flag){
                ret-=array[i];
            }else{
                ret+=array[i];
            }
            flag=!flag;
        }
    }
    return ret;
}
// A3
int funcA3(int *array,int length){
    int i,ret=0;
    for(i=0;i!=length;++i){
        if(array[i]%5==2)
            ++ret;
    }
    return ret;
}
// A4    -> ret the sum not average.
int funcA4(int *array,int length){
    int i,sum=0;
    for(i=0;i!=length;++i){
        if(array[i]%5==3)
            sum+=array[i];
    }
    return sum;
}
int funcA5(int *array,int length){
    int i,ret=0;
    for(i=0;i!=length;++i){
        if((array[i]%5==4)&&(ret<array[i]))    
            ret=array[i];
    }
    return ret;
}
int main(void){
    int N,i;
    int array[1000];
    scanf("%d",&N);
    for(i=0;i!=N;++i){
        scanf("%d",array+i);
    }
    int ret1,ret2,countFa2,ret3,ret4,countFa4,ret5;
    ret1=funcA1(array,N);
    ret2=funcA2(array,N);
    countFa2=count(array,N,1);
    ret3=funcA3(array,N);
    ret4=funcA4(array,N);
    countFa4=count(array,N,3);
    ret5=funcA5(array,N);
    ret1==0?printf("N"):printf("%d",ret1);
    countFa2==0?printf(" N"):printf(" %d",ret2);
    ret3==0?printf(" N"):printf(" %d",ret3);
    ret4==0?printf(" N"):printf( " %.1f",ret4*1.0/countFa4);
    ret5==0?printf(" N"):printf(" %d",ret5);

    return 0;
}