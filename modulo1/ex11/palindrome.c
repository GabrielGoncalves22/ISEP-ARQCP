#include "array_helper.h"
#include "char_helper.h"

/* Função para verificar se uma dada frase/palavra presente num dado endereço é palíndromo.
 * A função recebe como parâmetro um apontador para um array de chars.
 * A função retorna 1 ou 0, dependendo se a frase/palavra é ou não é palíndromo.
 */
int palindrome(char *str) {
	
	// Variável para saber enquanto a frase/palavra é palíndromo nas
	// diferentes posições
	int is_palindrome = 1;
	
	char *end_ptr;
	// Atribuir o endereço do último caracter da frase/palavra str ao apontador
	end_ptr = find_last_index_address(str);

	// Valida se o valor passado por parâmetro contém apenas um caracter
	// e se esse mesmo caracter é inválido
	if (str == end_ptr && !valid_char(*str)) {
		is_palindrome = 0;
	}

	// Variável utilizada para saber se os caracteres presentes nos endereços
	// a trabalhar se encontram ou não válidos
	char valid_chars;

	// Ciclo para percorrer a frase/palavra enquanto o endereço que começa
	// no início da frase é menor do que o endereço que começa no final da 
	// frase/palavra, e também enquanto os caracteres forem correspondendo
	while (str < end_ptr && is_palindrome) {

		valid_chars = 1;

		// Valida o caracter que se encontra no endereço apontado pelo apontador str
		if (!valid_char(*str)) {
			str++;
			valid_chars = 0;
		}
		
		// Valida o caracter que se encontra no endereço apontado pelo apontador end_ptr
		if (!valid_char(*end_ptr)) {
			end_ptr--;
			valid_chars = 0;
		}
		
		// Se os caracteres forem válidos
		if (valid_chars) {
			// Verifica se as posições válidas atuais dos apontadores
			// str e end_ptr contem um valor ASCII igual
			if (equals_chars(*str, *end_ptr)) {
				str++;
				end_ptr--;
			} else {
				is_palindrome = 0;
			}
		}

	}

	return is_palindrome;

}
