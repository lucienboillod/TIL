Machine Learning
===============
Stanford University

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

Unsupervised
------------
Approach problems with little or no idea of what the results should look like.

* **clustering**: regroup data (google news, social network analysis, market segmentation ...) based on relationships among variables in the data.
* **non-clustering**: example find the locutor of a conversation.

Model Representation
--------------------
Let's use x<sup>(i)</sup> to denote input variable and y<sup>(i)</sup> the output variable that we are trying to predict. 

A pair (x<sup>(i)</sup>, y<sup>(i)</sup>) is called a trainning example. A list of *m* training examples is a training set.

Given a training set, the goal is to learn a function h: X -> Y, so that h(x) is a good predictor fot he corresponding value of y.
This function h is called a **hypothesis**

Cost Function
-------------
Measure the accuracy of the hypothesis function. This takes an average difference of all the results of the hypothesis, so this basically compute the error.
The **squared error function** is an example of cost function (See: [link](https://medium.com/@lachlanmiller_52885/machine-learning-week-1-cost-function-gradient-descent-and-univariate-linear-regression-8f5fe69815fd))


Gradient descent
----------------
It is a function used to minimize the cost function.
