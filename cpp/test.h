//
//  test.h
//  cpp
//
//  Created by 林跃南 on 15/8/18.
//  Copyright (c) 2015年 N.Jack. All rights reserved.
//

#ifndef cpp_test_h
#define cpp_test_h


using namespace std;


void char_test(char * a)
{
    *a++;
    *(a++) = 'a';
    
    cout << a << endl;
}

int chicken()
{
    int count = 0;
    int n1,n2,n3;
    int money = 100;
    for (n1 = 0; n1 < money / 5 ; n1 ++) {
        for (n2 = 0 ; n2 < money / 2; n2++) {
            n3 = 100 - n1 - n2;
            if ((n3%2 == 0) && (n1*5 + n2*3 + n3/2 == 100)) {
                count ++;
            }
        }
    }
    return count;
}

void myreverse(char * dest)
{
    int n = strlen(dest);
    
    char*p;
    p = dest + n - 1;
    
    char tmp;
    
    for (int i = 0; i < n / 2; i++,*dest ++,*p--) {
        tmp = *dest;
        *dest = *p;
        *p = tmp;
    }
    
}

#endif
