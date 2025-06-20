
//COM OPERADOR TERNARIO
#include <stdio.h>
#include <stdlib.h>
int nota, resu;
int main()
{
    printf("Digite a sua nota:\n");
    scanf("%d",&nota);

    nota < 7 ?  printf("Voce esta reprovado :(\n") :  printf("Voce esta aprovado :)\n");

    return 0;
}




//COM IF E ELSE
#include <stdio.h>
#include <stdlib.h>
int nota, resu;
int main()
{
    printf("Digite a sua nota:\n");
    scanf("%d",&nota);

    if (nota < 7)
    {
        printf("Voce esta reprovado :(\n");
    }
    else
    {
        printf("Voce esta aprovado :)\n");
    }

    return 0;
}
