// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TOTAL_QNS 20
#define MAX_QNS 256
#define MAX_ANS 128




// Global Variables
int counter = 0;   // Number of questions in file
int score = 0;

// Structure for Quiz Questions
typedef struct {
    char question[MAX_QNS];
    char answerA[MAX_ANS];
    char answerB[MAX_ANS];
    char answerC[MAX_ANS];
    char answerD[MAX_ANS];
    char correct;

} Quiz;

typedef struct {
	char username[100];
}person;
person user[10];

// Array to store quiz questions
Quiz quizQns[TOTAL_QNS];

// Function Prototypes
int savename();
void create();
void option(int *decision);
void quiz();
void user_idcreate();
void user_idread();
void user_id();
void gotomenu();
void welcome();
void clearScreen();
int countQuestions();
void menu();


int main() {



    menu();


    return 0;
}

// Function to display welcome message
void welcome() {
    printf("\n\t\t\t\t\t\t*** Welcome to the Quiz Game! ***\n");
    printf("\t\t\t\t\tAnswer the questions correctly and win a Laptop!\n");
    printf("\n$$$$$$$*******$$$$$$$*******$$$$$$$*******$$$$$$$*******$$$$$$$*******$$$$$$$*******$$$$$$$$*******$$$$$$$*******$$$$$$$\n");
    printf("\n\n\t\t\t\t\t\t1.Play\n\n\t\t\t\t\t\t2.Create Questions\n\n\t\t\t\t\t\t3.USERID\n\n\t\t\t\t\t\t4.SaveName\n\n\t\t\t\t\t\t5.Any key to Exit");
}


void menu(){
	clearScreen();
	welcome();
	int decision;
    option(&decision);


    switch (decision) {
        case 1:
            quiz();   // Start Quiz
            break;
        case 2:
            create(); // Create Quiz Questions
            break;
        case 3: user_id();
        case 4: savename();
        default:
            printf("\n\n\t\t\t\t\t\tBYEBYE!!\n");
    }

}

int savename(){
	
	
	user_idcreate();
	return 0;
}


// Function to get user decision
void option(int *decision) {
    printf("\n\n\n\t\t\t\t\t\tEnter your choice: ");
    scanf("%d", decision);
    getchar();  // Clear buffer
}

// Function to clear screen
void clearScreen() {
    system("cls");
}

// Function to count questions in the file
int countQuestions() {
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        return 0;  // File does not exist or empty
    }

    int count = 0;
    char line[MAX_QNS];

    while (fgets(line, sizeof(line), file)!=NULL) {
        if (strncmp(line,"Qn",2)==0) {  // Count each set of answers
            count++;
        }
    }

    fclose(file);
    return count;
}




void gotomenu(){
	
	label:
		printf("\n\t\t\t\t\t1.Menu\t2.Exit");
    	printf("\n");
    	int goback;                                //For Going Back
    	scanf("%d",&goback);
    	getchar();


    if(goback ==1){clearScreen();
    menu();
	}
	else if(goback ==2){ printf("\n\n\t\t\t\t\t\tBYE BYE");
	}
	else{ goto label;
	}



}
void user_id() {
    int decision;
    clearScreen();
    printf("\n\n\n\t\t\t\t\t1. Check User ID\n");
    printf("\t\t\t\t\t2. View All User IDs\n");
    comeback:
    printf("\t\t\t\t\tEnter choice: ");
    scanf("%d", &decision);
    getchar(); // Clear input buffer

    if (decision == 1) {
        user_idread();
    } else if (decision == 2) {
        FILE *fp = fopen("userid.txt", "r");
        if (fp == NULL) {
            printf("\n\n\t\t\t\t\tError: Could not open file.\n");
            return;
        }

        printf("\n\t\t\t\t\tUser ID List:\n");
        printf("-------------------------------------------------\n");
        int phonenumber;
        char userid[50];

        while (fscanf(fp, "%d %s", &phonenumber, userid) != EOF) {
            printf("\t\t\t\t\t%d - %s\n", phonenumber, userid);
        }
        
        gotomenu();

        fclose(fp);
    } else {
        printf("\n\t\t\t\t\tInvalid choice! \n");
        goto comeback;
    }
}

void user_idread() {
	int decision;
    int count = 0;
    int phonenum, phonenumber;
    char userid[50], stored_userid[50];

    clearScreen();
    printf("\n\n\t\t\t\t\tEnter Phone Number: ");
    scanf("%d", &phonenumber);
    getchar();

    printf("\t\t\t\t\tEnter User ID: ");
    scanf("%s", userid);
    getchar();

    FILE *fp = fopen("userid.txt", "r");
    if (fp == NULL) {
        printf("\n\n\t\t\t\t\tError: Could not open file.\n");
        return;
    }

    while (fscanf(fp, "%d %s", &phonenum, stored_userid) != EOF) {
        if (phonenum == phonenumber && strcmp(stored_userid, userid) == 0) {
            count++;
            printf("\n\n\t\t\t\t\tLogin Successful! Welcome, %s.\n", userid);
            getch();
            fclose(fp);
            printf("\t\t\t\t\tDo You want to play(Y/N):");
            scanf("%d",&decision);
            if(toupper(decision)== 'Y'){
            	quiz();
			}
			else{
				
				gotomenu();
			}

        }
    }
    fclose(fp);

    printf("\n\n\t\t\t\t\tNo matching User ID found.Let's Create one for use.'\n");
    char enter = getchar();
    if(enter == '\n'){
    	user_idcreate();
	}

}

void user_idcreate() {
    int phone_num;
    char userid[50];
    FILE *fp = fopen("userid.txt", "a");

    if (fp == NULL) {
        printf("\n\n\t\t\t\t\tError: Could not open file.\n");
        return;
    }

    clearScreen();
    printf("\n\t\t\t\t\tSign_Up");
    printf("\n\n\t\t\t\t\tEnter Phone Number: ");
    scanf("%d", &phone_num);
    getchar();

    printf("\n\n\t\t\t\t\tEnter User ID: ");
    scanf("%s", userid);
    getchar();

    fprintf(fp, "%d %s\n", phone_num, userid);
    fclose(fp);
    printf("\n\n\t\t\t\t\tAccount Created Successfully!\n");

    char replay;
    printf("\n\t\t\t\t\tDo you want to play? (Y/N): ");
    scanf(" %c", &replay);
    getchar();

    if (toupper(replay) == 'Y') {
        quiz();
    } else {
    	
        gotomenu();
    }
}




// Function to conduct the quiz
void quiz() {
    clearScreen();
    int i, n = 0;

    counter = countQuestions();  // Update question count

    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("\n\t\t\t\t\t\tError opening file! No quiz available.\n");
        return ;
    }

    if (counter == 0) {
        printf("\n\t\t\t\t\t\tNo questions available! Please create questions first.\n");
        fclose(file);
        return menu();

    }

    // Reading questions from file
    while (n < counter) {
        fgets(quizQns[n].question, MAX_QNS, file);
        fgets(quizQns[n].answerA, MAX_ANS, file);
        fgets(quizQns[n].answerB, MAX_ANS, file);
        fgets(quizQns[n].answerC, MAX_ANS, file);
        fgets(quizQns[n].answerD, MAX_ANS, file);

        quizQns[n].correct = fgetc(file);
        fgetc(file);  // Consume newline

        n++;
    }

    fclose(file);

    score = 0;  // Reset score

    // Quiz execution
    for (i = 0; i < counter; i++) {
        printf("\n\t\t\t\t\t\t%s", quizQns[i].question);
        printf("\t\t\t\t\t\t%s", quizQns[i].answerA);
        printf("\t\t\t\t\t\t%s", quizQns[i].answerB);
        printf("\t\t\t\t\t\t%s", quizQns[i].answerC);
        printf("\t\t\t\t\t\t%s", quizQns[i].answerD);

        char userAnswer;
        printf("\t\t\t\t\t\tYour answer (A/B/C/D): ");
        scanf(" %c", &userAnswer);
        getchar();  // Clear buffer

        if (toupper(userAnswer) == quizQns[i].correct) {
            score++;
            printf("\t\t\t\t\t\tCorrect!\n");
        } else {
            printf("\t\t\t\t\t\tWrong! Correct answer was: %c\n", quizQns[i].correct);
        }
    }

    printf("\n\t\t\t\t\t\tFinal Score: %d/%d\n", score, counter);

    char replay;
    printf("\n\t\t\t\t\t\tDo you want to play again? (Y/N): ");
    scanf(" %c", &replay);
    getchar();

    if (toupper(replay) == 'Y') {
        quiz();  // Restart quiz
    } else {
        printf("\n\t\t\t\t\t\tThanks for playing!\n");
    }
    label:
    	printf("\n\n\t\t\t\t\t\tPress 1.Main Menu  2.End");
    	int goback;                                //For Going Back
    	scanf("%d",&goback);
    	getchar();


    if(goback ==1){clearScreen();
    menu();
	}
	else if(goback ==2){ printf("\n\n\t\t\t\t\t\tBYE BYE");
	}
	else{ goto label;
	}
}

// Function to create quiz questions
void create() {
    char correct;
    char end;
    char question[MAX_QNS];
    char answer[4][MAX_ANS];

    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        perror("\t\t\t\t\t\tError opening file");
        return;
    }



    while (1) {


        printf("\n\t\t\t\t\t\tEnter the question: ");
        fgets(question, sizeof(question), stdin);


        // Prevent empty questions
        if (question[0] == '\n') {
            printf("\t\t\t\t\t\tQuestion cannot be empty! Try again.\n");
            return menu();
        }

        fprintf(file, "Qn)%s", question);

        printf("\n\t\t\t\t\t\tEnter the Options:\n");
        printf("\t\t\t\t\t\tA) ");
        fgets(answer[0], sizeof(answer[0]), stdin);
        printf("\t\t\t\t\t\tB) ");
        fgets(answer[1], sizeof(answer[1]), stdin);
        printf("\t\t\t\t\t\tC) ");
        fgets(answer[2], sizeof(answer[2]), stdin);
        printf("\t\t\t\t\t\tD) ");
        fgets(answer[3], sizeof(answer[3]), stdin);

        printf("\t\t\t\t\t\tCorrect Option (A/B/C/D): ");
        scanf(" %c", &correct);
        getchar();  // Clear buffer

        fprintf(file, "A) %sB) %sC) %sD) %s%c\n", answer[0], answer[1], answer[2], answer[3], toupper(correct));

        counter++;  // Increment question count

        printf("\n\t\t\t\t\t\tDo you want to add more questions? (Y/N): ");
        scanf(" %c", &end);
        getchar();  // Clear buffer
        while(end!='Y' && end!='N'){
        		printf("\t\t\t\t\t\tPlease Reply Yes/No precisely:");
        		scanf(" %c", &end);
        		getchar();
			}

        if (toupper(end) == 'N') {
            break;
        }

    }

    fclose(file);
    printf("\n\t\t\t\t\t\tQuestions saved successfully!\n");
    label:

    	printf("\n\n\t\t\t\t\t\t1.Main Menu  2.Exit");
    	int replay;
    	scanf("%d",&replay);
    	getchar();
    if(replay == 1){
    	clearScreen();

    	menu();
	}
	else if(replay == 2){
		printf("\n\t\t\t\t\t\tBYE BYE");
	}
	else{
		goto label;
	}
}

