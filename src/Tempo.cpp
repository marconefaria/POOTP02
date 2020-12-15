#include <iostream>
#include "Tempo.hpp"
using namespace std;

// Construtores
        Tempo::Tempo(){
            ...
        }

        Tempo::Tempo(int dia){
            ...
        }

        Tempo::Tempo(int dia, int hora){
            ...
        }

        Tempo::Tempo(int dia, int hora, int minuto){
            ...
        }

        Tempo::Tempo(int hora, int minuto, int segundo){
            ...
        }

        Tempo::Tempo(int hora, int minuto){
            ...
        }

        Tempo::Tempo(int minuto, int segundo){
            ...
        }

        Tempo::Tempo(int dia, int hora, int minuto, int segundo){
            ...
        }
        
        // Destrutor
        Tempo::~Tempo(){
            ...
        }
    
        // basic getters
        int Tempo::getDia() const;{
            ...
        }
        
        int Tempo::getHora() const;{
            ...
        }
        
        int Tempo::getMinuto() const;{
            ...
        }
        
        int Tempo::getSegundo() const;{
            ...
        }
        
        
        // other methods
        void Tempo::check();{
            ...
        }
        
        Tempo Tempo::somaTempo();{
            ...
        }
        
        void Tempo::print();{
            ...
        }
        
        void Tempo::read();{
            ...
        }
        
        Tempo Tempo::incrementador();{
            ...
        }
        
        Tempo Tempo::decrementador();{
            ...
        }
        