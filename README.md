# fractol

## Table of Contents
* [General Info](#general-information)
* [Complex Numbers](#complex-numbers)
* [Fractals](#fractals)
* [Features](#features)
* [Setup](#setup)
* [Usage](#usage)

## General Information
This project is a computer program that lets you explore three types of amazing patterns called fractals. It uses a graphic library called MLX to draw and display these patterns on the screen. They are created using mathematical equations that include complex numbers.

## Complex Numbers
Complex numbers are numbers that combine both real and imaginary parts. They are written in the form "a + bi," where "a" represents the real part and "b" represents the imaginary part. The letter "i" represents the imaginary unit, which is defined as the square root of -1. The real part and imaginary part can be any real numbers.

For example, let's consider the complex number 3 + 2i. Here, the real part is 3, and the imaginary part is 2i. The real part represents a quantity on the real number line, while the imaginary part represents a quantity scaled by the imaginary unit "i."

## Fractals 
A fractal is a special kind of pattern that keeps repeating itself at different scales. It's like a picture that contains smaller copies of itself, and those smaller copies have even smaller copies, and so on. Fractals are created using math and can be found in many different things, like nature, art, and even computer graphics. This project focusses on three types of fractals:

### Mandelbrot Fractal
The Mandelbrot fractal is named after the mathematician Benoit Mandelbrot, who introduced it to the world in the 1970s. It is created using the iterative formula z = z^2 + c, where z and c are complex numbers. The fractal is generated by iterating this formula for each point in the complex plane and determining whether the iterated sequence of z tends towards infinity or remains bounded. The points that remain bounded are then plotted on the screen, forming the Mandelbrot set.

![](https://github.com/tessavdvorst/Fractol/blob/master/mandelbrot.gif)

### Julia Fractal
The Julia fractal is named after Gaston Julia, a French mathematician who studied these structures in the early 20th century. It is similar to the Mandelbrot fractal and also uses the iterative formula z = z^2 + c. However, in the Julia fractal, the constant c is kept fixed, and the initial value of z varies across the complex plane. This leads to a different fractal shape for each value of c. 

![](https://github.com/tessavdvorst/Fractol/blob/master/julia.gif)

### Burning ship Fractal
The Ship fractal, also known as the Burning Ship fractal, is a variation of the Mandelbrot fractal. It is named after its resemblance to a ship that is on fire. The formula used to generate the Ship fractal is z = (|Re(z)| + i|Im(z)|)^2 + c, where z and c are complex numbers.

![](https://github.com/tessavdvorst/Fractol/blob/master/ship.gif)

## Setup
To use fractol, you must first clone this repository.

`git clone https://github.com/tessavdvorst/Fractol.git`

Once you have the source code, you can compile it using the provided Makefile.

`make`

This will create an executable file called fractol in the same directory.

## Usage
Once you have compiled the program, you can run it by typing the following command:

`./fractol [fractalname] [julia-re] [julia-im]`

**fractalname: (mandatory)** mandelbrot/julia/ship

**julia-re & julia-im: (optional)** real and imaginary coordinates (only for julia set), e.g. -0.4 and 0.6
