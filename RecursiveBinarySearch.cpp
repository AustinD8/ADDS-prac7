#include "RecursiveBinarySearch.h"


bool RecursiveBinarySearch::search(std::vector<int> list , int item){
    bool check;
    int mid = list.size()/2;
    int size = list.size();

    if(size==1){
        if(list.front()==item){
            return true;
        }
        else{
            return false;
        }
    }

    if(list[mid]==item){
        check = true;
    }else{
        std::vector<int> list2;
        if(list[mid]>item){
            for(int i = 0; i<mid; i++){
                list2.push_back(list[i]);
            }
        }else{
            for(int i = mid; i<size; i++){
                list2.push_back(list[i]);
            }
        }
        check = search(list2, item);
    }

    
    return check;
}