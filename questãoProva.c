#include <stdlib.h>
typedef struct Distribuidora distribuidora;
struct Distribuidora {};
typedef struct Item item;
struct Item {};
typedef struct Pedido pedido;
struct Pedido {
    item *itens;
    distribuidora *careful;
    distribuidora *regular;
};

void enviar(pedido *a, distribuidora *b, item *itens){
    while(a != NULL && a->itens != NULL){
        if(valor(&a->itens) > 2000) enviar(NULL, &a->careful, &a->itens);
        else enviar(NULL, &a->regular, &a->itens);
        a->itens = next(a->itens);
    }
}