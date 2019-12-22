    .486
    .model flat, stdcall
    option casemap :none


    include \masm32\include\windows.inc 
    include \masm32\include\kernel32.inc 
    include \masm32\macros\macros.asm
    include \masm32\include\msvcrt.inc
    include \masm32\include\user32.inc
    include \masm32\include\gdi32.inc
    include \masm32\include\masm32.inc

    
    
    includelib \masm32\lib\kernel32.lib
    includelib \masm32\lib\msvcrt.lib
    includelib \masm32\lib\user32.lib
    includelib \masm32\lib\gdi32.lib
    includelib \masm32\lib\masm32.lib

    .data
        n dd 0
        f dd 2
        i dd 1
        scanf_buffer db '%d',0

    .code


start:

    call main

    exit


main proc
    ;push offset n
    ;push offset scanf_buffer
    ;call crt_scanf
    ; invoke scanf. prinf as the same
    invoke crt_scanf, addr scanf_buffer, addr n
    mov ebx, 2
    mov i, ebx
    mov ecx, 1
    mov f, ecx

    cmp ebx, eax                                          ; Judge whether(i <= n)
    jg L2

L1:
    mov ecx, f
    mov ebx, i
    imul ecx, ebx                                         ; f = f * i
    mov f, ecx
    
    add i, 1                                              ; i = i + 1                                         

    jmp L2

L2: 
    mov ebx, i
    mov eax, n
    cmp ebx, eax                                          ; Judge whether(i <= n)
    jle L1

    printf("Factorial(%d) = %d \n", n, f)                 ; cout << f
    inkey
    ret

main endp

end start