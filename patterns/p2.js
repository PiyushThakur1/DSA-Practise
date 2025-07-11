let a = 5;

for (let i = 0; i < 5; i++) {
  let row = "";
  for (let j = 0; j <= i; j++) {
    row += "* ";
  }
  console.log(row);
}

// for (let i = 0; i <= a; i++) {
//   console.log("* ".repeat(i + 1));
// }
