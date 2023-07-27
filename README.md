# Matilda & Phillipa's Monty Language

Monty Language is a simple, yet powerful, programming language designed for readability and ease of use. Inspired by Python and influenced by other programming languages like Ruby and JavaScript, Monty aims to provide a user-friendly syntax with a focus on code clarity and expressiveness.

## Table of Contents

- [Features](#features)
- [Getting Started](#getting-started)
  - [Installation](#installation)
  - [Hello, Monty!](#hello-monty)
- [Language Basics](#language-basics)
  - [Variables](#variables)
  - [Control Flow](#control-flow)
  - [Functions](#functions)
- [Standard Library](#standard-library)

## Features

- **Readability**: Monty's syntax is designed to be clear and straightforward, making it easy to write and understand code.
- **Dynamic Typing**: Variables in Monty are dynamically typed, allowing flexibility in variable usage.
- **Interpreted**: Monty is an interpreted language, providing quick feedback during development.
- **Object-Oriented**: Monty supports object-oriented programming paradigms, facilitating code organization and reusability.
- **Rich Standard Library**: Monty comes with a standard library offering a wide range of functionalities for various tasks.
- **Easy Integration**: Monty can easily be integrated with C/C++ code for performance-critical sections.
- **Extensible**: Monty allows users to create their own modules and packages to extend the language's functionality.

## Getting Started

Follow the steps below to get started with Monty Language.

### Installation

Currently, Monty Language supports macOS, Linux, and Windows operating systems. To install Monty, follow these steps:

1. Download the latest release from the [Monty GitHub repository](https://github.com/monty-lang/monty).
2. Extract the downloaded package to your desired location.
3. Add the Monty executable to your system's PATH variable to use it from anywhere.

### Hello, Monty!

Once you have Monty installed, create a new file named `hello.mty` with the following content:

```python
# File: hello.mty

fn main() {
    println("Hello, Monty!");
}
```

Save the file and run it using the Monty interpreter:

```
$ monty hello.mty
Hello, Monty!
```

Congratulations! You've written and executed your first Monty program.

## Language Basics

### Variables

In Monty, you don't need to specify variable types explicitly. The language infers the types for you. Here's how you can declare and use variables:

```python
fn main() {
    let name = "John";
    let age = 30;
    let is_student = true;

    println("Name:", name);
    println("Age:", age);
    println("Is Student:", is_student);
}
```

### Control Flow

Monty supports standard control flow statements like `if`, `else`, and `while`. Here's an example of an `if` statement:

```python
fn main() {
    let x = 10;

    if x > 5 {
        println("x is greater than 5");
    } else {
        println("x is less than or equal to 5");
    }
}
```

### Functions

Creating functions in Monty is straightforward. Functions start with the `fn` keyword, followed by the function name, and then the function body:

```python
fn greet(name) {
    println("Hello, ", name, "!");
}

fn main() {
    greet("Alice");
    greet("Bob");
}
```

## Standard Library

Monty comes with a rich standard library that provides numerous modules for various purposes. You can find the official documentation for the standard library [here](https://monty-lang.org/docs/standard-library).

## Authors (Matilda & Phillipa)
