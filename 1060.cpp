#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int more_count(vector<int> &ivec,int n){
    int ret=0;
    while((ret!=ivec.size())&&ivec[ret]<=n){
        ret++;
    }
    return ivec.size()-ret;
}
int main(int argc,char *argv[]){
    int day,distance;
    cin>>day;
    vector<int> ivec;
    for(int i=0;i!=day;++i){
        cin>>distance;
        ivec.push_back(distance);
    }
    sort(ivec.begin(),ivec.end());
    // cout<<more_count(ivec,2);
    int i=0;
    while(i<=ivec.size() && i<=more_count(ivec,i)){
        i++;
    }
    cout<<i-1;

}