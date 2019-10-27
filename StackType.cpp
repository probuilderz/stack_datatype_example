/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "StackType.hpp"

StackType::StackType()
{
    topPtr = NULL;
    minElt = new NodeType;
    listMin = {};
}
StackType::~StackType()
{
    StackType::makeEmpty();
}
void StackType::push(int x)
{
    NodeType * newItem;
    if (StackType::isFull())
    {
        std::cout << "Stack is full" << std::endl;
        return;
    }else if (StackType::isEmpty())
    {
        newItem = new NodeType;
        newItem->info = x;
        newItem->next = topPtr;
        topPtr = newItem;
        minElt->info = x;
        std::cout << "Item inserted is:" << x << std::endl;
    }else if (minElt->info < x)
    {
        newItem = new NodeType;
        newItem->info = x;
        newItem->next = topPtr;
        topPtr = newItem;
        std::cout << "Item inserted is:" << newItem->info << std::endl;
    }else
    {
        newItem = new NodeType;
        newItem->info = 2 * x - minElt->info;
        minElt->info = x;
        newItem->next = topPtr;
        topPtr = newItem;
        std::cout << "Item inserted is:" << minElt->info << std::endl;
    }
}
void StackType::pop()
{
    if (StackType::isEmpty())
    {
        std::cout << "Stack is empty" << std::endl;
        return;
    }
    
    NodeType * newItem = new NodeType;
    newItem = topPtr;
    //std::cout << "newItem is:" << newItem->info << std::endl;
    topPtr = topPtr->next;
    //std::cout << "TopPtr item:" << topPtr->info << std::endl;
    
    if (newItem->info > minElt->info)
    {
        std::cout << "Top item Removed is:" << newItem->info << std::endl;
        (topPtr->info > minElt->info)? std::cout << "Next Top item is:" << topPtr->info : std::cout << "Next Top item is:" << minElt->info  << std::endl;
        delete newItem;
    }else
    {
        minElt->info = 2 * minElt->info - newItem->info;
        std::cout << "Top item Removed is:" << (newItem->info + minElt->info)/2 << std::endl;
        std::cout << "Next Top item is:" << topPtr->info << std::endl;
        std::cout << "Next min is:" << minElt->info << std::endl;
        delete newItem;
    }
    
}
bool StackType::isEmpty()
{
    return (topPtr == NULL);
}
bool StackType::isFull()
{
    NodeType * newNode = new NodeType;
    if(newNode != NULL)
    {
        delete newNode;
        return false;
    }else{
        return true;
    }

}
int StackType::getMin()
{
    return minElt->info;
}
void StackType::makeEmpty()
{
    NodeType * temp;
    while (topPtr != NULL)
    {
        temp = topPtr;
        topPtr = temp->next;
        delete temp;
    }
        
}
void StackType::push1(int x)
{
    NodeType * newItem, *newMin;
    if (StackType::isFull())
    {
        std::cout << "Stack is full" << std::endl;
        return;
    }else if (StackType::isEmpty())
    {
        newItem = new NodeType;
        newItem->info = x;
        newItem->next = topPtr;
        topPtr = newItem;
        minElt = topPtr;
        listMin.push_front(minElt->info);
        std::cout << "Item inserted is:" << x << std::endl;
    }else if (minElt->info < x)
    {
        newItem = new NodeType;
        newItem->info = x;
        newItem->next = topPtr;
        topPtr = newItem;
        std::cout << "Item inserted is:" << newItem->info << std::endl;
    }else
    {
        
        newItem = new NodeType;
        newItem->info = x;
        minElt->info = x;
        listMin.push_front(minElt->info);
        newItem->next = topPtr;
        topPtr = newItem;
        std::cout << "Item inserted is:" << newItem->info << std::endl;
    }
}
void StackType::pop1()
{
    if (StackType::isEmpty())
    {
        std::cout << "Stack is empty" << std::endl;
        return;
    }
    
    NodeType * newItem = new NodeType;
    newItem = topPtr;
    topPtr = newItem->next; //topPtr->next
    
    for( auto c=listMin.begin(); c !=listMin.end(); c++)
    {
        if (newItem->info == *c)
        {
            listMin.erase(c);
            minElt->info = *listMin.begin();
            std::cout << "Top item Removed is:" << newItem->info << std::endl;
            delete newItem;
            
        }else if (newItem->info != *c)
        {
            std::cout << "Top item Removed is:" << newItem->info << std::endl;
            delete newItem;
        }
    }
}
