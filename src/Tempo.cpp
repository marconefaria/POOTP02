#include <iostream>
#include "tempo.hpp"
using namespace std;

// Construtores
        Tempo::Tempo(){
            
        }

        Tempo::Tempo(int dia){
            this->_dia = dia;
        }

        Tempo::Tempo(int dia, int hora){
            this->_dia = dia;
            this->_hora = hora;
        }

        Tempo::Tempo(int hora, int minuto){
            this->_hora = hora;
            this->_minuto = minuto;
        }

        Tempo::Tempo(int minuto, int segundo){
            this->_minuto = minuto;
            this->_segundo = segundo;
        }

        Tempo::Tempo(int hora, int minuto, int segundo){
            this->_hora = hora;
            this->_minuto = minuto;
            this->_segundo = segundo;
        }

        Tempo::Tempo(int dia, int hora, int minuto){
            this->_dia = dia;
            this->_hora = hora;
            this->_minuto = minuto;
        }

        Tempo::Tempo(int dia, int hora, int minuto, int segundo){
            this->_dia = dia;
            this->_hora = hora;
            this->_minuto = minuto;
            this->_segundo = segundo;
        }

        // Destrutor
        Tempo::~Tempo(){
            
        }
    
        // basic getters
        int Tempo::getDia(){
            return this->_dia;
        }
        
        int Tempo::getHora(){
            return this->_hora;
        }
        
        int Tempo::getMinuto(){
            return this->_minuto;
        }
        
        int Tempo::getSegundo(){
            return this->_segundo;
        }
        
        
        // other methods
        /*void Tempo::check();{
            if(this.)
        }
        
        Tempo Tempo::somaTempo();{
            ...
        }*/
        
        void Tempo::print(){
            cout << "D: {0} H: {0} M: {0} S:{0}", this->getDia(), this->getHora(), this->getMinuto(), this->getSegundo();
        }
        
        /*void Tempo::read();{
            ...
        }
        
        Tempo Tempo::incrementador();{
            ...
        }
        
        Tempo Tempo::decrementador();{
            ...
        }*/
        
        /*
        */