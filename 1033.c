#include<stdio.h>
#include<string.h>

#define max_key 100010

//ret 1 if not exist 0 if exist.
int not_exist(char *array,int length,char ch){
    int i;
    for(i=0;i!=length;++i){
        if(array[i]==ch)
            break;
    }
    return i==length;
}
char Transtoup(char ch){
    if('a'<=ch&&ch<='z'){
        return ch-'a'+'A';
    }else{
        return ch;
    }
}

int main(int argc,char *argv){
    char broken[max_key];   // we assume all character in borken are Upcase.
    char input[max_key];
    gets(broken);
    scanf("%s",input);
    int broken_size=strlen(broken);
    int input_size=strlen(input);
    int i;
    if(!not_exist(broken,broken_size,'+')){    //if '+' not exist,it should output only lowcase.
        for(i=0;i!=input_size;++i){
            if(!(input[i]>='A'&&input[i]<='Z')&&not_exist(broken,broken_size,Transtoup(input[i]))){
                printf("%c",input[i]);
            }
        }
    }else{    // if '+' exist in the broken array, upcase can be output.
        for(i=0;i!=input_size;++i){
            if(not_exist(broken,broken_size,Transtoup(input[i]))){
                printf("%c",input[i]);
            }
        }
    }
    return 0;
}