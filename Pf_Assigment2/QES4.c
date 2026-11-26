 #include <stdio.h>
 int getValidDays();
 float calculateDailySales(int fastival);
 int main(){
    int fastival;
    int i;
    int order;
    int amount;

    fastival=getValidDays();
    printf("Number of festival days: %d\n", fastival);
    printf("\nDaily Order Processing\n");
    int result=calculateDailySales(fastival);
    printf("%d",result);
    return 0;
 }
   int getValidDays(){
    int fastival;
        printf("enter the no. of fastival days:\n");
        scanf("%d",&fastival);

    while (fastival<1 || fastival>7)
    {
            printf("Again Enter No. of fastival days:\n");
            scanf("%.2f",&fastival);

    }
    return fastival;
 }
 float calculateDailySales(int fastival){
    int i,j,order=0,amount=0,total_sale=0;
    int avg=0;
    int high_amount=0;
       for(i=0;i<fastival;i++){
        printf("Day %d No. of order:\n",i+1);
        scanf("%d",&order);
        printf("Order Amount:\n");
        for(j=0;j<order;j++){
            scanf("%d",&amount);
            total_sale=total_sale+amount;
            if(high_amount<amount){
            high_amount=amount;
        }
        }

        avg=total_sale/order;
        printf("avg total sale =%d\n",avg);
        printf("highest amount =%d\n",high_amount);
    }
    return total_sale;
 }