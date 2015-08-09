//
//  defaultCon.h
//  cpp
//
//  Created by 林跃南 on 15/8/7.
//  Copyright (c) 2015年 N.Jack. All rights reserved.
//

#ifndef cpp_defaultCon_h
#define cpp_defaultCon_h

#include <iostream>
#include <math.h>

//node
struct Node{

    char * name;
    int age;
    
    Node(char * n = " " , int a = 0){
    
        name = strdup(n);
        age = a;
        
    }
    
    Node(const Node& n)
    {
        name = strdup(n.name);
        age = n.age;
    }
    
    Node& operator= (const Node& n)
    {
        if(this != &n)
        {
            if(name != NULL)
                free(name);
            
            name = strdup(n.name);
            age = n.age;
            
        }
        
        return *this;
    }
    
};


//function Pointer

//x*x
double multi(double x)
{
    return x*x;
};

// 1*1 + 2*2 + ... + n*n
double sum(double (*multi)(double), int n,int m)
{
    double resule = 0;
    
    for (int i = n; i < m ; i++) {
        resule += multi(i);
    }
    
    return resule;
};


//二分法求根
double func(double x)
{
    return x*x - 2;
};

double root(double (*func)(double) , double a ,double b, double epsition)
{
    double middle = (a + b) / 2;
    while (func(middle) != 0 && fabs(a-b) > epsition) {
        if(func(middle) * func(a) < 0)
            b = middle;
        else
            a = middle;
        middle = (a + b) / 2;
    }
    
    return middle;
};


//template type
template <class F>
double sum2(F f,int n,int m) {
    double result = 0;
    for (int i = n ; i < m; i++) {
        result += f(i);
    }
    return result;
}

//char * func
int funcStrlen(char * str)
{
    int result = 0;
    
    while (*str) {
        result ++;
        str ++;
    }
    
    return result;
}

char* funcStrcat(char* a,char* b)
{
    char* p = a;
    while (*a++) {
        ;
    }
    a--;
    while ((*a++ = *b++)) {
        ;
    }
    return p;
    
}





#endif
