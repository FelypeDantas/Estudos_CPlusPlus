#pragma once
#include <string>

class Cpf
{
private:
    std::string numero;
public:
    explicit Cpf(std::string numero);
    Cpf(const Cpf& cpf);
    std::string recuperaNumero() const;
};

