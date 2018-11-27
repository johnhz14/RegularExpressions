#include <iostream>
#include <string>
#include <regex>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string menu="----Bienvenido----\n Por favor seleccione la opcion deseada: \n 1. Integrantes \n 2. Corrector Gramatical (fase inicial) \n 3. Detector de telefonos validos \n 4. SALIR \n Opcion Seleccionada --->";
	int opcion=3;
do{
	cout<<menu;
	cin>>opcion;

	if(opcion ==1){
		cout<<"\n INTEGRANTES \n 1. Jaime Zuluaga \n 2.John Hernandez";
	}
	else if(opcion==2){
		cout<<"Opcion 2 seleccionada:CORRECTOR GRAMATICAL \n";
		string s;
		regex a("([a-z]|[A-Z])*np([a-z]|[A-Z])*");
		regex b("([a-z]|[A-Z])*nb([a-z]|[A-Z])*");
		
		cout<<"Digita la palabra a corregir:";
		cin>>s;
		if(regex_match(s,a)) {
			regex c("np");
			cout<<"La palabra esta mal escrita, recuerda que antes de la -p- no va -n-, sino m \n";
			cout<<endl<<"CORRECION: "<<s<<" --->   "<<regex_replace(s,c,"mp")<<endl;

		}
		if(regex_match(s,b)) {
			regex c("nb");
			cout<<"La palabra esta mal escrita, recuerda que antes de la -b- no va -n-, sino m \n";
			cout<<endl<<"CORRECION: "<<s<<" --->   "<<regex_replace(s,c,"mb");
		}
		

	}else if(opcion==3){
		cout<<"OPCION 3 SELECCIONADO VERIFICACION DE NUMEROS CELULARES"<<endl;
		string s;
		regex rgx("3[0-9]{9}");
		cout<<"Digita su numero de celular: ";
		cin>>s;
		if(!regex_match(s,rgx)) {
			cout<<"El numero celular no cumple con las especificaciones, recuerda que debe empezar por 3 y tener una longitud de 10 digitos";
		}else{
			cout<<"Numero Valido";
		}
		
	}
	cout<<endl;
	system("pause");
	cout<<endl;
}while(opcion!=4);
	return 0;
}

