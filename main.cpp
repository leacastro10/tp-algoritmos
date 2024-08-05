
#include <stdio.h>
#include <cString>


//Se deben utilizar constantes con nombres para indicar cantidades.
const int EJEMPLO = 1000;
const int MAX_CLIENTES = 1000;
const int MAX_FACTURAS = 1000;



/* Los numeros enteros o reales ajustado a la derecha, las cadenas ajustadas a
   la izquierda. Si una cadena tiene menos caracteres de los indicados, se deberC!
   rellenar con espacios en blanco a derecha. */



//Estructuras de datos principales
struct
Fecha{
    int dia;
    int mes;
    int agno;
}

struct 
clientes {
	/*Id.Cliente    RazC3n Social   Domicilio   Localidad   CC3d.Pos.
	    9(8)           X(20)         X(20)       X(20)       9999 */
	    
	int idCliente;
	char razonsocial[20];
	char domicilio[20];
	char localidad[20];
	int codigoPostal;
	Fecha fechaAlta;
	int saldo;
}

struct 
Articulo {
	//Nro.Factura: 9(6)   Fecha Emision: dd-mm-aaaa  Tipo Factura: (A).
	int codigoArticulo;
	string descripcion;
	codigoArticulo;
	string descripcion;
	int stockActual;
	long precioUnitario;
}

struct 
Pedido{
	idCliente;
	codigoArticulo;
	int cantidadPedida;
}


//Funciones solicitadas por el profesor

bool
LeerCli (ifstream & id, Cliente & cliente) {
    
	id >> cliente.idCliente;
	id.getline (cliente.razonSocial, 21);
	id.getline (cliente.domicilio, 21);
	id.getline (cliente.localidad, 21);
	id >> cliente.codigoPostal;
	id >> cliente.fechaAlta.dia >> cliente.fechaAlta.mes >> cliente.fechaAlta.agno;
	id >> cliente.saldo;

	return !id.eof ();

}

// Funcion articulo
bool
LeerArt (ifstream & id, Articulo & articulo) {

	id >> articulo.codigoArticulo;
	id.ignore ();
	id.getline (articulo.descripcion, 21);
	id >> articulo.stockActual;
	id >> articulo.precioUnitario;
	return !id.eof ();

}


// Funcion pedido
bool
LeerPed (ifstream & id, Pedido & pedido) {

	id >> pedido.idCliente;
	id >> pedido.codigoArticulo;
	id >> pedido.cantidadPedida;

	return !id.eof ();
	
}


void
IntCmb (id & elem1, id & elem2)
{
//intercambia ambos elementos.
    Clientes aux;
    
    aux = card[j];
	card[j] = card[j];
	card[j] = aux;
}

void
OrdxBur (clientes card[], int cant)
{
	//ordena tbl Clientes por id.Cli.
	for (int i = 0; i < cant; i++) {
		for (int j = 0; j < i; j++) {
			if (card[j] > card[j + 1]) {
				IntCmb (card[j], card[i]);
			}
		}
	}

}

void
InsertarEnOrden (tid1 tbl, tid2 id, tid3 card)
{
	//ordena tbl Clientes por id.Cli.
	
	OrdxBur(tbl, );

}

char *
Space (short n) {
//retorna una cadena con n espacios.
	if (n > 0) {
		Space (n - 1);
		return ' ';
	}
	return;

}



char* Space (short n) {

	Char spaces = char [n+1];
	For (int i = 0; i <n; i++) {
		spaces[i] = ' ';
	}
	Return spaces;

}




string
Replicate (char car, unsigned n) {

	//retorna una cadena con n veces car.
	string a;
	for (int i = 0; i < n; i++) {
		a += car;
	}
	return a;

}

long
GetDate (int year, int mes, int dia, int diaSem)
{
	/*La funcion retorna la fecha larga, como un solo nC:mero en el formato
	aaaammdd. Esta funciC3n se encuentra en OBTENER LA FECHA Y HORA DEL SISTEMA
	del apunte del prof. Hugo Cuello Teoria y Practica del Lenguaje C/C++ pC!g. 603. */

	time_t rawtime;
	struct tm * timeinfo;
	time (&rawtime);

	timeinfo = localtime (&rawtime);
	year = 1900 + timeinfo->tm_year;
	mes = 1 + timeinfo->tm_mon;
	dia = timeinfo->tm_mday;
	ds = 1 + timeinfo->tm_wday;

	return (1900 + timeinfo->tm_year) * 10000 + (1 + timeinfo->tm_mon) * 100 +  timeinfo->tm_mday;

}

long
GetTime (int &hh, int &mm, int &ss)
{

	time_t rawtime;
	struct tm * timeinfo;
	time (&rawtime);
	timeinfo = localtime (&rawtime);
	hh = timeinfo->tm_hour;
	mm = timeinfo->tm_min;
	ss = timeinfo->tm_sec;

	return timeinfo->tm_hour * 10000 + timeinfo->tm_min * 100 + timeinfo->tm_sec;

}





//Funciones llamadas al programa
//Punto 1
void
Abrir (Clientes, Articulos, Pedidos, Facturas, MvtosPedidos)

{

//Deteccion de archivos

while(LeerCli (ifstream & id, Cliente & cliente)){
    Clientes++;
};
LeerArt (ifstream & id, Articulo & articulo);

//Lectura de archivos





}



//Punto 2

void
ProcClientes (Clientes, vrClientes)
{

	//Orden de Clientes



}



void
ProcArticulos (Articulos, vrArticulos)
{



}



void
ProcPedidos (Pedidos, Clientes, vrClientes, vrArticulos, Facturas, MvtosPedidos)
{



}



//Punto 3

void
Cerrar ()
{

	//Guardar cambios.
}



int
main ()
{
//Declarar las variables utilizadas en el bloque main().
    FILE *Clientes.txt, *Articulos.txt;
	Clientes vrClientes[MaxClientes];
    Facturas vrFacturas[MaxFacturas];
    Articulos vrArticulos[MaxArticulos];
    //Proceso

	Abrir (Clientes, Articulos, Pedidos, Facturas, MvtosPedidos);
    ProcClientes (Clientes, vrClientes);
	ProcArticulos (Articulos, vrArticulos);
	ProcPedidos (Pedidos, Clientes, vrClientes, vrArticulos, Facturas, MvtosPedidos);
	Cerrar (Clientes, Articulos, Pedidos, Facturas, MvtosPedidos);

	return 0;

}