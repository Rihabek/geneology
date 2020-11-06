#include "base.h"

/**
 * retourne;
 * -1 si t1<t2, 0 si si t1==t2, 1 si t1>t2
 */
int compare(s_base_t t1, s_base_t t2)
{
  if (t1<t2)
  {
    return -1;

  }else if(t1==t2)
  {
    return 0;

  }else if(t1>t2)
  {
    return 1;
  }
}
