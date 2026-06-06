# C Programming Foundations & Core Architecture

A comprehensive, production-grade repository mapping out core computer science fundamentals, low-level memory allocation models, and structural programming methodologies implemented systematically in C.

## 📁 Repository Blueprint & Curriculum Layout

The directory structure is organized into progressive developmental modules, tracking an academic and industry-aligned mastery curve:

### 🔹 Module 01: Algorithmic Logic & Flow Control
* **Core Concepts:** Multi-conditional evaluation, Boolean evaluation expressions, hardware instruction branch patterns.
* **Implementations:** Short-circuiting logic setups, `if-else` cascades, optimized `switch-case` branch tables, and nested bounded/unbounded loops (`for`, `while`, `do-while`).

### 🔹 Module 02: Contiguous Arrays & Matrix Architecture
* **Core Concepts:** Contiguous hardware memory mapping, spatial locality optimization, array boundaries.
* **Implementations:** One-dimensional vector sweeps, multi-dimensional grid traversals, matrix manipulation routines, and string parsing implementations utilizing null-terminated character sequences (`\0`).

### 🔹 Module 03: Modular Engineering & Functional Scope
* **Core Concepts:** Activation records on the call stack, parameter-passing physics, variables scope boundaries (`automatic`, `static`, `register`, `extern`).
* **Implementations:** Pure deterministic subroutines, modular algorithm extraction, and stack-frame evaluation sequences.

### 🔹 Module 04: Lower-Level Memory & Pointer Engineering
* **Core Concepts:** Direct hardware RAM addressing, pointer arithmetic scalar scaling, referencing versus dereferencing mechanics.
* **Implementations:** Pass-by-reference pipelines, array-pointer decay models, dynamic heap allocations (`malloc`, `calloc`, `realloc`, `free`), and functional callbacks using function pointers.

### 🔹 Module 05: User-Defined Types & Data Structures
* **Core Concepts:** Structured heterogeneous data aggregation, byte alignment, memory padding rules, and shared-memory overlay architectures.
* **Implementations:** Struct compositions, performance-oriented bit fields, resource-optimized `union` constructs, and self-referential structures utilized to construct dynamic linked lists, stacks, and binary trees.

### 🔹 Module 06: Storage Architecture & File I/O Streams
* **Core Concepts:** POSIX/Standard system input/output buffer layers, byte-stream persistent file storage, sequential vs random file access patterns.
* **Implementations:** Text log processors (`fprintf`, `fscanf`) and raw binary serialization dumps (`fwrite`, `fread`) with precise stream tracking control using `fseek` and `ftell`.

---

## 🛠️ Technical Competencies Demonstrated
1. **Low-Level Memory Literacy:** Designing code with a strict awareness of hardware stack boundaries, heap allocations, and pointer arithmetic.
2. **Structural Modularization:** Breaking down large complex business domains into highly isolated, testable, and memory-safe code modules.

## 🚀 How to Compile and Execute

Ensure you have the GNU Compiler Collection (`gcc`) configured in your system environment path.

```bash
# 1. Move into the corresponding chapter subdirectory
cd Module_01_Algorithmic_Logic/

# 2. Compile the targeted module tracking optimal compiler configurations
gcc -Wall -O2 target_program.c -o execution_binary

# 3. Trigger the compiled machine-code instructions
./execution_binary