/*introducing argc and argv*/

int main(int argc, char *argv)
{
    // argc - argument count - number of command line argumenents
    // argv - argument vetors - array of pointers to the cli arguments, argv[0] points to the name of the file name, the rest point
    // to the remaing argumets
    // argv[argc] will always be a null pointer

    /*Example: 
        ls -l name.c
        this command will have an argc of 3 as it has 3 commands
        arg[0] will point to the command name
        arg[1] will point to the string "-l\0"
        arg[2] will point to the string "name.c\0",
        arg[3] will be a null pointer*/
}