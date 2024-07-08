#include <iostream>
using namespace std;
float func1(float t, float a, float b, float c)
{
    float f=-a;
    return f;
}
float func2(float t, float a, float b, float c)
{
    float f=a-b;
    return f;
}
float func3(float t, float a, float b, float c)
{
    float f=b;
    return f;
}

int main()
{
    float h,x0,xf,t0,a,b,c,k1,k2,k3,k4,l1,l2,l3,l4,m1,m2,m3,m4;
    int n;
    t0=0,a=1,b=0,c=0,x0=0;
    h=0.01;
    cin>>xf;
    n=(xf-x0)/h;
    
    for(int i=0;i<=n-1;++i)
    {
        k1=h*func1(t0,a,b,c);
        l1=h*func2(t0,a,b,c);
        m1=h*func3(t0,a,b,c);
        k2=h*func1(t0+(0.5*h),a+(0.5*k1),b+(0.5*l1),(0.5*m1));
        l2=h*func2(t0+(0.5*h),a+(0.5*k1),b+(0.5*l1),(0.5*m1));
        m2=h*func3(t0+(0.5*h),a+(0.5*k1),b+(0.5*l1),(0.5*m1));
        k3=h*func1(t0+(0.5*h),a+(0.5*k2),b+(0.5*l2),(0.5*m2));
        l3=h*func2(t0+(0.5*h),a+(0.5*k2),b+(0.5*l2),(0.5*m2));
        m3=h*func3(t0+(0.5*h),a+(0.5*k2),b+(0.5*l2),(0.5*m2));
        k4=h*func1(t0+h,a+k3,b+l3,c+m3);
        l4=h*func2(t0+h,a+k3,b+l3,c+m3);
        m4=h*func3(t0+h,a+k3,b+l3,c+m3);
        a=a+(k1+(2*k2)+(2*k3)+k4)/6;
        b=b+(l1+(2*l2)+(2*l3)+l4)/6;
        c=c+(m1+(2*m2)+(2*m3)+m4)/6;
        t0=t0+h;
     }
     cout<<"a ="<<a<<endl;
     cout<<"b ="<<b<<endl;
     cout<<"c ="<<c<<endl;
     cout<<"t ="<<t0<<endl;
     return 0;
}