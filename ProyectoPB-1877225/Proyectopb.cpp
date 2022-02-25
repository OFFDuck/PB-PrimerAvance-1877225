/*
* Datos del alumno: 
* Rodriguez Rodriguez Adrian Patricio
* 1877225
* GPO:006
* 
* Primer Avance Programacion Basica
* 
* Agendar citas en C++
* 
*/


#include <iostream>
using namespace std;

int main() {
    int CostoTratamiento, Cantidad, CostoUnitario, hora, opc, num, desi, salir;

    int total = 0;

    char Descripcion[3], Nombre[3];

    do {

        cout << "1.- //Agendar una cita//" << endl;

        cout << "2.- //Modificar una cita//" << endl;

        cout << "3.- //Eliminar una cita//" << endl;

        cout << "4.- //Lista de citas vigentes//" << endl;

        cout << "5.- //Limpiar pantalla//" << endl;

        cout << "6.- //Salir//" << endl;

        cout << "--Seleccione una Opcion en pantalla--: "; cin >> opc;

        switch (opc) {

        case 1:

            do {

                cout << "--Porfavor ingrese el numero de la cita--: " << endl;
                cin >> num;

                cout << "--A continuacion ingrese su nombre completo--: " << endl;
                cin >> Nombre;

                cout << "--Ingrese la hora del tratamiento, porfavor--: " << endl;
                cin >> hora;

                cout << "--A continuacion menciona una breve descripcion del tratamiento--: " << endl;
                cin >> Descripcion;

                cout << "Tratamiento costo?" << endl;
                cin >> CostoTratamiento;

                cout << "--Escriba a continuacion la cantidad del tratamiento--" << endl;
                cin >> Cantidad;

                cout << "--Digite el precio unitario--" << endl;
                cin >> CostoUnitario;

                total = (CostoTratamiento * Cantidad) + CostoUnitario;

                cout << "$$Total a pagar es$$: " << total << endl;

                cout << "//Quisiera agendar otra cita? Digite 1 si desea continuar o 2 si quisiera cancelar//" << endl;
                cin >> desi;

            } while (desi == 1);

            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            break;

        case 5:
            break;

        case 6:
            exit(1);
            break;

        default:
            cout << "Opcion Erronea, Digite cualquier opcion en pantalla" << endl;
        }

        cout << "Para regresar al menu anterior digite 1 o si quiere salir, digite 2" << endl;
        cin >> salir;
    } while (salir == 1);
    return 0;
}