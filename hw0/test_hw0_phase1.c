#include <criterion/criterion.h>
#include <math.h>
#include <stdio.h>
#include "hw0.h"

// ======== constants

const double TOL = 0.001;
// TOL is an abbreviation for "tolerance"

// ======== helper functions

int within(double epsilon, double a, double b)
{
  return fabs(a-b)<=epsilon;
}

// ======== tests

// (you can add additional tests as you see fit)

// -------- f2k

Test(hw0_f2k, f2k00)
{
  double k = f2k(32.0);
  cr_assert(within(TOL, k, 273.15));
}

// -------- k2f

Test(hw0_k2f, k2f00)
{
  double f = k2f(10.0);
  cr_assert(within(TOL, f, -441.67));
}

// -------- cylinder_volume

Test(hw0_cvol, cvol00)
{
  cr_assert(within(TOL, cylinder_volume(6.0, 4.0), 452.38896));
}

// -------- cylinder_surface

Test(hw0_csurf, csurf00)
{
  cr_assert(within(TOL, cylinder_surface(6.0, 4.0), 376.9908));
}

