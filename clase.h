// POR FAVOR LO QUE PONGAN LO DOCUMENTAN
// NO PONGAN VARIABLES A LA DERIVA ... como a,b o si las ponen dicen para que sirven 


class pelicula{
	protected:
		char nombre_pelicula[]; 
		int año;
		int genero;
		int estreno;
		float precio;
		
	public:
		void cambiar_estado_estreno();	
		void disponibilidad();
		void clasificacion();
};

class cliente : public pelicula{
	private:
		char nombre_usuario[];
		int identificacion;
		int celular;
		char direccion[];
		
	public:
		void pedir_datos;
		void escoger_pelicula();
		void comprar_pelicula();	
};
