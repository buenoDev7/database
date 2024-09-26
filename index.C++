#include <iostream>
using namespace std;

// Função template para encontrar o maior elemento
template <typename T>
T encontrarMaior(T arr[], int tamanho) {
    T maior = arr[0];
    for (int i = 1; i < tamanho; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}

int main() {
    int arrInt[] = {1, 2, 3, 4, 5};
    float arrFloat[] = {1.5, 2.5, 3.5, 4.5, 5.5};

    cout << "Maior inteiro: " << encontrarMaior(arrInt, 5) << endl;
    cout << "Maior float: " << encontrarMaior(arrFloat, 5) << endl;

    return 0;
}

int main() {
    int arrInt[] = {1, 2, 3, 4, 5};
    float arrFloat[] = {1.5, 2.5, 3.5, 4.5, 5.5};

    cout << "Maior inteiro: " << encontrarMaior(arrInt, 5) << endl;
    cout << "Maior float: " << encontrarMaior(arrFloat, 5) << endl;

    return 0;
}

int main() {
    int arrInt[] = {1, 2, 3, 4, 5};
    float arrFloat[] = {1.5, 2.5, 3.5, 4.5, 5.5};

    cout << "Maior inteiro: " << encontrarMaior(arrInt, 5) << endl;
    cout << "Maior float: " << encontrarMaior(arrFloat, 5) << endl;

    return 0;
}