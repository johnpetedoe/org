/*
** Write 2 functions:
**      The first function, *producable* , should accept as input:
**          0) a string
**          1) a formal grammar specification
**      The second function, *derivable*, should accept as input:
**          0) a well_formed_formula as a string
**          1) a formal system specification
**          2) a positive integer

** The first function, *producable*, should do the following:
**      1) Parse and validate the string according to the rules of production defined within the formal grammar specification.
**      2) Return an false if the string is not producable within the language defined by the formal grammar specification. 
**      3) Return true if the sting is producable within the language defined by the formal grammar specification.
 
** The second function should do the following:
**       0) Given the rules of inference defined within the formal system,
**          0) Return true if the formula is derivable as a theorem within the system.
**                1) The program is not expected to terminate if the formula is not derivable
**                2) The integer value may be used to paramaterize the search or terminate early.
**                3) The program should not terminate early if the theorem is derivable

**  The function prototype should be defined as follows:
**      bool    producable(char *s, t_grammar *grammar);
**      bool    derivable(char *s, t_formal_system *system, int halting_argument);

**  The grammar specification should conform to the following definition:

**      typedef struct  s_grammar {
**          char        **terminal_symbols;
**          char        **non_terminal_symbols;
**          char        *rules_of_production[2];
**          char        **well_formed_formulae; 
**      }               t_grammar;

**  The formal system specification should conform to the following definitition:

**      typdef struct   t_grammar {
**          char    **axioms;
**          char    *inferences[2];
**          char    ***derivations;
**          char    **theorems;                
**      }               t_grammar;
**
**  The following function prototypes have been provided to assist with the production of tests cases.
*/ 

# include <stdbool.h>
# include <stdlib.h>

typedef struct     s_symbol {
    bool     is_terminal;
    char*    label;
}                 t_symbol;

typedef struct     s_formal_grammar {
    t_symbol**    non_terminal_symbols;
    t_symbol**    terminal_symbols;
    t_rule**      production_rules;
}                 t_formal_grammar;

t_symbol  *new_symbol(bool is_terminal, char *label) { 
    t_symbol  *symbol;

    symbol = (symbol*)malloc(sizeof(t_symbol));
    symbol->is_terminal = is_terminal;
    symbol->label = label;
    return (symbol);
}

t_formal_grammar    *new_grammar(t_symbol **terminal_symbols, t_symbol **non_terminal_symbols, t_rule **production_rules) {
    t_formal_grammar *grammar; 
        
    grammar = (t_grammar*)malloc(sizeof(t_grammar));

    grammar->terminal_symbols = terminal_symbols;
    grammar->non_terminal_symbols = non_terminal_symbols;
    grammar->production_rules = production_rules;

    return (grammar);
}

t_formula **produce_language(int breadth, int depth) {}
    
char **enumerate_symbols_n_to_m(
    char *charset, 
    int n, 
    int m
) {

}

char **enumerate_product_of_two_sets_of_symbols(
    char** symbol_set_0, 
    char** symbol_set_1
) {

}


int main (void) {
    
    t_formal_grammar    **grammars;
    t_formal_system     **systems;

    t_formal_grammar    *grammar_0;
    t_symbol            *ABSTRACTION;
    
    char                **symbols;
    char                *rules[];
    char                **inferences;
    char                **formulae = {
        "01010101",
        "789987",
        "00100",
        "010",
        "AAA",
        "(f_0 {f_0, f_1, f_2, f_3, g_0, g_1, g_2, g_2, g_3, a_0, a_1, a_2, a_3, a_4})"
    };
 
    ABSTRACTION = new_symbol(false, ABSTRACTION); 
    
    grammar_0 = new_formal_grammar({
        //TODO: define, instanciate, pass terminal symbols
    }, {
        ABSTRACTION,
        
    }, {
        //TODO: define, instanciate, pass production rules
    })

    produce_language(grammar);        
    grammars[0] = grammar_0;
    systems[0] = new_formal_system()

    return (0);
}
