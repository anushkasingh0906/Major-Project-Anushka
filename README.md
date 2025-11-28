# Unit Converter (C)

A simple, console-based Unit Converter written in C.
It supports conversions for Length, Mass, Temperature, Time, Area, Volume, Speed, and Data Storage. The program uses robust input-handling helper functions so it tolerates invalid user input and keeps prompting until valid values are entered.
=============================================================================================================


Features

Interactive menu-driven CLI.

Safe input functions (read_int, read_double, read_two_ints) that validate input.

Common unit choices for each category (meters, kilograms, Celsius, seconds, m², liters, m/s, bytes, etc.).

Clean, consistent output formatting.

Minimal dependencies — compiles with any standard C compiler (eg. gcc).

Supported units

Length

Meter (m), Kilometer (km), Centimeter (cm), Millimeter (mm),

Mile (mi), Yard (yd), Foot (ft), Inch (in)

Mass

Kilogram (kg), Gram (g), Milligram (mg), Tonne (t), Pound (lb), Ounce (oz)

Temperature

Celsius (C), Fahrenheit (F), Kelvin (K)

Time

Second (s), Minute (min), Hour (h), Day, Week

Area

m², km², cm², hectare (ha), acre, ft², in²

Volume

m³, L, mL, cm³, in³, US gallon, US pint

Speed

m/s, km/h, mph, ft/s

Data Storage

bit (b), Byte (B), KB (10³ B), KiB (2¹⁰ B), MB (10⁶ B), MiB (2²⁰ B), GB (10⁹ B), GiB (2³⁰ B)

==============================================================================================


Build & Run

Save the program (the file you provided) as unit_converter.c.

Compile with gcc:

gcc -std=c11 -O2 -o unit_converter unit_converter.c
----------------------------------------

Run:

./unit_converter


(On Windows with MinGW the binary will be unit_converter.exe and you can run ./unit_converter.exe.)

Usage example

After running, you'll see the main menu:

----------------------------------------
UNIT CONVERTER (SIMPLE INPUT)
----------------------------------------
1. Length
2. Mass
3. Temperature
4. Time
5. Area
6. Volume
7. Speed
8. Data Storage
9. Exit

Enter choice:


Example — convert 5 kilometers to meters:

Enter choice: 1

----------------------------------------
Length Converter
----------------------------------------
1. Meter (m)
2. Kilometer (km)
3. Centimeter (cm)
4. Millimeter (mm)
5. Mile (mi)
6. Yard (yd)
7. Foot (ft)
8. Inch (in)

Enter source unit number and target unit number (example: 1 2): 2 1
Enter value: 5

Result: 5000


The program pauses after each conversion with Press Enter to continue... so you can review results before returning to the menu.

Implementation notes

Input is read using scanf with validation loops to avoid crashes on invalid input.

Conversions are done by converting the source to a canonical base unit (e.g., meters, kilograms, seconds, m², m³, bytes, Celsius) then converting to the target unit.

Floating-point results are printed with %.10g to provide good precision while avoiding overly long output.

All conversion constants are hard-coded (useful for portability and readability).

Portability & caveats

Uses only standard C library functions (stdio.h), so it should compile on Linux, macOS, and Windows (with a C compiler).

The code uses getchar() to flush leftover input and to pause — behaviour in some terminals can differ slightly but is generally OK.

If you plan to extend this for a GUI or use in a web/embedded environment, consider refactoring conversion logic into separate functions or a conversion table.

Contributing

Feel free to:

Add more units (imperial/metric variations).

Add unit aliases and textual input (e.g., accept km instead of number choices).

Export results to CSV or add interactive history.

Add unit tests for conversion functions.
