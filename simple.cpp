#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

class student
{
    private:
        string name;
        int age;
        char gender[40];
    public:
        void info()
        {
            cout<<"\n Enter Your Name : ";
            cin>>name;

            cout<<"\n Enter Your Age : ";
            cin>>age;

            cout<<"\n Enter Your Gender : ";
            cin>>gender;
        }

        void display()
        {
            cout<<"\n Your Name : "<<name<<"  Age : "<<age<<"  Gender : "<<gender<<endl;
        }
};


class marks:public student
{
    private:
        int a,b,c,d,e;
        float h,f;
    public:
    void read()
    {
        cout<<"ENGLISH : ";
        cin>>a;
        cout<<"MATHS : ";
        cin>>b;
        cout<<"ACCOUNTS : ";
        cin>>c;
        cout<<"ECONOMICS : ";
        cin>>d;
        cout<<"BUSINESS STD : ";
        cin>>e;
        f=a+b+c+d+e;
        h=(f/500)*100;
    }


        void dis()
        {
            cout<<"\n Your Total Marks Is = "<<f<<endl;
            cout << setprecision(3) << fixed;
            cout<<" And Your Percentage Is = "<<h<<endl;
        }
};
int main()
{
    marks a;
    a.info();
    a.read();
    a.display();
    a.dis();
}
