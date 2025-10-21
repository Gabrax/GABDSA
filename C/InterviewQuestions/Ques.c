#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

void q1()
{
  for(int i=0;i<10;++i) printf("%d ", i);
}
void q2()
{
  unsigned int res = 0;
  while(1)
  {
    if(res == 20) break;
    printf("%d ", res+=2);
  }
}
void q3()
{
  int o = 0;
  for(size_t i=1;i<=100;++i)
  {
    o += i; 
  }
  printf("%d\n",o);
}
void q4(int n) // Fibonacci
{
  int new_v = 0, old = 1, next = 0;
  for(int i=0;i<n;++i)
  {
    printf("%d ", new_v);
    next = new_v + old;
    new_v = old;
    old = next;
  }
}
void q5()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  for(int i=0;i<=10;++i)
  {
    printf("%d x %d = %d\n",num,i,num * i);
  } 
}
void q6()
{
  for(size_t i=0;i<5;++i)
  {
    /*printf("Row : %d ",i);*/
    for(size_t j=0;j<=i;++j)
    {
      /*printf("Col : %d ",j);*/
      printf("*");
    }
    printf("\n");
  }
}
int factorial(int n)
{
  if(n == 0) return 1;

  return n * factorial(n-1);
}
void q7()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);

  int res = factorial(num);
  printf("%d\n",res);
}
void isPrime(int val)
{
  int count = 0;
  for(int i=1;i<=val;++i)
  {
    if((val % i) == 0) count++;
  }

  if(count == 2)
  {
    printf("%d ", val);
  }
}
void q8()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);

  int count = 0;
  for(int i=1;i<=num;++i)
  {
    if((num % i) == 0) count++;
  }

  if(count == 2)
  {
    printf("%d is a prime number", num);
  }
}
void q9()
{
  for(int i=1;i<=100;++i)
  {
    isPrime(i);
  }
}
void q10()
{
  for(int i=32;i<=126;++i)
  {
    printf("%c ",(char)i);
  }
}
void q11()
{
  int sum = 0;
  for(int i=1;i<=50;++i)
  {
    if(i % 2 == 0) sum += i;
  }
  printf("Sum: %d\n",sum);
}
void q12()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);

  int sum=0;
  for(int i=1;i<num;++i)
  {
    if((num % i) == 0)
    {
      sum += i;
    }

  }
  if(sum == num) printf("%d is a perfect number\n",num);
  else printf("Its not perfect number\n");
}
void q13()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);

  int fac = 1;
  int bruh = num;
  do {
    fac *= bruh--;
  } while (bruh > 0);

  printf("%d\n",fac);
}
void q14()
{
  for(int i=1;i<=10;++i)
  {
    printf("%d ^ %d == %d\n",i,2, i * i);
  }
}
void q15()
{
  int num;
  printf("Enter a number of terms:");
  scanf("%d",&num);

  float a = 1.0f, r = 2.0f; 
  float sum = 0.0f;

  float term = a;
  for (int i = 1; i <= num; ++i) {
      sum += term;
      term *= r; 
  }

  printf("The sum of the geometric series is %.0f.\n", sum);
}
void q16()
{
  int num;
  printf("Enter a number of terms:");
  scanf("%d",&num);

  for (int i = 1; i <= num; ++i) {
    printf("%f ",sqrt(i));
  }
}
void q17()
{
  int num;
  printf("Enter a number of terms:");
  scanf("%d",&num);

  int sum = 0;
  int term = 3; 

  for (int i = 1; i <= num; ++i) {
      sum += term;
      term += 6;     
  }
  printf("%d\n", sum);
}
void q18()
{
  int count = 100;
  while(count != 0)
  {
    printf("%d\n",count);
    --count;
  }
}
void q19()
{
  int num;
  printf("Enter a number of terms:");
  scanf("%d",&num);

  while(1)
  {
    printf("%d ", num);
    if(num == 1) break;
    if(num % 2 == 0) num /= 2;
    else {
      num *= 3;
      ++num;
    } 
  }
}
void q20()
{
  int a,b;
  printf("Enter a number 1:");
  scanf("%d",&a);
  printf("Enter a number 2:");
  scanf("%d",&b);

  printf("GFD of %d and %d is ",a,b);
  while(a != b)
  {
    if(a > b) a -= b;
    else b-= a;
  }

  printf("%d\n",a);
}
void q21()
{
  char a[4]; 
  char b[4];

  printf("Enter up to 3 digits: ");
  scanf("%3s", a);

  size_t len = strlen(a);
  size_t b_len = 0;
  while(len > 0)
  {
    --len;
    b[b_len] = a[len];
    ++b_len;
  }

  b[3] = '\0';
  printf("%s\n",a);
  printf("%s\n",b);

  if(strcmp(a, b) == 0) printf("%s is a palindrome", a); 
  else printf("%s is not palindrome", a);
}
void q22()
{
  int spaces = 3;
  for(size_t i=1;i<=7;i+=2)
  {
    for(size_t i=0;i<spaces;++i) printf(" ");
    --spaces; 
    for(size_t j=0;j<i;++j) printf("*");
    printf("\n");
  }
  spaces = 1;
  for(int i=5;i>=1;i-=2)
  {
    for(int i=0;i<spaces;++i) printf(" ");
    ++spaces; 
    for(int j=0;j<i;++j)printf("*");
    printf("\n");
  }
}
void q23()
{
  int a;
  printf("Guess a number (1-100):");
  scanf("%d",&a);

  srand(time(NULL));

  int r = rand() % 100;

  while(1)
  {
    if(r==a) {
      printf("Uve guessed right\n");
      break;
    }
    else if(r < a) printf("Try lower\n");
    else if(r > a) printf("Try higher\n");
    printf("Guess a number (1-100):");
    scanf("%d",&a);
  }
}
void q24()
{
  int a;
  printf("Enter a positive integer:");
  scanf("%d",&a);

  float sum = 0;
  bool _switch = false;
  for(float i=1;i<=a;++i)
  {
    sum += (_switch ? 1.0f/i : -1.0f/i);
    _switch = !_switch;
  }

  printf("%f\n",sum);
}
void q25()
{
  srand(time(NULL));

  int player_hp = 3, enemy_hp = 3;
  int player_move, enemy_move;

  while (1)
  {
    if (player_hp == 0) {
        printf("You’ve lost!\n");
        break;
    }
    if (enemy_hp == 0) {
        printf("Enemy lost!\n");
        break;
    }

    printf("Choose (rock - 1, paper - 2, scissors - 3): ");
    scanf("%d", &player_move);

    enemy_move = (rand() % 3) + 1; 
    printf("Enemy chose: %d\n", enemy_move);

    int result = (player_move - enemy_move + 3) % 3;

    if (result == 0) {
        printf("Draw!\n");
    } else if (result == 1) {
        --enemy_hp;
        printf("You win this round! Enemy HP: %d\n", enemy_hp);
    } else { 
        --player_hp;
        printf("You lost this round! Your HP: %d\n", player_hp);
    }
  }
}
void q26()
{
  int a = 1000000;

  double sum = 0;
  bool _switch = false;
  for(float i=1;i<=2*a-1;i+=2)
  {
    sum += (_switch ? -1.0f : 1.0f) / i;
    _switch = !_switch;
  }

  printf("%f\n",sum*4);
}
void q27()
{
  int a;
  printf("Generate password for length:");
  scanf("%d",&a);

  srand(time(NULL));

  char str[a];
  int arr[3];
  int number, upletter, lowletter, random;
  for(size_t i=0;i<a;++i)
  {
    number = (rand() % (57 - 48 + 1)) + 48;
    upletter = (rand() % (90 - 65 + 1)) + 65;
    lowletter = (rand() % (122 - 98 + 1)) + 98;

    arr[0]= number;
    arr[1]= upletter;
    arr[2]= lowletter;

    random = rand() % 3;

    str[i] = (char)arr[random];
  }
  printf("Generated password: %s\n", str);
}
void q28()
{
  int a;
  printf("Guess a number (1-100), Attempts = 5:");
  scanf("%d",&a);

  srand(time(NULL));

  int r = rand() % 100;

  int attempts = 5;
  while(1)
  {
    if(r==a) {
      printf("Uve guessed right with %d Attempts\n", attempts);
      break;
    }
    else if(r < a) {
      --attempts;
      printf("Try lower, Attempts: %d\n",attempts);
    }
    else if(r > a) {
      --attempts;
      printf("Try higher, Attempts: %d\n",attempts);
    }
    if(attempts == 0){
      printf("0 Attempts, You lost\n");
      break;
    }
    printf("Guess a number (1-100):");
    scanf("%d",&a);
  }
}
void q29()
{
  int sum = 0;
  for(int i=1;i<=100;++i)
  {
    int count = 0;
    for(int j=1;j<=i;++j)
    {
      if((i % j) == 0) count++;
    }

    if(count == 2)
    {
      sum += i;
    }
  }
  printf("%d\n",sum);
}
void create_magic(int* arr, int n, int magic_const)
{
  bool memo[10] = {0};

  int a, b, c;
  for (int i = 0; i < n * n; i += 3) {
      do {
          a = (rand() % 9) + 1;
          b = (rand() % 9) + 1;
          c = (rand() % 9) + 1;
      } while (a == b || a == c || b == c || memo[a] || memo[b] || memo[c]);

      memo[a] = memo[b] = memo[c] = true;

      arr[i] = a;
      arr[i+1] = b;
      arr[i+2] = c;
  }
}
bool is_magic(int* arr, int n, int magic_const)
{
  int sum_row, sum_col;

  // Check rows and columns
  for (int i = 0; i < n; ++i) {
      sum_row = sum_col = 0;
      for (int j = 0; j < n; ++j) {
          sum_row += arr[i * n + j];      
          sum_col += arr[j * n + i];      
      }
      if (sum_row != magic_const || sum_col != magic_const)
          return false;
  }

  // Check diagonals
  int diag1 = 0, diag2 = 0;
  for (int i = 0; i < n; ++i) {
      diag1 += arr[i * n + i];               
      diag2 += arr[i * n + (n - 1 - i)];     
  }

  return diag1 == magic_const && diag2 == magic_const;
}
void q30()
{
  srand(time(NULL));
  int magic_const = 15;
  int n = 3;
  int arr[n*n];

  while(1)
  {
    create_magic(arr, n, magic_const);
    if (is_magic(arr, n, magic_const))
    {
      printf("Found a magic square\n");
      for (int i = 0; i < n; ++i) {
          for (int j = 0; j < n; ++j)
              printf("%2d ", arr[i * n + j]);
          printf("\n");
      }
      break;
    }
  }
}

int main()
{
  q30();

  return 0;
}
