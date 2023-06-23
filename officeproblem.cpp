#include<iostream>
using namespace std;
class office
{
    protected:
    int basic,hra,b=0;
    public:
    void getdata();
    void putdata();
};
void office::getdata()
{
    bool k;
    cout<<"enter the basic of the employee:";
    cin>>basic;
    cout<<"enter the hra of the employee:";
    cin>>hra;
    cout<<"if the employee is the manager then:";
    cin>>k;
    if(k==true)
    {
        cout<<"enter the aditional allowence:";
        cin>>b;
    }
};
void office::putdata()
{
    cout<<"enter the basic of the employee:";
    cout<<basic;
    cout<<"enter the hra of the employee:";
    cout<<hra;
    cout<<"the aditional allowence of the employee is:\n:";
    cout<<b;
}
class kolkata:public office
{
    public:
    float k;
    void getdata_k()
    {
        cout<<"enter the city allowence:\n";
        cin>>k;
    }
    void putdata_k()
    {
        cout<<"the city allowence is:"<<k;
        cout<<"total salary of the employee is:\n"<<basic+hra+b+k<<endl;
    }
};
class delhi:public office
{
    public:
    float d;
    void getdata_d()
    {
        cout<<"enter the city allowence:\n";
        cin>>d;
    }
    void putdata_d()
    {
        cout<<"the city allowence is:"<<d;
        cout<<"total salary of the employee is:\n"<<basic+hra+b+d<<endl;
    }
};
class dargeeling:public office
{
    public:
    float l;
    void getdata_l()
    {
        cout<<"enter the city allowence:\n";
        cin>>l;
    }
    void putdata_l()
    {
        cout<<"the city allowence is:"<<l;
        cout<<"total salary of the employee is:\n"<<basic+hra+b+l<<endl;
    }
};
int main()
{
    kolkata a;
    delhi m;
    dargeeling n;
    cout<<"enter the employee information who work in kolkata:\n";
    a.getdata();
    a.getdata_k();
    cout<<"enter the employee information who work in delhi:\n";
    m.getdata();
    m.getdata_d();
    cout<<"enter the employee information who work in darjeeling:\n";
    n.getdata();
    n.getdata_l();
     cout<<"employee information who work in kolkata:\n";
    a.putdata();
    a.putdata_k();
    cout<<"employee information who work in delhi:\n";
    m.putdata();
    m.putdata_d();
    cout<<"employee information who work in darjeeling:\n";
    n.putdata();
    n.putdata_l();
    return 0;
}