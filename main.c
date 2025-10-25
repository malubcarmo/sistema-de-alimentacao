#include <stdio.h>   
#include <stdlib.h>  
#include <unistd.h>  

int main() {
    int comida = 100;            
    int agua = 100;              
    int intervaloComida;         
    int intervaloAgua;           
    int consumoComida;           
    int consumoAgua;             
    int tempo = 0;               
    char resposta;               

    printf("=== SISTEMA AUTOMATICO DE ALIMENTACAO DE PASSARINHOS ===\n\n");

    printf("Informe o intervalo de liberacao de COMIDA (em segundos): ");
    scanf("%d", &intervaloComida);

    printf("Informe o intervalo de liberacao de AGUA (em segundos): ");
    scanf("%d", &intervaloAgua);

    printf("Informe a quantidade de COMIDA liberada a cada ciclo (em %%): ");
    scanf("%d", &consumoComida);

    printf("Informe a quantidade de AGUA liberada a cada ciclo (em %%): ");
    scanf("%d", &consumoAgua);

    printf("\nSistema iniciado! Pressione CTRL + C para encerrar.\n\n");
    sleep(2);

    while (1) {
        tempo++;

        if (tempo % intervaloComida == 0) {
            if (comida >= consumoComida) {
                comida -= consumoComida;
                printf("\n[%ds] Comida liberada! (-%d%%)\n", tempo, consumoComida);
            } else {
                printf("\n[%ds] ATENCAO: Sem comida suficiente para liberar!\n", tempo);
            }
        }

        if (tempo % intervaloAgua == 0) {
            if (agua >= consumoAgua) {
                agua -= consumoAgua;
                printf("[%ds] Agua liberada! (-%d%%)\n", tempo, consumoAgua);
            } else {
                printf("[%ds] ATENCAO: Sem agua suficiente para liberar!\n", tempo);
            }
        }

        printf("Nivel atual -> Comida: %d%% | Agua: %d%%\n", comida, agua);

        if (comida <= 20 && comida > 0) {
            printf("\n[AVISO] Nivel de comida abaixo de 20%%. Deseja reabastecer? (S/N): ");
            scanf(" %c", &resposta);
            if (resposta == 'S' || resposta == 's') {
                comida = 100;
                printf("[INFO] Reservatorio de comida reabastecido!\n");
            } else {
                printf("[ALERTA CRITICO] Nivel de comida muito baixo e sem abastecimento!\n");
            }
        }

        if (agua <= 20 && agua > 0) {
            printf("\n[AVISO] Nivel de agua abaixo de 20%%. Deseja reabastecer? (S/N): ");
            scanf(" %c", &resposta);
            if (resposta == 'S' || resposta == 's') {
                agua = 100;
                printf("[INFO] Reservatorio de agua reabastecido!\n");
            } else {
                printf("[ALERTA CRITICO] Nivel de agua muito baixo e sem abastecimento!\n");
            }
        }
        sleep(1);
    }
    return 0;
}
