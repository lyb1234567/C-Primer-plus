#                          Protected

### private 和protected区别

派生类可以直接访问基类的保护成员，但不能直接访问基类的私有成员。

```C++
class Brass
{
    protected:
        double balance;
};

void BrassPlus::Withdraw(double amt)
{
    if(amx<0)
        cout<<"WIthdrawal amount must be positive;"
            <<"withdrawal canceled.\n";
    else if(amt<=balance)
        balance-=amt;
    
    else if(amt<=balance+maxloan-owesBank)
    {
        double advance=amt-balance;
        owesBank+=advance*(1.0+rate);
        cout<<"Bank advice:$"<<advance<<endl;
        cout<<"Finance charge:$"<<advance*rate<<endl;
        balancce-=amt;
    }
    else
        cout<<"Credit limit exceeded.\n";
}
```

上述代码中，balance 在基类中是保护访问控制，因此在派生类BrassPlus中可以直接访问。

但缺陷就是，在基类Brass中，设置的机制是只有Deposit()和Withdraw()方法才可以修改balance,而派生类则忽略了这种保护机制。