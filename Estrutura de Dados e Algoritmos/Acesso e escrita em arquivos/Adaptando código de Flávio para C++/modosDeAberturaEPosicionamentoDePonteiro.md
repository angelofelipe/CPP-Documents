

### Todos os modos de abertura de arquivo em c++
#### E seus respectivos modos em c

> wb, wb+, rb, rb+, ab, ab+   :=      ```ios::binary```
>
> wb+, rb, rb+, ab+           :=      ```ios::in```
>
> wb, wb+, rb+, ab, ab+       :=      ```ios::out```
>
> wb, wb+                     :=      ```ios::trunc```
>
> ab, ab+                     :=      ```ios::app```

##### Ex:
``` c++
file.open("dados", ios::binary | ios::in | ios::out | ios::trunc);  // ios:app
```
### Todos os modos de definir a posição atual do ponteiro no arquivo

* SEEK_SET → ```ios::beg```
* SEEK_CUR → ```ios::cur```
* SEEK_END → ```ios::end```


---

### CONSTANTES DA BIBLIOTECA: ```#include <fcntl.h>```
* ```O_RDONLY:``` Abre o arquivo apenas para leitura.
* ```O_WRONLY:``` Abre o arquivo apenas para escrita.
* ```O_RDWR:``` Abre o arquivo tanto para leitura quanto para escrita.

* ```O_CREAT:``` Cria o arquivo se ele não existir.
* ```O_TRUNC:``` Trunca o arquivo para zero bytes se ele já existir.

``` c++
int fd = open("dados", O_RDWR | O_CREAT, 0644);
// Já define as permissões que o arquivo terá quando for criado. É uma função de mais baixo nível.
```

### Função que importa a função ftruncate: #include <unistd.h>

``` c++
ftruncate(f, 10 * sizeof(Registro))
```