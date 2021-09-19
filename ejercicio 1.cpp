#include <iostream>
using namespace std;
int main()
{
//calcule el promedio de 50 valores
//determinar cuantos son mayores que el promedio 
//imprimir el promedio
//imprimir cuales son los datos mayores que el promedio 
float notas[50];
float mayores[50];
int cont=0;
float suma=0,promedio;
int i,cant_mayor;
float val_mayor;
cout<<"Calcular el promedio de 50 valores almacenados en un vector\n\n";
cout<<"Primero vamos a llenar el vector o arreglo."<<endl;
for (i=1;i<=50;i++){
cout<<"Por favor introdusca el valor numero ("<<i<<"): ";
cin>> notas[i];
cout<<endl;
suma=suma+notas[i];
}
promedio=suma/50;
for (i=1;i<=50;i++){
    if (notas[i]>promedio){
        cont=cont+1;
        mayores[i];
  }
    }
cout<<endl;
cout<<"--------------------------------"<<endl;
cout<<"Datos obtenidos:\n\n";
cout<<"El promedio es: "<<promedio<<endl;
cout<<"El numero de valores superiores al promedio es: "<<cont<<endl;
cout<<"El numero de valores menor al promedio es "<<50-cont<<endl;
cout<<"Los valores mayores al promedio son:"<<endl;
for (i=1;i<=50;i++){
	if (notas[i]>promedio){
    cout<<"--> "<<notas[i];
    cout<<endl;
	}
}

cout<<endl;
cout<<endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}