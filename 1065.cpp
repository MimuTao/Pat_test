#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
#include<cstdio>
#include<iomanip>

using namespace std;
int main(int argc,char *argv[]){
    int couple_count,input_count,number;    //i is used for loop
    int Arraycp[100000];
    for(int i=1;i!=100000;++i){
        Arraycp[i]=-1;
    }
    cin>>couple_count;
    int lcp,rcp;
    for(int i=0;i!=couple_count;++i){
        cin>>lcp>>rcp;
        Arraycp[lcp]=rcp;
        Arraycp[rcp]=lcp;
    }
    cin>>input_count;
    list<int> ilist;
    for(int i=0;i!=input_count;++i){
        cin>>number;
        list<int>::iterator it = find(ilist.begin(),ilist.end(),Arraycp[number]);
        if(it==ilist.end()){
            ilist.insert(ilist.begin(),number);    //if not in list then insert into the list.
        }else{
            ilist.erase(it);
        }
    }
    ilist.sort();
    // sort(ilist.begin(),ilist.end());
    bool flag=true;
    cout<<ilist.size()<<endl;
    for(list<int>::iterator it=ilist.begin();it!=ilist.end();++it){
        if(flag){
            cout<<setfill('0')<<setw(5)<<*it;
            flag=false;
        }else{
            cout<<" "<<setfill('0')<<setw(5)<<*it;
        }
    }

    return 0;
}