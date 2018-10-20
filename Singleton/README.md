# Singleton Pattern

## Definition
It is a creational design pattern which restricts the instantiation of a class to a single object. It is generally used when a single object is needed to coordinate actions across the system. Here, the class is responsible for the object's instantiation. It does so by using a The hidden (private) constructor which ensures that the class is not instantiated from outside the class. Outer classes or subclasses should be prevented from creating the instance.

## Class Diagram
![Alt text](singleton_uml.gif?raw=true "Singleton Pattern Class Diagram")

## Usage
To use a singleton:

1. Declare a private constructor which initializes the singleton object
2. Provide global access to that instance through a static method
3. 

## Examples

1. *Hardware interface access*: Singleton classes are also used to prevent concurrent access of class. They are used in case external hardware resource usage limitation is required. Eg: Hardware printers where the print spooler can be made a singleton to avoid multiple concurrent accesses and creating deadlock.

2. *Logger* : Singleton classes are used in log file generations. Log files are created by logger class object. Suppose an application where the logging utility has to produce one log file based on the messages received from the users. If there is multiple client application using this logging utility class they might create multiple instances of this class and it can potentially cause issues during concurrent access to the same logger file. We can use the logger utility class as a singleton and provide a global point of reference, so that each user can use this utility and no 2 users access it at same time.

3. *Configuration File*: This has a performance benefit as it prevents multiple users to repeatedly access and read the configuration file or properties file. It creates a single instance of the configuration file which can be accessed by multiple calls concurrently as it will provide static config data loaded into in-memory objects. The application only reads from the configuration file at the first time and there after from second call onwards the client applications read the data from in-memory objects.

4. *Cache*: We can use the cache as a singleton object as it can have a global point of reference and for all future calls to the cache object the client application will use the in-memory object.