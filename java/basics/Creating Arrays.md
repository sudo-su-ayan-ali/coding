# Creating Arrays in Your Programs

 

## Arrays

An _array_ is a container object that holds a fixed number of values of a single type. The length of an array is established when the array is created. After creation, its length is fixed. You have seen an example of arrays already, in the main method of the "Hello World!" application. This section discusses arrays in greater detail.

Each item in an array is called an _element_, and each element is accessed by its numerical _index_. As shown in the preceding illustration, numbering begins with 0. The 6th element, for example, would therefore be accessed at index 5.

The following program, `ArrayDemo`, creates an array of integers, puts some values in the array, and prints each value to standard output.

```java
class ArrayDemo {
    public static void main(String[] args) {
        // declares an array of integers
        int[] anArray;

        // allocates memory for 10 integers
        anArray = new int[10];

        // initialize first element
        anArray[0] = 100;
        // initialize second element
        anArray[1] = 200;
        // and so forth
        anArray[2] = 300;
        anArray[3] = 400;
        anArray[4] = 500;
        anArray[5] = 600;
        anArray[6] = 700;
        anArray[7] = 800;
        anArray[8] = 900;
        anArray[9] = 1000;

        IO.println("Element at index 0: "
                           + anArray[0]);
        IO.println("Element at index 1: "
                           + anArray[1]);
        IO.println("Element at index 2: "
                           + anArray[2]);
        IO.println("Element at index 3: "
                           + anArray[3]);
        IO.println("Element at index 4: "
                           + anArray[4]);
        IO.println("Element at index 5: "
                           + anArray[5]);
        IO.println("Element at index 6: "
                           + anArray[6]);
        IO.println("Element at index 7: "
                           + anArray[7]);
        IO.println("Element at index 8: "
                           + anArray[8]);
        IO.println("Element at index 9: "
                           + anArray[9]);
    }
}
```
The output from this program is:
```output
Element at index 0: 100
Element at index 1: 200
Element at index 2: 300
Element at index 3: 400
Element at index 4: 500
Element at index 5: 600
Element at index 6: 700
Element at index 7: 800
Element at index 8: 900
Element at index 9: 1000
```

In a real-world programming situation, you would probably use one of the supported looping constructs to iterate through each element of the array, rather than write each line individually as in the preceding example. However, the example clearly illustrates the array syntax. You will learn about the various looping constructs (for, while, and do-while) in the [Control Flow](https://dev.java/learn/language-basics/controlling-flow/) section.

### Practice Array Basics

Start with basic array creation and access:

```java
// Basic array creation and initialization
int[] numbers = new int[5];
numbers[0] = 10;
numbers[1] = 20;
numbers[2] = 30;
numbers[3] = 40;
numbers[4] = 50;

// Print array elements using a loop
IO.println("Array elements:");
for (int i = 0; i < numbers.length; i++) {
    IO.println("Element at index " + i + ": " + numbers[i]);
}

// Array initialization shorthand
String[] fruits = {"apple", "banana", "cherry", "date"};
IO.println("");
IO.println("Fruits array:");
for (int i = 0; i < fruits.length; i++) {
    IO.println(i + ": " + fruits[i]);
}

// Try creating your own arrays!
double[] prices = {9.99, 15.50, 7.25};
IO.println("");
IO.println("Prices:");
for (double price : prices) {
    IO.println("$" + price);
}
```
## Declaring a Variable to Refer to an Array

The preceding program declares an array (named `anArray`) with the following line of code:
```java
// declares an array of integers
int[] anArray;
```

Like declarations for variables of other types, an array declaration has two components: the array's type and the array's name. An array's type is written as `type[]`, where `type` is the data type of the contained elements; the brackets are special symbols indicating that this variable holds an array. The size of the array is not part of its type (which is why the brackets are empty). An array's name can be anything you want, provided that it follows the rules and conventions as discussed in the [Classes](https://dev.java/learn/classes-objects/creating-classes/) section. As with variables of other types, the declaration does not actually create an array; it simply tells the compiler that this variable will hold an array of the specified type.

Similarly, you can declare arrays of other types:

```java
byte[] anArrayOfBytes;
short[] anArrayOfShorts;
long[] anArrayOfLongs;
float[] anArrayOfFloats;
double[] anArrayOfDoubles;
boolean[] anArrayOfBooleans;
char[] anArrayOfChars;
String[] anArrayOfStrings;
```

You can also place the brackets after the array's name:

```java
// this form is discouraged
float anArrayOfFloats[];
```

However, convention discourages this form; the brackets identify the array type and should appear with the type designation.

## Creating, Initializing, and Accessing an Array

One way to create an array is with the `new` operator. The next statement in the `ArrayDemo` program allocates an array with enough memory for 10 integer elements and assigns the array to the `anArray` variable.

```java
// create an array of integers
anArray = new int[10];
```

If this statement is missing, then the compiler prints an error like the following, and compilation fails:

```java
ArrayDemo.java:4: Variable anArray may not have been initialized.
```

The next few lines assign values to each element of the array:

```java
anArray[0] = 100; // initialize first element
anArray[1] = 200; // initialize second element
anArray[2] = 300; // and so forth
```

Each array element is accessed by its numerical index:

```java
IO.println("Element 1 at index 0: " + anArray[0]);
IO.println("Element 2 at index 1: " + anArray[1]);
IO.println("Element 3 at index 2: " + anArray[2]);
```

Alternatively, you can use the shortcut syntax to create and initialize an array:

```java
int[] anArray = {
    100, 200, 300,
    400, 500, 600,
    700, 800, 900, 1000
};
```
Here the length of the array is determined by the number of values provided between braces and separated by commas.

## Creating Multidimensional Arrays

As an array can hold any reference, and since an array is itself a reference, you can easily create arrays of arrays.

Array of arrays are also known as a multidimensional array. You can declare them by using two or more sets of brackets, such as `String[][]` names. Each element, therefore, must be accessed by a corresponding number of index values.

In the Java programming language, a multidimensional array is an array whose components are themselves arrays. This is unlike arrays in C or Fortran, where a bidimensional array is a contiguous zone of memory, directly accessed using a pointer. In Java an array is a contiguous zone of memory, but as a bidimensional array is an array of references, it is not itself a contiguous zone of memory.

A consequence of this is that the rows are allowed to vary in length, as shown in the following `MultiDimArrayDemo` program:

```java
class MultiDimArrayDemo {
    public static void main(String[] args) {
        String[][] names = {
            {"Mr. ", "Mrs. ", "Ms. "},
            {"Smith", "Jones"}
        };
        // Mr. Smith
        IO.println(names[0][0] + names[1][0]);
        // Ms. Jones
        IO.println(names[0][2] + names[1][1]);
    }
}
```

## Using the Length of an Array

Finally, you can use the built-in `length` property defined on any array to determine the size of this array. The following code prints the array's size to standard output:

```java
IO.println(anArray.length);
```

This is especially useful for arrays of arrays, in which each array can be of different length. Your code should not assume that all these arrays are of the same length, and should rely on this `length` property, as in the following code.
```java
void displayBidimensionalArray(String[][] strings) {
    for (int arrayIndex = 0; arrayIndex < strings.length; arrayIndex++) {
        for (int index = 0; index < strings[arrayIndex].length; index++) {
            IO.print(strings[arrayIndex][index] + " ");
        }
        IO.println();
    }
}
```

You can invoke this method with the following array.
```java
String[][] strings = {
      {"one"}
      {"Maria", "Jennifer", "Patricia"},
      {"James", "Michael"},
      {"Washington", "London", "Paris", "Berlin", "Tokyo"}
};

displayBidimensionalArray(strings);
```

This code prints the following.
```
one 
Maria Jennifer Patricia 
James Michael 
Washington London Paris Berlin Tokyo
```

## Copying Arrays

The [`System`](https://docs.oracle.com/en/java/javase/26/docs/api/java.base/java/lang/System.html) class has an [`arraycopy()`](https://docs.oracle.com/en/java/javase/26/docs/api/java.base/java/lang/System.html#arraycopy\(java.lang.Object,int,java.lang.Object,int,int\)) method that you can use to efficiently copy data from one array into another:

```java
class ArrayCopyDemo {
    public static void main(String[] args) {
        String[] copyFrom = {
            "Affogato", "Americano", "Cappuccino", "Corretto", "Cortado",
            "Doppio", "Espresso", "Frappucino", "Freddo", "Lungo", "Macchiato",
            "Marocchino", "Ristretto" };

        String[] copyTo = new String[7];
        System.arraycopy(copyFrom, 2, copyTo, 0, 7);
        for (String coffee : copyTo) {
            IO.print(coffee + " ");
        }
    }
}
```

## Array Manipulations

Arrays are a powerful and useful concept used in programming. Java SE provides methods to perform some of the most common manipulations related to arrays. For instance, the `ArrayCopyDemo` example uses the [`arraycopy()`](https://docs.oracle.com/en/java/javase/26/docs/api/java.base/java/lang/System.html#arraycopy\(java.lang.Object,int,java.lang.Object,int,int\)) method of the [`System`](https://docs.oracle.com/en/java/javase/26/docs/api/java.base/java/lang/System.html) class instead of manually iterating through the elements of the source array and placing each one into the destination array. This is performed behind the scenes, enabling the developer to use just one line of code to call the method.

For your convenience, Java SE provides several methods for performing array manipulations (common tasks, such as copying, sorting and searching arrays) in the [`Arrays`](https://docs.oracle.com/en/java/javase/26/docs/api/java.base/java/util/Arrays.html) class. For instance, the previous example can be modified to use the [`Arrays`](https://docs.oracle.com/en/java/javase/26/docs/api/java.base/java/util/Arrays.html) method of the [`Arrays`](https://docs.oracle.com/en/java/javase/26/docs/api/java.base/java/util/Arrays.html) class, as you can see in the `ArrayCopyOfDemo` example. The difference is that using the [`Arrays`](https://docs.oracle.com/en/java/javase/26/docs/api/java.base/java/util/Arrays.html) method does not require you to create the destination array before calling the method, because the destination array is returned by the method:

```java
class ArrayCopyOfDemo {
    public static void main(String[] args) {
        String[] copyFrom = {
            "Affogato", "Americano", "Cappuccino", "Corretto", "Cortado",
            "Doppio", "Espresso", "Frappucino", "Freddo", "Lungo", "Macchiato",
            "Marocchino", "Ristretto" };

        String[] copyTo = Arrays.copyOfRange(copyFrom, 2, 9);
        for (String coffee : copyTo) {
            IO.print(coffee + " ");
        }
    }
}
```

As you can see, the output from this program is the same, although it requires fewer lines of code. Note that the second parameter of the [`Arrays`](https://docs.oracle.com/en/java/javase/26/docs/api/java.base/java/util/Arrays.html) method is the initial index of the range to be copied, inclusively, while the third parameter is the final index of the range to be copied, exclusively. In this example, the range to be copied does not include the array element at index 9 (which contains the string `Lungo`).

Some other useful operations provided by methods in the [`Arrays`](https://docs.oracle.com/en/java/javase/26/docs/api/java.base/java/util/Arrays.html) class are:

- Searching an array for a specific value to get the index at which it is placed (the [`binarySearch()`](https://docs.oracle.com/en/java/javase/26/docs/api/java.base/java/util/Arrays.html#binarySearch\(int%5B%5D,int\)) method).
- Comparing two arrays to determine if they are equal or not (the [`equals()`](https://docs.oracle.com/en/java/javase/26/docs/api/java.base/java/util/Arrays.html#equals\(int%5B%5D,int%5B%5D\)) method).
- Filling an array to place a specific value at each index (the [`fill()`](https://docs.oracle.com/en/java/javase/26/docs/api/java.base/java/util/Arrays.html#fill\(int%5B%5D,int\)) method).
- Sorting an array into ascending order. This can be done either sequentially, using the [`sort()`](https://docs.oracle.com/en/java/javase/26/docs/api/java.base/java/util/Arrays.html#sort\(int%5B%5D\)) method, or concurrently, using the [`parallelSort()`](https://docs.oracle.com/en/java/javase/26/docs/api/java.base/java/util/Arrays.html#parallelSort\(int%5B%5D\)) method introduced in Java SE 8. Parallel sorting of large arrays on multiprocessor systems is faster than sequential array sorting.
- Creating a stream that uses an array as its source (the [`stream()`](https://docs.oracle.com/en/java/javase/26/docs/api/java.base/java/util/Arrays.html#stream\(int%5B%5D\)) method). For example, the following statement prints the contents of the `copyTo` array in the same way as in the previous example:

```java
Arrays.stream(copyTo).map(coffee -> coffee + " ").forEach(IO::print);
```

See Aggregate Operations for more information about streams.

- Converting an array to a string. The [`toString()`](https://docs.oracle.com/en/java/javase/26/docs/api/java.base/java/util/Arrays.html#toString\(int%5B%5D\)) method converts each element of the array to a string, separates them with commas, then surrounds them with brackets. For example, the following statement converts the `copyTo` array to a string and prints it:

```java
IO.println(Arrays.toString(copyTo));
```

This statement prints the following:

```
[Cappuccino, Corretto, Cortado, Doppio, Espresso, Frappucino, Freddo]
```

## Wrapping-up Variables and Arrays

The Java programming language uses both "fields" and "variables" as part of its terminology. Instance variables (non-static fields) are unique to each instance of a class. Class variables (static fields) are fields declared with the static modifier; there is exactly one copy of a class variable, regardless of how many times the class has been instantiated. Local variables store temporary state inside a method. Parameters are variables that provide extra information to a method; both local variables and parameters are always classified as "variables" (not "fields"). When naming your fields or variables, there are rules and conventions that you should (or must) follow.

The eight primitive data types are: `byte`, `short`, `int`, `long`, `float`, `double`, `boolean`, and `char`. The `java.lang.String` class represents character strings. The compiler will assign a reasonable default value for fields of the above types; for local variables, a default value is never assigned.

A literal is the source code representation of a fixed value. An array is a container object that holds a fixed number of values of a single type. The length of an array is established when the array is created. After creation, its length is fixed.