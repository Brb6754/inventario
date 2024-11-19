#include <iostream>
using namespace std;

//Creamos el tipo de dato enum
enum TipoProducto{
    Proteina,
    Carbohidrato,
    Verdura,
    Fruta,
    Desechables,
    Limpieza,
    Bebidas,
    Otros
};

//Creamos la estructura 
struct Articulo {
    string nombre;
    int cantidad;
    double precio;
    bool disponibilidad;
    TipoProducto tipo;
    double total
};


int main() {
//Declaramos el arreglo de estructuras
Articulo Almacen[7];

//Rellenamos los primero 5 espacios

Almacen[0].nombre ="Pan para Hamburguesa";
Almacen[0].cantidad = 20;
Almacen[0].precio = 12.99;
//Comprobamos la disponibilidad con una condicional

if(Almacen[0].cantidad>0){
    Almacen[0].disponibilidad = true;}
else{Almacen[0].disponibilidad = false;}

Almacen.TipoProducto[0] = Carbohidratos

//Calculamos el Dinero total invertido en el producto
Almacen[0].total= Almacen[0].cantidad * Almacen[0].precio

//Repetimos
Almacen[1].nombre ="Refrescos";
Almacen[1].cantidad = 50;
Almacen[1].precio = 17.50;
if(Almacen[1].cantidad>0){
    Almacen[1].disponibilidad = true;}
else{Almacen[1].disponibilidad = false;}
Almacen.TipoProducto[1] = Bebidas
Almacen[1].total= Almacen[1].cantidad * Almacen[1].precio

Almacen[2].nombre ="Tomates";
Almacen[2].cantidad = 40;
Almacen[2].precio = 2.33;
if(Almacen[2].cantidad>0){
    Almacen[2].disponibilidad = true;}
else{Almacen[2].disponibilidad = false;}
Almacen.TipoProducto[2] = Verdura
Almacen[2].total= Almacen[2].cantidad * Almacen[2].precio

Almacen[3].nombre ="Platos";
Almacen[3].cantidad = 150;
Almacen[3].precio = 10.50;
if(Almacen[3].cantidad>0){
    Almacen[3].disponibilidad = true;}
else{Almacen[3].disponibilidad = false;}
Almacen.TipoProducto[3] = Desechables
Almacen[3].total = Almacen[3].cantidad * Almacen[3].precio

Almacen[3].nombre ="Sirlon 250g";
Almacen[3].cantidad = 0;
Almacen[3].precio = 45.33;
if(Almacen[3].cantidad>0){
    Almacen[3].disponibilidad = true;}
else{Almacen[3].disponibilidad = false;}
Almacen.TipoProducto[3] = Proteina
Almacen[3].total = Almacen[3].cantidad * Almacen[3].precio

cout<< "Bienvenido a el software de control de inventario \n"
    << "Menu:"
    << "FUNCION 1";
    
    return 0;
}
