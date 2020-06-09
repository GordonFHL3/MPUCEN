//Link de github: https://github.com/GordonFHL3/MPUCEN

float busqueda_binaria(int dato, struct lista entrada) {

	float fin_lista = (float)fin(entrada);
	int centro_lista;
	int dato_aux;
	int centro_dato;
	int i;
	int encontrado = 0;

	if ((fin_lista / 2) == (int)fin_lista) {
		centro_lista = fin_lista / 2;
		centro_dato = recuperar(centro_lista, entrada);
		for (i = 0; i < centro_lista; i++) {
			dato_aux = recuperar(i, entrada);
			if(centro_dato)
		}
	}
}