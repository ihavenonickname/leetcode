#include <stdbool.h>
#include <stdlib.h>

struct stack
{
    char* elements;
    size_t capacity;
    size_t n_elements;
};

static struct stack* stack_init(size_t min_capacity)
{
    struct stack* stack = calloc(1, sizeof(struct stack));

    stack->n_elements = 0;
    stack->capacity = min_capacity;
    stack->elements = calloc(min_capacity, sizeof(char*));

    return stack;
}

static void stack_append(struct stack* stack, char element)
{
    if (stack->n_elements == stack->capacity)
    {
        stack->capacity *= 2;
        stack->elements = realloc(stack->elements, stack->capacity);
    }

    stack->elements[stack->n_elements] = element;
    stack->n_elements += 1;
}

static char stack_pop(struct stack* stack)
{
    stack->n_elements -= 1;

    if (stack->n_elements * 3 < stack->capacity)
    {
        stack->capacity = stack->capacity / 2;
        stack->elements = realloc(stack->elements, stack->capacity);
    }

    return stack->elements[stack->n_elements];
}

static size_t stack_length(struct stack* stack)
{
    return stack->n_elements;
}

static void stack_free(struct stack* stack)
{
    free(stack->elements);
    free(stack);
}

bool isValid(char* s)
{
    struct stack* stack = stack_init(100);

    stack_append(stack, '\0');

    bool ok = true;

    for (; *s != '\0'; s += 1)
    {
        if (*s == '(')
        {
            stack_append(stack, '(');
        }
        else if (*s == '[')
        {
            stack_append(stack, '[');
        }
        else if (*s == '{')
        {
            stack_append(stack, '{');
        }
        else if (*s == ')' && stack_pop(stack) != '(')
        {
            ok = false;

            break;
        }
        else if (*s == ']' && stack_pop(stack) != '[')
        {
            ok = false;

            break;
        }
        else if (*s == '}' && stack_pop(stack) != '{')
        {
            ok = false;

            break;
        }
        else
        {
            // TODO: panic
        }
    }

    ok = ok && stack_length(stack) == 1;

    stack_free(stack);

    return ok;
}
