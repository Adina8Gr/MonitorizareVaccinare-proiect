#include "Persoana.h"
#include<iostream>
using namespace std;

void Persoana::read(){
    cout<<"Enter ID: ";
    cin>>ID;
    cout<<"Enter nume: ";
    cin.ignore(1);
    cin.getline(name,20);
    cout<<"Varsta: ";
    cin>>varsta;

}


void Persoana::display()
{
    cout<<ID<<". "<<name<<" "<<varsta<<" ani"<<endl;
}
