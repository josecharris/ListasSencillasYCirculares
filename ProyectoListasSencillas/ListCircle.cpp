/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListCircle.cpp
 * Author: Usuario
 * 
 * Created on 13 de septiembre de 2017, 02:18 PM
 */

#include "ListCircle.hpp"
#include "NodeList.hpp"
template <class T>
ListCircle<T>::ListCircle() {
    head = NULL;
}


template <class T>
bool ListCircle<T>::isEmpty(){
     return head == NULL;
}

template <class T>
void ListCircle<T>::addFirst(T info){
    NodeList<T>* newNode = new NodeList<T>(info);
    if(isEmpty()){
        head = newNode;
        head->next=head;
    }else{
        newNode->next= head->next;
        head->next = newNode;
    }
}

template <class T>
void ListCircle<T>::addLast(T info){
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

template <class T>
std::vector<T> ListCircle<T>::printList(){
    std::vector<T> output;
    NodeList<T>* aux = head;
    do{
        output.push_back(aux->next->info);
        aux = aux->next;
        
    }while(aux!=head);
    return output;
}

template <class T>
void ListCircle<T>::addSort(T info){
    NodeList<T>* newNode = new NodeList<T>(info);
    if(isEmpty()){
        head = newNode;
        head->next = head;
    }else if(info.getIdTeam().compare(head->info.getIdTeam()>0)){
        //addLast(info);
    }else if(info.getIdTeam().compare(head->info.getIdTeam()>0)){
        addFirst(info);
        
    }else{
        NodeList<T>* act = head->next;
        NodeList<T>* ant = head;
        while(info.getIdTeam().compare(act->info.getIdTeam()>0)){
            ant = act;
            act = act->next;
        }
        ant->next = newNode;
        newNode->next = act; 
    }
    
}

template <class T>
ListCircle<T>::~ListCircle() {
}

