#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# define IDEAS_COUNT 100

class Brain
{
	private:
		std::string _ideas[IDEAS_COUNT];

	public:
		Brain();
		Brain(const Brain& obj);
		Brain& operator=(const Brain& obj);
		virtual ~Brain();

		// const std::string& getIdea
};

#endif
