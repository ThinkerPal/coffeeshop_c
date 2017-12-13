#include <windows.h>
#include <stdio.h>
//#include <bits/stdc++.h>
#include <iostream>


using namespace std;



int DisplayIncompatibleVersion()
{
	int incompatible = MessageBoxW(
  		NULL,
  		(LPCWSTR)L"Sorry, this program requires Windows Vista SP2 or later.",
  		(LPCWSTR)L"Coffee Shop",
  		MB_ICONSTOP | MB_OK | MB_DEFBUTTON1
	);
	switch (incompatible)
    {
    case IDOK:
        // TODO: add code
        break;
    
    }

    return incompatible;
}

int DisplayUnsupportedVersion()
{
	int unsupported = MessageBoxW(
  		NULL,
  		(LPCWSTR)L"Your computer will no longer support updates to the program after January 14, 2020.",
  		(LPCWSTR)L"Coffee Shop",
  		MB_ICONASTERISK | MB_OK | MB_DEFBUTTON1
	);
	switch (unsupported)
    {
    case IDOK:
        // TODO: add code
        break;
    
    }

    return unsupported;
}

int main() {
	
	// check compatibilty;
	OSVERSIONINFO info;
	BOOL compatible;
	BOOL recommended;
	ZeroMemory(&info, sizeof(OSVERSIONINFO));
	info.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
	GetVersionEx(&info);
	double version;
	
	version = info.dwBuildNumber;
		    
	compatible = (version>=6002);
	recommended = (version>=7601);			
	if (!(compatible)) {
	
	
	DisplayIncompatibleVersion();
	}
	else if (!(recommended)) {
	DisplayUnsupportedVersion();
	
	
	}
	// run code if System is Vista build 6002 or Later
	
	// initialize variables!!!
	int input1 = 0, input2 = 0, screenNumber = 1;
	int temperature = 51; // in fahrenheit
	double money = 30.00; // money
	// temperature chart
	// 15 to 32 is freezing - 20-25 customers (every -6 degrees a customer, so subtract degrees from 145 then divide by 6 to get number of customers.)
	// 32 to 45 is cold - 16-21 customers
	// 45 to 70 is cool. - 13-18 customers
	// 70 to 85 is warm - 10-15 customers
	// 85 to 100 is hot - 7-10 customers
	// add a few customers depending on reputation.
	
	
	
	int reputation = 0; // reputation ranging from -50 to 50.
	// recipe
	
	int rcups = 1;
	int cups = 0;
	double rcoffee = 0.0;
	double coffee = 0.0;
	double rmilk = 0.0;
	double milk = 0.0;
	double sugar = 0.0;
	double rsugar = 0.0;
	double price = 2.00;
	int a = 0;
	int input3=0;
	int input4=0;
	int endOfGame=1;
	double minExpectedPrice = 2.00;
	int customers=0;
	int cents=2000;
	if (compatible) {
		// reinit the game if applicable
		input1=0;
		input2=0;
		input3=0;
		screenNumber=1;
		temperature=51;
		money=30.00;
		rcups = 1;
		cups = 0;
		rcoffee = 2.0;
		coffee = 0.0;
		rmilk = 0.0;
		milk = 0.0;
		sugar = 0.0;
		rsugar = 0.0;
		price = 2.00;
		input4=0;
		endOfGame=1;
		//
		// Coffee Shop version: 0.0.1
		// Codename: Business
		// 2017-2018 by F.B. - Free Software.
		// 	
		
		// screen resolution is a 40x15 (8:3)
		while (true) {
			screenNumber=1;
			printf("+--------------------------------------+\n");
			Sleep(20);
			printf("| Made by FB. 2017-2018                |\n");
			Sleep(20);
			printf("+--------------------------------------+\n");
			Sleep(20);
			printf("|             COFFEE  SHOP             |\n");
			Sleep(20);
			printf("+--------------------------------------+\n");
			Sleep(20);
			printf("|                                      |\n");
			Sleep(20);
			printf("| 1: Play Game                         |\n");
			Sleep(20);
			printf("| 2: How to Play                       |\n");
			Sleep(20);
			printf("| 3: Quit Game                         |\n");
			Sleep(20);
			printf("+--------------------------------------+\n");
			Sleep(20);
			printf("| Version: 0.01 (build 78)             |\n");
			Sleep(20);
			printf("|                                      |\n");
			Sleep(20);
			printf("+--------------------------------------+\n");
			Sleep(20);
			printf("                                        \n> ");
			scanf("%d", &input1);
			system("cls");
		
		if (input1==2) {
			while (true) {
				if (screenNumber == 1) {
				
					printf("+--------------------------------------+\n");
					printf("| How to Play                      1/3 |\n");
					printf("+--------------------------------------+\n");
					printf("| How much profit can you make in a set|\n");
					printf("| of days?                             |\n");
					printf("|                                      |\n");
					printf("| You start with $30 and you have to   |\n");
					printf("| spend money to buy ingredients for   |\n");
					printf("| the coffee. Spend wisely!            |\n");
					printf("| Temperature varies between each day. |\n");
					printf("| About 20 people come to your shop on |\n");
					printf("| cold days.                           |\n");
					printf("+--------------------------------------+\n");
					printf("1: Quit        2: Next                  \n> ");
					scanf("%d", &input2);
					system("cls");	
					if (input2 == 1) break;
					else screenNumber++;
				} if (screenNumber == 2) {
				
					printf("+--------------------------------------+\n");
					printf("| How to Play                      2/3 |\n");
					printf("+--------------------------------------+\n");
					printf("| On hot days, only about 10 will come.|\n");
					printf("| So, plan your day by buying how much |\n");
					printf("| ingredients is required for the day, |\n");
					printf("| and deciding on how much your coffee |\n");
					printf("| will cost!                           |\n");
					printf("| Your reputation increases when your  |\n");
					printf("| coffee has a good quality, which then|\n");
					printf("| attracts more customers to your shop!|\n");
					printf("|                                      |\n");
					printf("+--------------------------------------+\n");
					printf("1: Prev        2: Next           3: Quit\n> ");			
					scanf("%d", &input2);
					system("cls");	
					if (input2 == 1) screenNumber--;
					else if (input2 == 2) screenNumber++;
					else if (input2 == 3) break;
				} else if (screenNumber == 3) {
					printf("+--------------------------------------+\n");
					printf("| How to Play                      3/3 |\n");
					printf("+--------------------------------------+\n");
					printf("| If you run out of ingredients,       |\n");
					printf("| your shop will be closed and you will|\n");
					printf("| not be able to accept new customers. |\n");
					printf("|                                      |\n");
					printf("|                                      |\n");
					printf("|                                      |\n");
					printf("|                                      |\n");
					printf("|                                      |\n");
					printf("|                                      |\n");
					printf("+--------------------------------------+\n");
					printf("1: Prev        2: Quit                  \n> ");			
					scanf("%d", &input2);
					system("cls");	
					if (input2 == 1) screenNumber--;
					else if (input2 == 2) break;
					
					
					
				}
			}
			input1 = 0;
			continue;
		} else if (input1==3) {
			break;
		} else if (input1==1) {
			// starts the game
			reputation=0;
			a=0;
			input1=0;
			input2=0;
			screenNumber=1;
			temperature=51;
			money=30.00;
			rcups = 1;
			cups = 0;
			rcoffee = 1.9;
			coffee = 0.0;
			rmilk = 0.2;
			milk = 0.0;
			sugar = 0.0;
			rsugar = 2.0;
			price = 2.00;
			for (int day=1; day<=14; day++) {
				while (true) {
				
					// a whole day is from 7:00 AM to 5:00 PM (10 Hours = 40 Intervals of 15 Minutes)
					printf("----------------------------------------\n");
					printf("  Adjustments               Day: %d     \n", day);
					printf("----------------------------------------\n");
					printf("  Cups: %d unit(s)  Recipe: %d    \n", cups, rcups);
					printf("  Coffee: %.1f tsp  Recipe: %.1f   \n", coffee, rcoffee);
					printf("  Milk: %.1f cups   Recipe: %.1f   \n", milk, rmilk);
					printf("  Sugar: %.1f tsp   Recipe: %.1f   \n", sugar, rsugar);
					printf("+--------------------------------------+\n");
					printf("| Your inventory          Your recipe  |\n");
					printf("+--------------------------------------+\n");
					printf("  Weather: %d        Reputation: %d     \n", temperature, reputation);
					printf("  Money: $%.2f                          \n", money);
					printf("+--------------------------------------+\n");
					printf("1: Next                                 \n> ");
					scanf("%d", &input4);
					system("cls");
					if (input4==1) break;
				}
				while (true) {
				
					printf("----------------------------------------\n");
					printf("  Adjustments             Price: $%.2f  \n", price);
					printf("----------------------------------------\n");
					printf("  Cups: %d unit(s)  Recipe: %d    \n", cups, rcups);
					printf("  Coffee: %.1f tsp  Recipe: %.1f   \n", coffee, rcoffee);
					printf("  Milk: %.1f cups   Recipe: %.1f   \n", milk, rmilk);
					printf("  Sugar: %.1f tsp   Recipe: %.1f   \n", sugar, rsugar);
					printf("+--------------------------------------+\n");
					printf("| 1: Edit cups           5: More...    |\n");
					printf("| 2: Edit coffee         6: Start day  |\n");
					printf("| 3: Edit milk           7: Edit price |\n");
					printf("| 4: Edit sugar          8: Quit       |\n");
					printf("+--------------------------------------+\n");
					printf("                                        \n> ");
					scanf("%d", &input3);
					system("cls");	
					if (input3 == 1) {
						// edit mode for cups
						// gives you option how many to buy	
						// $2.00 for 10, $4.00 for 25, $6.00 for 50.
						while (true) {
						
							printf("----------------------------------------\n");
							printf("  Adjustments             Price: $__.__ \n");
							printf("----------------------------------------\n");
							printf("  Cups: %d unit(s)  Recipe: %d    \n", cups, rcups);
							printf("  Coffee: %.1f tsp  Recipe: %.1f   \n", coffee, rcoffee);
							printf("  Milk: %.1f cups   Recipe: %.1f   \n", milk, rmilk);
							printf("  Sugar: %.1f tsp   Recipe: %.1f   \n", sugar, rsugar);
							printf("+--------------------------------------+\n");
							printf("| 0: Back                              |\n");
							printf("| 1: Buy 10 for $2.00                  |\n");
							printf("| 2: Buy 25 for $4.00                  |\n");
							printf("| 3: Buy 50 for $6.00                  |\n");
							printf("+--------------------------------------+\n");
							printf("                                        \n> ");
							scanf("%d", &cents);
							if (cents<=1000&&cents>=5) break;
							
						}
						price = cents*0.01;
						
						system("cls");
						input3 = 0;
						continue;
					
				
				
					} else if (input3 == 2) {
						// $10 for 20, $14 for 40, $18 for 60.
					
					
					
					
					} else if (input3 == 3) {
						// edit mode for milk
						// $1 for 10, $1.80 for 20, $2 for 40
					
					
					
					
					} else if (input3 == 4) {
						// $3 for 10, $5 for 20, $8 for 50
					
					
					
					
					} else if (input3 == 5) {
						while (true) {
					
							printf("----------------------------------------\n");
							printf("  Adjustments               Day: %d     \n", day);
							printf("----------------------------------------\n");
							printf("  Cups: %d unit(s)  Recipe: %d    \n", cups, rcups);
							printf("  Coffee: %.1f tsp  Recipe: %.1f   \n", coffee, rcoffee);
							printf("  Milk: %.1f cups   Recipe: %.1f   \n", milk, rmilk);
							printf("  Sugar: %.1f tsp   Recipe: %.1f   \n", sugar, rsugar);
							printf("+--------------------------------------+\n");
							printf("| Your inventory          Your recipe  |\n");
							printf("+--------------------------------------+\n");
							printf("  Weather: %d                          \n", temperature);
							printf("  Money: %.2f                           \n", money);
							printf("+--------------------------------------+\n");
							printf("1: Next                                 \n> ");
							scanf("%d", &input4);
							if(input4==1)
							{
								input3 = 0;
								break;
							}
						}
						continue;
					} else if (input3 == 7) {
						while (true) {
						
							printf("----------------------------------------\n");
							printf("  Adjustments             Price: $__.__ \n");
							printf("----------------------------------------\n");
							printf("  Cups: %d unit(s)  Recipe: %d    \n", cups, rcups);
							printf("  Coffee: %.1f tsp  Recipe: %.1f   \n", coffee, rcoffee);
							printf("  Milk: %.1f cups   Recipe: %.1f   \n", milk, rmilk);
							printf("  Sugar: %.1f tsp   Recipe: %.1f   \n", sugar, rsugar);
							printf("+--------------------------------------+\n");
							printf("|                                      |\n");
							printf("|    Enter new price (e.g. 255 = $2.55)|\n");
							printf("|    Currently this game is in alpha   |\n");
							printf("|    MIN: $0.05, MAX: $10.00           |\n");
							printf("+--------------------------------------+\n");
							printf("                                        \n> ");
							scanf("%d", &cents);
							if (cents<=1000&&cents>=5) break;
							
						}
						price = cents*0.01;
						
						system("cls");
						input3 = 0;
						continue;
						
						
						
					
					} else if (input3 == 8 || input3 == 6) break;
					// at the end it will loop back to main
				}
				if (input3 == 8) 
				{
					
					break;
				}
				input3 = 0;
				// start the day
				
				// init number of customers coming
				customers = (145-temperature)/6;
				
				// change the weather at end of day
				
			}
			// end of game - dont show on quit button
			
			if (input3 != 8) continue;
			
			// show how much you made in profit (current money minus profit)
			
			
			
			
			
		}
		
		
		
		
		
		
		
		
		}
	}
}
