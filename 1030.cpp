#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void){
    int count_,mu_number;
    cin>>count_>>mu_number;
    vector<double> ivec;
    double temp;
    for(int i=0;i!=count_;++i){
        cin>>temp;
        ivec.push_back(temp);
    }   
    sort(ivec.begin(),ivec.end()); 
    int count;
    int flag;
    for(int j=ivec.size()-1;j!=0;j--){
        if(ivec[j]<=ivec[0]*mu_number){
            count =j;
            break;
        }
    }
    for(int i=1;i!=ivec.size();++i){
        int j=ivec.size()-1;
        if(j-i<count){
            break;
        }
        while(j-i>count){
            if(ivec[j]<=ivec[i]*mu_number){
                count=j-i;
                break;
            }
            --j;
        }
    }
    cout<<count+1;

}