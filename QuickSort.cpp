#include "QuickSort.h"
#include <vector>

std::vector<int> QuickSort::sort(std::vector<int> list){
    std::vector<int> returnVector;

    //base case 1
    if(list.size()==1){
        returnVector=list;
    }


    //base case 2
    if (list.size()==2){
        if(list.front()>list.back()){
            std::swap(list.front(),list.back());
        }
        returnVector=list;
    }

    //recursive
    if(list.size()>2){
        int pivot = list[2];
        std::swap(list.back(),list[2]);
        list.pop_back();
        bool condition=false;
        int leftIndex, rightIndex, itemFromLeft, itemFromRight;
        //setting itemFromLeft and itemFromRight
        for (int i = 0; i< 2; i++){
            bool leftFound = false;
            bool rightFound = false;
            for (int i = 0; i < list.size(); i++){
                if(list[i]>pivot && leftFound==false){
                    itemFromLeft=list[i];
                    leftIndex = i;
                    leftFound=true;
                }
                if(list[list.size()-i]<pivot && rightFound==false){
                    itemFromRight=list[list.size()-i];
                    rightIndex=list.size()-i;
                    rightFound=true;
                }

            //if statement to switch or check is true
            }
            if (leftFound==false){
                leftIndex=list.size();
            }
            if (rightFound==false){
                rightIndex=0;
            }
            if(leftIndex>rightIndex){
                    condition = true;
                    break;
                }else{
                    std::swap(list[leftIndex], list[rightIndex]);
                }
        }

        std::vector<int> smaller;

                
        std::vector<int> bigger;

        for (int i = 0; i < list.size(); i++){
            if (i<leftIndex){
                smaller.push_back(list[i]);
            }else{
                bigger.push_back(list[i]);
            }
        }



        smaller=sort(smaller);
        bigger=sort(bigger);

        returnVector = smaller;
        returnVector.push_back(pivot);

        for (int i = 0 ; i<bigger.size();i++){
            returnVector.push_back(bigger[i]);
        }


        
    }


    return returnVector;

}
