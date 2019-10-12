/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListCircle.hpp
 * Author: Usuario
 *
 * Created on 13 de septiembre de 2017, 02:18 PM
 */

#ifndef LISTCIRCLE_HPP
#define LISTCIRCLE_HPP

#include <vector>

#include "NodeList.hpp"


template <class T>
class ListCircle {
public:
    ListCircle();
    
    bool isEmpty();
    void addFirst(T);
    void addLast(T);
    std::vector<T> printList();
    
    void addSort(T);
    //ListCircle(const ListCircle& orig);
    virtual ~ListCircle();
private:
    NodeList<T>* head;
};

#endif /* LISTCIRCLE_HPP */

