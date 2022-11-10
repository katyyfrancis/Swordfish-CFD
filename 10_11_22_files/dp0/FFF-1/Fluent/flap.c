/* flap.c */
/* UDF for specifying a simple harmonic motion */
/* ********************************************/

#include "udf.h"
# define Freq 5.0
# define angular_freq 2.0*M_PI*Freq
# define tetmax 5.0*M_PI/180

DEFINE_CG_MOTION(shm, dt, cg_vel, cg_omega, time, dtime)
{
	real omega;

omega = tetmax*angular_freq*cos(angular_freq*time);

	cg_vel[0] = 0.0;
	cg_vel[1] = 0.0;
	cg_vel[2] = 0.0;

	cg_omega[0] = 0.0;
	cg_omega[1] = 0.0;
	cg_omega[2] = omega;
}