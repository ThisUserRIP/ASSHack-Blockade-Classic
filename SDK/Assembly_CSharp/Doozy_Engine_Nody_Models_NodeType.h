#pragma once
namespace Assembly_CSharp::Doozy::Engine::Nody::Models
{
	enum struct NodeType : int32_t
	{
		Start = static_cast<int32_t>(0x0),
		Enter = static_cast<int32_t>(0x1),
		Exit = static_cast<int32_t>(0x2),
		SubGraph = static_cast<int32_t>(0x3),
		General = static_cast<int32_t>(0x4),
		Global = static_cast<int32_t>(0x5),
	};
}

