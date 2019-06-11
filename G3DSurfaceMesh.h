/**
 surfaceMesh for G3D
*/

#ifndef __G3DSURFACEMESH_H__
#define __G3DSURFACEMESH_H__

#include "G3DHalfEdgeDataSet.h"

NAMESPACE_G3D_START

template<typename BaseType>
class G3DSurfaceMesh
{
public:
	using HDS = G3DHalfEdgeDataSet<BaseType>;
	using HalfEdgeType = typename HDS::HalfEdgeType;
	using VertexType = typename HDS::VertexType;
	using FaceType = typename HDS::FaceType;
	using HalfEdgeVec = typename HDS::HalfEdgeVec;
	using VertexVec = typename HDS::VertexVec;
	using FaceVec = typename HDS::FaceVec;

private:
	HDS m_HDS;
};
//#include "G3DSurfaceMesh.inl"

NAMESPACE_G3D_END

#endif //!__G3DSURFACEMESH_H__
