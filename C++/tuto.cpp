#include <iostream>
#include<string>

using namespace std;

class a
{
    public:
        void info(string z,int x)
        {
            name =z;
            roll=x;
        }
        string getIn()
        {
            return name;
        }
        int get()
        {
            return roll;

        }


    private:
        string name;
        int roll;
};

class student
{
    public:
        student()
        {
            cout<<"It Will Print My Name And My Roll No. \n";
        }

        void info(string z,int x)
        {
            name =z;
            roll=x;
        }

        string getIn()
        {
            return name;
        }
        int get()
        {
            return roll;
        }


    private:
        string name;
        int roll;
};

int main()
{
    student to;
    to.info("Abdullah",1704051202);

    a to1;
    to1.info("Azhar",170402);

    cout<<to.getIn()<<endl;
    cout<<to.get()<<endl;

    cout<<to1.getIn()<<endl;
    cout<<to1.get()<<endl;

}