/*

g++ -c main.cpp
 g++ -c Account.cpp
 g++ -c Saving_Account.cpp
g++ -c Account_Utility.cpp
g++ main.o Account.o Saving_Account.o Account_utility.o -o main
./main
*/

#include<iostream>
#include<vector>
#include "Saving_Account.h"
#include "Account_utility.h"
#include<iomanip>
int main(){
    std::cout.precision(2);
    std::cout<<std::fixed;

    //Accounts
    std::vector<Account>accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe",2000});
    accounts.push_back(Account{"curly",5000});

    display(accounts);
    deposit(accounts,1000);
    withdraw(accounts,2000);

    //savings
     std::vector<Saving_Account>account;
    account.push_back(Saving_Account{});
    account.push_back(Saving_Account{"supperman"});
    account.push_back(Saving_Account{"batman",2000});
    account.push_back(Saving_Account{"wonderwomen",5000,5.0});


    display(accounts);
    deposit(accounts,1000);
    withdraw(accounts,2000);
    return 0;
}