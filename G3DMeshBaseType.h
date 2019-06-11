/**
 HalfEdge for G3D
 HalfEdge
 Vertex
 Face
*/

#ifndef __G3DMESHBASETYPE_H__
#define __G3DMESHBASETYPE_H__

#include <vector>
#include <Eigen/Dense>

#define NAMESPACE_G3D_START namespace G3D {
#define NAMESPACE_G3D_END }

NAMESPACE_G3D_START

template<typename BaseType>
class Halfedge
{
public:
	using PointType = Eigen::Matrix<BaseType, 3, 1>;
	using IndexType = unsigned int;
	using SizeType = size_t;

	Halfedge() {};

private:
	IndexType m_vertexIndex;
	IndexType m_faceIndex;
	IndexType m_halfEdgeNext;
	IndexType m_halfEdgePre;
	IndexType m_halfEdgeOpposite;
};

template<typename BaseType>
class Vertex
{
public:
	using PointType = typename Halfedge<BaseType>::PointType;
	using IndexType = typename Halfedge<BaseType>::IndexType;
	using SizeType = typename Halfedge<BaseType>::SizeType;

	Vertex() {};
	const IndexType GetHalfEdgeIndex() { return m_halfEdgeIndex; }

private:
	IndexType m_halfEdgeIndex;
	PointType m_position;
};

template<typename BaseType>
class Face
{
public:
	using PointType = typename  Halfedge<BaseType>::PointType;
	using IndexType = typename  Halfedge<BaseType>::IndexType;
	using SizeType = typename Halfedge<BaseType>::SizeType;

	Face() {};
	const IndexType GetHalfEdgeIndex() { return m_halfEdgeIndex; }

private:
	IndexType m_halfEdgeIndex;
};

NAMESPACE_G3D_END

#endif //!__G3DMESHBASETYPE_H__
