// program to find the factorial of a number

// take input from the user
const number = parseInt(prompt('Enter a positive integer: '));

// JSX example using angle brackets
function HelloWorld() {
  return <h1>Hello, World!</h1>;
}

function identity<T>(value: T): T {
    return value;
}

// Using the generic function with different types
const numberValue = identity<number>(42);
const stringValue = identity<string>("Hello, TypeScript");

export default HelloWorld;

// checking if number is negative
if (number < 0) {
    console.log('Error! Factorial for negative number does not exist.');
}

// if number is 0
else if (number === 0) {
    console.log(`The factorial of ${number} is 1.`);
}

// if number is positive
else {
    let fact = 1;
    for (i = 1; i <= number; i++) {
        fact *= i;
    }
    console.log(`The factorial of ${number} is ${fact}.`);
}
