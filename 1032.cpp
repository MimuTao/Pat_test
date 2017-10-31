#include<iostream>
#include<map>
#include<iterator>

using namespace std;
int main(void){
    int number;
    cin>>number;
    map<int,int> imap;
    int sc_number,score;
    for(int i=0;i!=number;++i){
        cin>>sc_number>>score;
        imap[sc_number]+=score;
    }
    int flag=true;
    for(map<int,int>::iterator it=imap.begin();it!=imap.end();++it){
        if(flag){
            sc_number=it->first;
            score=it->second;
            flag=false;
        }else{
            if(it->second>score){
                sc_number=it->first;
                score=it->second;
            }
        }
    }
    cout<<sc_number<<" "<<score;
    return 0;

}