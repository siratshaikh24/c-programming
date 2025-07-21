#include<stdio.h>
int main()

{
    float id,price1,price2,price3,qty1,qty2,qty3,total_price,discount_percentage,discount_amount,pay_amount;
    char name[10];

    FILE *fp;
    
    fp = fopen("Result.txt", "w");

    printf("Enter product id=");
    scanf("%f",&id);
    printf("Enter product name=");
    scanf("%s", &name);
    printf("Enter product price1=");
    scanf("%f", &price1);
    printf("Enter product price2=");
    scanf("%f", &price2);
    printf("Enter product price3=");
    scanf("%f", &price3);
    printf("Enter product quantity=1");
    scanf("%f",&qty1);
    printf("Enter product quantity=2");
    scanf("%f",&qty2);
    printf("Enter product quantity=3");
    scanf("%f",&qty3);

    total_price=(price1 * qty1) +(price2 * qty2) + (price3 * qty3);
    if(total_price >= 100000)
    discount_percentage=10;
    else if(total_price >= 80000)
    discount_percentage=8;
    else if(total_price >= 50000)
    discount_percentage=5;
    else if(total_price >= 30000)
    discount_percentage=2;
    else
    discount_percentage=0;

    discount_amount=(total_price * discount_percentage)/100;
    pay_amount = total_price - discount_amount;


    printf("\n---------------------------------------------------------------------");     
    printf("\n|  ID  |       Name       |   Price     |    Qty      |      Total  |");
    printf("\n----------------------------------------------------------------------");
    printf("\n|%6d|%18s|%13f|%13d|%13f|", pid1, pname1, pprice1, pqty1, (pprice1 * pqty1)); 
    printf("\n----------------------------------------------------------------------");
    printf("\n|%6d|%18s|%13f|%13d|%13f|", pid2, pname2, pprice2, pqty2, (pprice2 * pqty2)); 
    printf("\n----------------------------------------------------------------------");
    printf("\n|%6d|%18s|%13f|%13d|%13f|", pid3, pname3, pprice3, pqty3, (pprice3 * pqty3)); 
    printf("\n----------------------------------------------------------------------");
    printf("\n\t\t\t\t\tTotal                                    : %.2f", total);
    printf("\n\t\t\t\t\tDiscount Percentage                      : %.2f", disPer);
    printf("\n\t\t\t\t\tDiscount Amount                          : %.2f", disAmt);
    printf("\n\t\t\t\t\tPay Amount                               : %.2f", payAmt);


    return 0;
}
