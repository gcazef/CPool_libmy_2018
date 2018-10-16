#include <criterion/redirect.h>


Test(fct, name, .init = cr_redirect_stdout)
{
    cr_assert_stdout_eq_str();
}
