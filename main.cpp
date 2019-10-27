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
#include "StackType.hpp"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cout << "Solution modified stack to keep track of minimum item "<< endl;
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
    
    return 0;
}

