#include <stdio.h>

/*
 * Função para imprimir no ecrã a posição de um dado array e o respetivo valor armazenado.
 * Recebe como parâmetro um apontador de shorts para o início do array, e recebe também o número
 * de valores que o array contém (ou seja, o seu tamanho).
 */
void print_vec_short(short *vec, int size) {
	for(int pos = 0; pos < size; pos++){
		printf("Posição %d: %d:%p\n", pos, *vec, vec);
		vec++;
	}
}
