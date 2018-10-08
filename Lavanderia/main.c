#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>
//14/14 ok
typedef struct{
    char nome[30];
    char telefone[11];
    char endereco[200];
    double peso_roupa;      //12
    double edredomSolteiro;   //15
    double edredomCasal;      //20
    double paletoBlazer;      //15
    double paletoCompleto;    //20
    double rede;              //13
    double passadeiraPeq;     //15
    double passadeiraGran;    //20
    double tapete;            //15
    double vestido;        //20 a 40
    double vestidoInf;     //10 a 20
    double camisaSocialML;    //10
    double camisaSocialMC;    //7
    double camisaMalha;       //5
    double valor;
}Cliente;

int main()
{
    setlocale(LC_ALL, "");
    Cliente C;
    int escolha;
    char str[100];
    FILE *p;
    char arq[13] = "arquivo.txt";
    p = fopen (arq , " rt " );
    if ( p == NULL ){
         p = fopen(arq,"wt");
    }else {
    printf("=============================\n");
    printf("\tLANVANDERIA V 0.8\n");
    printf("=============================\n");

    do{
        printf("            MENU            ");
        printf("\n=============================\n");
        printf("Digite 1 para Cadastro\n");
        printf("Digite 2 para Visualisar\n");
        printf("Digite 3 para Limpar a Tela\n");
        printf("Digite 0 para sair\n");
        printf("=============================\n");
        printf("Entrada: ");
        scanf("%d",&escolha);

        switch(escolha){

            case 1:
                setlocale(LC_ALL, "");
                system("cls");
                p = fopen(arq,"at");
                printf("        TELA DE CADASTRO\n");
                printf("=============================\n");
                fprintf(p,"\n******************************************************\n");
                fputs("Data e Hora: ",p);
                fputs (""__DATE__" "__TIME__"\n", p);
                fflush(stdin);

                printf("\nDigite o nome do cliente: ");
                scanf("%[^\n]s",C.nome);
                fprintf(p,"Nome do cliente: -------------------------- %s\n",C.nome);
                fflush(stdin);

                printf("Digite o telefone do cliente: ");
                scanf("%s",C.telefone);
                fprintf(p,"Telefone do cliente: ---------------------- %s\n",C.telefone);
                fflush(stdin);

                printf("Digite o Endereço do cliente: ");
                scanf("%[^\n]s",C.endereco);
                fprintf(p,"Endereço do cliente: ---------------------- %s\n",C.endereco);
                fflush(stdin);

                printf("Digite o peso da roupa do cliente: ");
                scanf("%lf",&C.peso_roupa);
                C.valor = C.peso_roupa * 12;
                fprintf(p,"Peso da roupa do cliente: ----------------- %.2lf KG\n",C.peso_roupa);
                fflush(stdin);

                printf("Digite a quantidade de Edredom de Solteiro: ");
                scanf("%lf",&C.edredomSolteiro);
                C.valor += C.edredomSolteiro * 15;
                fprintf(p,"Edredom de Solteiro: ---------------------- %.2lf UNI\n",C.edredomSolteiro);
                fflush(stdin);

                printf("Digite a quantidade de Edredom de Casal: ");
                scanf("%lf",&C.edredomCasal);
                C.valor += C.edredomCasal * 20;
                fprintf(p,"Edredom de Casal: ------------------------- %.2lf UNI\n",C.edredomCasal);
                fflush(stdin);

                printf("Digite a quantidade de paletó e blazer: ");
                scanf("%lf",&C.paletoBlazer);
                C.valor += C.paletoBlazer * 15;
                fprintf(p,"Paleto e Blazer: -------------------------- %.2lf UNI\n",C.paletoBlazer);
                fflush(stdin);

                printf("Digite a quantidade de paletós completos: ");
                scanf("%lf",&C.paletoCompleto);
                 C.valor += C.paletoCompleto * 20;
                fprintf(p,"Paletos Completos: ------------------------ %.2lf UNI\n",C.paletoCompleto);
                fflush(stdin);

                printf("Digite a quantidade de Tapetes: ");
                scanf("%lf",&C.tapete);
                C.valor += C.tapete * 15;
                fprintf(p,"Tapetes: ---------------------------------- %.2lf M²\n",C.tapete);
                fflush(stdin);

                printf("Digite a quantidade de Passadeira de chão/mesa Pequena: ");
                scanf("%lf",&C.passadeiraPeq);
                C.valor += C.passadeiraPeq * 15;
                fprintf(p,"Passadeira de chão/mesa peq --------------- %.2lf UNI\n",C.passadeiraPeq);
                fflush(stdin);

                printf("Digite a quantidade de Passadeira de chão/mesa Grande: ");
                scanf("%lf",&C.passadeiraGran);
                C.valor += C.passadeiraGran * 20;
                fprintf(p,"Passadeira de chão/mesa Grande: ----------- %.2lf UNI\n",C.passadeiraGran);
                fflush(stdin);

                printf("Digite a quantidade de Vestidos de Festa: ");
                scanf("%lf",&C.vestido);
                fprintf(p,"Vestidos de Festa: ------------------------ %.2lf UNI\n",C.vestido);
                fflush(stdin);

                printf("Digite a quantidade de Vestidos Infantis: ");
                scanf("%lf",&C.vestidoInf);
                fprintf(p,"Vestidos Infantis: ------------------------ %.2lf UNI\n",C.vestidoInf);
                fflush(stdin);

                printf("Digite a quantidade de Camisas Socias de Mangas Longas: ");
                scanf("%lf",&C.camisaSocialML);
                fprintf(p,"Camisas Socias de Mangas Longas: ---------- %.2lf UNI\n",C.camisaSocialML);
                C.valor += C.camisaSocialML * 10;
                fflush(stdin);

                printf("Digite a quantidade de Camisas Socias de Mangas Curtas: ");
                scanf("%lf",&C.camisaSocialMC);
                C.valor += C.camisaSocialMC * 7;
                fprintf(p,"Camisas Socias de Mangas Curtas: ---------- %.2lf UNI\n",C.camisaSocialMC);
                fflush(stdin);

                printf("Digite a quantidade de Camisas de Malha: ");
                scanf("%lf",&C.camisaMalha);
                C.valor += C.camisaMalha * 5;
                fprintf(p,"Camisas de Malha: ------------------------- %.2lf UNI\n",C.camisaMalha);
                fflush(stdin);

                printf("Valor Total: %.2lf\n",C.valor);
                fprintf(p,"Valor Total: ------------------------------ %.2lf\n",C.valor);

                fprintf(p,"******************************************************\n");
               // fflush(stdin);
                printf("=============================\n");

                fclose(p);
                break;

            case 2:

                system("cls");
                printf("--------------- LISTA DE CLIENTES ---------------\n");
                p = fopen(arq,"rt");
                if(fgets ( str , 100 , p ) == NULL){
                    printf("Arquivo vazio !\n");
                }

                while ( fgets ( str , 100 , p )!= NULL ) {
                        puts(str);
                }
                fclose(p);
                break;

            case 3:
                system("cls");
                break;


        }

    }while( (escolha != 0) );
    fclose(p);
    return 0;
    }
}
