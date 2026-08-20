# ITP 2026.2 — Introdução a Técnicas de Programação

Repositório com o material didático (exemplos e exercícios em C) da disciplina
**Introdução a Técnicas de Programação (ITP)**, do curso de Bacharelado em
Tecnologia da Informação — IMD/UFRN.

O conteúdo está organizado por aula, cada uma em sua própria pasta.

## Pré-requisitos

- Compilador C (`gcc` ou `clang`)
- Terminal/shell para compilar e executar os programas

## Como compilar e executar um exemplo

Cada arquivo `.c` é um programa independente. Para compilar e rodar:

```bash
gcc <pasta-da-aula>/<arquivo>.c -o <saida>
./<saida>
```

Exemplo:

```bash
gcc aula02/parimpar.c -o parimpar
./parimpar
```

> Os binários compilados (arquivos sem extensão, como `hello`, `escolha`,
> `parimpar`, `condicional`) não devem ser versionados — veja `.gitignore`.
> Recompile sempre após alterar o código-fonte.

## Aulas

### [Aula 01](aula01) — Primeiro programa em C

Introdução à estrutura básica de um programa em C: diretivas `#include`,
função `main`, e a função `printf`.

| Arquivo | Descrição |
|---|---|
| [`hello.c`](aula01/hello.c) | Programa clássico "Hello, World!" |

### [Aula 02](aula02) — Estruturas condicionais

Estruturas de decisão da linguagem C: `if`/`else`, encadeamento com
`else if`, operadores lógicos, e o comando `switch`/`case` como alternativa
a cadeias de `if/else if`.

| Arquivo | Descrição |
|---|---|
| [`condicional.c`](aula02/condicional.c) | Avaliação de condições booleanas em C, operador de negação `!` e encadeamento de `else if`. |
| [`parimpar.c`](aula02/parimpar.c) | Uso do operador `%` (resto da divisão) combinado com `&&` para verificar se um número é par e positivo. |
| [`escolha.c`](aula02/escolha.c) | Comparação entre `if/else if` e `switch/case`, incluindo `case` agrupados (fall-through) e `default`. |

## Pontos de atenção para estudo

- **Em C não existe tipo booleano nativo** (antes de C99/C23): qualquer valor
  inteiro diferente de zero é tratado como verdadeiro, e zero como falso.
- **`else if` não é uma palavra-chave especial** — é apenas um `else` seguido
  de outro `if`.
- **Cuidado com o `break` no `switch`**: sem ele, a execução "cai" para o
  próximo `case` (fall-through) — veja o exemplo comentado em `escolha.c`.
- **Curto-circuito do `&&`**: a segunda condição só é avaliada se a primeira
  já for verdadeira.

## Autor

Gustavo Leitão — gustavo.leitao@imd.ufrn.br
