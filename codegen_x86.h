#ifndef __CODEGEN_X86_H__
#define __CODEGEN_X86_H__

#include "tokenizer.h"
#include "parser.h"

#define MAX_LOCAL_VARS 100
#define MAX_GLOBAL_VARS 10000
#define MAX_ENUM_VALUES 10000
#define MAX_FUNCTION_NUM 10000

void init_codegen();
void generate_code(int ast);

#endif