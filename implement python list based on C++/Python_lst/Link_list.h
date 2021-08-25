#ifndef LINK_H_
#define LINK_H_
#include<iostream>
#include<string>
using namespace std;
class Link_list;
class Node {
public:
    double data = NULL;
    string str = " ";
    Node* next = NULL;
    Link_list* link;
};
class Link_list {
    
private:
    Node* head = NULL;

public:
    Link_list();
    Link_list(const Link_list& lst);
    int fun(int n);
    int len();
    bool isempty();
    void str_list(string str);
    void push_head(double new_data);
    void push_head(string new_str);
    void push_head(const Link_list& lst);
    void push_tail( double new_data);
    void push_tail(string new_str);
    void push_tail(const Link_list& lst);
    void change_head(Node* n) { head = n; };
    void reverse();
    Node* get_head() { return head; };
    bool remove(double a);
    bool remove( string str);
    void add_number(double n);
    void minus_number(double n);
    void print_list();
    void merge(Link_list& lst);
    auto find_nth(int n)
    {
        if (len() == 0)
        {
            return -1;
        }
        else
        {

            int l = len() - 1;
            Node* current = head;
            int position = n - 1;
            if (position < 0 || position > l)
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

                if (current->data != NULL)
                {
                    int a = current->data;
                    return a;
                }
                //else if (current->data == NULL && current->str != " ")
                //{
                //    string a = current->str;
                //    return a;
                //}
                //else if (current->data == NULL && current->str == " " && current->link)
                //{
                //    return current->link;
                //}

            }
            else
            {
                return -1;
            }
        }
    }
    int search(double n);
    int search(string str);
    void remove_duplix();
    int count(double n);
    int count(string str);


};
#endif // !LINK_H_H

#pragma once
