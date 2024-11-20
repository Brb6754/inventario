#include <iostream>
using namespace std;

//Creamos el tipo de dato enum
enum TipoProducto{
    Proteina = 1,
    Carbohidrato = 2,
    Verdura = 3,
    Fruta = 4,
    Desechables = 5,
    Limpieza = 6,
    Bebidas = 7,
    Otros = 8,
    Vacio = 0
};
//Creamos la estructura 
struct Articulo {
    string nombre;
    int cantidad;
    double precio;
    bool disponibilidad;
    TipoProducto tipo;
    double total;
};
//Funcion registrar producto
void registrarProducto(  Articulo Almacen[], const int size){
    for(int i=0; i<7; i++){
        if( Almacen[i].nombre==""){
            cout<<"Ingresa el nombre del producto ";
            string n;
            cin>>n;
            Almacen[i].nombre=n;
            
            cout<<"Ingresa la cantidad del producto ";
            int c;
            cin>>c;
            Almacen[i].cantidad=c;
            
            cout<<"Ingresa el precio del producto ";
            double p;
            cin>>p;
            Almacen[i].precio=p;
            
            cout<<"Ingresa el tipo del producto\n"
                <<"Proteina = P\n"
                <<"Carbohidrato = C\n"
                <<"Verdura = V\n"
                <<"Fruta = F\n"
                <<"Desechables = D\n"
                <<"Limpieza = L\n"
                <<"Bebidas = B\n"
                <<"Otros = O\n";
            char t;
            cin>>t;
            switch(t){
                case 'P': Almacen[i].tipo= Proteina;
                break;
                case 'C': Almacen[i].tipo = Carbohidrato;
                break;
                case 'V': Almacen[i].tipo = Verdura;
                break;
                case 'F': Almacen[i].tipo = Fruta;
                break;
                case 'D': Almacen[i].tipo = Desechables;
                break;
                case 'L': Almacen[i].tipo= Limpieza;
                break;
                case 'B': Almacen[i].tipo= Bebidas;
                break;
                case 'O': Almacen[i].tipo= Otros;
                break;
                }
        
        Almacen[i].total=Almacen[i].cantidad*Almacen[i].precio;
                
        cout<<"Registraste el articulo "
            << Almacen[i].nombre
            <<"\n"
            <<"Cantidad: "
            << Almacen[i].cantidad
            <<"\n"
            <<"Precio: "
            << Almacen[i].precio
            <<"\n";
            
        if(Almacen[i].disponibilidad == 0){
                cout<<"Disponibilidad: "
                    <<"X"
                    <<"\n";
            
        }
        else{
            cout<<"Disponibilidad: "
                <<"✓"
                <<"\n";
            }
        cout<<"Tipo de producto:"
            <<Almacen[i].tipo
            <<"\n"
            <<"Costo Total: "
            <<Almacen[i].total
            <<"\n"
            <<"Poscision: "
            <<i
            <<"\n";
            break;
            
        }
   
}
}

void eliminarProducto( Articulo Almacen[], const int size){
    cout<<"Ingresa el nombre del producto que quieres eliminar\n";
    string nombre;
    cin>>nombre;
    
    for(int i=0; i<7; i++){
        if(Almacen[i].nombre==nombre){
            cout<<"Eliminaremos el elemento: "
                <<nombre
                <<"\nQue esta en la posicion: "
                << i
                <<"\nPara confirmar la operacion ingresa 1\n"
                <<"Para rechazar la operacion y regresar al menu ingresa 2\n";
            int opcion;
            cin>>opcion;
            if(opcion == 1){
                Almacen[i].nombre="";
                Almacen[i].cantidad=0;
                Almacen[i].precio=0.00;
                Almacen[i].tipo=Vacio;
                cout<<"Registro Eliminado exitosamente";
            }
            else if(opcion == 2){
                break;
                }
            else{
                cout<<"El numero no es valido regresaras al menu\n para que vuelvas a intentarlo\n";
            }
        }
    }
}

void imprimirRegistro(Articulo Almacen[], const int size){
    cout<<"Ingresa el numero de articulo que deseas imprimir\n"
        <<"Del 1 al 7\n";
    int x;
    cin>> x;
    x=x-1;
    cout<<"Nombre:"
        <<Almacen[x].nombre
        <<"\n"
        <<"Cantidad:"
        <<Almacen[x].cantidad
        <<"\n"
        <<"Precio:"
        <<Almacen[x].precio
        <<"\n"
        <<"Disponibilidad:"
        <<Almacen[x].disponibilidad
        <<"\n"
        <<"Tipo de Producto:"
        <<Almacen[x].tipo
        <<"\n"
        <<"Gasto total:"
        <<Almacen[x].total
        <<"\n";
}

void imprimirCompleta(Articulo Almacen[], const int size){
    for(int i=0; i<7; i++){
        if(Almacen[i].nombre != ""){
        cout<<"Nombre:"
        <<Almacen[i].nombre
        <<"\n"
        <<"Cantidad:"
        <<Almacen[i].cantidad
        <<"\n"
        <<"Precio:"
        <<Almacen[i].precio
        <<"\n"
        <<"Disponibilidad:"
        <<Almacen[i].disponibilidad
        <<"\n"
        <<"Tipo de Producto:"
        <<Almacen[i].tipo
        <<"\n"
        <<"Gasto total:"
        <<Almacen[i].total
        <<"\n"
        <<"\n";
            
        }
    }
    
}
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
Almacen[0].tipo = Carbohidrato;
//Calculamos el Dinero total invertido en el producto
Almacen[0].total= Almacen[0].cantidad * Almacen[0].precio;

//Repetimos
Almacen[1].nombre ="Refrescos";
Almacen[1].cantidad = 50;
Almacen[1].precio = 17.50;
if(Almacen[1].cantidad>0){
    Almacen[1].disponibilidad = true;}
else{Almacen[1].disponibilidad = false;}
Almacen[1].tipo= Bebidas;
Almacen[1].total= Almacen[1].cantidad * Almacen[1].precio;

Almacen[2].nombre ="Tomates";
Almacen[2].cantidad = 40;
Almacen[2].precio = 2.33;
if(Almacen[2].cantidad>0){
    Almacen[2].disponibilidad = true;}
else{Almacen[2].disponibilidad = false;}
Almacen[2].tipo = Verdura;
Almacen[2].total= Almacen[2].cantidad * Almacen[2].precio;

Almacen[3].nombre ="Platos";
Almacen[3].cantidad = 150;
Almacen[3].precio = 10.50;
if(Almacen[3].cantidad>0){
    Almacen[3].disponibilidad = true;}
else{Almacen[3].disponibilidad = false;}
Almacen[3].tipo = Desechables;
Almacen[3].total = Almacen[3].cantidad * Almacen[3].precio;

Almacen[4].nombre ="Sirlon 250g";
Almacen[4].cantidad = 0;
Almacen[4].precio = 45.33;
if(Almacen[4].cantidad>0){
    Almacen[4].disponibilidad = true;}
else{Almacen[4].disponibilidad = false;}
Almacen[4].tipo = Proteina;
Almacen[4].total = Almacen[3].cantidad * Almacen[3].precio;

//registrarProducto(Almacen , 7);
int x =0;
do{
cout<< "Bienvenido al control de inventario \n"
    << "Menu:\n"
    << "1 Registrar Producto\n"
    << "2 Eliminar un articulo especifico\n"
    << "3 Imprimir un articulo especifico\n"
    << "4 Imprimir la lista completa\n";
    cin>>x;
    
    switch(x){
        case 1: registrarProducto(Almacen , 7);
        break;
        case 2: eliminarProducto(Almacen, 7);
        break;
        case 3: imprimirRegistro(Almacen, 7);
        break;
        case 4: imprimirCompleta(Almacen, 7);
        break;
    }
}while(x!=0 && x<7 && x>0);
    return 0;
}


