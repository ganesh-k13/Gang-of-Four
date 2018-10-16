# Adapter Pattern

## Definition
It allows classes with incompatible interfaces to work together by wrapping its own interface around that of an already existing class.

In design, adapters are used when we have a class (Client) expecting some type of object and we have an object (Adaptee) offering the same features but exposing a different interface.

It is often used to make existing classes work with others without modifying their source code. The client sees only the target interface and not the adapter. The adapter implements the target interface. Adapter delegates all requests to Adaptee.

## Class Diagram
![Alt text](adapter_uml.gif?raw=true "Adapter Pattern Class Diagram")

## Usage
To use an adapter:

1. The client makes a request to the adapter by calling a method on it using the target interface.
2. The adapter translates that request on the adaptee using the adaptee interface.
3. Client receive the results of the call and is unaware of adapter’s presence.

## Examples
1. Consider a USB to Ethernet adapter. We need this when we have an Ethernet interface on one end and USB on the other. Since they are incompatible with each other, we use an adapter that converts one to other.