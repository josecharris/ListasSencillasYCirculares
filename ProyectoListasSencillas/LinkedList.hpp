/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedList.hpp
 * Author: Usuario
 *
 * Created on 6 de septiembre de 2017, 02:32 PM
 */

#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include <vector>
#include <string>
#include "NodeList.hpp"
using namespace std;

template <class T>
class LinkedList {
public:
    
    LinkedList();
    //LinkedList(const LinkedList& orig);
    
    bool isEmpty();
    void addFirst(T);
    void addLast(T);
    NodeList<T>* findNode(string);
    T* findObject(string);
    T* deleteNode(NodeList<T>*);
    void addBeforeTo(NodeList<T>*, T);
    void addSort(T);
    void addAfterTo(NodeList<T>*, T);
    vector<T> getList();
    
    ~LinkedList();

private:
    NodeList<T>* head;
};

#endif /* LINKEDLIST_HPP */

