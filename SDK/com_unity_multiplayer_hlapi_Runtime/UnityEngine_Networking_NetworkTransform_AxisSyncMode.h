#pragma once
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	enum struct NetworkTransform_AxisSyncMode : int32_t
	{
		None = static_cast<int32_t>(0x0),
		AxisX = static_cast<int32_t>(0x1),
		AxisY = static_cast<int32_t>(0x2),
		AxisZ = static_cast<int32_t>(0x3),
		AxisXY = static_cast<int32_t>(0x4),
		AxisXZ = static_cast<int32_t>(0x5),
		AxisYZ = static_cast<int32_t>(0x6),
		AxisXYZ = static_cast<int32_t>(0x7),
	};
}

