#include<iostream>
#include<vector>

using namespace std;
int rule[20]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char verify[11]={'1','0','X','9','8','7','6','5','4','3','2'};
bool valid(const string &ie){
    int sum=0;
    for(int i=0;i!=17;++i){
        sum+=(ie[i]-'0')*rule[i];
    }
    return verify[sum%11]==(ie[17]);
}
int main(void){
    int input_count;
    cin>>input_count;
    string ie;
    int number=0;
    vector<string> ivec;
    for(int i=0;i!=input_count;++i){
        cin>>ie;
        if(!valid(ie)){
            ++number;
            ivec.push_back(ie);
        }
    }
    if(number){
        // cout<<number<<endl;
        for(int i=0;i!=number;++i){
            cout<<ivec[i]<<endl;
        }
    }else{
        cout<<"All passed";
    }
}