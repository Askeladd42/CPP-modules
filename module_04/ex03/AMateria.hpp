/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:30:19 by plam              #+#    #+#             */
/*   Updated: 2022/07/29 11:55:30 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIA_HPP__
# define __MATERIA_HPP__

class AMateria
{
	protected:
		[...]
	public:
		AMateria(std::string const & type);
		[...]

	std::string const & getType() const; //Returns the materia type
	
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
#endif