# Lambda Functions

Sim, você pode usar uma função lambda dentro de uma função de uma `struct` ou classe e retornar essa lambda para que ela esteja associada à `struct` ou classe. Isso é útil quando você deseja encapsular a lógica de comparação ou outra funcionalidade dentro de uma `struct` ou classe, mantendo o código mais organizado.

Aqui está um exemplo de como você pode fazer isso:

```cpp
#include <iostream>
#include <queue>
#include <vector>
#include <functional>

struct ValorBinary {
    int valor;
    // Outros campos...

    // Método que retorna uma função lambda para comparação
    static auto obterComparador() {
        return [](const ValorBinary& a, const ValorBinary& b) {
            return a.valor > b.valor; // Ordena em ordem decrescente
        };
    }
};

int main() {
    // Obtendo a função lambda do método estático
    auto comparador = ValorBinary::obterComparador();
    
    // Inicializando a priority_queue com a lambda obtida
    std::priority_queue<ValorBinary, std::vector<ValorBinary>, decltype(comparador)> fila(comparador);

    // Adicionando elementos à fila
    fila.push(ValorBinary{10});
    fila.push(ValorBinary{20});

    // Exibindo o elemento com maior valor
    std::cout << "Maior valor: " << fila.top().valor << std::endl;

    return 0;
}
```

### Explicação

- **Método Estático `obterComparador()`**:
  - O método `obterComparador()` é estático e retorna uma lambda que pode ser usada para comparação.
  - Ele encapsula a lógica de comparação dentro da `struct` `ValorBinary`.

- **Uso da Lambda**:
  - No `main()`, você chama `ValorBinary::obterComparador()` para obter a função lambda.
  - Esta lambda é então passada para a `priority_queue` como o comparador.

### Benefícios

- **Organização**: Mantém o código de comparação encapsulado dentro da `struct`, o que pode ser útil se a lógica de comparação estiver intimamente relacionada aos dados armazenados na `struct`.
- **Reusabilidade**: Permite que você use a lógica de comparação em diferentes partes do código sem precisar repetir a mesma lambda.

Se você quiser associar a lambda a uma instância da `struct` em vez de usá-la estaticamente, você pode fazer isso com métodos não estáticos. Se precisar de mais exemplos ou tiver dúvidas adicionais, sinta-se à vontade para perguntar!

## CÓDIGO MODIFICADO PARA EVITAR LAMBDA FUNCTIONS
* UTILIZANDO A STRUCT QUE FAZ A CHAMADA FICAR MAIS LIMPA
* SEM PRECISAR INSTANCIAR A FUNÇÃO COMO VARIÁVEL E USAR DECLTYPE PARA SABER O TIPO

```cpp

#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

struct ValorBinary {
    int valor;
    // Outros campos...

    // Método que retorna uma função lambda para comparação
    static auto obterComparador() {
        return [](const ValorBinary& a, const ValorBinary& b) {
            return a.valor > b.valor; // Ordena em ordem decrescente
        };
    }

    // Forma padrão sem funções Lambda
    // Comparador definido dentro da struct
    struct Comparador {
        bool operator()(const ValorBinary& a, const ValorBinary& b) {
            return a.valor < b.valor; // Ordena em ordem crescente
        }
    };
};

int main() {
    // Obtendo a função lambda do método estático
    auto comparador = ValorBinary::obterComparador();
    
    // Inicializando a priority_queue com a lambda obtida
    priority_queue<ValorBinary, vector<ValorBinary>, decltype(comparador)> fila(comparador);

    // Forma padrão sem funções Lambda
    // Comparador definido dentro da struct
    priority_queue<ValorBinary, vector<ValorBinary>, ValorBinary::Comparador> fila2;


    // Adicionando elementos à fila
    fila.push(ValorBinary{10});
    fila.push(ValorBinary{20});

    // Exibindo o elemento com maior valor
    cout << "Maior valor: " << fila.top().valor << endl;

    return 0;
}
```
