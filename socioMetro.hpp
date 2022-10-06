#include "metro.hpp"

int socioMetro() {

    Linha *linha_socio = new Linha();

    linha_socio->InserirFinal(3);
    linha_socio->mostrarEstacoes();

    linha_socio->InserirFinal(4);
    linha_socio->mostrarEstacoes();

    linha_socio->InserirFinal(5);
    linha_socio->mostrarEstacoes();


    linha_socio->removerFinal();
    linha_socio->mostrarEstacoes();


}
