// Alunas: Ana Clara e Sofia Schmitz...>
#include <string>


class Aluno {
 public:
    Aluno() {}  // construtor
    ~Aluno() {}  // destrutor
    std::string devolveNome() {
        return nome;
    }
    int devolveMatricula() {
        return matricula;
    }
    void escreveNome(std::string nome_) {
        nome = nome_;
    }
    void escreveMatricula(int matricula_) {
        matricula = matricula_;
    }
 private:
    std::string nome;
    int matricula;
};

/*
(1) cria um vetor de 'Alunos' a partir de nomes e matriculas; exemplo:
vetor de nomes: ['Fulano', 'Beltrano', 'Ciclano']
vetor de matriculas: [1010, 2020, 3030]
vetor t alocado de saida: [{'Fulano',1010}, {'Beltrano',2020}, {'Ciclano':3030}]
*/

Aluno *turma(std::string nomes[], int matriculas[], int N) {
    Aluno *t;
    t = new Aluno[N];
    for (int i = 0; i < N; i++) {
      t[i].escreveNome(nomes[i]);
      t[i].escreveMatricula(matriculas[i]);
    }

    return t;
}

/*
(2) cria um novo vetor contendo outros dois vetores de alunos (acrescenta vetor 2 apos o vetor 1); exemplo:
t1 de estrada: [{'Fulano',1010}, {'Beltrano',2020}];  N1 = 2
t2 de entrada: [{'Fulana',7070}, {'Beltrana',8080}, {'Cicrana',9090}];  N2 = 3
tu de saída: [{'Fulano',1010}, {'Beltrano',2020}, {'Fulana',7070}, {'Beltrana',8080}, {'Cicrana':9090}]
*/
Aluno *turmas_uniao(Aluno t1[], Aluno t2[], int N1, int N2) {
    Aluno *tu;
    tu = new Aluno[N1+N2];

    for (int i = 0; i < N1; i++) {
      tu[i] = t1[i];
    }

    for (int i = N1; i < N1+N2; i++) {
      tu[i] = t2[i-N1];
    }
    // ... COLOQUE SEU CÓDIGO AQUI ...

    return tu;
}

/*
(3) divide uma turma t existente em duas outras (os conteúdos dos ponteiros pt1 e pt2 serão as duas saídas; inicialmente são iguais a 'nullptr'),
a primeira com k elementos e a segunda com o restante (N-k elementos); exemplo:
t de entrada: [{'Fulano',1010}, {'Beltrano',2020}, {'Fulana',7070}, {'Beltrana',8080}, {'Cicrana':9090}]
k = 2
conteudo de pt1: [{'Fulano',1010}, {'Beltrano',2020}]
conteudo de pt2: [{'Fulana',7070}, {'Beltrana',8080}, {'Cicrana',9090}]
*/
void turmas_divisao(Aluno t[], int k, int N, Aluno **pt1, Aluno **pt2) {
    Aluno *t1 = new Aluno[k];
    Aluno *t2 = new Aluno[N-k];

    // ... COLOQUE SEU CÓDIGO AQUI ...
    for (int i = 0; i < k; i++) {
      t1[i];
    }

    for (int i = k; i < N-k; i++) {
      t2[i];
    }

    *pt1 = t1;
    *pt2 = t2;
}

/*
(4) cria um novo vetor somente com matrículas maiores ou iguais a menor_matr, 
a partir de um vetor de N objetos do tipo Aluno:
Aluno *turma_filtra(Aluno t[], int N, int menor_matr);
Exemplo:
t de entrada: [{'Fulano',1010}, {'Beltrano',2020}, {'Fulana',7070}, {'Cicrana':1515}, {'Beltrana',8080}];  N = 5, menor_matr = 2020
tf de saída: [{'Beltrano',2020}, {'Fulana',7070}, {'Beltrana',8080}]
*/

Aluno *turma_filtra(Aluno t[], int N, int menor_matr) {
    Aluno *tf;
    tf = new Aluno[N];  // retirar e alocar (com new)
    int contagem = 0;

    for (int i = 0; i < N; i++){
      
      if (t[i].devolveMatricula() >= menor_matr){
        contagem++;
      }
    }
    
    tf = new Aluno[contagem];
    int j = 0;

    for (int i = 0; i < N; i++){
      if (t[i].devolveMatricula() >= menor_matr){
        tf[j] = t[i];
        j++;
      }
    }

    return tf;
}

/*(5) crie um vetor de inteiros com 26 posições, na qual cada posição corresponda a contagem de alunos com a respectiva primeira letra do nome em maiúsculo ('A' na posição 0, 'B' na posição 1, ..., 'Z' na posição 25):
int *turma_conta(Aluno t[], int N);

Exemplo:

t de entrada: [{'Fulano',1010}, {'Beltrano',2020}, {'Fulana',7070}, {'Cicrana':1515}, {'Beltrana',8080}], N = 5
vetor de saída: [0,2,1,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]*/

int *turma_conta(Aluno t[], int N) {
    int *c;
    c = nullptr;  // retirar e alocar (com new)
    return c;
}

/*
    *** Importante ***

    A função 'main()' não deve ser escrita aqui, pois é parte do código dos testes e já está implementada

*/
