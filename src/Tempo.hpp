#include <iostream>

class Tempo {
    private:

        int dia;
        int hora;
        int minuto;
        int segundo;

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
        int getDia() const;
        int getHora() const;
        int getMinuto() const;
        int getSegundo() const;
        
        // other methods
        void check();
        Tempo somaTempo();
        void print();
        void read();
        Tempo incrementador();
        Tempo decrementador();
};