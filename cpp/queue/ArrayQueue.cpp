//
//  ArrayQueue.cpp
//  cpp
//
//  Created by 林跃南 on 15/8/14.
//  Copyright (c) 2015年 N.Jack. All rights reserved.
//

#include "ArrayQueue.h"

template <class T,int size>
void ArrayQueue<T,size>::enqueue(T t)
{
    if (!isFull())
    {
        if(last == size - 1 || last == -1)
        {
            storage[0] = t;
            last = 0;
            if (first == -1) {
                first == 0;
            }
        }
        else storage[++last] = t;
    }
    else
    {
        std::cout << "full !" << std::endl;
    }
}

template <class T,int size>
T ArrayQueue<T,size>::dequeue()
{
    T tmp;
    tmp = storage[first];
    
    if (first == last)
    {
        first = last = -1;
    }
    else if(first == size - 1)
    {
        first = 0;
    }
    else first++;
    
    return tmp;
}