#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

   typedef struct //informações do paciente
    {
    int codigo;
     char Npet[15];
      char Ndono[25];
       char Especie[30];
        int idade;
         char sintoma[50];
          char diagnostico[150];
    }cadastro;
    
    void consulta(char Npet){
        //ponteiro direcionado para struct
        //consultar informações no file
    }

    void alterar_registro(int codigo){
        //ponteiro direcionado a struct
        //alterar informações no file
        //provavelmente será necessario switch case para selecionar o registro a ser alterado?
    }

    void remover_registro(int codigo){


    }

    int exibir_registro(){//provavelmente vai ter que abrir o file das structs para exibir os registros
        //for();
    
    }

    int main(void){
        int variavel;
        printf("        ||Menu de interacao||\n  Digite 1 para: Cadastro do seu bichinho! \n  Digite 2 para: Alterar algum registro.\n  Digite 3 para: Remover algum registro.\n  Digite 4 para: Exibir registros.\n");
            scanf("%d", &variavel);






    return 0;
    }