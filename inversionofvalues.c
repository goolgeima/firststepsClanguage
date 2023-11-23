int main(){
    int a, b, c;
    printf("Type two numbers: \n");
    scanf("%d%d", &a, &b);
    printf("The numbers are: a: %d\t b: %d\n", a, b);
    c=a;
    a=b;
    b=c;

    printf("The inverted numbers are: a: %d\t b: %d", a, b);
    return 0;
}
