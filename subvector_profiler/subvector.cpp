#include "subvector.h"
#include <iostream>

using namespace std;

bool init(Subvector* qv){
    Subvector* new_qv = new Subvector{nullptr, 0, 0};
    *qv = *new_qv;
    delete new_qv;

    return true;
}

bool resize(Subvector* qv, unsigned int new_capacity){
    if(new_capacity == 0){
        destructor(qv);
    }
    else{
        bool result = true;
        int* new_mas = new int [new_capacity];
        for(int i = 0; i < qv->top; i++){
            new_mas[i] = qv->mas[i];
        }
        if(qv->capacity != 0){
            delete [] qv->mas;
        }
        qv->mas = new_mas;
        qv->capacity = new_capacity;
        return result;
    }
}

bool push_back(Subvector* qv, int d){
    bool result = true;
    if(qv->top >= qv->capacity){
        result = resize(qv, 2 * qv->capacity + 1);
    }
    qv->mas[qv->top] = d;
    qv->top++;
    return result;
}

int pop_back(Subvector* qv){
    int result = 0;
    if(qv->top > 0){
        result = qv->mas[qv->top-1];
        qv->top--;
    }
    return result;
}

void shrink_to_fit(Subvector* qv){
    int* new_mas = new int [qv->top];
    for(int i = 0; i < qv->top; i++){
        new_mas[i] = qv->mas[i];
    }
    delete [] qv->mas;
    qv->mas = new_mas;
    delete [] new_mas;
    qv->capacity = qv->top;
}

void clear(Subvector* qv){
    qv->top = 0;
}

void destructor(Subvector* qv){
    if(qv->mas != nullptr){
        delete [] qv->mas;
    }
    init(qv);
}


