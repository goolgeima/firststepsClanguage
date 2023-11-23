int main(){
    int a, b, c;
    printf("Insira dois valores: \n");
    scanf("%d%d", &a, &b);
    printf("Os valores lidos foram: a: %d\t b: %d\n", a, b);
    c=a;
    a=b;
    b=c;

    printf("Os valores invertidos são: a: %d\t b: %d", a, b);
    return 0;
}
