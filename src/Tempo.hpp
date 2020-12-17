#include <iostream>

class Tempo {
    private:

        int _dia;
        int _hora;
        int _minuto;
        int _segundo;

    public:

        // Construtores
        Tempo();
        Tempo(int dia);
        Tempo(int dia, int hora);
        Tempo(int dia, int hora, int minuto);
        Tempo(int hora, int minuto, int segundo);
        Tempo(int hora, int minuto);
        Tempo(int minuto, int segundo);
        Tempo(int dia, int hora, int minuto, int segundo);
        // Destrutor
        ~Tempo();
    
        // basic getters
        int getDia();
        int getHora();
        int getMinuto();
        int getSegundo();

        //basic setters
        // basic getters
        void setDia();
        void setHora();
        void setMinuto();
        void setSegundo();
        
        // other methods
        void check();
        Tempo somaTempo();
        void print();
        void read();
        Tempo incrementador();
        Tempo decrementador();
};