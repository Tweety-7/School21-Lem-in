//ретернуть будем статус

int check_links(int fd, char *line, )
{
  
}

int	check_room()
{
	char *line;
	int status;

	while (get_next_line(fd, line))
	{
		if (ft_strstr(line, "-") == 0)
			status = check_links(line, fd);
		else if (ft_strcmp(line, "##start") == 0 )
			//пушим в начало листа
		else if (ft_strcmp(line, "##end") == 0 )
			//как то по особому отмечаем
		else if (ft_strncmp(line, "#", 1))
			//ничего не делать    
		else
			//пушим комнвту в конец


	}
	if (status == 1)//а может что б связей не было? типо начало = конец
		return (1);
	else
		return (0);
}
