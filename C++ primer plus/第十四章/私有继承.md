### 私有继承

使用私有继承，基类地公有成员和保护成员都将成为派生类地**私有成员**。这意味着基类方法不会成为派生对象公有接口的一部分，但可以在派生类的**成员函数**中使用他们

```C++
double Student::Average()const
{
    if(ArrayDb::size()>0)
        return ArrayDb::sum()/ArrayDb::size();
    else
        return 0;
}
```





### 各种继承方式

​	

| 特征             | 公有继承             | 保护继承               | 私有继承             |
| ---------------- | -------------------- | ---------------------- | -------------------- |
| 公有成员变成     | 派生类的公有成员     | 派生类的保护成员       | 派生类的私有成员     |
| 保护成员变成     | 派生类的保护成员     | 派生类的保护成员       | 派生类的私有成员     |
| 私有成员变成     | 只能通过基类接口访问 | 只能通过基类接口访问   | 只能通过基类接口访问 |
| 能否隐式向上转换 | 是                   | 是（但只能在派生类中） | 否                   |



### 使用using重新定义访问权限

使用保护派生或私有派生时，基类的公有成员将成为保护成员或私有成员。假设要让基类的方法在派生类外面可以使用，方法之一是定义一个使用该基类方法的派生类方法。

```C++
double Student::sum()const
{
    return valarray<double>::sum();
}
```

其中Student 是私有继承 valarray类的一个类



另一种方法是，将函数调用包装在另一个函数调用中，即使用一个using 声明（类似与名称空间）来指出派生类可以使用特定的基类成员，即使采用的私有派生

```C++
class Student:private string,private valarray<double>
{
    public:
       using valarray<double>::min;
       using valarray<double>::max;
};
...
cout<<"high score:"<<ada[i].max()<<endl;
```

