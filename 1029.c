#include<stdio.h>

int is_exist(char c,char *array,int length){
	int i;
	for(i=0;i!=length;++i){
		if(array[i]==c)
			break; 
	}
	if(i==length){
		return 0;
	}else{
		return 1;
	}
}
int main(void){
	char reference_input[100];
	char real_input[100];
	char output[50];
	int length=0;
	scanf("%s",reference_input);
	scanf("%s",real_input);
	int i=0,j=0;
	while(reference_input[j]!='\0'){
		if(reference_input[j]==real_input[i]){
			i++;j++;
		}else{
//			if((reference_input[j]>='A'&&reference_input[j]<='Z')||reference_input[j]=='_'||(reference_input[j]>='0'&&reference_input[j]<='9')){
			if((reference_input[j]>='a'&&reference_input[j]<='z')){
				reference_input[j]=reference_input[j]-'a'+'A';	
			}
			if(!is_exist(reference_input[j],output,length)){
					output[length++]=reference_input[j];
			}	
			j++;
		}
	}
	int index;
	for(index=0;index!=length;++index)
		printf("%c",output[index]);
	return 0;
} 
