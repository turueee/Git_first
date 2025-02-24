
#include "MyBirch.h"

Birch::Birch()
{
  height = 1;
  numberOfBranches = 0;
  numberOfLeaves = nullptr;
}

Birch::Birch(double height_)
{
  int i = 0;
  if (height_ < 0)
  {
    throw(31);
    height_ = 1;
  }
  else{
    height = height_;
    numberOfBranches = 0;
    numberOfLeaves = nullptr;
  }

}

Birch::Birch(double height_, int numberOfBranches_, int* numberOfLeaves_)
{
  if (height_ <= 0)
    height_ = 1;
  height = height_;
  if (numberOfBranches_ < 0)
    numberOfBranches_ = 0;
  numberOfBranches = numberOfBranches_;
  if (numberOfLeaves_<0)
    numberOfLeaves_ = nullptr;
  numberOfLeaves = numberOfLeaves_;
}

Birch::Birch(const Birch& p)
{
  height = p.height;
  if (p.height <= 0)
    height = 1;
  numberOfBranches = p.numberOfBranches;
  *numberOfLeaves = *p.numberOfLeaves;
}




Birch::~Birch()
{
  height = 1;
  numberOfBranches = 0;
  numberOfLeaves = nullptr;
}

double Birch::GetHeight()
{
  return this->height;
}

int Birch::GetNumberOfBranches()
{
  return this->numberOfBranches;
}

int* Birch::GetNumberOfLeaves()
{
  return this->numberOfLeaves;
}

void Birch::SetHeight(double height_)
{
  if (height_ <= 0)
    height_ = 1;
  this->height = height_;
}

void Birch::SetNumberOfBranches(int numberOfBranches_)
{
  this->numberOfBranches = numberOfBranches_;
}

void Birch::SetNumberOfLeaves(int* numberOfBranches_)
{
  this->numberOfLeaves = numberOfBranches_;
}

std::ostream& operator<<(std::ostream& o, Birch& b)
{
  o << "Height " << b.height << std::endl << "Number of branches " << b.numberOfBranches << std::endl << "Number of leaves " << b.numberOfLeaves << std::endl;
  return o;
}

std::istream& operator>>(std::istream& i, Birch& b)
{
  i >> b.height >> b.numberOfBranches >> *b.numberOfLeaves;
  return i;
}
