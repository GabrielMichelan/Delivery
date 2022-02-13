#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
char *lanche[]={"X-Burguer- 6,99R$\n","X-Salada-7,50R$\n","X-Bacon- 9,00R$\n",
"X-Egg- 10,00R$\n","X-Frango- 12,00R$\n","X-Tudo- 15,00R$\n"};
char NomeProduto[20],cupom[6],cupomValidate[5]={"4FGH"};
int item_desejado,continuarComprando,i,ProdutoCadastrar,opcao;
int cadastro,QuantPedidos=0;
float Preco_Lanche[5],total_compra,Preco_Bebida[5],compraDeLanche=0,compraDeBebida=0,desconto;
char *Bebida[]={"Coca-Cola 2L - 12,00R$\n","Suco de Laranja 500ml - 5,00R$\n",
"Sprite 2L - 9,50R$\n","Suco de melancia 500ml - 6,00R$\n",
"Cerveja Brahma 1L- 7,50R$ \n","Fanta Laranja 2L- 8,50R$\n"
	};
int condicoesPedido,retorno;
char endereco[100];


void Cardapio();
void ExibirTotalDaCompra(){
	
	 if(condicoesPedido==1 && QuantPedidos>=6)
	{
		
		printf("Digite seu endereço ");
		fflush(stdin);
		scanf("%[^\n]s", endereco);
		printf("\n");
		printf("Digite seu cupom de desconto");
		fflush(stdin);
	   	scanf("%[^\n]s",cupom);
	   	strupr(cupom);
	   	retorno = strcmp(cupomValidate,cupom);
	    if(retorno ==0)
		{
		
	   	printf("\n");
		printf("OBA!! Você ganhou 10 de desconto!!!\n");
		printf("\n");
		printf("Seu pedido foi adicionado uma taxa de entrega(7,00R$) \n");
		total_compra =  compraDeLanche + compraDeBebida + 7.00;
		desconto = total_compra* 0.1;
		total_compra = total_compra - desconto;
		printf("O total da  compra  %.2f",total_compra) , printf("R$\n");
		printf("E seu pedido em breve estará no seu destino \n ");
		}
		
	}
	else if(condicoesPedido==1)
	{
		printf("Digite seu endereço ");
		fflush(stdin);
		scanf("%[^\n]s", endereco);
		printf("\n");
		printf("Seu pedido foi adicionado uma taxa de entrega(7,00R$) \n");
		total_compra = compraDeLanche + compraDeBebida + 7.00;
		printf("O total da  compra  %.2f",total_compra) , printf("R$\n");
		printf("E seu pedido em breve estará no seu destino \n ");
		printf("Quantidade de pedidos feitos no dia é: %d",QuantPedidos);
	}
	else if(condicoesPedido!=1)
	{
		total_compra = compraDeLanche + compraDeBebida ;
		printf("O total da  compra  %.2f",total_compra) , printf("R$\n");
	}


	
	else if(condicoesPedido!=1 && QuantPedidos>=6)
	{
	
	printf("Digite seu cupom de desconto");
	fflush(stdin);
	gets(cupom);
	strupr(cupom);
	retorno = strcmp(cupomValidate,cupom);
	printf("\n");
	  if(retorno>=0)
	{
	printf("OBA!! Você ganhou 10 de desconto!!!\n");
	printf("\n");
	total_compra =  compraDeLanche + compraDeBebida;
	desconto = total_compra* 0.1;
	total_compra = total_compra - desconto;
	printf("O total da minha compra  %.2f",total_compra) , printf("R$");
	}
	}
}


	
int main() {
	
	setlocale(LC_ALL, "Portuguese");
	printf("_______****	BEM-VINDO A LANCHONETE UNASP	 ****_______ \n\n\n");
	printf(" --> Pressione enter para fazer seu pedido \n\n\n ");
	system("pause");
	system("cls");
	Cardapio();
	return 0;
	
}
void Cardapio(){
	
	
	do{
	
	printf("________________ CARDÁPIO________________\n\n");
	printf("\n");
	printf("\n");
	printf("   		---LANCHES---		");
	printf("\n");
	printf("\n");
	printf("      CÓDIGO   NOME    PREÇO           ");
	printf("\n");
	printf("\t1- %s",lanche[0]);
	printf("\t2- %s",lanche[1]);
	printf("\t3- %s",lanche[2]);
	printf("\t4- %s",lanche[3]);
	printf("\t5- %s",lanche[4]);
	printf("\t6- %s",lanche[5]);
	printf("\n");
	printf("   		---BEBIDAS---  		 ");
	printf("\n");
	printf("\n");
	printf("      CÓDIGO   NOME        PREÇO           ");
	printf("\n");
	printf("\t7- %s",Bebida[0]);
	printf("\t8- %s",Bebida[1]);
	printf("\t9- %s",Bebida[2]);
	printf("\t10-%s",Bebida[3]);
	printf("\t11-%s",Bebida[4]);
	printf("\t12-%s",Bebida[5]);
	printf("Digite o número da opção desejada ");
	scanf("%d",&item_desejado);
	printf("\n");
	if(item_desejado == 1)
	{ 
		Preco_Lanche[0] = 6.99;
		QuantPedidos++;
		compraDeLanche += Preco_Lanche[0];
	}
	else if(item_desejado == 2)
	{
		Preco_Lanche[1]= 7.50;
		QuantPedidos++;
		compraDeLanche += Preco_Lanche[1];
	}
	else if(item_desejado == 3)
	{
		Preco_Lanche[2] = 9.00;
		QuantPedidos++;
		compraDeLanche += Preco_Lanche[2];
	}
	else if(item_desejado == 4)
	{
		Preco_Lanche[3] = 10.00;
		QuantPedidos++;
		compraDeLanche += Preco_Lanche[3];
	}
	else if(item_desejado == 5)
	{
		Preco_Lanche[4] = 12.00;
		QuantPedidos++;
		compraDeLanche += Preco_Lanche[4];
	}
	 else if(item_desejado == 6)
	{
		Preco_Lanche[5] = 15.00;
		QuantPedidos++;
		compraDeLanche += Preco_Lanche[5];
	}
	else if(item_desejado==7)
	{
		Preco_Bebida[0] = 12.00;
		QuantPedidos++;
		compraDeBebida += Preco_Bebida[0];
	}
	else if(item_desejado==8)
	{
		Preco_Bebida[1] = 5.00;
		QuantPedidos++;
		compraDeBebida += Preco_Bebida[1];
	}
	else if(item_desejado==9)
	{
		Preco_Bebida[2] = 9.50;
		QuantPedidos++;
		compraDeBebida += Preco_Bebida[2];
	}
	else if(item_desejado==10)
	{
		Preco_Bebida[3] = 6.00;
		QuantPedidos++;
		compraDeBebida += Preco_Bebida[3];
	}
	else if(item_desejado==11)
	{
		Preco_Bebida[4] = 7.50;
		QuantPedidos++;
		compraDeBebida += Preco_Bebida[4];
	}
	else if(item_desejado==12)
	{
		Preco_Bebida[5] = 8.50;
		QuantPedidos++;
		compraDeBebida += Preco_Bebida[5];
	}
	else{
		system("cls");
		printf("Código inválido, digite uma opção válida \n");
		system("pause");
		system("pause");
	}
	
	
	
	
	if(QuantPedidos>=6)
	{	system("cls");
		printf("Parabéns você acaba de ganhar um cumpom de 10%% de desconto!!!!\n");
		printf("Código do cupom : 4FHG \n");
		printf("Use esse código na finalização da compra para ganhar o desconto!");
		system("pause");
	}
		
	
	
	
	printf("Continuar comprando ? ");
	printf(" Digite 1 - para SIM ou 2- para  NÃO \n");
	scanf("%d",&continuarComprando);
	printf("\n");
	system("cls");
	
	}while(continuarComprando==1);
	printf("\n");
	printf("Seu pedido é retirada ou entrega? ");
	printf("\n");
	printf("Digite 1 para entrega ou qualquer 2 para retirada ");
	scanf("%d",&condicoesPedido);
	system("cls");
		
	
	ExibirTotalDaCompra();
	
	
	
	
	
}
