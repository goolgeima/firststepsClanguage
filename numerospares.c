int main(){
    int numeros = 0;
    int divisor = 2;
    int resto;
    while(numeros<20){
        resto=(numeros % divisor);
        if(resto==0){
        printf("%d\n", numeros);
    }
    numeros++;
    }
}