//NAMESPACES C++

//namespace: es un bloque que agrupa funciones, clases, variables, etc,
//bajo una denominación común, un mismo nombre.Esto permite a su contenido
//diferenciarse de otros con el mismo nombre.

#include <iostream>
using namespace std;

// Primer espacio de nombres
namespace primer_espacio {
    void funcion() {
        cout << "Dentro de primer_espacio" << endl;
    }
}

// Segundo espacio de nombres
namespace segundo_espacio {
    void funcion() {
        cout << "Dentro de segundo_espacio" << endl;
    }
}


int main() {
    // Llama a la función dentro del primer espacio
    primer_espacio::funcion();

    // Llama a la función dentro del segundo espacio
    segundo_espacio::funcion();

    return 0;
}


//Para comentar una selección: Ctrl+k+c y descomentar Ctrl+k+u
//using namespace primer_espacio;
//int main() {
//    // Llama a la función dentro del primer espacio
//    funcion();
//
//    return 0;
//}

///////Espacios anidados: espacios dentro de otros espacios

// Primer espacio de nombres
//namespace primer_espacio {
//    void funcion() {
//        cout << "Dentro de primer_espacio" << endl;
//    }

    // Segundo espacio de nombres(dentro del primero)
//    namespace segundo_espacio {
//        void funcion() {
//            cout << "Dentro de segundo_espacio" << endl;
//        }
//    }
//}
//
//using namespace primer_espacio::segundo_espacio;
//int main() {
//    // Llama a la función dentro del segundo espacio
//    funcion();
//
//    return 0;
//}
