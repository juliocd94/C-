#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //PARA BUSCAR UN NUMERO EN UN ARREGLO DE 5 NUMEROS:
           
    //declaro el arreglo de tipo entero
    int num[5];
 
    //declaro la variable que almacenara al numero que quiero buscar en el arreglo
    int n;
    
    //declaro una varibale ban que me indicara si se encuentra o no el numero en el arreglo
    int ban=0;
    
	//Titulo
	cout<<"*****BUSCAR UN NUMERO EN UN VECTOR O ARREGLO*****"<<endl<<endl;
	cout<<"Primero vamos a llenar el vector con 5 numeros enteros"<<endl;
    //procedo a leer el arreglo 
    for(int i=0; i<5; i++){
        cout<<endl<<"Ingrese numero "<<i+1<<": ";  
        cin>>num[i];          
            }
      
    //ahora ingreso el numero a buscar en el arreglo
    cout<<endl<<endl<<"Ingrese numero a buscar: ";
    cin>>n;

    //BUSCO EL NUMERO INGRESADO EN EL ARREGLO
            for(int i=0; i<5; i++){
                 if(n==num[i]){
                        ban=1;
                cout<<endl<<"el numero "<<n<<" se encuentra en la posicion: "<<" ["<<i+1<<"] "<<endl; 
                            break;                   
                         }
                 else{
                              ban=0;
                              }
                    }
                    
                 if(ban==0){
                      cout<<endl<<endl<<"el numero no se encuentra en el arreglo"<<endl;
                 }
 
              
       
    system("PAUSE");
    return EXIT_SUCCESS;
}