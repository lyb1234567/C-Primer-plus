#include"Link_list.h"
#include<iostream>
#include<string>
using namespace std;
int Link_list::len()
{
    int i = 0;
    Node* temp = head;
    while (temp!=NULL)
    {
        i = i + 1;
        temp = temp->next;
    }
    return i;
}
void Link_list::print_list() {
    cout << "[";
    Node* temp = head;
    while (temp != NULL) 
    {
        if (temp->str == " " and temp->next != NULL)
        {
            cout << temp->data << ",";
        }
        else if (temp->data == NULL and temp->next!=NULL)
        {
            cout << temp->str << ",";
        }
        else if (temp->str == " " and temp->next == NULL)
        {
             cout << temp->data;
        }
        else if (temp->data == NULL and temp->next == NULL)
        {
            cout << temp->str;
        }
        temp = temp->next;
    }
    cout << "]";
}
void Link_list::push_head(double new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = head;
    head= new_node;
}
void Link_list::push_head( string new_str)
{
    Node* new_node = new Node();
    new_node->str = new_str;
    new_node->next = head;
    head = new_node;
}
void Link_list::push_tail( double new_data)
{
    Node* temp = new Node();
    temp->data = new_data;
    temp->next = NULL;
    if (head == NULL)
    {
        push_head(new_data);
    }
    else
    {
        Node* p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
}
void Link_list::push_tail( string new_str)
{
    Node* temp = new Node();
    temp->str = new_str;
    temp->next = NULL;
    if (head == NULL)
    {
        push_head( new_str);
    }
    else
    {
        Node* p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
}
void Link_list::add_number(double n)
{
    Node* temp = head;
    while (temp != NULL)
    {
        temp->data = temp->data +n;
        temp = temp->next;
    }
}
void Link_list::minus_number(double n)
{
    Node* temp = head;
    while (temp != NULL)
    {
        temp->data = temp->data - n;
        temp = temp->next;
    }
}
void Link_list::merge(Link_list& lst)
{
    Node* temp = head;
    if (lst.head != NULL)
    {
        while (temp->next!= NULL)
        {
            temp = temp->next;
        }
        temp->next = lst.head;
    }
}
bool Link_list::remove(double a)
{
    if (len() == 0)
    {
        return false;
    }
    else
    {
        Node* temp = head;
        if (len() == 1 and temp->data==a)
        {
            head= NULL;
            return true;
        }
        else if (len() == 1 and head->data != a)
        { 
            return false;
        }
        else
        {
            Node* prev = temp;
            if (temp->data == a)
            {
                head= temp->next;
                temp->next = NULL;
            }
            else
            {
                while (temp != NULL)
                {
                    if (temp->data == a)
                    {
                        prev->next = temp->next;
                        temp->next = NULL;
                        return true;
                    }
                    prev = temp;
                    temp = temp->next;
                }
                return false;
            }
        }
        

    }
}
bool Link_list::remove(string str)
{
    if (len() == 0)
    {
        return false;
    }
    else
    {
        Node* temp = head;
        if (len() == 1 and head->str == str)
        {
            head->next = NULL;
            return true;
        }
        else if (len() == 1 and head->str != str)
        {
            return false;
        }
        else
        {
            Node* prev = temp;
            if (temp->str == str)
            {
                head = temp->next;
                temp->next = NULL;
            }
            else
            {
                while (temp != NULL)
                {
                    if (temp->str == str)
                    {
                        prev->next = temp->next;
                        temp->next = NULL;
                        return true;
                    }
                    prev = temp;
                    temp = temp->next;
                }
                return false;
            }
        }


    }
}
bool Link_list::isempty()
{
    return (len() == 0);
}
int  Link_list::find_nth(int n)
{
    if (len() == 0)
    {
        return -1;
    }
    else
    {

        int l = len() - 1;
        Node* current = head;
        int position = n-1;
        if (position < 0 or position > l)
        {
            return -1;
        }
        int count = 0;
        while (count != position)
        {
            current = current->next;
            count = count + 1;
        }
        if (current != NULL)
        {
          

                return current->data;

        }
        else 
        {
            return -1;
        }
    }
}

