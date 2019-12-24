#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 94 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# myparser.v
# YACC verbose file generated from myparser.y.
# 
# Date: 12/24/19
# Time: 17:44:32
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : translation_unit $end

    1  primary_expression : IDENTIFIER
    2                     | CONSTANT
    3                     | STRING_LITERAL
    4                     | '(' expression ')'

    5  postfix_expression : primary_expression
    6                     | postfix_expression '[' expression ']'
    7                     | postfix_expression '(' ')'
    8                     | postfix_expression '(' argument_expression_list ')'
    9                     | postfix_expression '.' IDENTIFIER
   10                     | postfix_expression INC_OP
   11                     | postfix_expression DEC_OP

   12  argument_expression_list : assignment_expression
   13                           | argument_expression_list ',' assignment_expression

   14  unary_expression : postfix_expression
   15                   | INC_OP unary_expression
   16                   | DEC_OP unary_expression
   17                   | unary_operator unary_expression

   18  unary_operator : '&'
   19                 | '*'
   20                 | '-'
   21                 | '~'
   22                 | '!'

   23  multiplicative_expression : unary_expression
   24                            | multiplicative_expression '*' unary_expression
   25                            | multiplicative_expression '/' unary_expression
   26                            | multiplicative_expression '%' unary_expression

   27  additive_expression : multiplicative_expression
   28                      | additive_expression '+' multiplicative_expression
   29                      | additive_expression '-' multiplicative_expression

   30  shift_expression : additive_expression
   31                   | shift_expression LEFT_OP additive_expression
   32                   | shift_expression RIGHT_OP additive_expression

   33  relational_expression : shift_expression
   34                        | relational_expression '<' shift_expression
   35                        | relational_expression '>' shift_expression
   36                        | relational_expression LE_OP shift_expression
   37                        | relational_expression GE_OP shift_expression

   38  equality_expression : relational_expression
   39                      | equality_expression EQ_OP relational_expression
   40                      | equality_expression NE_OP relational_expression

   41  and_expression : equality_expression
   42                 | and_expression '&' equality_expression

   43  exclusive_or_expression : and_expression
   44                          | exclusive_or_expression '^' and_expression

   45  inclusive_or_expression : exclusive_or_expression
   46                          | inclusive_or_expression '|' exclusive_or_expression

   47  logical_and_expression : inclusive_or_expression
   48                         | logical_and_expression AND_OP inclusive_or_expression

   49  logical_or_expression : logical_and_expression
   50                        | logical_or_expression OR_OP logical_and_expression

   51  assignment_expression : logical_or_expression
   52                        | unary_expression assignment_operator assignment_expression

   53  assignment_operator : '='
   54                      | MUL_ASSIGN
   55                      | DIV_ASSIGN
   56                      | MOD_ASSIGN
   57                      | ADD_ASSIGN
   58                      | SUB_ASSIGN
   59                      | LEFT_ASSIGN
   60                      | RIGHT_ASSIGN
   61                      | AND_ASSIGN
   62                      | XOR_ASSIGN
   63                      | OR_ASSIGN

   64  expression : assignment_expression
   65             | expression ',' assignment_expression

   66  constant_expression : logical_or_expression

   67  declaration : declaration_specifiers init_declarator_list ';'

   68  declaration_specifiers : type_specifier
   69                         | type_specifier declaration_specifiers

   70  init_declarator_list : init_declarator
   71                       | init_declarator_list ',' init_declarator

   72  init_declarator : declarator
   73                  | declarator '=' initializer

   74  type_specifier : VOID
   75                 | CHAR
   76                 | INT
   77                 | DOUBLE
   78                 | BOOL
   79                 | struct_or_union_specifier
   80                 | TYPE_NAME

   81  struct_or_union_specifier : struct_or_union IDENTIFIER '{' struct_declaration_list '}'
   82                            | struct_or_union '{' struct_declaration_list '}'
   83                            | struct_or_union IDENTIFIER

   84  struct_or_union : STRUCT
   85                  | UNION

   86  struct_declaration_list : struct_declaration
   87                          | struct_declaration_list struct_declaration

   88  struct_declaration : specifier_qualifier_list struct_declarator_list ';'

   89  specifier_qualifier_list : type_specifier specifier_qualifier_list
   90                           | type_specifier

   91  struct_declarator_list : struct_declarator
   92                         | struct_declarator_list ',' struct_declarator

   93  struct_declarator : declarator
   94                    | ':' constant_expression
   95                    | declarator ':' constant_expression

   96  declarator : pointer direct_declarator
   97             | direct_declarator

   98  direct_declarator : IDENTIFIER
   99                    | '(' declarator ')'
  100                    | direct_declarator '[' assignment_expression ']'
  101                    | direct_declarator '[' '*' ']'
  102                    | direct_declarator '[' ']'
  103                    | direct_declarator '(' parameter_type_list ')'
  104                    | direct_declarator '(' identifier_list ')'
  105                    | direct_declarator '(' ')'

  106  pointer : '*'
  107          | '*' pointer

  108  parameter_type_list : parameter_list

  109  parameter_list : parameter_declaration
  110                 | parameter_list ',' parameter_declaration

  111  parameter_declaration : declaration_specifiers declarator
  112                        | declaration_specifiers abstract_declarator
  113                        | declaration_specifiers

  114  identifier_list : IDENTIFIER
  115                  | identifier_list ',' IDENTIFIER

  116  abstract_declarator : pointer
  117                      | direct_abstract_declarator
  118                      | pointer direct_abstract_declarator

  119  direct_abstract_declarator : '(' abstract_declarator ')'
  120                             | '[' ']'
  121                             | '[' assignment_expression ']'
  122                             | direct_abstract_declarator '[' ']'
  123                             | direct_abstract_declarator '[' assignment_expression ']'
  124                             | '[' '*' ']'
  125                             | direct_abstract_declarator '[' '*' ']'
  126                             | '(' ')'
  127                             | '(' parameter_type_list ')'
  128                             | direct_abstract_declarator '(' ')'
  129                             | direct_abstract_declarator '(' parameter_type_list ')'

  130  initializer : assignment_expression
  131              | '{' initializer_list '}'
  132              | '{' initializer_list ',' '}'

  133  initializer_list : initializer
  134                   | designation initializer
  135                   | initializer_list ',' initializer
  136                   | initializer_list ',' designation initializer

  137  designation : designator_list '='

  138  designator_list : designator
  139                  | designator_list designator

  140  designator : '[' constant_expression ']'
  141             | '.' IDENTIFIER

  142  statement : compound_statement
  143            | expression_statement
  144            | selection_statement
  145            | iteration_statement
  146            | jump_statement

  147  compound_statement : '{' '}'
  148                     | '{' block_item_list '}'

  149  block_item_list : block_item
  150                  | block_item_list block_item

  151  block_item : declaration
  152             | statement

  153  expression_statement : ';'
  154                       | expression ';'

  155  selection_statement : IF '(' expression ')' statement
  156                      | IF '(' expression ')' statement ELSE statement

  157  iteration_statement : WHILE '(' expression ')' statement
  158                      | DO statement WHILE '(' expression ')' ';'
  159                      | FOR '(' expression_statement expression_statement ')' statement
  160                      | FOR '(' expression_statement expression_statement expression ')' statement
  161                      | FOR '(' declaration expression_statement ')' statement
  162                      | FOR '(' declaration expression_statement expression ')' statement

  163  jump_statement : CONTINUE ';'
  164                 | BREAK ';'
  165                 | RETURN ';'
  166                 | RETURN expression ';'

  167  translation_unit : external_declaration
  168                   | translation_unit external_declaration

  169  external_declaration : function_definition
  170                       | declaration

  171  function_definition : declaration_specifiers declarator declaration_list compound_statement
  172                      | declaration_specifiers declarator compound_statement

  173  declaration_list : declaration
  174                   | declaration_list declaration


##############################################################################
# States
##############################################################################

state 0
	$accept : . translation_unit $end

	TYPE_NAME  shift 1
	CHAR  shift 2
	INT  shift 3
	DOUBLE  shift 4
	VOID  shift 5
	BOOL  shift 6
	STRUCT  shift 7
	UNION  shift 8

	translation_unit  goto 9
	declaration_specifiers  goto 10
	declaration  goto 11
	type_specifier  goto 12
	struct_or_union_specifier  goto 13
	struct_or_union  goto 14
	external_declaration  goto 15
	function_definition  goto 16


state 1
	type_specifier : TYPE_NAME .  (80)

	.  reduce 80


state 2
	type_specifier : CHAR .  (75)

	.  reduce 75


state 3
	type_specifier : INT .  (76)

	.  reduce 76


state 4
	type_specifier : DOUBLE .  (77)

	.  reduce 77


state 5
	type_specifier : VOID .  (74)

	.  reduce 74


state 6
	type_specifier : BOOL .  (78)

	.  reduce 78


state 7
	struct_or_union : STRUCT .  (84)

	.  reduce 84


state 8
	struct_or_union : UNION .  (85)

	.  reduce 85


state 9
	$accept : translation_unit . $end  (0)
	translation_unit : translation_unit . external_declaration

	$end  accept
	TYPE_NAME  shift 1
	CHAR  shift 2
	INT  shift 3
	DOUBLE  shift 4
	VOID  shift 5
	BOOL  shift 6
	STRUCT  shift 7
	UNION  shift 8

	declaration_specifiers  goto 10
	declaration  goto 11
	type_specifier  goto 12
	struct_or_union_specifier  goto 13
	struct_or_union  goto 14
	external_declaration  goto 17
	function_definition  goto 16


state 10
	declaration : declaration_specifiers . init_declarator_list ';'
	function_definition : declaration_specifiers . declarator declaration_list compound_statement
	function_definition : declaration_specifiers . declarator compound_statement

	'('  shift 18
	'*'  shift 19
	IDENTIFIER  shift 20

	init_declarator_list  goto 21
	init_declarator  goto 22
	declarator  goto 23
	direct_declarator  goto 24
	pointer  goto 25


state 11
	external_declaration : declaration .  (170)

	.  reduce 170


state 12
	declaration_specifiers : type_specifier . declaration_specifiers
	declaration_specifiers : type_specifier .  (68)

	TYPE_NAME  shift 1
	CHAR  shift 2
	INT  shift 3
	DOUBLE  shift 4
	VOID  shift 5
	BOOL  shift 6
	STRUCT  shift 7
	UNION  shift 8
	.  reduce 68

	declaration_specifiers  goto 26
	type_specifier  goto 12
	struct_or_union_specifier  goto 13
	struct_or_union  goto 14


state 13
	type_specifier : struct_or_union_specifier .  (79)

	.  reduce 79


state 14
	struct_or_union_specifier : struct_or_union . '{' struct_declaration_list '}'
	struct_or_union_specifier : struct_or_union . IDENTIFIER
	struct_or_union_specifier : struct_or_union . IDENTIFIER '{' struct_declaration_list '}'

	'{'  shift 27
	IDENTIFIER  shift 28


state 15
	translation_unit : external_declaration .  (167)

	.  reduce 167


state 16
	external_declaration : function_definition .  (169)

	.  reduce 169


state 17
	translation_unit : translation_unit external_declaration .  (168)

	.  reduce 168


state 18
	direct_declarator : '(' . declarator ')'

	'('  shift 18
	'*'  shift 19
	IDENTIFIER  shift 20

	declarator  goto 29
	direct_declarator  goto 24
	pointer  goto 25


state 19
	pointer : '*' .  (106)
	pointer : '*' . pointer

	'*'  shift 19
	.  reduce 106

	pointer  goto 30


state 20
	direct_declarator : IDENTIFIER .  (98)

	.  reduce 98


state 21
	init_declarator_list : init_declarator_list . ',' init_declarator
	declaration : declaration_specifiers init_declarator_list . ';'

	','  shift 31
	';'  shift 32


state 22
	init_declarator_list : init_declarator .  (70)

	.  reduce 70


state 23
	init_declarator : declarator . '=' initializer
	init_declarator : declarator .  (72)
	function_definition : declaration_specifiers declarator . declaration_list compound_statement
	function_definition : declaration_specifiers declarator . compound_statement

	'='  shift 33
	'{'  shift 34
	TYPE_NAME  shift 1
	CHAR  shift 2
	INT  shift 3
	DOUBLE  shift 4
	VOID  shift 5
	BOOL  shift 6
	STRUCT  shift 7
	UNION  shift 8
	.  reduce 72

	declaration_specifiers  goto 35
	declaration  goto 36
	type_specifier  goto 12
	struct_or_union_specifier  goto 13
	struct_or_union  goto 14
	compound_statement  goto 37
	declaration_list  goto 38


state 24
	direct_declarator : direct_declarator . '[' '*' ']'
	direct_declarator : direct_declarator . '[' assignment_expression ']'
	direct_declarator : direct_declarator . '(' parameter_type_list ')'
	direct_declarator : direct_declarator . '(' ')'
	direct_declarator : direct_declarator . '(' identifier_list ')'
	declarator : direct_declarator .  (97)
	direct_declarator : direct_declarator . '[' ']'

	'('  shift 39
	'['  shift 40
	.  reduce 97


state 25
	declarator : pointer . direct_declarator

	'('  shift 18
	IDENTIFIER  shift 20

	direct_declarator  goto 41


state 26
	declaration_specifiers : type_specifier declaration_specifiers .  (69)

	.  reduce 69


state 27
	struct_or_union_specifier : struct_or_union '{' . struct_declaration_list '}'

	TYPE_NAME  shift 1
	CHAR  shift 2
	INT  shift 3
	DOUBLE  shift 4
	VOID  shift 5
	BOOL  shift 6
	STRUCT  shift 7
	UNION  shift 8

	type_specifier  goto 42
	struct_or_union_specifier  goto 13
	struct_declaration  goto 43
	struct_or_union  goto 14
	struct_declaration_list  goto 44
	specifier_qualifier_list  goto 45


state 28
	struct_or_union_specifier : struct_or_union IDENTIFIER .  (83)
	struct_or_union_specifier : struct_or_union IDENTIFIER . '{' struct_declaration_list '}'

	'{'  shift 46
	.  reduce 83


state 29
	direct_declarator : '(' declarator . ')'

	')'  shift 47


state 30
	pointer : '*' pointer .  (107)

	.  reduce 107


state 31
	init_declarator_list : init_declarator_list ',' . init_declarator

	'('  shift 18
	'*'  shift 19
	IDENTIFIER  shift 20

	init_declarator  goto 48
	declarator  goto 49
	direct_declarator  goto 24
	pointer  goto 25


state 32
	declaration : declaration_specifiers init_declarator_list ';' .  (67)

	.  reduce 67


state 33
	init_declarator : declarator '=' . initializer

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'{'  shift 55
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	assignment_expression  goto 64
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76
	initializer  goto 77


state 34
	compound_statement : '{' . '}'
	compound_statement : '{' . block_item_list '}'

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	';'  shift 78
	'{'  shift 34
	'}'  shift 79
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61
	TYPE_NAME  shift 1
	CHAR  shift 2
	INT  shift 3
	DOUBLE  shift 4
	VOID  shift 5
	BOOL  shift 6
	STRUCT  shift 7
	UNION  shift 8
	IF  shift 80
	WHILE  shift 81
	DO  shift 82
	FOR  shift 83
	CONTINUE  shift 84
	BREAK  shift 85
	RETURN  shift 86

	primary_expression  goto 62
	unary_operator  goto 63
	expression  goto 87
	assignment_expression  goto 88
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76
	declaration_specifiers  goto 35
	declaration  goto 89
	type_specifier  goto 12
	struct_or_union_specifier  goto 13
	struct_or_union  goto 14
	iteration_statement  goto 90
	expression_statement  goto 91
	jump_statement  goto 92
	statement  goto 93
	selection_statement  goto 94
	compound_statement  goto 95
	block_item_list  goto 96
	block_item  goto 97


state 35
	declaration : declaration_specifiers . init_declarator_list ';'

	'('  shift 18
	'*'  shift 19
	IDENTIFIER  shift 20

	init_declarator_list  goto 21
	init_declarator  goto 22
	declarator  goto 49
	direct_declarator  goto 24
	pointer  goto 25


state 36
	declaration_list : declaration .  (173)

	.  reduce 173


state 37
	function_definition : declaration_specifiers declarator compound_statement .  (172)

	.  reduce 172


state 38
	function_definition : declaration_specifiers declarator declaration_list . compound_statement
	declaration_list : declaration_list . declaration

	'{'  shift 34
	TYPE_NAME  shift 1
	CHAR  shift 2
	INT  shift 3
	DOUBLE  shift 4
	VOID  shift 5
	BOOL  shift 6
	STRUCT  shift 7
	UNION  shift 8

	declaration_specifiers  goto 35
	declaration  goto 98
	type_specifier  goto 12
	struct_or_union_specifier  goto 13
	struct_or_union  goto 14
	compound_statement  goto 99


state 39
	direct_declarator : direct_declarator '(' . parameter_type_list ')'
	direct_declarator : direct_declarator '(' . ')'
	direct_declarator : direct_declarator '(' . identifier_list ')'

	')'  shift 100
	IDENTIFIER  shift 101
	TYPE_NAME  shift 1
	CHAR  shift 2
	INT  shift 3
	DOUBLE  shift 4
	VOID  shift 5
	BOOL  shift 6
	STRUCT  shift 7
	UNION  shift 8

	declaration_specifiers  goto 102
	type_specifier  goto 12
	struct_or_union_specifier  goto 13
	parameter_declaration  goto 103
	identifier_list  goto 104
	parameter_type_list  goto 105
	parameter_list  goto 106
	struct_or_union  goto 14


state 40
	direct_declarator : direct_declarator '[' . '*' ']'
	direct_declarator : direct_declarator '[' . assignment_expression ']'
	direct_declarator : direct_declarator '[' . ']'

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 107
	'-'  shift 54
	']'  shift 108
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	assignment_expression  goto 109
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76


state 41
	declarator : pointer direct_declarator .  (96)
	direct_declarator : direct_declarator . '[' '*' ']'
	direct_declarator : direct_declarator . '[' assignment_expression ']'
	direct_declarator : direct_declarator . '(' parameter_type_list ')'
	direct_declarator : direct_declarator . '(' ')'
	direct_declarator : direct_declarator . '(' identifier_list ')'
	direct_declarator : direct_declarator . '[' ']'

	'('  shift 39
	'['  shift 40
	.  reduce 96


state 42
	specifier_qualifier_list : type_specifier .  (90)
	specifier_qualifier_list : type_specifier . specifier_qualifier_list

	TYPE_NAME  shift 1
	CHAR  shift 2
	INT  shift 3
	DOUBLE  shift 4
	VOID  shift 5
	BOOL  shift 6
	STRUCT  shift 7
	UNION  shift 8
	.  reduce 90

	type_specifier  goto 42
	struct_or_union_specifier  goto 13
	struct_or_union  goto 14
	specifier_qualifier_list  goto 110


state 43
	struct_declaration_list : struct_declaration .  (86)

	.  reduce 86


state 44
	struct_or_union_specifier : struct_or_union '{' struct_declaration_list . '}'
	struct_declaration_list : struct_declaration_list . struct_declaration

	'}'  shift 111
	TYPE_NAME  shift 1
	CHAR  shift 2
	INT  shift 3
	DOUBLE  shift 4
	VOID  shift 5
	BOOL  shift 6
	STRUCT  shift 7
	UNION  shift 8

	type_specifier  goto 42
	struct_or_union_specifier  goto 13
	struct_declaration  goto 112
	struct_or_union  goto 14
	specifier_qualifier_list  goto 45


state 45
	struct_declaration : specifier_qualifier_list . struct_declarator_list ';'

	'('  shift 18
	'*'  shift 19
	':'  shift 113
	IDENTIFIER  shift 20

	declarator  goto 114
	struct_declarator_list  goto 115
	direct_declarator  goto 24
	struct_declarator  goto 116
	pointer  goto 25


state 46
	struct_or_union_specifier : struct_or_union IDENTIFIER '{' . struct_declaration_list '}'

	TYPE_NAME  shift 1
	CHAR  shift 2
	INT  shift 3
	DOUBLE  shift 4
	VOID  shift 5
	BOOL  shift 6
	STRUCT  shift 7
	UNION  shift 8

	type_specifier  goto 42
	struct_or_union_specifier  goto 13
	struct_declaration  goto 43
	struct_or_union  goto 14
	struct_declaration_list  goto 117
	specifier_qualifier_list  goto 45


state 47
	direct_declarator : '(' declarator ')' .  (99)

	.  reduce 99


state 48
	init_declarator_list : init_declarator_list ',' init_declarator .  (71)

	.  reduce 71


state 49
	init_declarator : declarator . '=' initializer
	init_declarator : declarator .  (72)

	'='  shift 33
	.  reduce 72


state 50
	unary_operator : '!' .  (22)

	.  reduce 22


state 51
	unary_operator : '&' .  (18)

	.  reduce 18


state 52
	primary_expression : '(' . expression ')'

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	expression  goto 118
	assignment_expression  goto 88
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76


state 53
	unary_operator : '*' .  (19)

	.  reduce 19


state 54
	unary_operator : '-' .  (20)

	.  reduce 20


state 55
	initializer : '{' . initializer_list '}'
	initializer : '{' . initializer_list ',' '}'

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'.'  shift 119
	'['  shift 120
	'{'  shift 55
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	assignment_expression  goto 64
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76
	initializer  goto 121
	designation  goto 122
	designator_list  goto 123
	designator  goto 124
	initializer_list  goto 125


state 56
	unary_operator : '~' .  (21)

	.  reduce 21


state 57
	primary_expression : IDENTIFIER .  (1)

	.  reduce 1


state 58
	primary_expression : CONSTANT .  (2)

	.  reduce 2


state 59
	primary_expression : STRING_LITERAL .  (3)

	.  reduce 3


state 60
	unary_expression : INC_OP . unary_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 126


state 61
	unary_expression : DEC_OP . unary_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 127


state 62
	postfix_expression : primary_expression .  (5)

	.  reduce 5


state 63
	unary_expression : unary_operator . unary_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 128


state 64
	initializer : assignment_expression .  (130)

	.  reduce 130


state 65
	postfix_expression : postfix_expression . '[' expression ']'
	postfix_expression : postfix_expression . '(' ')'
	postfix_expression : postfix_expression . '(' argument_expression_list ')'
	postfix_expression : postfix_expression . '.' IDENTIFIER
	postfix_expression : postfix_expression . INC_OP
	postfix_expression : postfix_expression . DEC_OP
	unary_expression : postfix_expression .  (14)

	'('  shift 129
	'.'  shift 130
	'['  shift 131
	INC_OP  shift 132
	DEC_OP  shift 133
	.  reduce 14


state 66
	multiplicative_expression : unary_expression .  (23)
	assignment_expression : unary_expression . assignment_operator assignment_expression

	'='  shift 134
	MUL_ASSIGN  shift 135
	DIV_ASSIGN  shift 136
	MOD_ASSIGN  shift 137
	ADD_ASSIGN  shift 138
	SUB_ASSIGN  shift 139
	LEFT_ASSIGN  shift 140
	RIGHT_ASSIGN  shift 141
	AND_ASSIGN  shift 142
	XOR_ASSIGN  shift 143
	OR_ASSIGN  shift 144
	.  reduce 23

	assignment_operator  goto 145


state 67
	relational_expression : relational_expression . '<' shift_expression
	relational_expression : relational_expression . GE_OP shift_expression
	relational_expression : relational_expression . '>' shift_expression
	equality_expression : relational_expression .  (38)
	relational_expression : relational_expression . LE_OP shift_expression

	'<'  shift 146
	'>'  shift 147
	LE_OP  shift 148
	GE_OP  shift 149
	.  reduce 38


state 68
	additive_expression : additive_expression . '+' multiplicative_expression
	shift_expression : additive_expression .  (30)
	additive_expression : additive_expression . '-' multiplicative_expression

	'+'  shift 150
	'-'  shift 151
	.  reduce 30


state 69
	and_expression : and_expression . '&' equality_expression
	exclusive_or_expression : and_expression .  (43)

	'&'  shift 152
	.  reduce 43


state 70
	equality_expression : equality_expression . NE_OP relational_expression
	and_expression : equality_expression .  (41)
	equality_expression : equality_expression . EQ_OP relational_expression

	EQ_OP  shift 153
	NE_OP  shift 154
	.  reduce 41


state 71
	logical_or_expression : logical_and_expression .  (49)
	logical_and_expression : logical_and_expression . AND_OP inclusive_or_expression

	AND_OP  shift 155
	.  reduce 49


state 72
	inclusive_or_expression : exclusive_or_expression .  (45)
	exclusive_or_expression : exclusive_or_expression . '^' and_expression

	'^'  shift 156
	.  reduce 45


state 73
	relational_expression : shift_expression .  (33)
	shift_expression : shift_expression . LEFT_OP additive_expression
	shift_expression : shift_expression . RIGHT_OP additive_expression

	LEFT_OP  shift 157
	RIGHT_OP  shift 158
	.  reduce 33


state 74
	multiplicative_expression : multiplicative_expression . '/' unary_expression
	multiplicative_expression : multiplicative_expression . '%' unary_expression
	multiplicative_expression : multiplicative_expression . '*' unary_expression
	additive_expression : multiplicative_expression .  (27)

	'%'  shift 159
	'*'  shift 160
	'/'  shift 161
	.  reduce 27


state 75
	inclusive_or_expression : inclusive_or_expression . '|' exclusive_or_expression
	logical_and_expression : inclusive_or_expression .  (47)

	'|'  shift 162
	.  reduce 47


state 76
	logical_or_expression : logical_or_expression . OR_OP logical_and_expression
	assignment_expression : logical_or_expression .  (51)

	OR_OP  shift 163
	.  reduce 51


state 77
	init_declarator : declarator '=' initializer .  (73)

	.  reduce 73


state 78
	expression_statement : ';' .  (153)

	.  reduce 153


state 79
	compound_statement : '{' '}' .  (147)

	.  reduce 147


state 80
	selection_statement : IF . '(' expression ')' statement
	selection_statement : IF . '(' expression ')' statement ELSE statement

	'('  shift 164


state 81
	iteration_statement : WHILE . '(' expression ')' statement

	'('  shift 165


state 82
	iteration_statement : DO . statement WHILE '(' expression ')' ';'

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	';'  shift 78
	'{'  shift 34
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61
	IF  shift 80
	WHILE  shift 81
	DO  shift 82
	FOR  shift 83
	CONTINUE  shift 84
	BREAK  shift 85
	RETURN  shift 86

	primary_expression  goto 62
	unary_operator  goto 63
	expression  goto 87
	assignment_expression  goto 88
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76
	iteration_statement  goto 90
	expression_statement  goto 91
	jump_statement  goto 92
	statement  goto 166
	selection_statement  goto 94
	compound_statement  goto 95


state 83
	iteration_statement : FOR . '(' expression_statement expression_statement ')' statement
	iteration_statement : FOR . '(' expression_statement expression_statement expression ')' statement
	iteration_statement : FOR . '(' declaration expression_statement ')' statement
	iteration_statement : FOR . '(' declaration expression_statement expression ')' statement

	'('  shift 167


state 84
	jump_statement : CONTINUE . ';'

	';'  shift 168


state 85
	jump_statement : BREAK . ';'

	';'  shift 169


state 86
	jump_statement : RETURN . expression ';'
	jump_statement : RETURN . ';'

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	';'  shift 170
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	expression  goto 171
	assignment_expression  goto 88
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76


state 87
	expression : expression . ',' assignment_expression
	expression_statement : expression . ';'

	','  shift 172
	';'  shift 173


state 88
	expression : assignment_expression .  (64)

	.  reduce 64


state 89
	block_item : declaration .  (151)

	.  reduce 151


state 90
	statement : iteration_statement .  (145)

	.  reduce 145


state 91
	statement : expression_statement .  (143)

	.  reduce 143


state 92
	statement : jump_statement .  (146)

	.  reduce 146


state 93
	block_item : statement .  (152)

	.  reduce 152


state 94
	statement : selection_statement .  (144)

	.  reduce 144


state 95
	statement : compound_statement .  (142)

	.  reduce 142


state 96
	block_item_list : block_item_list . block_item
	compound_statement : '{' block_item_list . '}'

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	';'  shift 78
	'{'  shift 34
	'}'  shift 174
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61
	TYPE_NAME  shift 1
	CHAR  shift 2
	INT  shift 3
	DOUBLE  shift 4
	VOID  shift 5
	BOOL  shift 6
	STRUCT  shift 7
	UNION  shift 8
	IF  shift 80
	WHILE  shift 81
	DO  shift 82
	FOR  shift 83
	CONTINUE  shift 84
	BREAK  shift 85
	RETURN  shift 86

	primary_expression  goto 62
	unary_operator  goto 63
	expression  goto 87
	assignment_expression  goto 88
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76
	declaration_specifiers  goto 35
	declaration  goto 89
	type_specifier  goto 12
	struct_or_union_specifier  goto 13
	struct_or_union  goto 14
	iteration_statement  goto 90
	expression_statement  goto 91
	jump_statement  goto 92
	statement  goto 93
	selection_statement  goto 94
	compound_statement  goto 95
	block_item  goto 175


state 97
	block_item_list : block_item .  (149)

	.  reduce 149


state 98
	declaration_list : declaration_list declaration .  (174)

	.  reduce 174


state 99
	function_definition : declaration_specifiers declarator declaration_list compound_statement .  (171)

	.  reduce 171


state 100
	direct_declarator : direct_declarator '(' ')' .  (105)

	.  reduce 105


state 101
	identifier_list : IDENTIFIER .  (114)

	.  reduce 114


state 102
	parameter_declaration : declaration_specifiers . abstract_declarator
	parameter_declaration : declaration_specifiers . declarator
	parameter_declaration : declaration_specifiers .  (113)

	'('  shift 176
	'*'  shift 19
	'['  shift 177
	IDENTIFIER  shift 20
	.  reduce 113

	declarator  goto 178
	abstract_declarator  goto 179
	direct_declarator  goto 24
	pointer  goto 180
	direct_abstract_declarator  goto 181


state 103
	parameter_list : parameter_declaration .  (109)

	.  reduce 109


state 104
	identifier_list : identifier_list . ',' IDENTIFIER
	direct_declarator : direct_declarator '(' identifier_list . ')'

	')'  shift 182
	','  shift 183


state 105
	direct_declarator : direct_declarator '(' parameter_type_list . ')'

	')'  shift 184


state 106
	parameter_list : parameter_list . ',' parameter_declaration
	parameter_type_list : parameter_list .  (108)

	','  shift 185
	.  reduce 108


state 107
	unary_operator : '*' .  (19)
	direct_declarator : direct_declarator '[' '*' . ']'

	']'  shift 186
	.  reduce 19


state 108
	direct_declarator : direct_declarator '[' ']' .  (102)

	.  reduce 102


state 109
	direct_declarator : direct_declarator '[' assignment_expression . ']'

	']'  shift 187


state 110
	specifier_qualifier_list : type_specifier specifier_qualifier_list .  (89)

	.  reduce 89


state 111
	struct_or_union_specifier : struct_or_union '{' struct_declaration_list '}' .  (82)

	.  reduce 82


state 112
	struct_declaration_list : struct_declaration_list struct_declaration .  (87)

	.  reduce 87


state 113
	struct_declarator : ':' . constant_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 188
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 189
	constant_expression  goto 190


state 114
	struct_declarator : declarator .  (93)
	struct_declarator : declarator . ':' constant_expression

	':'  shift 191
	.  reduce 93


state 115
	struct_declaration : specifier_qualifier_list struct_declarator_list . ';'
	struct_declarator_list : struct_declarator_list . ',' struct_declarator

	','  shift 192
	';'  shift 193


state 116
	struct_declarator_list : struct_declarator .  (91)

	.  reduce 91


state 117
	struct_or_union_specifier : struct_or_union IDENTIFIER '{' struct_declaration_list . '}'
	struct_declaration_list : struct_declaration_list . struct_declaration

	'}'  shift 194
	TYPE_NAME  shift 1
	CHAR  shift 2
	INT  shift 3
	DOUBLE  shift 4
	VOID  shift 5
	BOOL  shift 6
	STRUCT  shift 7
	UNION  shift 8

	type_specifier  goto 42
	struct_or_union_specifier  goto 13
	struct_declaration  goto 112
	struct_or_union  goto 14
	specifier_qualifier_list  goto 45


state 118
	primary_expression : '(' expression . ')'
	expression : expression . ',' assignment_expression

	')'  shift 195
	','  shift 172


state 119
	designator : '.' . IDENTIFIER

	IDENTIFIER  shift 196


state 120
	designator : '[' . constant_expression ']'

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 188
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 189
	constant_expression  goto 197


state 121
	initializer_list : initializer .  (133)

	.  reduce 133


state 122
	initializer_list : designation . initializer

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'{'  shift 55
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	assignment_expression  goto 64
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76
	initializer  goto 198


state 123
	designation : designator_list . '='
	designator_list : designator_list . designator

	'.'  shift 119
	'='  shift 199
	'['  shift 120

	designator  goto 200


state 124
	designator_list : designator .  (138)

	.  reduce 138


state 125
	initializer : '{' initializer_list . '}'
	initializer_list : initializer_list . ',' designation initializer
	initializer_list : initializer_list . ',' initializer
	initializer : '{' initializer_list . ',' '}'

	','  shift 201
	'}'  shift 202


state 126
	unary_expression : INC_OP unary_expression .  (15)

	.  reduce 15


state 127
	unary_expression : DEC_OP unary_expression .  (16)

	.  reduce 16


state 128
	unary_expression : unary_operator unary_expression .  (17)

	.  reduce 17


state 129
	postfix_expression : postfix_expression '(' . ')'
	postfix_expression : postfix_expression '(' . argument_expression_list ')'

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	')'  shift 203
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	argument_expression_list  goto 204
	assignment_expression  goto 205
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76


state 130
	postfix_expression : postfix_expression '.' . IDENTIFIER

	IDENTIFIER  shift 206


state 131
	postfix_expression : postfix_expression '[' . expression ']'

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	expression  goto 207
	assignment_expression  goto 88
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76


state 132
	postfix_expression : postfix_expression INC_OP .  (10)

	.  reduce 10


state 133
	postfix_expression : postfix_expression DEC_OP .  (11)

	.  reduce 11


state 134
	assignment_operator : '=' .  (53)

	.  reduce 53


state 135
	assignment_operator : MUL_ASSIGN .  (54)

	.  reduce 54


state 136
	assignment_operator : DIV_ASSIGN .  (55)

	.  reduce 55


state 137
	assignment_operator : MOD_ASSIGN .  (56)

	.  reduce 56


state 138
	assignment_operator : ADD_ASSIGN .  (57)

	.  reduce 57


state 139
	assignment_operator : SUB_ASSIGN .  (58)

	.  reduce 58


state 140
	assignment_operator : LEFT_ASSIGN .  (59)

	.  reduce 59


state 141
	assignment_operator : RIGHT_ASSIGN .  (60)

	.  reduce 60


state 142
	assignment_operator : AND_ASSIGN .  (61)

	.  reduce 61


state 143
	assignment_operator : XOR_ASSIGN .  (62)

	.  reduce 62


state 144
	assignment_operator : OR_ASSIGN .  (63)

	.  reduce 63


state 145
	assignment_expression : unary_expression assignment_operator . assignment_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	assignment_expression  goto 208
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76


state 146
	relational_expression : relational_expression '<' . shift_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 188
	additive_expression  goto 68
	shift_expression  goto 209
	multiplicative_expression  goto 74


state 147
	relational_expression : relational_expression '>' . shift_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 188
	additive_expression  goto 68
	shift_expression  goto 210
	multiplicative_expression  goto 74


state 148
	relational_expression : relational_expression LE_OP . shift_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 188
	additive_expression  goto 68
	shift_expression  goto 211
	multiplicative_expression  goto 74


state 149
	relational_expression : relational_expression GE_OP . shift_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 188
	additive_expression  goto 68
	shift_expression  goto 212
	multiplicative_expression  goto 74


state 150
	additive_expression : additive_expression '+' . multiplicative_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 188
	multiplicative_expression  goto 213


state 151
	additive_expression : additive_expression '-' . multiplicative_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 188
	multiplicative_expression  goto 214


state 152
	and_expression : and_expression '&' . equality_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 188
	relational_expression  goto 67
	additive_expression  goto 68
	equality_expression  goto 215
	shift_expression  goto 73
	multiplicative_expression  goto 74


state 153
	equality_expression : equality_expression EQ_OP . relational_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 188
	relational_expression  goto 216
	additive_expression  goto 68
	shift_expression  goto 73
	multiplicative_expression  goto 74


state 154
	equality_expression : equality_expression NE_OP . relational_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 188
	relational_expression  goto 217
	additive_expression  goto 68
	shift_expression  goto 73
	multiplicative_expression  goto 74


state 155
	logical_and_expression : logical_and_expression AND_OP . inclusive_or_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 188
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 218


state 156
	exclusive_or_expression : exclusive_or_expression '^' . and_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 188
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 219
	equality_expression  goto 70
	shift_expression  goto 73
	multiplicative_expression  goto 74


state 157
	shift_expression : shift_expression LEFT_OP . additive_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 188
	additive_expression  goto 220
	multiplicative_expression  goto 74


state 158
	shift_expression : shift_expression RIGHT_OP . additive_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 188
	additive_expression  goto 221
	multiplicative_expression  goto 74


state 159
	multiplicative_expression : multiplicative_expression '%' . unary_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 222


state 160
	multiplicative_expression : multiplicative_expression '*' . unary_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 223


state 161
	multiplicative_expression : multiplicative_expression '/' . unary_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 224


state 162
	inclusive_or_expression : inclusive_or_expression '|' . exclusive_or_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 188
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	exclusive_or_expression  goto 225
	shift_expression  goto 73
	multiplicative_expression  goto 74


state 163
	logical_or_expression : logical_or_expression OR_OP . logical_and_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 188
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 226
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75


state 164
	selection_statement : IF '(' . expression ')' statement
	selection_statement : IF '(' . expression ')' statement ELSE statement

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	expression  goto 227
	assignment_expression  goto 88
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76


state 165
	iteration_statement : WHILE '(' . expression ')' statement

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	expression  goto 228
	assignment_expression  goto 88
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76


state 166
	iteration_statement : DO statement . WHILE '(' expression ')' ';'

	WHILE  shift 229


state 167
	iteration_statement : FOR '(' . expression_statement expression_statement ')' statement
	iteration_statement : FOR '(' . expression_statement expression_statement expression ')' statement
	iteration_statement : FOR '(' . declaration expression_statement ')' statement
	iteration_statement : FOR '(' . declaration expression_statement expression ')' statement

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	';'  shift 78
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61
	TYPE_NAME  shift 1
	CHAR  shift 2
	INT  shift 3
	DOUBLE  shift 4
	VOID  shift 5
	BOOL  shift 6
	STRUCT  shift 7
	UNION  shift 8

	primary_expression  goto 62
	unary_operator  goto 63
	expression  goto 87
	assignment_expression  goto 88
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76
	declaration_specifiers  goto 35
	declaration  goto 230
	type_specifier  goto 12
	struct_or_union_specifier  goto 13
	struct_or_union  goto 14
	expression_statement  goto 231


state 168
	jump_statement : CONTINUE ';' .  (163)

	.  reduce 163


state 169
	jump_statement : BREAK ';' .  (164)

	.  reduce 164


state 170
	jump_statement : RETURN ';' .  (165)

	.  reduce 165


state 171
	expression : expression . ',' assignment_expression
	jump_statement : RETURN expression . ';'

	','  shift 172
	';'  shift 232


state 172
	expression : expression ',' . assignment_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	assignment_expression  goto 233
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76


state 173
	expression_statement : expression ';' .  (154)

	.  reduce 154


state 174
	compound_statement : '{' block_item_list '}' .  (148)

	.  reduce 148


state 175
	block_item_list : block_item_list block_item .  (150)

	.  reduce 150


state 176
	direct_abstract_declarator : '(' . abstract_declarator ')'
	direct_declarator : '(' . declarator ')'
	direct_abstract_declarator : '(' . ')'
	direct_abstract_declarator : '(' . parameter_type_list ')'

	'('  shift 176
	')'  shift 234
	'*'  shift 19
	'['  shift 177
	IDENTIFIER  shift 20
	TYPE_NAME  shift 1
	CHAR  shift 2
	INT  shift 3
	DOUBLE  shift 4
	VOID  shift 5
	BOOL  shift 6
	STRUCT  shift 7
	UNION  shift 8

	declaration_specifiers  goto 102
	type_specifier  goto 12
	declarator  goto 29
	struct_or_union_specifier  goto 13
	parameter_declaration  goto 103
	abstract_declarator  goto 235
	direct_declarator  goto 24
	parameter_type_list  goto 236
	parameter_list  goto 106
	struct_or_union  goto 14
	pointer  goto 180
	direct_abstract_declarator  goto 181


state 177
	direct_abstract_declarator : '[' . ']'
	direct_abstract_declarator : '[' . assignment_expression ']'
	direct_abstract_declarator : '[' . '*' ']'

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 237
	'-'  shift 54
	']'  shift 238
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	assignment_expression  goto 239
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76


state 178
	parameter_declaration : declaration_specifiers declarator .  (111)

	.  reduce 111


state 179
	parameter_declaration : declaration_specifiers abstract_declarator .  (112)

	.  reduce 112


state 180
	declarator : pointer . direct_declarator
	abstract_declarator : pointer .  (116)
	abstract_declarator : pointer . direct_abstract_declarator

	'('  shift 176
	'['  shift 177
	IDENTIFIER  shift 20
	.  reduce 116

	direct_declarator  goto 41
	direct_abstract_declarator  goto 240


state 181
	abstract_declarator : direct_abstract_declarator .  (117)
	direct_abstract_declarator : direct_abstract_declarator . '[' ']'
	direct_abstract_declarator : direct_abstract_declarator . '[' assignment_expression ']'
	direct_abstract_declarator : direct_abstract_declarator . '[' '*' ']'
	direct_abstract_declarator : direct_abstract_declarator . '(' ')'
	direct_abstract_declarator : direct_abstract_declarator . '(' parameter_type_list ')'

	'('  shift 241
	'['  shift 242
	.  reduce 117


state 182
	direct_declarator : direct_declarator '(' identifier_list ')' .  (104)

	.  reduce 104


state 183
	identifier_list : identifier_list ',' . IDENTIFIER

	IDENTIFIER  shift 243


state 184
	direct_declarator : direct_declarator '(' parameter_type_list ')' .  (103)

	.  reduce 103


state 185
	parameter_list : parameter_list ',' . parameter_declaration

	TYPE_NAME  shift 1
	CHAR  shift 2
	INT  shift 3
	DOUBLE  shift 4
	VOID  shift 5
	BOOL  shift 6
	STRUCT  shift 7
	UNION  shift 8

	declaration_specifiers  goto 102
	type_specifier  goto 12
	struct_or_union_specifier  goto 13
	parameter_declaration  goto 244
	struct_or_union  goto 14


state 186
	direct_declarator : direct_declarator '[' '*' ']' .  (101)

	.  reduce 101


state 187
	direct_declarator : direct_declarator '[' assignment_expression ']' .  (100)

	.  reduce 100


state 188
	multiplicative_expression : unary_expression .  (23)

	.  reduce 23


state 189
	logical_or_expression : logical_or_expression . OR_OP logical_and_expression
	constant_expression : logical_or_expression .  (66)

	OR_OP  shift 163
	.  reduce 66


state 190
	struct_declarator : ':' constant_expression .  (94)

	.  reduce 94


state 191
	struct_declarator : declarator ':' . constant_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	postfix_expression  goto 65
	unary_expression  goto 188
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 189
	constant_expression  goto 245


state 192
	struct_declarator_list : struct_declarator_list ',' . struct_declarator

	'('  shift 18
	'*'  shift 19
	':'  shift 113
	IDENTIFIER  shift 20

	declarator  goto 114
	direct_declarator  goto 24
	struct_declarator  goto 246
	pointer  goto 25


state 193
	struct_declaration : specifier_qualifier_list struct_declarator_list ';' .  (88)

	.  reduce 88


state 194
	struct_or_union_specifier : struct_or_union IDENTIFIER '{' struct_declaration_list '}' .  (81)

	.  reduce 81


state 195
	primary_expression : '(' expression ')' .  (4)

	.  reduce 4


state 196
	designator : '.' IDENTIFIER .  (141)

	.  reduce 141


state 197
	designator : '[' constant_expression . ']'

	']'  shift 247


state 198
	initializer_list : designation initializer .  (134)

	.  reduce 134


state 199
	designation : designator_list '=' .  (137)

	.  reduce 137


state 200
	designator_list : designator_list designator .  (139)

	.  reduce 139


state 201
	initializer_list : initializer_list ',' . designation initializer
	initializer_list : initializer_list ',' . initializer
	initializer : '{' initializer_list ',' . '}'

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'.'  shift 119
	'['  shift 120
	'{'  shift 55
	'}'  shift 248
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	assignment_expression  goto 64
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76
	initializer  goto 249
	designation  goto 250
	designator_list  goto 123
	designator  goto 124


state 202
	initializer : '{' initializer_list '}' .  (131)

	.  reduce 131


state 203
	postfix_expression : postfix_expression '(' ')' .  (7)

	.  reduce 7


state 204
	postfix_expression : postfix_expression '(' argument_expression_list . ')'
	argument_expression_list : argument_expression_list . ',' assignment_expression

	')'  shift 251
	','  shift 252


state 205
	argument_expression_list : assignment_expression .  (12)

	.  reduce 12


state 206
	postfix_expression : postfix_expression '.' IDENTIFIER .  (9)

	.  reduce 9


state 207
	postfix_expression : postfix_expression '[' expression . ']'
	expression : expression . ',' assignment_expression

	','  shift 172
	']'  shift 253


state 208
	assignment_expression : unary_expression assignment_operator assignment_expression .  (52)

	.  reduce 52


state 209
	relational_expression : relational_expression '<' shift_expression .  (34)
	shift_expression : shift_expression . LEFT_OP additive_expression
	shift_expression : shift_expression . RIGHT_OP additive_expression

	LEFT_OP  shift 157
	RIGHT_OP  shift 158
	.  reduce 34


state 210
	relational_expression : relational_expression '>' shift_expression .  (35)
	shift_expression : shift_expression . LEFT_OP additive_expression
	shift_expression : shift_expression . RIGHT_OP additive_expression

	LEFT_OP  shift 157
	RIGHT_OP  shift 158
	.  reduce 35


state 211
	shift_expression : shift_expression . LEFT_OP additive_expression
	relational_expression : relational_expression LE_OP shift_expression .  (36)
	shift_expression : shift_expression . RIGHT_OP additive_expression

	LEFT_OP  shift 157
	RIGHT_OP  shift 158
	.  reduce 36


state 212
	relational_expression : relational_expression GE_OP shift_expression .  (37)
	shift_expression : shift_expression . LEFT_OP additive_expression
	shift_expression : shift_expression . RIGHT_OP additive_expression

	LEFT_OP  shift 157
	RIGHT_OP  shift 158
	.  reduce 37


state 213
	multiplicative_expression : multiplicative_expression . '/' unary_expression
	multiplicative_expression : multiplicative_expression . '%' unary_expression
	multiplicative_expression : multiplicative_expression . '*' unary_expression
	additive_expression : additive_expression '+' multiplicative_expression .  (28)

	'%'  shift 159
	'*'  shift 160
	'/'  shift 161
	.  reduce 28


state 214
	multiplicative_expression : multiplicative_expression . '/' unary_expression
	multiplicative_expression : multiplicative_expression . '%' unary_expression
	multiplicative_expression : multiplicative_expression . '*' unary_expression
	additive_expression : additive_expression '-' multiplicative_expression .  (29)

	'%'  shift 159
	'*'  shift 160
	'/'  shift 161
	.  reduce 29


state 215
	and_expression : and_expression '&' equality_expression .  (42)
	equality_expression : equality_expression . NE_OP relational_expression
	equality_expression : equality_expression . EQ_OP relational_expression

	EQ_OP  shift 153
	NE_OP  shift 154
	.  reduce 42


state 216
	relational_expression : relational_expression . '<' shift_expression
	relational_expression : relational_expression . GE_OP shift_expression
	relational_expression : relational_expression . '>' shift_expression
	relational_expression : relational_expression . LE_OP shift_expression
	equality_expression : equality_expression EQ_OP relational_expression .  (39)

	'<'  shift 146
	'>'  shift 147
	LE_OP  shift 148
	GE_OP  shift 149
	.  reduce 39


state 217
	relational_expression : relational_expression . '<' shift_expression
	relational_expression : relational_expression . GE_OP shift_expression
	relational_expression : relational_expression . '>' shift_expression
	equality_expression : equality_expression NE_OP relational_expression .  (40)
	relational_expression : relational_expression . LE_OP shift_expression

	'<'  shift 146
	'>'  shift 147
	LE_OP  shift 148
	GE_OP  shift 149
	.  reduce 40


state 218
	inclusive_or_expression : inclusive_or_expression . '|' exclusive_or_expression
	logical_and_expression : logical_and_expression AND_OP inclusive_or_expression .  (48)

	'|'  shift 162
	.  reduce 48


state 219
	and_expression : and_expression . '&' equality_expression
	exclusive_or_expression : exclusive_or_expression '^' and_expression .  (44)

	'&'  shift 152
	.  reduce 44


state 220
	additive_expression : additive_expression . '+' multiplicative_expression
	shift_expression : shift_expression LEFT_OP additive_expression .  (31)
	additive_expression : additive_expression . '-' multiplicative_expression

	'+'  shift 150
	'-'  shift 151
	.  reduce 31


state 221
	additive_expression : additive_expression . '+' multiplicative_expression
	shift_expression : shift_expression RIGHT_OP additive_expression .  (32)
	additive_expression : additive_expression . '-' multiplicative_expression

	'+'  shift 150
	'-'  shift 151
	.  reduce 32


state 222
	multiplicative_expression : multiplicative_expression '%' unary_expression .  (26)

	.  reduce 26


state 223
	multiplicative_expression : multiplicative_expression '*' unary_expression .  (24)

	.  reduce 24


state 224
	multiplicative_expression : multiplicative_expression '/' unary_expression .  (25)

	.  reduce 25


state 225
	inclusive_or_expression : inclusive_or_expression '|' exclusive_or_expression .  (46)
	exclusive_or_expression : exclusive_or_expression . '^' and_expression

	'^'  shift 156
	.  reduce 46


state 226
	logical_and_expression : logical_and_expression . AND_OP inclusive_or_expression
	logical_or_expression : logical_or_expression OR_OP logical_and_expression .  (50)

	AND_OP  shift 155
	.  reduce 50


state 227
	expression : expression . ',' assignment_expression
	selection_statement : IF '(' expression . ')' statement
	selection_statement : IF '(' expression . ')' statement ELSE statement

	')'  shift 254
	','  shift 172


state 228
	expression : expression . ',' assignment_expression
	iteration_statement : WHILE '(' expression . ')' statement

	')'  shift 255
	','  shift 172


state 229
	iteration_statement : DO statement WHILE . '(' expression ')' ';'

	'('  shift 256


state 230
	iteration_statement : FOR '(' declaration . expression_statement ')' statement
	iteration_statement : FOR '(' declaration . expression_statement expression ')' statement

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	';'  shift 78
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	expression  goto 87
	assignment_expression  goto 88
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76
	expression_statement  goto 257


state 231
	iteration_statement : FOR '(' expression_statement . expression_statement ')' statement
	iteration_statement : FOR '(' expression_statement . expression_statement expression ')' statement

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	';'  shift 78
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	expression  goto 87
	assignment_expression  goto 88
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76
	expression_statement  goto 258


state 232
	jump_statement : RETURN expression ';' .  (166)

	.  reduce 166


state 233
	expression : expression ',' assignment_expression .  (65)

	.  reduce 65


state 234
	direct_abstract_declarator : '(' ')' .  (126)

	.  reduce 126


state 235
	direct_abstract_declarator : '(' abstract_declarator . ')'

	')'  shift 259


state 236
	direct_abstract_declarator : '(' parameter_type_list . ')'

	')'  shift 260


state 237
	unary_operator : '*' .  (19)
	direct_abstract_declarator : '[' '*' . ']'

	']'  shift 261
	.  reduce 19


state 238
	direct_abstract_declarator : '[' ']' .  (120)

	.  reduce 120


state 239
	direct_abstract_declarator : '[' assignment_expression . ']'

	']'  shift 262


state 240
	abstract_declarator : pointer direct_abstract_declarator .  (118)
	direct_abstract_declarator : direct_abstract_declarator . '[' ']'
	direct_abstract_declarator : direct_abstract_declarator . '[' assignment_expression ']'
	direct_abstract_declarator : direct_abstract_declarator . '[' '*' ']'
	direct_abstract_declarator : direct_abstract_declarator . '(' ')'
	direct_abstract_declarator : direct_abstract_declarator . '(' parameter_type_list ')'

	'('  shift 241
	'['  shift 242
	.  reduce 118


state 241
	direct_abstract_declarator : direct_abstract_declarator '(' . ')'
	direct_abstract_declarator : direct_abstract_declarator '(' . parameter_type_list ')'

	')'  shift 263
	TYPE_NAME  shift 1
	CHAR  shift 2
	INT  shift 3
	DOUBLE  shift 4
	VOID  shift 5
	BOOL  shift 6
	STRUCT  shift 7
	UNION  shift 8

	declaration_specifiers  goto 102
	type_specifier  goto 12
	struct_or_union_specifier  goto 13
	parameter_declaration  goto 103
	parameter_type_list  goto 264
	parameter_list  goto 106
	struct_or_union  goto 14


state 242
	direct_abstract_declarator : direct_abstract_declarator '[' . ']'
	direct_abstract_declarator : direct_abstract_declarator '[' . assignment_expression ']'
	direct_abstract_declarator : direct_abstract_declarator '[' . '*' ']'

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 265
	'-'  shift 54
	']'  shift 266
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	assignment_expression  goto 267
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76


state 243
	identifier_list : identifier_list ',' IDENTIFIER .  (115)

	.  reduce 115


state 244
	parameter_list : parameter_list ',' parameter_declaration .  (110)

	.  reduce 110


state 245
	struct_declarator : declarator ':' constant_expression .  (95)

	.  reduce 95


state 246
	struct_declarator_list : struct_declarator_list ',' struct_declarator .  (92)

	.  reduce 92


state 247
	designator : '[' constant_expression ']' .  (140)

	.  reduce 140


state 248
	initializer : '{' initializer_list ',' '}' .  (132)

	.  reduce 132


state 249
	initializer_list : initializer_list ',' initializer .  (135)

	.  reduce 135


state 250
	initializer_list : initializer_list ',' designation . initializer

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'{'  shift 55
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	assignment_expression  goto 64
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76
	initializer  goto 268


state 251
	postfix_expression : postfix_expression '(' argument_expression_list ')' .  (8)

	.  reduce 8


state 252
	argument_expression_list : argument_expression_list ',' . assignment_expression

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	assignment_expression  goto 269
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76


state 253
	postfix_expression : postfix_expression '[' expression ']' .  (6)

	.  reduce 6


state 254
	selection_statement : IF '(' expression ')' . statement
	selection_statement : IF '(' expression ')' . statement ELSE statement

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	';'  shift 78
	'{'  shift 34
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61
	IF  shift 80
	WHILE  shift 81
	DO  shift 82
	FOR  shift 83
	CONTINUE  shift 84
	BREAK  shift 85
	RETURN  shift 86

	primary_expression  goto 62
	unary_operator  goto 63
	expression  goto 87
	assignment_expression  goto 88
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76
	iteration_statement  goto 90
	expression_statement  goto 91
	jump_statement  goto 92
	statement  goto 270
	selection_statement  goto 94
	compound_statement  goto 95


state 255
	iteration_statement : WHILE '(' expression ')' . statement

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	';'  shift 78
	'{'  shift 34
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61
	IF  shift 80
	WHILE  shift 81
	DO  shift 82
	FOR  shift 83
	CONTINUE  shift 84
	BREAK  shift 85
	RETURN  shift 86

	primary_expression  goto 62
	unary_operator  goto 63
	expression  goto 87
	assignment_expression  goto 88
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76
	iteration_statement  goto 90
	expression_statement  goto 91
	jump_statement  goto 92
	statement  goto 271
	selection_statement  goto 94
	compound_statement  goto 95


state 256
	iteration_statement : DO statement WHILE '(' . expression ')' ';'

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	expression  goto 272
	assignment_expression  goto 88
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76


state 257
	iteration_statement : FOR '(' declaration expression_statement . ')' statement
	iteration_statement : FOR '(' declaration expression_statement . expression ')' statement

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	')'  shift 273
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	expression  goto 274
	assignment_expression  goto 88
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76


state 258
	iteration_statement : FOR '(' expression_statement expression_statement . ')' statement
	iteration_statement : FOR '(' expression_statement expression_statement . expression ')' statement

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	')'  shift 275
	'*'  shift 53
	'-'  shift 54
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61

	primary_expression  goto 62
	unary_operator  goto 63
	expression  goto 276
	assignment_expression  goto 88
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76


state 259
	direct_abstract_declarator : '(' abstract_declarator ')' .  (119)

	.  reduce 119


state 260
	direct_abstract_declarator : '(' parameter_type_list ')' .  (127)

	.  reduce 127


state 261
	direct_abstract_declarator : '[' '*' ']' .  (124)

	.  reduce 124


state 262
	direct_abstract_declarator : '[' assignment_expression ']' .  (121)

	.  reduce 121


state 263
	direct_abstract_declarator : direct_abstract_declarator '(' ')' .  (128)

	.  reduce 128


state 264
	direct_abstract_declarator : direct_abstract_declarator '(' parameter_type_list . ')'

	')'  shift 277


state 265
	unary_operator : '*' .  (19)
	direct_abstract_declarator : direct_abstract_declarator '[' '*' . ']'

	']'  shift 278
	.  reduce 19


state 266
	direct_abstract_declarator : direct_abstract_declarator '[' ']' .  (122)

	.  reduce 122


state 267
	direct_abstract_declarator : direct_abstract_declarator '[' assignment_expression . ']'

	']'  shift 279


state 268
	initializer_list : initializer_list ',' designation initializer .  (136)

	.  reduce 136


state 269
	argument_expression_list : argument_expression_list ',' assignment_expression .  (13)

	.  reduce 13


270: shift-reduce conflict (shift 280, reduce 155) on ELSE
state 270
	selection_statement : IF '(' expression ')' statement .  (155)
	selection_statement : IF '(' expression ')' statement . ELSE statement

	ELSE  shift 280
	.  reduce 155


state 271
	iteration_statement : WHILE '(' expression ')' statement .  (157)

	.  reduce 157


state 272
	expression : expression . ',' assignment_expression
	iteration_statement : DO statement WHILE '(' expression . ')' ';'

	')'  shift 281
	','  shift 172


state 273
	iteration_statement : FOR '(' declaration expression_statement ')' . statement

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	';'  shift 78
	'{'  shift 34
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61
	IF  shift 80
	WHILE  shift 81
	DO  shift 82
	FOR  shift 83
	CONTINUE  shift 84
	BREAK  shift 85
	RETURN  shift 86

	primary_expression  goto 62
	unary_operator  goto 63
	expression  goto 87
	assignment_expression  goto 88
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76
	iteration_statement  goto 90
	expression_statement  goto 91
	jump_statement  goto 92
	statement  goto 282
	selection_statement  goto 94
	compound_statement  goto 95


state 274
	expression : expression . ',' assignment_expression
	iteration_statement : FOR '(' declaration expression_statement expression . ')' statement

	')'  shift 283
	','  shift 172


state 275
	iteration_statement : FOR '(' expression_statement expression_statement ')' . statement

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	';'  shift 78
	'{'  shift 34
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61
	IF  shift 80
	WHILE  shift 81
	DO  shift 82
	FOR  shift 83
	CONTINUE  shift 84
	BREAK  shift 85
	RETURN  shift 86

	primary_expression  goto 62
	unary_operator  goto 63
	expression  goto 87
	assignment_expression  goto 88
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76
	iteration_statement  goto 90
	expression_statement  goto 91
	jump_statement  goto 92
	statement  goto 284
	selection_statement  goto 94
	compound_statement  goto 95


state 276
	expression : expression . ',' assignment_expression
	iteration_statement : FOR '(' expression_statement expression_statement expression . ')' statement

	')'  shift 285
	','  shift 172


state 277
	direct_abstract_declarator : direct_abstract_declarator '(' parameter_type_list ')' .  (129)

	.  reduce 129


state 278
	direct_abstract_declarator : direct_abstract_declarator '[' '*' ']' .  (125)

	.  reduce 125


state 279
	direct_abstract_declarator : direct_abstract_declarator '[' assignment_expression ']' .  (123)

	.  reduce 123


state 280
	selection_statement : IF '(' expression ')' statement ELSE . statement

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	';'  shift 78
	'{'  shift 34
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61
	IF  shift 80
	WHILE  shift 81
	DO  shift 82
	FOR  shift 83
	CONTINUE  shift 84
	BREAK  shift 85
	RETURN  shift 86

	primary_expression  goto 62
	unary_operator  goto 63
	expression  goto 87
	assignment_expression  goto 88
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76
	iteration_statement  goto 90
	expression_statement  goto 91
	jump_statement  goto 92
	statement  goto 286
	selection_statement  goto 94
	compound_statement  goto 95


state 281
	iteration_statement : DO statement WHILE '(' expression ')' . ';'

	';'  shift 287


state 282
	iteration_statement : FOR '(' declaration expression_statement ')' statement .  (161)

	.  reduce 161


state 283
	iteration_statement : FOR '(' declaration expression_statement expression ')' . statement

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	';'  shift 78
	'{'  shift 34
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61
	IF  shift 80
	WHILE  shift 81
	DO  shift 82
	FOR  shift 83
	CONTINUE  shift 84
	BREAK  shift 85
	RETURN  shift 86

	primary_expression  goto 62
	unary_operator  goto 63
	expression  goto 87
	assignment_expression  goto 88
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76
	iteration_statement  goto 90
	expression_statement  goto 91
	jump_statement  goto 92
	statement  goto 288
	selection_statement  goto 94
	compound_statement  goto 95


state 284
	iteration_statement : FOR '(' expression_statement expression_statement ')' statement .  (159)

	.  reduce 159


state 285
	iteration_statement : FOR '(' expression_statement expression_statement expression ')' . statement

	'!'  shift 50
	'&'  shift 51
	'('  shift 52
	'*'  shift 53
	'-'  shift 54
	';'  shift 78
	'{'  shift 34
	'~'  shift 56
	IDENTIFIER  shift 57
	CONSTANT  shift 58
	STRING_LITERAL  shift 59
	INC_OP  shift 60
	DEC_OP  shift 61
	IF  shift 80
	WHILE  shift 81
	DO  shift 82
	FOR  shift 83
	CONTINUE  shift 84
	BREAK  shift 85
	RETURN  shift 86

	primary_expression  goto 62
	unary_operator  goto 63
	expression  goto 87
	assignment_expression  goto 88
	postfix_expression  goto 65
	unary_expression  goto 66
	relational_expression  goto 67
	additive_expression  goto 68
	and_expression  goto 69
	equality_expression  goto 70
	logical_and_expression  goto 71
	exclusive_or_expression  goto 72
	shift_expression  goto 73
	multiplicative_expression  goto 74
	inclusive_or_expression  goto 75
	logical_or_expression  goto 76
	iteration_statement  goto 90
	expression_statement  goto 91
	jump_statement  goto 92
	statement  goto 289
	selection_statement  goto 94
	compound_statement  goto 95


state 286
	selection_statement : IF '(' expression ')' statement ELSE statement .  (156)

	.  reduce 156


state 287
	iteration_statement : DO statement WHILE '(' expression ')' ';' .  (158)

	.  reduce 158


state 288
	iteration_statement : FOR '(' declaration expression_statement expression ')' statement .  (162)

	.  reduce 162


state 289
	iteration_statement : FOR '(' expression_statement expression_statement expression ')' statement .  (160)

	.  reduce 160


##############################################################################
# Summary
##############################################################################

State 270 contains 1 shift-reduce conflict(s)


64 token(s), 58 nonterminal(s)
175 grammar rule(s), 290 state(s)


##############################################################################
# End of File
##############################################################################
