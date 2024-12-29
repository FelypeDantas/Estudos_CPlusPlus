#include "Cpf.hpp"
#include <iostream>

Cpf::Cpf(std::string numero): numero(numero)
{
    std::cout << "Cpf criado" << std::endl;
}

Cpf::Cpf(const Cpf& cpf)
{
    std::cout << "Cpf copiado" << std::endl;
    numero = cpf.recuperaNumero();
}

std::string Cpf::recuperaNumero() const
{
    return numero;
}