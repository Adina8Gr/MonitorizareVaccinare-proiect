#ifndef BOALA_H
#define BOALA_H
#include<iostream>
using namespace std;

class Boala
{
    public:
       void readBoala();
       void displayBoala();
       char *GetNumeBoala(char*);
       bool CautareBoala(char*);
    private:
        char numeB[50];
};

#endif // BOALA_H
