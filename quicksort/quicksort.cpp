//#include <iostream>
//#include <chrono>
//#include <ctime>
//#include <cstdlib>
//
//using namespace std;
//using namespace std::chrono;
//
//void fillArray(int* numeros, int tamano) {
//    srand(time(0));
//
//    for (int i = 0; i < tamano; i++) {
//        numeros[i] = i + 1;
//    }
//    for (int i = 0; i < tamano; i++) {
//        int indiceAleatorio = rand() % tamano;
//        swap(numeros[i], numeros[indiceAleatorio]);
//    }
//} 
//
//class MetodoMerge {
//public:
//    MetodoMerge(int _sice) {
//        sice = _sice;
//        numeros = new int[sice];
//        numerosAux = new int[sice];
//        fillArray(numeros, sice);
//    }
//    MetodoMerge();
//    void Merge();
//    void finalizar();
//
//private:
//    int* numeros;
//    int* numerosAux;
//
//    int numDatos = 10000000;
//    int sice;
//
//    void ordenacion(int inicio, int fin);
//};
//
//MetodoMerge::MetodoMerge() {}
//
//void MetodoMerge::finalizar() {
//    numeros = 0;
//    numerosAux = 0;
//}
//
//void MetodoMerge::ordenacion(int inicio, int fin) {
//    if (inicio < fin) {
//        int mitad = inicio + (fin - inicio) / 2;
//
//        ordenacion(inicio, mitad);
//        ordenacion(mitad + 1, fin);
//
//         //fusiona las dos mitades
//        int i = inicio, j = mitad + 1, k = inicio;
//
//        while (i <= mitad && j <= fin) {
//            if (numeros[i] <= numeros[j]) {
//                numerosAux[k++] = numeros[i++];
//            }
//            else {
//                numerosAux[k++] = numeros[j++];
//            }
//        }
//
//        while (i <= mitad) {
//            numerosAux[k++] = numeros[i++];
//        }
//        while (j <= fin) {
//            numerosAux[k++] = numeros[j++];
//        }
//
//        for (int index = inicio; index <= fin; index++) {
//            numeros[index] = numerosAux[index];
//        }
//    }
//}
//
//void MetodoMerge::Merge() {
//    ordenacion(0, numDatos - 1);
//}
//
//int main() {
//    MetodoMerge ordenamiento(10000000);
//
//    auto start = high_resolution_clock::now();
//
//    ordenamiento.Merge();
//    auto stop = high_resolution_clock::now(); 
//
//    auto duration = duration_cast<microseconds>(stop - start);
//
//    cout << "Tiempo de ordenamiento: " << duration.count() << " microsegundos." << endl;
//
//    ordenamiento.finalizar();
//}

//#include <iostream>
//#include <chrono>
//#include <ctime>
//#include <cstdlib>
//
//using namespace std;
//using namespace std::chrono;
//
//void fillArray(int* numeros, int tamano) {
//    srand(time(0));
//
//    for (int i = 0; i < tamano; i++) {
//        numeros[i] = i + 1;
//    }
//    for (int i = 0; i < tamano; i++) {
//        int indiceAleatorio = rand() % tamano;
//        swap(numeros[i], numeros[indiceAleatorio]);
//    }
//} 
//
//class MetodoMerge {
//public:
//    MetodoMerge(int _sice) {
//        sice = _sice;
//        fillArray(numeros, sice);
//    }
//    MetodoMerge();
//    void Merge();
//    void finalizar();
//
//private:
//    int numeros[10000000];
//    int numerosAux[10000000];
//
//    int numDatos = 10000000;
//    int sice;
//
//    void ordenacion(int inicio, int fin);
//};
//
//MetodoMerge::MetodoMerge() {}
//
//void MetodoMerge::finalizar() {
//    // No se necesita liberar memoria para arreglos estáticos
//}
//
//void MetodoMerge::ordenacion(int inicio, int fin) {
//    if (inicio < fin) {
//        int mitad = inicio + (fin - inicio) / 2;
//
//        ordenacion(inicio, mitad);
//        ordenacion(mitad + 1, fin);
//
//        // fusiona las dos mitades
//        int i = inicio, j = mitad + 1, k = inicio;
//
//        while (i <= mitad && j <= fin) {
//            if (numeros[i] <= numeros[j]) {
//                numerosAux[k++] = numeros[i++];
//            }
//            else {
//                numerosAux[k++] = numeros[j++];
//            }
//        }
//
//        while (i <= mitad) {
//            numerosAux[k++] = numeros[i++];
//        }
//        while (j <= fin) {
//            numerosAux[k++] = numeros[j++];
//        }
//
//        for (int index = inicio; index <= fin; index++) {
//            numeros[index] = numerosAux[index];
//        }
//    }
//}
//
//void MetodoMerge::Merge() {
//    ordenacion(0, numDatos - 1);
//}
//
//int main() {
//    MetodoMerge ordenamiento(10000000);
//
//    auto start = high_resolution_clock::now();
//
//    ordenamiento.Merge();
//    auto stop = high_resolution_clock::now(); 
//
//    auto duration = duration_cast<microseconds>(stop - start);
//
//    cout << "Tiempo de ordenamiento: " << duration.count() << " microsegundos." << endl;
//
//    ordenamiento.finalizar();
//}


