#                 Linked list Class

### Methods

- [len()](#len)
- [isempty()](#isempty)
- [str_list()](str_list)
- push_head()
- push_tail()
- change_head()
- reverse()
- add_number()
- minus_number()
- print_list()
- merge()
- search()
- remove_duplix()
- count



### len()

to check the length of the linked list

#### perducode implementation

```c++
int count;
Node *temp=head;
while(temp)
{
    coun=count+1;
    temp=next temp
}
return count;
```



### isempty()

check if the linked list is empty by using the length function

#### perducode implementation

```C++
return if len()==0
```



### str_list()

Take  a string data type and  push every element of it into the linked list

```C++
Node *temp=head;
while(temp)
{
    string s;
    push_tail(s);
}
```

The reason for using string s first: if the a string type is push into the linked list directly, it will be converted to the corresponding integer. Since there will another push_tail() function which will take a int type as an argument
