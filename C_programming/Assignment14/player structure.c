#include <stdio.h>

struct Player
{
    char name[30];
    int matches;
    int runs;
    int wickets;
};

void accept(struct Player p[])
{
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("\nEnter details of Player %d\n", i + 1);

        printf("Name: ");
        scanf("%s", p[i].name);

        printf("Matches: ");
        scanf("%d", &p[i].matches);

        printf("Runs: ");
        scanf("%d", &p[i].runs);

        printf("Wickets: ");
        scanf("%d", &p[i].wickets);
    }
}

void display(struct Player p[])
{
    int i;

    printf("\n--- Player Details ---\n");

    for(i = 0; i < 10; i++)
    {
        printf("\nPlayer %d\n", i + 1);
        printf("Name: %s\n", p[i].name);
        printf("Matches: %d\n", p[i].matches);
        printf("Runs: %d\n", p[i].runs);
        printf("Wickets: %d\n", p[i].wickets);
    }
}

void maximum(struct Player p[])
{
    int i;
    int maxRuns = 0;
    int maxWickets = 0;
    int runIndex = 0;
    int wicketIndex = 0;

    for(i = 0; i < 10; i++)
    {
        if(p[i].runs > maxRuns)
        {
            maxRuns = p[i].runs;
            runIndex = i;
        }

        if(p[i].wickets > maxWickets)
        {
            maxWickets = p[i].wickets;
            wicketIndex = i;
        }
    }

    printf("\n--- Maximum Runs ---\n");
    printf("Name: %s\n", p[runIndex].name);
    printf("Runs: %d\n", p[runIndex].runs);

    printf("\n--- Maximum Wickets ---\n");
    printf("Name: %s\n", p[wicketIndex].name);
    printf("Wickets: %d\n", p[wicketIndex].wickets);
}

int main()
{
    struct Player p[10];

    accept(p);
    display(p);
    maximum(p);
}