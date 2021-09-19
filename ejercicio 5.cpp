#include <iostream>

using namespace std;

int main() {
	string codigo_productos[] = {"carame-choc-02", "carame-choc-02", "carame-fre-01", "carame-pin-01", "carame-pin-02", "carame-cere", "galle-choc-01", "galle-choc-02", "galle-vaini-03", "galle-sod-01", "galle-sod-02", "galle-sod-03", "galle-crem-01", "chupe-fre", "chupe-cere", "chupe-pin", "dul-lech-01", "dul-lech-02", "yog-fres-01", "yog-pin-01"};
	int cantidad_productos[] = {20,14,27,12,0,12,10,17,12,13,14,23,47,12,07,25,6,02,01,22};
	int opciones =0;
	int mayor = 0;
	int mayor_index = 0;
	
	int extencion_codigo = sizeof codigo_productos/sizeof codigo_productos[0];
	int extencion_cantidad = sizeof cantidad_productos/sizeof cantidad_productos[0];
	
	cout<<"*****Listado de Productos*****"<<endl;
	cout<<"Cantidad de Cajas     Codigo de producto"<<endl<<endl;
	for (int i=0; i<extencion_codigo; i++){
		cout<<cantidad_productos[i]<<" -----------> "<<codigo_productos[i]<<endl;
	}
	
	for(int i=0; i<3; i++){
		if(i=1){
			cout<<endl<<endl<<"---QUE OPERACION DESEAS REALIZAR?---"<<endl;
			cout<<" 1- Producto que tiene la mayor cantidad de cajas"<<endl;
			cout<<" 2- Que tiene mas de una caja y menos de 50"<<endl;
			cout<<" 3- Que tienen cero cajas en existencia: ";
			cin >> opciones;
			
			if(opciones == 1){
				mayor=cantidad_productos[0];
				for(int i=0; i<20; i++){
					if(cantidad_productos[i]>mayor){
						mayor=cantidad_productos[i];
						mayor_index=i;
					}	
				}
				cout<<endl<<endl<<"RESPUESTA: El codigo de producto que tiene mas cajas es: "<<codigo_productos[mayor_index]<<"  ("<<mayor<<" cajas)"<<endl;
			}
			if(opciones == 2){
				cout<<endl<<endl<<"RESPUESTA: tiene mas de una caja y menos de 50:"<<endl;
				for(int i=0; i<20; i++){
				if(cantidad_productos[i]>1 & cantidad_productos[i]<50){
					cout<<endl<<codigo_productos[i]<<endl;
					}
				}
			}
			if(opciones == 3){
				for(int i=0; i<20; i++){
				if(cantidad_productos[i] == 0){
					cout<<endl<<endl<<"RESPUESTA: stok en 0  "<<codigo_productos[i]<<"  Hacer Pedido!!"<<endl;
					}
				}	
			}
		}else{
			cout<<endl<<endl<<"---DESEAS REALIZAR OTRA OPERACION?---"<<endl;
			cout<<" 1- Producto que tiene la mayor cantidad de cajas"<<endl;
			cout<<" 2- Que tiene mas de una caja y menos de 50"<<endl;
			cout<<" 3- Que tienen cero cajas en existencia: ";
			cin >> opciones;
			
			if(opciones == 1){
				mayor=cantidad_productos[0];
				for(int i=0; i<20; i++){
					if(cantidad_productos[i]>mayor){
						mayor=cantidad_productos[i];
						mayor_index=i;
					}	
				}
				cout<<endl<<endl<<"RESPUESTA: El codigo de producto que tiene mas cajas es: "<<codigo_productos[mayor_index]<<"  ("<<mayor<<" cajas)"<<endl;
			}
			if(opciones == 2){
				cout<<endl<<endl<<"RESPUESTA: tiene mas de una caja y menos de 50:"<<endl;
				for(int i=0; i<20; i++){
				if(cantidad_productos[i]>1 & cantidad_productos[i]<50){
					cout<<endl<<codigo_productos[i]<<endl;
					}
				}
			}
			if(opciones == 3){
				for(int i=0; i<20; i++){
				if(cantidad_productos[i] == 0){
					cout<<endl<<endl<<"RESPUESTA: stok en 0  "<<codigo_productos[i]<<"  Hacer Pedido!!"<<endl;
					}
				}	
			}
		}
		
	}
	
		
		
		

return 0;
}