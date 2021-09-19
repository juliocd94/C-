 #include <iostream>

using namespace std;

int main() {
	
	float toneladad_mes[12];
	float suma = 0,promedio;
	int divisor = 0;
	int cont=0;
	string nombre = "rr";
	int mayor = 0;
	int mayor_l= 0;
 
 
cout<<"*****REGISTRO ANUAL DE TONELADAS DE CEREAL*****"<<endl<<endl;
for(int i=0; i<12; i++){
	if(i==0){
		cout<<"Ingrese cantidad de toneladas producidas en el mes de Enero"<<endl;
 		cin>>toneladad_mes[1];
 		suma=suma+toneladad_mes[1];
 		divisor=divisor+1;
	}if(i==0){
		cout<<"Ingrese cantidad de toneladas producidas en el mes de Febrero"<<endl;
 		cin>>toneladad_mes[2];
 		suma=suma+toneladad_mes[2];
 		divisor=divisor+1;
	}if(i==0){
		cout<<"Ingrese cantidad de toneladas producidas en el mes de Marzo"<<endl;
 		cin>>toneladad_mes[3];
 		suma=suma+toneladad_mes[3];
 		divisor=divisor+1;
	}if(i==0){
		cout<<"Ingrese cantidad de toneladas producidas en el mes de Abril"<<endl;
 		cin>>toneladad_mes[4];
 		suma=suma+toneladad_mes[4];
 		divisor=divisor+1;
	}if(i==0){
		cout<<"Ingrese cantidad de toneladas producidas en el mes de Mayo"<<endl;
 		cin>>toneladad_mes[5];
 		suma=suma+toneladad_mes[5];
 		divisor=divisor+1;
	}if(i==0){
		cout<<"Ingrese cantidad de toneladas producidas en el mes de Junio"<<endl;
 		cin>>toneladad_mes[6];
 		suma=suma+toneladad_mes[6];
 		divisor=divisor+1;
	}if(i==0){
		cout<<"Ingrese cantidad de toneladas producidas en el mes de Julio"<<endl;
 		cin>>toneladad_mes[7];
 		suma=suma+toneladad_mes[7];
 		divisor=divisor+1;
	}if(i==0){
		cout<<"Ingrese cantidad de toneladas producidas en el mes de Agosto"<<endl;
 		cin>>toneladad_mes[8];
 		suma=suma+toneladad_mes[8];
 		divisor=divisor+1;
	}if(i==0){
		cout<<"Ingrese cantidad de toneladas producidas en el mes de Septiembre"<<endl;
 		cin>>toneladad_mes[9];
 		suma=suma+toneladad_mes[9];
 		divisor=divisor+1;
	}if(i==0){
		cout<<"Ingrese cantidad de toneladas producidas en el mes de Octubre"<<endl;
 		cin>>toneladad_mes[10];
 		suma=suma+toneladad_mes[10];
 		divisor=divisor+1;
	}if(i==0){
		cout<<"Ingrese cantidad de toneladas producidas en el mes de Noviembre"<<endl;
 		cin>>toneladad_mes[11];
 		suma=suma+toneladad_mes[11];
 		divisor=divisor+1;
	}if(i==0){
		cout<<"Ingrese cantidad de toneladas producidas en el mes de Diciembre"<<endl;
 		cin>>toneladad_mes[12];
 		suma=suma+toneladad_mes[13];
 		divisor=divisor+1;
	}
		
}
	
cout<<endl<<"*****ESTADISTICAS DE PRODUCCION ANUAL*****"<<endl<<endl;	
cout<<endl<<"  MES      PRODUCCION(TONELADAS)"<<endl;
cout<<"=========================================="<<endl;
cout<<"Enero       "<<toneladad_mes[1]<<endl;
cout<<"Febrero     "<<toneladad_mes[2]<<endl;
cout<<"Marzo       "<<toneladad_mes[3]<<endl;
cout<<"Abril       "<<toneladad_mes[4]<<endl;
cout<<"Mayo        "<<toneladad_mes[5]<<endl;
cout<<"Junio       "<<toneladad_mes[6]<<endl;
cout<<"Julio       "<<toneladad_mes[7]<<endl;
cout<<"Agosto      "<<toneladad_mes[8]<<endl;
cout<<"Septiembre  "<<toneladad_mes[9]<<endl;
cout<<"Octubre     "<<toneladad_mes[10]<<endl;
cout<<"Noviembre   "<<toneladad_mes[11]<<endl;
cout<<"Diciembre   "<<toneladad_mes[12]<<endl;
cout<<"=========================================="<<endl;
promedio=suma / divisor;
cout<<"Promedio Anual: "<<promedio<<endl;
for (int i=0;i<=divisor;i++){
    if (toneladad_mes[i]>promedio){
        cont=cont+1;
  }
    }
cout<<"Meses con produccion mayor al promedio: "<<cont<<endl;
	mayor=toneladad_mes[0];
for(int i=0; i<12; i++){
	if(toneladad_mes[i]>mayor){
		mayor=toneladad_mes[i];
		mayor_l=i;
	}
}
if(mayor_l==1){
			nombre = "Enero";
		}if(mayor_l==2){
			nombre = "Febrero";
		}if(mayor_l==3){
			nombre = "Marzo";
		}if(mayor_l==4){
			nombre = "Abril";
		}if(mayor_l==5){
			nombre = "Mayo";
		}if(mayor_l==6){
			nombre = "Junio";
		}if(mayor_l==7){
			nombre = "Julio";
		}if(mayor_l==8){
			nombre = "Agosto";
		}if(mayor_l==9){
			nombre = "Septiembre";
		}if(mayor_l==10){
			nombre = "Octubre";
		}if(mayor_l==11){
			nombre = "Noviembre";
		}if(mayor_l==12){
			nombre = "Diciembre";
		}
cout<<"El mes con mayor Produccion de cereales fue: "<<nombre<<" ("<<mayor<<" toneladas)"<<endl;
 return 0;
}