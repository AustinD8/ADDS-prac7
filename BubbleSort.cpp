#include "BubbleSort.h"
#include <vector>
#include <iostream>


std::vector<int> BubbleSort::sort(std::vector<int> list){
    int check = 0;
    while (check == 0){
        check = 1;
        for (int i = 0; i < (list.size()-1); i++){
            int a = list[i];
            int b = list[i+1];
            if (a>b){
                list[i]=b;
                list[i+1]=a;
                check = 0;
            }
        }
    }


    return list;
}