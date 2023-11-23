int main(){
    int n, num, soma, i;
    i=0;
    soma=0;
    printf("Insira quantos numeros serao somados\n");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &num);
        soma+=num;
    }
    printf("A soma eh %d", soma);
}