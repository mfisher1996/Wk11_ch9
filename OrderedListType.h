#ifndef OrderedListType_h
#define OrderedListType_h

#include "../Classes/arrayListType.h"
template<class elemType>

class OrderedListType : public arrayListType<elemType>{
public:
    OrderedListType(){arrayListType<elemType>::length = 0; arrayListType<elemType>::maxSize = 100; arrayListType<elemType>::list = new elemType[arrayListType<elemType>::maxSize];};
    /**
     insertOrd(elemType)
     Insets item at correct position in the list.
     */
    void insertOrd(elemType insertItem);
    
};

template <class elemType>
void OrderedListType<elemType>::insertOrd(elemType insertItem){
    if(arrayListType<elemType>::length>0){
        if (arrayListType<elemType>::length >= arrayListType<elemType>::maxSize)  //list is full
            cerr << "Cannot insert in a full list" << endl;
        else
        {
            int location;
            for(int i = arrayListType<elemType>::length; i > 0; i--)
                if(arrayListType<elemType>::list[i-1]<insertItem){       // find location of insertItem
                    location = i;
                    break;
                }
                else
                    location = 0;
            for (int i = arrayListType<elemType>::length; i > location; i--)
                arrayListType<elemType>::list[i] = arrayListType<elemType>::list[i - 1];       //move the elements down
            
            arrayListType<elemType>::list[location] = insertItem;     //insert the item at the
                                             //specified position
            
            arrayListType<elemType>::length++;                        //increment the length
        }
    
    }else{
        arrayListType<elemType>::list[0] = insertItem;
        arrayListType<elemType>::length++;
    }
} //end insertOrd

#endif
