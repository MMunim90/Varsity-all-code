#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int isKeyword(char *word)
{
    if (strcmp(word, "auto") == 0 ||
        strcmp(word, "break") == 0 ||
        strcmp(word, "case") == 0 ||
        strcmp(word, "char") == 0 ||
        strcmp(word, "const") == 0 ||
        strcmp(word, "continue") == 0 ||
        strcmp(word, "default") == 0 ||
        strcmp(word, "do") == 0 ||
        strcmp(word, "double") == 0 ||
        strcmp(word, "else") == 0 ||
        strcmp(word, "enum") == 0 ||
        strcmp(word, "extern") == 0 ||
        strcmp(word, "float") == 0 ||
        strcmp(word, "for") == 0 ||
        strcmp(word, "goto") == 0 ||
        strcmp(word, "if") == 0 ||
        strcmp(word, "inline") == 0 ||
        strcmp(word, "int") == 0 ||
        strcmp(word, "long") == 0 ||
        strcmp(word, "register") == 0 ||
        strcmp(word, "restrict") == 0 ||
        strcmp(word, "return") == 0 ||
        strcmp(word, "short") == 0 ||
        strcmp(word, "signed") == 0 ||
        strcmp(word, "sizeof") == 0 ||
        strcmp(word, "static") == 0 ||
        strcmp(word, "struct") == 0 ||
        strcmp(word, "switch") == 0 ||
        strcmp(word, "typedef") == 0 ||
        strcmp(word, "union") == 0 ||
        strcmp(word, "unsigned") == 0 ||
        strcmp(word, "void") == 0 ||
        strcmp(word, "volatile") == 0 ||
        strcmp(word, "while") == 0 ||
        strcmp(word, "_Bool") == 0)
    {
        return 1;
    }

    return 0;
}

int isOperator(char ch)
{
    return ch == '+' ||
           ch == '-' ||
           ch == '*' ||
           ch == '/' ||
           ch == '%' ||
           ch == '=' ||
           ch == '<' ||
           ch == '>' ||
           ch == '!' ||
           ch == '&' ||
           ch == '|' ||
           ch == '^' ||
           ch == '~';
}


int isSpecialSymbol(char ch)
{
    return ch == ';' ||
           ch == ',' ||
           ch == '(' ||
           ch == ')' ||
           ch == '{' ||
           ch == '}' ||
           ch == '[' ||
           ch == ']' ||
           ch == ':' ||
           ch == '#' ||
           ch == '?' ||
           ch == '"' ||
           ch == '\'';
}

int main()
{
    char input[200];

    printf("Enter a C-like statement: ");
    fgets(input, sizeof(input), stdin);

    int i = 0;

    printf("\n%-15s%s\n", "LEXEME", "TOKEN TYPE");
    printf("-----------------------------------\n");

    while (input[i] != '\0')
    {
        if (isspace(input[i]))
        {
            i++;
            continue;
        }

        if (isalpha(input[i]) || input[i] == '_')
        {
            char lexeme[MAX];
            int j = 0;

            while (isalnum(input[i]) || input[i] == '_')
            {
                lexeme[j++] = input[i++];
            }

            lexeme[j] = '\0';

            if (isKeyword(lexeme))
                printf("%-15sKEYWORD\n", lexeme);
            else
                printf("%-15sIDENTIFIER\n", lexeme);
        }

        else if (isdigit(input[i]) || input[i] == '.')
        {
            char lexeme[MAX];
            int j = 0;
            int dotCount = 0;
            int digitCount = 0;

            while (isdigit(input[i]) || input[i] == '.')
            {
                if (input[i] == '.')
                    dotCount++;
                else
                    digitCount++;

                lexeme[j++] = input[i++];
            }

            lexeme[j] = '\0';

            if (dotCount > 1 || digitCount == 0)
            {
                printf("%-15sINVALID TOKEN\n", lexeme);
            }
            else if (dotCount == 1)
            {
                printf("%-15sFLOAT\n", lexeme);
            }
            else
            {
                printf("%-15sINTEGER\n", lexeme);
            }
        }

        else if (isOperator(input[i]))
        {
            char ch = input[i];

            if (ch == '=')
                printf("%-15cASSIGNMENT_OPERATOR\n", ch);
            else
                printf("%-15cARITHMETIC_OPERATOR\n", ch);

            i++;
        }

        else if (isSpecialSymbol(input[i]))
        {
            printf("%-15cSPECIAL_SYMBOL\n", input[i]);
            i++;
        }

        else
        {
            char invalid[MAX];
            int j = 0;

            while (input[i] != '\0' &&
                   !isspace(input[i]) &&
                   !isOperator(input[i]) &&
                   !isSpecialSymbol(input[i]))
            {
                invalid[j++] = input[i++];
            }

            invalid[j] = '\0';

            printf("%-15sINVALID TOKEN\n", invalid);
        }
    }

    return 0;
}
