#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# define IDEAS_COUNT 100

class Brain
{
	private:

	public:
		std::string _ideas[IDEAS_COUNT];
		Brain();
		Brain(const Brain& obj);
		Brain& operator=(const Brain& obj);
		virtual ~Brain();
};

#endif
