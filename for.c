int main(){
    int n, num, sum, i;
    i=0;
    sum=0;
    printf("How many numbers you want to sum\n");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &num);
        sum+=num;
    }
    printf("The sum is %d", sum);
}
