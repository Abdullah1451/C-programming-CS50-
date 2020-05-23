#include<iostream>
using namespace std;
class account
{
    char name[];
    int acno;
    float balance;
    char type[10];
    public:
        void initial()
        {
            int i=0;
            acno=0;
            balance=0;
            cout<<"Enter the name of customer : ";
            cin>>name;
            cout<<"Enter the account number : ";
            cin>>acno;
            cout<<"Balance is "<<balance<<endl;
            cout<<"Enter the balance of customer : ";
            cin>>balance;
            cout<<"Enter the account type : ";
            cin>>type;


        }
        void deposit(float amount)
        {
            balance=balance+amount;
            cout<<"New balance(after depositing)is : "<<balance<<endl;
        }
        void withdrawl(float amount)
        {
                if(balance>=amount)
                {
                    balance=balance-amount;
                    cout<<"New balance(after withdrawl)is : "<<balance<<endl;
                }
                else
                    cout<<"INSUFFICIENT BALANCE!!!"<<endl;
        }

        void display(int i)
        {
            cout<<"\n**********Information Of Costumer"<<i+1 <<"************"<<endl;
            cout<<"Name is :"<<name<<endl;
            cout<<"Account no. is :"<<acno<<endl;
            cout<<"Account type is :"<<type<<endl;
            cout<<"Balance is :"<<balance<<endl;
            cout<<"\n\n\n";

        }
};
int main()
{
    account c[10];
    float amount;
    int i=0;
    while(i<10)
    {

        c[i].initial();

        cout<<"Enter Amount To deposit : ";
        cin>>amount;
        c[i].deposit(amount);

        cout<<"Enter Amount To Withdrawl : ";
        cin>>amount;
        c[i].withdrawl(amount);

        c[i].display(i);
        i++;
    }
}





/*
#include<iostream>
using namespace std;
class account
{
public:
    int acno;
    float blance;
    char name[100];
    char type[];
    void initial()
    {
        blance=0;
        cout<<"Coustmer name :";
        cin>>name;
        cout<<"Account no :";
        cin>>acno;
        cout<<"Enter Account type :";
        cin>>type;
        cout<<"Balance is "<<blance<<endl;
        cout<<"enter blance :";
        cin>>blance;
        cout<<"Blance is :"<<blance<<endl;
    }
    void deposit(float amount)
    {
        blance=blance+amount;
        cout<<"New blance is :"<<blance<<endl;
    }
    void withdrawl(float amount)
    {
            if(blance>amount)
            {
                blance=blance-amount;
                cout<<"New blance (After withdrawl) is:"<<blance<<endl;
            }
            else
            {
                cout<<"Insufficient Balance";
            }
    }
    void display();
};
void account::display()
{
    cout<<"**********Customer Information************"<<endl;
    cout<<"Name is :"<<name<<endl;
    cout<<"Account no. is :"<<acno<<endl;
    cout<<"Account type is :"<<type<<endl;
    cout<<"Balance is :"<<blance<<endl;
}
int main()
{
    account c;
    float amount;
        c.initial();
        cout<<"Enter the amount to be deposit";
        cin>>amount;
        c.deposit(amount);
        cout<<"Enter the amount to withdrawl";
        cin>>amount;
        c.withdrawl(amount);
        c.display();
}
*/