#include<stdio.h>
#include<ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
	top = top + 1;
    stack[top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
    {
    	//return stack[top--];
    	int item = stack[top];
    	top = top - 1;
    	return item;
    }
        
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    if(x=='^')
    	return 3;
    return 0;
}

int main()
{
    char exp[100], pexp[100];
    char e, x;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
    int i=0;
	int j=0;
	
	
    while(exp[i]!= '\0')
    {
    	e= exp[i];
        if(isalnum(e))
        {
		pexp[j++]=e;
        }
        else if(e == '(')
            push(e);
        else if(e == ')')
        {
            while((x = pop()) != '(')
                {
				pexp[j]=x;
				j++;
				}
        }
        else
        {
            while(priority(stack[top]) >= priority(e))
            {
		     	int x1=pop();
                pexp[j]=x1;
                j++;
			 }
			push(e);
        }
        i++;
    }
    while(top != -1)
    {
    	int x2=pop();
        pexp[j++]=x2;
    }
    
pexp[j]='\0';
i=0;
while (pexp[i]!='\0')
{
	printf("%c",pexp[i]);
	i++;
}
	//puts(pexp);
	return 0;
}
