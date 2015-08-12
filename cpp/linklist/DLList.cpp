//
//  DLList.cpp
//  cpp
//
//  Created by 林跃南 on 15/8/12.
//  Copyright (c) 2015年 N.Jack. All rights reserved.
//

#include "DLList.h"


template <class T>
void DLList<T>::addToTail(const T& t)
{
    if (tail != NULL) {
        tail = new DLLNode<T>(t,0,tail);
        tail->prev->next = tail;
    }
    else head = tail = NULL;
}

template<class T>
T DLList<T>::deleteFromTail()
{
    T el = tail->info;
    if (head == tail) {
        delete head;
        head = tail = NULL;
    }
    else
    {
        tail = tail->prev;
        delete tail->next;
        tail->next = NULL;
    }
    
    return el;
}