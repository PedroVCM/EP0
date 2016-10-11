#include <string>
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include "imagem.hpp"


using namespace std;

int main(int argc, char ** argv) {

  int i=0;
  //vector<char> nome_arquivo_in;
  string name_file_in,
         name_file_out,
         auxiliary;
  Imagem imageSource;
  fstream /*in_file,*/
          out_file;

  cout << "Write the file's name : " << endl;
  cin >> name_file_in;

  name_file_in = "../doc/" + name_file_in + ".ppm";

    ifstream in_file;
    in_file.open(name_file_in.c_str(), ios::binary);
    if(not in_file.is_open() ) {
      cerr << "Falha na abertura do arquivo!!" << endl;
      //exit(-1);
    };

  do{
    getline(in_file, auxiliary);

    if(auxiliary[0]=='#'){
      imageSource.setComentario(auxiliary);
      cout << auxiliary << endl;
    }else if(sizeof(auxiliary) > 10){
      imageSource.setBinario(auxiliary);
    }else{
      i++;
      switch (i) {
        case 1 :
          imageSource.setTipo(auxiliary);
          break;
        case 2 :
          imageSource.setDimensoes(auxiliary);
          break;
        case 3 :
          imageSource.setTamanho(auxiliary);
          break;
      };

    };

  }while(!in_file.eof());

  in_file.close();

  cout << "Tipo: " << imageSource.getTipo() << "Dimensoes: " << imageSource.getDimensoes() << "Maximo de cores: " << imageSource.getTamanho() << endl;

  cout << "Digite o nome do arquivo saida: " << endl;
  cin >> name_file_out;

  name_file_out= "../doc/" + name_file_out + ".ppm";

  out_file.open(name_file_out.c_str(), ios::binary);

  if(!out_file.is_open() ) {
    cerr << "Falha na abertura do arquivo!!" << endl;
    //exit(-1);
  };

  out_file << imageSource.getComentario();
  out_file << imageSource.getTipo();
  out_file << imageSource.getDimensoes();
  out_file << imageSource.getTamanho();
  out_file << imageSource.getBinario();

  out_file.close();

return 0;
}
