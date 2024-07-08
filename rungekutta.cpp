#include<iostream>
using namespace std;

float func(float x,float y)
{
    float f=-y/(1+x);
    return f;
}

int main(){
    float h,x0,xf,y,k1,k2,k3,k4;
    int n;
    x0=0.0000,y=2.0000,xf=2.5;
    cin>>h;

    n=(xf-x0)/h;

    for(int i=0;i<=n-1;i++)
    {
        k1=h*func(x0,y);;
        k2=h*func(x0+(0.5*h),y+(0.5*k1));;
        k3=h*func(x0+(0.5*h),y+(0.5*k2));;
        k4=h*func(x0+h,y+k3);
        y=y+(k1+(2*k2)+(2*k3)+k4)/6;
        x0=x0+h;
    }
    cout<<"Final y is "<<y;
    return 0;
}