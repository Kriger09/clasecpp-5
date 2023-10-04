#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

//Crear 2 arrays que le permitan al usuario guardar titulo y autor de 5 libros
int main()
{
   string titulos[5];
   string autor[5];
   cout<<"Ingresa información de los libros \n";
   for(int i=0;i<5;i++){
       cout<<"Libro: "<<i+1<<"\n";
       cout<<"Título:";
       getline(cin,titulos[i]);
       cout<<"Autor:";
       getline(cin,autor[i]);
   }
}