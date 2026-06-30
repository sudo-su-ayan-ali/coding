# Introduction to C++ development

Ayan Ali  June 25, 2026

Before we can write and execute our first C++ program, we need to understand in more detail how C++ programs get developed. Here is a graphic outlining a simplistic approach:

![The software development process]

Step 1: Define the problem that you would like to solve

This is the “what” step, where you figure out what problem you are intending to solve. Coming up with the initial idea for what you would like to program can be the easiest step, or the hardest. But conceptually, it is the simplest. All you need is an idea that can be well defined, and you’re ready for the next step.

Here are a few examples:

- “I want to write a program that will allow me to enter many numbers, then calculates the average.”
- “I want to write a program that generates a 2d maze and lets the user navigate through it. The user wins if they reach the end.”
- “I want to write a program that reads in a file of stock prices and predicts whether the stock will go up or down.”

Step 2: Determine how you are going to solve the problem

This is the “how” step, where you determine how you are going to solve the problem you came up with in step 1. It is also the step that is most neglected in software development. The crux of the issue is that there are many ways to solve a problem -- however, some of these solutions are good and some of them are bad. Too often, a programmer will get an idea, sit down, and immediately start coding a solution. This often generates a solution that falls into the bad category.

Typically, good solutions have the following characteristics:

- They are straightforward (not overly complicated or confusing).
- They are well documented (especially around any assumptions being made or limitations).
- They are built modularly, so parts can be reused or changed later without impacting other parts of the program.
- They can recover gracefully or give useful error messages when something unexpected happens.

When you sit down and start coding right away, you’re typically thinking “I want to do <something>”, so you implement the solution that gets you there the fastest. This can lead to programs that are fragile, hard to change or extend later, or have lots of bugs. A **bug** is any kind of programming error that prevents the program from operating correctly.

As an aside…

The term _bug_ was first used by Thomas Edison back in the 1870s! However, the term was popularized in the 1940s when engineers found an actual moth stuck in the hardware of an early computer, causing a short circuit. Both the log book in which the error was reported and the moth are now part of the Smithsonian Museum of American History. It can be viewed [here](https://americanhistory.si.edu/collections/nmah_334663).

Various studies have shown that on complex software systems, only 10-40% of a programmer’s time is actually spent writing the initial program. The other 60-90% is spent on maintenance, which can consist of **debugging** (removing bugs), updates to cope with changes in the environment (e.g. to run on a new OS version), enhancements (minor changes to improve usability or capability), or internal improvements (to increase reliability or maintainability)[1](https://web.archive.org/web/20120313070806/http://users.jyu.fi/~koskinen/smcosts.htm).

Consequently, it’s worth your time to spend a little extra time up front (before you start coding) thinking about the best way to tackle a problem, what assumptions you are making, and how you might plan for the future, in order to save yourself a lot of time and trouble down the road.

We’ll talk more about how to effectively design solutions to problems in a future lesson.

Step 3: Write the program

In order to write the program, we need two things: First, we need knowledge of a programming language -- that’s what these tutorials are for! Second, we need a text editor to write and save our C++ programs. The set of C++ instructions that we input into the text editor is called the program’s **source code** (often shortened to just **code**). It’s possible to write a program using any text editor you want, even something as simple as Windows’ notepad or Unix’s vi or pico.

A program typed into a basic text editor would look something like this:
```cpp
#include <iostream>

int main()
{
    std::cout << "Here is some text.";
    return 0;
}
```
However, we strongly urge you to use an editor that is designed for programming (called a **code editor**). Don’t worry if you don’t have one yet. We’ll cover how to install a code editor shortly.

A typical editor designed for coding has a few features that make programming much easier, including:

1. Line numbering. Line numbering is useful when the compiler gives us an error, as a typical compiler error will state: _some error code/message, line 64_. Without an editor that shows line numbers, finding line 64 can be a real hassle.
2. Syntax highlighting and coloring. Syntax highlighting and coloring changes the color of various parts of your program to make it easier to identify the different components of your program.
3. An unambiguous, fixed-width font (often called a “monospace font”). Non-programming fonts often make it hard to distinguish between the number 0 and the letter O, or between the number 1, the letter l (lower case L), and the letter I (upper case i). A good programming font will ensure these symbols are visually differentiated in order to ensure one isn’t accidentally used in place of the other. All code editors should have this enabled by default, but a standard text editor might not. Using a fixed-width font (where all symbols have the same width) makes it easier to properly format and align your code.

Here’s an example of a C++ program with line numbering, syntax highlighting, and a fixed-width font:

```cpp
#include <iostream>

int main()
{
    std::cout << "Here is some text.";
    return 0;
}
```

Note how much easier this is to understand than the non-highlighted version. The source code we show in this tutorial will have both line numbering and syntax highlighting to make that code easier to follow.

Tip

[Coding Font](https://www.codingfont.com/) and [Programming Fonts](https://www.programmingfonts.org/) both have neat tools that allow you to compare different coding fonts to see which ones you like best.

For advanced readers

Because source code is written using ASCII characters, programming languages use a certain amount of ASCII art to represent mathematical concepts. For example, `≠` is not part of the ASCII character set, so programming languages typically use `!=` to represent mathematical inequality instead.

Some programming fonts, such as [Fira Code](https://github.com/tonsky/FiraCode), use ligatures to combine such “art” back into a single character. For example, instead of displaying `!=`, Fira Code will display `≠` (using the same width as the two-character version). Some people find this easier to read, others prefer sticking with a more literal interpretation of the underlying characters.

Many simple C++ programs only have one source code file, but complex C++ programs can have hundreds or even thousands of source code files.

Each source code file in your program will need to be saved to disk, which means each source code file needs a filename. C++ does not have any requirements for naming files. However, the de-facto standard is to name the first/primary source file created for a program `main.cpp`. The filename (`main`) makes it easy to determine which is the primary source code file, and the `.cpp` extension indicates that the file is a C++ source code file.

You may occasionally see the first/primary source code file named after the name of the program instead (e.g. `calculator.cpp`, `poker.cpp`). You may also occasionally see other extensions used (e.g. `.cc` or `.cxx`).

Best practice

Name the first/primary source code file in each program `main.cpp`. This makes it easy to determine which source code file is the primary one.

Once you’ve written your program, the next steps are to convert the source code into something that can be run, and then see whether it works! We’ll discuss those steps (4-7) in the next lesson.

# Introduction to the compiler, linker, and libraries

Ayan Ali  June 25, 2026

Continuing our discussion of this diagram from the previous lesson ([0.4 -- Introduction to C++ development]):


Let’s discuss steps 4-7.

Step 4: Compiling your source code

In order to compile C++ source code files, we use a C++ compiler. The C++ compiler sequentially goes through each source code (.cpp) file in your program and does two important tasks:

First, the compiler checks your C++ code to make sure it follows the rules of the C++ language. If it does not, the compiler will give you an error (and the corresponding line number) to help pinpoint what needs fixing. The compilation process will also be aborted until the error is fixed.

Second, the compiler translates your C++ code into machine language instructions. These instructions are stored in an intermediate file called an **object file**. The object file also contains other data that is required or useful in subsequent steps (including data needed by the linker in step 5, and for debugging in step 7).

Object files are typically named _name.o_ or _name.obj_, where _name_ is the same name as the .cpp file it was produced from.

For example, if your program had 3 .cpp files, the compiler would generate 3 object files:


C++ compilers are available for many different operating systems. We will discuss installing a compiler shortly, so there is no need to do so now.

Step 5: Linking object files and libraries and creating the desired output file

After the compiler has successfully finished, another program called the **linker** kicks in. The linker’s job is to combine all of the object files and produce the desired output file (such as an executable file that you can run). This process is called **linking**. If any step in the linking process fails, the linker will generate an error message describing the issue and then abort.

First, the linker reads in each of the object files generated by the compiler and makes sure they are valid.

Second, the linker ensures all cross-file dependencies are resolved properly. For example, if you define something in one .cpp file, and then use it in a different .cpp file, the linker connects the two together. If the linker is unable to connect a reference to something with its definition, you’ll get a linker error, and the linking process will abort.

Third, the linker typically links in one or more **library files**, which are collections of precompiled code that have been “packaged up” for reuse in other programs.

Finally, the linker outputs the desired output file. Typically this will be an executable file that can be launched (but it could be a library file if that’s how you’ve set up your project).


The standard library

C++ comes with an extensive library called the **C++ Standard Library** (usually called “the standard library”) that provides a set of useful capabilities for use in your programs. One of the most commonly used parts of the C++ standard library is the Input/Output library (often called “iostream”), which contains functionality for printing text on a monitor and getting keyboard input from a user.

Almost every C++ program written utilizes the standard library in some way, so it’s extremely common to have the C++ standard library linked into your programs. Most C++ linkers are configured to link in the standard library by default, so this generally isn’t something you need to worry about.

3rd party libraries

You can optionally link **third party libraries**, which are libraries that are created and distributed by independent entities (rather than as part of the C++ standard). For example, let’s say you wanted to write a program that played sounds. The C++ standard library contains no such functionality. While you could write your own code to read in the sound files from disk, check to ensure they were valid, or figure out how to route the sound data to the operating system or hardware to play through the speaker -- that would be a lot of work! Instead, you’d be more likely to find some existing software project that has a library that already implements all of these things for you.

We’ll talk about how to link in libraries (and create your own!) in the appendix.

Building

Because there are multiple steps involved, the term **building** is often used to refer to the full process of converting source code files into an executable that can be run. A specific executable produced as the result of building is sometimes called a **build**.

For advanced readers

For complex projects, build automation tools (such as **make** or **build2**) are often used to help automate the process of building programs and running automated tests. While such tools are powerful and flexible, because they are not part of the C++ core language, nor do you need to use them to proceed, we’ll not discuss them as part of this tutorial series.

Steps 6 & 7: Testing and Debugging

This is the fun part! You are now able to run your executable and see what it does!

Once you can run your program, then you can test it. **Testing** is the process of assessing whether your software is working as expected. Basic testing typically involves trying different input combinations to ensure the software behaves correctly in different cases.

If the program does not behave as expected, then you will have to do some **debugging**, which is the process of finding and fixing programming errors.

We will discuss how to test and debug your programs in more detail in future chapters.

Integrated development environments (IDEs)

Note that steps 3, 4, 5, and 7 all involve software programs that must be installed (editor, compiler, linker, debugger). While you can use separate programs for each of these activities, a software package known as an integrated development environment (IDE) bundles and integrates all of these features together. We’ll discuss IDEs, and install one, in the next section.


