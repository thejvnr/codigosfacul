import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.stream.Collectors;

public class ViewCadastro {
	private Scanner teclado;

	public ViewCadastro() {
		teclado = new Scanner(System.in);
	}

	public int mostraMenu() {
		System.out.println("MENU");
		System.out.println("1 - Inserir");
		System.out.println("2 - Listar");
		System.out.println("3 - Alterar");
		System.out.println("4 - Excluir");
		System.out.println("5 - Pesquisar");
		System.out.println("0 - Sair");
		System.out.println("Opção: ");
		return Integer.parseInt(teclado.nextLine());
	}

	public Pessoa inserir() {
		Pessoa umaPessoa = new Pessoa();
		System.out.println("INSERIR");
		System.out.println("Nome: ");
		umaPessoa.setNome(teclado.nextLine());

		System.out.println("E-Mail: ");
		umaPessoa.setEmail(teclado.nextLine());

		System.out.println("Fone: ");
		umaPessoa.setFone(teclado.nextLine());

		return umaPessoa;
	}

	public void listar(ArrayList<Pessoa> agenda) {
		System.out.println("\nLISTA DE CADASTRADOS");
		for (int pos = 0; pos < agenda.size(); pos++) {
			System.out.println("Posição: " + pos + " : " + agenda.get(pos).toString());
		}

	}

	public void alterar(ArrayList<Pessoa> agenda) {
		listar(agenda);
		boolean continuar = true;
		int pos = 0;
		 while (continuar){
			System.out.println("Digite a posição do registro para alterar: ");
			try {
				pos = Integer.parseInt(teclado.nextLine());
				if (pos >= 0 & pos < agenda.size()) {
					continuar = false;
				}else {
					System.out.println("Digite um valor válido!");
				}
			} catch (Exception e) {
				System.out.println("Valor digitado inválido!!!");
			}
		}
		
		System.out.println("Nome ("+ agenda.get(pos).getNome() +"): ");
		agenda.get(pos).setNome(teclado.nextLine());
		
		System.out.println("E-Mail ("+ agenda.get(pos).getEmail() +"): ");
		agenda.get(pos).setEmail(teclado.nextLine());
		
		System.out.println("Fone ("+ agenda.get(pos).getFone() +"): ");
		agenda.get(pos).setFone(teclado.nextLine());
		
		
	}
	
	public void remover(ArrayList<Pessoa> agenda) {
		listar(agenda);
		boolean continuar = true;
		int pos = 0;
		
		 while (continuar){
			System.out.println("Digite a posição do registro para remover: ");
			try {
				pos = Integer.parseInt(teclado.nextLine());
				if (pos >= 0 & pos < agenda.size()) {
					agenda.remove(pos);
					continuar = false;
				}else {
					System.out.println("Digite um valor válido!");
				}
			} catch (Exception e) {
				System.out.println("Valor digitado inválido!!!");
			}
		}
		
	}
	public void pesquisar(ArrayList<Pessoa> agenda) {
			System.out.println("Insira o nome que deseja buscar: ");
			List<Pessoa> retornaPesquisa = agenda.stream().filter(a -> a.getNome().equalsIgnoreCase(teclado.nextLine())).collect(Collectors.toList());
			retornaPesquisa.forEach(a -> System.out.println("\n" + a.getNome()));
	}

}
