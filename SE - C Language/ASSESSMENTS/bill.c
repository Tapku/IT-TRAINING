//Demonstratation of a Food Billing System...
#include<stdio.h>
int main(){
    int n;
    int q;
    char ch;
    int tot=0;
    int temp=0;
    printf("\n Welcome to Y.A \n");
    printf("\n****************************************\n");
    again://label of goto statement..
    printf("\n         Menu       \n");
    printf("\n****************************************\n");
    printf("\n(1)Sandwich      price=110/-\n(2)Pizza     price=250/-\n(3)Burger    price=90/-\n(4)Noodles    price=160/-\n");
    printf("\n****************************************\n");

    printf("Enter no. of item from  1 to 4: ");
    scanf("%d",&n);
    if(n>0 && n<=4){
    switch(n){
        case 1:
        printf("\nYou just selected Sandwich.\n");
        printf("\nQuantity:-\n");
        scanf("%d",&q);
        if(q>=1){
            q=110*q;
        }
        printf("\nAmount of Sandwich =%d\n",q);
        break;//end of case 1...
    //**************************************** 
        case 2:
        printf("\nYou just selected pizza.\n");
        printf("\nQuantity:- \n");
        scanf("%d",&q);
        if(q>=1){
            q=250*q;
        }
        printf("Amount=%d\n",q);
        break;//end of case 2...
    //****************************************
        case 3:
        printf("\nYou just selected Burger.\n");
        printf("\nQuantity:- \n");
        scanf("%d",&q);
        if(q>=1){
            q=90*q;
        }
        printf("\nAmount=%d\n",q);
        break;//end of case 3...
    //**************************************** 
        case 4:
        printf("\nYou have selected Noodles.\n");
        printf("\nQuantity:- \n");
        scanf("%d",&q);
        if(q>=1){
            q=160*q;
        }
        printf("\nAmount=%d\n",q);
        break;//end of case 3...
    //**************************************** 
        default:
        printf("\n*******Incorrect selection*****\n");
        }//end of switch case..
    }
    else{
        printf("\n::choose from 1 to 4 only::\n");
        goto again;
    }

    // int temp[10]=n;// for storing value of like 1
   
    tot+=q;
    q=0;
    printf("Total Amount=%d\n",tot);

    printf("\n\nDO YOU WANT TO ORDER MORE?\n YES=Y \n NO=N\n\n");
    scanf(" %c", &ch);
    
    if(ch=='y' || ch=='Y'){
        printf("\n\n\n\nYOU ORDERING AGAIN::\n");
        goto again;
    }
    else{
        // printf("Your orders are:-");
        printf("\n\nThanks for ordering \n\n\n Your order is processing.....");
    }
}