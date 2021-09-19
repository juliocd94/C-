 #include <iostream>

using namespace std;



int main() {
	
 float ventas_diarias[9];
 
 float numero_de_ventas_lunes;
 int monto_ventas_lunes;
 int suma_lunes = 0;
 
 float numero_de_ventas_martes;
 int monto_ventas_martes;
 int suma_martes = 0;
 
 float numero_de_ventas_miercoles;
 int monto_ventas_miercoles;
 int suma_miercoles = 0;
 
 float numero_de_ventas_jueves;
 int monto_ventas_jueves;
 int suma_jueves = 0;
 
 float numero_de_ventas_viernes;
 int monto_ventas_viernes;
 int suma_viernes = 0;
 
 float numero_de_ventas_sabado;
 int monto_ventas_sabado;
 int suma_sabado = 0;
 
cout << "*****REGISTRO DIARIO DE VENTAS*****"<<endl<<endl;
for(int i=0; i<6; i++){
	if(i == 0 ){
		cout << "Registro de ventas del dia lunes, CUANTAS VENTAS va a registrar?: "<<endl;
		cin >> numero_de_ventas_lunes;
		for(int i=0; i<numero_de_ventas_lunes; i++){
			cout << "Introdusca el MONTO de la venta numero ("<<i+1<<") del Lunes: "<<endl;
			cin >> monto_ventas_lunes;
			suma_lunes=suma_lunes+monto_ventas_lunes;
		}
		cout<<"__________________________________________________________________"<<endl;
	}if(i == 0 ){
		cout<<endl<< "Registro de ventas del dia Martes, CUANTAS VENTAS va a registrar?: "<<endl;
		cin >> numero_de_ventas_martes;
		for(int i=0; i<numero_de_ventas_martes; i++){
			cout << "Introdusca el MONTO de la venta numero ("<<i+1<<") del Martes: "<<endl;
			cin >> monto_ventas_martes;
			suma_martes=suma_martes+monto_ventas_martes;
		}
		cout<<"__________________________________________________________________"<<endl;
	}if(i == 0 ){
		cout<<endl<< "Registro de ventas del dia Miercoles, CUANTAS VENTAS va a registrar?: "<<endl;
		cin >> numero_de_ventas_miercoles;
		for(int i=0; i<numero_de_ventas_miercoles; i++){
			cout << "Introdusca el MONTO de la venta numero ("<<i+1<<") del Miercoles: "<<endl;
			cin >> monto_ventas_miercoles;
			suma_miercoles=suma_miercoles+monto_ventas_miercoles;
		}
		cout<<"__________________________________________________________________"<<endl;
	}if(i == 0 ){
		cout<<endl<< "Registro de ventas del dia Jueves, CUANTAS VENTAS va a registrar?: "<<endl;
		cin >> numero_de_ventas_jueves;
		for(int i=0; i<numero_de_ventas_jueves; i++){
			cout << "Introdusca el MONTO de la venta numero ("<<i+1<<") del Jueves: "<<endl;
			cin >> monto_ventas_jueves;
			suma_jueves=suma_jueves+monto_ventas_jueves;
		}
		cout<<"__________________________________________________________________"<<endl;
	}if(i == 0 ){
		cout<<endl<< "Registro de ventas del dia Viernes, CUANTAS VENTAS va a registrar?: "<<endl;
		cin >> numero_de_ventas_viernes;
		for(int i=0; i<numero_de_ventas_viernes; i++){
			cout << "Introdusca el MONTO de la venta numero ("<<i+1<<") del Viernes: "<<endl;
			cin >> monto_ventas_viernes;
			suma_viernes=suma_viernes+monto_ventas_viernes;
		}
		cout<<"__________________________________________________________________"<<endl;
	}if(i == 0 ){
		cout<<endl<< "Registro de ventas del dia Sabado, CUANTAS VENTAS va a registrar?: "<<endl;
		cin >> numero_de_ventas_sabado;
		for(int i=0; i<numero_de_ventas_sabado; i++){
			cout << "Introdusca el MONTO de la venta numero ("<<i+1<<") del Sabado: "<<endl;
			cin >> monto_ventas_sabado;
			suma_sabado=suma_sabado+monto_ventas_sabado;
		}
	}
cout << "*****REEPORTE DE LA SEMANA*****"<<endl<<endl;	
cout<<endl<<endl<<endl<<"  DIA      VENTAS      DOLARES "<<endl;
cout<<"================================="<<endl;
cout<<" Lunes      "<<numero_de_ventas_lunes<<"           $ "<<suma_lunes<<endl;
cout<<" Martes     "<<numero_de_ventas_martes<<"           $ "<<suma_martes<<endl;
cout<<" Miercoles  "<<numero_de_ventas_miercoles<<"           $ "<<suma_miercoles<<endl;
cout<<" Jueves     "<<numero_de_ventas_jueves<<"           $ "<<suma_jueves<<endl;
cout<<" Viernes    "<<numero_de_ventas_viernes<<"           $ "<<suma_viernes<<endl;
cout<<" Sabado     "<<numero_de_ventas_sabado<<"           $ "<<suma_sabado<<endl<<endl<<endl;
 return 0;
}
}