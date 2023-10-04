#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;


int main(){
    string planetas[9]={"Venus", "Tierra", "Marte", "Júpiter", "Urano", "Neptuno","Pluton"};

    //1.- Agregar los 2 elementos faltantes al arreglo planetas para que este completo
    //planetas[8]="Saturno";
    //planetas[7]="Mercurio";

    //2.-Mostrar todos los datos que contiene el array con un ciclo for
    
    

    //3.- Agregar los 2 elementos faltantes en el lugar que les corresponde del arreglo planetas para que este completo
    planetas[0]="Mercurio";
    planetas[1]="Venus";
    planetas[2]="Tierra";
    planetas[3]="Marte";
    planetas[4]="Júpiter";
    planetas[5]="Saturno";
    planetas[6]="Urano";
    planetas[7]="Neptuno";
    planetas[8]="Pluton";

   for(int i=0;i<9;i++){
        cout<<planetas[i]<<endl;
    }
}