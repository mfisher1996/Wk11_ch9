//
//  PE7.cpp
//  Wk11_ch9
//
//  Created by Mason Fisher on 11/10/18.
//  Copyright © 2018 Mason Fisher. All rights reserved.
//

#include "Validation.h"
#include "HashT.h"

int main(){
    hashT<int> hashList(23);
    Validation check;
    int num = 0, value = 1;
    check.out("Input the number of items you'd like to insert into the list.");
    num = check.numb(num);
    while(num > 0){
        check.out("Item " + to_string(value) + ":", 'x');
        int i = check.numb(i);
        hashList.insert((i%23), i);
        check.out("The list holds: ",'x');
        hashList.print();
        num--;
        value++;
    }
        return 0;
}
