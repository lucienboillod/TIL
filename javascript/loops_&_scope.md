#### Example

~~~~~coffee
keys = ["foo", "bar"]

consoleKey = {}
for key in keys
  consoleKey[key] = -> console.log key
  
consoleKey.foo() # => bar

goodConsoleKey = {}
keys.forEach (key) ->
  consoleKey[key] = -> console.log key
  
goodConsoleKey.foo() # => foo
~~~~~
