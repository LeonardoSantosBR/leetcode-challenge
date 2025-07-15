# 682. Baseball Game (Fácil)

Você está mantendo as pontuações para um jogo de beisebol com regras estranhas.No
Início do jogo, você começa com um recorde vazio.

Você recebe uma lista de strings `operações ', onde` operações [i] `é o
`it` Operação Você deve se inscrever no registro e é um dos seguintes:

* Um número inteiro `x`.
* Registre uma nova pontuação de `x`.
* `'+'`.
* Registre uma nova pontuação que é a soma das duas pontuações anteriores.
* `'D'`.
* Registre uma nova pontuação que é o dobro da pontuação anterior.
* `'C''t.
* Invalida a pontuação anterior, removendo -a do registro.

Retornar _A soma de todas as pontuações no registro depois de aplicar todo o
operações_.

Os casos de teste são gerados de modo que a resposta e todo o intermediário
Os cálculos se encaixam em um número inteiro ** de 32 bits ** e que todas as operações são válidas.

## Exemplo 1:



Entrada: Ops = ["5", "2", "C", "D", "+"]
Saída: 30
Explicação:
"5" - Adicionar 5 ao registro, o registro é agora [5].
"2" - Adicionar 2 ao registro, o registro é agora [5, 2].
"C" - invalida e remova a pontuação anterior, o registro agora é [5].
"D" - Adicione 2 * 5 = 10 ao registro, o registro agora é [5, 10].
" +" - Adicione 5 + 10 = 15 ao registro, o registro agora é [5, 10, 15].
A soma total é 5 + 10 + 15 = 30.


## Exemplo 2:



Entrada: Ops = ["5", "-2", "4", "C", "D", "9", "+", "+"]
Saída: 27
Explicação:
"5" - Adicionar 5 ao registro, o registro é agora [5].
"-2" -Adicionar -2 ao registro, o registro agora é [5, -2].
"4" - Adicionar 4 ao registro, o registro agora é [5, -2, 4].
"C" - invalida e remova a pontuação anterior, o registro agora é [5, -2].
"D" -adicione 2 * -2 = -4 ao registro, o registro agora é [5, -2, -4].
"9" -Adicionar 9 ao registro, o registro agora é [5, -2, -4, 9].
" +" -Adicione -4 + 9 = 5 ao registro, o registro agora é [5, -2, -4, 9, 5].
" +" -Adicione 9 + 5 = 14 ao registro, o registro agora é [5, -2, -4, 9, 5, 14].
A soma total é 5 + -2 + -4 + 9 + 5 + 14 = 27.


## Exemplo 3:



Entrada: Ops = ["1", "C"]
Saída: 0
Explicação:
"1" - Adicionar 1 ao registro, o registro é agora [1].
"C" - invalida e remova a pontuação anterior, o registro agora é [].
Como o registro está vazio, a soma total é 0.


## restrições

* `1 <= operações.length <= 1000`
* `operações [i]` is `" c "`, `" d "`, `"+"` ou uma string representando um número inteiro no intervalo `[-3 * 104, 3 * 104]`.
* Para a operação `"+"`, sempre haverá pelo menos duas pontuações anteriores no registro.
* Para operações `" c "` e `" d "`, sempre haverá pelo menos uma pontuação anterior no recorde.
