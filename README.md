Create your own templated Queue class implemented with a linked list.  The Queue class will have at least the following methods...

Queue(): Constructor to create an empty queue
Queue(const Queue<Type>&q): Copy constructor to create a deep copy of the queue
Queue<Type> operator=(const Queue<Type>&q):  Allows the user to create a deep copy of the queue
void enqueue(Type data): Inserts data at the back of the queue
Type peek():  Looks at the value at the front of the queue
void dequeue(): removes the front of the queue.
bool isEmpty(): returns true if the queue is empty
void clear(): empties everything out of the queue
ostream& operator << (ostream& out, const Queue<Type> &q): returns a stream containing all the items in the Queue
Then, you will use your queue to solve the following problem.  

Guess how many candies are in a jar.  You will write code to determine all the winners in the classic "Guess the Candy in the Jar" game.  In this game, people can guess enter their name and guess for how many candies are in the jar.  The person who comes close to the number (above or below) wins.  There may be multiple winners.  Complete the method to discover the names of each of the winners who are closest to the number of candies in the jar. 

Queue<Person>findWinners(int numberOfCandies, Queue<Person>guessList);
You will use the Person.h class that you completed in this week's class activity.

Number of candies in the jar: 100

Guesses:

Kim: 105
Sarah: 95
Bob: 95
Brook: 93
Zed: 106
This would return the following as all three of them were within 5 of the correct amount.  

Kim: 105
Sarah: 95
Bob: 95