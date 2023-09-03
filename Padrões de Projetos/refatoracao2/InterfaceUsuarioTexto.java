package com.mycompany.refatoracao2;

import java.util.Scanner;

public class InterfaceUsuarioTexto {
    
    private Scanner console = new Scanner(System.in);

    public int lerNumeroDeTermos() {
        return lerNumero("Digite o número de termos da PA:", 2, Integer.MAX_VALUE);
    }
    
    public int lerPrimeiroTermo() {
        return lerNumero("Digite o primeiro termo da PA:", 1, Integer.MAX_VALUE);
    }
    
    public int lerRazao() {
        return lerNumero("Digite a razão da PA:", 1, Integer.MAX_VALUE);
    }
    
    private int lerNumero(String mensagem, int numeroMinimo, int numeroMaximo) {
    int numero = numeroMinimo - 1; // Inicializar com um valor fora do intervalo válido
    while (numero < numeroMinimo || numero > numeroMaximo) {
        System.out.println(mensagem);
        numero = console.nextInt();
    }
    return numero;
}

    
    public void imprimirTodosTermos(ProgressaoAritmetica pa, int numeroDeTermos) {
        for (int i = 1; i <= numeroDeTermos; i++) {
            int termoI = pa.termoDeIndice(i);
            System.out.printf("a%d=%d\n", i, termoI);
        }
    }
}
