#ifndef STATISTICS_H__
#define STATISTICS_H__


class Statistics
{
  typedef double value_type;
  typedef unsigned int size_type;

Statistics();
void mean(value_type value);

  void random_generate() const;
  void mean () const;
  void stddev ();

private:
  value_type *array;
  size_type no_elemnts;

}
#endif
