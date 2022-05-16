#include <iostream>
#include <vector>
using namespace std;
#include "QuickSort.h"
#include "Sort.h"
#include "RecursiveBinarySearch.h"


int main(){

    string userInput;
    getline(cin,userInput);

    QuickSort algorithm = QuickSort();
    RecursiveBinarySearch searcher = RecursiveBinarySearch();

    int sLength = userInput.length();
    vector<int> list;
    int pointA = 0;
    string item;
    for (int i = 0; i < sLength; i++ ){

        if (userInput[i]==' '){
            for(int j = pointA; j < i; j++){

                item.push_back(userInput[j]);
            }
            pointA = i;
            list.push_back(stoi(item));
            item.clear();
        }

    }

    for(int i = pointA; i < sLength; i++){
        item.push_back(userInput[i]);
    }
    list.push_back(stoi(item));

    list=algorithm.sort(list);

    if(searcher.search(list,1)==true){
        cout<<"true ";
    }else{
        cout<<"false ";
    }

    for (int i = 0; i < list.size(); i++){
        cout<<list[i]<<" ";
    }


    return 0;
}