#include <wcfile.h>


// solve function reads equations from one file, qfile, and writes them in a solved state to another file, afile
// param qfile: file with math questions to solve
// param afile: file to write equations with answers in

void solve(const char* qfile, const char* afile) {
    if(fopen(qfile, "r") == NULL) // returns if the qfile has nothing to read
        return;
    FILE *fin = fopen(qfile, "r"); // use fin to read qfile
    FILE *fout = fopen(afile, "w"); // use fout to write as afile
    char s[20]; // initialize string s used to read strings in qfile

    while(fgets(s,20,fin) != NULL){
        int a, b, result; // a and b are read, result is written
        char op; // stores the operands of the equations
        sscanf(s, "%d %c %d", &a, &op, &b); // parse the equation
        if(op == '+'){ // addition
            result = a + b;
        }
        if(op == '-'){ // subtraction
            result = a - b;
        }
        if(op == '*'){ // multiplication
            result = a * b;
        }
        if(op == '/'){ // division
            result = a / b;
        }
        if(op == '%'){ // modular
            result = a % b;
        }
        fprintf(fout, "%3d %c %3d = %-d\n", a, op, b, result); // print result into afile using fout
    }
    fclose(fin);
    fclose(fout);
}
