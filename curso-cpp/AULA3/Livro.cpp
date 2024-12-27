#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Livro {
    string titulo;
    string autor;
    int codigoISBN;
    bool status;  // true = disponível, false = emprestado
};

struct Usuario {
    string nome;
    string email;
    vector<Livro> livrosEmprestados;
};

// Estrutura para representar um Empréstimo
struct Emprestimo {
    Livro livro;
    Usuario usuario;
    string dataEmprestimo;
    string dataDevolucao;
};

// Função para emprestar livro a um usuário
void emprestarLivro(Emprestimo &emprestimo, Livro &livro, Usuario &usuario, const string &dataEmprestimo) {
    if (livro.status) {
        // Adiciona o livro à lista de livros emprestados do usuário
        usuario.livrosEmprestados.push_back(livro);
        
        // Marca o livro como emprestado
        livro.status = false;

        // Registra o empréstimo
        emprestimo.livro = livro;
        emprestimo.usuario = usuario;
        emprestimo.dataEmprestimo = dataEmprestimo;
        emprestimo.dataDevolucao = "Pendente";  // A devolução ainda não foi realizada

        cout << "Livro emprestado com sucesso!" << endl;
    } else {
        cout << "Livro não disponível no momento!" << endl;
    }
}

// Função para devolver livro de um usuário
void devolverLivro(Emprestimo &emprestimo, Livro &livro, Usuario &usuario, const string &dataDevolucao) {
    // Procura o livro na lista de livros emprestados do usuário
    for (auto it = usuario.livrosEmprestados.begin(); it != usuario.livrosEmprestados.end(); ++it) {
        if (it->codigoISBN == livro.codigoISBN) {
            usuario.livrosEmprestados.erase(it);  // Remove o livro da lista de livros emprestados
            livro.status = true;  // Marca o livro como devolvido

            // Atualiza a data de devolução
            emprestimo.dataDevolucao = dataDevolucao;

            cout << "Livro devolvido com sucesso!" << endl;
            return;
        }
    }
    cout << "Livro não foi emprestado para este usuário!" << endl;
}

// Função para listar livros emprestados de um usuário
void listarLivrosEmprestados(const Usuario &usuario) {
    cout << "Livros emprestados por " << usuario.nome << ":" << endl;
    if (usuario.livrosEmprestados.empty()) {
        cout << "Nenhum livro emprestado." << endl;
    } else {
        for (const auto &livro : usuario.livrosEmprestados) {
            cout << "Título: " << livro.titulo << ", Autor: " << livro.autor << ", ISBN: " << livro.codigoISBN << endl;
        }
    }
}

int main() {
    // Criando alguns livros
    Livro livro1 = {"O Alquimista", "Paulo Coelho", 123456, true};
    Livro livro2 = {"1984", "George Orwell", 654321, true};

    // Criando um usuário
    Usuario usuario1 = {"João Silva", "joao.silva@example.com", {}};

    // Criando um objeto de empréstimo
    Emprestimo emprestimo1;

    // Testando funções
    listarLivrosEmprestados(usuario1);  // Nenhum livro emprestado
    emprestarLivro(emprestimo1, livro1, usuario1, "2024-12-27");  // Emprestar livro1 para o usuário
    listarLivrosEmprestados(usuario1);  // Listar livros emprestados
    devolverLivro(emprestimo1, livro1, usuario1, "2024-12-28");  // Devolver livro1 para o usuário
    listarLivrosEmprestados(usuario1);  // Listar livros emprestados novamente

    return 0;
}