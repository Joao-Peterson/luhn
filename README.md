Programa para cálculo de checksum e digitio verificar utilizando algoritmo de Luhn.
O programa roda na linha de comando da seguint forma:

```c
$ luhn.exe 1238
```
Apenas um argumento, sendo este o número. O resultado será:
```c
$ Luhn checksum mod 10 is: [8], the number is invalid.
$ Next check digit is: [5].
```
Onde a chacegem por resto 10 será 8, e o próximo digito verificador será 5. Nota se que o número não é válido 
pois ainda não tem o digito verificador.

Ao se concatenar o número com 5 tem se:
```c
$ luhn.exe 12385
$ Luhn checksum mod 10 is: [0], the number is valid.
$ Next check digit is: [1].
```
Como agora o numero tem digito verificador, ele é válido, se algum digito do número mudar, ele irá ser inválidado.
Pode se continuar concatenando mais digitos verificadores, no ultimo exemplo, ainda podia se concatenar o digito 1.

Autor: João Peterson Scheffer.
Revisão: 20/10/21.

