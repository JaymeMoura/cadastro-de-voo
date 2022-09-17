#include <stdio.h>
#include <stdlib.h>
#define T 200

int NumVoo[T], PassageirosVoo[T], op;
char AeroportoSaida[T][50] , AeroportoChegada[T][50] , Rota[T][50], DataVoo[T][50], HoraVoo[T][50], TempoVoo[T][50];


int main(void){
    menu();
}

void menu(){
    printf("~menu~ \n 1_cadastro \n 2_pesquisar \n 3_excluir \n 4_listar cadastrados \n 5_sair \n~~~~~~ \n");
    scanf("%i", &op);

    if(op==1){
        cadastro();
    }
    if(op==2){
        pesquisa();
    }
    if(op==3){
        excluir();
    }
    if(op==4){
        listar();
    }
    if(op==5){
        exit(0);
    }
    else
    {
     printf("opçao invalida! \ntente novamente! \n");
    }
menu();
}


void cadastro(){
    static int linha;
    do{
        printf("\n digite o numero do voo: ");
        scanf("%i", &NumVoo[linha]);
        fflush(stdin);

        printf("\n digite a quantidade de passageiros a bordo: ");
        scanf("%d", &PassageirosVoo[linha]);
        fflush(stdin);

        printf("\n digite o Aeroporto de saida: ");
        scanf("%s", &AeroportoSaida[linha]);
        fflush(stdin);

        printf("\n digite o Aeroporto de chegada: ");
        scanf("%s", &AeroportoChegada[linha]);
        fflush(stdin);

        printf("\n digite a Rota do Avião: ");
        scanf("%s", &Rota[linha]);
        fflush(stdin);

        printf("\n digite a Data do voo: ");
        scanf("%s", &DataVoo[linha]);
        fflush(stdin);

        printf("\n digite a hora do voo: ");
        scanf("%s", &HoraVoo[linha]);
        fflush(stdin);

        printf("\n digite o tempo do voo: ");
        scanf("%s", &TempoVoo[linha]);
        fflush(stdin);

        printf("\n digite 1 para continuar cadastrando ou 0 para voltar ao menu:");
        scanf("%d", &op);
        linha++;
        printf("\n\n");

    }while(op==1);

    if(op!=0){
        printf("opcao invalida/n voltando ao menu/n");
        menu();
    }
    else{
    menu();
    }
}

void pesquisa(){
    int NumVooPesquisa;
    int i, cont;
    do{
            cont=0;
            printf("\n\n");
            printf("digite o numero do voo: ");
            scanf("%i", &NumVooPesquisa);
            if(NumVooPesquisa==0)
                {
                printf("opcao invalida \n");
            }
            else{
                for(i=0; i<T; i++){
                    if(NumVoo[i]==NumVooPesquisa){
                        printf("\n numero do voo: %d", NumVoo[i]);
                        printf("\n quantidade de passageiros a bordo: %d",PassageirosVoo[i]);
                        printf("\n Aeroporto de saida: %s", AeroportoSaida[i]);
                        printf("\n Aeroporto de chegada: %s", AeroportoChegada[i]);
                        printf("\n Rota do Avião: %s", Rota[i]);
                        printf("\n Data do voo: %s", DataVoo[i]);
                        printf("\n hora do voo: %s", HoraVoo[i]);
                        printf("\n tempo do voo: %s \n", TempoVoo[i]);
                    cont++;
                    }
                }
            }
            if(cont==0){
                printf("numero de voo nao encontrado!\n");
            }

        printf("digite 1 para continuar pesquisando ou 0 para voltar ao menu: ");
        scanf("%d", &op);
    }while(op==1);

    if(op!=0){
        printf("opcao invalida/n voltando ao menu/n");
        menu();
    }
    else{
    menu();
    }
}

void excluir(){
    int numApagar;
    do{ printf("Digite o numero do voo que deseja apagar\n");
    scanf("%i",&numApagar);
    for(int i=0;i<T;i++){
        if(numApagar == NumVoo[i]){
            printf("Apagou o voo %i\n",numApagar);
            NumVoo[i] = 0;
        }
    }
    printf("digite 1 para continuar apagando ou 0 para voltar ao menu: ");
    scanf("%d", &op);

}while(op==1);

    if(op!=0){
        printf("opcao invalida/n voltando ao menu /n");
        menu();
    }
    else{
    menu();
    }
}
void listar(){
    int i;
    do{
    for(i=0;i<T;i++){
        if(NumVoo[i]>0){
            printf("\n numero do voo: %d", NumVoo[i]);
            printf("\n quantidade de passageiros a bordo: %d",PassageirosVoo[i]);
            printf("\n Aeroporto de saida: %s", AeroportoSaida[i]);
            printf("\n Aeroporto de chegada: %s", AeroportoChegada[i]);
            printf("\n Rota do Avião: %s", Rota[i]);
            printf("\n Data do voo: %s", DataVoo[i]);
            printf("\n hora do voo: %s", HoraVoo[i]);
            printf("\n tempo do voo: %s \n", TempoVoo[i]);
            printf("\n\n");
        }
    }
    printf("digite 1 para listar novamente ou 0 para voltar ao menu: ");
    scanf("%d", &op);

    }while(op==1);
    if(op!=0){
        printf("opcao invalida/n voltando ao menu /n");
        menu();
    }
    else{
    menu();
    }
}
