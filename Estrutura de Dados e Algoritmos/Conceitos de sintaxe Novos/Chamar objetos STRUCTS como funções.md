# Chamar objetos STRUCTS como funções

No C++, o uso de `operator()` dentro de uma `struct` ou `class` é conhecido como **sobrecarga do operador de chamada de função**. Isso transforma a `struct` ou `class` em um objeto que pode ser chamado como uma função.

Aqui está o que isso significa e como funciona:

### Sobrecarga do Operador de Chamada de Função

Quando você define `operator()` dentro de uma `struct` ou `class`, você está criando um objeto que pode ser usado como uma função. Isso é útil para definir comportamentos que são usados como funções, como em comparadores de prioridades em filas (`priority_queue`), funções de comparação em algoritmos, ou qualquer outro caso onde você precisa de um objeto que se comporte como uma função.

### Exemplo Prático

Considere a seguinte `struct` usada como um comparador:

```cpp
struct ComparadorValorBinary {
    bool operator()(const ValorBinary& a, const ValorBinary& b) {
        if (a.ocupado != b.ocupado) {
            return a.ocupado > b.ocupado; // True é considerado maior (menor na ordenação)
        }
        if (a.registroFalso != b.registroFalso) return a.registroFalso < b.registroFalso;
        if (a.valor != b.valor) return a.valor < b.valor;
        if (a.sequencia != b.sequencia) return a.sequencia < b.sequencia;
        if (a.tamSequencia != b.tamSequencia) return a.tamSequencia < b.tamSequencia;
        if (a.posicao != b.posicao) return a.posicao < b.posicao;
        return a.arquivoOrigem < b.arquivoOrigem;
    }
};
```

Aqui, `operator()` permite que você use `ComparadorValorBinary` como se fosse uma função que compara dois objetos `ValorBinary`. Por exemplo:

```cpp
std::priority_queue<ValorBinary, std::vector<ValorBinary>, ComparadorValorBinary> pq;
```

Neste caso, `ComparadorValorBinary` define a ordem dos elementos na `priority_queue`. A `priority_queue` utiliza `operator()` para comparar os elementos e decidir a ordem.

### Comparação com Operadores de Comparação

Os operadores de comparação (`<`, `>`, `==`, etc.) são usados para comparar dois valores diretamente. Quando você define `operator()` em uma `struct`, você está criando um objeto que pode ser chamado para realizar a comparação, semelhante a como um operador de comparação é usado.

**Diferença:**
- **Operadores de comparação**: Usados diretamente para comparar dois valores.
- **`operator()`**: Permite que um objeto se comporte como uma função, útil para definir comparadores ou outras funcionalidades que são usadas como funções.

### Resumo

- **`operator()`** permite que você defina como um objeto deve se comportar quando chamado como uma função. 
- Isso é útil para criar comparadores e outras funções que precisam ser usadas em contextos onde funções são esperadas.

Se você tiver mais perguntas sobre isso ou qualquer outro tópico, sinta-se à vontade para perguntar!