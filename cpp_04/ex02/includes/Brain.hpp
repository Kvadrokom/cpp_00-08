#ifndef BRAIN_H
# define BRAIN_H

# include <string>
# include <iostream>
# include <iomanip>

class Brain
{
private:
	std::string*	ideas;
public:
	Brain(void);
	~Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);

	std::string 	getIdeas(int i) const;
	std::string* 	getIdeas(void) const;
	void			setIdeas(const std::string& line, int i);
};

#endif