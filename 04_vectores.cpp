#include <iostream>
#include <vector>
using namespace std;

int main() {
    /*
        VECTOR
        Clase de la librería Estándar de C++
        Crea estructuras contenedoras para almacenar
        datos secuenciales, como los arrays.
        La diferencia respecto a los arrays, es que
        el tamaño de un vector sí puede variar.

        Los arrays enlazaban los valores porque estaban
        contiguos en la memoria.
        Los vectores pueden almacenarse de manera separada
        en la memoria (por eso permite que el tamaño
        del vector sea variable)

        SE NECESITA UNA LIBRERÍA
        #include <vector>
    */

    // DECLARACIÓN E INICIALIZACIÓN
    
    // vector <int> nombre_vector;
    vector <int> numeros; // vector vacío

    
    // Podemos especificar el número de elementos
    // con el que se declara
    vector <char> letras (10);
    
    // Los vectores que se declaran con su tamaño
    // no están vacíos (0 para int, indeterminado para char)
    vector <int> prueba_numeros (5);
    vector <char> prueba_letras (5);
    // for (int i=0; i<5; i++) {
    //     cout << prueba_numeros[i] << " " << prueba_letras[i] << endl;
    // }

    vector <int> records {12,51,96,74,52};
    // for (int i=0; i<5; i++) {
    //     cout << records[i] << endl;
    // }
    
    // Vectores con valores por defecto:
    // vector <tipo> nombre (n_casillas, valor_por_defecto);
    vector <int> ejemplo (10, 666);
    // for (int i=0; i<10; i++) {
    //     cout << ejemplo[i] << endl;
    // }


    /*
        MÉTODOS PARA VECTORES
    */
    // .size()
    cout << ".size()" << endl;
    for(int i=0;i<ejemplo.size();i++){
        cout << ejemplo[i] << endl;
    } cout << endl;
    
    // .at() lectura y escritura pero con excepciones
    cout << ".at()" << endl;
    cout << ejemplo.at(3) << endl;
    // cout << ejemplo.at(15); // detecta si está fuera del vector
    ejemplo.at(3) = 5;
    cout << ejemplo.at(3) << endl;

    // .push_back() añade al final
    cout << ".push_back()" << endl;
    records.push_back(123);
    for(int i=0;i<records.size();i++){
        cout << records.at(i) << endl;
    } cout << endl;

    /*
        PUNTEROS ITERADORES

        Son un objeto que pertenecen a los vectores:
        std::vector<int>::iterator nombre_iterador;

        Este objeto señala al valor de una posición, sino
        a la propia posición en sí.
    */
    // .begin() devuelve un puntero iterador del primer elemento
    
    // .end() devuelve un puntero iterador del último elemento


    // .erase() elimina un elemento (o varios)
    // debe usarse con punteros iteradores
    cout << ".erase()" << endl;
    cout << "Tamaño vector: " << records.size() << endl;
    for(int i=0;i<records.size();i++){
        cout << records.at(i) << endl;
    }
    cout << "aplicamos .erase() en 0" << endl;
    records.erase(records.begin());
    cout << "Tamaño vector: " << records.size() << endl;
    for(int i=0;i<records.size();i++){
        cout << records.at(i) << endl;
    } cout << endl;

    // .insert() para insertar donde quieras
    cout << ".insert" << endl;
    vector<int>::iterator it = records.begin();
    cout << "Tamaño vector: " << records.size() << endl;
    for(int i=0;i<records.size();i++){
        cout << records.at(i) << endl;
    }
    cout << "añadiremos 777 en la primera posición" << endl;
    records.insert(it, 777);
    cout << "Tamaño vector: " << records.size() << endl;
    for(int i=0;i<records.size();i++){
        cout << records.at(i) << endl;
    } cout << endl;
    cout << "añadiremos 555 en la última posición" << endl;
    records.insert(records.end(), 777);
    cout << "Tamaño vector: " << records.size() << endl;
    for(int i=0;i<records.size();i++){
        cout << records.at(i) << endl;
    } cout << endl;

    /*
        EJERCICIO CLI
    */
    // int n;
    // cout << "Cuantos valores? ";
    // cin >> n;
    // vector <int> v (n);
    // for(int i=0; i<n; i++){
    //     int x;
    //     cout << "Dame un valor: ";
    //     // cin >> x;
    //     // v.push_back(x);
    //     cin >> v[i];
    // }
    // cout << "Devolviendo vector de " << n << " valores:" << endl;
    // for(int i=0; i<n; i++){
    //     cout << v.at(i) << endl;
    // }

    cout << endl;return 0;
}