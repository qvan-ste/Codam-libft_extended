# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <limits.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;

	while (s[i])
	{
		if (s[i] == (unsigned char) c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (unsigned char) c)
		return ((char *)&s[i]);
	return (0);
}

size_t	ft_strlen(const char *s)
{
	int	i;


	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	while (n)
	{
		*(char *)s = '\0';
		s++;
		n--;
	}
}
char	*ft_strdup(const char *s)
{
	char	*s_dupe;
	int		i;

	i = 0;
	s_dupe = malloc(ft_strlen(s) * sizeof(const char) + 1);
	if (!s_dupe)
		return (NULL);
	while (s[i])
	{
		s_dupe[i] = s[i];
		i++;
	}
	s_dupe[i] = '\0';
	return (s_dupe);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*address;

	address = malloc(count * size);
	if (!address)
		return (NULL);
	ft_bzero(address, count * size);
	return (address);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) || len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub_s = malloc(len * sizeof(const char) + 1);
	if (!sub_s)
		return (NULL);
	while (i < len && s[i])
	{
		sub_s[i] = s[start];
		i++;
		start++;
	}
	sub_s[i] = '\0';
	return (sub_s);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*joined;

	i = 0;
	j = 0;
	joined = malloc(ft_strlen(s1) * sizeof(const char)
			+ ft_strlen(s2) * sizeof(const char) + 1);
	if (!joined)
		return (NULL);
	while (s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		joined[i] = s2[j];
		i++;
		j++;
	}
	joined[i] = '\0';
	return (joined);
}
