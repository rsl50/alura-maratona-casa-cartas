Curso de Maratona de programação: Algoritmos para sua primeira competição
---------
<img src="https://www.alura.com.br/assets/api/cursos/maratona-de-programacao.svg" data-canonical-src="https://www.alura.com.br/assets/api/cursos/maratona-de-programacao.svg" width="250" height="250" />

https://cursos.alura.com.br/course/maratona-de-programacao

## Temas abordados
* Começando o treinamento
* Ordenação
* Recursão
* Busca binária
* Introdução à Programação dinâmica


## Casa das Cartas

https://neps.academy/problem/249

O presidento Vampirão está com algumas dificuldades em conduzir o país. Recentemente, muitas empresas lhe encaminharam propina para que ele consiga aprovar, na câmara, medidas que reduzam os impostos cobrados a elas. Como acabou de assumir seu posto e o país anda em um momento político delicado, ele sabe que só pode aceitar um dos pedidos de propina, caso contrário, ficaria muito claro o esquema e a população poderia se indignar e tirá-lo.

Como são muitas as ofertas, o presidento foi visitar um antigo amigo em seu sítio, o Molusco, para perguntar qual pedido devia aceitar. Muito experiente, Molusco ensinou Vampirão um esquema em que ele ainda rouba a própria empresa e fica com um pouco, o suficiente para uma reforma no apartamento, por exemplo. Há *N* empresas ofertando propina. A empresa *i* oferta extamente *vi* reais. Como a câmara tem *M* deputados, Vampirão deve dividir igualmente o valor da propina entre os deputados, dando-lhes o máximo possível (que possa ser igualmente dividido) para evitar suspeitas para si, ficando apenas com o que restar disso.

Vampirão achou o plano genial e está pronto para colocá-lo em prática. Pelo modo como será feito, ele deseja ordenar as *N* ofertas de propina da melhor para a pior. A oferta *i* é melhor que a *j* se o presidento ganha mais dinheiro com *i* do que com *j* ou se ele ganha o mesmo em ambas mas, em *i*, os deputados ganham mais que em *j*

Você é o técnico de informática do Paláco do Crepúsculo (assim renomeado porque o presidento não gosta muito de luz) e foi incubido de, dadas as *N* ofertas, imprimir uma lista das ofertas, ordenados da melhor para a pior, segundo os critérios presidenciais definidos.

**Entrada**
A primeira linha da entrada contém dois inteiros: *N* e *M*. A segunda linha contém *N* inteiros: os valores de *v1,v2, ...,vn*.

**Saída**
Seu programa deve gerar uma única linha com *N* inteiros: os valores das ofertas de propina, ordenados do melhor para o pior.

**Exemplos**

```
Entrada:
3 5
10 7 4

Saída:
4 7 10

Entrada:
5 10
12 13 45001 27 19

Saída:
19 27 13 12 45001
````

**Note**
> In the first sample, the first player erases *3* and the second erases *1*. *2* is left on the board.

> In the second sample, *2* is left on the board regardless of the actions of the players.