// const printAllDivisors = (num) => {
//   for (let i = 1; i <= num; i++) {
//     if (num % i == 0) {
//       console.log(i);
//     }
//   }
// };

const printAllDivisors = (num) => {
  const divisors = [];
  for (let i = 1; i <= Math.sqrt(num); i++) {
    if (num % i == 0) {
      divisors.push(i);
      if (num / i != i) {
        divisors.push(num / i);
      }
    }
  }
  divisors.sort((a, b) => a - b);
  console.log(divisors.join("\n"));
};

printAllDivisors(36);
