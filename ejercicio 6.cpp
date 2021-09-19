#include <iostream>

using namespace std;

int main() {
	string nombre [2];
	float salario [2];
	string idoneidad [2];
	
	int faltas_enero [2];
	int faltas_febrero [2];
	int faltas_marzo [2];
	int faltas_abril [2];
	int faltas_mayo [2];
	int faltas_junio [2];
	int faltas_julio [2];
	int faltas_agosto [2];
	int faltas_septiembre [2];
	int faltas_octubre [2];
	int faltas_noviembre [2];
	int faltas_diciembre [2];
	
	float cont2=0;
	float cont3=0;
	string nombre2 = "rr";
	int mayor = 0;
	int mayor_l= 0;
	
	
	cout<<"*****Ingresar datos de los trabajadores*****"<<endl;
	for(int i=0; i<2; i++){
		cout<<"Ingrese nombre de trabajador (sin espacios): "<<endl;
		cin>>nombre[i];
		cout<<"Ingrese salario base mensual: "<<endl;
		cin>>salario[i];
		cout<<"Ingrese evaluacion de idoneidad (valores permitidos B,R,M): "<<endl;
		cin>>idoneidad[i];
		cout<<"Ingrese faltas del mes de enero: "<<endl;
		cin>>faltas_enero[i];
		cout<<"Ingrese faltas del mes de febrero: "<<endl;
		cin>>faltas_febrero[i];
		cout<<"Ingrese faltas del mes de marzo: "<<endl;
		cin>>faltas_marzo[i];
		cout<<"Ingrese faltas del mes de abril: "<<endl;
		cin>>faltas_abril[i];
		cout<<"Ingrese faltas del mes de mayo: "<<endl;
		cin>>faltas_mayo[i];
		cout<<"Ingrese faltas del mes de junio: "<<endl;
		cin>>faltas_junio[i];
		cout<<"Ingrese faltas del mes de julio: "<<endl;
		cin>>faltas_julio[i];
		cout<<"Ingrese faltas del mes de agosto: "<<endl;
		cin>>faltas_agosto[i];
		cout<<"Ingrese faltas del mes de septiembre: "<<endl;
		cin>>faltas_septiembre[i];
		cout<<"Ingrese faltas del mes de octubre: "<<endl;
		cin>>faltas_octubre[i];
		cout<<"Ingrese faltas del mes de noviembre: "<<endl;
		cin>>faltas_noviembre[i];
		cout<<"Ingrese faltas del mes de diciembre: "<<endl;
		cin>>faltas_diciembre[i];
		cout<<endl<<endl;
	}
	
	
	cout<<endl<<"******DATA TRABAJADOR*******"<<endl;
	for(int i=0; i<2; i++){
		cout<<"Nombre Trabajador: "<<nombre[i]<<endl;
		cout<<"Salario Base Mensual: "<<salario[i]<<endl;
    	cout<<"Evaluacion de idoneidad: "<<idoneidad[i]<<endl;
		cout<<"Faltas mes de Enero "<<faltas_enero [i]<<endl;
		cout<<"Faltas mes de Febrero "<<faltas_febrero [i]<<endl;
		cout<<"Faltas mes de Marzo "<<faltas_marzo [i]<<endl;
		cout<<"Faltas mes de Abril "<<faltas_abril [i]<<endl;
		cout<<"Faltas mes de Mayo "<<faltas_mayo [i]<<endl;
		cout<<"Faltas mes de Junio "<<faltas_junio [i]<<endl;
		cout<<"Faltas mes de Julio "<<faltas_julio [i]<<endl;
		cout<<"Faltas mes de Agosto "<<faltas_agosto [i]<<endl;
		cout<<"Faltas mes de Septiembre "<<faltas_septiembre [i]<<endl;
		cout<<"Faltas mes de Octubre "<<faltas_octubre [i]<<endl;
		cout<<"Faltas mes de Noviembre "<<faltas_noviembre [i]<<endl;
		cout<<"Faltas mes de Diciembre "<<faltas_diciembre [i]<<endl;
		
		int arreglo[] = {faltas_enero[i],faltas_febrero[i],faltas_marzo[i],faltas_abril[i],faltas_mayo[i],faltas_junio[i],faltas_julio[i],faltas_agosto[i],faltas_septiembre[i],faltas_octubre[i],faltas_noviembre[i],faltas_diciembre[i]};
		
		int cont=0;
	
		for (int i=0;i<12;i++){
		    if (arreglo[i]<1){
		        cont=cont+1;
		  	}
		}
		if(idoneidad[i] == "B" & cont > 9){
			cout<<"****El trabajador cumple con Idoneidad B y almenos 9 meses sin faltas, debe recibir una estimulacion de 30%------>Nuevo salario "<<salario[i]*0.3+salario[i]<<endl;
			int neto=salario[i]*0.3+salario[i];
			int neto2=neto-salario[i];
			cont2=cont2+neto2;
			cont3=cont3+1;
		}else{
			cout<<"No cumple con los parametros minimos para 30%"<<endl;
		}
		cout<<endl;
		
		cout<<endl<<endl;
	}
	cout<<"*********Resultados generales*********"<<endl<<endl;
	cout<<"1- Cuanto dinero debe pagar la empresa por concepto de estimulacion: "<<cont2<<endl;
	float prev=0;
	prev=cont3/2;
	cout<<"2- Porcentaje de trabajadores evaluados en Idoneidad B: "<<prev*100<<"%"<<endl;
	
	
	
	return 0;
}