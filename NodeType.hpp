/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodeType.hpp
 * Author: fofan
 *
 * Created on October 26, 2019, 8:10 PM
 */

#ifndef NODETYPE_HPP
#define NODETYPE_HPP

struct NodeType
{
    int info;
    NodeType * next;
};

struct DoubleLinkedType
{
    int info;
    DoubleLinkedType * prev;
    DoubleLinkedType * next;
};
#endif /* NODETYPE_HPP */

