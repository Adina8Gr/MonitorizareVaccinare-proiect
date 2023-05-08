#ifndef VACCIN_H
#define VACCIN_H
#include<iostream>
using namespace std;

class Vaccin
{
    private:

        char numeV[20], tip[20];
        int  nrDoze,doza, cost;

    public:
       // Vaccin();
       // ~Vaccin();
       //Vaccin(char*,char*,int,int);
    char *GetNumeVaccin(char*);
    char *GetTipVaccin(char*);
    int getNrDoze(){return nrDoze;}
    int getDoza(){return doza;}
    int getCost(){return cost;}
    void displayVaccin();
    void readVaccin();
    char* gettip(){return tip;}
    bool Cautare(char*);
    bool CautareTip(char*);


};

#endif // VACCIN_H
