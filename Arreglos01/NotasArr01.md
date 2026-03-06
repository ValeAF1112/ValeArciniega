# Notas
Un arreglo es un conjunto de datos del mismo tipo.

Para definir una variable como arreglo se hace de la siguiente manera: 

       float temp[24]; 
"float" es el tipo de dato que tendra el arreglo, "temp" es la etiqueta y "[24]" Se refiere a la cantidad de valores que tendrá el arreglo.

También "temp" funciona como la dirección de memoria de el arreglo, por eso cuando buscamos imprimir la dircción de memoria de este no es necesario el &.

       printf("Dirección de memoria del arreglo temp[24]: %i", &temp");
Cuando tenemos, por ejemplo, un arreglo de 24 valores del mismo tipo, se guardan 24 espacios en la memoria (24 espacios de los bits que necesita el tipo de dato del arreglo). Es decir, si es un arreglo de 24 flotantes, el flotante necesita 4 bytes, 24 * 4 = 96, entonces para este arreglo se guardan 96 espacios en la memoria (o bytes).
