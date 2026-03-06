# Notas
Un arreglo es un conjunto de datos del mismo tipo.

Para definir una variable como arreglo se hace de la siuiente manera: 

       **float temp[24];** 
"float" es el tipo de dato que tendra el arreglo, "temp" es la etiqueta y "[24]" Se refiere a la cantidad de valores que tendrá el arreglo.

También "temp" funciona como la dirección de memoria de el arreglo, por eso cuando buscamos imprimir la dircción de memoria de este no es necesario el &.

       **printf("Dirección de memoria del arreglo temp[24]: %i", &temp");**
