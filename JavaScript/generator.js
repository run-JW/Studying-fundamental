// 10 이하의 소수 yield를 가진 generator 함수
function* primesLowerTen() {
  yield 2;
  yield 3;
  yield 5;
  yield 7;
}

const primes = primesLowerTen();

// generator는 yield 값들을 순회하는 iterator 객체
primes.next().value; // 2
primes.next().value; // 3
primes.next().value; // 5
primes.next().value; // 7
primes.next().done;  // true
