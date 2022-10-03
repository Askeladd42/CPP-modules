/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:37:09 by plam              #+#    #+#             */
/*   Updated: 2022/10/03 12:37:14 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_TPP__
# define __ARRAY_TPP__

template< typename T >
class Array {
	private:
		unsigned int	_size;
		T*				_array;
	public:
		Array<T>( void ) : _size(0), _array(new T[0]) { }
		
		Array<T>( unsigned int n ): _size(n), _array(new T[n]) {
			for (unsigned int i = 0; i < n; i++)
				_array[i] = 0;
		}

		~Array<T>( void ) { delete[] _array }

		Array<T>( Array<T> const &other ): _size(other._size), _array(new T[other._size]) {
			for (unsigned int i = 0; i < other._size; i++)
				this->_array[i] = other._array[i];
		}
		
		Array<T>	&operator=( Array<T> const &other ) {
			if (this != &other) {
				this->_size = other._size;
				if (this->_array)
					delete[] this->_array;
				this->_array = new T[other._size];
				for (unsigned int i = 0; i < other._size; i++)
					this->_array[i] = other._array[i];
			}
			return *this;
		};

		T		&operator[]( unsigned int idx ) {
			if (idx < std::numeric_limits<unsigned int>::min()
			|| idx >= this->m_size)
				throw Array<T>::OutOfBound();
			else
				return this->m_array[idx];
		}
};

#endif