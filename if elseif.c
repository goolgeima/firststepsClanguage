int main(){
    float num1;
    float num2;
    int op;
    do{
     printf("\n \tDType two numbers: ");
     scanf("%f%f", &num1, &num2);
     printf("Which operation do you want to do?\n1)Sum\n2)Subtraction\n3)Multiplication\n4)Division\n5)Leave\n \t");
     scanf("%d", &op);
        if(op==1){
            printf("The answer is: %f", num1+num2);
        }
        else if(op==2){
            printf("The answer is: %f", num1-num2);
        }
        else if (op==3){
            printf("The answer is: %f", num1*num2);
        }
        else if(op==4){
            printf("The answer is: %f", num1/num2);
        }
    }while (op!=5);
    return 0;
}
