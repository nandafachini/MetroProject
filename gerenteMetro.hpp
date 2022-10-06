#include "metro.hpp"

int gerenteMetro() {

    Linha *gerente_linha = new Linha();

    gerente_linha->inserirInicio(1);
    gerente_linha->mostrarEstacoes();

    gerente_linha->inserirInicio(2);
    gerente_linha->mostrarEstacoes();

    gerente_linha->removerFinal();
    gerente_linha->mostrarEstacoes();

}