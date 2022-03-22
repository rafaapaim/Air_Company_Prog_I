#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

void main()
{
    int a1[10], a2[10], i, op, a;

    for(i=0; i<10; i++)
    {
        a1[i]=0;
        a2[i]=0;
    }

    do
    {
        do
        {
            setlocale(LC_ALL, "Portuguese");
            system("color 1F");
            printf("Informe o número do aviao que deseja reservar os assentos (1 ou 2): \n\n>>> ");
            scanf("%d", &a);
            if(a<1 || a>2)
                printf("O número deve ser 1 ou 2!");
            getch();
            system("cls");
        }while(a<1 || a>2);

        if(a==1)
        {
            printf("Você está no aviao 1\n");
            printf("\nFavor digitar 1 para \"Primeira Classe\".");
            printf("\nFavor digitar 2 para \"Classe Econômica\".");
            printf("\nFavor digitar 3 para visualizar a ocupaçao do aviao.");
            printf("\nFavor digitar 4 para sair.\n\n>>> ");
            scanf("%d", &op);

            switch(op)
            {
                case 1: do
                        {
                            printf("Escolha o assento para a reserva (1 ao 5): ");
                            scanf("%d", &i);
                        }while(i<1 || i>5);

                        if(a1[i-1]==0)
                        {
                            a1[i-1]=1;
                            printf("\nReserva concluída!");
                        }else{
                                printf("Erro! O assento já está reservado.");
                                }
                        printf("\n\n");
                        getch();
                        system("cls");

                        break;

                case 2: do
                        {
                            printf("Escolha o assento para a reserva (6 ao 10): ");
                            scanf("%d", &i);

                        }while(i<6 || i>10);
                        if(a1[i-1]==0)
                        {
                            a1[i-1]=1;
                            printf("\nReserva concluída!");
                        }else{
                                printf("Erro! O assento já está reservado.");
                             }
                        printf("\n\n");
                        getch();
                        system("cls");

                        break;

                case 3: printf("Assentos:\n\n");
                        for(i=0; i<10; i++)
                        {
                            if(a1[i]==0)
                            {
                                printf("> %d - Vago\n", i+1);
                            }else{
                                    printf("> %d - Ocupado\n", i+1);
                                 }
                        }
                        getch();
                        system("cls");

                        break;
            }
        }
        if(a==2)
        {
            printf("Você está no aviao 2\n");
            printf("\nFavor digitar 1 para \"Primeira Classe\".");
            printf("\nFavor digitar 2 para \"Classe Econômica\".");
            printf("\nFavor digitar 3 para visualizar a ocupaçao do aviao.");
            printf("\nFavor digitar 4 para sair.\n\n>>> ");
            scanf("%d", &op);

            switch(op)
            {
                case 1: do
                        {
                            printf("Escolha o assento para a reserva (1 ao 5): ");
                            scanf("%d", &i);
                        }while(i<1 || i>5);

                        if(a2[i-1]==0)
                        {
                            a2[i-1]=1;
                            printf("\nAssento reservado!");
                        }else{
                                printf("Erro! O assento já está reservado.");
                                }
                        printf("\n\n");
                        getch();
                        system("cls");

                        break;

                case 2: do
                        {
                            printf("Escolha o assento para a reserva (6 ao 10): ");
                            scanf("%d", &i);

                        }while(i<6 || i>10);
                        if(a2[i-1]==0)
                        {
                            a2[i-1]=1;
                            printf("\nAssento reservado!");
                        }else{
                                printf("Erro! O assento já está reservado.");
                             }
                        printf("\n\n");
                        getch();
                        system("cls");

                        break;

                case 3: printf("Assentos:\n\n");
                        for(i=0; i<10; i++)
                        {
                            if(a2[i]==0)
                            {
                                printf("> %d - Vago\n", i+1);
                            }else{
                                    printf("> %d - Ocupado\n", i+1);
                                 }
                        }
                        getch();
                        system("cls");

                        break;
            }
        }
        }while(op!=4);

        printf("\nVocê saiu do programa!\n");
}
