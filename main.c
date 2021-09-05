#include "libasm.h"

int main()
{
	char	*str;
	char	*str12;
	int		fd;
	char	dest[20] = "amouhtal";
	char	dest1[20] = "amouhtal";
	char	str1[] = "rg";
	// char	str2[] = "rfg";
	char	*s1 = "hello world";

	// str = malloc(sizeof(char) * 5);
	str12 = malloc(sizeof(char) * 5);
	//	############## FT_STRCMP
	// printf("my  : %d\n", ft_strcmp(str1, str2));
	// printf("orig: %d\n",    strcmp(str1, str2));

	//	############## FT_STRCPY
	// printf("dest before: |%s|\n", dest);
	// printf("my  : |%s|\n", ft_strcpy(dest, ""));
	// printf("dest after : |%s|\n", dest);
	
	// printf("dest1 before: |%s|\n", dest1);
	// printf("orig: |%s|\n", strcpy(dest1, ""));
	// printf("dest1 after : |%s|\n", dest1);
	// ############## FT_STRLEN
	// printf("my  : %zu\n", ft_strlen("NULL"));
	// printf("orig: %zu\n", strlen("NULL"));
	// printf("\n");
	// printf("my  : %zu\n", ft_strlen(""));
	// printf("orig: %zu\n", strlen(""));
	// printf("\n");
	// printf("my  : %zu\n", ft_strlen(s1));
	// printf("orig: %zu\n", strlen(s1));
	// printf("\n");
	// printf("my  : %zu\n", ft_strlen("-1"));
	// printf("orig: %zu\n", strlen("-1"));
	// ############## FT_STRDUP
	// printf("ft_strdup  : |%s|\n", ft_strdup("Hello"));
	// printf("strdup: |%s|\n", strdup("Hello"));
	// printf("ft_strdup  : |%s|\n", ft_strdup(""));
	// printf("strdup: |%s|\n", strdup(""));
	// printf("ft_strdup  : |%s|\n", ft_strdup("NULL"));
	// printf("strdup: |%s|\n",  strdup("NULL"));
	//	############## FT_READ
	fd = open("libasm.h", O_RDONLY);
	printf("my  : %d | %s\n", (int)ft_read(fd, str, 5), str);
	printf("orig: %d | %s\n", (int)read(fd, str12, 5), str12);
	// printf("my  : %d | %s\n", (int)ft_read(-1, str, 5), str);
	// printf("orig: %d | %s\n", (int)read(-1, str12, 5), str12);
	// printf("my  : %d | %s\n", (int)ft_read(1, str, 5), str);
	// printf("orig: %d | %s\n", (int)read(1, str12, 5), str12);
	//	############## FT_WRITE
	// printf("my  : %d\n", (int)ft_write(1, "NULL\n", 5));
	// printf("orig: %d\n", (int)write(1, "NULL\n", 5));
	// printf("my  : %d\n", (int)ft_write(1, NULL, 5));
	// printf("orig: %d\n", (int)write(1, NULL, 5));
	// printf("my  : %d\n", (int)ft_write(-1, "akdim\n", 6));
	// printf("orig: %d\n", (int)write(-1, "akdim\n", 6));
}