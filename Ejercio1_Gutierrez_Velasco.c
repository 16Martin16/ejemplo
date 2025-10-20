#include <stdio.h>

int main() {
    int agenda[5][8] = {0};
    int opcion, dia, hora, i, j;
    
    printf("Sistema agenda horario perros Juanito\n\n");
    
    while (1) {
        printf("\n1. Mostrar agenda\n2. Agendar\n3. Salir\nOpcion: ");
        scanf("%d", &opcion);
        
        if (opcion == 1) {
            printf("\nHorario    Lun-Mar-Mie-Jue-Vie-\n");
            for (j = 0; j < 8; j++) {
                printf("%02d:h-%02d:h|", 9+j, 10+j);
                for (i = 0; i < 5; i++) {
                    printf(" %c |", agenda[i][j] ? 'X' : '-');
                }
                printf("\n");
            }
            
        } else if (opcion == 2) {
            printf("Dia (1 al 5): ");
            scanf("%d", &dia);
            printf("Hora (1 al 8): ");
            scanf("%d", &hora);
            
            if (dia < 1 || dia > 5 || hora < 1 || hora > 8) {
                printf("error: valores invalidos\n");
            } else if (agenda[dia-1][hora-1] == 1) {
                printf("error ponte pilas el horario esta ocupado:\n");
            } else {
                agenda[dia-1][hora-1] = 1;
                printf("Agendado: Dia %d, %02d:h-%02d:h\n", dia, 8+hora, 9+hora);
            }
            
        } else if (opcion == 3) {
            printf("Gracias mi super profe\n");
            break;
        } else {
            printf("Opcion que no vale\n");
        }
    }
    
    return 0;
}