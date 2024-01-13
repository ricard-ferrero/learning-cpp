#include <iostream>
using namespace std;

int main() {
    // CONSTANTS
    const float cost_high = 55.3;
    const float cost_medium = 35.5;
    const float iva = 0.21;
    const short max_days = 30;

    // VARIABLES
    int to_install_high;
    int to_install_medium;
    float total_cost;
    float total_cost_iva;
    

    // INTERFACE
    cout << "BIENVENIDO A NUESTRO SERVICIO DE SUELOS" << endl;
    cout << "¿Cuántos metros quieres instalar con calidad media? ";
    cin >> to_install_medium;
    cout << "¿Cuántos metros quieres instalar con calidad alta? ";
    cin >> to_install_high;

    total_cost = to_install_high*cost_high + to_install_medium*cost_medium;

    total_cost_iva = total_cost*(1 + iva);

    cout << "El coste total será de:" << endl;
    cout << total_cost << " sin IVA" << endl;
    cout << total_cost_iva << " con IVA" << endl;
    cout << endl << "El presupuesto es válido hasta dentro de " << max_days << " días.";

    cout << endl;
    return 0;
}