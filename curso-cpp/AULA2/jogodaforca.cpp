#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<fstream>
#include<ctime>
#include<cstdlib>
using namespace std;

string palavra_secreta = "MELANCIA";
map<char, bool> chute;
vector<char> chutes_errados;

bool letra_existe(char chute){
    for(char letra : palavra_secreta){
        if(chute == letra){
            return true;
        }
    }
    return false;
}

bool nao_acertou(){
    for(char letra : palavra_secreta){
        if(!chute[letra]){
            return true;
        }
    }
    return false;
}

bool nao_enforcou(){
    return chutes_errados.size() < 5;
}

void imprime_cabecalho(){
    cout << "*******************************" << endl;
    cout << "* Bem-vindos ao jogo da forca *" << endl;
    cout << "*******************************" << endl;
    cout << endl;
}

void imprime_chutes_errados(){
    cout << "Chutes errados: ";
    for(char letra : chutes_errados){
        cout << letra << " ";
    }
    cout << endl;
}

void imprime_palavra_secreta(){
     for(char letra : palavra_secreta){
            if(chute[letra]){
                cout << letra << " ";
            } else {
                cout << "_ ";
            }
        }
        cout << endl; 
}

void chuta(){
    cout << "Seu chute: ";
    char chutou;
    cin >> chutou;

    chute[chutou] = true;

    if(letra_existe(chutou)){
        cout << "Você acertou! o seu chute está na palavra!" << endl;
    } else {
        cout << "Você errou! o seu chute não está na palavra!" << endl;
        chutes_errados.push_back(chutou);
    }
    cout << endl;
}

vector<string> le_arquivo(){
    ifstream arquivo;
    arquivo.open("palavras.txt");

    if(arquivo.is_open()){
        int quantidade_palavras;
        arquivo >> quantidade_palavras;

        vector<string> palavras_arquivo;

        for(int i=0; i < quantidade_palavras; i++){
            string palavra_lida;
            arquivo >> palavra_lida;
            palavras_arquivo.push_back(palavra_lida);
        }
        arquivo.close();
        return palavras_arquivo;
    } else {
        cout << "Não foi possivel acessar o banco de palavras!" << endl;
        exit(0);
    }
}

void sorteia_palavra(){
    vector<string> palavras = le_arquivo();

    srand(time(NULL));
    int indice_sorteado = rand() % palavras.size();

    palavra_secreta = palavras[indice_sorteado];
}

void adiciona_palavra(){
    cout << "Digite a nova palavra usando letras maiúsculas" << endl;
    string nova_palavra;
    cin >> nova_palavra;

    vector<string> lista_palavras = le_arquivo();
    lista_palavras.push_back(nova_palavra);

    salva_arquivo(lista_palavras);
}

void salva_arquivo(vector<string> nova_lista){
    ofstream arquivo;
    arquivo.open("palavras.txt");
    if(arquivo.is_open()){
        arquivo << nova_lista.size() << endl;

        for(string palavra : nova_lista){
            arquivo << palavra << endl;
        }
        arquivo.close();
    }
    else{
        cout << "Não foi possível acessar o banco de palavras." << endl;
        exit(0);
    }
}

int main(){
    imprime_cabecalho();

    le_arquivo();
    sorteia_palavra();

    while(nao_acertou() && nao_enforcou()){

        imprime_chutes_errados();
        imprime_palavra_secreta();
        chuta(); 
    }
    cout << "Fim de jogo!" << endl;
    cout << "A palavra secreta era: " << palavra_secreta << endl;
    if(nao_acertou){
        cout << "Você perdeu! Tente novamente!" << endl;
    } else {
        cout << "Parabéns! Você acertou a palavra secreta!" << endl;
        cout << "Você deseja adicionar uma nova palavra ao banco? (S/N)" << endl;
        char resposta;
        cin >> resposta;
        if(resposta == 'S'){
            adiciona_palavra();
        }
    }
}