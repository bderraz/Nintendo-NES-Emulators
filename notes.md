# CPU Documentation

---

## CSpecifications

### General Information

- **CPU Model**: 2A03
- **Memory Storage Capacity**: 64 KB
- **Addressable Memory Range**: `$0000 - $FFFF`
- **Stack Memory Range**: `$0100 - $01FF`

### Registers

- **PC (Program Counter)**: 16-bit register pointing to the next instruction to execute.
- **SP (Stack Pointer)**: 8-bit register indicating the stack position. It wraps between `0x00` and `0xFF` without overflow detection.
- **A (Accumulator)**: 8-bit register for arithmetic and logic operations.
- **X (Index Register X)**: 8-bit register, often used for addressing modes.
- **Y (Index Register Y)**: 8-bit register, also used in several addressing modes.

### Processor Flags

Each flag represents a specific state or condition in the CPU:

- **N (Negative)**: Set if the result of the last operation had a negative sign.
- **V (Overflow)**: Set if the last arithmetic operation resulted in a value too large for the register to hold.
- **U (Unused)**: An unused flag bit.
- **B (Break)**: Indicates whether a BRK (break) instruction has been executed.
- **D (Decimal)**: Controls whether the CPU is in binary or decimal mode.
- **I (Interrupt Disable)**: Controls the response to interrupts.
- **Z (Zero)**: Set if the result of the last operation was zero.
- **C (Carry)**: Set if the last operation resulted in a carry out or borrow into the high order bit.

The flag register is represented as follows:

7 6 5 4 3 2 1 0
N V U B D I Z C


- **Reading CPU Data**: Contents from ROM are stored in the memory range `$8000 - $FFFF`.
- **Program Counter Initialization**: The initial value is fetched from addresses `0xFFFC` and `0xFFFD`, using little-endian format.
- **Zero Page**: A quick access memory area ranging from `$0000 - $00FF`.
- **Overflow Clarification**: Overflow occurs when the sign of the result does not match the sign of either operand in an arithmetic operation.

---

## Resources and References

- **NES Architecture**:
  - [NESDev - NES Documentation](https://www.nesdev.org/NESDoc.pdf)
- **Testing and Debugging**:
  - [NES Test Explanation](https://www.qmtpro.com/~nes/misc/nestest.txt)
  - [NES Test Log](https://www.qmtpro.com/~nes/misc/nestest.nes)
  - [NES Test ROM](https://www.qmtpro.com/~nes/misc/nestest.nes)
- **Instruction Set and Operation**:
  - [6502 Instruction Set Overview](https://www.masswerk.at/6502/6502_instruction_set.html)
  - [Complete 6502 Instruction Table](http://www.oxyron.de/html/opcodes02.html)
- **Additional Topics**:
  - [Discussion on the Overflow Flag](https://forums.nesdev.org/viewtopic.php?t=6331)

---
