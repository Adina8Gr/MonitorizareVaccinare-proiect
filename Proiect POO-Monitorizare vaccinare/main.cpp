#include<iostream>
#include<fstream>
#include<stdio.h>
#include"Persoana.h"
#include"Vaccin.h"
#include"Boala.h"
#include<windows.h>

using namespace std;


fstream file1;
fstream file2;
fstream file3;


void deleteExistingFile1(){
    remove("Persoana.DAT");

}
void deleteExistingFile2(){
    remove("Vaccin.DAT");

}
void deleteExistingFile3()
{
    remove("Boala.DAT");
}
void appendToFille1(){
    Persoana    x;
      x.read();
      file1.open("Persoana.DAT",ios::binary|ios::app);
    if(!file1){
        cout<<"ERROR IN CREATING FILE\n";
        return;
    }
    //write into file
    file1.write((char*)&x,sizeof(x));
    file1.close();


    cout<<"Record added sucessfully.\n";
}
void appendToFille2(){


    Vaccin v;
    v.readVaccin();

    file2.open("Vaccin.DAT",ios::binary|ios::app);
    if(!file2){
        cout<<"ERROR IN CREATING FILE\n";
        return;
    }
    //write into file
    file2.write((char*)&v,sizeof(v));
    file2.close();
    cout<<"Record added sucessfully.\n";
}
void appendToFille3(){
    Boala  b;
      b.readBoala();
      file3.open("Boala.DAT",ios::binary|ios::app);
    if(!file3){
        cout<<"ERROR IN CREATING FILE\n";
        return;
    }
    //write into file
    file3.write((char*)&b,sizeof(b));
    file3.close();


    cout<<"Record added sucessfully.\n";
}
void displayAll1(){
    Persoana    x;


    file1.open("Persoana.DAT",ios::binary|ios::in);
    if(!file1){
        cout<<"ERROR IN OPENING FILE \n";
        return;
    }

    while(file1){
    if(file1.read((char*)&x,sizeof(x))){
            x.display();

    }
    }
  file1.close();

}

void displayAll2(){

    Vaccin v;


    file2.open("Vaccin.DAT",ios::binary|ios::in);
    if(!file2){
        cout<<"ERROR IN OPENING FILE \n";
        return;
    }
    while(file2){


    if(file2.read((char*)&v,sizeof(v)))
{



            v.displayVaccin();
    }
    }

  file2.close();
}
void displayAll3(){
    Boala b;


    file3.open("Boala.DAT",ios::binary|ios::in);
    if(!file3){
        cout<<"ERROR IN OPENING FILE \n";
        return;
    }

    while(file3){
    if(file3.read((char*)&b,sizeof(b))){
            b.displayBoala();

    }
    }
  file3.close();

}
void searchForRecord(){
    Persoana    x;
    Vaccin v;
    int c;
    int isFound=0;

    cout<<"Enter persoana code: ";
    cin>>c;


    file1.open("Persoana.DAT",ios::binary|ios::in);
    if(!file1){
        cout<<"ERROR IN OPENING FILE \n";
        return;
    }
    file2.open("Vaccin.DAT",ios::binary|ios::in);
    if(!file2){
        cout<<"ERROR IN OPENING FILE \n";
        return;
    }
    while((file1)&&(file2)){
        if((file1.read((char*)&x,sizeof(x)))&&(file2.read((char*)&v,sizeof(v))))
            {
            if(x.getID()==c){
                cout<<"RECORD FOUND\n";
                x.display();
                v.displayVaccin();
                isFound=1;
                break;
            }
        }
    }

    if(isFound==0){
        cout<<"Record not found!!!\n";
    }
    file1.close();
    file2.close();
}
/*
void searchForBoala(){
    Vaccin v;
    Boala b;
    int f[20];
    int isFound=0;

    cout<<"Enter nume boala: "<<endl;
    cin>>f;

    file2.open("Vaccin.DAT",ios::binary|ios::in);
    if(!file2){
        cout<<"ERROR IN OPENING FILE \n";
        return;
    }
    file3.open("Boala.DAT",ios::binary|ios::in);
    if(!file3){
        cout<<"ERROR IN OPENING FILE \n";
        return;
    }
    while((file2)&&(file3)){
        if((file2.read((char*)&v,sizeof(v)))&&(file3.read((char*)&b,sizeof(b))))
            {
            if(b.CautareBoala(f))==1){
                cout<<"RECORD FOUND\n";
                b.displayBoala();
                v.displayVaccin();
                isFound=1;
                break;
            }
        }
    }

    if(isFound==0){
        cout<<"Record not found!!!\n";
    }
    file2.close();
    file3.close();
}*/
void searchForRecordAge(){
    Persoana    x;
    Vaccin v;
    int c;
    int isFound=0;

    cout<<"Enter varsta persoana: ";
    cin>>c;


    file1.open("Persoana.DAT",ios::binary|ios::in);
    if(!file1){
        cout<<"ERROR IN OPENING FILE \n";
        return;
    }
    file2.open("Vaccin.DAT",ios::binary|ios::in);
    if(!file2){
        cout<<"ERROR IN OPENING FILE \n";
        return;
    }
    while((file1)&&(file2)){
        if((file1.read((char*)&x,sizeof(x)))&&(file2.read((char*)&v,sizeof(v))))
            {
            if(x.getVarsta()==c){
                cout<<"RECORD FOUND\n";
                x.display();
                v.displayVaccin();
                isFound=1;
                break;
            }
        }
    }

    if(isFound==0){
        cout<<"Record not found!!!\n";
    }
    file1.close();
    file2.close();
}
void searchForVaccin(){

    Vaccin v;
    char c[20];
    int isFound=0;

    cout<<"Enter nume vaccin: "<<endl;
    cin>>c;
    file2.open("Vaccin.DAT",ios::binary|ios::in);
    if(!file2){
        cout<<"ERROR IN OPENING FILE \n";
        return;
    }
    while(file2){
        if(file2.read((char*)&v,sizeof(v)))
            {
            if(v.Cautare(c)==1){
                cout<<"RECORD FOUND\n";

                v.displayVaccin();
                isFound=1;
                break;
            }
        }
    }
    if(isFound==0){
        cout<<"Record not found!!!\n";
    }

    file2.close();
}
void searchForVaccinTip(){

    Vaccin v;
    char c[20];
    int isFound=0;

    cout<<"Enter tip vaccin: "<<endl;
    cin>>c;
    file2.open("Vaccin.DAT",ios::binary|ios::in);
    if(!file2){
        cout<<"ERROR IN OPENING FILE \n";
        return;
    }
    while(file2){
        if(file2.read((char*)&v,sizeof(v)))
            {
            if(v.CautareTip(c)==1){
                cout<<"RECORD FOUND\n";

                v.displayVaccin();
                isFound=1;
                break;
            }
        }
    }
    if(isFound==0){
        cout<<"Record not found!!!\n";
    }

    file2.close();
}

void vaccinuri()
{
     ofstream wf("VACCINinfo.dat", ios::out | ios::binary);
   if(!wf) {
      cout << "Cannot open file!" << endl;
     // return 1;
   }
   Vaccin vcc[2];
   vcc[0].GetNumeVaccin("HepB");
   vcc[0].GetTipVaccin("ADN recombinant");
   vcc[1].GetNumeVaccin("ROR");
   vcc[1].GetTipVaccin("Rujeola, rubeola, oreion");

   for(int i = 0; i < 2; i++)
      wf.write((char *) &vcc[i], sizeof(Vaccin));
   wf.close();
   if(!wf.good()) {
      cout << "Error occurred at writing time!" << endl;
//      return 1;
   }
   ifstream rf("VACCINinfo.dat", ios::out | ios::binary);
   if(!rf) {
      cout << "Cannot open file!" << endl;
     // return 1;
   }
//   Vaccin vcc[2];
   for(int i = 0; i < 2; i++)
      rf.read((char *) &vcc[i], sizeof(Vaccin));
   rf.close();
   if(!rf.good()) {
      cout << "Error occurred at reading time!" << endl;
      //return 1;
   }
   cout<<"Vaccinuri:"<<endl;
   for(int i=0; i < 2; i++) {
      vcc[i].displayVaccin();
   }

}

int main()
{
     static CONSOLE_FONT_INFOEX  fontex;
     fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
     HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
     GetCurrentConsoleFontEx(hOut, 0, &fontex);
     fontex.FontWeight = 30;
     fontex.dwFontSize.X = 10;
     fontex.dwFontSize.Y = 17;
     SetCurrentConsoleFontEx(hOut, NULL, &fontex);
     system("Color 8E");

     char ch;
     deleteExistingFile1();
     deleteExistingFile2();
     deleteExistingFile3();

     do{
     int n;


     cout<<"        ~MONITORIZARE VACCINARE~\n\n\t"<<"1.Adauga persoana+boala+vaccin\n\t"<<"2.Adauga persoana+boala\n\t"<<"3.Adauga boala+vaccin\n\t"<<"4.Afiseaza persoane vaccinate\n\t"<<"5.Afiseaza vaccinuri\n\t"<<"6.Cauta persoana dupa ID\n\t"<<"7.Cauta vaccin dupa nume\n\t"<<"8.Cauta persoana dupa varsta\n\t"<<"9.Cauta vaccin dupa tip\n\t"<<"10.Afisare boli\n\n";
     cout<<"Make a choice: ";
     cin>>n;

     switch(n){
          case 1:
                   system("Color E8");
                cout<<"\n";
            appendToFille1();
            cout<<"\n";
            appendToFille3();
            cout<<"\n";
            appendToFille2();
            break;
        case 2:
            system("Color E8");
                cout<<"\n";
            appendToFille1();
            appendToFille3();
            break;
         case 3:
          system("Color E8");
                cout<<"\n";
            appendToFille3();
            cout<<"\n";
            appendToFille2();
            break;


          case 4:
        system("Color E8");
                cout<<"\n";
            displayAll1();
            break;
        case 5:
         system("Color E8");
              cout<<"\n";
            displayAll2();
            break;
          case 6:
               system("Color E8");
                cout<<"\n";
            searchForRecord();
            break;
          case 7:
               system("Color E8");
                cout<<"\n";
            searchForVaccin();
            break;
          case 8:
               system("Color E8");
                cout<<"\n";
                searchForRecordAge();

                 break;

          case 9:
               system("Color E8");
            cout<<"\n";
            searchForVaccinTip();
            break;


      case 10:
         system("Color E8");
              cout<<"\n";
            displayAll3();
            break;
case 11:
               system("Color E8");
                cout<<"\n";
           // searchForBoala();
            break;
          default :
                cout<<"Invalid Choice\n";
     }

     cout<<"\nDo you want to continue ? : ";
     cin>>ch;
      system("Color 8E");
     cout<<"\n";

     }while(ch=='Y'||ch=='y');


    return 0;
}

