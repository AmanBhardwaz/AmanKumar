let a = 8;
console.log(a);  // Output: 8

a = 90; // ✅ Reassignment allowed
console.log(a);  // Output: 90

{
    a = 78; // Refers to the outer 'a'
    console.log(a);  // Output: 78
}
console.log(a);  // Output: 78 (since same 'a' was updated, no new block scope variable)


b=80
console.log(b);
b=98
console.log(b)
{
    b=57
    console.log(b)
}
console.log(b)

var d = 80;
console.log(d);  // Output: 80

d = 98; // ✅ Reassignment allowed
console.log(d);  // Output: 98

{
    var d = 57; // ⛔ Re-declares 'b' in the same function/global scope!
    console.log(d);  // Output: 57
}
console.log(d);  // Output: 57 (outer 'b' was overwritten)
const c = 30;
console.log(c);  // Output: 30

// c = 40; // ❌ Error: Assignment to constant variable

{
    const c = 50; // ✅ New block-scoped variable
    console.log(c);  // Output: 50
}
console.log(c);  // Output: 30 (outer 'c' unchanged)