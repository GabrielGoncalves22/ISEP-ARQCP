## Descrição da US110
A informação de cada sensor deve ser armazenada numa estrutura.
Cada tipo de sensor possui uma determinada frequência de leituras. Essa frequência deve ser obtida durante a execução do programa, a partir de um ficheiro de configuração, ou perguntando ao utilizador. Naturalmente, essa frequência determina o tamanho do array de leituras diárias.

**Critério de aceitação:** Deve ser possível ter vários sensores de um mesmo tipo, cujo número é também determinado durante a execução. Para cada tipo de sensor considerado, deve existir um array dinâmico de estruturas.