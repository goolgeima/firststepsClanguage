int main(){
    int n, i, num, sum=0;
printf("Type the quantity: ");
scanf("%d",&n);
i = 0;
while(i<n){
scanf("%d",&num);
sum += num;
i++; 
}
printf("Sum: %d\n",sum);
}
