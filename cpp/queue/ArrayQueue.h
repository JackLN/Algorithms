//
//  ArrayQueue.h
//  cpp
//
//  Created by 林跃南 on 15/8/14.
//  Copyright (c) 2015年 N.Jack. All rights reserved.
//

#ifndef cpp_ArrayQueue_h
#define cpp_ArrayQueue_h

#include <stdio.h>
#include <iostream>

template <class T,int size = 100>
class ArrayQueue {
public:
    
    ArrayQueue()
    {
        first = last = -1;
    }
    bool isFull()
    {
        return first == 0 && last == size - 1 || first == last + 1;
    }
    bool isEmpty()
    {
        return first == -1;
    }
    
    
    void enqueue(T);
    T dequeue();
    
    
private:
    
    int first, last;
    T storage[size];
    
};


#endif
