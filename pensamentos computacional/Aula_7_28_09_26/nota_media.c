
#include <stdio.h>
int main()
{
int alunos;
float nota, soma = 0.0f, media;
do{
    } 
printf("Quantidade de aluno: ");
scanf("%d",&alunos);
if(alunos<= 0) {
printf("Quantidade Inválida de alunos! \n");
        }
while(alunos<=0);
for (int i = 1; i<=alunos;i++){
do{
printf("Digite a nota do aluno %d: ", i );
scanf ("%f", &nota);
if(nota <0 || nota >10){
printf("nota Invalida, Digite novamente!: ");
            }
        }while(nota<0 || nota>10);
        soma 
    }
+= nota;
    media = nota/alunos;
printf("A media da turma é: %.2f \n", media);
return 0;
}