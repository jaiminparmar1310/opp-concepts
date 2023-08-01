//Define a class to represent a bank account. Include the following members : 2. Member Functions  
// -To assign values  
// -To deposited an amount   
//-To withdraw an amount after checking balance   
//-To display name and balance in c++
//


#include <iostream>
#include <string>

class BankAccount 
{
  private:
    std::string accountHolderName;
    double balance;

  public:
   
    BankAccount() : accountHolderName(""), balance(0.0) {}
    void assignValues(const std::string& name, double initialBalance) 
	{
        accountHolderName = name;
        balance = initialBalance;
    }

    
    void deposit(double amount) 
	{
        if (amount > 0) 
		{
            balance += amount;
            std::cout << "Amount " << amount << " deposited successfully.\n";
        } 
		else 
		{
            std::cout << "Invalid amount for deposit.\n";
        }
    }

    void withdraw(double amount) 
	{
        if (amount > 0) 
		{
            if (balance >= amount) 
			{
                balance -= amount;
                std::cout << "Amount " << amount << " withdrawn successfully.\n";
            } 
			else 
			{
                std::cout << "Insufficient balance. Cannot withdraw.\n";
            }
        } 
		    else 
			{
            std::cout << "Invalid amount for withdrawal.\n";
        }
    }

    void display() const 
	{
        std::cout << "Account Holder Name: " << accountHolderName << std::endl;
        std::cout << "Account Balance: " << balance << std::endl;
    }
};

int main() 
{
    BankAccount myAccount;
    myAccount.assignValues("jaimin", 1000.0);
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

     myAccount.display();

    return 0;
}
