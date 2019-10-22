#include <fcntl.h>
#include "ourhdr.h"

void set_f1(int fd, int flag) /* flags are file status flags to turn on */
{
	int val;
	if ((val = fctnl(fd, F_GETFL, 0)) < 0)
		err_sys("fcntl F_FETFL error");

	val |= flags; /* turn on flags */

	if (fctnl(fd, F_SETFL, val) < 0)
		err_sys("fcntl F_SETFL error");
}
