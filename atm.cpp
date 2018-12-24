#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//#include<conio.h>
//globally defining values
char name[100],email[50],address[100];
float amount=0,deposit=0,withdraw=0;
float age=18;
double contact;
//amount is used to show actual balance
//deposit tells how much amount you want to add
//withdraw tells how much amount you want to withdraw
int  account_type=0;
int  checkaccount()
{   char c;
    cout<<"\nWhich type of account[Savings/Current Account]? \n Enter for savings {S}/current {C} : ";
    cin>>c;
   if (c != 'c' || c != 'c')
       {   
            cout<<"Thanks, account is savings account.\n";
            // savings for 0
            account_type=0;
       }
   else
       {
            cout<<"Thanks, account is current account. \n";
            //current for 1
            account_type=1;
       }
    return 0;
}
void insert_info()
{   
    cout<<"\nEnter your Name:";
    cin.getline(name,50);
    cout<<"\nEnter your Age:";
    cin>>age;
    cout << "\nEnter your Email I-D:"; 
    //can made it optional so just have to put a loop
    cin.getline (email , 20);
    cout <<"\nEnter your Address:";
    cin.getline(address,100);
    cout<<"\nEnter your Contact Details:";
    cin>>contact;
}
inline void display_info()
{   cout<<"\n-----ACCOUNT DETAILS-----\n"; 
    cout<<"\n\nNAME: "<<name<<endl<<"AGE: "<<age<<endl<<"EMAIL_ID: "<<email<<"\nContact: "<<contact<<"\nAddress: "<<address<<endl;
}
void deposit_amount()
{   
    cout<<"How much amount you want to deposit in your account?"<<endl<<"Enter the amount:";
    cin>>deposit;
    cout<<"Deposited amount :"<<deposit<<endl;
    amount=amount+deposit;
}
void withdraw_amount()
{
    float withdrawal;
    cout<<"Enter amount to be withdrawn:\n";
    cin>>withdrawal;
    if(amount>=1000)
      {  if(account_type==0)
        {   if(withdrawal<=20000)
            {
                amount=amount-withdrawal;
            }
            else
            {
            cout<<"The amount can't be withdrawn\n";
            }
        }
   else
    {   if(withdrawal<=20000)
        {
             amount=amount-withdrawal;
        }
        else
        {
        cout<<"The amount can't be withdrawn\n";
        }
    }
     }
   else
   {cout<<"\nAmount can't be withdrwan\n";}
}

inline int display_amount()
{   
     cout<<"Your, Account balance is: " <<amount<<endl;
    return 0;
} 
void create_account()
{   cout<<"\n \nThanks, for joining the BANK ! \n First of all you have to choose your account type : \n";
    checkaccount();
    insert_info();
    cout<<"Initially, you have to deposit Rs.1000 in your account\n";
    deposit_amount();
    cout<<"\nAccount Created\n";
}   
/*void update_info()
{   char update;
    cout<<"\nAre you sure of updating information [Y/N] :"
    cin>>update;
    if()
    {   
        cout<<"\nWhich creditential you want to update?";
*/        
int main()
{   int i=0; //for loops
    char choice;
    cout<<"----------Welcome to ***** Bank----------\n";
    cout<<"You can perform various options available:\n";
    cout<<"Enter 1: For Creating an account\nEnter 2: For displaying amount information\nEnter 3: For depositing money\nEnter 4: For withdrwaing money\nEnter 5: For displaying amount";
    do
    {
        cout<<"\nPlease Enter your choice:";
        cin>>i;
        switch(i)
        {
            case 1 :    
                            create_account();
                            break;
           case 2 :    
                            display_info();
                            break;
           case 3 :    
                            deposit_amount();
                            break;
           case 4 :    
                            withdraw_amount();
                            break;
           case 5 :    
                            display_amount();
                            break;
           default : 
                            cout<<"INVALID OPTION ENCOUNTERED !!\n";
                            break;
        }          
    cout<<"\nDo you want to continue? \n[If you wish to continue press 'y',else enter 'n']\n -:";
    cin>>choice;
    }
    while(choice == 'y' || choice == 'Y');
//there is a bug with strings    while(choice[10] == 'n' || choice[10] == 'N');
    
   /* insert_info();
    display_info();
    withdraw_amount();
    */
    return 0;
} 
//need to add functions 
//need to make an another cpp with class intoduction and using this as functions by including the file
//
