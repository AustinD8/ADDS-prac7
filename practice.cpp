#include "QuickSort.h"
#include <iostream>
#include <vector>

std::vector<int> QuickSort::sort(std::vector<int> list){
    std::vector<int> vector;

    if (list.size()<3){
        int a = list[0];
        int b = list[1];
        if(list[0]>list[1]){
            list[0]=b;
            list[1]=a;
        }
    }else{
        int pivot=list[2];
        std::swap(list[2],list.back());
        int itemFromLeft;
        int leftIndex;
        int itemFromRight;
        int rightIndex;
        bool check = false;
        while(check==false){
                bool lCheck, rCheck = false;
            for(int i = 0; i < list.size(); i++){
                for(int k = 0; k < list.size();k++){
                    std::cout<<list[k]<<", ";
                }
                std::cout<<" itemLeft is: "<<itemFromLeft<< " itemRight is: "<<itemFromRight<< " pivot is: "<< pivot;
                std::cout<<std::endl;
                if (list[i]>pivot && lCheck==false){
                    itemFromLeft=list[i];
                    leftIndex=i;
                    lCheck=true;
                }
                if (list[list.size()-2-i]<pivot && rCheck==false){
                    itemFromRight=list[list.size()-2-i];
                    rightIndex=list.size()-i;
                    rCheck = true;
                }

                if(lCheck==true && rCheck==true){
                    break;
                }
            }
            if (leftIndex>rightIndex){
                check = true;
                break;
            }else{
                std::swap(list[leftIndex],list[rightIndex]);
            }

        }
        std::swap(list.back(),list[leftIndex]);
        std::vector<int> before;
        std::vector<int> after;
        for (int i = 0; i < leftIndex; i++){
            before.push_back(list[i]);
        }
        for(int i = leftIndex+1; i<list.size(); i++){
            after.push_back(list[i]);
        }
        vector = sort(before);
        vector.push_back(pivot);
        vector.insert(vector.end(), after.begin(), after.end());
    }


    return vector;
}