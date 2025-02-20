// Generic function using angle brackets
function identity<T>(value: T): T {
    return value;
}

// Using the generic function with different types
const numberValue = identity<number>(42);
const stringValue = identity<string>("Hello, TypeScript");

console.log(numberValue);  // Output: 42
console.log(stringValue);  // Output: Hello, TypeScript
