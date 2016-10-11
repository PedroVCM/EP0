#ifndef IMAGEM_HPP
#define IMAGEM_HPP

#include <iostream>
#include <string>

using namespace std;

class Imagem {
private:

   string tipo,
          dimensoes,
          binario,
          tamanho,
          comentario;
public:
   Imagem ();
  // ~Imagem ();
   string getTamanho ();
   void setTamanho (string tamanho);
   string getTipo ();
   void setTipo (string tipo);
   string getDimensoes ();
   void setDimensoes (string dimensoes);
   string getBinario ();
   void setBinario (string binario);
   string getComentario ();
   void setComentario (string comentario);


};
#endif
