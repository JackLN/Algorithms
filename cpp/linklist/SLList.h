//
//  SLList.h
//  cpp
//
//  Created by 林跃南 on 15/8/9.
//  Copyright (c) 2015年 N.Jack. All rights reserved.
//

#ifndef __cpp__SLList__
#define __cpp__SLList__

#include <stdio.h>

class SLLNode {
public:
    
    SLLNode()
    {
        info = 0;
    }
    SLLNode(int info , SLLNode* node = NULL)
    {
        info = info;
        next = node;
    }
    
    int info;
    SLLNode* next;
};

class SLList {
public:
    				
    SLList(){
        head = NULL;
        tail = NULL;
    }
    ~SLList();
    
    bool isEmpty()
    {
        return head == NULL;
    }
    
    void addToHead(int);
    void addToTail(int);
    
    int deleteFromHead();
    int deleteFromTail();
    
    void deleteNode(int);
    bool isInList(int);

    
private:
    
    SLLNode *head,*tail;
    
};




#endif /* defined(__cpp__SLList__) */
