//
//  PE3.cpp
//  Wk11_ch9
//
//  Created by Mason Fisher on 11/10/18.
//  Copyright © 2018 Mason Fisher. All rights reserved.
//

#include "../../Classes/Validation.h"
#include "../../Classes/OrderedListType.h"

int main(){
    OrderedListType<int> list;
    Validation check;
    int num;
    check.out("Input the number of items you'd like to insert into the list.");
    num = check.numb(num, 1,100);
    int value;
    for(int i = 0; i < num; i++){
        check.out("Item "+to_string(i+1)+": ");
        value = check.numb(value);
        list.insertOrd(value);
        check.out("The list holds: ",'x');
        list.print();
    }
        
    return 0;
}

