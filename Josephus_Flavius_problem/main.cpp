#include <iostream>

struct Human {
    int number;
    Human* next;
};

Human* create_circle(int N){
    Human* human = new Human{1, NULL};
    Human* first_human = human;
    for(int i = 2; i <= N; i++){
        Human* new_human = new Human{i, NULL};
        human->next = new_human;
        human = new_human;
    }
    human->next = first_human;
    return human;
}



int main(){
    int N, K;
    std::cin >> N >> K;
    Human* circle = create_circle(N);
    while(circle->next != circle){
        for(int i = 1; i <= K - 1; i++){
            circle = circle->next;
        }
        Human* human_to_delete = circle->next;
        circle->next = circle->next->next;
        delete human_to_delete;
    }
    std::cout << circle->number;

    return 0;
}
