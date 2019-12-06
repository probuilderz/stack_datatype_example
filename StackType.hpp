/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StackType.hpp
 * Author: fofan
 *
 * Created on October 26, 2019, 8:07 PM
 */

#ifndef STACKTYPE_HPP
#define STACKTYPE_HPP

#include<iostream>
#include<cstdio>
#include<list>

#include "NodeType.hpp"

class StackType
{
private:
    NodeType * minElt;
    NodeType * topPtr;
    std::list<int> listMin;
public:
    StackType();
    ~StackType();
    void push(int x);
    void pop();
    bool isEmpty();
    bool isFull();
    int getMin();
    int getTop();
    void makeEmpty();
    
    // other solutions
    void push1(int x);
    void pop1();
};
#endif /* STACKTYPE_HPP */
