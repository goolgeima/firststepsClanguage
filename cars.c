int main(){
    int totalcost;
    int factorycost;
    int salesman;
    int taxes;

    printf("What was the factory cost?\n");
    scanf("%d", &factorycost);
    taxes=(factorycost*0.45);
    salesman=(factorycost*0.25);
    totalcost=(factorycost+salesman+taxes);
    printf("Lol you gonna pay: %d", totalcost);
}
