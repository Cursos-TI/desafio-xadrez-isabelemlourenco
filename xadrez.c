#include <stdio.h>

void torre(int casas){
    if (casas >0){
        printf("Direita\n");
        torre(casas - 1);
        
    }
    
}

void bispo(int casas){
    for(int i = 0; i < casas; i++){ 
        for(int i = 1; i < 2 ; i++){
            printf("cima, "); 
            
        }
        printf("direita\n");
        
    }
    
    
}

void rainha(int casas){
    if (casas > 0){
        printf("Esquerda\n");
        rainha (casas - 1);
    }
    
}

int main()
{

    printf("MOVIMENTAÇÃO TORRE\n");

    torre(5);
    

    printf("MOVIMENTAÇÃO BISPO\n");

    bispo(5);
    

    printf("MOVIMENTAÇÃO RAINHA\n");

    rainha(8);
    

 

    printf("MOVIMENTAÇÃO CAVALO\n");

    for(int i = 0; i < 1; i++){
        for(int j = 0; j < 1; j++){
            printf("Cima\n");
            printf("Cima\n");
            break;
        }
        printf("Direita\n");
    }
    return 0;
}
