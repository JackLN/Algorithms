//
//  Queue.h
//  cpp
//
//  Created by 林跃南 on 15/8/14.
//  Copyright (c) 2015年 N.Jack. All rights reserved.
//

#ifndef __cpp__Queue__
#define __cpp__Queue__

#include <stdio.h>
#include <list>


using namespace std;


template <class T>
class Queue {
public:
    
    Queue(){}
    ~Queue()
    {
        clear();
    }
    
    void clear()
    {
        lst.clear();
    }
    bool isEmpty()
    {
        return lst.empty();
    }
    
    
    T& front()
    {
        return lst.front();
    }
    T dequeue()
    {
        T tmp = lst.front();
        lst.pop_front();
        return tmp;
    }
    void enqueue(T t)
    {
        lst.push_back(t);
    }
    
private:
    
    list<T> lst;
    
};

#endif /* defined(__cpp__Queue__) */
