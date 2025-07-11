// let num = 6556;
// let copy = num;
// let lastDigit;
// let reverseNum = 0;
// while (num > 0) {
//   lastDigit = num % 10;
//   num = Math.floor(num / 10);
//   reverseNum = reverseNum * 10 + lastDigit;
// }

const isPalindromeNum = (num) => {
  let rev = 0;
  let copy = num;
  while (num > 0) {
    rev = rev * 10 + (num % 10);
    num = Math.floor(num / 10);
  }
  return rev === copy;
};

console.log(isPalindromeNum(1231));
console.log(isPalindromeNum(121));

const isPalindromeString = (str) => {
  const len = str.length;

  for (let i = 0; i < len / 2; i++) {
    if (str[i] !== str[len - 1 - i]) {
      return false;
    }
  }

  return true;
};

// Usage:
console.log(isPalindromeString("racecar")); // true
console.log(isPalindromeString("aza")); // false
