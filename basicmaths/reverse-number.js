let num = 6578;
let lastDigit;
let reverseNum = 0;
while (num > 0) {
  lastDigit = num % 10;
  num = Math.floor(num / 10);
  reverseNum = reverseNum * 10 + lastDigit;
}
console.log(reverseNum);
