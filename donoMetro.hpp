#include "metro.hpp"

int donoMetro() {

    Linha *dono_linha = new Linha();

    dono_linha->inserirInicio(1);
    dono_linha->mostrarEstacoes();

    dono_linha->inserirInicio(2);
    dono_linha->mostrarEstacoes();

    dono_linha->removerInicio();
    dono_linha->mostrarEstacoes();

    dono_linha->InserirFinal(3);
    dono_linha->mostrarEstacoes();

    dono_linha->InserirFinal(4);
    dono_linha->mostrarEstacoes();

    dono_linha->removerFinal();
    dono_linha->mostrarEstacoes();

}