#include <iostream>
#include <vector>

using namespace std;

int main() {

    int vetorE1[10];


    cout << "Exercicio 1: por favor, insira 10 numeros:\n";
    for (int i = 0; i < 10; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetorE1[i];
    }

 
    cout << "\nOs elementos inseridos sao:\n";
    for (int i = 0; i < 10; ++i) {
        cout << "Elemento " << i + 1 << ": " << vetorE1[i] << "\n";
    }

    int vetorE2[7];
    int soma = 0;

    cout << "\nExercicio 2: por favor insira 7 numeros\n";
    for (int i = 0; i < 7; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetorE2[i];
        soma += vetorE2[i];  
    }

    cout << "A soma dos resultados is: " << soma << "\n";

    cout << "\nExercicio 3: media de idade\n";

    int quantidadeIdade18 = 3;
    int quantidadeIdade17 = 2;
    int quantidadeIdade16 = 12;
    int quantidadeTotal = quantidadeIdade16 + quantidadeIdade17 + quantidadeIdade18;
    int somaIdades = 0;
    
    for (int i = 0; i < quantidadeTotal; i++) {
        if (i < quantidadeIdade18) {
            somaIdades += 18;
        }
        else if (i < quantidadeIdade18 + quantidadeIdade17) {
            somaIdades += 17;
        }
        else {
            somaIdades += 16;
        }
    }

    double mediaAlunos = somaIdades / quantidadeTotal;
    cout << "a media das idades dos alunos e de: " << mediaAlunos << "\n";

 
    vector<int> depositos = { 5, 9, 7, 10, 15, 23, 20, 30 };

    int totalDepositos = 0;

    for (int i = 0; i < depositos.size(); ++i) {
        totalDepositos += depositos[i];
    }


    cout << "\nExercicio 4: o total depositado e: " << totalDepositos << "\n";

    int vetorE5[10];

    cout << "\nExercicio 5: insira 10 numeros\n";
    for (int i = 0; i < 10; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetorE5[i];
    }

    int opcao;


    cout << "\nEscolha uma opção:\n";
    cout << "1 - Somar todos os elementos do vetor\n";
    cout << "2 - Subtrair todos os elementos do vetor\n";
    cout << "3 - Multiplicar todos os elementos do vetor\n";
    cout << "Opção: ";
    cin >> opcao;

    switch (opcao) {
    case 1: {
        int somaEx5 = 0;
        for (int i = 0; i < 10; i++) {
            somaEx5 += vetorE5[i];
        }
        cout << "A soma de todos os elementos e: " << somaEx5 << "\n";
        break;
      }
    case 2: {
        int subEx5 = 0;
        for (int i = 0; i < 10; i++) {
            subEx5 -= vetorE5[i];
        }
        cout << "A subtracao de todos os elementos e: " << subEx5 << "\n";
        break;
    }
    case 3: {
        int multEx5 = 1;
        for (int i = 0; i < 10; i++) {
            multEx5 *= vetorE5[i];
        }
        cout << "A multiplicacao de todos os elementos e: " << multEx5 << "\n";
        break;
    }
    }

    return 0;
}
