#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	/* 
	problema
	Uma lanchonete está disponibilizando para seus clientes
	um terminal por meio do qual poderão fazer os pedidos. 
	Para que isso aconteça, o terminal deve exibir o menu de
	itens disponíveis conforme se vê a seguir:
	  
	*** Cardápio ***

100 – Hambúrguer – R$5,50

101 – Cachorro-quente – R$4,50

102 – Milkshake – R$7,00

103 – Pizza brotinho – R$8,00

104 - Cheeseburguer – R$8,50

Informe o código do seu pedido:

Uma vez que o cliente informe o código do item desejado, o terminal deverá perguntar
 a quantidade de itens que ele deseja pedir. Ao final, o usuário deverá informar o 
 pedido do cliente e o valor a pagar.
	*/
	int cod, quant;
	float result;
	
	cout << "----------";
	cout << "* * * Cardapio\n";
	cout << "100 - Hamburguer - R$ 5,50\n";
	cout << "101 - Cachorro-quente - R$ 4,50\n";
	cout << "102 - Milkshake - R$ 7,00\n";
	cout << "----------";
	cout << "Escolha pelo codigo:";
	cin >> cod;
	cout << "Quantidade desejada:";
	cin >> quant;
	
	switch (cod){
		case 100:
			cout << "-----\n";
			cout << "Voce escolheu Hamburguer\n";
			cout << "Valor un: R$5,50\n";
			cout << "Quantidade escolhida:" << quant << "\n";
			result = quant * 5.50;
			cout << "------------------\n";
			cout << "Valor a ser pago: " << result;
			break;
		case 101:
			cout << "-----\n";
			cout << "Voce escolheu Cachorro-quente\n";
			cout << "Valor un: R$4,50\n";
			cout << "Quantidade escolhida:" << quant << "\n";
			result = quant * 4.50;
			cout << "------------------\n";
			cout << "Valor a ser pago: " << result;
			break;
		case 102:
			cout << "-----\n";
			cout << "Voce escolheu Milkshake\n";
			cout << "Valor un: R$7,00\n";
			cout << "Quantidade escolhida:" << quant << "\n";
			result = quant * 7;
			cout << "------------------\n";
			cout << "Valor a ser pago: " << result;
			break;
		default:
			cout << "Nenhuma opção escolhida";
	}
	
	return 0;
}
