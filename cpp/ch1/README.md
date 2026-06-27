# Statements and the structure of a program

Ayan Ali JUNE 27, 2026

Chapter introduction

Welcome to the first primary chapter of these C++ tutorials!

In this chapter, we’ll take a first look at a number of topics that are essential to every C++ program. Because there are quite a few topics to cover, we’ll cover most at a fairly shallow level (just enough to get by). The goal of this chapter is to help you understand how basic C++ programs are constructed. By the end of the chapter, you will be able to write your own simple programs.

In future chapters, we’ll revisit the majority of these topics and explore them in more detail. We’ll also introduce new concepts that build on top of these.

In order to keep the lesson lengths manageable, topics may be split over several subsequent lessons. If you feel like some important concept isn’t covered in a lesson, or you have a question that isn’t answered in the current lesson, it’s possible that it’s covered in the next lesson.

Statements

A computer program is a sequence of instructions that tell the computer what to do. A **statement** is a type of instruction that causes the program to _perform some action_.

Statements are by far the most common type of instruction in a C++ program. This is because they are the smallest independent unit of computation in the C++ language. In that regard, they act much like sentences do in natural language. When we want to convey an idea to another person, we typically write or speak in sentences (not in random words or syllables). In C++, when we want to have our program do something, we typically write statements.

Most (but not all) statements in C++ end in a semicolon. If you see a line that ends in a semicolon, it’s probably a statement.

In a high-level language such as C++, a single statement may compile into many machine language instructions.

For advanced readers

There are many different kinds of statements in C++:

- Declaration statements
- Jump statements
- Expression statements
- Compound statements
- Selection statements (conditionals)
- Iteration statements (loops)
- Try blocks

By the time you’re through with this tutorial series, you’ll understand what all of these are!

Functions and the `main` function

In C++, statements are typically grouped into units called functions. A **function** is a collection of statements that get executed sequentially (in order, from top to bottom). As you learn to write your own programs, you’ll be able to create your own functions and mix and match statements in any way you please (we’ll show how in a future lesson).

Rule

Every C++ program must have a special function named **main** (all lower case letters).

When the program is run, the statements inside of `main` are executed in sequential order.

Programs typically terminate (finish running) after the last statement inside function `main` has been executed (though programs may abort early in some circumstances, or do some cleanup afterwards).

Functions are typically written to do a specific job or perform some useful action. For example, a function named `max` might contain statements that figures out which of two numbers is larger. A function named `calculateGrade` might calculate a student’s grade from a set of test scores. A function named `printEmployee` might print an employee’s information to the console. We will talk a lot more about functions soon, as they are the most commonly used organizing tool in a program.

Nomenclature

When discussing functions, it’s fairly common shorthand to append a pair of parenthesis to the end of the function’s name. For example, if you see the term `main()` or `doSomething()`, this is shorthand for functions named `main` or `doSomething` respectively. This helps differentiate functions from other things with names (such as variables) without having to write the word “function” each time.

In programming, the name of a function (or object, type, template, etc…) is called its **identifier**.

Characters and text

The earliest computers were designed primarily for mathematical calculations and data processing. As hardware improved, networking became accessible, and consumer software evolved, computers also became valuable tools for written communication.

In written language, the most basic unit of communication is the character. To simplify slightly, a **character** is a written symbol or mark, such as a letter, digit, punctuation mark, or mathematical symbol. When we tap an alphabetic or numeric key on our keyboard, a character is produced as a result, which can then be displayed on the screen. The following are all characters: `a`, `2`, `$`, and `=`.

In many cases, such as when writing words or sentences, we want to make use of more than one character. A sequence of characters is called **text** (also called a **string** in programming contexts).

Nomenclature

Conventionally, the term “text” is also used to mean **plain text**, which is text that contains only characters that appear on a standard keyboard, with no special formatting or styling. For example, plain text cannot represent bold words, as that requires styling.

Our C++ programs are written as plain text.

For advanced readers

Computers have an additional type of character, called a “control character”. These are characters that have special meaning to the computer system, but either aren’t intended to be displayed, or display as something other than a single visible symbol. Examples of well-known control characters include “escape” (which doesn’t display anything), “tab” (which displays as some number of spaces), and “backspace” (which erases the previous character).

Dissecting Hello world!

Now that you have a brief understanding of what statements and functions are, let’s return to our “Hello world” program and take a high-level look at what each line does in more detail.

```cpp
#include <iostream>

int main()
{
   std::cout << "Hello world!";
   return 0;
}
```

Line 1 is a special type of line called a preprocessor directive. This `#include` preprocessor directive indicates that we would like to use the contents of the `iostream` library, which is the part of the C++ standard library that allows us to read and write text from/to the console. We need this line in order to use `std::cout` on line 5. Excluding this line would result in a compile error on line 5, as the compiler wouldn’t otherwise know what `std::cout` is.

Line 2 is blank, and is ignored by the compiler. This line exists only to help make the program more readable to humans (by separating the `#include` preprocessor directive and the subsequent parts of the program).

Line 3 tells the compiler that we’re going to write (define) a function whose name (identifier) is `main`. As you learned above, every C++ program must have a `main` function or it will fail to link. This function will produce a value whose type is `int` (an integer).

Lines 4 and 7 tell the compiler which lines are part of the _main_ function. Everything between the opening curly brace on line 4 and the closing curly brace on line 7 is considered part of the `main` function. This is called the function body.

Line 5 is the first statement within function `main`, and is the first statement that will execute when we run our program. `std::cout` (which stands for “character output”) and the `<<` operator allow us to display information on the console. In this case, we’re displaying the text `Hello world!`. This statement creates the visible output of the program.

Line 6 is a return statement. When an executable program finishes running, the program sends a value back to the operating system in order to indicate whether it ran successfully or not. This particular return statement returns the integer value `0` to the operating system, which means “everything went okay!”. This is the last statement in the program that executes.

All of the programs we write will follow this general template, or a variation on it.

Author’s note

If parts (or all) of the above explanation are confusing, that’s to be expected at this point. This was just to provide a quick overview. Subsequent lessons will dig into all of the above topics, with plenty of additional explanation and examples.

You can compile and run this program yourself, and you will see that it outputs the following to the console:

Hello world!

Syntax and syntax errors

In the English language, sentences are constructed according to specific grammatical rules that you probably learned in English class in school. For example, in writing, normal sentences end in a period. The set of rules that describe how specific words (and punctuation) can be arranged to form valid sentences in a language is called **syntax**. For example, “My house painted is blue” is a syntax error, because the ordering of the words is unconventional. “All your base are belong to us!” is another notable one.

The C++ programming language also has a syntax, which describes how the elements of your program must be written and arranged in order for the program to be considered valid. When you compile your program, the compiler is responsible for making sure your program follows these syntactical rules. If your program does something that deviates from the syntax of the language, the compiler will halt compilation and issue a __syntax error_.

Unlike the English language, which allows for a lot of ambiguity, the syntax rules of C++ are strictly defined and upheld. Syntax errors are common. Fortunately, such errors are typically straightforward to find and fix, as the compiler will generally point you right at them. Compilation of a program will only complete once all syntax errors are resolved.

Since the syntax for most statements requires those statements to end in a semicolon, let’s see what happens if we omit the semicolon on line 5 of the “Hello world” program, like this:

```cpp
#include <iostream>

int main()
{
   std::cout << "Hello world!"
   return 0;
}
```

Feel free to compile this ill-formed program yourself.

When compiled using Clang, the following error message is generated:

prog.cc:5:31: error: expected ';' after expression

Clang is telling us that on line 5 at the 31st character, the syntax rules require a semicolon, but we did not provide one. Therefore, compilation was halted with an error.

When compiled with Visual Studio instead, the compiler produces this compilation error:

c:\vcprojects\hello.cpp(6): error C2143: syntax error : missing ';' before 'return'

Note that Visual Studio says the error was encountered on line 6 (instead of on line 5). So who is right? Both are, in a way.

Clang knows we conventionally put semicolons at the end of statements, so it is reporting that the error is on line 5 based on the assumption that we will do so. Visual Studio is opting to report the line it was compiling when it determined that the error occurred (on line 6, when it encountered `return` instead of the expected semicolon).

Key insight

Compilers will sometimes report that an error has occurred on the line after the one where we’d conventionally fix the issue. If you can’t find the error on the line indicated, check the prior line.

To see other different error messages, experiment with deleting characters or even whole lines from the “Hello world” program. Also try restoring the missing semicolon at the end of line 5, and then deleting lines 1, 3, or 4 to see what happens.



# Comments

Ayan Ali  JUNE 27, 2026

A **comment** is a programmer-readable note that is inserted directly into the source code of the program. Comments are ignored by the compiler and are for the programmer’s use only.

In C++ there are two different styles of comments, both of which serve the same purpose: to help programmers document the code in some way.

Single-line comments

The `//` symbol begins a C++ single-line comment, which tells the compiler to ignore everything from the `//` symbol to the end of the line. For example:

```cpp
std::cout << "Hello world!"; // Everything from here to the end of the line is ignored
```

Typically, the single-line comment is used to make a quick comment about a single line of code.

```cpp
std::cout << "Hello world!\n"; // std::cout lives in the iostream library
std::cout << "It is very nice to meet you!\n"; // these comments make the code hard to read
std::cout << "Yeah!\n"; // especially when lines are different lengths
```

Having comments to the right of a line can make both the code and the comment hard to read, particularly if the line is long. If the lines are fairly short, the comments can simply be aligned (usually to a tab stop), like so:

```cpp
std::cout << "Hello world!\n";                 // std::cout lives in the iostream library
std::cout << "It is very nice to meet you!\n"; // this is much easier to read
std::cout << "Yeah!\n";                        // don't you think so?
```

However, if the lines are long, placing comments to the right can make your lines really long. In that case, single-line comments are often placed above the line it is commenting:

```cpp
// std::cout lives in the iostream library
std::cout << "Hello world!\n";

// this is much easier to read
std::cout << "It is very nice to meet you!\n";

// don't you think so?
std::cout << "Yeah!\n";
```

Author’s note

In this tutorial series, our examples fall into one of the following categories:

- Full programs (those with a `main()` function). These are ready to be compiled and run.
- Snippets (small pieces) of code, such as the statements above. We use these to demonstrate specific concepts in a concise manner.

We don’t intend for you to compile snippets. But if you’d like to, you’ll need to turn them into a full program. Typically, that program will look something like this:

```cpp
#include <iostream>

int main()
{
    // Replace this line with the snippet(s) of code you'd like to compile

    return 0;
}
```

Multi-line comments

The `/*` and `*/` pair of symbols denotes a C-style multi-line comment. Everything in between the symbols is ignored.

```cpp
/* This is a multi-line comment.
   This line will be ignored.
   So will this one. */
```

Since everything between the symbols is ignored, you will sometimes see programmers “beautify” their multi-line comments:

```cpp
/* This is a multi-line comment.
 * the matching asterisks to the left
 * can make this easier to read
 */
```

Multi-line style comments can not be nested. Consequently, the following will have unexpected results:

```cpp
/* This is a multi-line /* comment */ this is not inside the comment */
// The above comment ends at the first */, not the second */
```

When the compiler tries to compile this, it will ignore everything from the first `/*` to the first `*/`. Since `this is not inside the comment */` is not considered part of the comment, the compiler will try to compile it. That will inevitably result in a compile error.

This is one place where using a syntax highlighter can be really useful, as the different coloring for comment should make clear what’s considered part of the comment vs not.

Warning

Don’t use multi-line comments inside other multi-line comments. Wrapping single-line comments inside a multi-line comment is okay.

Proper use of comments

Typically, comments should be used for three things. First, for a given library, program, or function, comments are best used to describe _what_ the library, program, or function, does. These are typically placed at the top of the file or library, or immediately preceding the function. For example:

```cpp
// This program calculates the student's final grade based on their test and homework scores.
```

```cpp
// This function uses Newton's method to approximate the root of a given equation.
```

```cpp
// The following lines generate a random item based on rarity, level, and a weight factor.
```

All of these comments give the reader a good idea of what the library, program, or function is trying to accomplish without having to look at the actual code. The user (possibly someone else, or you if you’re trying to reuse code you’ve previously written) can tell at a glance whether the code is relevant to what he or she is trying to accomplish. This is particularly important when working as part of a team, where not everybody will be familiar with all of the code.

Second, _within_ a library, program, or function described above, comments can be used to describe _how_ the code is going to accomplish its goal.

```cpp
/* To calculate the final grade, we sum all the weighted midterm and homework scores
    and then divide by the number of scores to assign a percentage, which is
    used to calculate a letter grade. */
```

```cpp
// To generate a random item, we're going to do the following:
// 1) Put all of the items of the desired rarity on a list
// 2) Calculate a probability for each item based on level and weight factor
// 3) Choose a random number
// 4) Figure out which item that random number corresponds to
// 5) Return the appropriate item
```

These comments give the user an idea of how the code is going to accomplish its goal without having to understand what each individual line of code does.

Third, at the statement level, comments should be used to describe _why_ the code is doing something. A bad statement comment explains _what_ the code is doing. If you ever write code that is so complex that needs a comment to explain _what_ a statement is doing, you probably need to rewrite your statement, not comment it.

Here are some examples of bad line comments and good statement comments.

Bad comment:

```cpp
// Set sight range to 0
sight = 0;
```

Reason: We already can see that sight is being set to 0 by looking at the statement

Good comment:

```cpp
// The player just drank a potion of blindness and can not see anything
sight = 0;
```

Reason: Now we know why the player’s sight is being set to 0

Bad comment:

```cpp
// Calculate the cost of the items
cost = quantity * 2 * storePrice;
```

Reason: We can see that this is a cost calculation, but why is quantity multiplied by 2?

Good comment:

```cpp
// We need to multiply quantity by 2 here because they are bought in pairs
cost = quantity * 2 * storePrice;
```

Reason: Now we know why this formula makes sense.

Programmers often have to make a tough decision between solving a problem one way, or solving it another way. Comments are a great way to remind yourself (or tell somebody else) the reason you made one decision instead of another.

Good comments:

```cpp
// We decided to use a linked list instead of an array because
// arrays do insertion too slowly.
```

```cpp
// We're going to use Newton's method to find the root of a number because
// there is no deterministic way to solve these equations.
```

Finally, comments should be written in a way that makes sense to someone who has no idea what the code does. It is often the case that a programmer will say “It’s obvious what this does! There’s no way I’ll forget about this”. Guess what? It’s _not_ obvious, and you _will_ be amazed how quickly you forget. :) You (or someone else) will thank you later for writing down the what, how, and why of your code in human language. Reading individual lines of code is easy. Understanding what goal they are meant to accomplish is not.

Related content

We discuss commenting for variable declaration statements in lesson [1.7 -- Keywords and naming identifiers]
Best practice

Comment your code liberally, and write your comments as if speaking to someone who has no idea what the code does. Don’t assume you’ll remember why you made specific choices.

Author’s note

Throughout the rest of this tutorial series, we’ll use comments inside code blocks to draw your attention to specific things, or help illustrate how things work (while ensuring the programs still compile). Astute readers will note that by the above standards, most of these comments are horrible. :) As you read through the rest of the tutorials, keep in mind that the comments are serving an intentional educational purpose, not trying to demonstrate what good comments look like.

As an aside…

Documentation generation programs such as [Doxygen](https://www.doxygen.nl/) are designed to help generate and leverage documentation in various ways. Amongst other things, they can:

- Help standardize the way your code is documented.
- Generate diagrams, visualizations, and cross-links to make understanding the code structure easier.
- Export your documentation to other formats (e.g. HTML) so it can be easily shared with others (e.g. other team members, or developers who are integrating whatever you are writing).

You won’t need these while learning the language, but you may encounter them or find them useful in the future, especially in professional environments.

Commenting out code

Converting one or more lines of code into a comment is called **commenting out** your code. This provides a convenient way to (temporarily) exclude parts of your code from being included in your compiled program.

To comment out a single line of code, simply use the // style comment to turn a line of code into a comment temporarily:

Uncommented out:

```cpp
std::cout << 1;
```

Commented out:

```cpp
//    std::cout << 1;
```

To comment out a block of code, use // on multiple lines of code, or the /* */ style comment to turn the block of code into a comment temporarily.

Uncommented out:

```cpp
std::cout << 1;
std::cout << 2;
std::cout << 3;
```

Commented out:

```cpp
//    std::cout << 1;
//    std::cout << 2;
//    std::cout << 3;
```

or

```cpp
/*
    std::cout << 1;
    std::cout << 2;
    std::cout << 3;
*/
```

There are quite a few reasons you might want to do this:

1. You’re working on a new piece of code that won’t compile yet, and you need to run the program. The compiler won’t let you compile the code if there are compiler errors. Commenting out the code that won’t compile will allow the program to compile so you can run it. When you’re ready, you can uncomment the code, and continue working on it.
2. You’ve written new code that compiles but doesn’t work correctly, and you don’t have time to fix it until later. Commenting out the broken code will ensure the broken code doesn’t execute and cause problems until you can fix it.
3. To find the source of an error. If a program isn’t producing the desired results (or is crashing), it can sometimes be useful to disable parts of your code to see if you can isolate what’s causing it to not work correctly. If you comment out one or more lines of code, and your program starts working as expected (or stops crashing), odds are whatever you last commented out was part of the problem. You can then investigate why those lines of code are causing the problem.
4. You want to replace one piece of code with another piece of code. Instead of just deleting the original code, you can comment it out and leave it there for reference until you’re sure your new code works properly. Once you are sure your new code is working, you can remove the old commented out code. If you can’t get your new code to work, you can always delete the new code and uncomment the old code to revert to what you had before.

Commenting out code is a common thing to do while developing, so many IDEs provide support for commenting out a highlighted section of code. How you access this functionality varies by IDE.

For Visual Studio users

You can comment or uncomment a selection via Edit menu > Advanced > Comment Selection (or Uncomment Selection).

For Code::Blocks users

You can comment or uncomment a selection via Edit menu > Comment (or Uncomment, or Toggle comment, or any of the other comment tools).

For VS Code users

You can comment or uncomment a selection by pressing ctrl-/.

Tip

If you always use single line comments for your normal comments, then you can always use multi-line comments to comment out your code without conflict. If you use multi-line comments to document your code, then commenting-out code using comments can become more challenging.

If you do need to comment out a code block that contains multi-line comments, you can also consider using the `#if 0` preprocessor directive, which we discuss in lesson [2.10 -- Introduction to the preprocessor].

Summary

- At the library, program, or function level, use comments to describe _what_.
- Inside the library, program, or function, use comments to describe _how_.
- At the statement level, use comments to describe _why_.

# Introduction to objects and variables

Ayan Ali  JUNE 27, 2026

Data and values

In lesson [1.1 -- Statements and the structure of a program], you learned that the majority of instructions in a program are statements, and that functions are groups of statements that execute sequentially. The statements inside the function perform actions that (hopefully) generate whatever result the program was designed to produce.

But how do programs actually produce results? They do so by manipulating (reading, changing, and writing) data. In computing, **data** is any information that can be moved, processed, or stored by a computer.

Key insight

Programs are collections of instructions that manipulate data to produce a desired result.

Computer programs (both in source code format and compiled) are technically data too, since they can be moved, processed, and stored. However, in the context of a computer program, we typically use the term “code” to mean the program itself, and “data” to mean the information that the program works with to produce a result.

A program can acquire data to work with in many ways: from a file or database, over a network, from the user providing input on a keyboard, or from the programmer putting data directly into the source code of the program itself. In the “Hello world” program from the aforementioned lesson, the text “Hello world!” was inserted directly into the source code of the program, providing data for the program to use. The program then manipulates this data by sending it to the monitor to be displayed.

In programming, a single piece of data is called a **value** (sometimes called a **data value**). Common examples of values include:

- Numbers (e.g. `5` or `-6.7`).
- Characters, which are placed between single-quotes (e.g. `'H'` or `'$'`). Only a single symbol may be used.
- Text, which must be placed between double-quotes (e.g. `"Hello"` or `"H"`). Text can contain 0 or more characters.

Key insight

Values placed in single-quotes are interpreted by the compiler as character values.  
Values placed in double-quotes are interpreted by the compiler as text values.  
Numeric values are not quoted.

Values that are placed directly into the source code are called **literals**. We cover literals in detail.

One of the most common thing to do with values is print them to the screen. For example:

```cpp
#include <iostream> // for std::cout

int main()
{
    std::cout << 5;       // print the literal number `5`
    std::cout << -6.7;    // print the literal number `-6.7`
    std::cout << 'H';     // print the literal character `H`
    std::cout << "Hello"; // print the literal text `Hello`

    return 0;
}
```

If a character value or text value is not properly quoted, the compiler will try to interpret that value as if it were C++ code. That will almost always result in a compilation error.

Literals are the easiest way to provide values for your program, but they have some shortcomings. Literals are read-only values, so their values can’t be modified. Thus, if we want to store data in memory, we need some other way to do this.

Random Access Memory

The main memory in a computer is called **Random Access Memory** (often called **RAM** for short). When we run a program, the operating system loads the program into RAM. Any data that is hardcoded into the program itself (e.g. text such as “Hello, world!”) is loaded at this point.

The operating system also reserves some additional RAM for the program to use while it is running. Common uses for this memory are to store values entered by the user, to store data read in from a file or network, or to store values calculated while the program is running (e.g. the sum of two values) so they can be used again later.

You can think of RAM as a series of numbered boxes that can be used to store data while the program is running.

In some older programming languages (like Applesoft BASIC), you could directly access these boxes (e.g. you could write a statement to “go get the value stored in membox number 7532”).

Objects and variables

In C++, direct memory access is discouraged. Instead, we access memory indirectly through an object. An **object** represents a region of storage (typically RAM or a CPU register) that can hold a value. Objects also have associated properties (that we’ll cover in future lessons).

How the compiler and operating system work to assign memory to objects is beyond the scope of this lesson. But the key point here is that rather than say “go get the value stored in mailbox number 7532”, we can say, “go get the value stored by this object” and let the compiler figure out where and how to retrieve the value. This means we can focus on using objects to store and retrieve values, and not have to worry about where in memory those objects are actually being placed.

Although objects in C++ can be unnamed (anonymous), more often we name our objects using an identifier. An object with a name is called a **variable**.

Key insight

An object is used to store a value in memory. A variable is an object that has a name (identifier).

Naming our objects let us refer to those objects again later in the program.

Nomenclature

In general programming, the term _object_ typically refers to an unnamed object in memory, a variable, or a function. In C++, the term _object_ has a narrower definition that excludes functions. When we use the term object in this tutorial series, this narrower C++ definition is the one we mean.

Variable definition

In order to use a variable in our program, we need to tell the compiler that we want one. The most common way to do this is by use of a special kind of declaration statement called a **definition** (we’ll clarify the difference between a declaration and definition later.

Key insight

A definition statement can be used to tell the compiler that we want to use a variable in our program.

Here’s an example of defining a variable named `x`:

```cpp
int x; // define a variable named x (of type int)
```

At **compile-time** (when the program is being compiled), when encountering this statement, the compiler makes a note to itself that we want a variable with the name `x`, and that the variable has the data type `int` (more on data types in a moment). From that point forward (with some limitations that we’ll talk about in a future lesson), whenever we use the identifier `x` in our code, the compiler will know that we are referring to this variable.

The compiler handles all of the other details about this variable for us, including determining how much memory the object will need, in what kind of storage the object will be placed (e.g. in RAM or a CPU register), where it will be placed relative to other objects, when it will be created and destroyed, etc…

A variable created via a definition statement is said to be **defined** at the point where the definition statement is placed. For now, your variables should be defined inside functions (such as within `main()`).

Here is a full program containing a variable definition statement:

```cpp
int main()
{
    int x; // definition of variable x

    return 0;
}
```

Variable creation

At **runtime** (when the program is loaded into memory and run), each object is given an actual storage location (such as RAM, or a CPU register) that it can use to store values. The process of reserving storage for an object’s use is called **allocation**. Once allocation has occurred, the object has been created and can be used.

For the sake of example, let’s say that variable `x` is instantiated at memory location 140. Whenever the program uses variable `x`, it will access the value in memory location 140.

Key insight

An object is “created” once actual storage has been reserved for the object’s use.

When the above program is run, execution starts at the top of `main()`. Memory for `x` is allocated. Then the program ends.

Data types

So far, we’ve covered that objects are regions of storage that can store a data value (how exactly data is stored is a topic for a future lesson). A **data type** (more commonly just called a **type**) determines what kind of value (e.g. a number, a letter, text, etc…) the object will store.

In the above example, our variable `x` was given type `int`, which means variable `x` will store an integer value. An **integer** is a number that can be written without a fractional component, such as `4`, `27`, `0`, `-2`, or `-12`. For short, we can say that `x` is an `integer variable`.

In C++, the type of an object must be known at compile-time, and that type can not be changed without recompiling the program. This means an integer variable can only hold integer values. If you want to store some other kind of value, you’ll need to use a different type.

Key insight

The data type of an object must be known at compile-time (so the compiler knows how much memory that object requires).

Integers are just one of many types that C++ supports out of the box. For illustrative purposes, here’s another example of defining a variable using data type `double`:

```cpp
double width; // define a variable named width, of type double
```

C++ also allows you to create your own custom types. This is something we’ll do a lot of in future lessons, and it’s part of what makes C++ powerful.

For these introductory chapters, we’ll stick with integer variables because they are conceptually simple, but we’ll explore many of the other types C++ has to offer (including `double`) soon.

Defining multiple variables

It is possible to define multiple variables _of the same type_ in a single statement by separating the names with a comma. The following code snippet:

```cpp
int a;
int b;
```

is effectively the same as this one:

```cpp
int a, b;
```

When defining multiple variables this way, there are three common mistakes that new programmers tend to make (neither serious, since the compiler will catch these and ask you to fix them):

The first mistake is giving each variable a type when defining variables in sequence.

```cpp
int a, int b; // wrong (compiler error)

int a, b; // correct
```

The second mistake is to try to define variables of different types in the same statement, which is not allowed. Variables of different types must be defined in separate statements.

```cpp
int a, double b; // wrong (compiler error)

int a; double b; // correct (but not recommended)

// correct and recommended (easier to read)
int a;
double b;
```

We’ll discuss the third issue next lesson, when we cover initialization of variables.

Best practice

Although the language allows you to do so, avoid defining multiple variables of the same type in a single statement. Instead, define each variable in a separate statement on its own line (and then use a single-line comment to document what it is used for).

Summary

In C++, we use objects to access memory. A named object is called a variable. Each variable has an identifier, a type, and a value (and some other attributes that aren’t relevant here). A variable’s type is used to determine how the value in memory should be interpreted.

Variables are actually created at runtime, when memory is allocated for their use.

In the next lesson, we’ll look at how to give values to our variables and how to actually use them.
