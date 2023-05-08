#include "Vaccin.h"
#include<iostream>
#include<string.h>
using namespace std;
 /*Vaccin::Vaccin()
 {
     strcpy(numeV," ");
     strcpy(tip," ");
 };
Vaccin::~Vaccin()
{
    delete[] numeV;
    delete[] tip;
};*/
       // Vaccin(char*,char*,int,int);
char* Vaccin::GetNumeVaccin(char* v1)
{
    return numeV;
}
char* Vaccin::GetTipVaccin(char *v2)
{
    return tip;
}
 void Vaccin:: readVaccin()
    {
        cout<<"~Informatii vaccin~"<<endl;
       // cin.ignore(256, '\n');
        cout<<"Nume vaccin: "<<endl;
        cin.getline(numeV,20);

        cout<<"Tip vaccin: "<<endl;

        cin.getline(tip,20);
        cout<<"Nr doze total:"<<endl;

        cin>>nrDoze;
        cout<<"Doza curenta:"<<endl;
        cin>>doza;
        cout<<"Cost vaccin:"<<endl;
        cin>>cost;
    }
void Vaccin::displayVaccin()
    {
        cout<<"Nume Vaccin: "<<numeV<<" Tip: "<<tip<<" Nr doze: "<<nrDoze<<" Doza: "<<doza<<" Cost: "<<cost<<endl;
    }
bool Vaccin::Cautare(char*x)
{
    if(strcmp(this->numeV,x)==0)
        return 1;
    return 0;
}
bool Vaccin::CautareTip(char*x)
{
    if(strcmp(this->tip,x)==0)
        return 1;
    return 0;
}

