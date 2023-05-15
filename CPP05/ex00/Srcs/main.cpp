/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OMI <mcharouh@student.1337.ma>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:36:07 by OMI               #+#    #+#             */
/*   Updated: 2023/05/15 21:47:30 by OMI              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libs/Bureaucrats.hpp"

int main(){
    Bureaucrat Bureaucrat("OMI");

    for (int i = 0; i < 151 ; i++){
        Bureaucrat.Print_B(Bureaucrat);
        Bureaucrat.GradeManip("KEK");
    }

    
}