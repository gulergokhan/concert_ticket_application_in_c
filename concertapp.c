#include <stdio.h>
#include <stdlib.h>

void printMainMenu()
{
    printf("*************** \n OPERATIONS \n ***************\n\n");

    printf("1.Seat Info \n");

    printf("2.Update Prices \n");

    printf("3.Sell A Ticket \n");

    printf("4.Current Cash \n");

    printf("5.Quit \n");

    printf("***************\n");
}

void printSeatInformation(int a , int b , int c , int d)
{
    printf("CURRENT SEAT INFORMATION:\n");

    printf("Level A : %d\n",a);

    printf("Level B : %d\n",b);

    printf("Level C : %d\n",c);

    printf("Level D : %d\n",d);

}

void printTickets(int a , int b, int c , int d)
{
    printf("PRICES :\n");

    printf("Level A : %d\n",a);

    printf("Level B : %d\n",b);

    printf("Level C : %d\n",c);

    printf("Level D : %d\n",d);
}

void cashInfo(int x)
{
    printf("Current Cash Info : %d ",x);
}

void updateTickets()
{
     int priceA = 100, priceB = 80 , priceC = 60 , priceD = 40;

     char choose;

     int newTicketPrice;

     printTickets(priceA,priceB,priceC,priceD);

        printf("Select a level to update the prices : ");
        scanf(" %c",&choose);

        if(choose == 'A' || choose == 'a')
        {
          printf("Please enter the new price for A : ");
          scanf("%d",&newTicketPrice);

          priceA = newTicketPrice;

          printf("\nPrice for Level A is updated to %d.",priceA);

        }
        else if(choose == 'B' || choose == 'b')
        {
          printf("Please enter the new price for B : ");
          scanf("%d",&newTicketPrice);

          priceB = newTicketPrice;

          printf("\nPrice for Level B is updated to %d.",priceB);

        }
        else if(choose == 'C')
        {
          printf("Please enter the new price for C : ");
          scanf("%d",&newTicketPrice);

          priceC = newTicketPrice;

          printf("\nPrice for Level C is updated to %d.",priceC);

        }
        else if(choose == 'D' || choose == 'd')
        {
          printf("Please enter the new price for D : ");
          scanf("%d",&newTicketPrice);

          priceD = newTicketPrice;

          printf("\nPrice for Level D is updated to %d.",priceD);

        }
        else
        {
            printf("You didn't enter a valuable choosing type.Try it again.\n");
        }

}

void sell ()
{

    int priceA = 100, priceB = 80 , priceC = 60 , priceD = 40;

    char lvl;

     int lvlA = 40 , lvlB = 40 , lvlC = 40 , lvlD = 40;

     int row;

     int sum = 0;

    printSeatInformation(lvlA,lvlB,lvlC,lvlD);

      printf("Select Level : ");
      scanf(" %c",&lvl);

      if(lvl == 'A' || lvl == 'a')
      {
          printf("Enter number of tickets for Level A seats : ");
          scanf("%d",&row);

          printf("%d seat(s) sold from Level A.\n",row);

          lvlA = lvlA - row;

          sum = sum + row*priceA;

           printf("***************\n");

          printSeatInformation(lvlA,lvlB,lvlC,lvlD);
      }
      else if(lvl == 'B')
      {
          printf("Enter number of tickets for Level B seats : ");
          scanf("%d",&row);

          printf("%d seat(s) sold from Level B.\n",row);

          lvlB = lvlB - row;

          sum = sum + row*priceB;

           printf("***************\n");

          printSeatInformation(lvlA,lvlB,lvlC,lvlD);
      }
      else if(lvl == 'C' || lvl == 'c')
      {
          printf("Enter number of tickets for Level C seats : ");
          scanf("%d",&row);

          printf("%d seat(s) sold from Level C.\n",row);

          lvlC = lvlC - row;

          sum = sum + row*priceC;

           printf("***************\n");

          printSeatInformation(lvlA,lvlB,lvlC,lvlD);
      }
      else if (lvl == 'D' || lvl == 'd')
      {
          printf("Enter number of tickets for Level D seats : ");
          scanf("%d",&row);

          printf("%d seat(s) sold from Level D.\n",row);

          lvlD = lvlD - row;

          sum = sum + row*priceA;

           printf("***************\n");

          printSeatInformation(lvlA,lvlB,lvlC,lvlD);
      }
      else
      {
          printf("You didn't entered a valuable character.Please try it again.\n");
      }

}

int addMoney (int x)
{

}

int main()
{
     int priceA = 100, priceB = 80 , priceC = 60 , priceD = 40;

     int lvlA = 40, lvlB = 40 , lvlC = 40 , lvlD = 40;

     int sum = 0;

    printMainMenu();

    int operation,sold;

    printf("Select your operation : ");
    scanf("%d",&operation);

    printf("***************\n");


    if(operation == 1)
    {
        printSeatInformation(lvlA,lvlB,lvlC,lvlD);

    }
    else if(operation == 2)
    {
      updateTickets();

    }
    else if(operation == 3)
    {
      if(lvlA > 0 && lvlB > 0 && lvlC > 0 && lvlD > 0)
      {
          sell();
      }
      else
      {
          printf("We're run out of tickets.");
      }

    }
    else if (operation == 4)
    {
      printf("Current Cash Information : %d TL. ",sum);


    }
    return 0;
}
