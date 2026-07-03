// CREATION_DATE    : 070226
// TITLE            : c1_logic_org (complete logic organization) core process definition as categorey

//c0 starts with consistent systems and makes no assumptions regarding derivable theorems.
    // 1) Derive theorems using consistant systems
    // 2) Compute interpretations theorems as:
            0) Mathematical hypothesies
            1) Metaphysical hypothesies
            2) Physical hypothesies
            2) Scientific hypothesies
            3) Ethical hypothesies
          
          Using maps of isomorphisms. 
            
//c1 serves the following purposes:
    // 1) Formulation of arguments/states 
    // 2) Production of system(s) where theorem(s) representing the states/conclusions of arguments are derivable while maintaining internal consistancy.
    // 3) Production of a super-systems where both real and virtual state/conclusions are consistantly derivable. Establishing external consistancy for systems refered to by 2. 

#include <stdlib.h>
# define SUM_OF_CARDINALITY_OF_HOMSETS //IMP: Make this dynamic
# define NUMBER_OF_OBJECTS             //IMP: Make this dynamic

# define DYNAMIC_ALLOCATION(type, variable_name) \
    type *variable_name = (type*)malloc(sizeof(type));
    
# define NEW_CATEGORY_OBJECT_CONSTRUCTOR(type, refs) \
    t_category_object   *t_type_category_object_constructor(t_type #alias);

typedef struct s_interview {} t_interview;
typedef struct s_definition {} t_definition;
typedef struct s_implication {} t_implication;
typedef struct s_inference {} t_inferenc;

typedef struct s_definitions {} t_definitions;
typedef struct s_implications {} t_implications;
typedef struct s_inferences {} t_inferences;

typedef struct s_formulation {} t_formulation;
typedef struct s_formula {} t_formula;
typedef struct s_argument {} t_argument;

//This is a new pattern in C, we should do more testing in a compiled environment with pre-processor before proceeding. 
NEW_CATEGORY_OBJECT_CONSTRUCTOR(interview, *);
NEW_CATEGORY_OBJECT_CONSTRUCTOR(definition, *);
NEW_CATEGORY_OBJECT_CONSTRUCTOR(implication, *);
NEW_CATEGORY_OBJECT_CONSTRUCTOR(inference, *);
NEW_CATEGORY_OBJECT_CONSTRUCTOR(definitions, *);
NEW_CATEGORY_OBJECT_CONSTRUCTOR(implications, *);
NEW_CATEGORY_OBJECT_CONSTRUCTOR(inferences, *);

t_formulation *formulate (t_argument *argument);

t_morphism  *morph(t_object *object_0, t_object *object_1) {
    t_morphism *morphism;
    
    DYNAMIC_ALLOCATION(t_morphism, morphism);
}

int main (void) {
    t_category_morphism           **morphisms;
    t_category_object               **objects;
    
    objects = (**t_category_objects)malloc(sizeof(t_category_objects) * NUMBER_OF_OBJECTS);
    objects[0] = new_object()
    morphisms = ( **t_category_morphism )malloc( sizeof(t_category_morphism) * SUM_OF_CARDINALITIES_OF_HOMSETS )
    morphisms[0] = morph (t_interview_ref, t_argument_ref);
    morphisms[1] = morph (t_argument_ref, t_formulation_ref);
    morphisms[2] = morph (t_formulation_ref, s_grammar_ref);
    morphisms[3] = morph (t_grammar_ref, t_formula_ref);
    morphisms[4] = morph (t_generic_formula_set_ref, t_language_ref);       //TODO: implement generics using macros
    morphisms[5] = morph (t_language_ref, t_generic_axiom_set_ref);         //ref indicates one pointer to the type repesented by this allocated structure
    morphisms[6] = morph (t_language_ref, t_generic_inference_set_ref);
  
    return (0);
}
