package execucao;
import modelo.*; // * representa tudo (acessar todas as classes do pacote modelo)

public class Principal2 {

		public static void main(String[] args) {
			
			ClientePf pf = new ClientePf(); //Instanciando a classe ClientePf (Acessando o objeto pf : mostra tudo o que está publico)
	
			pf.nome = "David";
			pf.email = "david@gmail.com";
			pf.telefone = "2196969783";
			pf.cpf = "12345678912";
			pf.idade = 20;
			
			pf.depositar();
			pf.sacar();
			pf.retirarExtrato();
			pf.verificarIdade(); //testar método.
			
		}
}
