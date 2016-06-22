// backward jump over an initialized variable definition is okay
begin:
int sz = get_size();
if (sz <= 0) {
    goto begin;
}
