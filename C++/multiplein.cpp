#include<iostream>

using namespace std;

class prime{
    private:
         int a,count,t;

    public:
        void get()
        {
            cout<<"Enter the no. : "<<endl;
            cin>>a;
            count=0;
        }

        void check()
        {
            for(int i=1;i<a;i++)
            {
                if(a%i==0)
                {
                    count++;
                }
                t++;
            }
            cout<<"t = "<<t<<endl;
        }

        void display()
        {
            if(count==1)
                cout<<"The no. is prime"<<endl;

            else
                cout<<"not prime"<<endl;
        }
};

int main()
{
    prime obj;

    obj.get();
    obj.check();
    obj.display();
}
