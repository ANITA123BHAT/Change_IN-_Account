#ifndef _ACCOUNT_UTILITY_
#define _ACCOUNT_UTILITY_
#include<vector>
#include "Account.h"
#include "Saving_Account.h"

void display(const std::vector<Account> &account);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account>&accounts, double amount);

void display(const std::vector<Saving_Account> &account);
void deposit(std::vector<Saving_Account> &account, double amount);
void withdraw(std::vector<Saving_Account> &account, double amount);

#endif
