#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct DrivenTransformProperties : int32_t
	{
		None = static_cast<int32_t>(0x0),
		All = static_cast<int32_t>(0xFFFFFFFF),
		AnchoredPositionX = static_cast<int32_t>(0x2),
		AnchoredPositionY = static_cast<int32_t>(0x4),
		AnchoredPositionZ = static_cast<int32_t>(0x8),
		Rotation = static_cast<int32_t>(0x10),
		ScaleX = static_cast<int32_t>(0x20),
		ScaleY = static_cast<int32_t>(0x40),
		ScaleZ = static_cast<int32_t>(0x80),
		AnchorMinX = static_cast<int32_t>(0x100),
		AnchorMinY = static_cast<int32_t>(0x200),
		AnchorMaxX = static_cast<int32_t>(0x400),
		AnchorMaxY = static_cast<int32_t>(0x800),
		SizeDeltaX = static_cast<int32_t>(0x1000),
		SizeDeltaY = static_cast<int32_t>(0x2000),
		PivotX = static_cast<int32_t>(0x4000),
		PivotY = static_cast<int32_t>(0x8000),
		AnchoredPosition = static_cast<int32_t>(0x6),
		AnchoredPosition3D = static_cast<int32_t>(0xE),
		Scale = static_cast<int32_t>(0xE0),
		AnchorMin = static_cast<int32_t>(0x300),
		AnchorMax = static_cast<int32_t>(0xC00),
		Anchors = static_cast<int32_t>(0xF00),
		SizeDelta = static_cast<int32_t>(0x3000),
		Pivot = static_cast<int32_t>(0xC000),
	};
}

