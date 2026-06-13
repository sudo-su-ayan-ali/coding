# Basics Only
- NOTE in this we only learn basics like output,variables,Data types, input and etc.

# Output
we takes the output in java by the use of `System.out.println();` class or and by the need we changes the println & print. 
In print the do not takes next line by itself so whenever we need to get next line we uses escape sequence charactors and
this we use to take for next line `\n`.
# Variables & Data Types
variables are the contener for storing data or values for the program for crusial purpose and we want to define the the data 
types whenever we creates a variable be like
```java
    int a = 100;
    String raj = "rajendar parsad";
```
# input
Getting user input in Java is most commonly done using the Scanner class. It is beginner-friendly and provides built-in methods to easily read different types of data (text, numbers, decimals, etc.). The Scanner class is part of Java's utility package. Before you can use it, you must import it at the very top of your file. `import java.util.Scanner;` Inside your main method, you need to create a Scanner object that listens to standard input (which is usually the keyboard). We pass System.in to tell it to read from the console. `Scanner scanner = new Scanner(System.in);` You can now use various methods built into the Scanner object to read exactly what you need. Here are the most common ones:

nextLine(): Reads a full line of text (including spaces).

next(): Reads a single word (stops at the first space).

nextInt(): Reads a whole number (integer).

nextDouble(): Reads a decimal number.

nextBoolean(): Reads a boolean (true or false).
