// function gcd(num1, num2) {
//   let gcd1;
//   for (let i = 1; i <= Math.min(num1, num2); i++) {
//     if (num1 % i === 0 && num2 % i === 0) {
//       gcd1 = i;
//     }
//   }
//   return gcd1;
// }
function gcd(num1, num2) {
  let gcd1;
  while (num1 > 0 && num2 > 0) {
    if (num1 > num2) {
      num1 = num1 % num2;
    } else {
      num2 = num2 % num1;
    }
  }
  return num1 === 0 ? num2 : num1;
}

console.log(gcd(66, 99));
