
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct list {
    struct list *next;
    int value;
    int index;
} lis;

void pa(lis **stack_a, lis **stack_b) 
{
    lis *t;

    if (*stack_b) {
        lis *t = *stack_b;
        *stack_b = (*stack_b)->next;
        t->next = *stack_a;
        *stack_a = t;
        printf("pa\n");
    }
}

void pb(lis **stack_a, lis **stack_b) {
    if (*stack_a) {
        lis *t = *stack_a;
        *stack_a = (*stack_a)->next;
        t->next = *stack_b;
        *stack_b = t;
        printf("pb\n");
    }
}

void sa(lis **stack_a)
{
    lis *first;
    lis *second;

    if (*stack_a != NULL && (*stack_a)->next != NULL) 
    {
        first = *stack_a;
        second = (*stack_a)->next;
        first->next = second->next;
        second->next = first;
        *stack_a = second;
        printf("sa\n");
    }
}

void sb(lis **stack_b)
{
    lis *first;
    lis *second;

    if (*stack_b != NULL && (*stack_b)->next != NULL) 
    {
        first = *stack_b;
        second = (*stack_b)->next;
        first->next = second->next;
        second->next = first;
        *stack_b = second;
        printf("sb\n");
    }
}

void ss(lis **stack_a, lis **stack_b)
{
    sa(stack_a);
    sb(stack_b);
    printf("ss\n");
}

void ra(lis **stack_a) 
{
    lis *t;
    lis *curr;

    if (*stack_a != NULL && (*stack_a)->next != NULL) 
    {
        t = *stack_a;
        curr = *stack_a;
        while (curr->next != NULL)
            curr = curr->next;
        *stack_a = t->next;
        t->next = NULL;
        curr->next = t;
        printf("ra\n");
    }
}


void rb(lis **stack_b) 
{
    lis *t;
    lis *curr;

    if (*stack_b != NULL && (*stack_b)->next != NULL) 
    {
        t = *stack_b;
        curr = *stack_b;
        while (curr->next != NULL)
            curr = curr->next;
        *stack_b = t->next;
        t->next = NULL;
        curr->next = t;
        printf("rb\n");
    }
}

void rr(lis **stack_a, lis **stack_b) {
    ra(stack_a);
    rb(stack_b);
    printf("rr\n");
}

void rra(lis **stack_a)
{
    lis *prev;
    lis *curr;

    prev = NULL;
    if (*stack_a != NULL && (*stack_a)->next != NULL) 
    {
        curr = *stack_a;
        while (curr->next != NULL)
        {
            prev = curr;
            curr = curr->next;
        }
        if (prev != NULL)
            prev->next = NULL;
        curr->next = *stack_a;
        *stack_a = curr;
        printf("rra\n");
    }
}

void rrb(lis **stack_b)
{
    lis *prev;
    lis *curr;

    prev = NULL;
    if (*stack_b != NULL && (*stack_b)->next != NULL) 
    {
        curr = *stack_b;
        while (curr->next != NULL)
        {
            prev = curr;
            curr = curr->next;
        }
        if (prev != NULL)
            prev->next = NULL;
        curr->next = *stack_b;
        *stack_b = curr;
        printf("rrb\n");
    }
}

void rrr(lis **stack_a, lis **stack_b)
{
    rra(stack_a);
    rrb(stack_b);
    printf("rrr\n");
}

int	is_sorted(lis *head)
{
	while (head && head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

void	assign_indices(lis *stack)
{
	lis	*cur1;
	lis	*cur2;
	int			index;

	cur1 = stack;
	while (cur1)
	{
		index = 0;
		cur2 = stack;
		while (cur2)
		{
			if (cur1->value > cur2->value)
				index++;
			cur2 = cur2->next;
		}
		cur1->index = index;
		cur1 = cur1->next;
	}
}

void	freeStack(lis **stack)
{
	lis	*temp;

	while (*stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
}

int     sizeStack(lis **stack_a)
{
    int c;
    lis *t;

    c = 0;
    if (*stack_a)
    {
        t = *stack_a;
        while (t)
        {
            c++;
            t = t -> next;
        }
    }
    return (c);
}

int findPos(lis **stack_a, int n)
{
    int i;
    lis *t;

    i = 0;
    t = *stack_a;
	if (*stack_a)
	{
		while (t && (t->value != n))
		{
			i++;
			t = t->next;
		}
		if (t && t->value == n)
			return (i);
		else
			return (-1);
	}
	else
		return (-1);
}


int getMaxBits(lis *stack) {
    int max = 0;
    while (stack) {
        if (stack->value > max) max = stack->value;
        stack = stack->next;
    }
    int bits = 0;
    while (max) {
        max >>= 1;
        bits++;
    }
    return bits;
}

void lsbSort(lis **stack_a, lis **stack_b, int *i) {
    int size = 0;
    lis *temp = *stack_a;
    while (temp) { size++; temp = temp->next; }
    
    int j = 0; 
   
    while (j < size) {
        if (((*stack_a)->index >> (*i) & 1))
            ra(stack_a);
        else 
            pb(stack_a, stack_b);
        j++;
    }
}


void	radixSort(lis **stack_a, lis **stack_b)
{
	int	i;
    int size;

    size = getMaxBits(*stack_a);
    assign_indices(*stack_a);
	i = 0;
	while (is_sorted(*stack_a) != 1 && i < 32)
	{
		lsbSort(stack_a, stack_b, &i);
		while (*stack_b)
			pa(stack_a, stack_b);
        i++;
        freeStack(stack_b);
	}

}


void takeMin(lis **stack_a, lis **stack_b)
{
    lis *t;
    int min;
    
    t = *stack_a;
    min = t->value;
    while (t != NULL)
    {
        if (t->value < min)
            min = t->value;
        t = t->next;
    }
    if (findPos(stack_a, min) <= (sizeStack(stack_a) / 2))
    {
        while ((*stack_a)->value != min)
            ra(stack_a);
    }
    else
    {
        while ((*stack_a)->value != min)
            rra(stack_a);
    }
    pb(stack_a, stack_b);
}


void sort2(lis **stack_a)
{
	lis *t;

	if (*stack_a != NULL)
	{
		if ((*stack_a)->value>(*stack_a)->next->value)
			ra(stack_a);
	}
}

void sort3(lis **stack_a)
{
    int a;
    int b;
    int c;

    a = (*stack_a)->value;
    b = (*stack_a)->next->value;
    c = (*stack_a)->next->next->value;
    if (a > b && b < c && a < c)
        sa(stack_a);
    else if (a > b && b > c)
    {
        sa(stack_a);
        rra(stack_a);
    }
    else if (a > b && b < c)
    {
        ra(stack_a);
        sa(stack_a);
    }
    else if (a < b && b > c && a < c)
        sa(stack_a);
    else if (a < b && b > c)
    {
        rra(stack_a);
        sa(stack_a);
    }
}


void sort4(lis **stack_a, lis **stack_b)
{
    if (*stack_a != NULL)
    {
        takeMin(stack_a, stack_b);
        sort3(stack_a);
        pa(stack_a, stack_b);
    }
}

void sort5(lis **stack_a, lis **stack_b)
{
    if (*stack_a != NULL)
    {
        takeMin(stack_a, stack_b);
        sort4(stack_a, stack_b);
        pa(stack_a, stack_b);
    }
}

void printStack(lis *stack) {
    while (stack) {
        printf("%d ", stack->value);
        stack = stack->next;
    }
    printf("\n");
}

void	finalAlgorithm(lis **stack_a, lis **stack_b)
{
	int	size;

	size = sizeStack(stack_a);
	assign_indices(*stack_a);
	if (size == 2)
		sort2(stack_a);
	else if (size == 3)
		sort3(stack_a);
	else if (size == 4)
		sort4(stack_a, stack_b);
	else if (size == 5)
		sort5(stack_a, stack_b);
	else
		radixSort(stack_a, stack_b);
	freeStack(stack_a);
}


void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}


int	is_delimiter(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}


int	count_words(const char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_delimiter(*str, charset))
			str++;
		if (*str && !is_delimiter(*str, charset))
		{
			count++;
			while (*str && !is_delimiter(*str, charset))
				str++;
		}
	}
	return (count);
}

char	*copy_word(const char *str, char *charset)
{
	char	*word;
	int		length;

	length = 0;
	while (str[length] && !is_delimiter(str[length], charset))
		length++;
	word = (char *)malloc(sizeof(char) * (length + 1));
	if (!word)
		return (NULL);
	length = 0;
	while (*str && !is_delimiter(*str, charset))
		word[length++] = *str++;
	word[length] = '\0';
	return (word);
}

char	**ft_split(const char *str, char *charset)
{
	char	**result;
	int		words;
	int		i;

	i = 0;
	words = count_words(str, charset);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	while (*str)
	{
		while (*str && is_delimiter(*str, charset))
			str++;
		if (*str && !is_delimiter(*str, charset))
		{
			result[i] = copy_word(str, charset);
			if (!result[i])
				return (NULL);
			i++;
			while (*str && !is_delimiter(*str, charset))
				str++;
		}
	}
	result[i] = NULL;
	return (result);
}


long	ft_atol(const char *str)
{
	int	sign;
	long	number;

	sign = 1;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (sign * number);
}

int checkNumber(char *str)
{
	if (str)
	{
		if (*str == '+' || *str == '-')
			str++;
		while (*str)
		{
			if (*str >= '0' && *str <= '9')
				str++;
			else
				return (-1);
		}
		return (1);
	}
}

void	putInStack(lis **stack_a, int n)
{
	lis	*new;
	lis	*t;

	new = (lis*)malloc(sizeof(lis));
	new->value = n;
	new->next = NULL;
	if (*stack_a == NULL)
	{
		*stack_a = new;
		return ;
	}
	t = *stack_a;
	while (t->next != NULL)
		t = t->next;
	t->next = new;
}


void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}

void	ft_putstr_fd(char *s, int fd)
{
	while (s && *s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}


int inputType1(char **argv, lis **stack_a)
{
	char **nmrs;
	int i;

	i = 0;
	nmrs = ft_split(argv[1], " ");
	if (!nmrs[0])
		return (ft_free(nmrs), -1);
	while (nmrs[i])
	{
		if (checkNumber(nmrs[i]) == 1 && ft_atol(nmrs[i]) >= -2147483648 
			&& ft_atol(nmrs[i]) <= 2147483647)
		{
			if (findPos(stack_a, ft_atol(nmrs[i])) == -1)
				putInStack(stack_a, ft_atol(nmrs[i]));
			else
				return (ft_free(nmrs), -1);
		}
		else
			return (ft_free(nmrs), -1);	
		i++;
	}
	return (ft_free(nmrs), 0);
}

int inputType2(char **argv, lis **stack_a)
{
	int i;

	i = 1;
	while (argv[i])
	{
		if (checkNumber(argv[i]) == 1 && ft_atol(argv[i]) >= -2147483648 
			&& ft_atol(argv[i]) <= 2147483647)
		{
			if (findPos(stack_a, ft_atol(argv[i])) == -1)
				putInStack(stack_a, ft_atol(argv[i]));
			else
				return (-1);
		}
		else
			return (-1);
		i++;
	}
	return (0);
}

int	finalHandle(int argc, char **argv, lis **stack_a, lis **stack_b)
{
	if (argc == 2)
	{
		if (inputType1(argv, stack_a) == -1)
			return (freeStack(stack_a), ft_putstr_fd("Error\n", 2), 0);
	}
	else if (argc > 2)
		if (inputType2(argv, stack_a) == -1)
			return (freeStack(stack_a), ft_putstr_fd("Error\n", 2), 0);
	finalAlgorithm(stack_a, stack_b);
	return (0);
}


int	main(int argc, char **argv)
{
	lis	*stack_a;
	lis	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	return (finalHandle(argc, argv, &stack_a, &stack_b));
}
