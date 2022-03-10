#include <iostream>
#include <string>
#include<math.h>
using namespace std;

int main(){
	int opc;
	system("color 3F");
	do{
		system("cls");
		cout<<"VANESSA SANCHEZ GIRALDO."<<endl<<endl;
        cout<<"INGENIERIA INDUSTRIAL."<<endl<<endl;
        cout<<"UNIVERSIDAD CATOLICA DE PEREIRA 2020."<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		cout<<"                                   ********************************************************"<<endl;
		cout<<"                                   *                                                      *"<<endl;
		cout<<"                                   *                     BIENVENIDOS                      *"<<endl;
		cout<<"                                   *                                                      *"<<endl;
		cout<<"                                   ********************************************************"<<endl;
		cout<<"                                   *                                                      *"<<endl;
		cout<<"                                   *      1. SOLUCIONAR PROBLEMA DE PLANO INCLINADO.      *"<<endl;
		cout<<"                                   *      2. SALIR.                                       *"<<endl;
		cout<<"                                   *                                                      *"<<endl;	
     	cout<<"                                   ********************************************************"<<endl<<endl;
		cout<<"                                          INGRESE QUE OPCION DESEA: ";
		cin>>opc;
		switch(opc){
			case 1:{
				system("cls");
				float m1, m2, cf, angulo, aceleracion, tension, seno, coseno, g = 9.81;
				double pi=3.14159265358979323846;
				cout<<endl<<"NOTA----> EL ANGULO SE MIDE CON RESPECTO A LA HORIZONTAL."<<endl<<endl;
				cout<<"INGRESE EL ANGULO EN GRADOS----> ";
				cin>>angulo;
				system("cls");
				cout<<endl<<"NOTA----> LA MASA UNO ES LA QUE SE ENCUENTRA SOBRE EL PLANO INCLINADO."<<endl<<endl;
				cout<<"INGRESE LA MASA UNO EN kg----> ";
				cin>>m1;
				system("cls");
				cout<<endl<<"NOTA----> LA MASA DOS ES LA QUE SE ENCUENTRA COLGANDO."<<endl<<endl;
				cout<<"INGRESE LA MASA DOS EN kg----> ";
				cin>>m2;
				system("cls");
				cout<<endl<<"INGRESE EL COEFICIENTE DE FRICCION----> ";							
				cin>>cf;
				angulo = 270 - angulo;
				angulo = (angulo*pi)/180;
				seno=sin(angulo);
				coseno=cos(angulo);
				aceleracion = (g*(m2 + cf * m1 * seno+m1*coseno))/(m1+m2);
				tension = -(m2 * aceleracion) + (m2 * g);
				system("cls");
				cout<<"VANESSA SANCHEZ GIRALDO."<<endl<<endl;
        		cout<<"INGENIERIA INDUSTRIAL."<<endl<<endl;
        		cout<<"UNIVERSIDAD CATOLICA DE PEREIRA 2020."<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
				cout<<endl<<"\a"<<"LA ACELERACION ES ----> "<<aceleracion<<" m/s^2"<<endl<<endl;
				cout<<"\a"<<"LA TENSION ES ----> "<<tension<<" N"<<endl<<endl;
				system("PAUSE");
				break;
			}
			case 2:{
				system("cls");
				cout<<"VANESSA SANCHEZ GIRALDO."<<endl<<endl;
        		cout<<"INGENIERIA INDUSTRIAL."<<endl<<endl;
        		cout<<"UNIVERSIDAD CATOLICA DE PEREIRA 2020."<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
				cout<<"\a"<<"FUE UN GUSTO ATENDERLO, HASTA LUEGO."<<endl<<endl;
				exit(0);					
				break;
			}
			default:{
				system("cls");cout<<"VANESSA SANCHEZ GIRALDO."<<endl<<endl;
    		    cout<<"INGENIERIA INDUSTRIAL."<<endl<<endl;
        		cout<<"UNIVERSIDAD CATOLICA DE PEREIRA 2020."<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
				cout<<endl<<"\a"<<"ESA OPCION NO ESTA EN NUESTRO MENU, INTENTE NUEVAMENTE."<<endl<<endl;
				system("PAUSE");
				system("cls");
				break;
			}
		}
	}while(opc<0 || opc>0);
system("PAUSE");
exit(0);
}
