#pragma once
namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking
{
	enum struct UnityWebRequest_UnityWebRequestMethod : int32_t
	{
		Get = static_cast<int32_t>(0x0),
		Post = static_cast<int32_t>(0x1),
		Put = static_cast<int32_t>(0x2),
		Head = static_cast<int32_t>(0x3),
		Custom = static_cast<int32_t>(0x4),
	};
}

