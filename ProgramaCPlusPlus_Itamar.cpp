#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	//criando variaveis para os dados de entrada
	int matricula;
	string nome; 
	int tempo_de_casa;
	float mes_1;
	float mes_2;
	float mes_3;

	//obtendo dados de entrada
	cout << "Calculando sua comissao" << endl;
	cout << "Por favor, informe a sua matricula: ";
	cin >> matricula;
	cin.clear();
	cout << endl;
	
	cout << "Por favor, informe a seu nome: ";
	cin >> nome;
	cin.clear();
	cout << endl;
	
	cout << "Por favor, informe o seu tempo de casa: ";
	cin >> tempo_de_casa;
	cin.clear();
	cout << endl;
	
	cout << "Por favor, informe o valor de vendas do mes 1: ";
	cin >> mes_1;
	cin.clear();
	cout << endl;
	
	cout << "Por favor, informe o valor de vendas do mes 2: ";
	cin >> mes_2;
	cin.clear();
	cout << endl;
	
	cout << "Por favor, informe o valor de vendas do mes 3: ";
	cin >> mes_3;
	cin.clear();
	cout << endl;
	
	float comissao_1;
	float comissao_2;
	float comissao_3;
	float total_da_comissao;
	
	//processando as entradas		
	if(tempo_de_casa >= 10) {
		comissao_1 = mes_1 * 0.1;
		comissao_2 = mes_2 * 0.12;
		comissao_3 = mes_3 * 0.15;
	} else {
		comissao_1 = mes_1 * 0.1;
		comissao_2 = mes_2 * 0.1;
		comissao_3 = mes_3 * 0.1;
	}
	
	//calculando o total da comissao
	total_da_comissao = comissao_1 + comissao_2 + comissao_3;
	
	//imprimindo os resultados encontrados
	cout << "Valor da comissao do mes 1: " << comissao_1 << endl;
	cout << "Valor da comissao do mes 2: " << comissao_2 << endl;
	cout << "Valor da comissao do mes 3: " << comissao_3 << endl;
	cout << "Valor total da comissao: " << total_da_comissao << endl;
	
	system("PAUSE");
	return 0;
}




