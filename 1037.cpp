#include<iostream>

using namespace std;

struct money{
    int galleon;
    int sickle;
    int knut;
    money(){}
    money(int _galleon,int _sickle,int _knut):galleon(_galleon),sickle(_sickle),knut(_knut){}
    money& operator-=(const money &ot);
    bool operator<(const money &ot) const;
    money operator-(const money &ot)const;
};
money& money::operator-=(const money &ot){
    if(ot.knut<=this->knut&&ot.sickle<=this->sickle){
        this->knut-=ot.knut;
        this->sickle-=ot.knut;
        this->galleon-=ot.knut;
    }else if(this->knut<ot.knut&&ot.sickle<=this->sickle){
        if(ot.sickle==this->sickle){
            this->knut=this->knut+29-ot.knut;
            this->sickle=this->sickle-1+17-ot.sickle;
            this->galleon=this->galleon-1-ot.galleon;
        }else{
            this->knut=this->knut+29-ot.knut;
            this->sickle-=ot.sickle;
            this->galleon-=ot.galleon;
        }
    }else if(this->knut<ot.knut&&this->sickle<ot.sickle){
        this->knut=this->knut+29-ot.knut;
        this->sickle=this->sickle-1+17-ot.sickle;
        this->galleon=this->galleon-1-ot.galleon;
    }else{
        this->knut-=ot.knut;
        this->sickle=this->sickle+17-ot.sickle;
        this->galleon=this->galleon-1-ot.galleon;
    }
    return *this;
}
bool money::operator<(const money &ot) const{
    
}

int main(int argc,char *argv[]){
    // money real(10,16,27),wallet(14,1,28);
    money real(14,1,28),wallet(10,16,27);
    wallet-=real;
    cout<<wallet.galleon<<"."<<wallet.sickle<<"."<<wallet.knut;
}