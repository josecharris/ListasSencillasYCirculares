/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodeList.hpp
 * Author: Usuario
 *
 * Created on 6 de septiembre de 2017, 02:27 PM
 */

#ifndef NODELIST_HPP
#define NODELIST_HPP

#include <cstdlib> // null

template<class T> class LinkedList;
template<class T> class ListCircle;

template <class T>

class NodeList {
    friend class LinkedList<T>;
    friend class ListCircle<T>;
    
    public:
        NodeList(T);
       ~NodeList();
    private:
        T info;
        NodeList* next;
};

template <class T>
    NodeList<T>::NodeList(T info){
      this->info=info;
      next= NULL;

}

template <class T>
NodeList<T>::~NodeList(){
    
}
#endif /* NODELIST_HPP */

