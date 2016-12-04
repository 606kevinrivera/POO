#include <iostream>
#include "clase.h"
using namespace std;

void pelicula::cambiar_estado_estreno(){
}
void pelicula::disponibilidad(){	
}
void pelicula::pedir_datos(){
	cout<<"Ingrese el nombre: ">>nombre_usuario[]<<endl;
	cout<<"Ingrese la identificacion: ">>identificacion<<endl;
	cout<<"Ingrese el numero de celular: ">>celular<<endl;
	cout<<"Ingrese la direccion: ">>direccion[]<<endl;
}
void pelicula::escoger_pelicula(){
	cout<<" Por favor escoja la pelicula que desea llevar"<<endl;
	cout<<"Como desea escojer la pelicula: "<<endl;
	cout<<"1. Por nombre.\n2. Por genero.\n3. Por fecha de estreno.\n4. bla bla bla. "
	cin>>a;
	switch(a){
		case 1:
		    cout<<"Las peliculas son: ";
			//seria crear algo parra que llame todas las peliculas disponubles
		break;
		case 2:
			cout<<"Los generos son: ";
		    //lo mismo que las peliculas jajajajajaja
		break;
		case 3:
			
			cout<<"Las ultimas peliculas publicadas son: ";
			//lo mismo que las peliculas jajajajajaja
			
		break;
		case 4:
			//bla bla bla
		break;
	}
	
}
void pelicula::comprar_pelicula(){
	
}


