#include<stdio.h>
#include<math.h>
struct complex{
    double real;
    double image;
};
struct icomplex{
    double length;
    double angle;
};
int main(int argc,char *argv[]){
    struct complex ret;
    struct icomplex icom1,icom2,iret;
    scanf("%lf %lf %lf %lf",&icom1.length,&icom1.angle,&icom2.length,&icom2.angle);
    iret.length=icom1.length*icom2.length;
    iret.angle=icom1.angle+icom2.angle;
    ret.real=iret.length*cos(iret.angle);
    ret.image=iret.length*sin(iret.angle);
    if(-0.05<ret.real&&ret.real<0)  ret.real=0;
    if(-0.05<ret.image&&ret.image<0)   ret.image=0;
    if(ret.image>=0){
        printf("%.2lf+%.2lfi",ret.real,ret.image);
    }else{
        printf("%.2lf-%.2lfi",ret.real,-ret.image);
    }
}