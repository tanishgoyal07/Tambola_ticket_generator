# Tambola_ticket_generator

Description:
Rules: 
1. As we know that there are 90 numbers in Housie Game and each ticket has 15 numbers. So, 6 tickets has 15*6 = 90 numbers. In all these 6 tickets, each number from 1-90 occurs in one ticket only. Therefore, when a CUE is called, it will be present in one and only one ticket.
2. There are 3 rows and 9 columns in every Housie Ticket 
3. There are total 90 (1-90) numbers in Housie
4. Every ticket has exactly 15 numbers
5. Every row contains 5 numbers 
6. A column may have 1, 2 or 3 numbers. There should be at least 1 number in every column
7. A Ticket cannot have same number more than once 
a. Column 1 on any ticket has numbers between 1-9 
b. Column 2 on any ticket has numbers between 10-19
c. Column 3 on any ticket has numbers between 20-29
d. Column 4 on any ticket has numbers between 30-39 
e. Column 5 on any ticket has numbers between 40-49 
f. Column 6 on any ticket has numbers between 50-59 
g. Column 7 on any ticket has numbers between 60-69
h. Column 8 on any ticket has numbers between 70-79 
i. Column 9 on any ticket has numbers between 80-90
8. Though there are many winning parameters, but we need to cater mainly: Full House

How the application will work?
1. Initially application will ask user for how many players are playing but for our ease we take number of players equal to 6, so it will generate 6 tickets after taking input as ”6” from the user, with numbers containing as per rule mentioned above. 
2. The 6 tickets will be displayed on console window.
3. After that each player will select his/her own ticket.
4. In next step system will ask user to “Press 1 for random number”, “Press 2 if user won’s the game” or “Press 3 if user wants to quit the game”. Initially players will press 1 to generate random numbers and will match that number if it was present in their respective ticket or not.
5. This step will continue until any player cuts all the numbers from his ticket or someone wants to quit the game.
6. After all this system will ask for the name of the winner and display a “Congratulation” message to the user. 
7. We can take any number of players to play the game but we are initialising our program for 6 players.


Concepts of C language to be used:-
1.	 Data Structure
2.	 Loops
3.	 Switch Case
4.	 Functions

ScreenShots:

![image](https://user-images.githubusercontent.com/94990169/176446561-f7b94e6b-831f-43a3-a6e4-7dcafa368a7b.png)
![image](https://user-images.githubusercontent.com/94990169/176446656-7fd39023-3e81-4196-9b99-c02eddd43871.png)
![image](https://user-images.githubusercontent.com/94990169/176446690-f3ec92dd-6d72-4389-adeb-7007c5e16746.png)
![image](https://user-images.githubusercontent.com/94990169/176446709-f810cb94-6a28-4580-a3cb-d4033930709d.png)
![image](https://user-images.githubusercontent.com/94990169/176446960-56e8ba9d-8b2f-4a56-bfb3-423336ffd055.png)
