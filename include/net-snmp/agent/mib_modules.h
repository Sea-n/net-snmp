#define DO_INITIALIZE   1
#define DONT_INITIALIZE 0

struct module_init_list {
    char           *module_name;
    struct module_init_list *next;
};

void            add_to_init_list(const char *module_list);
int             should_init(const char *module_name);
void            init_mib_modules(void);
