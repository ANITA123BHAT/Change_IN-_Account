#include "Account_utility.h"
//display account objects in a vector of account objects;
void display(const std::vector<Account> &accounts){
    std::cout<<"\n===============Accouts===================="<<std::endl;
    for(const auto &acc:accounts ){
        std::cout<<acc<<std::endl;
    }
}

//deposit supplied amounts to each account object in vector;
void deposit(std::vector<Account> &account, double amount){
    std::cout<<"\n ===============Deposite to Accounts======================="<<std::endl;
    for(auto &acc:account){
        if(acc.deposit(amount))
            std::cout<<"Deposited "<<amount<<"to"<<acc<<std::endl;
        else   
            std::cout<<"Failed deposite of "<<amount<<"to"<<acc<<std::endl;
    }
}
//withdraw amount from each account oject in the vector
void withdraw (std::vector<Account> &accounts, double amount){
    std::cout<<"\n ========withdrawing from accounts=============="<<std::endl;
    for(auto &acc:accounts){
        if(acc.withdraw(amount))
            std::cout<<"withdraw:"<<amount<<"from"<<acc<<std::endl;
        else    
            std::cout<<"failed for withdrawal "<<amount<<"from"<<acc<<std::endl;
    }
}


//helper function for Saving Account class
void display(const std::vector<Saving_Account> &accounts){
    std::cout<<"\n===============Accouts===================="<<std::endl;
    for(const auto &acc:accounts ){
        std::cout<<acc<<std::endl;
    }
}

//deposit supplied amounts to each account object in vector;
void deposit(std::vector<Saving_Account> &account, double amount){
    std::cout<<"\n ===============Deposite to Accounts======================="<<std::endl;
    for(auto &acc:account){
        if(acc.deposit(amount))
            std::cout<<"Deposited "<<amount<<"to"<<acc<<std::endl;
        else   
            std::cout<<"Failed deposite of "<<amount<<"to"<<acc<<std::endl;
    }
}
//withdraw amount from each account oject in the vector
void withdraw (std::vector<Saving_Account> &accounts, double amount){
    std::cout<<"\n ========withdrawing from accounts=============="<<std::endl;
    for(auto &acc:accounts){
        if(acc.withdraw(amount))
            std::cout<<"withdraw:"<<amount<<"from"<<acc<<std::endl;
        else    
            std::cout<<"failed for withdrawal "<<amount<<"from"<<acc<<std::endl;
    }
}