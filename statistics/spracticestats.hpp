#ifndef STATISTICS_H__
#define STATISTICS_H__


class Statistics
{
  typedef double value_type;
  typedef unsigned int size_type;

Statistics();
void add(value_type value);

  size_type number () const;
  value_type mean () const;
  value_type stddev (value_type value);

private:
  value_type sum1, sum2;
  size_type n;

}
#endif
