#include "Saving_Account.h"
Saving_Account::Saving_Account(std::string name,double balance, double int_rate):Account{name,balance},int_rate{int_rate}{
//passing the arguments to the base class constructor Account(name, balance) will take care;

}
bool Saving_Account::deposit(double amount){
    amount+=amount*(int_rate/100);
    return Account::deposit(amount);//return the wahtever the dopisit() method returing ..
}
std::ostream &operator << (std::ostream &os, const Saving_Account &account){
    os << "[Saving Account:"<<account.name<<":"<<account.balance<<","<<account.int_rate<<"%]";
    return os;
}