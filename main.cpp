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

    StackType myStack;
    myStack.push(5);
    myStack.push(6);
    myStack.push(7);
    cout << "Get Min: " << myStack.getMin() << endl;
    myStack.push(4);
    cout << "Get Min: " << myStack.getMin() << endl;
    myStack.push(8);
    cout << "Get Min: " << myStack.getMin() << endl;
    myStack.push(3);
    cout << "Get Min: " << myStack.getMin() << endl;
    myStack.push(5);
    cout << "Get Min: " << myStack.getMin() << endl;
    myStack.push(2);
    cout << "Get Min: " << myStack.getMin() << endl;
    myStack.pop();
    cout << "Get Min: " << myStack.getMin() << endl;
    myStack.pop();
    myStack.pop();
    return 0;
}

