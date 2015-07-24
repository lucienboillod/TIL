### Know if two instances have the same class

~~~~~coffee
# Let say we have a class
class MySuperClass

# Two instances of this class
a = new MySuperClass
b = new MySuperClass

# And another object
c = foo: 'bar'

# Now we want a function that can tell us that a and b have the same instance,
# but that a and c don't

sameClass = (obj1, obj2) ->
  obj1 instanceof obj2.constructor and obj2 instanceof obj1.constructor

sameClass a, b # => yes
sameClass a, c # => 
~~~~~

#### Ressources

- [jsFiddle](http://jsfiddle.net/xouabita/6y1wxz1m/)
- [stackOverflow](http://stackoverflow.com/questions/1249531/how-to-get-a-javascript-objects-class)
