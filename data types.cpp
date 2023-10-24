#include<iostream>
using namespace std;


int main()
{
    int age;
    float myFloatVar;
    string myStrvar;
    char myCharVar;
    cout <<"Enter age" ;
    cin >>  age;
    cout<<"enter float value";
    cin >> myFloatVar ;
    cout<<"enter variable value" ;
    cin >> myStrvar;
    cout<<"enter character value" ;
    cin>> myCharVar ;

    cout<<"the value of integer variable is:"<< age <<endl <<"the value of float variable is: "<< myFloatVar <<endl<<"the value of string variable is: "<< myStrvar <<endl<<"the value of character variable is: "<< myCharVar<<endl;
    cout<<sizeof(age)<<endl<<sizeof(myFloatVar)<<endl<<sizeof(myStrvar)<<endl<<sizeof(myCharVar);
}