int main(){
    float num1;
    float num2;
    int operacao;
    do{
     printf("\n \tDigite dois numeros: ");
     scanf("%f%f", &num1, &num2);
     printf("Qual operacao quer fazer?\n1)Soma\n2)Subtracao\n3)Multiplicacao\n4)Divisao\n5)Sair\n \t");
     scanf("%d", &operacao);
        if(operacao==1){
            printf("resposta: %f", num1+num2);
        }
        else if(operacao==2){
            printf("resposta: %f", num1-num2);
        }
        else if (operacao==3){
            printf("resposta: %f", num1*num2);
        }
        else if(operacao==4){
            printf("resposta: %f", num1/num2);
        }
    }while (operacao!=5);
    return 0;
}