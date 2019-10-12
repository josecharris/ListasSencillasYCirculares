
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Usuario
 *
 * Created on 16 de agosto de 2017, 07:35 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "FootballTeam.hpp"
#include "LinkedList.hpp"
#include "LinkedList.cpp"
#include "NodeList.hpp"
#include "ListCircle.cpp"
#include "ListCircle.hpp"
#include <stdexcept>
#include <stdlib.h>
#include <bits/stringfwd.h>

using namespace std;

/*
 * 
 */
//Estructura de datos
int main(int argc, char** argv) {
    
   ListCircle<FootballTeam> listaCircular;
   
   listaCircular.addFirst(FootballTeam("2x","Barcelona FC",4,5));
   listaCircular.addFirst(FootballTeam("3x","Liverpool FC FC",4,5));
   cout<<"antes de : "<<endl;
   vector<FootballTeam> aux = listaCircular.printList();
   
   for(int i=0;i<aux.size();i++){
       cout<<aux[i].toString()<<endl;
   }
   
   cout<<"Despues de : "<<endl;
   
    
    return 0;
}

