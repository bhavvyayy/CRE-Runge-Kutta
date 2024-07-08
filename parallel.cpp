#include<iostream>
using namespace std;

float func1(float t,float a,float b,float c,float d)
{
    float f=-(2*a);
    return f;
}
float func2(float t,float a,float b,float c,float d)
{
    float f=-2*b;
    return f;
}
float func3(float t,float a,float b,float c,float d)
{
    float f=a*b;
    return f;
}
float func4(float t,float a,float b,float c,float d)
{
    float f=a*b;
    return f;
}

int main()
{
    float h,t0,tf,a,b,c,d,k1,k2,k3,k4,l1,l2,l3,l4,m1,m2,m3,m4,n1,n2,n3,n4;
    int n;
    float h=0.01;
    t0=0,a=1,b=1,c=0,d=0;
    cin>>tf;

    n=(tf-t0)/h;

    for(int i=0;i<=n-1;++i)
    {
        k1=h*func1(t0,a,b,c,d);
        l1=h*func2(t0,a,b,c,d);
        m1=h*func3(t0,a,b,c,d);
        n1=h*func4(t0,a,b,c,d);

        k2=h*func1(t0+(0.5*h),a+(0.5*k1),b+(0.5*l1),c+(0.5*m1),d+(0.5*n1));
        l2=h*func2(t0+(0.5*h),a+(0.5*k1),b+(0.5*l1),c+(0.5*m1),d+(0.5*n1));
        m2=h*func3(t0+(0.5*h),a+(0.5*k1),b+(0.5*l1),c+(0.5*m1),d+(0.5*n1));
        n2=h*func4(t0+(0.5*h),a+(0.5*k1),b+(0.5*l1),c+(0.5*m1),d+(0.5*n1));

        k3=h*func1(t0+(0.5*h),a+(0.5*k2),b+(0.5*l2),c+(0.5*m2),d+(0.5*n2));
        l3=h*func2(t0+(0.5*h),a+(0.5*k2),b+(0.5*l2),c+(0.5*m2),d+(0.5*n2));
        m3=h*func3(t0+(0.5*h),a+(0.5*k2),b+(0.5*l2),c+(0.5*m2),d+(0.5*n2));
        n3=h*func4(t0+(0.5*h),a+(0.5*k2),b+(0.5*l2),c+(0.5*m2),d+(0.5*n2));

        k4=h*func1(t0+h,a+k3,b+l3,c+m3,d+n3);
        l4=h*func2(t0+h,a+k3,b+l3,c+m3,d+n3);
        m4=h*func3(t0+h,a+k3,b+l3,c+m3,d+n3);
        n4=h*func4(t0+h,a+k3,b+l3,c+m3,d+n3);

        a=a+(k1+(2*k2)+(2*k3)+k4)/6;
        b=b+(l1+(2*l2)+(2*l3)+k4)/6;
        c=c+(m1+(2*m2)+(2*m3)+k4)/6;
        d=d+(n1+(2*n2)+(2*n3)+n4)/6;
        t0=t0+h;
    }
    }