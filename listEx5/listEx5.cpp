using namespace std;
#include <iostream>

int main()
{
    cout << "Exercicio 1: contar numeros de 1 a 10";
    for (int i = 1; i < 11; i++) {
        cout << "\nNumero " << i;
    }
    
    int numTab; 

    cout << "\n\nExercicio 2: tabuada\nInforme um numero:";
    cin >> numTab;
    for (int i = 1; i < 11; i++) {
        cout <<  numTab << " * " << i << " = " << numTab * i << "\n";
    }

    cout << "\nExercicio 3: contar de 0 a 50 de 5 em 5";
    for (int i = 0; i < 51; i = i+5) {
        cout << "\nNumero " << i;
    }

    int numEspecial;
    cout << "\n\nExercicio 4: comum ou especial?\nInforme um numero:";
    cin >> numEspecial;
    numEspecial = numEspecial * 5;
    if (numEspecial > 100) {
        cout << "Parabens, um numero especial :)";
    }
    else {
        cout << "Numero comum :|";
    };

    cout << "\n\nExercicio 5: contar de 1 a 31 de 2 em 2";
    for (int i = 1; i <= 31; i = i + 2) {
        cout << "\nNumero " << i;
    }

    cout << "\n\nExercicio 6: positivo ou negativo?";
    for (int i = 1; i <= 5; i++) {
        int numPON;
        cout << "Escolha um numero: ";
        cin >> numPON;
        if (numPON > 0) {
            cout << "Numero positivo\n";
        }
        else if (numPON < 0) {
            cout << "Numero negativo\n";
        }
        else {
            cout << "Numero 0\n";
        }
    }
}

