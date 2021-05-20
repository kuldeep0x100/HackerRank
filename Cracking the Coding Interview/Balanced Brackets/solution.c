#define STACK_MAX 1024
char stack[STACK_MAX] = { '0' };
int sp = 0;

void init_stack(void) {
    memset(stack, 0, STACK_MAX);
    sp = 0;
}
int push(char ch) {
    if (sp == STACK_MAX) {
        printf("ERROR: Stack Full\n");
        return -1;
    }
    stack[sp++] = ch;
    return 0;
}

char pop(void) {
    return (stack[--sp]);
}

char* isBalanced(char* s){
    int len = strlen(s);
    int i;
    init_stack();
    for (i = 0; i < len; i++) {
        switch(s[i]){
            case '{':
                        if (push(s[i]))
                            goto error;
                        break;

            case '}':
                        if (pop() != '{')
                            goto error;
                        break;

            case '(':
                        if (push(s[i]))
                            goto error;
                        break;

            case ')':
                    if (pop() != '(')
                        goto error;
                    break;

            case '[':
                        if (push(s[i]))
                            goto error;
                        break;

            case ']':
                        if (pop() != '[')
                            goto error;
                        break;
        }
    }
if(sp == 0)
    return "YES";

error:
    return "NO";
}

