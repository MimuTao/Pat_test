#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int sum(string number){
    int ret=0;
    for(int i=0;i!=number.size();++i){
        ret+=number[i]-'0';
    }
    return ret;
}
int main(int argc,char *argv[]){
    int count;
    string number;
    cin>>count;
    vector<int> ivec;
    for(int i=0;i!=count;++i){
        cin>>number;
        if(find(ivec.begin(),ivec.end(),sum(number))==ivec.end())
            ivec.push_back(sum(number));
    }
    cout<<ivec.size()<<endl;
    sort(ivec.begin(),ivec.end());
    for(int i=0;i!=ivec.size();++i){
        if(i==0){
            cout<<ivec[i];
        }else{
            cout<<" "<<ivec[i];
        }
    }
}