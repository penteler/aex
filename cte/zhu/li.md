###### a
The diagram illustrates the core idea behind Harvard architecture which is 
the separation of data and instruction pathways (Buses) between the CPU and 
the separately dedicated memory of each of them. For comparison sake we can 
consider the Von Neumann architecture which uses single shared memory and a 
singular system bus for both data and instructions. The primary advantage of 
this architecture is that the CPU can fetch instructions and access data 
simultaneously this prevents a kind of bottle-neck effect that would occur if 
the same resources were being used for data and instructions.
###### b
Execution is preceded by compilation high level C code of this program for 
instance has to be translated into low level machine code. For variables 
a, b and c storage allocation is determined in memory or registers during 
compilation and linkage. The memory addresses can be `addr_a`, `addr_b`and 
`addr_c`. For initialization constant- 25 has to be loaded into memory/
register for a and similarly 75 has to be loaded for b. The instruction to 
initialize b is executed. The value 75 is loaded into the memory address 
assigned to variable b. Let's look at this assembly code for the machine 
operations:
```asm
MOV R0, #25 ; STORE R0 -> addr_a 
MOV R1, #75 ; STORE R0 -> addr_a
```
here MOV is the opcode (operation code) for moving (storing/copying) data 
directly to R0 which is a general purpose CPU register and here it is the 
operand that is the location that will be operated on. The comma is just 
the delimiter before the # which suggests the addressing mode. In this 
case #25 is an immediate value so it will be moved to register 0 as is. 
Everything after the semicolon (;) is a comment.
Now we can execute c b = a; as follows:
```asm
SUB R2, R1, R0
```
Here SUB is the opcode for the subtract operation that operates on three 
operands to subtract the value stored at the last operand (R0) and 
subtract it from the second operand value (at R1) to store the result in
the first operand (R2).
The ALU (arithmetic logic unit) in the CPU computes 75-25 and the result 
50 gets placed in the target register/memory.
These programs usually follow a fetch-decode-&execute pattern.
To initialize the CPU reads the instruction from the memory pointed by 
the program counter (PC). The program counter holds the address of the 
next instruction in memory and when we say that the CPU fetches the 
instruction from the memory address that holds the instruction and into 
the CPU's instruction Register.
To Execute the CPU performs the operation specified by the instruction 
and in order to write back the CPU writes the result to the destination 
which can be a general purpose register or memory.
. **Write Back**

   * CPU writes the result to the destination (register or memory).
   * Example:

     * `R0 = 75` (already in the register after LOAD)
     * `R2 = R0 - R1 = 50`
     * `STORE R2, addr_c` → writes 50 into memory location `addr_c`.

---

### Mapping it to your code

| Instruction        | Initialize / Fetch             | Execute              | Write Back          |
| ------------------ | ------------------------------ | -------------------- | ------------------- |
| `LOAD R0, addr_b`  | Fetch `LOAD` opcode + `addr_b` | Read memory[addr_b]  | R0 ← 75             |
| `LOAD R1, addr_a`  | Fetch opcode + `addr_a`        | Read memory[addr_a]  | R1 ← 25             |
| `SUB R2, R0, R1`   | Fetch opcode                   | Subtract R1 from R0  | R2 ← 50             |
| `STORE R2, addr_c` | Fetch opcode + `addr_c`        | Prepare memory write | memory[addr_c] ← 50 |

---

✅ Key points

* Every instruction goes through **fetch → execute → write-back**, even if it’s just a register operation.
* `LOAD` reads memory into a register.
* `SUB` operates on registers.
* `STORE` writes a register value back to memory.

---

I
