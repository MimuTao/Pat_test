#include<iostream>
#include<list>
#include<string>
#include<algorithm>

using namespace std;
struct Human{
    string name;
    int height;
    Human(){}
    Human(string _name,int _height):name(_name),height(_height){}
    bool operator < (const Human &ot) const;
    Human& operator = (const Human &ot);
};
bool Human::operator<(const Human &ot) const{
    return this->height<ot.height||(this->height==ot.height&&this->name>ot.name);
}
Human& Human::operator=(const Human &ot){
    this->name=ot.name;this->height=ot.height;
    return *this;
}
int main(int argc,char *argv[]){
    int stu_number,row,col;
    cin>>stu_number>>row;
    col=stu_number/row;
    string name;int height;
    list<Human> ivec;
    for(int i=0;i!=stu_number;++i){
        cin>>name>>height;
        ivec.push_back(Human(name,height));
    }
    ivec.sort();
    Human temp;
    list<list<Human> > ivec_iv;
    for(int i=0;i!=row;++i){
        list<Human> ivec_t;
        if(i!=0){
            for(int j=0;j!=col;++j){
                temp=ivec.back();
                ivec.pop_back();
                if(j%2==0){
                    ivec_t.push_back(temp);
                }else{
                    ivec_t.push_front(temp);
                }
            }
        }else{
            int j=0;
            while(j!=stu_number-(row-1)*col){
                temp=ivec.back();
                ivec.pop_back();
                if(j++%2==0){
                    ivec_t.push_back(temp);
                }else{
                    ivec_t.push_front(temp);
                }
            }
        }
        ivec_iv.push_front(ivec_t);
    }
    for(list<list<Human> >::reverse_iterator it=ivec_iv.rbegin();it!=ivec_iv.rend();++it){
        bool flag=true;
        for(list<Human>::iterator iit=it->begin();iit!=it->end();++iit){
            if(flag){
                cout<<iit->name;
                flag=false;
            }else{
                cout<<" "<<iit->name;
            }
        }
        cout<<endl;
    }
    
}