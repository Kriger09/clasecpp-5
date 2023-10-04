#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;


int main(){
    string heroes[9]={"Batman", "Thor", "IronMan", "Hulk", "Superman", "BlackWidow"};

    //1.- En el array heroes hay elementos que no corresponden al universo Marvel
    //Sustituyelos por elementos que si pertenezcan a Marvel
    heroes[0]="Capitán América";
    heroes[4]="Hawkeye";

    //2.-Mostrar todos los datos que contiene el heroes 
   for(int i=0;i<9;i++){
       cout<<heroes[i]<<endl;
   }
}