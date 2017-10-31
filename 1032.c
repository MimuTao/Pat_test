#include<stdio.h>
int main(void){
    int info[100010];
    int number;
    scanf("%d",&number);
    int i;
    for(i=0;i!=100010;++i){
        info[i]=0;

    }
    int sc_number,score;
    for(i=0;i!=number;++i){
        scanf("%d %d",&sc_number,&score);
        info[sc_number]+=score;
    }
    int ret_number=0,ret_score=info[0];
    for(i=0;i!=100010;++i){
       if(ret_score<info[i]){
           ret_score=info[i];
           ret_number=i;
       }
    }
    printf("%d %d",ret_number,ret_score);

}

// struct Info{
//     int sc_number;
//     int score;
// };

// // if ret=length means not find,else means find;
// int is_exist(struct Info *temp,int length,int sc_number){
//     int i;
//     for(i=0;i!=length;++i){
//         if(sc_number==temp[i].sc_number){
//             break;
//         }
//     }
//     return i;
// }
// int main(void){
//     struct Info Tab[100010];
//     int length=0;
//     int number;
//     scanf("%d",&number);
//     int i;
//     int sc_number,score;
//     int index;
//     for(i=0;i!=number;++i){
//         scanf("%d %d",&sc_number,&score);
//         if((index=is_exist(Tab,length,sc_number))==length){    //if not in array.
//             struct Info temp ={sc_number,score};
//             Tab[length++]=temp;
//         }else{  //if in array:is_exist ret the index.
//             Tab[index].score+=score;
//         }
//     }

//     int ret_number=Tab[0].sc_number,ret_score=Tab[0].score;
//     for(i=1;i<length;++i){
//         if(ret_score< Tab[i].score){
//             ret_score=Tab[i].score;
//             ret_number=Tab[i].sc_number;
//         }
//     }
//     printf("%d %d",ret_number,ret_score);
// }