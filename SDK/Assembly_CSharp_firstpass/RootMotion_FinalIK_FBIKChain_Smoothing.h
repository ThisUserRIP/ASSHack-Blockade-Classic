#pragma once
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	enum struct FBIKChain_Smoothing : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Exponential = static_cast<int32_t>(0x1),
		Cubic = static_cast<int32_t>(0x2),
	};
}

