#include <iostream>
#include <vector>
#include <string>



int main(){
    std::string sequence;
    std::cin >> sequence;

    bool flag = true;

    while(flag){
        flag = false;
        if(sequence.empty()){
            break;
        }
        for(int i = 0; i < sequence.size() - 1; i++){
            if(sequence[i] == '(' and sequence[i+1] == ')'){
                for(int j = i; j < sequence.size() - 2; j++){
                    sequence[j] = sequence[j+2];
                }
                sequence.pop_back();
                sequence.pop_back();
                flag = true;
                break;
            }
        }
    }
    if(sequence.empty()){
        std::cout << "YES";
    }
    else{
        std::cout << "NO";
    }

    return 0;
}
