#include  "CVect3D.h"

CVect3D::CVect3D(float x, float y, float z) :CVect2D() {

	this->m_flt_z = z;
}

CVect3D::~CVect3D()
{
}

CVect3D::CVect3D(CVect3D& p)
{
	this->m_flt_z = p.m_flt_z;
}

float CVect3D::getZ()
{
	return this->m_flt_z;
}

void CVect3D::setZ(float z)
{
	this->m_flt_z = z;
}

CVect3D CVect3D::operator+(CVect3D& p) const
{
	CVect3D p_temporaire;
	p_temporaire.setX(this->getX() + p.getX());
	p_temporaire.setY(this->getY() + p.getY());
	p_temporaire.m_flt_z = this->m_flt_z + p.m_flt_z;

	return p_temporaire;
}

CVect3D CVect3D::operator-(CVect3D& p) const
{
	CVect3D p_temporaire;
	p_temporaire.setX(this->getX() - p.getX());
	p_temporaire.setY(this->getY() - p.getY());
	p_temporaire.m_flt_z = this->m_flt_z - p.m_flt_z;

	return p_temporaire;
}

CVect3D CVect3D::operator*(CVect3D& p) const
{
	CVect3D p_temporaire;
	p_temporaire.setX(this->getX() * p.getX());
	p_temporaire.setY(this->getY() * p.getY());
	p_temporaire.m_flt_z = this->m_flt_z * p.m_flt_z;

	return p_temporaire;
}

CVect3D CVect3D::operator/(CVect3D& p) 
{
	CVect3D p_temporaire;
	if (p.getX() != 0 && p.getY() != 0 && m_flt_z != 0) {
		CVect3D p_temporaire;
		p_temporaire.setX(this->getX() / p.getX());
		p_temporaire.setY(this->getY() / p.getY());
		p_temporaire.m_flt_z = this->m_flt_z / p.m_flt_z;

		return p_temporaire;
	}
	return *this;
}

void CVect3D::affiche() const
{
	CVect2D::affiche();
	cout << "Z :" << this->m_flt_z << endl;
}
