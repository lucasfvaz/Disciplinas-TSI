package com.mycompany.refatoracao2;

public class ProgressaoAritmetica {
    
    private int primeiroTermo;
    private int diferencaComum;
    
    public ProgressaoAritmetica(int primeiroTermo, int diferencaComum) {
        this.primeiroTermo = primeiroTermo;
        this.diferencaComum = diferencaComum;
    }
    
    public int termoDeIndice(int indice) {
        int termo = primeiroTermo + (indice - 1) * diferencaComum;
                
        return termo;
    }
    
    public int somaDeTodosTermos(int numeroDeTermos) {
        int ultimoTermo = termoDeIndice(numeroDeTermos);
        int soma = (((primeiroTermo + ultimoTermo) * numeroDeTermos) / 2);
        
        return soma;
    }
}
