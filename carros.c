int main(){
    int custototal;
    int custofabrica;
    int revendedor;
    int impostos;

    printf("Qual o custo de fabrica?\n");
    scanf("%d", &custofabrica);
    impostos=(custofabrica*0.45);
    revendedor=(custofabrica*0.25);
    custototal=(custofabrica+revendedor+impostos);
    printf("Vc otario vai pagar %d", custototal);
}