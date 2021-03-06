/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basictests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoykka <akoykka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:53:23 by skoge             #+#    #+#             */
/*   Updated: 2022/01/17 14:06:13 by akoykka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void)
{
char *dest;
char *destctrl;
int fd;
int fdctrl;
int status;
int statusctrl;

fd = open("basic", O_RDONLY);
fdctrl = open("basic1", O_RDONLY);

statusctrl = ft_get_next_line(fdctrl, destctrl);
status = get_next_line(fd, dest);
printf("gnl:	|%s|\n ctrl_gnl:	|%s|\n", dest, destctrl);

if (strcmp(dest, destctrl) == 0);
	printf("OK");
else
	printf("diff (linep)");

if(strcmp(status, statusctrl) == 0);
	printf("RVAL Ok");
else
	printf("RVAL DIFF");

strdel(dest);
strdel(destctrl);

	int i = 0;
	while (i != 2)
	{
		statusctrl = ft_get_next_line(fdctrl, destctrl);
		status = get_next_line(fd, dest);
		printf("gnl:	|%s|\n ctrl_gnl:	|%s|\n", dest, destctrl);

		if (strcmp(dest, destctrl) == 0);
			printf("OK\n");
		else
			printf("diff (linep)\n");

		if(strcmp(status, statusctrl) == 0);
			printf("RVAL Ok\n");
		else
			printf("RVAL DIFF\n");

		strdel(dest);
		strdel(destctrl);
		++i;
	}

	int i = 0;
	while (statusctrl && status)
	{
		statusctrl = ft_get_next_line(fdctrl, destctrl);
		status = get_next_line(fd, dest);
		printf("gnl:	|%s|\n ctrl_gnl:	|%s|\n", dest, destctrl);

		if (strcmp(dest, destctrl) == 0);
			printf("OK\n");
		else
			printf("diff (linep)\n");

		if(strcmp(status, statusctrl) == 0);
			printf("RVAL Ok\n");
		else
			printf("RVAL DIFF\n");

		strdel(dest);
		strdel(destctrl);
		++i;
	}

system(leaks get_next_line);
return (0);
}