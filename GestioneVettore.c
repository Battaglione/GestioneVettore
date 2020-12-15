#include <stdio.h>
#include <stdlib.h>
#define N 10
int main (){
    int v[N], i1, i2, scelta, temp, input, fine, ripet;
    fine = 0;
    ripet = 0;
    for(i1 = 0; i1 < N; i1++){
        printf("Inserire il valore numero %d del vettore\n", i1 + 1);
        scanf("%d",&v[i1]);
    }
    do{
        i1, i2, temp, input = 0;
        system("cls");
        printf("*************************************************************************\nScegli una tra queste opzioni:\n 1) Caricare il vettore\n 2) Visualizzare il vettore\n 3) Ordinare il vettore \n 4) Cercare un elemento nel vettore \n 5) Cercare la frequenza di un numero (quante volte compare nel vettore)\n 6) Fine\n*************************************************************************\n");
        scanf("%d",&scelta);
        printf("*************************************************************************\n");
        switch(scelta){
            default:
                printf("Input non valido!");
                break;
            case 1:
                for(i1 = 0; i1 < N; i1++){
                    printf("Inserire il valore numero %d del vettore\n", i1 + 1);
                    scanf("%d",&v[i1]);
                }
                break;
            case 2:
                for(i1 = 0; i1 < N; i1++){
                    printf("%d\n",v[i1]);
                }
                system("pause");
                break;
            case 3:
                printf("Ordinamento crescente (1) o decrescente (2)?\n");
                scanf("%d",&input);
                if(input == 1){
                        for(i1 = 0; i1 < N; i1++){
                            for(i2 = i1 + 1; i2 < N; i2++){
                                if(v[i2] < v[i1]){
                                temp = v[i1];
                                v[i1] = v[i2];
                                v[i2] = temp;
                                }
                            }
                         }
                        for(i1 = 0; i1 < N; i1++){
                            printf("%d\n", v[i1]);
                        }
                        system("pause");
                }
                if(input == 2){
                        for(i1 = 0; i1 < N; i1++){
                            for(i2 = i1 + 1; i2 < N; i2++){
                                if(v[i2] > v[i1]){
                                    temp = v[i1];
                                    v[i1] = v[i2];
                                    v[i2] = temp;
                                }
                            }
                        }
                    for(i1 = 0; i1 < N; i1++){
                        printf("%d\n", v[i1]);
                    }
                    system("pause");
                }
                break;
                case 4:
                    printf("Inserisci un numero\n");
                    scanf("%d",&input);
                    for(i1 = 0; i1 < N; i1++){
                        if(v[i1] == input){
                            ripet = 1;
                            printf("Il numero e' presente nel vettore ed e' il numero %d\n", i1 + 1);
                            system("pause");
                            break;
                        }
                    }
                    if(ripet == 0){
                        printf("Il numero non e' presente nel vettore\n");
                        system("pause");
                        break;
                    }
                    break;
                case 5:
                    ripet = 0;
                    printf("Inserisci un numero\n");
                    scanf("%d",&input);
                    for(i1 = 0; i1 < N; i1++){
                        if(v[i1] == input){
                        ripet = ripet + 1;
                        }
                    }
                    printf("Il numero viene ripetuto %d volte \n", ripet);
                    system("pause");
                    break;
                case 6:
                    fine = 1;
                    break;
            }
        }while(fine == 0);
        return 0;
}
