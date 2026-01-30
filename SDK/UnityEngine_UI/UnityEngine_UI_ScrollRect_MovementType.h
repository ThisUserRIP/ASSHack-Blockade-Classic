#pragma once
namespace UnityEngine_UI::UnityEngine::UI
{
	enum struct ScrollRect_MovementType : int32_t
	{
		Unrestricted = static_cast<int32_t>(0x0),
		Elastic = static_cast<int32_t>(0x1),
		Clamped = static_cast<int32_t>(0x2),
	};
}

