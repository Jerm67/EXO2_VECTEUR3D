#pragma once
#include "CVect2d.h"

class CVect3D : public CVect2D {

private:
	float m_flt_z;

protected:

public:

	//Constructeur par défaut
	//CVect3D();
	CVect3D(float x = 1, float y = 2, float z = 3);

	//Destructeur
	~CVect3D();

	//Constructeur de copie
	CVect3D(CVect3D& p);

	//Accesseur
	float getZ();

	//Mutateur
	void setZ(float z);

	//Surcharge opérateur

	//avec +
	CVect3D operator +(CVect3D& p)const;

	//avec -
	CVect3D operator -(CVect3D& p)const;

	//avec *
	CVect3D operator *(CVect3D& p)const;

	//avec /
	CVect3D operator /(CVect3D& p);

	void affiche()const;



};