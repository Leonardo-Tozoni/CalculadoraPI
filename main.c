#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main (void) 
{
    int menu, vetor, matriz, funcao, derivada, intergral;

    while (menu != 6)
    {
        
        printf ( " \n \n " );
        printf ( "      _______________________________________ \n " );
        printf ( "     |             Menu Principal            | \n " );
        printf ( "     | _____________________________________ | \n " );
        printf ( "     |                                       | \n " );
        printf ( "     | 1- Vetor                              | \n " );
        printf ( "     | 2- Matriz                             | \n " );
        printf ( "     | 3- Funcao                             | \n " );
        printf ( "     | 4- Derivada                           | \n " );
        printf ( "     | 5- Integral                           | \n " );
        printf ( "     | Sair (6)                              | \n " );
        printf ( "     | _____________________________________ | \n " );
        printf ( " \n     Digite uma das opcoes acima: " );
        scanf ( " % d " , & menu);
        system ( " cls " );

        switch(menu){
            case 1: //Vetor
            while (vetor =! 3)
            
            printf ("1- Ordenar de forma crescente \n");
            printf ("2- Ordenar de forma decrescente \n");
            printf ("3- Voltar ao menu principal \n");
            printf ("\n\n");

            printf("Digite uma opcao acima : ");
            scanf("%d", &vetor);
            
            switch(vetor){

                case 1: //Crescente


                case 2: //Decrescente

                break;


            }
        case 2: //Matriz
            while(matriz !=5){      

                printf ("1- Determinante \n");
                printf ("2- Soma \n");
                printf ("3- Subtracao \n");
                printf ("4- Produto \n");
                printf ("5- Voltar ao menu pricipal \n");
                printf ("\n\n");

                printf("Digite uma opcao acima : ");
                scanf("%d", &matriz);

                switch(matriz){
                    case 1: //Determinante

                    case 2: //Soma

                    case 3: // Subtracao

                    case 4: //Produto

                    break;
                }
            }

        
        case 3: //Funcao
            while (funcao != 11){

                    printf("1-𝑓(𝑥)=𝑘");
                    printf("2- 𝑓(𝑥)=𝑥𝑘");
                    printf("3- 𝑓(𝑥)=𝑘𝑥");
                    printf("4- 𝑓(𝑥)=𝑒𝑥");
                    printf("5- 𝑓(𝑥)=𝑙𝑜𝑔𝑘(𝑥)");
                    printf("6- 𝑓(𝑥)=𝑙𝑛(𝑥)");
                    printf("7- 𝑓(𝑥)=1𝑥");
                    printf("8-𝑓(𝑥)=𝑠𝑒𝑛(𝑥)");
                    printf("9- 𝑓(𝑥)=𝑐𝑜𝑠(𝑥)");
                    printf("10- 𝑓(𝑥)=𝑡𝑔(𝑥)");
                    printf("11- VOLTAR AO MENU PRINCIPAL");

                    printf("Digite uma opcao acima : ");
                    scanf("%d", &funcao);

                    switch(funcao){
                        case 1: //k

                        case 2: //xk

                        case 3: //kx

                        case 4: //ex

                        case 5: //logk(x)

                        case 6: //ln(x)

                        case 7: //1x

                        case 8: //sen(x)

                        case 9: //cos(x)

                        case 10: //tg(x)

                        break;

                    }

            }

            case 4: //Derivadas
                while (derivada != 11){

                    printf("1-𝑓(𝑥)=𝑘");
                    printf("2- 𝑓(𝑥)=𝑥^𝑘");
                    printf("3- 𝑓(𝑥)=𝑘^𝑥");
                    printf("4- 𝑓(𝑥)=𝑒^𝑥");
                    printf("5- 𝑓(𝑥)=𝑙𝑜𝑔𝑘(𝑥)");
                    printf("6- 𝑓(𝑥)=𝑙𝑛(𝑥)");
                    printf("7- 𝑓(𝑥)=1/𝑥");
                    printf("8-𝑓(𝑥)=𝑠𝑒𝑛(𝑥)");
                    printf("9- 𝑓(𝑥)=𝑐𝑜𝑠(𝑥)");
                    printf("10- 𝑓(𝑥)=𝑡𝑔(𝑥)");
                    printf("11- VOLTAR AO MENU PRINCIPAL");

                    printf("Digite uma opcao acima : ");
                    scanf("%d", &derivada);

                    switch(derivada){
                        case 1: //k

                        case 2: //x^k

                        case 3: //k^x

                        case 4: //e^x

                        case 5: //logk(x)

                        case 6: //ln(x)

                        case 7: //1/x

                        case 8: //sen(x)

                        case 9: //cos(x)

                        case 10: //tg(x)

                        break;
                    }
                }


            }


        }

    }

}
