# Scribe

Scribe is a lightweight, header-only C++ logging utility designed for simplicity and ease of use. It provides a straightforward way to output log messages with customizable prefixes, making it ideal for debugging and general application logging.

## Features

*   **Header-Only:** No compilation required, just include `scribe.h` in your project.
*   **Lightweight:** Minimal overhead, designed for performance.
*   **Stream-like API:** Leverages the familiar `<<` operator for intuitive message construction, providing a clean interface for logging.
*   **Customizable Prefixes:** Easily add prefixes like `DEBUG`, `WARNING`, `ERROR`, etc., to your log messages.

## API Design Principles

Scribe is designed as a simple, intuitive API for C++ logging. Key design principles include:

*   **Minimalist Interface:** Provides a clean and straightforward set of functions and operators.
*   **Stream-like Syntax:** Leverages C++'s `operator<<` for a familiar and expressive logging experience.
*   **Header-Only Distribution:** Simplifies integration by providing the entire API in a single header file.

## Getting Started

### Prerequisites

You need a C++14 compatible compiler (e.g., Clang, GCC).

### Installation

Since Scribe is header-only, simply copy `scribe.h` into your project's include path.

### Usage

Include the `scribe.h` header in your source files:

```cpp
#include "scribe.h"
```

Then, you can use the `scribe` function to create log messages:

```cpp
#include "scribe.h"

int main() {
  scribe("INFO") << "Application started successfully.";
  scribe("DEBUG") << "Processing data for user ID: " << 12345;
  scribe("WARNING") << "Configuration file not found. Using default settings.";
  scribe("ERROR") << "Failed to connect to database. Error code: " << 500;
  return 0;
}
```

This will produce output similar to:

```
INFO: Application started successfully.
DEBUG: Processing data for user ID: 12345
WARNING: Configuration file not found. Using default settings.
ERROR: Failed to connect to database. Error code: 500
```

## Building the Example

A simple example `scribe_example.cc` is provided to demonstrate usage. You can build it using the provided `Makefile`:

```bash
make
./scribe_example
```


## License

This project is licensed under the MIT License. See the `LICENSE` file for details.
