int fibonacci(int n) {

int tot;

if(n == 0) return 0;
if(n == 1) return 1;

tot = fibonacci(n - 1) + fibonacci(n-2);

return tot;
}
