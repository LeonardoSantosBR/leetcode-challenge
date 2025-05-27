# 12. Integer to Roman (Médio)

Sete símbolos diferentes representam algarismos romanos com os seguintes valores:

Símbolo |Valor
--- | ---
I |1
V |5
X |10
L |50
C |100
D |500
M |1000

Os algarismos romanos são formados ao anexar as conversões de valores de lugar decimal
do mais alto para o mais baixo.Convertendo um valor de lugar decimal em um número romano
tem as seguintes regras:

* Se o valor não começar com 4 ou 9, selecione o símbolo do valor máximo que pode ser subtraído da entrada, anexa esse símbolo ao resultado, subtraia seu valor e converta o restante em um número romano.
*Se o valor começar com 4 ou 9, use a forma ** subtrativa ** representando um símbolo subtraído do símbolo a seguir, por exemplo, 4 é 1 (`i`) menor que 5 (` v`): `iv` e 9 é 1 (` i`) menor que 10 (`x`):` ix`.Somente as seguintes formas subtrativas são usadas: 4 (`iv`), 9 (` ix`), 40 (`xl`), 90 (` xc`), 400 (`cd`) e 900 (` cm`).
* Apenas poderes de 10 (`i`,` x`, `c`,` m`) podem ser anexados consecutivamente no máximo três vezes para representar múltiplos de 10. Você não pode anexar 5 (`v`), 50 (` l`) ou 500 (`d`) várias vezes.Se você precisar anexar um símbolo 4 vezes, use o formulário ** subtrativo **.

Dado um número inteiro, converta -o em um número romano.

## Exemplo 1:

Entrada: num = 3749

Saída: "mmmdccxlix"

Explicação:



3000 = mmm como 1000 (m) + 1000 (m) + 1000 (m)
700 = DCC como 500 (d) + 100 (c) + 100 (c)
40 = xl como 10 (x) menos de 50 (l)
9 = ix como 1 (i) menos de 10 (x)
Nota: 49 não é 1 (i) menos de 50 (l) porque a conversão é baseada em lugares decimais


## Exemplo 2:

Entrada: num = 58

Saída: "LVIII"

Explicação:



50 = l
8 = viii


## Exemplo 3:

Entrada: num = 1994

Saída: "McMxCiv"

Explicação:



1000 = m
900 = cm
90 = XC
4 = iv


## restrições

* `1 <= num <= 3999`
