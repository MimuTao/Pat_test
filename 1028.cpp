#include<iostream>
#include<string>

using namespace std;
struct Human{
    string name;
    string time;
    Human(){}
    Human(string _name,string _time):name(_name),time(_time){}
    bool not_exist() const{
        return this->time>"2014/09/06";
    }
    bool is_200year() const{
        return this->time<"1814/09/06";
    }
    bool operator < (const Human &ot) const{
        return this->time<ot.time;
    }
    void operator =(const Human &ot){
        this->name=ot.name;
        this->time=ot.time;
    }
};
int main(void){
    int count;
    cin>>count;
    string name,time;
    int ret=0;
    bool flag=true;
    Human temp,min,max;
    for(int i=0;i!=count;++i){
        cin >>name>>time;
        temp=Human(name,time);
        if(!temp.not_exist()&&!temp.is_200year()){
            if(flag){
                min=temp;
                max=temp;
                flag=false;
            }else{
                if(temp<min)
                    min=temp;
                if(max<temp)
                    max=temp;
            }
            ret++;
        }
    }
    if(ret){
        cout<<ret<<" "<<min.name<<" "<<max.name;
    }else{
        cout<<ret;
    }


    return 0;

}