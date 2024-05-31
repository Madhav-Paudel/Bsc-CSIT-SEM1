#include <stdio.h>
#include <string.h>

void respond(char *message) {
    // Simple responses based on keywords
    if (strstr(message, "hello") != NULL || strstr(message, "hi") != NULL) {
        printf("Jarvis: Hello! How can I assist you today?\n");
    } else if (strstr(message, "how are you") != NULL) {
        printf("Jarvis: I'm just a program, so I don't have feelings, but I'm functioning well. Thank you for asking!\n");
    } else if (strstr(message, "bye") != NULL || strstr(message, "exit") != NULL) {
        printf("Jarvis: Goodbye! Have a great day!\n");
    } else {
        printf("Jarvis: I'm not programmed to understand that yet. Can you be more specific?\n");
    }
}

int main() {
    char input[100];

    printf("Jarvis: Hello! How can I assist you today?\n");
    while (1) {
        printf("You: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0; // Remove trailing newline character

        if (strcmp(input, "exit") == 0) {
            printf("Jarvis: Goodbye! Have a great day!\n");
            break;
        }

        respond(input);
    }

    return 0;
}
