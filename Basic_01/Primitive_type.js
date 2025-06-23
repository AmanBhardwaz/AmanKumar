// 1. Number
let age = 25;
console.log(typeof age); // "number"

// 2. String
let name = "Aman";
console.log(typeof name); // "string"

// 3. Boolean
let isStudent = true;
console.log(typeof isStudent); // "boolean"

// 4. Undefined
let score;
console.log(typeof score); // "undefined"

// 5. Null (special case: typeof returns "object" due to legacy reasons)
let data = null;
console.log(typeof data); // "object"

// 6. BigInt (for very large integers)
let bigNumber = 1234567890123456789012345678901234567890n;
console.log(typeof bigNumber); // "bigint"

// 7. Symbol (for unique identifiers)
let sym = Symbol("id");
console.log(typeof sym); // "symbol"



// extra 
//NaN
let n=0/0
console.log(n);

console.log(typeof n)