Coffeescript support destructuring as [ES6](https://github.com/lukehoban/es6features#destructuring)

~~~~~coffee
# Array matching
[a, ... , b] = [1,2,3]

console.log a # 1
console.log b # 3

# Object matching
User =
  id: "4242"
  name: "xou"
  age: 20
  
{ name, age } = User

console.log name # xou
console.log age  # 20
~~~~~
