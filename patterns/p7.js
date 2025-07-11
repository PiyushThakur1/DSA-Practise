let a = 5;


for (let i = 1; i <= 5; i++) {
  let row = "";
  for (let j = 1; j <= a-i+1; j++) {
    row += j ;
  }
  console.log(row);
}