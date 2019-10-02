#include <iostream>
#include <ctime>
//Écrivez un programme de jeu « Devinez le nombre » comme suit : votre programme choisit d’abord un 
//nombre qu’il faut deviner, en sélectionnant un entier au hasard à l’intérieur d’une échelle de 1 à 100.
//Le programme affiche ensuite :
//
//Je vous cache un nombre compris entre 1 et 100. Pouvez le devinez ?
//
//Le joueur entre ensuite un premier essai.Le programme répond avec l’un des messages suivants :
//1.	Excellent!Vous avez deviné le nombre!
//2.	Nombre pas assez élevé.Essayez encore.
//3.	Nombre trop élevé.Essayez encore.
//Le jeu se termine une fois le nombre trouvé.


int main()
{
	srand(time(0));
	int nombre1;
	int random = (rand() % 100) + 1; // Génère un chiffre entre 1 et 100
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