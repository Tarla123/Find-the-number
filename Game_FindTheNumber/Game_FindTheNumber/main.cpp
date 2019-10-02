#include <iostream>
#include <ctime>
//�crivez un programme de jeu � Devinez le nombre � comme suit : votre programme choisit d�abord un 
//nombre qu�il faut deviner, en s�lectionnant un entier au hasard � l�int�rieur d�une �chelle de 1 � 100.
//Le programme affiche ensuite :
//
//Je vous cache un nombre compris entre 1 et 100. Pouvez le devinez ?
//
//Le joueur entre ensuite un premier essai.Le programme r�pond avec l�un des messages suivants :
//1.	Excellent!Vous avez devin� le nombre!
//2.	Nombre pas assez �lev�.Essayez encore.
//3.	Nombre trop �lev�.Essayez encore.
//Le jeu se termine une fois le nombre trouv�.


int main()
{
	srand(time(0));
	int nombre1;
	int random = (rand() % 100) + 1; // G�n�re un chiffre entre 1 et 100
	bool gameOn = true;
	while (gameOn)
	{
		std::cout << "Entrez un nombre ";
		std::cin >> nombre1;

		if (nombre1 > random)
		{
				std::cout << nombre1 << " Nombre trop grand. Essayez encore "  << std::endl;
		}

		else if (nombre1 < random)
		{
			std::cout << nombre1 << " Nombre trop petit. Essayez encore "  << std::endl;
		}

		else
		{	
			std::cout << nombre1 << " est egal a " << random << std::endl;
			gameOn = false;
			std::cout << " Felicitations! " << std::endl;
		}


	}

	system("pause");
}