#include <bits/stdc++.h>
using namespace std;
// all about structures

struct Person
{
    int age;
    string name;

    void PrintDetails(){
        cout<<"age -"<<age;
        cout<<"name - "<<name;
    }
};
int main()
{
    Person a;
    a.age=20;
    a.name="sarthak";

    Person b;
    b.age=21;
    b.name="sparsh";

    a.PrintDetails();
    b.PrintDetails();
    return 0;
}