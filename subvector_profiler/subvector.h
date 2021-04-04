#ifndef SUBVECTOR_H_INCLUDED
#define SUBVECTOR_H_INCLUDED

struct Subvector{
    int* mas;
    unsigned int top;
    unsigned int capacity;
};

bool init(Subvector* qv);

bool push_back(Subvector* qv, int d);

int pop_back(Subvector* qv);

bool resize(Subvector* qv, unsigned int new_capacity);

void shrink_to_fit(Subvector* qv);

void clear(Subvector* qv);

void destructor(Subvector* qv);



#endif // SUBVECTOR_H_INCLUDED
