#include <playAPC/playapc.h>
#include <iostream>

#include "stateGame.h"
#include "stateCutscene.h"

int imgnada, imgenter, imgload; //imgs comuns entre estados

int main(){
    int bg;
    tipoEstado st;
    int imghow, imgfim;

    AbreJanela(800, 600, "Evento de Halloween");

    imgnada = AbreImagem("img/recursos/nada.png");
    imgenter = AbreImagem("img/recursos/enter.png");
    imgload = AbreImagem("img/recursos/load.png");
    imghow = AbreImagem("img/recursos/how.png");
    imgfim = AbreImagem("img/recursos/fim.png");

    stateIntro(&bg);
    Pintar(255, 255, 255, RETANGULO, bg);
    AssociaImagem(imghow, RETANGULO, bg);

    st = stateGame(bg);

    AssociaImagem(imgnada, RETANGULO, bg);

    stateFim(bg, st);
    AssociaImagem(imgfim, RETANGULO, bg);

    Desenha();
    return 0;
}
