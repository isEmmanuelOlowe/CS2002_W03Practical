int fibcalc(int n) {
  int fib_previous = 1;
  int fib_prenultimate = 0;
  for (int i = 1; i < n; i++) {
    int temp = fib_previous;
    fib_previous = fib_previous + 2 * fib_prenultimate;
    fib_prenultimate = temp;
  }
  if (n == 0) {
    return fib_prenultimate;
  }
  return fib_previous;
}
