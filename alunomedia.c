int main(){
    float nota1;
    float nota2;
    float media;
    printf("Qual a nota da primeira prova?\n ");
    scanf("%f", &nota1);
    printf("Qual a nota da segunda prova?\n ");
    scanf("%f", &nota2);
    media=(nota1+nota2)/2;
    if(media>=7){
        printf("O aluno foi aprovado");
    }
    else{
        printf("O aluno foi reprovado");
    }
}