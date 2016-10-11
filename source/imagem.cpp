#include <iostream>
#include <string>
#include "imagem.hpp"

using namespace std;

Imagem::Imagem() {
   tipo = "";
   dimensoes = "";
   binario = "";
   tamanho = "";
   comentario = '#';

}

string Imagem::getTamanho(){
  return tamanho;
}

void Imagem::setTamanho(string tamanho){
  this->tamanho = tamanho;
}

string Imagem::getTipo(){
  return tipo;
}

void Imagem::setTipo(string tipo){
  this->tipo = tipo;
}

string Imagem::getDimensoes(){
  return dimensoes;
}

void Imagem::setDimensoes(string dimensoes){
  this->dimensoes = dimensoes;
}

string Imagem::getBinario(){
  return binario;
}

void Imagem::setBinario(string binario){
  this->binario = binario;
}

string Imagem::getComentario(){
  return comentario;
}

void Imagem::setComentario(string comentario){
  this->comentario = comentario;
}
