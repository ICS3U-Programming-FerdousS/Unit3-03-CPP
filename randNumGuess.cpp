// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: March. 23, 2022
//  This program asks the user for a number 1-9
// then if check if they guessed it right or wrong
// and tell them the right number


#include <iostream>
#include <cmath>

// import random number generator
#include <random>


int main() {
  // variable for random number genarator
  int someRandomNumber;

  std::random_device rseed;

  // ask user for a number 1-9
  std::cout << "guess a number between 0-9 ";
  int input_number;
  std::cin >> input_number;

  // set random number range
  std::mt19937 rgen(rseed());  // mersenne_twister
  std::uniform_int_distribution<int> idist(0, 9);  // [0, 9]

  // check if the user guessed the right number
  // and display the answer
  someRandomNumber = idist(rgen);
  if (input_number  == someRandomNumber) {
      std::cout << "you guessed it right!" << std::endl;

  } else {
      std::cout << "you guessed it wrong. The right number was "
      << someRandomNumber << std::endl;
  }
  }
