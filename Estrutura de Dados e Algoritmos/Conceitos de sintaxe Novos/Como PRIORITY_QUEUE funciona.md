# Como PRIORITY_QUEUE funciona
### Questions
* Aqui você passou apenas o tipo de dado usado na fila de prioridade, mas não passou o container, por que isso é possível?

* E se eu sobrecarregasse o operador de > ao invés do menor ele usaria ele por padrão ?

* E se eu sobrecarrega-se os dois (< e >) qual ele utilizaria ?

---

No caso da `priority_queue`, o comportamento padrão do comparador é definido para que o maior valor tenha a maior prioridade (isto é, o maior valor fica no topo da fila). Esse comportamento é determinado pelo uso do operador `<` para a comparação dos elementos. Aqui estão as respostas para suas perguntas:

### 1. **Tipo de Dado e Container na `priority_queue`**

Quando você declara uma `priority_queue`, você especifica o tipo de dado dos elementos e opcionalmente pode especificar o comparador e o container subjacente (que por padrão é `vector`). Se você não especificar o container, o padrão é `vector`, o que é suficiente para a maioria dos casos.

**Exemplo padrão:**

```cpp
priority_queue<ValorBinary> pq;
```

Aqui, `ValorBinary` é o tipo de dado dos elementos, e o container padrão `vector` é usado internamente.

### 2. **Sobrecarga do Operador `>`**

Se você sobrecarregar o operador `>`, a `priority_queue` ainda usará o operador `<` para ordenar os elementos, pois o comportamento padrão é manter o maior valor no topo. A `priority_queue` não usará o operador `>` diretamente. No entanto, você pode definir um comparador personalizado para alterar essa lógica.

**Exemplo de comparador personalizado que usa `>`:**

```cpp
#include <queue>
#include <vector>
#include <iostream>

struct ValorBinary {
    int valor;
    bool operator>(const ValorBinary& other) const {
        return valor > other.valor;
    }
};

// Comparador personalizado que usa o operador >
struct ComparadorMaior {
    bool operator()(const ValorBinary& a, const ValorBinary& b) const {
        return a > b; // Inverte a lógica padrão
    }
};

int main() {
    priority_queue<ValorBinary, vector<ValorBinary>, ComparadorMaior> pq;
    pq.push(ValorBinary{1});
    pq.push(ValorBinary{2});
    pq.push(ValorBinary{3});

    while (!pq.empty()) {
        cout << pq.top().valor << endl;
        pq.pop();
    }

    return 0;
}
```

### 3. **Sobrecarga dos Operadores `<` e `>`**

Se você sobrecarregar ambos os operadores `<` e `>`, a `priority_queue` ainda usará o operador `<` por padrão para determinar a ordem dos elementos. A fila de prioridade é baseada na lógica de heap, onde o maior valor é priorizado, e isso é controlado pelo operador `<`.

Se você quiser usar o operador `>` diretamente, você precisaria definir um comparador personalizado para a `priority_queue` que inverte a lógica padrão, como mostrado acima.

**Exemplo com ambos os operadores:**

```cpp
struct ValorBinary {
    int valor;
    bool operator<(const ValorBinary& other) const {
        return valor < other.valor;
    }
    bool operator>(const ValorBinary& other) const {
        return valor > other.valor;
    }
};
```

Neste caso, mesmo com ambos os operadores definidos, a `priority_queue` usará o operador `<` para ordenar, a menos que você forneça um comparador personalizado que altere o comportamento padrão.

### Resumo

- **`priority_queue` usa `<` por padrão** para ordenar os elementos, colocando o maior no topo.
- **Você pode definir um comparador personalizado** para alterar essa lógica se desejar.
- **Se você sobrecarregar `<` e `>`, a `priority_queue` ainda usará `<` por padrão**, a menos que um comparador personalizado seja fornecido.

Se precisar de mais informações ou tiver outras perguntas, estou aqui para ajudar!