int main(){
    int num, contador;
    float media;
    for(contador=1; contador<6; contador++){
        printf("digite o numero e a nota do aluno %d\n", contador);
        scanf("%d", &num);
        scanf("%f", &media);
        if(media>=7){
            printf("o aluno foi aprovado");
        }
        else{
            printf("o aluno foi reprovado"\n);
        }
    }

}