#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int percorrer (char posicao[10][10]){
    if (posicao[1][1] == 'E'){
        for (int linha = 1; linha <= 10; linha++){
            for (int coluna = 1; coluna <= 10; coluna++){
                if (posicao[linha][coluna] == 'X'){
                    coluna++;
                } else percorrer(posicao[linha][coluna]);
                }
            }
        }
    }

int main(){
    char posicao[10][10];
    char arquivo[100];

    cout << "Escreva o nome do arquivo: ";
    cin >> arquivo;
    ifstream teclado(arquivo);
    if (!teclado.is_open()) {
        cerr << "\n\t\tErro: Arquivo não encontrado. \n";
        return 1;
    }

    teclado >> posicao[1][1];
return 0;
}