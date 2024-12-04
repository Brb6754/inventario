//Bruno Rueda Betancourt
//Santiago Punyed Gonzalez
#include <iostream>
using namespace std;

// Creamos el tipo de dato enum
enum TipoProducto {
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

// Creamos la estructura
struct Articulo {
    string nombre;
    int cantidad;
    double precio;
    bool disponibilidad;
    TipoProducto tipo;
    double total;
};

// Función registrar producto
void registrarProducto(Articulo Almacen[], const int size) {
    for (int i = 0; i < size; i++) {
        if (Almacen[i].nombre == "") {
            cout << "Ingresa el nombre del producto: ";
            string n;
            cin >> n;
            Almacen[i].nombre = n;

            cout << "Ingresa la cantidad del producto: ";
            int c;
            cin >> c;
            Almacen[i].cantidad = c;

            cout << "Ingresa el precio del producto: ";
            double p;
            cin >> p;
            Almacen[i].precio = p;

            cout << "Ingresa el tipo del producto\n"
                 << "Proteína = P\n"
                 << "Carbohidrato = C\n"
                 << "Verdura = V\n"
                 << "Fruta = F\n"
                 << "Desechables = D\n"
                 << "Limpieza = L\n"
                 << "Bebidas = B\n"
                 << "Otros = O\n";
            char t;
            cin >> t;
            switch (t) {
                case 'P': Almacen[i].tipo = Proteina; break;
                case 'C': Almacen[i].tipo = Carbohidrato; break;
                case 'V': Almacen[i].tipo = Verdura; break;
                case 'F': Almacen[i].tipo = Fruta; break;
                case 'D': Almacen[i].tipo = Desechables; break;
                case 'L': Almacen[i].tipo = Limpieza; break;
                case 'B': Almacen[i].tipo = Bebidas; break;
                case 'O': Almacen[i].tipo = Otros; break;
            }

            Almacen[i].total = Almacen[i].cantidad * Almacen[i].precio;

            cout << "Registraste el artículo: " << Almacen[i].nombre << "\n"
                 << "Cantidad: " << Almacen[i].cantidad << "\n"
                 << "Precio: " << Almacen[i].precio << "\n";

            if (Almacen[i].disponibilidad == 0) {
                cout << "Disponibilidad: X\n";
            } else {
                cout << "Disponibilidad: ✓\n";
            }

            cout << "Tipo de producto: " << Almacen[i].tipo << "\n"
                 << "Costo Total: " << Almacen[i].total << "\n"
                 << "Posición: " << i << "\n";
            break;
        }
    }
}

// Función eliminar producto
void eliminarProducto(Articulo Almacen[], const int size) {
    cout << "Ingresa el nombre del producto que quieres eliminar:\n";
    string nombre;
    cin >> nombre;

    for (int i = 0; i < size; i++) {
        if (Almacen[i].nombre == nombre) {
            cout << "Eliminaremos el elemento: " << nombre << "\n"
                 << "Que está en la posición: " << i << "\n"
                 << "Para confirmar la operación ingresa 1\n"
                 << "Para rechazar la operación y regresar al menú ingresa 2\n";
            int opcion;
            cin >> opcion;
            if (opcion == 1) {
                Almacen[i].nombre = "";
                Almacen[i].cantidad = 0;
                Almacen[i].precio = 0.00;
                Almacen[i].tipo = Vacio;
                cout << "Registro eliminado exitosamente.\n";
            } else if (opcion == 2) {
                break;
            } 
            }else {
                if(i==6){
                    cout << "El nombre no es válido, regresarás al menú para que vuelvas a intentarlo.\n";
                }
        }
    }
}

// Función imprimir específico
void imprimirRegistro(Articulo Almacen[], const int size) {
    cout << "Ingresa el nombre del artículo que deseas imprimir:\n";
    string x;
    cin >> x;

    for (int i = 0; i < size; i++) {
        if (Almacen[i].nombre == x) {
            cout << "Nombre: " << Almacen[i].nombre << "\n"
                 << "Cantidad: " << Almacen[i].cantidad << "\n"
                 << "Precio: " << Almacen[i].precio << "\n";
            if (Almacen[i].disponibilidad == 0) {
                cout << "Disponibilidad: X\n";
            } else {
                cout << "Disponibilidad: ✓\n";
            }
            cout << "Tipo de Producto: " << Almacen[i].tipo << "\n"
                 << "Gasto Total: " << Almacen[i].total << "\n";
                 break;
        } else {
            if (i == size - 1) {
                cout << "El artículo no existe, regresarás al menú.\n";
            }
        }
    }
}

// Función imprimir toda la lista
void imprimirCompleta(Articulo Almacen[], const int size) {
    for (int i = 0; i < size; i++) {
        if (Almacen[i].nombre != "") {
            cout << "Nombre: " << Almacen[i].nombre << "\n"
                 << "Cantidad: " << Almacen[i].cantidad << "\n"
                 << "Precio: " << Almacen[i].precio << "\n";
            if (Almacen[i].disponibilidad == 0) {
                cout << "Disponibilidad: X\n";
            } else {
                cout << "Disponibilidad: ✓\n";
            }
            cout << "Tipo de Producto: " << Almacen[i].tipo << "\n"
                 << "Gasto Total: " << Almacen[i].total << "\n\n";
        }
    }
}

// Función revisar disponibilidad
void imprimirDisponibilidad(Articulo Almacen[], const int size) {
    int x;
    cout << "Ingresa 1 para imprimir disponibles y 2 para imprimir los no disponibles:\n";
    cin >> x;
    if (x == 1) {
        for (int i = 0; i < size; i++) {
            if (Almacen[i].disponibilidad == true) {
                cout << "Nombre: " << Almacen[i].nombre << "\n"
                     << "Cantidad: " << Almacen[i].cantidad << "\n"
                     << "Precio: " << Almacen[i].precio << "\n";
                cout << "Disponibilidad: ✓\n";
                cout << "Tipo de Producto: " << Almacen[i].tipo << "\n"
                     << "Gasto Total: " << Almacen[i].total << "\n\n";
            }
        }
    } else if (x == 2) {
        for (int i = 0; i < size; i++) {
            if (Almacen[i].disponibilidad == false) {
                cout << "Nombre: " << Almacen[i].nombre << "\n"
                     << "Cantidad: " << Almacen[i].cantidad << "\n"
                     << "Precio: " << Almacen[i].precio << "\n";
                cout << "Disponibilidad: X\n";
                cout << "Tipo de Producto: " << Almacen[i].tipo << "\n"
                     << "Gasto Total: " << Almacen[i].total << "\n\n";
            }
        }
    }
}

// Función calcular promedio
void CalcularPromedio(Articulo Almacen[], const int size) {
    double suma = 0.0;
    int x = 0;
    for (int i = 0; i < size; i++) {
        if(Almacen[i].nombre != ""){
            suma += Almacen[i].total;
            x++;
        }
    }
    cout << "Promedio de gasto total: " << suma / x << endl;
}

// Función ordenar lista
void OrdenarLista(Articulo Almacen[], const int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (Almacen[j].total > Almacen[j + 1].total) {
                Articulo aux = Almacen[j];
                Almacen[j] = Almacen[j + 1];
                Almacen[j + 1] = aux;
            }
        }
    }
    imprimirCompleta(Almacen, size);
}

int main() {
    // Declaramos el arreglo de estructuras
    Articulo Almacen[7];

    // Rellenamos los primeros 5 espacios
    Almacen[0].nombre = "Pan para Hamburguesa";
    Almacen[0].cantidad = 20;
    Almacen[0].precio = 12.99;
    Almacen[0].disponibilidad = (Almacen[0].cantidad > 0);
    Almacen[0].tipo = Carbohidrato;
    Almacen[0].total = Almacen[0].cantidad * Almacen[0].precio;

    // Repetimos para otros productos
    Almacen[1].nombre = "Lechuga";
    Almacen[1].cantidad = 5;
    Almacen[1].precio = 10.00;
    Almacen[1].disponibilidad = (Almacen[1].cantidad > 0);
    Almacen[1].tipo = Verdura;
    Almacen[1].total = Almacen[1].cantidad * Almacen[1].precio;

    Almacen[2].nombre = "Tomate";
    Almacen[2].cantidad = 5;
    Almacen[2].precio = 7.50;
    Almacen[2].disponibilidad = (Almacen[2].cantidad > 0);
    Almacen[2].tipo = Verdura;
    Almacen[2].total = Almacen[2].cantidad * Almacen[2].precio;

    Almacen[3].nombre = "Queso";
    Almacen[3].cantidad = 2;
    Almacen[3].precio = 40.00;
    Almacen[3].disponibilidad = (Almacen[3].cantidad > 0);
    Almacen[3].tipo = Proteina;
    Almacen[3].total = Almacen[3].cantidad * Almacen[3].precio;

    Almacen[4].nombre = "Hamburguesa";
    Almacen[4].cantidad = 10;
    Almacen[4].precio = 15.99;
    Almacen[4].disponibilidad = (Almacen[4].cantidad > 0);
    Almacen[4].tipo = Proteina;
    Almacen[4].total = Almacen[4].cantidad * Almacen[4].precio;

    // Menú
    int opcion;
    do {
        cout << "\nMenú de opciones:\n"
             << "1. Registrar producto\n"
             << "2. Eliminar producto\n"
             << "3. Imprimir un registro específico\n"
             << "4. Imprimir todos los registros\n"
             << "5. Imprimir disponibilidad\n"
             << "6. Calcular promedio de gasto\n"
             << "7. Ordenar lista por gasto total\n"
             << "0. Salir\n";
        cin >> opcion;

        switch (opcion) {
            case 1: registrarProducto(Almacen, 7); break;
            case 2: eliminarProducto(Almacen, 7); break;
            case 3: imprimirRegistro(Almacen, 7); break;
            case 4: imprimirCompleta(Almacen, 7); break;
            case 5: imprimirDisponibilidad(Almacen, 7); break;
            case 6: CalcularPromedio(Almacen, 7); break;
            case 7: OrdenarLista(Almacen, 7); break;
            case 0: cout << "Gracias por usar el programa.\n"; break;
            default: cout << "Opción no válida, intenta de nuevo.\n";
        }
    } while (opcion != 0);

    return 0;
}
