//
//  SLList.cpp
//  cpp
//
//  Created by 林跃南 on 15/8/9.
//  Copyright (c) 2015年 N.Jack. All rights reserved.
//

#include "SLList.h"

SLList::~SLList()
{
    for (SLLNode* p; !isEmpty(); ) {
        p = head->next;
        delete head;
        head = p;
    }
}

void SLList::addToHead(int info)
{
    head = new SLLNode(info,head);
    if (tail == NULL) {
        tail = head;
    }
}

void SLList::addToTail(int info)
{
    if (tail != NULL) {
        tail->next = new SLLNode(info);
        tail = tail->next;
    }
    else
        head = tail = new SLLNode(info);
}

int SLList::deleteFromHead()
{
    int info = head->info;
    SLLNode* tmp = head;
    if (head == tail) {
        head = tail = NULL;
    }
    else
        head = head->next;
    delete tmp;
    return info;
}

int SLList::deleteFromTail()
{
    int info = tail->info;
    if (head == tail) {
        delete head;
        head = tail = NULL;
    }
    else
    {
        SLLNode* tmp;
        for (tmp = head; tmp->next != tail; tmp = tmp->next) {
            ;
        }
        delete tail;
        tail = tmp;
        tail->next = NULL;
    }
    return info;
    
}

void SLList::deleteNode(int info)
{
    if(head != NULL)
    {
        if (head == tail && head->info == info) {
            delete head;
            head = tail = NULL;
        }
        else if (info == head->info)
        {
            SLLNode* tmp = head;
            head = head->next;
            delete tmp;
        }
        else
        {
            SLLNode *pred,*tmp;
            for (pred = head , tmp = head->next;
                 tmp != NULL && tmp->info != info;
                 pred = pred->next , tmp = tmp->next) {
                ;
            }
            
            if (tmp != NULL) {
                pred->next = tmp->next;
                if (tmp == tail) {
                    tail = pred;
                }
                delete tmp;
            }
            
        }
    }
}

bool SLList::isInList(int info)
{
    SLLNode* tmp;
    for (tmp = head; tmp != NULL && !(tmp->info == info); tmp = tmp->next) {
        ;
    }
    return tmp != NULL;
}










