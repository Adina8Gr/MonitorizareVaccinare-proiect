#ifndef PERSOANA_H
#define PERSOANA_H


class Persoana{
    private:
        int ID;
        char name[20];
        int varsta;

    public:
        void read();
        void display();
        int getID()            { return ID;}
        int getVarsta(){return varsta;}

};


#endif // PERSOANA_H
