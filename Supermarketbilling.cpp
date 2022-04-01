// BILLING PROJECT
#include<iostream>
using namespace std;
int main()
{
    // variables for items quantity
    int qB=0,qP=0,qCD=0,qFC=0,qFF=0;
    //variables for items price
    int pB=400,pP=1200,pCD=110,pFC=300,pFF=200;
    cout<<"\n\n\n\n\t\t\t\t Welcome to the COOLDUDE FOOD CORNER !";
    cout<<"\n\t\t\t\t--------------Menu---------------";
    cout<<"\n\t\t\t\t BURGER---------------PKR 400";
    cout<<"\n\t\t\t\tPIZZA-----------------PKR 1200";
    cout<<"\n\t\t\t\tCOKE------------------PKR 110";
    cout<<"\n\t\t\t\tFRIED CHIKEN----------PKR 300";
    cout<<"\n\t\t\t\tFRENCH FRIES----------PKR 200";
     cout<<"\n\t\t\t\t---------------------------";
     cout<<"Enter the Quantity of Each items to buy";
     cout<<"\t\t\t\tNumber of Burgers";
    cin>> qB;
    cout<<"\t\t\t\tNumber of Pizza :";
    cin>>qP;
    cout<<"\t\t\t\tNumber of Coke (2 L) :";
    cin>>qCD;
    cout<<"\t\t\t\tNUmber of French Fries:";
    cin>>qFF;
    //variables for total item price i.e.quantity *unit price
    int tpB =qB *pB;
    int tpP =qP *pP;
    int tpCD =qCD *pCD;
    int tpCF =qFC *pFC; 
    int tpFF =qFF *pFF;


    system("cls");
    cout<<"\n\n\n\n\t\t**************************************************************************************************************************";
    cout<<"\n\t\t\t\t\t\tCUSTOMER'S  BILL";
    cout<<"\n\t\t*********************************************************************************************************************************";
    cout<<"\n\t\tQUANTITY\t\tDESCRIPTION\t\tUNIT PRICE\t\tFINALPRICE";
    cout<<"\n\t\t"<<qB<<"\t\t\tBurger\t\t\t  400\t\t"<<"\t"<<tpB;
    cout<<"\n\t\t"<<qP<<"\t\t\tPizza\t\t\t  1200\t\t"<<"\t"<<tpP;
    cout<<"\n\t\t"<<qCD<<"\t\t\tCoke\t\t\t  110\t\t"<<"\t"<<tpCD;
    cout<<"\n\t\t"<<qFC<<"\t\t\tFried Chicken\t\t\t  300\t\t"<<"\t"<<tpCF;
    cout<<"\n\t\t"<<qFF<<"\t\t\tFrench Freis\t\t\t  200\t\t"<<"\t"<<tpFF;
    return 0; 
}