#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <stdio.h>

using namespace std;

//funções para pilha (estrutura, empilhar, desempilhar, imprimir)
typedef struct no_
{
    int chave;
    int valor;
    struct no_ * ant;
} no;

void inserir (no ** topo, no* novo_no){
    novo_no->ant = (*topo);
    *topo = novo_no;
}

no* remover (no ** topo){
    no* tmp = NULL;
    if(*topo != NULL){
        tmp = *topo;
        (*topo) = (*(*topo)).ant;
    }
    return tmp;
}

void imprimir(no * topo){
    if(topo == NULL){
        printf("pilha vazia");
        return;
    }
}

//achar entrada do labirinto
int achar_entrada(char *labirinto[10][10]){

}

int main (){
    char arquivo[100];
    char *labirinto[10][10]

    cout << "Digite o nome do arquivo:";
    cin >> arquivo;

    ifstream teclado(arquivo); 
    if (!teclado.is_open()) {
        cerr << "\n\t\tErro: Arquivo não encontrado. \n"; 
        return 1;
    }else{
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                teclado >> *labirinto[i][j];
            }
        }
    }
    
    return 0;
}
