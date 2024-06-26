/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towatana <towatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:36:46 by towatana          #+#    #+#             */
/*   Updated: 2024/05/30 16:36:48 by towatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdlib.h>

int			make_line(char **save, int fd, char **line, int index);
int			make_save(char **save, int fd, int index);
int			handle_save(char **save, int fd, char **line);
int			handle_error(char *buf, char *save);
int			get_next_line(int fd, char **line);
size_t		ft_strlen(char *str);
char		*ft_strdup(char *src);
char		*ft_strnjoin(char *s1, char const *s2, int n);
int			newline_index(char *str);
#endif
