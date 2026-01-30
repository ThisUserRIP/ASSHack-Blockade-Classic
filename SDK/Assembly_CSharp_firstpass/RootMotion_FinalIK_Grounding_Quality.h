#pragma once
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	enum struct Grounding_Quality : int32_t
	{
		Fastest = static_cast<int32_t>(0x0),
		Simple = static_cast<int32_t>(0x1),
		Best = static_cast<int32_t>(0x2),
	};
}

