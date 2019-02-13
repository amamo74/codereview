#include "priority_queue.h"

template <>
templatePriorityQueue<int>::templatePriorityQueue(){
}

template <>
templatePriorityQueue<int>::~templatePriorityQueue(){
}

template <>
bool templatePriorityQueue<int>::empty() const{
        return storage_.empty(); // change member variable name including '_'
}

template <>
int templatePriorityQueue<int>::size() {
        return storage_.size(); // change member variable name including '_'
}

template <>
const int& templatePriorityQueue<int>::top() const{
        return storage_.top(); // change member variable name including '_'
}

template <>
void templatePriorityQueue<int>::pop(){
        storage_.pop(); // change member variable name including '_'
}

template <>
void templatePriorityQueue<int>::push(const int& val){
        storage_.push(val); // change member variable name including '_'
}
