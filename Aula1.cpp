#include <iostream>

using namespace std; //para evitar a verbosidade do std::

//para compilar via bash g++ Aula1.cpp -o Aula1

int main(){

    char a; //declaracao de variavel
    int idade = 20;
    int valor = 2147483647;
    int64_t b;
    size_t tamanho;
    float nota; 
    nota = 9.5;
    string nome; //em c++ é um objeto
    nome = "ufsc";
    int c;
    bool valida;

    valida = true;

    using int valor2; //representa zero e positivo(0 até 4292967295)

    //vetor simples de caracteres
    char nome2(100) = "IFSC"; // na última posicao (4) é colocado um '\0' atormaticamente
                             // que finaliza a sequência de caracteres

    //se acrescentar uma variável sem valor é um lixo de memória, 
    //pois á uma memória reservada para o valor mas não foi utilizada

    /*
        int 
            menor valor = -2147383638
            maior valor =  2147483647
    */

    a = 'u'; //guardar caractere com aspas simples

    //std::cout << "olá,mundo!"<<std::endl << a <<std::endl
    /*
        linha1
        linha2
    */


    cout << "ola mundo"<< endl << a <<endl;
    cout << idade << '\n'; //cout consegue mosttrar qualquer objeto 

    //valor +=1;
    valor++;

    cout << valor << '\n';
    cout << nome << '\n';
    cout << nome2 << '\n';
    cout << c << '\n';

    nome2[2] = '\0'; //irá mostrar IF pois vai parar na posição 2(a posição 2 será o '\0')

    cout << nome2 << '\n';

    /*
    int x, y, z;

        x= 3;
        y = 5;

        z = ++x (pré incremento) + y++ (pós incremento);
            // x = x +1;
            // z = x + y;
            // y = y +1;
    */

    //CONDICIONAIS => CONTROLE DE FLUXO

    if (c>0){
        cout << "maior\n";
    } else if (c < 100){
        cout << "intermediário\n";
    } 
    else{
        cout << "menor\n";
    } 

    if (c > 100 && nota > 5){
        cout<< "primeiro caso \n";
    }

    if (c > 100 || nota > 5){
        cout<< "segundo caso \n";
    }

    //COMANDOS DE REPETICAO

    c = 10;
    int i = 0;

    while(i < 10){
        cout << i << ' ';
        i++;
    }

    cout << endl;

    do {
        cout << i << ' ';
        i--;
    } while (i >= 0);

    cout << endl;

    int j;
    for (i=0, j=5; i < 10 && j > 0; i++, j--){
        cout << i << ' ' << j << endl;
    }

    cout << endl;

    char op ='1';

    switch(op){
        case '1':
            cout << "opcao 1\n";
            cout << "-----";
        break;

        case '2':
            cout << "opcao2\n";
            cout << "-----";

        default:
        break;
    }

    
    if (valida){
        //vetor de forma estática
        int v1(100);
        int v2*;
        v2 = new int(100); //vetor alocadop dinamicamente

        for (i=0; i < 100; i++){
            v1[i] = 0;
            v2[1] = 0;
        }

        cout << "v1[10] ="<< v1[10]<< endl;
        cout << "v2[10] ="<< v2[10]<< endl;

        delete [] v2; //pois precisa esvaziar quando dinâmico -- desalocacao necessaria antes de sair do escopo
    }

    return 0;
}