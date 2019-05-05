
#include <string>
#include <Windows.h>
#include <iostream>
using namespace std;
int main()
{
	string usuarioinput, senhainput;
	string usuario[] = { "Vuter", "mais login" };
	//usuarios
	string senha[] = { "1234", "mais senha" };
	//senha

	bool hehe = false;

	while (hehe == false) {
		cout << "Usuario: " << endl;
		cin >> usuarioinput;
		//imprimindo Usuario:
		cout << "Senha: " << endl;
		cin >> senhainput;
		//Imprimindo Senha:
		for (int i = 0; i <= 3; i++) {
			if (usuarioinput == usuario[i] && senhainput == senha[i])
			//verificando se senha e usuario estao corretos
			{
				printf("Boa passou pelo login.");
			//mensagem se o login esta certo
			}
			else if (usuarioinput != usuario[i] && senhainput != senha[i])
			{
			
				cout << "Opa, errou algo ai em confere denovo!" << endl;
				//mensagem se o login esta errado
			}

		}
	}
}