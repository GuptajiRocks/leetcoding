def generate_primes(n):
  """Generates a list of prime numbers up to n.

  Args:
    n: The upper limit for the prime numbers.

  Returns:
    A list of prime numbers.
  """

  primes = [2]  # Start with 2 as the first prime number
  for num in range(3, n + 1, 2):  # Only check odd numbers
    is_prime = True
    for prime in primes:
      if prime * prime > num:
        break
      if num % prime == 0:
        is_prime = False
        break
    if is_prime:
      primes.append(num)
  return primes

if __name__ == "__main__":
  n = 100  # Change this to the desired upper limit
  prime_numbers = generate_primes(n)
  print(prime_numbers)