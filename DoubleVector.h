#ifndef ATIVIDADEMAE_DOUBLEVECTOR_H
#define ATIVIDADEMAE_DOUBLEVECTOR_H

class DoubleVector {
private:
    int* m_list{nullptr};
    int m_size;
    int m_capacity;
    int m_head;
    int m_tail;

public:
    DoubleVector();

    DoubleVector(int n);

    ~DoubleVector();

    int size();

    bool empty();

    void push_back(int value);

    void push_front(int value);

    int pop_back();

    int pop_front();

    int at(int k);

    void shift();

    void resize();

    void remove(int k);

    void removeAll(int value);

    void print();

    void printReverse();

    void concat(DoubleVector& lst);

    bool equal(DoubleVector& lst);
};


#endif
