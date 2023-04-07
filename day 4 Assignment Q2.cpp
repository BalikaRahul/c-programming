#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 10

struct Player {
    char name[50];
    int runs;
};

int main() {
    struct Player team[MAX_PLAYERS];
    int total_runs = 0;
    int num_players;

    printf("Enter number of players (maximum %d): ", MAX_PLAYERS);
    scanf("%d", &num_players);

    // Input player name and runs scored for each player
    for (int i = 0; i < num_players; i++) {
        printf("Enter Name of Player %d: ", i+1);
        scanf("%s", team[i].name);

        printf("Runs Scored: ");
        scanf("%d", &team[i].runs);

        total_runs += team[i].runs;
    }

    // Print player information
    printf("\nPlayer Information\n");
    for (int i = 0; i < num_players; i++) {
        printf("%s: %d runs\n", team[i].name, team[i].runs);
    }

    // Print total runs scored by the team
    printf("\nTotal Runs Scored by Team: %d\n", total_runs);

    return 0;
}