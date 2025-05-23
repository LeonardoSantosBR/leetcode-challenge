# 2648. Number of Ways to Earn Points (Difícil)

Há um teste que possui `n` tipos de perguntas.Você recebe um número inteiro
`Target` e A ** 0-Indexed ** 2D Array inteiro` Types` Onde `tipos [i] =
[Counti, Marksi] `indica que existem` counti ', questões do `iTh'
Tipo, e cada um deles vale a pena `Marksi '.

Retornar _ o número de maneiras de ganhar ** exatamente ** _`target` _points no
exame_.Como a resposta pode ser muito grande, devolva -a ** MODULO ** `109 + 7`.

** Nota ** que as perguntas do mesmo tipo são indistinguíveis.

* Por exemplo, se houver `3 'do mesmo tipo, resolver as perguntas` 1st` e `2nd` é a mesma que resolver as perguntas' 1st` e` 3rd`, ou as perguntas `2nd` e` 3rd`.

## Exemplo 1:



Entrada: Target = 6, tipos = [[6,1], [3,2], [2,3]]
Saída: 7
Explicação: Você pode ganhar 6 pontos de uma das sete maneiras:
- Resolva 6 questões do 0º tipo: 1 + 1 + 1 + 1 + 1 + 1 = 6
- Resolva 4 perguntas do tipo 0 e 1 Pergunta do 1º Tipo: 1 + 1 + 1 + 1 + 2 = 6
- Resolva 2 questões do tipo 0 e 2 perguntas do 1º tipo: 1 + 1 + 2 + 2 = 6
- Resolva 3 perguntas do tipo 0 e 1 Pergunta do 2º tipo: 1 + 1 + 1 + 3 = 6
- Resolva 1 Pergunta do tipo 0, 1 Pergunta do 1º tipo e 1 Pergunta do 2º Tipo: 1 + 2 + 3 = 6
- Resolva 3 questões do 1º tipo: 2 + 2 + 2 = 6
- Resolva 2 questões do 2º tipo: 3 + 3 = 6


## Exemplo 2:



Entrada: Target = 5, tipos = [[50,1], [50,2], [50,5]]
Saída: 4
Explicação: Você pode ganhar 5 pontos de uma das quatro maneiras:
- Resolva 5 questões do 0º tipo: 1 + 1 + 1 + 1 + 1 = 5
- Resolva 3 questões do tipo 0 e 1 Pergunta do 1º Tipo: 1 + 1 + 1 + 2 = 5
- Resolva 1 questões do tipo 0 e 2 perguntas do 1º tipo: 1 + 2 + 2 = 5
- Resolva 1 Pergunta do 2º Tipo: 5


## Exemplo 3:



Entrada: Target = 18, tipos = [[6,1], [3,2], [2,3]]
Saída: 1
Explicação: Você só pode ganhar 18 pontos respondendo a todas as perguntas.


## restrições

* `1 <= destino <= 1000`
* `n == types.length`
* `1 <= n <= 50`
* `tipos [i] .Length == 2`
* `1 <= counti, marksi <= 50`
