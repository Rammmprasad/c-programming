#include <stdio.h>

struct Player {
    char name[50];
    int runs;
};

int main() {
    int i, n, totalRuns = 0;
    
    printf("Enter the number of players: ");
    scanf("%d", &n);
    
    struct Player players[n];
    
    // Accepting player details
    for(i=0; i<n; i++) {
        printf("\nEnter the name of player %d: ", i+1);
        scanf("%s", players[i].name);
        
        printf("Enter the runs scored by player %d: ", i+1);
        scanf("%d", &players[i].runs);
        
        totalRuns += players[i].runs;
    }
    
    // Displaying total runs scored by the team
    printf("\nTotal runs scored by the team: %d\n", totalRuns);
    
    return 0;
}

