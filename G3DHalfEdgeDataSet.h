/**
 HalfEdgeDataSet for G3D
 include : 
	HalfEdgeVec
	VertexVec
	FaceVec
*/

#ifndef __G3DHALFEDGEDATASET_H_
#define __G3DHALFEDGEDATASET_H_

#include "G3DMeshBaseType.h"

NAMESPACE_G3D_START

template<typename BaseType>
class G3DHalfEdgeDataSet
{
public:
	using HalfEdgeType = Halfedge<BaseType>;
	using VertexType = Vertex<BaseType>;
	using FaceType = Face<BaseType>;
	using HalfEdgeVec = std::vector<HalfEdgeType>;
	using VertexVec = std::vector<VertexType>;
	using FaceVec = std::vector<FaceType>;

	G3DHalfEdgeDataSet() {};

private:
	HalfEdgeVec m_halfEdegVec;
	VertexVec m_vertexVec;
	FaceVec m_faceVec;
};

NAMESPACE_G3D_END

#endif //!__G3DHALFEDGEDATASET_H_
