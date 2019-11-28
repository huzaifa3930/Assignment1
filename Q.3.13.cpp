#include <iostream>
#include <string>
using namespace std;
class Account {

public:

   Account( string accountName, int initialBalance )
      : name{ accountName } {

      if ( initialBalance > 0 )
         balance = initialBalance;
   }

   void deposit( int depositAmount ) {
      if ( depositAmount > 0 )
         balance = balance + depositAmount;
   }

   void withdraw( int withdrawAmount ) {
      if ( withdrawAmount > balance )
        cout << "Withdrawal amount exceeded account balance.\n";
      if ( withdrawAmount <= balance )
         balance = balance - withdrawAmount;
   }

   int getBalance() const {
      return balance;
   }

   void setName( string accountName ) {
      name = accountName;
   }

   string getName() const {
      return name;
   }

private:

   std::string name;
   int balance{ 0 };
};
void displayAccount( Account accountToDisplay ) {
   cout << "Name: "<<accountToDisplay.getName() <<endl<< "balance: "<< accountToDisplay.getBalance() << endl;
}

main() {

   Account account1( "Zee1", 500 );
   Account account2( "Zee2", 100 );
   cout<<"\tWelcome to MCB "<<endl;
   cout << "Account 1: "<<endl; 
   displayAccount( account1 );
   cout << "\nAccount 2: "<<endl; 
   displayAccount( account2 );

   int depositAmount;

   cout << "\n\nEnter deposit amount for Account 1: ";
   cin >> depositAmount;

   cout << "\n" <<depositAmount << "Added to Account 1 balance\n\n";
   account1.deposit( depositAmount );

   cout << "Account 1: "<<endl; 
   displayAccount( account1 );
   cout << "\nAccount 2: "<<endl; 
   displayAccount( account2 );

   cout << "\n\nEnter deposit amount for account 2: ";
   cin >> depositAmount;

   cout << "\n" << depositAmount << "Added to Account 2 balance\n\n";
   account2.deposit( depositAmount );
   
   cout << "Account 1: "<<endl; 
   displayAccount( account1 );
   cout << "\nAccount 2: "<<endl; 
   displayAccount( account2 );
}
