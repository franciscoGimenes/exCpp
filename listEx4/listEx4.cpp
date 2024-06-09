using namespace std;
#include <iostream>

int main()
{
    int numDia;
    while (true) {
        cout << "Exercicio 1:\nDigite um Numero de 1 a 7: ";
        cin >> numDia;

        if (numDia < 1 || numDia > 7) {
            cout << "Numero invalido, tente novamente." << endl;
        }
        else {
            break;
        }
    }

    switch (numDia)
    {
    case 1:
        cout << "Domingo" << endl;
        break;
    case 2:
        cout << "Segunda" << endl;
        break;
    case 3:
        cout << "Terca" << endl;
        break;
    case 4:
        cout << "Quarta" << endl;
        break;
    case 5:
        cout << "Quinta" << endl;
        break;
    case 6:
        cout << "Sexta" << endl;
        break;
    case 7:
        cout << "Sabado" << endl;
        break;
    default:
        cout << "Erro desconhecido." << endl;
        break;
    }

    double num1, num2, resultado;
    char operacao;

    cout << "\nExercicio 2:\n";
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;

    while (true) {
        cout << "Digite a operacao (+, -, *, /): ";
        cin >> operacao;

        if (operacao == '+' || operacao == '-' || operacao == '*' || operacao == '/') {
            break; 
        }
        else {
            cout << "Operacao invalida. Por favor, escolha entre +, -, * ou /.\n";
        }
    }


    switch (operacao)
    {
    case '+':
        resultado = num1 + num2;
        cout << "Resultado: " << resultado << '\n';
        break;
    case '-':
        resultado = num1 - num2;
        cout << "Resultado: " << resultado << '\n';
        break;
    case '*':
        resultado = num1 * num2;
        cout << "Resultado: " << resultado << '\n';
        break;
    case '/':
        if (num2 != 0) {
            resultado = num1 / num2;
            cout << "Resultado: " << resultado << '\n';
        }
        else {
            cout << "Erro: Divisao por zero nao e permitida.\n";
        }
        break;
    default:

        cout << "Operação invalida. Por favor, escolha entre +, -, * ou /.\n";
        break;
    }

    char letra;

    cout << "\nExercicio 3:\n";
    cout << "Digite uma letra: ";
    cin >> letra;

    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' ||
        letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout << "Vogal\n";
    }
    else {
        cout << "Consoante\n";
    }

    return 0;
}
