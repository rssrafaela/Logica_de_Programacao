package modelo;

public class ClientePf extends Cliente { //A classe ClientePf vai herdar a classe Cliente. (herança)
	
		public String cpf; //CPF é considerado texto (não é tratado como um valor)
		public Integer idade;
		
		public void verificarIdade() {
			if(idade >=18){
				System.out.println("Maior de idade");
			}
			else{
				System.out.println("Menor de idade");
			}
		}
}
