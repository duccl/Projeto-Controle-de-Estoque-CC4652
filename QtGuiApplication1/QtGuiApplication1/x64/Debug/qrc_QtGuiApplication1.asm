; Listing generated by Microsoft (R) Optimizing Compiler Version 19.22.27905.0 

include listing.inc

INCLUDELIB MSVCRTD
INCLUDELIB OLDNAMES

PUBLIC	?qInitResources_QtGuiApplication1@@YAHXZ	; qInitResources_QtGuiApplication1
PUBLIC	?qCleanupResources_QtGuiApplication1@@YAHXZ	; qCleanupResources_QtGuiApplication1
EXTRN	atexit:PROC
EXTRN	__CxxFrameHandler3:PROC
_BSS	SEGMENT
?dummy@?A0xedbf9b1a@@3Uinitializer@1@A DB 01H DUP (?)	; `anonymous namespace'::dummy
_BSS	ENDS
;	COMDAT pdata
pdata	SEGMENT
$pdata$??0initializer@?A0xedbf9b1a@@QEAA@XZ DD imagerel ??0initializer@?A0xedbf9b1a@@QEAA@XZ
	DD	imagerel ??0initializer@?A0xedbf9b1a@@QEAA@XZ+24
	DD	imagerel $unwind$??0initializer@?A0xedbf9b1a@@QEAA@XZ
pdata	ENDS
;	COMDAT pdata
pdata	SEGMENT
$pdata$??1initializer@?A0xedbf9b1a@@QEAA@XZ DD imagerel ??1initializer@?A0xedbf9b1a@@QEAA@XZ
	DD	imagerel ??1initializer@?A0xedbf9b1a@@QEAA@XZ+29
	DD	imagerel $unwind$??1initializer@?A0xedbf9b1a@@QEAA@XZ
pdata	ENDS
;	COMDAT pdata
pdata	SEGMENT
$pdata$??__Edummy@?A0xedbf9b1a@@YAXXZ DD imagerel ??__Edummy@?A0xedbf9b1a@@YAXXZ
	DD	imagerel ??__Edummy@?A0xedbf9b1a@@YAXXZ+33
	DD	imagerel $unwind$??__Edummy@?A0xedbf9b1a@@YAXXZ
pdata	ENDS
;	COMDAT pdata
pdata	SEGMENT
$pdata$??__Fdummy@?A0xedbf9b1a@@YAXXZ DD imagerel ??__Fdummy@?A0xedbf9b1a@@YAXXZ
	DD	imagerel ??__Fdummy@?A0xedbf9b1a@@YAXXZ+21
	DD	imagerel $unwind$??__Fdummy@?A0xedbf9b1a@@YAXXZ
pdata	ENDS
CRT$XCU	SEGMENT
?dummy$initializer$@?A0xedbf9b1a@@3P6AXXZEA DQ FLAT:??__Edummy@?A0xedbf9b1a@@YAXXZ ; `anonymous namespace'::dummy$initializer$
CRT$XCU	ENDS
;	COMDAT xdata
xdata	SEGMENT
$unwind$??__Fdummy@?A0xedbf9b1a@@YAXXZ DD 010401H
	DD	04204H
xdata	ENDS
;	COMDAT xdata
xdata	SEGMENT
$unwind$??__Edummy@?A0xedbf9b1a@@YAXXZ DD 010401H
	DD	04204H
xdata	ENDS
;	COMDAT xdata
xdata	SEGMENT
$ip2state$??1initializer@?A0xedbf9b1a@@QEAA@XZ DD imagerel ??1initializer@?A0xedbf9b1a@@QEAA@XZ
	DD	0ffffffffH
xdata	ENDS
;	COMDAT CONST
CONST	SEGMENT
$cppxdata$??1initializer@?A0xedbf9b1a@@QEAA@XZ DD 019930522H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	01H
	DD	imagerel $ip2state$??1initializer@?A0xedbf9b1a@@QEAA@XZ
	DD	020H
	DD	00H
	DD	05H
CONST	ENDS
;	COMDAT xdata
xdata	SEGMENT
$unwind$??1initializer@?A0xedbf9b1a@@QEAA@XZ DD 011219H
	DD	06209H
	DD	imagerel __CxxFrameHandler3
	DD	imagerel $cppxdata$??1initializer@?A0xedbf9b1a@@QEAA@XZ
xdata	ENDS
;	COMDAT xdata
xdata	SEGMENT
$unwind$??0initializer@?A0xedbf9b1a@@QEAA@XZ DD 010901H
	DD	04209H
xdata	ENDS
; Function compile flags: /Odtp
;	COMDAT ??__Fdummy@?A0xedbf9b1a@@YAXXZ
text$yd	SEGMENT
??__Fdummy@?A0xedbf9b1a@@YAXXZ PROC			; `anonymous namespace'::`dynamic atexit destructor for 'dummy'', COMDAT
	sub	rsp, 40					; 00000028H
	lea	rcx, OFFSET FLAT:?dummy@?A0xedbf9b1a@@3Uinitializer@1@A ; `anonymous namespace'::dummy
	call	??1initializer@?A0xedbf9b1a@@QEAA@XZ	; `anonymous namespace'::initializer::~initializer
	add	rsp, 40					; 00000028H
	ret	0
??__Fdummy@?A0xedbf9b1a@@YAXXZ ENDP			; `anonymous namespace'::`dynamic atexit destructor for 'dummy''
text$yd	ENDS
; Function compile flags: /Odtp
;	COMDAT ??__Edummy@?A0xedbf9b1a@@YAXXZ
text$di	SEGMENT
??__Edummy@?A0xedbf9b1a@@YAXXZ PROC			; `anonymous namespace'::`dynamic initializer for 'dummy'', COMDAT
; File C:\Users\ecoltri\source\repos\QtGuiApplication1\QtGuiApplication1\GeneratedFiles\qrc_QtGuiApplication1.cpp
; Line 45
	sub	rsp, 40					; 00000028H
	lea	rcx, OFFSET FLAT:?dummy@?A0xedbf9b1a@@3Uinitializer@1@A ; `anonymous namespace'::dummy
	call	??0initializer@?A0xedbf9b1a@@QEAA@XZ	; `anonymous namespace'::initializer::initializer
	lea	rcx, OFFSET FLAT:??__Fdummy@?A0xedbf9b1a@@YAXXZ ; `anonymous namespace'::`dynamic atexit destructor for 'dummy''
	call	atexit
	add	rsp, 40					; 00000028H
	ret	0
??__Edummy@?A0xedbf9b1a@@YAXXZ ENDP			; `anonymous namespace'::`dynamic initializer for 'dummy''
text$di	ENDS
; Function compile flags: /Odtp
;	COMDAT ??1initializer@?A0xedbf9b1a@@QEAA@XZ
_TEXT	SEGMENT
$T1 = 32
this$ = 64
??1initializer@?A0xedbf9b1a@@QEAA@XZ PROC		; `anonymous namespace'::initializer::~initializer, COMDAT
; File C:\Users\ecoltri\source\repos\QtGuiApplication1\QtGuiApplication1\GeneratedFiles\qrc_QtGuiApplication1.cpp
; Line 44
	mov	QWORD PTR [rsp+8], rcx
	sub	rsp, 56					; 00000038H
	mov	QWORD PTR $T1[rsp], -2
	call	?qCleanupResources_QtGuiApplication1@@YAHXZ ; qCleanupResources_QtGuiApplication1
	npad	1
	add	rsp, 56					; 00000038H
	ret	0
??1initializer@?A0xedbf9b1a@@QEAA@XZ ENDP		; `anonymous namespace'::initializer::~initializer
_TEXT	ENDS
; Function compile flags: /Odtp
;	COMDAT ??0initializer@?A0xedbf9b1a@@QEAA@XZ
_TEXT	SEGMENT
this$ = 48
??0initializer@?A0xedbf9b1a@@QEAA@XZ PROC		; `anonymous namespace'::initializer::initializer, COMDAT
; File C:\Users\ecoltri\source\repos\QtGuiApplication1\QtGuiApplication1\GeneratedFiles\qrc_QtGuiApplication1.cpp
; Line 43
	mov	QWORD PTR [rsp+8], rcx
	sub	rsp, 40					; 00000028H
	call	?qInitResources_QtGuiApplication1@@YAHXZ ; qInitResources_QtGuiApplication1
	mov	rax, QWORD PTR this$[rsp]
	add	rsp, 40					; 00000028H
	ret	0
??0initializer@?A0xedbf9b1a@@QEAA@XZ ENDP		; `anonymous namespace'::initializer::initializer
_TEXT	ENDS
; Function compile flags: /Odtp
_TEXT	SEGMENT
?qCleanupResources_QtGuiApplication1@@YAHXZ PROC	; qCleanupResources_QtGuiApplication1
; File C:\Users\ecoltri\source\repos\QtGuiApplication1\QtGuiApplication1\GeneratedFiles\qrc_QtGuiApplication1.cpp
; Line 38
	mov	eax, 1
; Line 39
	ret	0
?qCleanupResources_QtGuiApplication1@@YAHXZ ENDP	; qCleanupResources_QtGuiApplication1
_TEXT	ENDS
; Function compile flags: /Odtp
_TEXT	SEGMENT
?qInitResources_QtGuiApplication1@@YAHXZ PROC		; qInitResources_QtGuiApplication1
; File C:\Users\ecoltri\source\repos\QtGuiApplication1\QtGuiApplication1\GeneratedFiles\qrc_QtGuiApplication1.cpp
; Line 32
	mov	eax, 1
; Line 33
	ret	0
?qInitResources_QtGuiApplication1@@YAHXZ ENDP		; qInitResources_QtGuiApplication1
_TEXT	ENDS
END
