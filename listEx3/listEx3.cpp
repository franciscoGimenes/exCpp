
using namespace std;
#include <iostream>

void MaiorOuMenor(int n1, int n2) {
    if (n1 > n2)
    {
        cout << "\nO primeiro numero is bigger";
    }
    else if (n2 > n1) {
        cout << "\nO segundo numero is bigger";
    }
    else {
        cout << "\nOs numeros sao iguais";
    }

}   

void AvaliarEstoque(int quantidade) {
    if (quantidade >= 100) {
        cout << "\nQuantidade suficiente no estoque";
    }
    else if (quantidade >= 50) {
        cout << "\nAtencao ao estoque";
    }
    else {
        cout << "\nFaca um novo pedido e reabasteca o estoque";
    }
}

void VerificarNumero(int numero) {
    if (numero > 0) {
        cout << "\nO numero is positivo";
    }
    else if (numero < 0) {
        cout << "\nO numero is negativo";
    }
    else {
        cout << "\nO número is igual a zero";
    }
}

int main()
{

    int n1;
    int n2;
    cout << "Exercicio 1: Por favor informe dois numeros para compararmos\n";
    cout << "Numero1: ";
    cin >> n1;
    cout << "Numero2: ";
    cin >> n2;
    MaiorOuMenor(n1, n2);

    int quantidade;
    cout << "\n\nExercicio 2: Por favor informe a quantidade de produtos no estoque\n";
    cout << "Quantidade: ";
    cin >> quantidade;
    AvaliarEstoque(quantidade);

    int numero;
    cout << "\n\nExercicio 3: Por favor informe um numero\n";
    cout << "Numero: ";
    cin >> numero;
    VerificarNumero(numero);

    return 0;
}
