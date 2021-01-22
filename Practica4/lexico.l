%{
#include<stdio.h> // INCLUSION DE A LIBRERIA PARA REALIZAR PRINTF
%}

DIGITO    			[0-9]

P_RESERVADA "auto"|"break"|"case"|"const"|"continue"|"default"|"do"|"else"|"enum"|"extern"|"for"|"goto"|"if"|"register"|"return"|"signed"|"sizeof"|"static"|"typedef"|"union"|"unsigned"|"volatile"|"while"

TIPO_DATO 			"char"|"int"|"long"|"short"|"float"|"double"|"void"

DIRECTIVAS			"#"[a-zA-Z]+

LIBS				"<"[a-z]+("."[a-zA-Z]+|"")">"

OPERADORES_ARITMETICOS 	("+"|"-"|"*"|"/"|"%")|"="|("+"|"-"|"*"|"/"|"%")"="|"++"|"--"

OPERADORES_COMPARACION 	"<"|">"|">="|"<="|"!="|"=="|"!"|"&&"|"||"

OPERADORES_BIT 		">>"|">>="|"<<"|"<<="|"~"|"&"|"&="|"|"|"|="|"^"|"^="

OPERADORES			{OPERADORES_ARITMETICOS}|{OPERADORES_COMPARACION}|{OPERADORES_BIT}

SEPARADOR 			"{"|"}"|"["|"]"|"("|")"|";"|","

ID       			([a-zA-Z]|"_")([a-zA-Z0-9]|"_")*

NUMEROS 			{DIGITO}+"."{DIGITO}+|{DIGITO}+

SECUENCIAS_ESCAPE 		"\\""\""|"\\""n"

TAB 				"\""t"

CARACTERES_ESPECIALES 		"."|" "|"'"|"#"|"?"|":"|"\\"|"@"

CHARS "'"({SECUENCIAS_ESCAPE}|[a-zA-Z0-9]|{CARACTERES_ESPECIALES}|{SEPARADOR}|{OPERADORES}|{ID}|{P_RESERVADA}|{TIPO_DATO}|{LIBRERIA}|{DIRECTIVAS}|{NUMEROS})*"'"

STRINGS "\""({SECUENCIAS_ESCAPE}|[a-zA-Z0-9]|{CARACTERES_ESPECIALES}|{SEPARADOR}|{OPERADORES}|{ID}|{P_RESERVADA}|{TIPO_DATO}|{LIBRERIA}|{DIRECTIVAS}|{NUMEROS})*"\""

CADENAS {STRINGS}|{CHARS}

COMENTARIOS_MULTIPLES "/""*"+([a-zA-Z0-9]|{CARACTERES_ESPECIALES}|{SEPARADOR}|{OPERADORES}|{ID}|{P_RESERVADA}|{TIPO_DATO}|{CADENAS}|{LIBRERIA}|{DIRECTIVAS}|{NUMEROS}|{SECUENCIAS_ESCAPE})*"*"+"/"

COMENTARIOS_UNALINEA ("/"|"")"*"([a-zA-Z0-9]|{CARACTERES_ESPECIALES}|{SEPARADOR}|{OPERADORES}|{ID}|{P_RESERVADA}|{TIPO_DATO}|{CADENAS}|{LIBRERIA}|{DIRECTIVAS}|{NUMEROS}|{SECUENCIAS_ESCAPE})*

COMENTARIOS {COMENTARIOS_UNALINEA}|{COMENTARIOS_MULTIPLES}


%%

{COMENTARIOS}		{ printf("<comentarios>\n"); }// INSERTA COMENTARIOS
{LIBRERIA}			{ printf("<libreria>\n"); }		// CUANDO SE INSERTA UNA LIBRERIA
{SECUENCIAS_ESCAPE}	{ printf("<secuencia de escape>\n"); }	//UTILIZADO PARA SALTOS
{TIPO_DATO}		{printf("<tipo de dato>");}
{NUMEROS}		{printf("<numero>");}
{CADENAS}		{printf("<strings>");}
{SEPARADOR} 		{printf("<delimitador>"); }
{P_RESERVADA}		{printf("<palabra reservada>");}
{OPERADORES}		{printf("<operador>"); 	}	
{ID}			{printf("<id>");}
{DIRECTIVAS}		{printf("<directiva>");}

%%



