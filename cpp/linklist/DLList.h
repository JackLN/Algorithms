//
//  DLList.h
//  cpp
//
//  Created by 林跃南 on 15/8/12.
//  Copyright (c) 2015年 N.Jack. All rights reserved.
//

#ifndef __cpp__DLList__
#define __cpp__DLList__

#include <stdio.h>


template <class T>
class DLLNode {
public:
    
    DLLNode()
    {
        next = prev = NULL;
    }
    
    DLLNode(const T& el , DLLNode* n , DLLNode* p)
    {
        info = el;
        next = n;
        prev = p;
    }
    
    T info;
    DLLNode *next,*prev;
};


template <class T>
class DLList {
public:
    
    DLList()
    {
        head = tail = NULL;
    }
    
    void addToTail(const T&);
    T deleteFromTail();
    
protected:
    
    DLLNode<T> *head,*tail;
    
};

#endif /* defined(__cpp__DLList__) */
