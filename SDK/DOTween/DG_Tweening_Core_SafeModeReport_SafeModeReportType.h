#pragma once
namespace DOTween::DG::Tweening::Core
{
	enum struct SafeModeReport_SafeModeReportType : int32_t
	{
		Unset = static_cast<int32_t>(0x0),
		TargetOrFieldMissing = static_cast<int32_t>(0x1),
		Callback = static_cast<int32_t>(0x2),
		StartupFailure = static_cast<int32_t>(0x3),
	};
}

