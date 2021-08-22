#ifndef LINK_H_
#define LINK_H_
#include<iostream>
#include<string>
using namespace std;
class Node {
public:
    double data = NULL;
    string str = " ";
    Node* next = NULL;
};
class Link_list {
    
private:
    Node* head = NULL;
public:
    int len();
    bool isempty();
    void push_head(double new_data);
    void push_head(string new_str);
    void push_tail( double new_data);
    void push_tail(string new_str);
    Node* get_head() { return head; };
    bool remove(double a);
    bool remove( string str);
    void add_number(double n);
    void minus_number(double n);
    void print_list();
    void merge(Link_list& lst);
    int find_nth(int n);

};
#endif // !LINK_H_H

#pragma once
