#include <iostream>
using namespace std;
int hola = 666;
int main() {

    /*
        Los arrays deben contener el mismo tipo en toda su array.
        El número de elementos que tendrá la array será definido
        en la declaración y, por lo tanto, no podrá variar.
        (Los arrays que sí pueden variar su número de elementos
        se llaman vectores y son otra cosa)

        C++ tiene un problema con los arrays: no muestra errores si
        intentas leer la casilla de un array inexistente. Por ejemplo,
        si un array tiene 3 casillas e intentas leer el contenido de
        una quinta casilla (que no existe), no te muestra ningún error
        y actua de forma errática, pero sin avisar de que está fuera
        del array.
    */
    
    // DECLARACIÓN
    // tipo mi_array[n];

    string dias_de_la_semana[7];

    // INICIALIZACIÓN

    // Array con todos sus valores definidos
    int array1[5]{1,2,3,4,5};
    
    // Array con los dos primeros valores
    // asume que el resto son 0
    int array2[5]{12,25};

    // Array con todos los valores iguales
    const short salarios{20};
    double array3[salarios]{2700.50};

    // Array con tamaño autodefinido al dar
    // los valores que contiene
    int array4[]{1,2,3,4,5,6,7,8}; // tendrá 8 de tamaño

    /*
    cout << "array1" << endl;
    for(int i=0; i<5; i++){
        cout << array1[i] << endl;
    }

    cout << "array2" << endl;
    for(int i=0; i<5; i++){
        cout << array2[i] << endl;
    }

    cout << "array3" << endl;
    for(int i=0; i<20; i++){
        cout << array3[i] << endl;
    }

    cout << "array4" << endl;
    for(int i=0; i<8; i++){
        cout << array4[i] << endl;
    }
    */
    int n{2};
    int a[n]{1,2};
    
    // cout << "a" << endl;
    // for(int i=0; i<2; i++){
    //     cout << a[i] << endl;
    // }

    /*
        ARRAYS BIDIMENSIONALES
        Son matrices, tablas de dos dimensiones
    */
    // DECLARACIÓN E INICIALIZACIÓN
    // Todos los valores seguidos:
    int matriz[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    // Construir por filas
    int matriz2[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    /*
    int matriz3[4][5];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> matriz3[i][j];
        }
        cout << endl;
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout << matriz3[i][j] << " ";
        }
        cout << endl;
    }
    */

    /*
        ARRAYS TRIDIMENSIONALES
    */

    int pasoCoches[24][31][12]; // hora, día, mes

    // 15 mayo 2 madrugada
    // pasoCoches[2][14][4]=4;
    // cout << "El número de coches que pasaron el 15 de mayo a las 2am son " << pasoCoches[2][14][4];

    for(int i=0; i<24; i++){
        for(int j=0; j<31; j++){
            for(int k=0; k<12; k++){
                pasoCoches[i][j][k] = rand()%1000;
            }
        }
    }

    cout << "El número de coches que pasaron el 7 de noviembre a las 19:00 fueron: " << pasoCoches[19][06][10];

    cout << endl;return 0;
}