#include <stdio.h>

typedef enum{
    CPF = 1,
    CNPJ = 2
} TIPO_DOC;

typedef union{
    char cpf[12];
    char cnpj[15];
} Documento;

typedef struct {
    char nome[50];
    TIPO_DOC tipoDoc;
    Documento doc;
} Cliente;

int main(){
    int tipo;
    //Documento doc;
    Cliente c;

    printf("informe o tipo do documento(1-CPF, 2-CNPJ):");
    scanf("%d", &c.tipoDoc);
    
    if(c.tipoDoc == CPF){
        scanf("%s", c.doc.cpf);
    }
    else{
        scanf("%s", c.doc.cnpj);
    }
    printf("Informe o nome do cliente: ");
    scanf("%s", c.nome);
    if(c.tipoDoc == CPF){
        printf("NOME=[%s]CPF=[%s]", c.nome, c.doc.cpf);
    }else{
        printf("NOME=[%s]CNPJ=[%s]", c.nome, c.doc.cnpj);
    }


    return 0;
}