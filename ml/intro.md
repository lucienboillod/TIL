Machine Learning
===============
by Stanford University

Definition
----------
Machine learning is the field of study that gives computers the ability to learn without being explicitly programmed.

Formal definition: A computer program is said to learn from experience E with respect to some class of tasks T and performance measure P, if its performance at tasks in T, as measured by P, improves with experience E.

Example: playing checkers.

E = the experience of playing many games of checkers

T = the task of playing checkers.

P = the probability that the program will win the next game.

Supervised
----------
We are given a data set and already know what are correct outputs, so we establish a relationship between input and output in order to predict new inputs.

* **regression**: we provided some right answers, and the algo predict some more answers -> map input variables into continuous function.
* **classification**: we provided discrete valued output, and then we try to predict an output based on probability -> map input variables into discrete categories.
NB: In classification, we can use a lot of attributes, then cross between output to predict our output, the more we use attributes the more reliable can be the answer.