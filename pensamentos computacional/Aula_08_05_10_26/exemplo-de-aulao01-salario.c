int main() {
    float salario[4];
    int i = 0;

 
    for (i = 0; i < 4; i++) {
        printf("Digite o salário do %dº funcionário: ", i + 1);
        scanf("%f", &salario[i]);
    }

  
    for (i = 0; i < 4; i++) {
        printf("O funcionário %d: R$ %.2f\n", i + 1, salario[i]);
    }

    return 0;
}
