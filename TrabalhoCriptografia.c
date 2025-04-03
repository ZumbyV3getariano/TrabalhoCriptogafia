#include <stdio.h>

int main()
{
    //Variavel de Saida do Programa
    char saida = 'n';
    do{

        char mensagem[100];
        for(int i=0;i<100;i++)
            mensagem[i] = '\0';

        printf("\n\n\tDigite a mensagem (terminada com ';'): ");

        // Leitura Da Escrita e Verificaçao do ';'
        int i = 0;
        for(;;)
        {

            scanf(" %c", &mensagem[i]);

            // Se encontrar o caractere ';' termina a leitura
            if (mensagem[i] == ';')
            {
                i++;
                mensagem[i] = '\0';  // Termina a string com '\0'
                break;
            }
            //Pula para a proxima letra
            i++;
        }

        // Codificar a mensagem
        int j = 0;
        while (mensagem[j] != '\0')
        {
            // Codificaçao
            mensagem[j] = (5 * mensagem[j] + 100) % 256;
            j++;
        }

        // Mostra a mensagem codificada
        printf("\tMensagem codificada: ");
        for (int i = 0; mensagem[i] != '\0'; i++)
        {
            printf("%d ", mensagem[i]);
        }


        //Ponto onde se decide se continua ou nao o loop
        printf("\n\nDeseja Continuar? (s/n) ");
        scanf(" %c", &saida);
    }while(saida == 'S' || saida == 's');
}
