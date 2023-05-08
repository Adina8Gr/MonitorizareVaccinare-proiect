#include "Boala.h"
#include<iostream>
#include<string.h>
using namespace std;

void Boala::readBoala()
{
    cout<<"Enter nume boala: ";
    cin.ignore(256, '\n');
    cin.getline(numeB,20);
}
void Boala::displayBoala()
{
    cout<<"Boala: "<<numeB<<endl;
}
char* Boala::GetNumeBoala(char* b1)
{
    return numeB;
}
bool Boala::CautareBoala(char*d)
{
    if(strcmp(this->numeB,d)==0)
        return 1;
    return 0;
}
