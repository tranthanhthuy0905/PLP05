# WRITE-UP

1. Does your language support objects or something similar (e.g., structs or records)?
   <br>
   C++ accepts records and structs. A record, commonly called a structure in C++, is a collection of related data items.
   <br>
2. Are there naming conventions for objects, instance variables, or functions that people writing in your language should be aware of?
   <br>
   Object in C++ must be named with capitalization while instance variables only accepts the
   lower-case letter at the beginning. Both only accept [A-Za-z_] after the first letter. Similar
   to functions
   <br>
3. Does your language have standard methods for functions that serve a similar purpose across all objects? For example, toString() in Java and **str** in Python allow information about the objects to be printed. Are there similar functions in your language?
   <br>
   C++ does not have toString() or **str** similar to Java and Python but to override the stream operator << for stream in toString() method. Most functions/objects in C++ are user-defined ones.
   <br>
4. How does inheritance work (if it does)? Does your language support multiple inheritance?
   <br>
   C++ accepts multiple inheritance. Inheritance has higher power than access specifiers with 3 types: public, protected, private.
   <br>
5. If there is inheritance, how does your language deal with overloading method names and resolving those calls?
   <br>
   C++ deals with function overloading as:

- Exact match:- (Function name and Parameter)
- If a not exact match is found:–
  ->Char, Unsigned char, and short are promoted to an int.
  ->Float is promoted to double

- If no match found:
  ->C++ tries to find a match through the standard conversion.

- ELSE ERROR
  <br>

6. Is there anything else that’s important to know about objects and inheritance in your language?
   <br>
   C++ accepts multiple inheritance using "," to separate
   <br>
