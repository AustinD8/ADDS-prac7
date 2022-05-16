#include <iostream>
#include <vector>
using namespace std;

int main(){
    string userInput = "1 3 5 4 -5 100 7777 2014";
    int sLength = userInput.length();
    vector<int> list;
    int pointA = 0;
    string item;
    for (int i = 0; i < sLength; i++ ){

        // cout<<userInput[i];
        if (userInput[i]==' '){
            // cout<<"space found at: "<<i;
            for(int j = pointA; j < i; j++){
                // cout<<"adding: "<<userInput[j];
                item.push_back(userInput[j]);
            }
            pointA = i;
            // cout<<item;
            list.push_back(stoi(item));
            item.clear();
        }

    }

    for(int i = pointA; i < sLength; i++){
        item.push_back(userInput[i]);
    }
    list.push_back(stoi(item));

    for (int i = 0; i < list.size(); i++){
        cout<<list[i]<<endl;
    }


    return 0;
}