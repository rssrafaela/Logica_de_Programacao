package modelo;

public class Cliente {
	
	//Atributos (Características)
	public String nome;
	public String email;
	public String telefone;
	
	//Métodos (Ações) que o cliente / aluno vai ter dentro do sistema.
	public void depositar() { //Exemplo de banco
		System.out.println(nome + " Depositou!");
	}
	public void sacar() { //Exemplo de banco
		System.out.println("Sacou!");
	}
	public void retirarExtrato() { //Exemplo de banco
		System.out.println("Retirou extrato!");
	}
}
