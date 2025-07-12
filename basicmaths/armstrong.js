const isArmstrong = (num) => {
  let copy = num;
  let sum = 0;
  while (num > 0) {
    sum += (num % 10) ** 3;
    num = Math.floor(num / 10);
  }
  return sum === copy;
};

console.log(isArmstrong(370));
