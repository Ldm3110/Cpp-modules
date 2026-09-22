#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <stdint.h>

typedef struct	Data {
	int		n;
	char	c;
	void	*ptr;
}	Data;

class Serializer {
	public:
		static uintptr_t	serialize(Data *ptr);
		static Data				*deserialize(uintptr_t raw);
};

#endif
