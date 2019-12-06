/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: fofan
 *
 * Created on October 26, 2019, 6:10 PM
 */

#include <cstdlib>
//#include<bits/stdc++.h>
#include<stack>
#include "StackType.hpp"

using namespace std;

/*
 * 
 */
bool BalancedLR(string expr) 
{ 
    stack<char> s; 
    char x; 
  
    // Traversing the Expression 
    for (int i=0; i<expr.length(); i++) 
    { 
        if (expr[i]=='('||expr[i]=='['||expr[i]=='{') 
        { 
            // Push the element in the stack 
            s.push(expr[i]); 
            continue; 
        } 
  
        // IF current current character is not opening 
        // bracket, then it must be closing. So stack 
        // cannot be empty at this point. 
        if (s.empty()) 
           return false; 
  
        switch (expr[i]) 
        { 
        case ')': 
  
            // Store the top element in a 
            x = s.top(); 
            s.pop(); 
            if (x=='{' || x=='[') 
                return false; 
            break; 
  
        case '}': 
  
            // Store the top element in b 
            x = s.top(); 
            s.pop(); 
            if (x=='(' || x=='[') 
                return false; 
            break; 
  
        case ']': 
  
            // Store the top element in c 
            x = s.top(); 
            s.pop(); 
            if (x =='(' || x == '{') 
                return false; 
            break; 
        } 
    } 
  
    // Check Empty Stack 
    return (s.empty()); 
} 
bool Balanced(string expr) 
{ 
    stack<char> s; 
    char x; 
  
    // Traversing the Expression 
    for (int i=0; i<expr.length(); i++) 
    { 
        if (expr[i]=='('||expr[i]=='['||expr[i]=='{') 
        { 
            // Push the element in the stack 
            s.push(expr[i]); 
            continue; 
        } 
  
        // IF current current character is not opening 
        // bracket, then it must be closing. So stack 
        // cannot be empty at this point. 
        if (s.empty()) 
           return false; 
  
        switch (expr[i]) 
        { 
        case ')': 
  
            // Store the top element in a 
            x = s.top(); 
            s.pop(); 
            if (x=='{' || x=='[') 
                return false; 
            break; 
  
        case '}': 
  
            // Store the top element in b 
            x = s.top(); 
            s.pop(); 
            if (x=='(' || x=='[') 
                return false; 
            break; 
  
        case ']': 
  
            // Store the top element in c 
            x = s.top(); 
            s.pop(); 
            if (x =='(' || x == '{') 
                return false; 
            break; 
        } 
    } 
  
    // Check Empty Stack 
    return (s.empty()); 
} 

int main(int argc, char** argv) {

//    cout << "Solution modified stack to keep track of minimum item "<< endl;
//    StackType myStack;
//    myStack.push(5);
//    myStack.push(6);
//    myStack.push(7);
//    cout << "Get Min: " << myStack.getMin() << endl;
//    myStack.push(4);
//    cout << "Get Min: " << myStack.getMin() << endl;
//    myStack.push(8);
//    cout << "Get Min: " << myStack.getMin() << endl;
//    myStack.push(3);
//    cout << "Get Min: " << myStack.getMin() << endl;
//    myStack.push(5);
//    cout << "Get Min: " << myStack.getMin() << endl;
//    myStack.push(2);
//    cout << "Get Min: " << myStack.getMin() << endl;
//    myStack.pop();
//    cout << "Get Min: " << myStack.getMin() << endl;
//    myStack.pop();
//    myStack.pop();
    #if 0
    cout << "Using different method push1 and pop1 which does not modify the stack "<< endl;
    StackType myStack1;
    myStack1.push1(6);
    myStack1.push1(5);
    myStack1.push1(8);
    cout << "Minimum item in stack: " << myStack1.getMin() << endl;
    //myStack1.pop1();
    cout << "Minimum item in stack: " << myStack1.getMin() << endl;
    myStack1.push1(4);
    myStack1.push1(2);
    cout << "Minimum item in stack: " << myStack1.getMin() << endl;
    myStack1.pop1();
    cout << "Minimum item in stack: " << myStack1.getMin() << endl;
    cout << "Top node in stack: " << myStack1.getTop() << endl;
    myStack1.pop1();
    myStack1.pop1();
    cout << "Minimum item in stack: " << myStack1.getMin() << endl;
    cout << "Top node in stack: " << myStack1.getTop() << endl;
    myStack1.pop1();
    myStack1.pop1();
    #endif

    string s = "{(()}[])";
    if (Balanced(s)){
        cout << "Balanced";
    }else{
        cout << "Not Balanced";
    } 
    
    return 0;
}

