#include<iostream>
#include<fstream>
#include<string>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

using namespace std;

int main()
{
    string line;
    string name;
    int age;
    ofstream ab("Abdullah.txt");

    while (ab) {

        cout <<"Enter The Text \n";

        // Read a Line from standard input
        getline(cin,name);

        // Press -1 to exit
        if (name == "-1")
           break;

        // Write line in file
        ab << name << endl;
    }
  /*  cout<<"Enter Your Name : ";
    cin>>name;

    cout<<"Enter Your age : ";
    cin>>age;

    ab<<name <<' '<<' ' <<age ;*/


    ab.close();


    ifstream abd("Abdullah.txt");

    while (!abd.eof()) {

        // Read a Line from File
        getline(abd,name);

        // Print line in Console
        cout << name << endl;
    }



    abd.close();


}