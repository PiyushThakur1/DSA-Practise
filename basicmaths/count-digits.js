let digit = 4537676534;

let count = 0;
while (digit > 0) {
  digit = Math.floor(digit / 10);
  count++;
}

console.log(`Number of digits is ${count}`);
