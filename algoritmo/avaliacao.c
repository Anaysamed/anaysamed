algoritmo "autoavaliação.raiz"
var
x1, x2, y1, y2: inteiro
d: real
inicio
escreval ("digite os dois primeiros numeros")
leia (x1, x2)
escreval ("digite os dois ultimos numeros")
leia (y1, y2)
d := (raizq((x2 - x1)^2) + ((y2 - y1)^2))
escreval("O valor da distancia é: ", d)

fimalgoritmo
