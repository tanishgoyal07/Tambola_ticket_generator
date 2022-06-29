
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
// #include <unistd.h>

#define randrange(N) rand() / (RAND_MAX/(N) + 1)
#define MAX 90              /* Random generating values will be in the range (1 .. MAX) */
static int randNum[90];          //after ticket generation we have to generate 90 random numbers in the range (1-90)
int numb[MAX];

int main()
{
    int a;
    char ch;
    srand((unsigned)time(NULL));
    system("cls");
    printf("\n\n  *WELCOME TO THE HOUSIE GAME*  \n");
    printf("\n\n  -x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x- \n");
    printf("\n\n  *THE RULES ARE SIMPLE*  \n");
    printf("\n\n  -x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x- \n");
    printf("\n\n  *EACH PLAYER WILL BE PROVIDED WITH A VIRTUAL TICKET, IN WHICH THERE WILL BE 15 RANDOM NUMBERS PLACED IN RANDOM PLACES*  \n");
    printf("\n\n  *COMPUTER WILL GENERATE 90 NUMBERS STARTING FROM 1* \n");
    printf("\n\n  -x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x- \n");
    printf("\n\n  *IN ORDER TO WIN YOU HAVE TO CUT ALL THE NUMBERS IN THE TICKET, ACCORDING TO THE CALLER* \n");
    printf("\n\n  -x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x- \n");
    printf("\n\n                      *LETS START THE HOUSIE GAME*             \n");    //beṇggining of our game
    printf("\n\n     *PLEASE ENTER THE NUMBER OF PLAYERS THAT ARE PLAYING RIGHT NOW*     \n");
    scanf("%d",&a);
    
    printf("\n----------------- Tickets for %d players are as follows -----------------\n",a);       // displaying tickets for all players
    for(int x =1; x<=a; x++)                      // to generate 6 random tickets
    {
        int i ,j ,k,pos;
        int tambola[3][9];    //represent tambola ticket
        int posr[5];     //to store random positions in one row of ticket
        //initialze tambola ticket values to zero
        for( i =0 ; i< 3; i++)
        {
            for (j=0; j<9; j++)
            {
                tambola[i][j] = 0;
            }
        }
        //to generate new set of values every time
        // to find out random 15 positions in the tambola ticket
        for(i=0; i<3;i++)    // i represents row
        {
            if ((i == 0) || (i ==2))   // first and third row
            {
                for ( pos=0; pos<5;pos++)
                {
                    posr[pos] = rand()%9;   //generate random value beetween 0to9
                    for( j=0; j<pos; j++)
                    {
                        if(posr[pos] == posr[j])   //checks for repeated value
                            pos--;
                    }
                    tambola[i][posr[pos]]=1;     // assign 1 to random position generated above
                }
            }
            if (i==1)   // for second row
            {
                for (j =0; j<9; j++)
                {
                    if (tambola[0][j] == 0)
                        tambola[i][j] = 1;
                }
                for (j =0; j<9; j++)
                {
                    int x;
                    x = rand()%9;
                    if(tambola[i][x] ==0)
                    {
                        tambola[i][x] = 1;
                        break;
                    }
                }
            }
        }
        // to generate random values in tambola ticket
        for(j=0;j<9;j++)   //for each column
        {
            int number[3];    // store random values for each column
            int count =0;      // number of values required in each column
            for (i=0;i<3;i++)
            number[i] =0;   // initialize to 0
            for(i=0; i<3; i++)
            {
                if (tambola[i][j] == 1)
                {
                    count++;
                }
            }
            for(k=0;k<count; k++)
            {
                if(j==0)
                {
                    number[k] = rand()%9 +1;  // random number between 1to9
                }
                else
                {
                    number[k] = rand()%10 +j*10;  // random number respective to column j
                }
                for(int l=0; l<k;l++)  // check for repeated and ordered random values
                {
                    if (number[k] == number[l])
                    {
                        k--;
                    }
                }
            }
            //sorting the generated random numbers
            int temp=0;
            for(k=0; k<count; k++)
            {
                for(int a=k+1; a<count ; a++)
                {
                    if(number[k]>number[a])
                    {
                        temp = number[k];
                        number[k]=number[a];
                        number[a]=temp;
                    }
                }
            }
            k=0;
            for(i=0;i<3;i++) // assign generated value to each column of the ticket.
            {
                if(tambola[i][j] ==1)
                {
                    tambola[i][j] = number[k++];
                }
            }
        }
        //Display of our generated tickets

        printf("\n                               Ticket %d\n",x);
        printf("-------------------------------------------------------------------------\n");
        for( i =0 ; i< 3; i++)
        {
            for (j=0; j<9; j++)
            {
                printf("| %3d\t",tambola[i][j]);
            }
                printf("|\n");
        }
        printf("-------------------------------------------------------------------------\n");
        sleep(2);
    }
    printf("\n\n  *.....PLEASE SELECT YOU TICKETS.....* \n");
    printf("\n\n       *GENERATING RANDOM NUMBERS*                \n");
    
    int z,digits[90];
  
        srand(time(NULL));
    
    
        for(int index = 0; index < 90; index++){
                    digits[index] = 1+ rand()%90;
                }

                for(int checker = 0; checker < 90; checker++){
                    for(int index = 0; index < 90; index++){
                        if(checker == index)
                            break;
                        if(digits[checker] == digits[index]){
                            digits[checker] = 1 + rand()%90;
                            checker--;
                        }
                    }
                }

                
            
                printf("\n\n--> Press 1 for the random number\n");
                printf("\n--> Press 2 if you Won the game\n");
                printf("\n--> Press 3 if you want to quit the game\n");
                for(int i = 0; i < 90; i++)
                {
                    printf("\nInput: ");
                    scanf("\n%d",&z);
                    if (z==1){
                        printf("\n---------------------");
                        printf("\n Random Number is :");
                        printf("%d ",digits[i]);
                        printf("\n---------------------\n");
                        sleep(1);
                    }
                    else{
                        break;
                    }
                    }
    printf("\n******ENTER THE NAME OF THE WINNER ******\n");
    scanf("\n%c",&ch);
    printf("\n              CONGRATULATIONS %s",ch);
    sleep(2);
    printf("\n\n--------------------------");
    
    printf("\nCREATED BY -->");
    printf("\nPRANAV DHIMAN");
    printf("\nVEER KUMAR");
    printf("\nTANSIH");
    printf("\nHARSH GUPTA");
    printf("\n----------------------------");
}

            

    
    

