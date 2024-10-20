/* numeral(EXPRESSION) */

M4BUILTIN_HANDLER(numeral){
    uintmax_t res;
    char buf[128];

    res = numeral_convert(M4ARG(1));

    if(!numeral_error){
        sprintf(buf,"%ju", numeral_convert(M4ARG(1)));
        obstack_grow(obs, buf, strlen(buf));
    }
    else{
        M4ERROR((warning_status, 0,
                _("Warning: %s: invalid number component: %s"),
                M4ARG(0), 
                numeral_error));
        free(numeral_error);
        numeral_error = NULL;
    }
}