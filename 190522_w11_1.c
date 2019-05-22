#include <stdio.h>

float add_func(float, float);
float minus_func(float, float);
float mult_func(float, float);
float div_func(float, float);
int mod_func(float, float);
int exp_func(float, float);

void main(void)
{
    FILE *ptr_file;
    ptr_file = fopen("io.txt", "w");

	float op1, op2, result;
	char op;

	printf("============================\n");
	printf("operator: +, -, *, /, %%, ^\n");
	printf("============================\n");
    fprintf(ptr_file,"============================\n");
    fprintf(ptr_file,"operator: +, -, *, /, %%, ^\n");
    fprintf(ptr_file,"============================\n");

	///

	for(int i=0; i<5; ++i)
	{
        printf("operand >> ");
        scanf("%f", &op1);
        fprintf(ptr_file, "operand >> %f\n",op1);
        printf("operator >> ");
        scanf("%s", &op);
        fprintf(ptr_file,"operator >> %c\n",op);
        printf("operand >> ");
        scanf("%f", &op2);
        fprintf(ptr_file,"operand >> %f\n",op2);

        switch(op){
            case '+':

                fprintf(ptr_file,"result >> %0.2f\n",add_func(op1,op2));
                break;
            case '-':
                fprintf(ptr_file,"result >> %0.2f\n",minus_func(op1,op2));
                break;
            case '*':
                fprintf(ptr_file,"result >> %0.2f\n",mult_func(op1,op2));
                break;
            case '/':
                fprintf(ptr_file,"result >> %0.2f\n",div_func(op1,op2));
                break;
            case'%':
                fprintf(ptr_file,"result >> %0.2f\n",mod_func(op1,op2));
                break;
            case '^':
                fprintf(ptr_file,"result >> %0.2f\n",exp_func(op1,op2));
                break;
        }


    }
	fclose(ptr_file);

}


float add_func(float a, float b)
{
	///
	float x = a + b;

    printf("result >> %0.2f\n",x);
	return x;
}

float minus_func(float a, float b)
{
	///
	float x = a - b;
    printf("result >> %0.2f\n",x);
    return x;
}

float mult_func(float a, float b)
{
	///
	float x = a *b;
    printf("result >> %0.2f\n",x);
    return x;
}

float div_func(float a, float b)
{
	///
	float x = a /b;
    printf("result >> %0.2f\n",x);
    return x;
}

int mod_func(float a, float b)
{
	///modular operator cannot be defined with float operands. need type casting (float -> int)

    int op1 = a;
    int op2 = b;
    int x = op1 % op2;
	printf("result >> %d\n",x);
	return x;
}

int exp_func(float a, float b)
{
	///
	int op1 = a;
	int op2 = b;
	int x = 1;
	for(;op2 >0;op2--){
	    x *= op1;
	}
    printf("result >> %d\n",x);
    return x;
}

