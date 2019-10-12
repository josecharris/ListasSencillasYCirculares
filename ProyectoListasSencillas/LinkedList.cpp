/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedList.cpp
 * Author: Usuario
 * 
 * Created on 6 de septiembre de 2017, 02:32 PM
 */
#include "LinkedList.hpp"
#include <vector>

template<class T>
LinkedList<T>::LinkedList(){
    head = NULL;
}
//Si esta vacio
template <class T>
bool LinkedList<T>::isEmpty(){
    return head == NULL;
}
//AÃ±adir al comienzo
template <class T>
void LinkedList<T>::addFirst(T info){
    NodeList<T>* newNode = new NodeList<T>(info);
    if(isEmpty()){
        head = newNode;
    }
    else{
        newNode->next = head;
        head = newNode;
    } 
}
//AÃ±adir al final
template <class T>
void LinkedList<T>::addLast(T info){
    NodeList<T>* newNode = new NodeList<T>(info);
    if(isEmpty()){
        head = newNode;
    }
    NodeList<T>* aux = head;
    while(aux->next != NULL){
        aux = aux->next;
    }
    aux->next = newNode;
}
//Obtener lista
template <class T>
    std::vector<T> LinkedList<T>::getList(){
    std::vector<T> output;
    NodeList<T>* aux = head;
    while(aux != NULL){
        output.push_back(aux->info);
        aux = aux->next;
    }
    return output;
}

template<class T>
NodeList<T>* LinkedList<T>::findNode(string key) {
    NodeList<T>* aux = head;
    while( aux != NULL ){
        if(aux->info.getIdTeam().compare(key) == 0){
            return aux;
        }
        aux = aux->next;
    }
    return NULL;
}

template<class T>
T* LinkedList<T>::findObject(string key) {
    NodeList<T>* aux = head;
    while(aux!=NULL){
        if(aux->info.getIdTeam().compare(key)==0){
            return &aux->info;
        }
        aux = aux->next;
    }
    return NULL;
}

template <class T>
void LinkedList<T>::addBeforeTo(NodeList<T>* node , T info){
    NodeList<T>* newNode = new NodeList<T>(info);
    newNode->next=node;
    if(node==head){
        head = newNode;
    }else{
        NodeList<T>* aux = head;
        while(aux->next != node){
            aux = aux->next;
        }
        aux->next = newNode;
    }
}

template <class T>
void LinkedList<T>::addAfterTo(NodeList<T>* node, T info){
    NodeList<T>* newNode = new NodeList<T>(info);
    newNode->next = node->next;
    node->next = newNode;
}


template <class T>
void LinkedList<T>::addSort(T info){
    NodeList<T>* newNode = new NodeList<T>(info);
    if(isEmpty()){
        head = newNode;
    }else{
        NodeList<T>* aux = head;
        NodeList<T>* ant = NULL;
        
        while(aux!= NULL && aux->info.getIdTeam().compare(info.getIdTeam())<0){
            ant = aux;
            aux=aux->next;
        }
        if(ant==NULL){
            head = newNode;
        }else{
            ant->next=newNode;
        }
        newNode->next = aux;
        
    }
    
    
}

template <class T>
T* LinkedList<T>::deleteNode(NodeList<T>*node){
    T* aux = &node->info;
    if(node==head){
        head = head->next;
    }else{
        NodeList<T>*x=head;
        while(x->next!=node){
            x = x->next;
        }
        x->next = node->next;
    }
    delete(node);
    return aux;
}

template <class T>
LinkedList<T>::~LinkedList() {
}
