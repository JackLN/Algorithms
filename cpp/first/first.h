//
//  first.h
//  cpp
//
//  Created by 林跃南 on 15/8/7.
//  Copyright (c) 2015年 N.Jack. All rights reserved.
//

#ifndef cpp_first_h
#define cpp_first_h

#include <iostream>
#include "defaultCon.h"


using namespace std;


void start()
{
    //pointer
    int i = 10;
    std::cout << i << std::endl;
    
    int * p = &i;
    *p = 20;
    
    std::cout << i << std::endl;
    
    Node node1("lin",20),node2(node1);
    
    cout << node1.name << "  " << node1.age << endl;
    cout << node2.name << "  " << node2.age << endl;
    
    
    strcpy(node2.name, "yue");
    node2.age = 30;
    
    cout << node1.name << "  " << node1.age << endl;
    cout << node2.name << "  " << node2.age << endl;

    
    
    double re = root(func, -100, 100, 0.001);
    cout << re << endl;
    
    double res = sum2(negate<double>(), 2, 5);
    cout << res << endl;
    
    
    char* str= "djfakl";
    cout << funcStrlen(str) << endl;
    
    char a[] = "12";
    char b[] = "34";
    
//    funcStrcat(a, b);
   
    cout << funcStrcat(a, b) << endl;
    
//    int j = 10;
//    int *m,*q;
//    
//    j = *&*q;
    
//    m = &*q;
//    j = *q;
//    
//    m = &j;  //right
//    j = *&q; //wrong
//    
//    q = **&m; //wrong
//    q = *&j; //wrong
//    
//    q = &*&*&*&j; //right
//    
//    m = *&q; //right
    
//    int intArr[] = {1,2,3}, *q = intArr;
//    
//    (*q)++;
//    
//    int resule = (*q);
//    
//    cout << resule << endl;
    
}



#endif




