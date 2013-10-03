#ifndef DISK_H
#define DISK_H
#include "triMesh.h"

class Disk : public TriMesh
{
public:
    Disk(double r=1 ,double nbVectrices=200);
    virtual ~Disk();
};

#endif // DISK_H
