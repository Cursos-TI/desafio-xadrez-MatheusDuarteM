/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{   //para o jogo se manter em loop fiz um do while que tem como condição a var respostaUsuario
    char respostaUsuario;
    do{
        //iniciei a var de condição do switch
        int escolha;
        //fiz o menu para escolha no switch case
        printf("Escolha com qual peça deseja movimentar: \n Digite 1 para torre \n Digite 2 para Bispo \n Digite 3 para Rainha \n Escolha: ");
        scanf("%d",&escolha);
        switch(escolha){
            case 1://escolha para se for torre e definir o tanto que andaria
                for(int i = 0 ; i <= 5; i++)
                {
                    printf("Torre movida para a Direita %d \n",i);
                }
                break;
            case 2://escolha para bispo e dessa fez utilizei o while
            int j = 1;
            while( j <= 8)
            {
                printf("Bispo movido na diagonal: %d \n",j);
                j++;
            }
                break;
            case 3://escolha rainha onde o usuario escolhe em que direção e quanto vai movimentar
            int w = 1;
            int l;
            char movimentar[50];
            printf("Para que direção você quer movimentar a rainha: ");
            scanf(" %s",&movimentar);
            printf("Quantas movimentações quer fazer na rainha: ");
            scanf(" %d",&l);
            while( w <= l)
            {
                printf("Rainha Movimenta na direção %s em %d de vezes \n",movimentar,w);
                w++;
            }
                break;
            default:
                break;
        }
        printf("Que continuar sim ou sair? ");
        scanf("%s",respostaUsuario);
    }while (respostaUsuario == "sair");
}