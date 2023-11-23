int main(){
    int numbers = 0;
    int divisor = 2;
    int rest;
    while(numbers<20){
        rest=(numbers % divisor);
        if(rest==0){
        printf("%d\n", numbers);
    }
    numbers++;
    }
}
