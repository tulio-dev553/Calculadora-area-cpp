#include <iostream>

using namespace std;

int main() {
    int opçao;
    float base, altura, basemenor, basemaior, area;

    cout << "--- Calculador de Areas ---" << endl;
    cout << "1 - Calcular area de um triangulo" << endl;
    cout << "2 - Calcular area de um trapezio" << endl;
    cout << "3 - Sair" << endl;
    cout << "Escolha uma opcao: ";
    cin >> opçao;

    if (opçao == 1) {
        // area do triangulo
        cout << "Digite a base: ";
        cin >> base;
        cout << "Digite a altura: ";
        cin >> altura;

        if (base <= 0 || altura <= 0) {
            cout << "Erro: Valores invalidos!" << endl;
        } else {
            area = (base * altura) / 2.0;
            cout << "A area do triangulo é: " << area << endl;
        }
    } 
    else if (opçao == 2) {
        // area do trapezio
        cout << "Digite a base maior: ";
        cin >> basemaior;
        cout << "Digite a base menor: ";
        cin >> basemenor;
        cout << "Digite a altura: ";
        cin >> altura;

        if (basemaior <= 0 || basemenor <= 0 || altura <= 0) {
            cout << "Erro: Valores invalidos!" << endl;
        } else {
            area = ((basemaior + basemenor) * altura) / 2.0;
            cout << "A area do trapezio é: " << area << endl;
        }
    } 
    else if (opçao == 3) {
        cout << "Saindo..." << endl;
    } 
    else {
        cout << "Escolha invalida!" << endl;
    }

    return 0;
}
