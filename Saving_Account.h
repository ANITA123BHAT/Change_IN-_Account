#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"

//saving account is  a type of account
//adds an interest rate
//withdraw -same as a regular account;
//deposit:
    //amount supplied to deposit will be incremented by (amount*int_rate/100);
    //and then the updated amount will be deposited;
class Saving_Account:public Account{
    friend std::ostream &operator << (std::ostream &os,const Saving_Account &account);
private:
    static constexpr const char *def_nmae="Unmaed saving Account";
    static constexpr double def_balance=0.0;
    static constexpr double def_int_rate=0.0;
protected:
    double int_rate;
public:
    Saving_Account (std::string name="def_name",double balance=def_balance, double int_rate=def_int_rate);
    bool deposit(double amount);

};
#endif