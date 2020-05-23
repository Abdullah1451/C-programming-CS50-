#include <iostream>
using namespace std;

class Vehicle
{
	private:
		int a;

	public:

		Vehicle()
		{
			a=20;
			cout << "This is a Vehicle : " <<a<< endl;
		}
};


class Car:public Vehicle
{

	public:
		Car()
		{
			cout << "This is a Vehicle calles CAR : " <<a<< endl;
		}
};


class Bus:public Vehicle
{
	public:
		Bus()
		{
			cout << "This is a Vehicle calls BUS" << endl;
		}
};

int main()
{
	Car o;
	Bus obj;
	return 0;
}
