Programa para c�lculo de checksum e digitio verificar utilizando algoritmo de Luhn.
O programa roda na linha de comando da seguint forma:

$ luhn.exe 1238

Apenas um argumento, sendo este o n�mero. O resultado ser�:

$ Luhn checksum mod 10 is: [8], the number is invalid.
$ Next check digit is: [5].

Onde a chacegem por resto 10 ser� 8, e o pr�ximo digito verificador ser� 5. Nota se que o n�mero n�o � v�lido 
pois ainda n�o tem o digito verificador.

Ao se concatenar o n�mero com 5 tem se:

$ luhn.exe 12385
$ Luhn checksum mod 10 is: [0], the number is valid.
$ Next check digit is: [1].

Como agora o numero tem digito verificador, ele � v�lido, se algum digito do n�mero mudar, ele ir� ser inv�lidado.
Pode se continuar concatenando mais digitos verificadores, no ultimo exemplo, ainda podia se concatenar o digito 1.

Autor: Jo�o Peterson Scheffer.
Revis�o: 20/10/21.

