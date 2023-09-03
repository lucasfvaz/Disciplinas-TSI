package com.mycompany.refatoracao2;

public class Aplicativo {
    
    public void executar() {
        InterfaceUsuarioTexto interfaceUsuarioTexto = new InterfaceUsuarioTexto();
        
        int numeroDeTermos = interfaceUsuarioTexto.lerNumeroDeTermos();
        ProgressaoAritmetica pa1 = criarProgressao(interfaceUsuarioTexto);
        interfaceUsuarioTexto.imprimirTodosTermos(pa1, numeroDeTermos);
        int somaPa1 = pa1.somaDeTodosTermos(numeroDeTermos);
        System.out.println("A soma da PA1 é: " + somaPa1);
        
        numeroDeTermos = interfaceUsuarioTexto.lerNumeroDeTermos();
        ProgressaoAritmetica pa2 = criarProgressao(interfaceUsuarioTexto);
        interfaceUsuarioTexto.imprimirTodosTermos(pa2, numeroDeTermos);
        int somaPa2 = pa2.somaDeTodosTermos(numeroDeTermos);
        System.out.println("A soma da PA2 é: " + somaPa2);
    }
    
    private ProgressaoAritmetica criarProgressao(InterfaceUsuarioTexto interfaceUsuarioTexto) {
        int primeiroTermo = interfaceUsuarioTexto.lerPrimeiroTermo();
        int diferencaComum = interfaceUsuarioTexto.lerRazao();
        return new ProgressaoAritmetica(primeiroTermo, diferencaComum);
    }

    public static void main(String[] args) {
        Aplicativo aplicativo = new Aplicativo();
        aplicativo.executar();
    }
}
