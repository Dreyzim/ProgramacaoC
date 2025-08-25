#include <stdio.h>

// Função da torre com recursão
void torre(int n){
    if(n==0){
        return; // para quando acabar
    }
    printf("Direita\n");
    torre(n-1); // chama de novo
}

// Função do bispo com recursão
void bispoRec(int n){
    if(n==0){
        return;
    }
    printf("Cima Direita\n");
    bispoRec(n-1);
}

// Função do bispo com for dentro de outro for
void bispoLoop(int n){
    int i, j;
    for(i=0;i<n;i++){   // sobe
        for(j=0;j<1;j++){  // vai pro lado
            printf("Cima, Direita\n");
        }
    }
}

// Função da rainha com recursão
void rainha(int n){
    if(n==0){
        return;
    }
    printf("Esquerda\n");
    rainha(n-1);
}

// Cavalo com dois for/while
void cavalo(){
    int i, j;
    // duas pra cima
    for(i=0;i<2;i++){
        j=0;
        while(j<1){
            printf("Cima\n");
            j++;
            if(j>1){
                continue; // só pra ter um continue
            }
        }
    }
    // uma pra direita
    for(i=0;i<1;i++){
        if(i==1){
            break; // nunca vai cair aqui, mas ta ai
        }
        printf("Direita\n");
    }
}

int main(){

    printf("Movimento da Torre:\n");
    torre(5);

    printf("\n");

    printf("Movimento do Bispo (recursivo):\n");
    bispoRec(5);

    printf("\n");

    printf("Movimento do Bispo (for dentro de for):\n");
    bispoLoop(5);

    printf("\n");

    printf("Movimento da Rainha:\n");
    rainha(8);

    printf("\n");

    printf("Movimento do Cavalo:\n");
    cavalo();

    return 0;
}