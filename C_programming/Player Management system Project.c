#include <stdio.h>
#include <string.h>

typedef struct Player
{
    int jerseyNumber;
    char name[30];
    int runs;
    int wickets;
    int matches;
} Player;

void addPlayer(Player *p)
{
    printf("Enter Jersey Number: ");
    scanf("%d", &p->jerseyNumber);

    printf("Enter Player Name: ");
    scanf("%s", p->name);

    printf("Enter Runs: ");
    scanf("%d", &p->runs);

    printf("Enter Wickets: ");
    scanf("%d", &p->wickets);

    printf("Enter Matches: ");
    scanf("%d", &p->matches);
}

void removePlayer(Player *players, int *count)
{
    int jersey;
    int found = 0;

    printf("Enter Jersey Number to remove: ");
    scanf("%d", &jersey);

    for(int i = 0; i < *count; i++)
    {
        if(players[i].jerseyNumber == jersey)
        {
            for(int j = i; j < *count - 1; j++)
            {
                players[j] = players[j + 1];
            }

            (*count)--;
            found = 1;

            printf("Player removed successfully!\n");
            break;
        }
    }

    if(found == 0)
    {
        printf("Player not found!\n");
    }
}

void searchPlayer(Player *players, int count)
{
    int jersey;
    int found = 0;

    printf("Enter Jersey Number to search: ");
    scanf("%d", &jersey);

    for(int i = 0; i < count; i++)
    {
        if(players[i].jerseyNumber == jersey)
        {
            printf("\nPlayer Found!\n");
            printf("Jersey Number: %d\n", players[i].jerseyNumber);
            printf("Name: %s\n", players[i].name);
            printf("Runs: %d\n", players[i].runs);
            printf("Wickets: %d\n", players[i].wickets);
            printf("Matches: %d\n", players[i].matches);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Player not found!\n");
    }
}

void updatePlayer(Player *players, int count)
{
    int jersey;
    int found = 0;

    printf("Enter Jersey Number to update: ");
    scanf("%d", &jersey);

    for(int i = 0; i < count; i++)
    {
        if(players[i].jerseyNumber == jersey)
        {
            printf("\nEnter New Player Details\n");

            printf("Enter Player Name: ");
            scanf("%s", players[i].name);

            printf("Enter Runs: ");
            scanf("%d", &players[i].runs);

            printf("Enter Wickets: ");
            scanf("%d", &players[i].wickets);

            printf("Enter Matches: ");
            scanf("%d", &players[i].matches);

            found = 1;

            printf("Player updated successfully!\n");
            break;
        }
    }

    if(found == 0)
    {
        printf("Player not found!\n");
    }
}

void displayAllPlayers(Player *players, int count)
{
    if(count == 0)
    {
        printf("No players available!\n");
        return;
    }

    printf("\n===== All Players =====\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nPlayer %d\n", i + 1);
        printf("Jersey Number: %d\n", players[i].jerseyNumber);
        printf("Name: %s\n", players[i].name);
        printf("Runs: %d\n", players[i].runs);
        printf("Wickets: %d\n", players[i].wickets);
        printf("Matches: %d\n", players[i].matches);
    }
}

void sortPlayers(Player *players, int count)
{
    Player temp;

    for(int i = 0; i < count - 1; i++)
    {
        for(int j = i + 1; j < count; j++)
        {
            if(players[i].runs < players[j].runs)
            {
                temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }

    printf("\n===== Players Sorted By Runs =====\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nPlayer %d\n", i + 1);
        printf("Jersey Number: %d\n", players[i].jerseyNumber);
        printf("Name: %s\n", players[i].name);
        printf("Runs: %d\n", players[i].runs);
        printf("Wickets: %d\n", players[i].wickets);
        printf("Matches: %d\n", players[i].matches);
    }
}

void displayTop3(Player *players, int count)
{
    Player temp;

    if(count == 0)
    {
        printf("No players available!\n");
        return;
    }

    // Sort players by runs
    for(int i = 0; i < count - 1; i++)
    {
        for(int j = i + 1; j < count; j++)
        {
            if(players[i].runs < players[j].runs ||
              (players[i].runs == players[j].runs &&
               players[i].wickets < players[j].wickets))
            {
                temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }

    printf("\n===== Top 3 Players By Runs =====\n");

    int limit = count < 3 ? count : 3;

    for(int i = 0; i < limit; i++)
    {
        printf("\nRank %d\n", i + 1);
        printf("Jersey Number: %d\n", players[i].jerseyNumber);
        printf("Name: %s\n", players[i].name);
        printf("Runs: %d\n", players[i].runs);
        printf("Wickets: %d\n", players[i].wickets);
        printf("Matches: %d\n", players[i].matches);
    }
}

int main()
{
    Player players[10];
    int count = 0;
    int choice;

    do
    {
        printf("\n===== Player Management System =====\n");
        printf("1. Add Player\n");
        printf("2. Remove Player\n");
        printf("3. Search Player\n");
        printf("4. Update Player\n");
        printf("5. Display Sorted Players\n");
        printf("6. Display All Players\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(count < 10)
                {
                    addPlayer(&players[count]);
                    count++;
                    printf("Player added successfully!\n");
                }
                else
                {
                    printf("Player limit is full!\n");
                }
                break;

            case 2:
                removePlayer(players, &count);
                break;

            case 3:
                searchPlayer(players, count);
                break;

            case 4:
                updatePlayer(players, count);
                break;
                
            case 5:
                sortPlayers(players, count);
                displayTop3(players, count);
                break;

            case 6:
                displayAllPlayers(players, count);
                break;
 
            case 7:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 7);

}