//ONLINE  GROCERY  SITE  BILLING  FORMAT//

#include <stdio.h>

int main() 

{
      float bill,rate[10];
      char name[50],cname[50],date[10],adr[50],phno[10];
      int qty[10],i,j,n,cust;

printf("***********************\n");
printf("~~~~~  WELOCME  TO  DAILY  NEEDS  SUPER  MARKET  ~~~~~\n");
printf("\t\t\tOpp. NIT, Fatimanagar\n \t\t\tHanamkonda, Warangal\n");
printf("\t\t\tPhno  :  040 - 2459059\n");
printf("************************\n");
printf("\n");

printf("\t\t\t List  of  items  available  are \n");
printf("Sno  |     Item\t\t    |       Weight       |        Price   \n ");
printf("1.   Freedom  refined  sunflower  oil   1ltr     180\n ");
printf("2.   Aashirwaad wheat flour            1/2kg      60\n");
printf("3.   Sugar                             1/2kg      40\n");
printf("4.   Tata  salt                         1kg       30\n");
printf("5.   Lays (any flavour)                 1pc       20\n");
printf("6.   Good Day biscuits                  50g       10\n");
printf("7.   Santoor soaps                      1pc       12\n");
printf("8.   Colgate Toothpaste                 1pc       56\n");
printf("9.   Nivea body lotion                 1\2ltr    130\n");
printf("10.  Meera  shampoo                     1Ltr     120\n");
printf("11.  MangaldeepAggarbathi             1pc       45\n");
printf("12.  Durga  Ghee                       1/2kg     160\n");
printf("13.  Kissan  Mixed  Fruit  Jam          1pc       15\n");
printf("14.  Tropicana (juices)                1ltr      105\n");
printf("15.  Continental  Coffee  Powder       100g      140\n");
printf("16.  Himalaya  Face  wash              1pc        35\n");
printf("17.  Basmati  rice                    5kg        200\n");
printf("18.  Camel  wax  crayons              1pc         20\n");
printf("19.  Vim  dish  washing  bar          1pc         10\n");
printf("20.  Pampers                          1pc         95\n");
printf("21.  Tomato  ketchup                  10g         20\n");
printf("22.  Amul  butter                     50g         30\n");
printf("23.  Fair and Lovely  cream           1pc         40\n");
printf("24.  Dairymilk  Silk                 100g         80\n");
printf("25.  Boost                           50g          70\n");
printf("26.  Lifebuoy  Handwash              100g         65\n");
printf("27.  Hand  Sanitizers                 1pc         55\n");
printf("28.  Volini  spray                    1pc         25\n");
printf("29.  Almonds                         250g        400\n");
printf("30.  Maggie Noodles                   1pc         20\n");
printf("31.  Colgate  Toothbrush              1pc         45\n");
printf("32.  Dark  Fantasy  Bisciuts          1pc        110\n");
printf("33.  All out Mosquito  Repellent      1pc        209\n");
printf("34.  Dabur  Honey                     1kg        277\n");
printf("35.  Taj  Mahal  Tea  powder         500g        385\n");
printf("36.  Tetley  Green Tea                1pc         99\n");
printf("37.  Quacker  Oats                   1/2kg        65\n");
printf("38.  Britania cookies                 1pc         25\n");
printf("39.  Bounrvita                        1kg        390\n");
printf("40.  Nutella                         250g        199\n");

printf("************************\n");

printf("How many customers? = ");
scanf("%d",&cust);

for(i=0;i<cust;i++)
	{
		printf("\nEnter date = ");
		scanf("%s",date);
		
		printf("\nEnter the name of Customer = ");
         scanf("%s",&cname[i]);

       printf("\nEnter the Address of customer = ");
scanf("%s",&adr[i]);

printf("\nEnter the Phone number of customer = ");
scanf("%s",&phno[i]);

printf("You  can  select  your  items  from  above list\n");

printf("\nHow many items are you willing to purchase? (from 1 to 40) = ");
scanf("%d",&n);	
	}
	
	for(j=0;j<n;j++)
   {
     printf("\nEnter the %d item name = ",j+1);
       scanf("%s",&name);

     printf("\nEnter the price of item = ");
     scanf("%f",&rate[j]);

     printf("\nEnter the quantity of item = ");
     scanf("%d",&qty[j]);  
   }	

     printf("\n");
     
     printf("------------------------------------------------------------------\n"); 
     printf(" \t\t **  INVENTORY ***\n");
     printf("------------------------------------------------------------------\n");
     printf("\n");
     printf("Date = %s\n",date);

      printf("Customer name = %s\n",cname);

      printf("Address = %s\n",adr);

     printf("Phone number = %s\n",phno);

printf("------------------------------------------------------------------\n");
printf("|    NAME           |  PRICE    |           QUANTITY  \n");
printf("------------------------------------------------------------------\n");

for(j=0;j<n;j++)
    {
	printf("\n\n%s\t\t%.2f\t%d\t%.2f",name,rate[j],qty[j],rate[j]*qty[j]);
	
	bill = bill + (rate[j]*qty[j]);
	
    } 
printf("\n\n\t\t\tTotal  amount   =  %.2f  rupees  only\n",bill);

printf("<<====================   Amount  recieved   from   customer   ====================>>");

printf("\n\t\t**** Thank  You   Visit  again ****");
}
