let x = 4;
let y;

y = Math.pow(x, 3);
console.log("4 raised to the power of 3 is: " + y);

y = Math.pow(x, 4);
console.log("4 raised to the power of 4 is: " + y);

y = Math.pow(5, x);
console.log("5 raised to the power of 4 is: " + y);

console.log("2 + (5 raised to the power of " + x + ") yields: " + (2 + Math.pow(5, x)))
