/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect2.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faikhan <faikhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 21:24:08 by faikhan           #+#    #+#             */
/*   Updated: 2026/03/30 22:15:26 by faikhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECT2_HPP
#define VECT2_HPP

 #include <iostream>

class vect2{
    private:
        int _x;
        int _y;

    public:
        vect2();
        vect2(int x, int y);
        vect2(vect2 &obj);
        vect2 operator=(vect2 &obj);
        ~vect2();

        
    
};

#endif